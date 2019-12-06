

import sys
import os
import tensorflow as tf
import numpy as np
import copy
import collections
import logging

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
h5_file      = os.path.join(modelPath, "{}", "atec_nlp_calc_{}.h5")

# cfg
sys.path.append(rootPath)

# Custom Class
from _loader import LoadData, save_debug_data
#from _token import TokenizerChg
from _losses import f1, expand_dims_f1, cross_entropy_loss, accuracy
from _model import create_model



# test_w--1
#   公共替换 效果
def get_data(sub_path=''): 
    data = LoadData(sub_path=sub_path, sample_size=None, train_enable=True, test_enable=False)
    # data.show_data_shape()
    return data

def get_model(data, sub_path=''): 
    # model1
    tmp_h5_file = h5_file.format(sub_path, data.max_vocab_len)
    model = create_model(data.max_vocab_len, data.max_seq_len, data.max_modes_len, h5_file=tmp_h5_file, debug=False, mean='mean', save_data=False)
    return model

def get_weights(model): 
    weights = np.array(model.get_weights())
    return weights
    
def set_weights(model, weights): 
    model.set_weights(weights)

def load_vocab(tokens):
    ## 可用这个代替: data2.tokenizer.word_index
    vocab = collections.OrderedDict()
    index = 0
    for token in tokens:
        vocab[token] = index
        index += 1
    return vocab

def merge_weights(data1, data2, weights1, weights2):
    vocab1 = load_vocab(data1._token_arr)
    vocab2 = load_vocab(data2._token_arr)
    # shape=[423]
    # shape=[468]
    
    wp,wv=[],[]
    #id 错位.
    wid = 0
    wp.append(weights1[0,0,:])
    wv.append(weights1[1,0,:])
    for i in range(len(data1._token_arr)):
        token1 = data1._token_arr[i]
        if token1 in vocab2:
            # id 错位.
            wid = vocab2[token1]+1
            wp.append(weights2[0,wid,:])
            wv.append(weights2[1,wid,:])
        else:
            wid = i
            wp.append(weights1[0,wid,:])
            wv.append(weights1[1,wid,:])
    w=[]
    w.append(wp)
    w.append(wv)
    return w

def model_predict(model, data):
    if data.train_enable:
        pred = model.predict(data.get_train_data())
        loss = cross_entropy_loss(pred, data.train_y)
        print ("  pred--loss: %s" % (loss))
        acc = accuracy(data.train_y, pred)
        print ("  pred--acc:  %s" % (acc))
        f1_score = expand_dims_f1(data.train_y, pred)
        print ("  pred--f1:   %s" % (f1_score))
        
    if data.test_enable:
        pred = model.predict(data.get_train_data())
        loss = cross_entropy_loss(pred, data.test_y)
        print ("  pred--loss: %s" % (loss))
        acc = accuracy(data.test_y, pred)
        print ("  pred--acc:  %s" % (acc))
        f1_score = expand_dims_f1(data.test_y, pred)  # 用f1有问题
        print ("  pred--f1:   %s" % (f1_score))

def run_weights_merge(): 
    # 1
    sub_path1 = '_tf200_2_f1_0.529'
    data1  = get_data(sub_path=sub_path1)
    model1 = get_model(data1, sub_path=sub_path1)
    weights1 = get_weights(model1)
    # shape=[2 424  17]

    # 2
    sub_path2 = '_tf200_1_f1_0825'
    data2 = get_data(sub_path=sub_path2)
    model2 = get_model(data2, sub_path=sub_path2)
    weights2 = get_weights(model2)
    # shape=[2 469  17]

    # 合并
    w = merge_weights(data1, data2, weights1, weights2)
    print ("  w:  %s" % (tf.shape(w)))
    # shape=[2 424  17]
    
    #
    #save_debug_data(weights2[0], name='weights_1')

    print ("参数替换前:")
    ### 效果:
    ###   acc:0.529  f1:0.5294117
    model_predict(model1, data1)
    
    set_weights(model1, w)
    
    print ("参数替换后:")
    model_predict(model1, data1)
    ### 效果:
    ###   acc:0.63  f1:0.597826
    
    ### 保存到新h5, 手动覆盖
#    tmp_h5_file = h5_file.format(sub_path1, 'tmp')
#    model1.save_weights(tmp_h5_file, overwrite=True)

#run_weights_merge()


# test_w--2
#   部分替换 效果
def get_common_weights(data, weights, cnt=1):
    num_list = data.token_chg.tokens_parsing_category_from_db(data._token_arr)
    num_list = np.array(num_list)
    
    #print ("  num_list:  %s" % (num_list))
    #num_list:  ['5' '2' '14' ... '3' '0' '3']
    
    w_dict = {}
    max_len = len(num_list)
    for cx_id in range(17):
        _cnt = 0
        ni = 0
        while _cnt<cnt and ni<max_len:
            cx = num_list[ni]
            if int(cx) == cx_id:
                #id 错位. weights长度大于1
                p_key = 'p_'+str(cx_id)+'_'+str(_cnt)
                w_dict[p_key] = weights[0, ni+1, :]
                
                v_key = 'v_'+str(cx_id)+'_'+str(_cnt)
                w_dict[v_key] = weights[1, ni+1, :]
                _cnt += 1
            ni += 1
    return w_dict
    
