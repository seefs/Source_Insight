
import math
from tensorflow.keras.models import Model
from tensorflow.keras.layers import Layer

from tensorflow.python import keras
from tensorflow.python.keras import backend as K

import tensorflow as tf
import numpy as np
from params_flow import LayerNormalization
from tensorflow.python.keras.layers import Input, Dense
from tensorflow.python.keras.models import Model
from tensorflow.python.keras.layers import InputSpec, Layer
from tensorflow.python.keras.layers import Conv1D, Conv2D, Conv3D
from tensorflow.python.keras.layers import BatchNormalization, concatenate
from tensorflow.python.keras.utils import conv_utils
from tensorflow.python.keras import activations, initializers, regularizers, constraints
import logging





# In[1]:

#分板
def get_board(seq, mi, cnt, st_size=17, board_len=5):
    def _pad(ids):
        # min(len, 5)
        id_len  = tf.size(ids)/3
        ids     = tf.cond(tf.greater(id_len, board_len), lambda:tf.slice(ids, [0, 0], [board_len, -1]), lambda:ids)
        id_len  = tf.size(ids)/3
        # pad [0,0,0]*N
        tmp_len = tf.cast(board_len - id_len, dtype=tf.int32)
        tmp     = tf.zeros([tmp_len,3], dtype=tf.float32)
        output  = tf.cond(tf.equal(id_len, 0), lambda:tmp, lambda:ids)
        output  = tf.cond(tf.logical_and(tf.greater(id_len, 0), tf.greater(tmp_len, 0)), lambda:tf.concat([ids,tmp], 0), lambda:output)
        return output
    def board(seq, cnt, cxi):
        # seq:shape(35,3)
        output = tf.zeros([0,3], dtype=tf.float32)
        i = tf.constant(0)
        def cond(i, cnt,  output):
            return  tf.less(i, cnt)
        def body(i, cnt,  output):
            # 连接cx相同的分类
            # m:1~16
            COLUMN_M = 2
            pxvm = seq[i]
            m    = pxvm[COLUMN_M]
            # cxfi:1~16
            cxfi = tf.cast(cxi, dtype=tf.float32)
            # tmp:shape(1,3)
            tmp = tf.cast([pxvm], dtype=tf.float32)
            # tmp:shape(N,3)
            tmp = tf.cond(tf.equal(tf.rank(output), 1), lambda:tmp, lambda:tf.concat([output, tmp], 0))
            my_cond = tf.cast(tf.equal(m, cxfi), dtype=tf.bool)
            output = tf.cond(tf.equal(m, cxfi), lambda:tmp, lambda:output)
            return i + 1, cnt, output
        i, cnt, output = tf.while_loop(cond, body, [i, cnt, output], shape_invariants=[i.get_shape(), cnt.get_shape(), tf.TensorShape([None,3])])
        output = _pad(output)
        return output
    def _each(seq, mi, cnt):
        #实际长度cnt为mi最后一项
        cnt = tf.cast(cnt, dtype=tf.int32)
        cnt = tf.cast(mi[cnt-1]+1, dtype=tf.int32)
        output = tf.zeros([0,5,3], dtype=tf.float32)
        i = tf.constant(0)
        def cond(i,  output):
            return  tf.less(i, st_size)
        def body(i,  output):
            b = board(seq, cnt, i)
            tmp = tf.cast([b], dtype=tf.float32)
            tmp_len = tf.size(tmp)/3
            output = tf.concat([output, tmp], 0)
            return i + 1, output
        i, output = tf.while_loop(cond, body, [i, output], shape_invariants=[i.get_shape(), tf.TensorShape([None,None,3])])
        #logging.getLogger().info("--_each-output\n  %s" % (tf.shape(output)))
        return output
    output = tf.map_fn(lambda x: _each(x[0], x[1], x[2]), (seq, mi, cnt), dtype=tf.float32)
    return output

    
