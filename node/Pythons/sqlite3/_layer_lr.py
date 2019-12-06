
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






def vlist_std(mt, xl, xr, cnt):
    def v_std(mt, xl, xr, cnt):
        shape_list = mt.shape.as_list()
        #print("--shape_list", shape_list)
        _sum = tf.zeros([1, shape_list[-1]], dtype=tf.float32)
        def cond(i, cnt, _sum):
            return  tf.less(i, cnt-1)
        def body(i, cnt, _sum):
            mc_l = tf.slice(mt, [i,0], [1,-1])
            mc_r = tf.slice(mt, [i+1,0], [1,-1])
            xr_l = tf.slice(xr, [i,0], [1,-1])
            xl_r = tf.slice(xl, [i+1,0], [1,-1])
            _diff = tf.multiply(mc_l, xr_l)-tf.multiply(mc_r, xl_r)
            _diff = K.square(_diff)
            _sum = _sum + _diff
            return i + 1, cnt, _sum
        i, _, _sum = tf.while_loop(cond, body, (1, cnt, _sum))
        #cnt = K.flatten(cnt)
        _c = tf.cast(cnt, dtype=tf.float32)
        output = K.sqrt(_sum/(_c + K.epsilon()))
        return output
    output = tf.map_fn(lambda x: v_std(x[0], x[1], x[2], x[3]), (mt, xl, xr, cnt), dtype=tf.float32)
    output = K.squeeze(output, 1)
    return output
    
def hlist_std(tb, xh, mt, cnt):
    def h_std(tb, xh, mt, cnt):
        shape_list = tb.shape.as_list()
        #print("--shape_list", shape_list)
        _sum = tf.zeros([1, shape_list[-1]], dtype=tf.float32)
        def cond(i, cnt, _sum):
            return i < cnt
        def body(i, cnt, _sum):
            t_b = tf.slice(tb, [i,0], [1,-1])
            m_t = tf.slice(mt, [i,0], [1,-1])
            _diff = t_b - tf.multiply(xh, m_t)
            _diff = K.square(_diff)
            _sum = _sum + _diff
            return i + 1, cnt, _sum
        i, _, _sum = tf.while_loop(cond, body, (1, cnt, _sum))
        #cnt = K.flatten(cnt)
        _c = tf.cast(cnt, dtype=tf.float32)
        output = K.sqrt(_sum/(_c + K.epsilon()))
        return output
    output = tf.map_fn(lambda x: h_std(x[0], x[1], x[2], x[3]), (tb, xh, mt, cnt), dtype=tf.float32)
    output = K.squeeze(output, 1)
    return output

def hlist_head(mc):
    output = tf.slice(mc, [0,0,0], [-1,1,-1])
    output = K.squeeze(output, 1)
    return output


init_style_size = 18
class EmbeddingsLayer(Layer):
    debug = False
    def __init__(self, max_vocab_len,    **kwargs):
        print("--em-Layer--init", max_vocab_len)
        self.vocab_size     = max_vocab_len      # 1000
        self.style_size     = init_style_size    # 18
        self.output_dim     = self.style_size
        self.word_embeddings_layer = None
        self.layer_norm_layer = None
        self.dropout_layer    = None
        super(EmbeddingsLayer, self).__init__(**kwargs)

    # noinspection PyAttributeOutsideInit
    def build(self, input_shape):
        print("--em-Layer--build", input_shape)
        # input_shape: () of seq_len
        assert isinstance(input_shape, list)
        assert len(input_shape) == 3
        input_bids_shape, input_wids_shape, input_cnt_shape = input_shape
        self.input_spec = [keras.layers.InputSpec(shape=input_bids_shape),
                           keras.layers.InputSpec(shape=input_wids_shape),
                           keras.layers.InputSpec(shape=input_cnt_shape)]
       
        self.mc_layer = keras.layers.Embedding(
            input_dim=self.style_size,             # 17*17
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="style_mc"
        )
        self.mt_layer = keras.layers.Embedding(
            input_dim=self.style_size,             # 17*17
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="style_mt"
        )
            
        self.xl_layer = keras.layers.Embedding(
            input_dim=self.vocab_size,
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="word_xl"
        )
        self.xr_layer = keras.layers.Embedding(
            input_dim=self.vocab_size,
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="word_xr"
        )
        self.xt_layer = keras.layers.Embedding(
            input_dim=self.vocab_size,
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="word_xt"
        )
        super(EmbeddingsLayer, self).build(input_shape)
      
    def call(self, inputs, mask=None, training=None):
        input_mids, input_wids, input_cnt = inputs
        if self.debug:
            logging.getLogger().info("##############################################################")
            logging.getLogger().info("--em-Layer--call--input_mids\n  %s" % (tf.shape(input_mids)))
            logging.getLogger().info("\n--em-Layer--call--input_wids\n  %s" % (tf.shape(input_wids)))
        input_mids = tf.cast(input_mids, dtype=tf.int32)
        input_wids = tf.cast(input_wids, dtype=tf.int32)

        #input_mids = input_mids+1
        #input_mids = tf.clip_by_value(input_mids, 1, 17)
        embedding_mb = self.mc_layer(input_mids)
        embedding_mt = self.mc_layer(input_mids)
