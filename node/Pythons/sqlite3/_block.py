
#import os
#import re
#import math
#import datetime
#import pandas as pd
import tensorflow as tf
import numpy as np
import copy


def _m_to_mts(inputs):
    m1, m2, l1, l2 = inputs
    # 4x9模式; 增加m=2/4/6/8兼容; 最后1组去掉m=5(同时为了对齐重复8)
    block_dick = {0:[15,16,8,1,2,10,11,3,7,4,6],
                  1:[15,14,6,5,4,12,11,3,7,2,8],
                  2:[15,14,6,5,13,9,1,8,16,2,4],
                  3:[11,12,4,13,9,1,2,10,6,8]}
    tmp_dick = block_dick.copy()
#############
    outputs = []
    out_m1, out_m2, out_t1, out_t2, out_s1, out_s2 = [],[],[],[],[],[]
    l, r, fl, fr= 0, 0, 0, 0
    mark = 0
    step = 0
    def update_block(_m):
        nonlocal tmp_dick
        tmp_dick = {k:v for (k,v) in tmp_dick.items() if _m in v}
        return 0
    def check_in_block(_info, _m, _i, _len):
        nonlocal tmp_dick
        _item = tf.cond(_i<_len, lambda:_m[_i], lambda:_m[0])
        _s = tf.cond(_i<_len, lambda:sum([1  for (k,v) in tmp_dick.items() if _item in v]), lambda:0)
        ret = tf.cond(_s>0, lambda:update_block(_item), lambda:1)
        ret = tf.cond(tf.logical_and(_i<_len, tf.logical_or(tf.equal(_item,0), tf.equal(_item,26))), lambda:0, lambda:ret)         #模式0/26不分块
        #print("\n------_%s%s _len=%s  _item=%s  _sum=%s  ret=%s  b=%s" % (_info, _i, _len, _item, _s, ret, len(tmp_dick)))
        return ret
    def update_state(_n, _l, _r):
        nonlocal l, r
        l = _l
        r = _r
        return _n
    def update_out(_l1, _l2, _index):
        nonlocal out_m1, out_m2, out_t1, out_t2, out_s1, out_s2, mark
        #print("--add--mark:%s  size:(%s  %s)" % (mark, _l1, _l2))
        scale_value = 0
        calc = 0.5  # 0.86
        if _l1>0:
            scale_value += calc/_l1
        if _l2>0:
            scale_value += calc/_l2
        if _l1>0:
            out_m1.extend([mark]*_l1)
            out_t1.extend([_index]*_l1)
            out_s1.extend([scale_value]*_l1)
        if _l2>0:
            out_m2.extend([mark]*_l2)
            out_t2.extend([_index]*_l2)
            out_s2.extend([scale_value]*_l2)
        if _l1>0 and _l2>0:
            mark = 1-mark
    def set_out_list(_n, _l, _r):
        nonlocal tmp_dick, fl, fr
        #print("--out--[%s~%s] [%s~%s]" % (fl, _l, fr, _r))
        update_out(_l-fl, _r-fr, list(tmp_dick.keys())[0])
        tmp_dick = block_dick.copy()
        fl = _l
        fr = _r
        return update_state(_n, _l, _r)
    def set_exit_list(_n, _l, _r):
        nonlocal tmp_dick, fl, fr, step
        #print("--exit--[%s~%s] [%s~%s]" % (fl, _l, fr, _r))
        update_out(_l-fl, _r-fr, list(tmp_dick.keys())[0])
        step=500
        return _n