#序列化
def get_pxvm(em_p, em_v, input_mi, input_n, input_cnt, max_seq=5):
    def left_full(mi, cnt, n):
        output = tf.constant([], dtype=tf.float32)
        i = tf.constant(0)
        _mi = tf.constant(0)
        def cond(i, cnt, _mi, output):
            return  tf.less(i, cnt-1)
        def body(i, cnt, _mi, output):
            starti = _mi
            _mi = mi[i+1]
            tmp = tf.fill([_mi-starti], i, name=None)
            tmp = tf.cast(tmp, dtype=tf.float32)
            output = tf.concat([output, tmp], 0)
            return i + 1, cnt, _mi, output
        i, cnt, _mi, output = tf.while_loop(cond, body, [i, cnt, _mi, output], shape_invariants=[i.get_shape(), cnt.get_shape(), _mi.get_shape(), tf.TensorShape([None])])
        tmp = tf.fill([1], i, name=None)
        tmp = tf.cast(tmp, dtype=tf.float32)
        output = tf.concat([output, tmp], 0)
        return output
    def right_full(mi, cnt, n):
        output = tf.constant([], dtype=tf.float32)
        i = tf.constant(0)
        _mi = tf.constant(0)
        tmp = tf.fill([1], i, name=None)
        tmp = tf.cast(tmp, dtype=tf.float32)
        output = tf.concat([output, tmp], 0)
        def cond(i, cnt, _mi, output):
            return  tf.less(i, cnt-1)
        def body(i, cnt, _mi, output):
            starti = _mi
            _mi = mi[i+1]
            tmp = tf.fill([_mi-starti], i+1, name=None)
            tmp = tf.cast(tmp, dtype=tf.float32)
            output = tf.concat([output, tmp], 0)
            return i + 1, cnt, _mi, output
        _, cnt, _mi, output = tf.while_loop(cond, body, [i, cnt, _mi, output], shape_invariants=[i.get_shape(), cnt.get_shape(), _mi.get_shape(), tf.TensorShape([None])])
        output = tf.cast(output, dtype=tf.float32)
        return output
    def _concat(p, mi, n, cntmi, cnt):
        cnt = tf.cast(cnt, dtype=tf.int32)
        max_len = tf.cast(cntmi[cnt-1]+1, dtype=tf.int32)
        output = tf.constant([], dtype=tf.float32)
        i = tf.constant(0)
        #logging.getLogger().info("--p %s" % (tf.shape(p)))
        #logging.getLogger().info("--n %s" % (n) )
        def cond(i, max_len, output):
            return  tf.less(i, max_len)
        def body(i, max_len, output):
            i1 = tf.cast(mi[i], dtype=tf.int32)
            i2 = tf.cast(n[i], dtype=tf.int32)
            #logging.getLogger().info("--i1,i2,max_len %s %s %s" % (i1,i2,max_len) )
            tmp = tf.slice(p, [i1,i2], [1, 1])
            tmp = K.squeeze(tmp, 0)
            output = tf.concat([output, tmp], 0)
            return i + 1, max_len, output
        _, max_len, output = tf.while_loop(cond, body, [i, max_len, output], shape_invariants=[i.get_shape(), max_len.get_shape(), tf.TensorShape([None])])
        output = tf.cast(output, dtype=tf.float32)
        return output
    def max_pi(vl, vr, pli, pri, plen):
        output = vl
        sel_sum = tf.constant(0, dtype=tf.float32)
        i = tf.constant(0)
        def cond(i, plen, sel_sum, output):
            return tf.less(i, plen+1)
        def body(i, plen, sel_sum, output):
            tmp1 = tf.slice(pli, [0], [i])
            tmp2 = tf.slice(pri, [i], [plen-i])
            tmp = tf.concat([tmp1, tmp2], 0)
            sum = K.sum(tmp, axis=None)
            def getV(vl, vr, i, plen):
                tmpV1 = tf.slice(vl, [0], [i])
                tmpV2 = tf.slice(vr, [i], [plen-i])
                return tf.concat([tmpV1, tmpV2], 0)
            sel_sum = tf.cond(tf.less(sel_sum, sum), lambda: sum, lambda: sel_sum)
            output = tf.cond(tf.less(sel_sum, sum), lambda: getV(vl, vr, i, plen), lambda: output)
            return i + 1, plen, sel_sum, output
        _, plen, sel_sum, output = tf.while_loop(cond, body, [i, plen, sel_sum, output], shape_invariants=[i.get_shape(), plen.get_shape(), sel_sum.get_shape(), tf.TensorShape([None])])
        return output
    def max_p(mi, vl, vr, pl, pr, cnt):
        output = tf.constant([], dtype=tf.float32)
        tmp = tf.slice(vl, [0], [1])
        tmp = tf.cast(tmp, dtype=tf.float32)
        output = tf.concat([output, tmp], 0)
        i = tf.constant(0)
        _mi = tf.constant(0)
        def cond(i, cnt, _mi, output):
            return  tf.less(i, cnt-1)
        def body(i, cnt, _mi, output):
            starti = _mi + 1
            _mi = tf.cast(mi[i+1], dtype=tf.int32)
            pli = tf.slice(pl, [starti], [_mi-starti])
            pri = tf.slice(pr, [starti], [_mi-starti])
            vli = tf.slice(vl, [starti], [_mi-starti])
            vri = tf.slice(vr, [starti], [_mi-starti])
            pi  = max_pi(vli, vri, pli, pri, _mi-starti)
            tmp = tf.slice(vl, [_mi], [1])
            output = tf.concat([output, pi, tmp], 0)
            return i + 1, cnt, _mi, output
        _, cnt, _mi, output = tf.while_loop(cond, body, [i, cnt, _mi, output], shape_invariants=[i.get_shape(), cnt.get_shape(), _mi.get_shape(),  tf.TensorShape([None])])
        return output
    def _pad(ids, max_seq_len):