def set_common_weights(data, w_dict, index=0):
    num_list = data.token_chg.tokens_parsing_category_from_db(data._token_arr)
    num_list = np.array(num_list)
    
    #print ("  num_list:  %s" % (num_list))
    #num_list:  ['5' '2' '14' ... '3' '0' '3']
    
    wp,wv=[],[]
    #id 错位. 
    p_key = 'p_0_'+str(index)
    wp.append(w_dict.get(p_key, []))
    v_key = 'v_0_'+str(index)
    wv.append(w_dict.get(p_key, []))
    
    max_len = len(num_list)
    for ni in range(max_len):
        cx = num_list[ni]
        if int(cx)<17 and int(cx)>=0:
            p_key = 'p_'+str(cx)+'_'+str(index)
            wp.append(w_dict.get(p_key, []))
            v_key = 'v_'+str(cx)+'_'+str(index)
            wv.append(w_dict.get(p_key, []))
        else:
            p_key = 'p_0_'+str(index)
            wp.append(w_dict.get(p_key, []))
            v_key = 'v_0_'+str(index)
            wv.append(w_dict.get(p_key, []))
    w=[]
    w.append(wp)
    w.append(wv)
    return np.array(w)

def run_weights_set(): 
    # 1
#    用未训练集, 是0.67:
    sub_path1 = '_tf200_2_f1_0529'
#    用已训练集, 还是0.67:
#    sub_path1 = ''
    data1  = get_data(sub_path=sub_path1)
    model1 = get_model(data1, sub_path=sub_path1)
    weights1 = get_weights(model1)
    # shape=[2 424  17]

    # 2
    sub_path2 = '_tf200_1_f1_0825'
    data2 = get_data(sub_path=sub_path2)
    model2 = get_model(data2, sub_path=sub_path2)
    weights2 = get_weights(model2)
    # shape=[2 469  17]

    # 公共
    w_dict = get_common_weights(data2, weights2, cnt=1)
    #print ("  w_dict:  %s" % (w_dict))

    # 合并
    w = set_common_weights(data1, w_dict, index=0)
    print ("  w:  %s" % (tf.shape(w)))
    # shape=[2 424  17]

    # 保存词典--用于其他数据集
    # 保存不了....
    #save_debug_data(w_dict, name='weights_1')

    print ("参数替换前:")
    ### 效果:
    ###   acc:0.529  f1:0.5294117
    model_predict(model1, data1)
    
    set_weights(model1, w)
    
    print ("参数替换后:")
    model_predict(model1, data1)
    ### 全替换 效果:
    ###   acc:0.60  f1:0.6694214
    ### 部分替换 效果:
    ###   acc:0.63  f1:0.597826

    ### 保存到新h5, 手动覆盖
    tmp_h5_file = h5_file.format(sub_path1, 'tmp')
    model1.save_weights(tmp_h5_file, overwrite=True)


run_weights_set()



# test_w--3
#   公共+部分替换 效果
def run_weights_merge_set(): 
    # 1
    sub_path1 = '_tf200_2_f1_0529'
    data1  = get_data(sub_path=sub_path1)
    model1 = get_model(data1, sub_path=sub_path1)
    weights1 = get_weights(model1)
    # shape=[2 424  17]

    # 2
    sub_path2 = '_tf200_1_f1_0825'
    data2 = get_data(sub_path=sub_path2)
    model2 = get_model(data2, sub_path=sub_path2)
    weights2 = get_weights(model2)
    # shape=[2 469  17]

    # 公共--get
    w_dict = get_common_weights(data2, weights2)
    #print ("  w_dict:  %s" % (w_dict))

    # 公共--set
    w = set_common_weights(data1, w_dict, index=0)
    print ("  w:  %s" % (tf.shape(w)))
    # err shape=[2 415  17]
    # or  shape=[2 424  17]

    # 合并--公共w与weights2
    w = merge_weights(data1, data2, w, weights2)
    print ("  w:  %s" % (tf.shape(w)))
    # shape=[2 424  17]

    #
    #save_debug_data(weights2[0], name='weights_1')

    print ("参数替换前:")
    ### 效果:
    ###   acc:0.529  f1:0.5294117
    model_predict(model1, data1)
    
    set_weights(model1, w)
    
    print ("参数替换后:")
    model_predict(model1, data1)
    ### 公共替换 效果:
    ###   acc:0.60  f1:0.6694214
    ### 部分替换 效果:
    ###   acc:0.63  f1:0.597826
    ### 公共+部分替换 效果:
    ###   acc:0.64  f1:0.60869557


#run_weights_merge_set()



