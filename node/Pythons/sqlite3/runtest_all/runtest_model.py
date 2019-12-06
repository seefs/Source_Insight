

import sys
import os
import tensorflow as tf
import numpy as np
import copy

from sklearn.metrics import f1_score
from tensorflow import keras
from tensorflow.keras.preprocessing.text import Tokenizer
from tensorflow.keras.preprocessing.sequence import pad_sequences

# path
curPath  = os.path.abspath(os.path.dirname(__file__))
rootPath = os.path.split(curPath)[0]
dataPath = os.path.join(rootPath, "data")
modelPath = os.path.join(dataPath, "model")
csvPath  = os.path.join(dataPath, "csv")

# file
h5_file      = os.path.join(modelPath, "atec_nlp_calc_{}.h5")

# cfg
sys.path.append(rootPath)

# Custom Class
from _loader import LoadData, save_pred_result
#from _token import TokenizerChg
from _losses import f1, expand_dims_f1, cross_entropy_loss, accuracy
from _model import create_model



def run_block_model():
    data = LoadData(sample_size=None, train_enable=True, test_enable=False)
#    data = LoadData(sample_size=None, train_enable=False, test_enable=True)
    data.show_data_shape()
    
    ### model
    # 初始化logging
    debug           = False
    # 训练用旧指标(mean)
    # 预测用混合指标, 新指标(max)为False才用旧指标(mean)
#    mean='mean'
#    mean='max'
    mean='max_mean'
    # 保存比较值(np), 用于外部调参
    #   开debug, 代码走call
    save_data       = True
    model = create_model(data.max_vocab_len, data.max_seq_len, data.max_modes_len, h5_file=h5_file, debug=debug, mean=mean, save_data=save_data)

    if data.train_enable:
        if debug:
            # 这样才能打logging
            pred = model([data.get_train_data()])
        else:
            # 速度快
            pred = model.predict(data.get_train_data())
        loss = cross_entropy_loss(pred, data.train_y)
        print ("  pred--loss: %s" % (loss))
        acc = accuracy(data.train_y, pred)
        print ("  pred--acc:  %s" % (acc))
        f1_score = expand_dims_f1(data.train_y, pred)
        print ("  pred--f1:   %s" % (f1_score))
        res_string = 'loss=%s,   acc=%s,   f1_score=%s'%(np.array(loss), np.array(acc), np.array(f1_score))
        save_pred_result(data.train_t1, data.train_t2, pred, data.train_y, res_string, name='train_calc')
        
#    if data.test_enable:
#        if debug:
#            pred = model.predict(data.get_test_data())
#        else:
#            pred = model([data.get_test_data()])
#        loss = cross_entropy_loss(pred, data.test_y)
#        print ("  pred--loss: %s" % (loss))
#        acc = accuracy(data.test_y, pred)
#        print ("  pred--acc:  %s" % (acc))
#        f1_score = expand_dims_f1(data.test_y, pred)  # 用f1有问题
#        print ("  pred--f1:   %s" % (f1_score))
#        res_string = 'loss=%s,   acc=%s,   f1_score=%s'%(np.array(loss), np.array(acc), np.array(f1_score))
#        save_pred_result(data.test_t1, data.test_t2, pred, data.test_y, res_string, name='test_calc')
    

run_block_model()