#        print("--ids", ids)
#        print("--size", tf.size(ids))
        id_len = tf.size(ids)
        id_len = tf.cond(tf.less(id_len, max_seq_len), lambda: id_len, lambda: max_seq_len)
        ids    = tf.slice(ids, [0], [id_len])
        tmp    = tf.fill([max_seq_len - id_len], 0, name=None)
        tmp    = tf.cast(tmp, dtype=tf.float32)
        output = tf.concat([ids,tmp], 0)
#        output = tf.cast(output, dtype=tf.float32)
        return output
    def _each(p, v, mi, n, cnt):
        # n:seq, 
        # cnt:实际长度
        # mi:seq的下标
#        logging.getLogger().info("\n--_each-p\n  %s" % (tf.shape(p)))
#        logging.getLogger().info("--_each-v\n  %s" % (tf.shape(v)))
        # 向前向后2种编号, 0,1,2..
        #   mi长度可小于n(n用作填充)
        mi_l = left_full(mi, cnt, n)
        mi_r = right_full(mi, cnt, n)
#        logging.getLogger().info("--p\n  %s" % (p))
#        logging.getLogger().info("--n\n  %s" % (n))
#        logging.getLogger().info("--mi_l\n  %s" % (mi_l))
#        logging.getLogger().info("--mi_r\n  %s" % (mi_r))
        # 连接p, 将编号换成概率
        pl = _concat(p, mi_l, n, mi, cnt)
        pr = _concat(p, mi_r, n, mi, cnt)
#        logging.getLogger().info("--pl\n  %s" % (pl))
#        logging.getLogger().info("--pr\n  %s" % (pr))
        # 连接v, 将编号换成编号
        vl = _concat(v, mi_l, n, mi, cnt)
        vr = _concat(v, mi_r, n, mi, cnt)
        # 选择最大概率
        output = max_p(mi, vl, vr, pl, pr, cnt)
        output = _pad(output, max_seq) #只有1维, 不能用pad_sequences
        return output
    output = tf.map_fn(lambda x: _each(x[0], x[1], x[2], x[3], x[4]), (em_p, em_v, input_mi, input_n, input_cnt), dtype=tf.float32)
    return output
    
def get_em_x(x, st_size=5):
    def _seq(x):
        output = tf.fill([st_size], x, name=None)
        output = tf.cast(output, dtype=tf.float32)
        return output
    def _each(x):
        output = tf.map_fn(lambda x: _seq(x), x, dtype=tf.float32)
        return output
    output = tf.map_fn(lambda x: _each(x), x, dtype=tf.float32)
    return output

