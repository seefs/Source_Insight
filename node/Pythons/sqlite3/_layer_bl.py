
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





init_style_size = 18
        
class EmbeddingsLayer(Layer):
    debug = False
    def __init__(self, max_vocab_len,    **kwargs):
        print("--em-Layer--init", max_vocab_len)
        self.vocab_size     = max_vocab_len # 1000
        self.style_size     = init_style_size    # 18
        self.word_embeddings_layer = None
        self.layer_norm_layer = None
        self.dropout_layer    = None
        super(EmbeddingsLayer, self).__init__(**kwargs)

    # noinspection PyAttributeOutsideInit
    def build(self, input_shape):
        print("--em-Layer--build", input_shape)
        # input_shape: () of seq_len
        assert isinstance(input_shape, list)
        assert len(input_shape) == 2
        input_bids_shape, input_wids_shape = input_shape
        self.input_spec = [keras.layers.InputSpec(shape=input_bids_shape),
                           keras.layers.InputSpec(shape=input_wids_shape)]
       
        self.bottom_embeddings_layer = keras.layers.Embedding(
            input_dim=self.style_size,             # 17*17
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="bottom_embeddings"
        )
            
        self.word_embeddings_layer = keras.layers.Embedding(
            input_dim=self.vocab_size,
            output_dim=self.style_size,
            mask_zero=False,                        # =self.params.mask_zero,
            name="word_embeddings"
        )
        self.layer_norm_layer = LayerNormalization(name="LayerNorm")
        self.dropout_layer    = keras.layers.Dropout(rate=0.02)
        super(EmbeddingsLayer, self).build(input_shape)
      
    def call(self, inputs, mask=None, training=None):
        input_bids, input_wids = inputs
        #print("input_mids", (tf.shape(input_bids)))
        #print("input_wids", (tf.shape(input_wids)))
        if self.debug:
            logging.getLogger().info("##############################################################")
            logging.getLogger().info("--em-Layer--call--input_bids\n  %s" % (tf.shape(input_bids)))
            logging.getLogger().info("\n--em-Layer--call--input_wids\n  %s" % (tf.shape(input_wids)))
        input_bids = tf.cast(input_bids, dtype=tf.int64)
        input_wids = tf.cast(input_wids, dtype=tf.int64)
        
        embedding_b = self.bottom_embeddings_layer(input_bids)
        embedding_w = self.word_embeddings_layer(input_wids)
        embedding_output = tf.multiply(embedding_b, embedding_w)
        embedding_output = self.layer_norm_layer(embedding_output)
        embedding_output = self.dropout_layer(embedding_output, training=training)

        return embedding_output   # [B, seq_len, hidden_size]  

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
    bc_array = tf.cond(tf.greater(init_style_size,17), 
                    lambda:tf.pad(bc_array, np.array([[0,0],[0,init_style_size-17]])),
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



