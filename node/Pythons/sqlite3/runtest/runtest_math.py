

import sys
import os
import math
import tensorflow as tf
import numpy as np
from tensorflow.python import keras
from tensorflow.python.keras import backend as K
#import copy

# path
curPath  = os.path.abspath(os.path.dirname(__file__))
rootPath = os.path.split(curPath)[0]
dataPath = os.path.join(rootPath, "data")
csvPath  = os.path.join(dataPath, "csv")

# file
sqlite3_file = os.path.join(dataPath, "sqlite3", "data.db3")

# cfg
sys.path.append(rootPath)

# Custom Class
from _token import TokenizerChg
#from _layer import board_compare



#分板
def get_board(seq, mi, cnt, st_size=3):
    def _pad(ids, max_len):
        id_len = len(ids)
        ids    = ids[:min(id_len, max_len)]
        id_len = len(ids)
        output = tf.constant([[0,0,0]]*(max_len - id_len), dtype=tf.float32)
        if ids.ndim>1:
            output = np.concatenate([ids,output],axis=0) 
        output = tf.cast(output, dtype=tf.float32)
        return output
    def board(seq, cnt, cxi, board_len=5):
        COLUMN_M = 2
        output = tf.constant([], dtype=tf.float32)
        for i in range(cnt):
            pvxm = seq[i]
            m    = pvxm[COLUMN_M]
#            print("--m", m, cxi)
            if tf.equal(m, cxi):
                if output.ndim==1:
                    output = tf.cast([pvxm], dtype=tf.float32)
                else:
                    output = np.concatenate([output, [pvxm]])
        output = _pad(output, board_len)
        return output
    def _each(seq, mi, cnt):
        cnt = tf.cast(cnt, dtype=tf.int32)
        cnt = tf.cast(mi[cnt-1]+1, dtype=tf.int32)
        output = tf.constant([], dtype=tf.float32)
        for cxi in range(st_size):
            b = board(seq, cnt, cxi, 5)
            if output.ndim==1:
                output = tf.cast([b], dtype=tf.float32)
            else:
                output = tf.concat([output, [b]], 0)
#            print("--_each", output)
        return output
    output = tf.map_fn(lambda x: _each(x[0], x[1], x[2]), (seq, mi, cnt), dtype=tf.float32)
    return output

