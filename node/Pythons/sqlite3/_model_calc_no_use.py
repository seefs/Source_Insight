

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
from _block  import b2mts                            # 分块
from _block  import _m_to_mts                            # 分块




def modes_calc(_Aa, debug_mc_log=False):
# 模式对齐:
    if debug_mc_log:
        print("calc input:\n    %s" % (_Aa.get_shape()))
    _b_mul = []
    for i in range(len(_Aa)):                # (5, 9)
        _row1 = _Aa[i-1]                     # (9)
        _row2 = _Aa[i]                       # (9)
        _mul = tf.multiply(_row1, _row2)     # (9)
        _b_mul.append(_mul)                  # (5, 9)
        if debug_mc_log:
            print("    pre:%s, next:%s, mul:%s" % (_row1.get_shape(), _row2.get_shape(), _mul.get_shape()))
    _mean  = tf.reduce_mean(_b_mul, axis=0)  # (9)
    _mid   = tf.reduce_mean(_mean)           # (1)
    output = _mean/_mid                      # (9)
    if debug_mc_log:
        print("    _mean:%s\n    _mid:%s\n    output:%s" % (_mean.get_shape(), _mid.get_shape(), output.get_shape()))
        print("calc output   %s" % (output.numpy()))
    return output
    

# Create BlockNet Model.
class BlockNet(Model):
    # Set layers.
    def __init__(self,    debug=False):
        super(BlockNet, self).__init__()
        self.debug = debug
        self.debug_mc_log = False

        
        _m2m_tbl = [[2.0 for j in range(1,17)] for i in range(0, 17)]
        self.m2m_tbl = tf.Variable(_m2m_tbl, dtype=tf.float32)

#        self.m2m_tbl = self.add_weight(shape=(17,16), initializer='zeros', name='bias', regularizer=None, constraint=None)
        self.embeddings_tbl = tf.Variable(tf.random.truncated_normal([50, 16]))
        self.n2zero = tf.Variable(tf.constant(5.0),name='v3', dtype=np.float32)
        self.alpha  = tf.Variable(tf.constant(5.7),name='v4', dtype=np.float32)
#        self.alpha = self.add_weight(shape=(1,), initializer='zeros', name='alpha', regularizer=None, constraint=None)
# 最佳：
# alpha=6.2~10, 
# 变化太快了, 公式不好

    def _input_slice(self, x, m, cnt):
        out_x, out_m = [], []
        for i, (_x, _m) in enumerate(zip(x, m)):
            _cnt = cnt[i]
            #print ("slice:\n  _x=%s\n  _m=%s\n  _cnt=%s" % (np.array(_x), np.array(_m), _cnt))
            out_x.append(tf.slice(_x, [0], [_cnt]))
            out_m.append(tf.slice(_m, [0], [_cnt]))
        return out_x, out_m

    # Set forward pass.
    def call(self, inputs):
        x1, x2, m1, m2, cnt1, cnt2 = inputs
#        x1, m1 = self._input_slice(x1, m1, cnt1)
#        x2, m2 = self._input_slice(x2, m2, cnt2)
        x = self.sents_to_score(x1, x2, m1, m2, cnt1, cnt2)
        x = self.score_to_pred(x)
        return x
        
    def score_to_pred(self, x):
        s = x/self.alpha
        s = tf.expand_dims(s, -1)
        c = 1/s
        output = tf.concat([s, c], 1)
        if self.debug:
            print ("s2p:\n  x=%s\n  s=%s\n  c=%s\n  output=%s" % (np.array(x), np.array(s), np.array(c), np.array(output)))
            print ("----------------------------------")
        return output
        
    def block_to_score(self, b_m_m):
#  ----------败笔--3个参数现在看不懂------
# 每个语句块:
#   局部比较:
#   保留较高的词性
#   更自由的调整位置进行比较
#   主结构顺序不动, 当作是一种最优结果
        _bid, _mid1, _mid2  = b_m_m
        if self.debug:
            print ("b2s:\n  _bid=%s\n  _mid1=%s\n  _mid2=%s" % (_bid, _mid1, _mid2))