#############
    ret = 0
    while step<500: 
        step += 1
        # ret=0,1,2,3;4,5: 左,右,单左取块,单右取块;有剩余块,超范围
        ret = tf.cond(tf.logical_and(tf.greater_equal(l,l1), tf.greater_equal(r,l2)), lambda:update_state(5, l, r), lambda:ret)
        # ret=4,5: 有剩余块,超范围
        ret = tf.cond(tf.logical_and(ret==5,tf.logical_or(tf.greater(l,fl), tf.greater(r,fr))), lambda:set_exit_list(4, l, r), lambda:ret)
        ret = tf.cond(ret==5 and tf.logical_or(tf.greater(l,fl), tf.greater(r,fr)), lambda:set_exit_list(4, l, r), lambda:ret)

        # s_left=0,1,2:  左块在块,不在块,超范围
        # s_right=0,1,2: 右块在块,不在块,超范围
        s_left  = tf.cond(check_in_block('L', m1, l, l1), lambda:1, lambda:0)
        s_right = tf.cond(check_in_block('R', m2, r, l2), lambda:1, lambda:0)
        s_left  = tf.cond(tf.greater_equal(l,l1), lambda:2, lambda:s_left)
        s_right = tf.cond(tf.greater_equal(r,l2), lambda:2, lambda:s_right)
        #print("------step%s--ret=%s  s_left=%s  s_right=%s  l=%s  r=%s-" % (step, ret, s_left, s_right, l, r))
        
        # s_left=3:  超范围
        # s_right=3: 超范围
        ret = tf.cond(tf.logical_and(ret==2, s_left==2),  lambda:set_out_list(0, l, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==0, s_left==2),  lambda:update_state(3, l, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==1, s_right==2), lambda:update_state(2, l, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==3, s_right==2), lambda:set_out_list(0, l, r), lambda:ret)

        # ret=0,1,2,3;4,5,6: 左,右,单左取块,单右取块;无剩余块,有剩余块,超范围
        ret = tf.cond(tf.logical_and(ret==0, s_left==0), lambda:update_state(1, l+1, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==1, s_right==0), lambda:update_state(0, l, r+1),lambda:ret)
        ret = tf.cond(tf.logical_and(ret==2, s_left==0), lambda:update_state(2, l+1, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==3, s_right==0), lambda:update_state(3, l, r+1),lambda:ret)

        # ret=0,1,2,3;4,5,6: 左,右,单左取块,单右取块;无剩余块,有剩余块,超范围
        ret = tf.cond(tf.logical_and(ret==0, s_left==1), lambda:update_state(7, l, r),   lambda:ret)#3
        ret = tf.cond(tf.logical_and(ret==1, s_right==1), lambda:update_state(6, l, r),  lambda:ret)#2
        ret = tf.cond(tf.logical_and(ret==2, s_left==1), lambda:set_out_list(0, l, r),   lambda:ret)
        ret = tf.cond(tf.logical_and(ret==3, s_right==1), lambda:set_out_list(0, l, r),  lambda:ret)
        ret = tf.cond(ret==7, lambda:3,  lambda:ret)
        ret = tf.cond(ret==6, lambda:2,  lambda:ret)
    #print("--ret--m (%s %s)  t (%s %s)  s (%s %s) "%(len(out_m1),len(out_m2),len(out_t1),len(out_t2),len(out_s1),len(out_s2)))
    return (out_m1, out_m2, out_t1, out_t2, out_s1, out_s2)

    
def b2mts(inputs, max_cnt):
    m1, m2, l1, l2 = inputs
    out_m1, out_m2, out_t1, out_t2, out_s1, out_s2 = [],[],[],[],[],[]
    #print("  m1--%s--%s\n  m2--%s--%s" % (len(m1), m1, len(m2), m2))
    for i,(_a1,_a2,_l1,_l2) in enumerate(zip(m1, m2, l1, l2)):
        #if i!=1: continue # test
        _m1, _m2, _t1, _t2, _s1, _s2 =  _m_to_mts([_a1,_a2,_l1,_l2])
        out_m1.append(np.concatenate((_m1, [0]*(max_cnt-_l1)),axis = 0))
        out_m2.append(np.concatenate((_m2, [0]*(max_cnt-_l2)),axis = 0))
        out_t1.append(np.concatenate((_t1, [0]*(max_cnt-_l1)),axis = 0))
        out_t2.append(np.concatenate((_t2, [0]*(max_cnt-_l2)),axis = 0))
        out_s1.append(np.concatenate((_s1, [0]*(max_cnt-_l1)),axis = 0))
        out_s2.append(np.concatenate((_s2, [0]*(max_cnt-_l2)),axis = 0))
        
    return (np.array(out_m1),np.array(out_m2),np.array(out_t1),np.array(out_t2),np.array(out_s1),np.array(out_s2))
    