def get_em_m(x, st_size=5):
    def _seq(s):
        output = [i for i in range(st_size)]
        output = tf.cast(output, dtype=tf.float32)
        return output
    def _each(x):
        output = tf.map_fn(lambda x: _seq(x), x, dtype=tf.float32)
        return output
    output = tf.map_fn(lambda x: _each(x), x, dtype=tf.float32)
    return output



# In[2]:

init_style_size = 17
init_board_size = 5
class EmbeddingsLayer(Layer):
    debug = False
    def __init__(self, max_vocab_len, max_modes_len,    **kwargs):
        #print("--em-Layer--init", max_vocab_len)
        self.vocab_size     = max_vocab_len      # 1000
        self.seq_size       = max_modes_len      # 35
        self.style_size     = init_style_size    # 18
        self.board_size     = init_board_size    # 5
#        self.output_dim     = init_style_size
        self.word_embeddings_layer = None
        self.layer_norm_layer = None
        self.dropout_layer    = None
        super(EmbeddingsLayer, self).__init__(**kwargs)

    # noinspection PyAttributeOutsideInit
    def build(self, input_shape):
        #print("--em-Layer--build", input_shape)
        # input_shape: () of seq_len
        assert isinstance(input_shape, list)
        assert len(input_shape) == 5
        input_x_shape, input_mi_shape, input_m_shape, input_n_shape, input_cnt_shape = input_shape
        self.input_spec = [keras.layers.InputSpec(shape=input_x_shape),
                           keras.layers.InputSpec(shape=input_mi_shape),
                           keras.layers.InputSpec(shape=input_m_shape),
                           keras.layers.InputSpec(shape=input_n_shape),
                           keras.layers.InputSpec(shape=input_cnt_shape)]
            
        self.p_layer = keras.layers.Embedding(
            input_dim=self.vocab_size,
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="word_p"
        )
        self.v_layer = keras.layers.Embedding(
            input_dim=self.vocab_size,
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="word_v"
        )
        super(EmbeddingsLayer, self).build(input_shape)
      
    def call(self, inputs, mask=None, training=None): 
        input_x, input_mi, input_m, input_n, input_cnt = inputs
        input_x = tf.cast(input_x, dtype=tf.int32)
        input_mi = tf.cast(input_mi, dtype=tf.int32)
        input_cnt = K.flatten(input_cnt)
        
        # shape (5,35,17)
        em_p = self.p_layer(input_x)
        em_v = self.v_layer(input_x)
        em_x = get_em_x(input_x, st_size=self.style_size) # x*17
        em_m = get_em_m(input_x, st_size=self.style_size) # 0~16
        
        # pxvm
        out_p = get_pxvm(em_p, em_p, input_mi, input_n, input_cnt, max_seq=self.seq_size)
        out_v = get_pxvm(em_p, em_v, input_mi, input_n, input_cnt, max_seq=self.seq_size)
        out_x = get_pxvm(em_p, em_x, input_mi, input_n, input_cnt, max_seq=self.seq_size)
        out_m = get_pxvm(em_p, em_m, input_mi, input_n, input_cnt, max_seq=self.seq_size)

        out_v = tf.expand_dims(out_v, -1)
        out_x = tf.expand_dims(out_x, -1)
        out_m = tf.expand_dims(out_m, -1)
        out_xvm = tf.concat([out_x, out_v, out_m], -1)
        # m范围是0~16, st_size>16
        # shape (5,17,5,2)
        out_board = get_board(out_xvm, input_mi, input_cnt, st_size=17, board_len=self.board_size)
        
        # 保留vx, 不要m
        out_board = tf.slice(out_board, [0,0,0,0], [-1,-1,-1,2])
            
        out_board = tf.reshape(out_board, [-1,17*5*2])
        return out_board
        
#    def compute_output_shape(self, input_shape):
#        print("--em-Layer--shape", input_shape)
#        return (input_shape[0], self.style_size, self.output_dim, self.output_dim)



# In[3]:

def board_compare(board1, board2, board_size=5, style_size=17):
    def _replace(row,a,b):
        arr_zero = tf.zeros([0,2], dtype=tf.float32)
        arr_p = tf.cond(tf.equal(a, 0), lambda:arr_zero, lambda:tf.slice(row, [0,0], [a,-1]))
        arr_n = tf.cond(tf.equal(b, board_size-1), lambda:arr_zero, lambda:tf.slice(row, [b+1,0], [-1,-1]))
        arr_l = tf.slice(row, [a,0], [1,-1])
        arr_r = tf.slice(row, [b,0], [1,-1])
        row = tf.concat([arr_p, arr_r, arr_l, arr_n], 0)
        return row
    def _sort(row):
#        ### 查看排序+替换过程
#        #   替换前
#        if EmbeddingsLayer.debug:
#            row_pre = row
#            logging.getLogger().info("--_sort start\n  %s" % (row))
        for i in range(board_size-1):
            for j in range(board_size-i-1):
                arr_l = tf.slice(row, [j,0], [1,1])
                arr_l = K.squeeze(K.squeeze(arr_l, 0), 0)
                arr_r = tf.slice(row, [j+1,0], [1,1])
                arr_r = K.squeeze(K.squeeze(arr_r, 0), 0)
                row = tf.cond(tf.less(arr_l, arr_r), lambda:_replace(row,j,j+1), lambda:row)
#        #   替换后
#        if EmbeddingsLayer.debug:
#            logging.getLogger().info("--_sort start\n  %s" % (row))
#            logging.getLogger().info("--_sort result %s" % (np.all(tf.equal(row_pre, row))))
        return row
    def _compare_cnt(row1, row2):
        ### 这是2个特殊的公式:
        #    硬套的公式, 为了计算方便
        #    sum=((max-0.5)*cnt1+(min-0.5)*cnt2)/(cnt1+cnt2)
        #    cnt=(max+min)/(min+2)
        _cnt1 = tf.constant(0., dtype=tf.float32)
        _cnt2 = tf.constant(0., dtype=tf.float32)
        output = tf.constant(0., dtype=tf.float32)
        for i in range(board_size):
            vr = tf.slice(row1, [i], [1])
            vr = K.squeeze(vr, -1)
            _cnt1 = tf.cond(tf.greater(vr, 0), lambda:_cnt1+1, lambda:_cnt1)
        for i in range(board_size):
            vr = tf.slice(row2, [i], [1])
            vr = K.squeeze(vr, -1)
            _cnt2 = tf.cond(tf.greater(vr, 0), lambda:_cnt2+1, lambda:_cnt2)
        _max = tf.cond(tf.greater(_cnt1, _cnt2), lambda:_cnt1, lambda:_cnt2)
        _min = tf.cond(tf.greater(_cnt1, _cnt2), lambda:_cnt2, lambda:_cnt1)
        output = (_max+_min)/(_min+2)
#        logging.getLogger().info("--_compare_cnt  %s %s-->%s" % (np.array(_cnt1), np.array(_cnt2), np.array(output)))
        return output
    def _compare(row1, row2):
        ### 比较行与行
        #   shape (5),(5)
        #   比较方式: 类型+个数
        _sum = tf.constant(0., dtype=tf.float32)
        _cnt = tf.constant(0., dtype=tf.float32)
        #   类型--两两相乘/总次数
        r=0
        while (r < board_size):
            c=0
            vr = tf.slice(row1, [r], [1])
            vr = K.squeeze(vr, -1)
            while (c < board_size):
                vc = tf.slice(row2, [c], [1])
                vc = K.squeeze(vc, -1)
                calc = K.abs(vr+vc)/(K.abs(vr-vc)+K.epsilon())
                calc = K.clip(calc, 1, 9) #裁剪
                calc = calc-0.5 + K.abs(vr+vc)*0.001
                _sum = tf.cond(tf.logical_or(tf.not_equal(vc, 0), tf.not_equal(vr, 0)), lambda:_sum+calc, lambda:_sum)
                _cnt = tf.cond(tf.logical_or(tf.not_equal(vc, 0), tf.not_equal(vr, 0)), lambda:_cnt+1, lambda:_cnt)
                c = c + 1
            r = r + 1
        cnt3 = _compare_cnt(row1, row2)
        cnt3 = tf.cond(tf.equal(cnt3, 0), lambda:cnt3+1, lambda:cnt3)
        output = tf.cond(tf.equal(_cnt, 0), lambda:_sum, lambda:tf.squeeze(_sum*cnt3/_cnt))
        ### 查看行与行比较结果