# _bid对应固定变量, 索引为[0, 15]
# _mid对应单词变量, 索引为[1, 16], 预留[0]为标点, [17]为标点
        _bid  = [i-1 for i in _bid]
        _mid1 = [i for i in _mid1]
        _mid2 = [i for i in _mid2]
        if self.debug:
            print ("  _len1=%s\n  _len2=%s" % (len(_mid1), len(_mid2)))

        if len(_mid1) == 0 or len(_mid2) == 0:
            return self.n2zero 

# 实际初始值+短连, (有方向, 不对折, 反向值更小)
        sub_list = tf.gather(self.m2m_tbl, _bid, axis=1)
        _A1 = tf.gather(sub_list, _mid1)
        _A2 = tf.gather(sub_list, _mid2)
        if self.debug:
            print ("  _A1=%s, " % (_A1.numpy()))

# 词ID--b_id----------
        b_id = [j for j in range(1,50)]
        b_id1 = b_id[10:10+len(_mid1)]
        b_id2 = b_id[20:20+len(_mid2)]
        bv1 = tf.gather(self.embeddings_tbl, b_id1)
        bv2 = tf.gather(self.embeddings_tbl, b_id2)
        bv1 = tf.gather(bv1, _bid, axis=1)
        bv2 = tf.gather(bv2, _bid, axis=1)
        _a1 = tf.sigmoid(bv1)
        _a2 = tf.sigmoid(bv2)
# 保留特征:
#   A*a: 模块位置权重*词的权重
        _Aa1 = tf.multiply(_A1, _a1)
        _Aa2 = tf.multiply(_A2, _a2)
# 全局特征:
#   主要词>1, 主要词接近即可
        _Aa1_mean = modes_calc(_Aa1, debug_mc_log=self.debug_mc_log)
        _Aa2_mean = modes_calc(_Aa2, debug_mc_log=self.debug_mc_log)
        if self.debug:
            print ("  _Aa1_mean=%s\n  _Aa2_mean=%s" % (_Aa1_mean.numpy(), _Aa2_mean.numpy()))
        
# 可能用比例, 或2次square更好
        block_loss = K.sum(K.square(_Aa1_mean-_Aa2_mean), axis=-1)
        block_loss = K.mean(block_loss)
        if self.debug:
            print ("b2s--loss: %s, " % (block_loss))
            print ("----------------------------------")

#    变量回填:
#    _Aa1->s11,s12,s13
#    _Aa2->s22,s21,s23,s24
#       mylist = np.array(mylist)
#       mylist[:,0:1] = [[4],[5],[6]]
#       s11 = Sum/X * 1/10, 或*1/loss
        
        return block_loss
        
    
    def sents_to_score(self, x1, x2, m1, m2, cnt1, cnt2):
# 总块=块相加:
#        if len(m1)==0 or len(m2)==0:
#            return tf.constant(10, dtype=tf.float32) 
        score_list = []
        for step, (_mid1, _mid2, _c1, _c2) in enumerate(zip(m1, m2, cnt1, cnt2)):
            if self.debug:
                print ("----------------------------------")
                print ("s2s:\n  _mid1=%s\n  _mid2=%s" % (_mid1.numpy(), _mid2.numpy()))
            _m1, _m2, _t1, _t2, _s1, _s2 =  _m_to_mts([_mid1, _mid2, _c1, _c2])       # shape(100,3?,9)
            if self.debug:
                print ("  b_m_m: %s, " % (np.array(b_m_m))) 
                print ("----------------------------------")
            score = list(map(self.block_to_score, b_m_m))                                  # shape(100,?,9)-->Aa-->shape(100,9,9)-->shape(100,9)
            score = tf.reduce_mean(score, axis=0)                                          # shape(100,0)
            score_list.append(score)
        #sents_score = tf.reduce_mean(score_list, axis=0)
        return score_list
 