def get_m2n_from_custom(k1, k2, debug=False):
    n_dict = { '0_0':[],
               '2_11':[2, 11],             #no chg.
               '4_11':[4, 11],             #no chg.
               '6_11':[6, 11],             #no chg.
               '7_11':[7, 11],             #no chg.
               '6_16':[8, 16],             #replace
               '6_10':[2, 9,  3, 10],      #replace
#               '8_12':[4, 13, 3, 12],     #err replace
               '10_7':[10, 2, 9, 3], 
               '11_3':[11, 3]
             }
    _key = str(k1) + '_' + str(k2)
    if debug:
        val = n_dict.get(_key, ['#%s#%s#'%(k1, k2)])
    else:
        val = n_dict.get(_key, [k1, k2])
    return val

def get_m2n_from_seq(k1, k2, max_space=4, debug=False):
    s_list = [ [15, 16,  7,  9,  3, 10, 11],
               [15, 14,  7, 13,  3, 12, 11], 
               [15, 16,  7,  9,  8,  1,  2,  9,  3, 10],  # 不要最后的11, 太远了
               [15, 14,  7, 13,  6,  5,  4, 13,  3, 12],  # 不要最后的11, 太远了
               [ 7, 9,   8, 16,  7,  9,  8,  1,  2,  9,  8,  1,  2,  9, 3, 10,  2,  9, 3],
               [ 7, 13,  6, 14,  7, 13,  6,  5,  4, 13,  6,  5,  4, 13, 3, 12,  4, 13, 3],
               [16,  7, 13,  6,  5,  4], 
               [16,  7, 13,  3, 12, 11], 
               [14,  7,  9,  8,  1,  2],
               [14,  7,  9,  3, 10, 11], 
               [ 8, 16,  7, 13,  6, 14], 
               [ 8,  1,  2,  9,  3, 12,  4, 13,  6,  5], 
               [ 6, 14,  7,  9,  8, 16], 
               [ 6,  5,  4, 13,  3, 10,  2,  9,  8,  1], 
               [ 1,  2,  9,  8, 16,  7], 
               [ 5,  4, 13,  6, 14,  7], 
               [10,  2,  9,  3], 
               [12,  4, 13,  3], 
               [ 3, 12,  4,  3]
             ]
    for i in range(len(s_list)):
        item = s_list[i]
        i_a = -1
        i_b = -1
        if k1 in item:
            i_a = item.index(k1)
        if i_a>=0 and k2 in item[i_a:]:
            i_b = item.index(k2, i_a)
        if i_b>=0 and i_b-i_a<=max_space:
            return item[i_a:i_b+1]
    return get_m2n_from_custom(k1, k2, debug=debug)
    
def m2n(m, cnt, max_space=4, debug=False, add_seq=True):
    n_list, ni_list = [],[]
    for _,(_m, _cnt) in enumerate(zip(m, cnt)):
        n_row, ni_row = [],[]
        seq = _m[0:1]
        for i in range(_cnt-1):
            ni_row.append(len(n_row))
            if add_seq and _m[i] != 0 and _m[i+1] != 0 and _m[i] != _m[i+1]:
                seq = get_m2n_from_seq(_m[i], _m[i+1], max_space=max_space, debug=debug)
            else:
                seq = _m[i:i+2]
            if len(seq)<=1:
                n_row.extend(seq)
            elif len(seq)==2:
                n_row.extend(seq[0:1])
            else:
                if debug:
                    n_row.extend(['-['] + seq[0:-1] + [']-'])
                else:
                    n_row.extend(seq[0:-1])
        if len(seq)>0:
            ni_row.append(len(n_row))
            n_row.append(seq[-1])
        n_list.append(n_row)
        ni_list.append(ni_row)
    return np.array(n_list), np.array(ni_list)