#序列化
def get_pvxm(em_p, em_v, input_mi, input_n, input_cnt, max_seq=5):
    def left_full(mi, cnt, n):
        output = tf.constant([], dtype=tf.float32)
        _mi = 0
        for i in range(cnt-1):
            starti = _mi
            vi = tf.cast(_mi, dtype=tf.int32)
            #_n = tf.slice(n, [vi], [1])
            _mi = mi[i+1]
            tmp = tf.fill([_mi-starti], n[vi], name=None)
            output = np.concatenate([output, tmp])
        vi = tf.cast(_mi, dtype=tf.int32)
        tmp = tf.fill([1], n[vi], name=None)
        output = np.concatenate([output, tmp])
        output = tf.cast(output, dtype=tf.float32)
        return output
    def right_full(mi, cnt, n):
        output = tf.constant([], dtype=tf.float32)
        _mi = 0
        tmp = tf.fill([1], n[_mi], name=None)
        output = np.concatenate([output, tmp])
        for i in range(cnt-1):
            starti = _mi
            _mi = mi[i+1]
            vi = tf.cast(_mi, dtype=tf.int32)
            tmp = tf.fill([_mi-starti], n[vi], name=None)
            output = np.concatenate([output, tmp])
        output = tf.cast(output, dtype=tf.float32)
        return output
    def _concat(p, mi, n, max_len):
        output = tf.constant([], dtype=tf.float32)
        for i in range(max_len):
            i1 = tf.cast(mi[i], dtype=tf.int32)
            i2 = tf.cast(n[i], dtype=tf.int32)
            tmp = tf.slice(p, [i1,i2], [1, 1])
            tmp = K.squeeze(tmp, 0)
            output = np.concatenate([output, tmp])
        output = tf.cast(output, dtype=tf.float32)
        return output
    def max_pi(vl, vr, pli, pri, plen):
        sel_seq = vl
        sel_sum = 0
        for i in range(plen+1):
            tmp1 = tf.slice(pli, [0], [i])
            tmp2 = tf.slice(pri, [i], [plen-i])
            tmp = np.concatenate([tmp1, tmp2])
            sum = K.sum(tmp, axis=None)
            if sum>sel_sum:
                sel_sum = sum
                tmpV1 = tf.slice(vl, [0], [i])
                tmpV2 = tf.slice(vr, [i], [plen-i])
                sel_seq = np.concatenate([tmpV1, tmpV2])
        return sel_seq
    def max_p(mi, vl, vr, pl, pr, cnt):
        output = tf.constant([], dtype=tf.float32)
        tmp = tf.slice(vl, [0], [1])
        output = np.concatenate([output, tmp])
        _mi = 0
        for i in range(cnt-1):
            starti = _mi + 1
            _mi = tf.cast(mi[i+1], dtype=tf.int32)
            pli = tf.slice(pl, [starti], [_mi-starti])
            pri = tf.slice(pr, [starti], [_mi-starti])
            vli = tf.slice(vl, [starti], [_mi-starti])
            vri = tf.slice(vr, [starti], [_mi-starti])
            pi  = max_pi(vli, vri, pli, pri, _mi-starti)
            tmp = tf.slice(vl, [_mi], [1])
            output = np.concatenate([output, pi, tmp])
        return output
    def _pad(ids, max_seq_len):
        id_len = len(ids)
        ids    = ids[:min(id_len, max_seq_len)]
        id_len = len(ids)
        tmp = tf.fill([max_seq_len - id_len], 0, name=None)
        output = np.concatenate([ids,tmp],axis=0) 
        output = tf.cast(output, dtype=tf.float32)
        return output
    def _each(p, v, mi, n, cnt):
        # n:seq, cnt:实际长度
        # 向前向后2种编号
        mi_l = left_full(mi, cnt, n)
        mi_r = right_full(mi, cnt, n)
#        print("--mi_l", mi_l)
#        print("--mi_r", mi_r)
        # 连接p, 将编号换成概率
        pl = _concat(p, mi_l, n, len(mi_l))
        pr = _concat(p, mi_r, n, len(mi_r))
        print("--pl", pl)
        print("--pr", pr)
        # 连接v, 将编号换成编号
        vl = _concat(v, mi_l, n, len(mi_l))
        vr = _concat(v, mi_r, n, len(mi_r))
        # 选择最大概率
        output = max_p(mi, vl, vr, pl, pr, cnt)
        output = _pad(output, max_seq) #只有1维, 不能用pad_sequences
        return output
    output = tf.map_fn(lambda x: _each(x[0], x[1], x[2], x[3], x[4]), (em_p, em_v, input_mi, input_n, input_cnt), dtype=tf.float32)
    return output
    
