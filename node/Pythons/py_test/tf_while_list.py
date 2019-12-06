

import tensorflow as tf


a = tf.constant(1) 
b = tf.constant(2) 
arr = tf.constant([3,4,5,6]) 
print(arr.numpy())
max_len = len(arr)


# 2个参数--正常
def cond(i,a):
    print('--while--cond--', i, a)
    return i < max_len
def body(i,a):
    print('--while--body--', i, a)
    _arr = arr[i]
    print('--while--body--', _arr)
    return i + 1, a+1
i,a = tf.while_loop(cond, body, (0,1))


# 1个参数--报错
#a=0
#def cond(i):
#    print('--while--cond--', i, a)
#    return i < max_len
#def body(i):
#    print('--while--body--', i, a)
#    _arr = arr[i]
#    print('--while--body--', _arr)
#    return i + 1
#i = tf.while_loop(cond, body, (0))