#        embedding_mt = self.xt_layer(input_wids)
        embedding_xl = self.xl_layer(input_wids)
        embedding_xr = self.xr_layer(input_wids)
        embedding_xt = (embedding_xr+embedding_xl)/2
        embedding_tb = tf.multiply(embedding_mb, embedding_xt)
#        embedding_tb = tf.multiply(embedding_mt, embedding_xt)

        embedding_head = hlist_head(embedding_xl)
        embedding_out1 = vlist_std(embedding_mb, embedding_xl, embedding_xr, input_cnt)
        embedding_out2 = hlist_std(embedding_tb, embedding_head, embedding_mt, input_cnt)
        if self.debug:
            e_mean1 = K.mean(embedding_out1, axis=0, keepdims=True)
            e_mean2 = K.mean(embedding_out2, axis=0, keepdims=True)
            logging.getLogger().info("--e_mean1  %s" % (e_mean1))
            logging.getLogger().info("--e_mean2  %s" % (e_mean2))

        return embedding_out1*0.5 + embedding_out2*0.5, embedding_head
        
    def compute_output_shape(self, input_shape):
        print("--em-Layer--shape", input_shape)
        return (input_shape[0], self.output_dim)
        

def detail_slice(inputs):
    mark, cnt  = inputs
    shape_list = tf.shape(mark)
    max_len    = shape_list[0] #预处理才能取到值
    max_cnt    = shape_list[1]
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n--max_len\n  %s" % (max_len))
        logging.getLogger().info("\n--max_cnt\n  %s" % (max_cnt))
    output = None
    
    def cond(i, a):
        return i < max_len
    def body(i, a):
        nonlocal output
        _cnt  = cnt[i]
        if EmbeddingsLayer.debug:
            logging.getLogger().info("--mark[i]\n  %s" % (mark[i]))
            logging.getLogger().info("--_cnt\n  %s" % (_cnt))
        _mark = tf.slice(mark[i], [0,0], [_cnt,-1])
        _mark = tf.pad(_mark, np.array([[0,max_cnt-_cnt],[0,0]]))
        _mark = tf.expand_dims(_mark, 0)
        output = tf.cond(output is not None, 
                lambda: tf.concat([output, _mark], 0), 
                lambda: _mark)
        return i + 1, a
    i, a = tf.while_loop(cond, body, (0, 0))
    return output

def mark_slice(inputs):
    mark, cnt  = inputs
    mark = np.array(mark) ###
    # get mark:
    unit = np.array([1,0])
    mark_SN1 = tf.expand_dims(mark, -1)
    mark_SN2 = tf.multiply(mark_SN1,unit)+tf.multiply(1-mark_SN1,1-unit)
    mark_SN2 = detail_slice([mark_SN2, cnt])
    return mark_SN2


def add_mark(embeddings, mark): 
    mark_SN2 = mark
    # add mark:
    em_SN17  = embeddings
    em_17SN  = tf.transpose(em_SN17,[2,0,1])
    em_17SN1 = tf.expand_dims(em_17SN, -1)
    em_17SN2 = tf.multiply(em_17SN1, mark_SN2)
    em_SN217 = tf.transpose(em_17SN2,[1,2,3,0])
    return em_SN217
    
def add_block(embeddings, block):
##############################################################################
#    bc_array = [
#                [15,16,8,1,2,10,11,3,7,4,6],
#                [15,14,6,5,4,12,11,3,7,2,8],
#                [15,14,6,5,13,9,1,8,16,2,4],
#                [11,12,4,13,9,1,2,10,6,8]
#               ]
##########################0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16###
    bc_array = np.array([[1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1],
                         [1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0],
                         [1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1],
                         [1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0]])
    bc_array = tf.cond(tf.greater(style_size,17), 
                    lambda:tf.pad(bc_array, np.array([[0,0],[0,style_size-17]])),
                    lambda:bc_array)

    # get block:
    bc_SN   = block
    bc_SN17 = tf.gather(bc_array, bc_SN)
    bc_SN17 = tf.cast(bc_SN17, dtype=tf.float32)

    # add block:
    em_SN217 = embeddings
    em_2SN17 = tf.transpose(em_SN217,[2,0,1,3])
    bc_2SN17 = tf.multiply(em_2SN17, bc_SN17)
    bc_SN217 = tf.transpose(bc_2SN17,[1,2,0,3])
    return bc_SN217

def add_relation(inputs):
    re_SN217 = inputs
    re_Sa217 = tf.slice(re_SN217, [0,0,0,0], [-1, 1,-1,-1])
    re_Sb217 = tf.slice(re_SN217, [0,1,0,0], [-1,-1,-1,-1])
    re_Sc217 = tf.concat([re_Sb217, re_Sa217], 1)
    out_SN217 = tf.multiply(re_SN217, re_Sc217)
    return out_SN217

