

from __future__ import absolute_import, division, print_function

import os
import re
import math
import chardet
import datetime
from tqdm import tqdm
import random

import pandas as pd
import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import Model, layers
from keras import backend as K
import numpy as np
import copy

# Custom Class
from _loader import LoadData, save_pred_result
from _token  import TokenizerChg
from _losses import f1, cross_entropy_loss, accuracy, create_learning_rate_scheduler
from _model import create_model


# In[1]:

# path
curPath   = os.path.abspath(os.path.dirname(__file__))
#rootPath = os.path.split(curPath)[0]
dataPath  = os.path.join(curPath, "data")
log_dir   = os.path.join(dataPath,  "log")
modelPath = os.path.join(dataPath, "model")

# file
h5_file      = os.path.join(modelPath, "atec_nlp_{}.h5")

# create dir
if not os.path.exists(log_dir) or not os.path.isdir(log_dir):
    os.mkdir(log_dir)
if not os.path.exists(modelPath) or not os.path.isdir(modelPath):
    os.mkdir(modelPath)



# In[2]:

#data = LoadData(sample_size=None, train_enable=True, test_enable=True)
data = LoadData(sample_size=None, train_enable=True, test_enable=False)
data.show_data_shape()


# In[3]:

block_model = create_model(data.max_vocab_len, data.max_seq_len, data.max_modes_len, h5_file=h5_file, debug=True, mean='mean', save_data=False)

# Training Parameters
total_epoch_count = 1 #200
batch_size        = 30
#display_step      = 1

callbacks = [ 
    create_learning_rate_scheduler(max_learn_rate=1e-3,
        end_learn_rate=1e-5,
        warmup_epoch_count=10,
        total_epoch_count=total_epoch_count),
    keras.callbacks.EarlyStopping(patience=20, restore_best_weights=True), 
    keras.callbacks.TensorBoard(log_dir=log_dir)
]

#print("data", data.get_train_data())

block_model.fit(x=data.get_train_data(),
          y=data.train_y, 
          #validation_data=[data.get_test_data(), data.test_y], 
          validation_split=0.1,
          batch_size=batch_size,
          shuffle=True,
          epochs=total_epoch_count,
          callbacks=callbacks)

block_model.save_weights(h5_file.format(data.max_vocab_len), overwrite=True)



# In[4]:


# 验证(训练ok后再打开)
#if data.train_enable:
#    _, train_acc, train_f1 = block_model.evaluate(data.get_train_data(), data.train_y)
#    print(" eval--train acc", train_acc)
#    print(" eval--train f1", train_f1)
#    
#if data.test_enable:
#    _, test_acc, test_f1  = block_model.evaluate(data.get_test_data(), data.test_y)
#    print(" eval--test acc", test_acc)
#    print(" eval--test f1", test_f1)



# In[5]:

# 加载weights再次验证(不用)
#new_model = create_model(data.max_vocab_len, data.max_seq_len, h5_file=h5_file, debug=False, mean='mean', save_data=False)
#new_model.load_weights(h5_file.format(data.max_vocab_len))
#if data.train_enable:
#    _, train_acc, train_f1 = block_model.evaluate(data.get_train_data(), data.train_y)
#    print("train acc", train_acc)
#    print("train f1", train_f1)
#if data.test_enable:
#    _, test_acc, test_f1  = block_model.evaluate(data.get_test_data(), data.test_y)
#    print(" test acc", test_acc)
#    print(" test f1", test_f1)