def pvxm_test():
    input_x = tf.constant([[11,13,15],
                           [11,13,15]
                          ], dtype=tf.float32)
    input_mi = tf.constant([[0,2,4],
                            [0,2,4]
                           ], dtype=tf.float32)
    input_n = tf.constant([[0,2,1,0,2],
                           [0,0,1,0,2]
                          ], dtype=tf.float32)
    input_cnt = tf.constant([3,2], dtype=tf.float32)
    em_p = tf.constant([[[0.2, 0.1, 0.4, 0],
                         [0.2, 0.5, 0.3, 0],
                         [0.3, 0.1, 0.6, 0]],
                        [[0.1, 0.1, 0.8, 0],
                         [0.1, 0.1, 0.8, 0],
                         [0.1, 0.1, 0.8, 0]]
                        ], dtype=tf.float32)
    em_v = tf.constant([[[0.3, 0.1, 0.4, 0],
                         [0.4, 0.3, 0.4, 0],
                         [0.4, 0.1, 0.3, 0]],
                        [[0.1, 0.1, 0.1, 0],
                         [0.1, 0.1, 0.1, 0],
                         [0.1, 0.1, 0.1, 0]]
                        ], dtype=tf.float32)
    em_x = tf.constant([[[11]*4,[13]*4,[15]*4],
                        [[11]*4,[13]*4,[15]*4]
                       ], dtype=tf.float32)
    em_m = tf.constant([[[0,1,2,3]]*3,
                        [[0,1,2,3]]*3
                       ], dtype=tf.float32)
    # add seq
    out_seq = get_pvxm(em_p, em_p, input_mi, input_n, input_cnt, max_seq=6)
    print("--get_p", out_seq)
    print("")
    out_v = get_pvxm(em_p, em_v, input_mi, input_n, input_cnt, max_seq=6)
    print("--get_v", out_v)
    print("")
    out_x = get_pvxm(em_p, em_x, input_mi, input_n, input_cnt, max_seq=6)
    print("--get_x", out_x)
    print("")
    out_m = get_pvxm(em_p, em_m, input_mi, input_n, input_cnt, max_seq=6)
    print("--get_m", out_m)
    print("")
    out_v = tf.expand_dims(out_v, -1)
    out_x = tf.expand_dims(out_x, -1)
    out_m = tf.expand_dims(out_m, -1)
    out_seq = tf.concat([out_v, out_x, out_m], -1)
    print("--out_seq", out_seq)
    out_seq = get_board(out_seq, input_mi, input_cnt, st_size=3)
    print("--out_seq", out_seq)

#pvxm_test()



#排序
def sort_test():
    def _sort(row):
        print("--row", row)
#        return row.sort()
#        return row.sort(key = len)
        return np.array(sorted(row.numpy()))
    da = tf.constant([[1,3,2,5,4],
                      [1,3,2,5,4]], dtype=tf.float32)
    
    output = tf.map_fn(lambda x: _sort(x), da, dtype=tf.float32)
    print("--output", output)

#sort_test()


#排序str
def sortstr_test():
    def _sort(row):
        #print("--sort", row)
        return np.array(sorted(row.numpy(), key = lambda x:x[0]))
    def _each(row):
        #print("--each", row)
        output = tf.map_fn(lambda x: _sort(x), row, dtype=tf.float32)
        return output
    def _sortstr(da, db):
        print("--da", da)
        output = tf.map_fn(lambda x: _each(x), da, dtype=tf.float32)
        return output
        
    da = tf.constant([[[[1,100],[3,100],[2,100],[5,100],[4,100]],
                       [[1,100],[3,100],[2,100],[5,100],[4,100]]],
                      [[[1,100],[3,100],[2,100],[5,100],[4,100]],
                       [[1,100],[3,100],[2,100],[5,100],[4,100]]]
                     ], dtype=tf.float32)
                     
#    output = tf.map_fn(lambda x: _each(x), da, dtype=tf.float32)
#    print("--output", output)

    output = _sortstr(da, da)
    print("--output", output)

#sortstr_test()


#填充
def _full(row, l, _len, full_num=0.5):
    _len = _len - l
    if _len==0:
        return row
    sp0 = int(l/(_len+1))
    output = row[0:sp0]
    for i in range(_len):
        sp1 = int((i+2)*l/(_len+1))
        output = np.concatenate([output, [full_num], row[sp0:sp1]])
        sp0 = sp1
    return output

def full_test():
    da = tf.constant([1,3,2,5,4], dtype=tf.float32)
    print("--_sort", _full(da.numpy(),5,6, full_num=0.))
    da = tf.constant([1,3], dtype=tf.float32)
    print("--_sort", _full(da.numpy(),2,3, full_num=0.))
    da = tf.constant([1], dtype=tf.float32)
    print("--_sort", _full(da.numpy(),1,2, full_num=0.))

