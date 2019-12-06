
# -*- coding: utf-8 -*-
import tensorflow as tf
import numpy as np
import pandas as pd
from tensorflow.python import keras
from tensorflow.python.keras import backend as K

from keras.datasets import reuters
from keras.utils.np_utils import to_categorical
#from keras import models
#from keras import layers
#import matplotlib.pyplot as plt

from tensorflow.keras.preprocessing.text import Tokenizer
from tensorflow.keras.preprocessing.sequence import pad_sequences


#one_hot_train_labels = to_categorical(train_labels)
#one_hot_test_labels = to_categorical(test_labels)

text = 'aaa,bbb,ccc,aaa,bbb'
label = keras.preprocessing.text.one_hot(text,
                 4,
                 filters='!"#$%&()*+,-./:;<=>?@[\]^_`{|}~\t\n',
                 lower=True,
                 split=",")
print('\nlabel = ', label)
# 编号乱了
#    label =  [3, 3, 1, 3, 3]


label = keras.preprocessing.text.Tokenizer(num_words=None,
                   filters='!"#$%&()*+,-./:;<=>?@[\]^_`{|}~\t\n',
                   lower=True,
                   split=" ",
                   char_level=False)
print('\nlabel = ', label)
# 
#    label =  <keras_preprocessing.text.Tokenizer object at 0x00000000028EF208>



train = 'aaa,bbb,ccc,aaa,bbb'.split(',')
train2 = 'aaa,bb2,cc2,aaa,bbb'.split(',')
tokenizer = Tokenizer(num_words=None)
tokenizer.fit_on_texts(train)
tokenizer.fit_on_texts(train2)
sequences = tokenizer.texts_to_sequences(train)
print('\ntrain = ', train)
print('sequences = ', sequences)
sequences = tokenizer.texts_to_sequences(train2)
print('\ntrain = ', train2)
print('sequences = ', sequences)
train_features = pad_sequences(sequences, maxlen=15)
print('features = ', train_features)
# 编号
#    train =  ['aaa', 'bbb', 'ccc', 'aaa', 'bbb']
#    sequences =  [[1], [2], [3], [1], [2]]
#    features =  [[0 0 0 0 0 0 0 0 0 0 0 0 0 0 1]
#     [0 0 0 0 0 0 0 0 0 0 0 0 0 0 2]
#     [0 0 0 0 0 0 0 0 0 0 0 0 0 0 3]
#     [0 0 0 0 0 0 0 0 0 0 0 0 0 0 1]
#     [0 0 0 0 0 0 0 0 0 0 0 0 0 0 2]]


