

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
from _losses import f1,cross_entropy_loss, accuracy
from _block  import b2mts                            # 分块
from _layer_bl import EmbeddingsLayer              # 词向量
from _layer_bl import add_mark_block_relation      # 分块标记
from _layer_bl import add_merge_scale              # 分块标记
from _layer_bl import add_score                    # 分块标记
from _layer_bl import mark_slice                    # 分块标记
from _tool  import init_logging



# path
curPath    = os.path.abspath(os.path.dirname(__file__))
#rootPath  = os.path.split(curPath)[0]
dataPath   = os.path.join(curPath, "data")
#csvPath    = os.path.join(dataPath, "csv")
debugPath  = os.path.join(dataPath, "debug")



class BlockNet(Model):
    debug = False
    # Set layers.
    def __init__(self, max_vocab_len):
        print("--Model--init", max_vocab_len)
        super(BlockNet, self).__init__()
        self.embeddings_layer = EmbeddingsLayer(max_vocab_len)
        self.mark_layer  = keras.layers.Lambda(add_mark_block_relation, output_shape=None, arguments=None)
        self.merge_layer = keras.layers.Lambda(add_merge_scale, output_shape=None, arguments=None)
        self.score_layer = keras.layers.Lambda(add_score, output_shape=None, arguments=None)

    # Set forward pass.
    def call(self, inputs):
        if self.debug:
            print("--Model--call")
        x1, x2, m1, m2, mark1, mark2, block1, block2, scale1, scale2 = inputs
        
        embeddings_m1 = self.embeddings_layer([m1, x1])                    # embeddings_m1 (None, 14, 18)
        embeddings_m2 = self.embeddings_layer([m2, x2])
        mbr_m1 = self.mark_layer([embeddings_m1, mark1, block1])           # mbr_m1 (None, 14, 2, 18)
        mbr_m2 = self.mark_layer([embeddings_m1, mark2, block2])
        merge_m1 = self.merge_layer([mbr_m1, scale1])                      # merge_m1 (None, 18)
        merge_m2 = self.merge_layer([mbr_m2, scale2])
        output = self.score_layer([merge_m1, merge_m2])                    # scale (None, 18)
        
        #output = keras.layers.Dense(36, activation=tf.nn.softmax)(output)     # (None, 32)
        output = keras.layers.Dense(36, activation=tf.nn.relu)(output)     # (None, 32)
        output = keras.layers.Dense(2, activation=tf.nn.sigmoid)(output)   # output (None, 2)

#        output = keras.layers.Dense(units=768, activation="tanh")(output)  # (None, 768)
#        output = keras.layers.Dropout(0.5)(output)                         # (None, 768)
#        output = keras.layers.Dense(units=2, activation="softmax")(output) # output (None, 2)
#        print("--Model--call--logits", output.shape)
        return output

def create_model(max_vocab_len, max_seq_len, h5_file=None, debug=False):
    """Creates a classification model."""
    assert h5_file is not None
    block_net = BlockNet(max_vocab_len)
    x1  = keras.layers.Input(shape=(max_seq_len,), dtype='int64', name="x1")              #字编号
    x2  = keras.layers.Input(shape=(max_seq_len,), dtype='int64', name="x2")   
    m1  = keras.layers.Input(shape=(max_seq_len,), dtype='int64', name="m1")              #类型
    m2  = keras.layers.Input(shape=(max_seq_len,), dtype='int64', name="m2")     
    mark1  = keras.layers.Input(shape=(max_seq_len,2), dtype='int64', name="mark1")        #分块后的mark
    mark2  = keras.layers.Input(shape=(max_seq_len,2), dtype='int64', name="mark2")
    block1  = keras.layers.Input(shape=(max_seq_len,), dtype='int64', name="block1")      #分块后的块ID
    block2  = keras.layers.Input(shape=(max_seq_len,), dtype='int64', name="block2")
    scale1  = keras.layers.Input(shape=(max_seq_len,), dtype='float32', name="scale1")    #分块后的块权重
    scale2  = keras.layers.Input(shape=(max_seq_len,), dtype='float32', name="scale2")
  
    output = block_net([x1, x2, m1, m2, mark1, mark2, block1, block2, scale1, scale2])
  
    model = keras.Model(inputs=[x1, x2, m1, m2, mark1, mark2, block1, block2, scale1, scale2], outputs=output)
    model.build(input_shape=[(None, max_seq_len), (None, max_seq_len),
                             (None, max_seq_len), (None, max_seq_len), 
                             (None, max_seq_len, 2), (None, max_seq_len, 2), 
                             (None, max_seq_len), (None, max_seq_len), 
                             (None, max_seq_len), (None, max_seq_len)])
  
    if os.path.exists(h5_file.format(max_vocab_len)) or os.path.isfile(h5_file.format(max_vocab_len)):
        model.load_weights(h5_file.format(max_vocab_len))
  
    model.compile(optimizer=keras.optimizers.Adam(),
                  loss=keras.losses.SparseCategoricalCrossentropy(from_logits=True),
                  metrics=[accuracy, f1])
#                  metrics=[keras.metrics.SparseCategoricalAccuracy(name="acc"), f1])
  
    model.summary()
    
    if debug:
        init_logging(debugPath)
        BlockNet.debug = False
        EmbeddingsLayer.debug = True
    return model




