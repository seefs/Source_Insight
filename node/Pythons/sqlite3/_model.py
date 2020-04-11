

import os
import re
import math
import chardet
import datetime
from tqdm import tqdm
import random
import logging

import pandas as pd
import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import Model, layers
from keras import backend as K
import numpy as np
import copy

# Custom Class
from _loader import save_debug_data
from _losses import f1,accuracy
from _layer import EmbeddingsLayer 
from _layer import brd_mean, brd_max, brd_max_mean
from _layer import brd_compare, brd_concat
from _tool  import init_logging


# path
curPath    = os.path.abspath(os.path.dirname(__file__))
#rootPath  = os.path.split(curPath)[0]
dataPath   = os.path.join(curPath, "data")
debugPath  = os.path.join(dataPath, "debug")



class BlockNet(Model):
    save_data = False
    # Set layers.
    def __init__(self, max_vocab_len, max_seq_len, max_modes_len, mean='mean'):
#        print("--Model--init", max_vocab_len, max_seq_len)
        super(BlockNet, self).__init__()
        self.embeddings_layer = EmbeddingsLayer(max_vocab_len, max_modes_len)
        self.compare_layer  = keras.layers.Lambda(brd_compare, output_shape=None, arguments=None)
        self.mean_layer     = keras.layers.Lambda(brd_mean, output_shape=None, arguments=None)
        self.max_layer      = keras.layers.Lambda(brd_max, output_shape=None, arguments=None)
        self.max_mean_layer = keras.layers.Lambda(brd_max_mean, output_shape=None, arguments=None)
        self.concat_layer   = keras.layers.Lambda(brd_concat, output_shape=None, arguments=None)
        #
        self.mean_type   = mean
    
    # Set forward pass.
    def call(self, inputs):
        x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2 = inputs
        
        board1 = self.embeddings_layer([x1, mi1, m1, n1, cnt1])              # embeddings_m1 (None, 14, 18)
        board2 = self.embeddings_layer([x2, mi2, m2, n2, cnt2])
        output = self.compare_layer([board1, board2])
        
        if BlockNet.save_data:
            # 保存比较值, 用于外部调参
            save_debug_data(np.array(output), name='brd_sum')

        if self.mean_type=='mean':
            output = self.mean_layer(output)
        elif self.mean_type=='max':
            # 验证模型, 用不同的指标
            #   直接混合, 新指标(max)为False才用旧指标(mean)
            output = self.max_layer(output)
        elif self.mean_type=='max_mean':
            #   渐进混合, 小中取大, 大中去小
            #   旧指标(mean)小于0.5时--新指标(max)添加最大值:
            #   旧指标(mean)大于0.5时--新指标(max)去掉最小值:
            output = self.max_mean_layer(output)
        else:
            output = self.mean_layer(output)
        output = self.concat_layer(output)
        
        return output

def create_model(max_vocab_len, max_seq_len, max_modes_len, h5_file=None, debug=False, mean='mean', save_data=False):
    """Creates a classification model."""
    assert h5_file is not None
    block_net = BlockNet(max_vocab_len, max_seq_len, max_modes_len, mean=mean)
    x1   = keras.layers.Input(shape=(max_seq_len,), dtype='int32', name="x1")         #词编号
    x2   = keras.layers.Input(shape=(max_seq_len,), dtype='int32', name="x2")   
    m1   = keras.layers.Input(shape=(max_seq_len,), dtype='int32', name="m1")         #类型
    m2   = keras.layers.Input(shape=(max_seq_len,), dtype='int32', name="m2")     
    mi1  = keras.layers.Input(shape=(max_seq_len,), dtype='int32', name="mi1")        #类型在隐藏类型中的id
    mi2  = keras.layers.Input(shape=(max_seq_len,), dtype='int32', name="mi2")
    n1   = keras.layers.Input(shape=(max_modes_len,), dtype='int32', name="n1")       #类型+隐藏类型
    n2   = keras.layers.Input(shape=(max_modes_len,), dtype='int32', name="n2")
    cnt1 = keras.layers.Input(shape=(1,), dtype='int32', name="cnt1")
    cnt2 = keras.layers.Input(shape=(1,), dtype='int32', name="cnt2")
  
    output = block_net([x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2])
  
    model = keras.Model(inputs=[x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2], outputs=output)
    model.build(input_shape=[(None, max_seq_len), (None, max_seq_len),
                             (None, max_seq_len), (None, max_seq_len), 
                             (None, max_seq_len), (None, max_seq_len), 
                             (None, max_modes_len), (None, max_modes_len), 
                             (None, 1), (None, 1), 
                             (None, 1), (None, 1)])

    if h5_file is not None:
        if os.path.exists(h5_file.format(max_vocab_len)) or os.path.isfile(h5_file.format(max_vocab_len)):
            model.load_weights(h5_file.format(max_vocab_len))
    model.compile(optimizer=keras.optimizers.Adam(),
                  loss=keras.losses.SparseCategoricalCrossentropy(from_logits=True),
                  metrics=[accuracy, f1])
#                  metrics=[keras.metrics.SparseCategoricalAccuracy(name="acc"), f1])
  
#    if debug:
#        model.summary()
        
    init_logging(debugPath)
    
    if debug:
        EmbeddingsLayer.debug = True
    else:
        EmbeddingsLayer.debug = False
    ###
    BlockNet.save_data   = save_data
    return model