#full_test()


#比较
def board_compare(board1, brd_len1, board2, brd_len2):
    def _sort(row):
        #print("--sort", row)
        return np.array(sorted(row.numpy(), key = lambda x:x[0]))
    def _full_concat(row, rlen, max_len):
        #print("--_concat", row)
        diff = max_len - rlen
        sp0 = int(rlen/(diff+1))
        output = row[0:sp0]
        for i in range(diff):
            sp1 = int((i+2)*rlen/(diff+1))
            lasti = tf.cond(tf.greater(sp0, 0), lambda: sp0-1, lambda: 0)
            nexti = tf.cond(tf.less(sp0, rlen), lambda: sp0, lambda: rlen-1)
            full_id  = (row[lasti][0] + row[nexti][0])/2
            full_num = (row[lasti][1] + row[nexti][1])/2
            #print("--sp0", output)
            #print("--sp1", row[sp0:sp1])
            output = np.concatenate([output, [[full_id, full_num]], row[sp0:sp1]])
            #print("--sp2", output)
            sp0 = sp1
        return output
    def _full(row, rlen, max_len=5):
        diff = max_len - rlen
        #print("--diff", diff)
        output = tf.cond(tf.less_equal(diff, 0), 
                lambda: row[0:max_len], 
                lambda: _full_concat(row, rlen, max_len))
        output = tf.cast(output, dtype=tf.float32)
        #print("--_full", output)
        return output
    def _compare(row1, row2, max_len=5):
        row1 = tf.slice(row1, [0,1], [-1,1])
        row2 = tf.slice(row2, [0,1], [-1,1])
        output = K.sqrt(K.sum(K.square(row1-row2), axis=None, keepdims=False))/max_len
        return output
    def _each(board1, len1, board2, len2):
        shape_list = board1.shape.as_list()
        print("--shape_list", shape_list)
        board1 = tf.map_fn(lambda x: _full(x[0], x[1]), (board1, len1), dtype=tf.float32)
        board2 = tf.map_fn(lambda x: _full(x[0], x[1]), (board2, len2), dtype=tf.float32)
#        print("--_full", board1)
#        print("--_full", board2)
        board1 = tf.map_fn(lambda x: _sort(x), board1, dtype=tf.float32)
        board2 = tf.map_fn(lambda x: _sort(x), board2, dtype=tf.float32)
#        print("--_sort1", board1)
#        print("--_sort2", board2)
        output = tf.map_fn(lambda x: _compare(x[0], x[1]), (board1, board2), dtype=tf.float32)
        return output
    output = tf.map_fn(lambda x: _each(x[0], x[1], x[2], x[3]), (board1, brd_len1, board2, brd_len2), dtype=tf.float32)
    return output

def board_compare_test():
    board1 = tf.constant([[[[1,100],[3,90],[2,80],[5,70],[4,60]],
                           [[1,100],[3,90],[2,80],[5,70],[4,60]]],
                          [[[1,100],[3,90],[2,80],[5,70],[4,60]],
                           [[1,100],[3,90],[2,80],[5,70],[4,60]]]
                         ], dtype=tf.float32)
    brd_len1 = tf.constant([[5,5],
                            [5,5]], dtype=tf.float32)
    board2 = tf.constant([[[[1,100],[3,90],[2,80],[5,70],[4,60]],
                           [[1,100],[3,90],[2,80],[5,70],[4,60]]],
                          [[[1,100],[3,90],[2,80],[5,70],[4,60]],
                           [[1,100],[3,90],[2,80],[5,70],[4,60]]]
                         ], dtype=tf.float32)
    brd_len2 = tf.constant([[4,3],
                            [5,5]], dtype=tf.float32)

    ret = board_compare(board1, brd_len1, board2, brd_len2)
    print("--compare", ret)

#board_compare_test()



   