#        if EmbeddingsLayer.debug:
#            logging.getLogger().info("\n--row1  %s" % (row1))
#            logging.getLogger().info("--row2  %s" % (row2))
#            logging.getLogger().info("--sum  %s" % (_sum))
#            logging.getLogger().info("--cnt  %s" % (_cnt))
#            logging.getLogger().info("--compare  %s" % (output))
        ###
        ### 直接输出概率:
        ###   手动测试0.7比较好
        output = output*0.7
        return output
    def _each(board1, board2):
        # 按x排序, 没起作用
        board1 = tf.map_fn(lambda x: _sort(x), board1, dtype=tf.float32)
        board2 = tf.map_fn(lambda x: _sort(x), board2, dtype=tf.float32)
#        # 查看输入x+v值
#        if EmbeddingsLayer.debug:
#            logging.getLogger().info("--board1\n  %s" % (board1))
#            logging.getLogger().info("--board2\n  %s" % (board2))
        board1 = tf.slice(board1, [0,0,1], [-1,-1,1])
        board2 = tf.slice(board2, [0,0,1], [-1,-1,1])
        board1 = K.squeeze(board1, -1)
        board2 = K.squeeze(board2, -1)
        # shape (17, 5)
        output = tf.map_fn(lambda x: _compare(x[0], x[1]), (board1, board2), dtype=tf.float32)
        return output
    output = tf.map_fn(lambda x: _each(x[0], x[1]), (board1, board2), dtype=tf.float32)
    return output
    
def brd_compare(inputs):
    board1, board2 = inputs
    board1 = tf.reshape(board1, [-1,17,5,2])
    board2 = tf.reshape(board2, [-1,17,5,2])
    output = board_compare(board1, board2, board_size=init_board_size, style_size=init_style_size)
    return  tf.reshape(output,[-1,17])



# In[4]:

# 效果1
#init_board_scale = np.array([0.99,  1,1,1,1,1,  1,1,1,0.95,0.90,  0.90,0.90,0.95,0.90,0.90, 0.90])
# 效果2(细整过)
#init_board_scale = np.array([0.00,  1.00, 0.95, 1.00, 1.00, 1.00,   1.00, 1.00, 1.00, 1.17, 0.80,   0.80, 0.80, 0.90, 0, 0.80,  0.80])
# 效果3(细整过)
init_board_scale = np.array([0.00,  1.00, 1.15, 1.00, 1.00, 1.00,   1.00, 1.00, 1.00, 1.695, 0.80,   0.80, 0.80, 0.90, 0, 0.80,  0.80])

def brd_mean(inputs):
    b_S17 = inputs
    def _each(b_17):
        # (删除了2个0, 最终结果增加了1个点)
        output = b_17*init_board_scale
        cnt = K.sum(tf.cast(tf.greater(output, 0), dtype=tf.float32), axis=None, keepdims=False)
        cnt = tf.cond(tf.equal(cnt, 0), lambda:cnt+1, lambda:cnt)
        output = K.sum(output, axis=None, keepdims=True)/cnt
        return output
    output = tf.map_fn(lambda x: _each(x), b_S17, dtype=tf.float32)
    return tf.reshape(output,[-1,1])



# In[5]:

