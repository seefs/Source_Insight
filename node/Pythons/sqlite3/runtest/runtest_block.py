

import sys
import os
import tensorflow as tf
import numpy as np
from tensorflow.python import keras
from tensorflow.python.keras import backend as K

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

# 分块
from _block import b2mts                    # 分块
# 预处理
from _layer import add_mark             # 分块标记
from _layer import add_block            # 分块标记
from _layer import add_relation         # 分块标记
#from _layer import add_mark_block_relation
from _layer import add_merge_scale      # 分块标记
from _layer import add_score            # 分块标记
#from _layer import detail_slice        # 分块标记
from _layer import mark_slice           # 分块标记

from _layer import vlist_std           # 分块标记



    
# test-1:
#   句子--分词
def tokenizer_test():
    token_chg = TokenizerChg(db_path=sqlite3_file, debug_log=True)
    t = "借呗还款额度限制"
    print ("句子   : %s" % (t))
    mode2_list = token_chg.tokens_mode2(text=t)

#tokenizer_test()


    
# test-2:
#   句子--分块
def b2mts_test():
    _list = [np.array([[ 2,  2, 13, 10,  3,  6, 11,  0]]), 
             np.array([[ 2, 13, 10,  3,  6, 11,  0,  0]]), 
             np.array([7]), 
             np.array([6])]
    _m1, _m2, _t1, _t2, _s1, _s2 = b2mts(_list, 10)
    print("--ret--_m1", _m1)
    print("--ret--_m2", _m2)
    print("--ret--_t1", _t1)
    print("--ret--_t2", _t2)
    print("--ret--_s1", _s1)
    print("--ret--_s2", _s2)

#b2mts_test()


    
# test-3:
#   预处理--词性--分块标记
def detail_slice_test():
    mark = tf.constant([[1]*22, [2]*22])
    cnt  = tf.constant([11, 15])
    
    print("--mark.shape", mark.shape)
    print("--cnt.shape", cnt.shape)
    
    mark = mark_slice([mark, cnt])
    print("--detail_slice", mark)

#detail_slice_test()



# test-4:
#   预处理--词性--分块
def mark_block_test():
    embeddings = np.array([[[1]*17,[2]*17,[3]*17,[4]*17]])
    mark       = np.array([[0,0,1,1]])
    block      = np.array([[2,2,1,1]])
    scale      = np.array([[0.2,0.2,0.8,0.8]])
    cnt        = np.array([3])
    
    embeddings = tf.cast(embeddings, dtype=tf.float32)
    mark       = tf.cast(mark, dtype=tf.float32)
    scale      = tf.cast(scale, dtype=tf.float32)
    
    print("--embeddings.shape", embeddings.shape)
    print("--mark.shape", mark.shape)
    print("--block.shape", block.shape)
    print("--scale.shape", scale.shape)

    # add mark:
    mark = mark_slice([mark, cnt])
    output = add_mark(embeddings, mark)
    print("--add_mark", output)
    
    # add block:
    output = add_block(output, block)
    print("--add_block", output)

    # add relation:
    output = add_relation(output)
    print("--add_relation", output)

    # add merge:
    output = add_merge_scale([output, np.array(scale)])
    print("--add_merge_scale", output)

    # add merge:
    output = add_score([output, output*0.5])
    print("--add_score", output)

#mark_block_test()




# test-5:
#   预处理--词性--分块标记
def vlist_std_test():
    mc = tf.constant([[[0]*3,   [1]*3, [2]*3],   [[0]*3,   [1]*3, [2]*3]], dtype=tf.float32) #2X2X3
    xl = tf.constant([[[0]*3,   [2]*3, [3]*3],   [[0]*3,   [2]*3, [3]*3]], dtype=tf.float32)
    xr = tf.constant([[[0]*3,   [3]*3, [4]*3],   [[0]*3,   [3]*3, [5]*3]], dtype=tf.float32)
    cnt = tf.constant([[3], [3]], dtype=tf.float32)
    
    print("--mc.shape", mc.shape)
    print("--xl.shape", xl.shape)
    print("--xr.shape", xr.shape)
    print("--cnt.shape", cnt.shape)
    
    output = vlist_std(mc, xl, xr, cnt)
    print("--vlist_std", output)
    print("--vlist_std", K.squeeze(output, 1))
    print("--vlist_std", K.reshape(output, [-1,3]))

#vlist_std_test()