def add_mark_block_relation(inputs):
    embeddings, mark, block = inputs
    embeddings = tf.cast(embeddings, dtype=tf.float32)
    mark       = tf.cast(mark, dtype=tf.float32)
    block      = tf.cast(block, dtype=tf.int32)
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n##############################################################")
        logging.getLogger().info("--embeddings\n  %s" % (tf.shape(embeddings))) #shape(10, 14, 18)
        logging.getLogger().info("\n--mark\n  %s" % (tf.shape(mark)))
        logging.getLogger().info("\n--block\n  %s" % (tf.shape(block)))       #shape(10, 14)
        #logging.getLogger().info("\n--embeddings\n  %s" % embeddings)
        #logging.getLogger().info("\n--mark\n  %s" % (mark))
        #logging.getLogger().info("\n--block\n  %s" % block)
    
    # add mark:
    output = add_mark(embeddings, mark)
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n--add_mark\n  %s" % (tf.shape(output)))  #shape(10, 14, 2, 18)
        #logging.getLogger().info("\n--  %s" % output)
    # add block:
    output = add_block(output, block)
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n--add_block\n  %s" % (tf.shape(output)))      #shape(10, 14, 2, 18)
        #logging.getLogger().info("\n--  %s" % output)
    # add relation:
    output = add_relation(output) #改成平均数试试
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n--add_relation\n  %s" % (tf.shape(output)))      #shape(10, 14, 2, 18)
        #logging.getLogger().info("\n--  %s" % output)
    return output

def add_merge_scale(inputs):
    mbr_SN217, scale_SN = inputs
    if EmbeddingsLayer.debug:
        logging.getLogger().info("##############################################################")
        logging.getLogger().info("\n--add_merge_scale--mbr\n  %s" % (tf.shape(mbr_SN217)))      #shape(10, 14, 2, 18)
        logging.getLogger().info("\n--add_merge_scale--scale\n  %s" % (tf.shape(scale_SN)))     #shape(10, 14)
        #logging.getLogger().info("\n--  %s" % mbr_SN217)
        #logging.getLogger().info("\n--  %s" % scale_SN)
    scale_SN = tf.cast(scale_SN, dtype=tf.float32)
    
    # add merge:
    #shape_list  = tf.shape(mbr_SN217)      #取不到值
    shape_list  = mbr_SN217.shape.as_list()
    shape_list  = [-1] + shape_list[1:2] + shape_list[3:]
    mbr_SN217_0 = tf.slice(mbr_SN217, [0,0,0,0], [-1,-1,1,-1])
    mbr_SN217_1 = tf.slice(mbr_SN217, [0,0,1,0], [-1,-1,-1,-1])
    # reshape
    mbr_SN217_0 = tf.reshape(mbr_SN217_0, shape_list)
    mbr_SN217_1 = tf.reshape(mbr_SN217_1, shape_list)
    mbr_SN17    = mbr_SN217_0 + mbr_SN217_1
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n--add_merge_scale--mbr_SN17\n  %s" % (tf.shape(mbr_SN17)))   #shape(10, 14, 18)
        #logging.getLogger().info("\n--  %s" % mbr_SN17)
    
    # add scale:
    mbr_17SN = tf.transpose(mbr_SN17,[2,0,1])
    ms_17SN  = tf.multiply(mbr_17SN, scale_SN)
    ms_SN17  = tf.transpose(ms_17SN,[1,2,0])
    # add sum:
    ms_S17   = K.sum(ms_SN17, axis=1)
    avg_S    = K.mean(ms_S17, axis=-1)
    # mean_S计算均值和方差, 值差不多
    #mean_S, variance_S = tf.nn.moments(ms_S17, axes=-1)
    # avg_S不加维度训练时报错(简单测试未报错)
    avg_S1   = tf.expand_dims(avg_S, -1)
    ms_S17   = tf.divide(ms_S17, avg_S1)*0.45 #用0.2~0.5
    return ms_S17
    
def add_score(inputs):
    ms1_S17, ms2_S17 = inputs
    if EmbeddingsLayer.debug:
        logging.getLogger().info("##############################################################")
        logging.getLogger().info("\n--add_score--ms1_S17\n  %s" % (tf.shape(ms1_S17)))    #shape(10, 18)
        logging.getLogger().info("\n--add_score--ms2_S17\n  %s" % (tf.shape(ms2_S17)))    #shape(10, 18)
        #logging.getLogger().info("\n--  %s" % ms1_S17)
    output = K.sqrt(K.square(ms1_S17-ms2_S17))
    if EmbeddingsLayer.debug:
        logging.getLogger().info("\n--add_score--output\n  %s" % (tf.shape(output)))     #shape(10, 18)
        #logging.getLogger().info("\n--  %s" % output)
    return output