#init_max_value = [1.183, 0.70,1.25,1.00,1.02,0.00, 0.60,0.95,0,0,0, 0,0,0,0,0, 0]
init_max_value = [1.064, 0.70,1.25,1.00,1.02,0.00, 0.60,0.95,0,0,0, 0,0,0,0,0, 0]
init_max_hv   = 2.76
### 直接混合, 新指标(max)为False才用旧指标(mean)
### 效果比第1种好, 比第3种差
def brd_max(inputs):
    b_S17 = inputs
    def _each(b_17):
        pT = tf.constant([0.8], dtype=tf.float32)
        pN = tf.constant([0.2], dtype=tf.float32)
        output = b_17*init_max_value
        logging.getLogger().info("--_each\n  %s" % output)
        output = K.sum(output, axis=None, keepdims=False)
        logging.getLogger().info("--sum\n  %s" % output)
        output = tf.cond(tf.greater(output, init_max_hv), lambda:pT, lambda:pN)
        return output
    def get_pred(inputs):
        b_S17 = inputs
        output = tf.map_fn(lambda x: _each(x), b_S17, dtype=tf.float32)
        return tf.reshape(output,[-1,1])
    n_pred = brd_mean(b_S17)
    x_pred = get_pred(b_S17)
    n_pred = tf.reshape(n_pred,[-1])
    x_pred = tf.reshape(x_pred,[-1])
    ###
    xt= K.round(K.clip(x_pred, 0, 1))
    xn= 1-xt
    ###
    output = n_pred*xn + x_pred*xt
    return  tf.reshape(output,[-1,1])


# In[6]:
# 效果1
#init_cls_value = np.array([0.82,  0.50, 1.15, 1.00, 0.87, 0,  0.65, 0.94, 0, 0, 0,  0, 0, 0, 0, 0,  0])
# 效果2(细整过)
init_cls_value = np.array([1.286,  0.883, 1.117, 1.00, 1.24, 0,  0.80, 1.10, 0, 0, 0,  0, 0, 0, 0, 0,  0])

partV=[
        [0.30,0.35,2.81,5.00,0.80],
        [0.35,0.40,2.31,5.00,0.80],
        [0.40,0.45,2.437,5.00,0.80],
        [0.45,0.50,1.75,5.00,0.80],
        [0.50,0.55,0.00,1.50,0.20], 
        [0.55,0.60,0.00,1.687,0.20],
        [0.60,0.65,0.00,1.375,0.20]
     ]
### 渐进混合, 小中取大, 大中去小
###   旧指标(mean)小于0.5时--新指标(max)添加最大值:
###   旧指标(mean)大于0.5时--新指标(max)去掉最小值:
def brd_max_mean(inputs):
    b_S17 = inputs
    def each_max(b_17):
        output = b_17*init_cls_value
        output = K.sum(output, axis=None, keepdims=False)
        return output
    def get_max_pred(inputs):
        b_S17 = inputs
        output = tf.map_fn(lambda x: each_max(x), b_S17, dtype=tf.float32)
        return tf.reshape(output,[-1,1])
    def each_merge(n_pred, x_pred, pV):
        out_pt = n_pred
        for i, (minO,maxO,minP,maxP,p) in enumerate(partV):
            is_n  = tf.logical_and(tf.greater(n_pred, minO), tf.less_equal(n_pred, maxO))
            is_x  = tf.logical_and(tf.greater(x_pred, minP), tf.less_equal(x_pred, maxP))
            is_xn = tf.logical_and(is_n, is_x)
            out_pt = tf.cond(is_xn, lambda:p, lambda:out_pt)
            #break
        return out_pt
    def merge_pred(mean_pred, max_pred, partV):
        mean_pred = K.squeeze(mean_pred, -1)
        max_pred = K.squeeze(max_pred, -1)
        output = tf.map_fn(lambda x: each_merge(x[0], x[1], partV), (mean_pred, max_pred), dtype=tf.float32)
        return tf.reshape(output,[-1,1])
    ###
    # 获取mean指标(所有类型)
    mean_pred = brd_mean(b_S17)
    # 获取max指标(常用类型)
    max_pred = get_max_pred(b_S17)
    # 合并指标:
    output = merge_pred(mean_pred, max_pred, partV)
    return  tf.reshape(output,[-1,1])


# In[7]:

def brd_concat(inputs):
    ### 直接输出概率:
    p = K.clip(inputs, 0, 1)
    n = 1-p
    output = tf.concat([n, p], -1)
    return  tf.reshape(output,[-1,2])
    

