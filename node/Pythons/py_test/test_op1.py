#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
    
Y1 = [[1,1,1]]
Y2 = [[1,1,1]]
    
print(X + Y1)
#    [[12, 7, 3], [4, 5, 6], [7, 8, 9], [1, 1, 1]]
print(X + Y2)
#    [[12, 7, 3], [4, 5, 6], [7, 8, 9], [1, 1, 1]]


aa1 = tf.constant([[12,7,3],
                    [4 ,5,6],
                    [7 ,8,9]],dtype=tf.float32)
aa2 = tf.constant([[1,1,1]],
                    dtype=tf.float32)


aa3 = tf.constant([1,1,1],
                    dtype=tf.float32)


sess=tf.Session()
sess.run(tf.global_variables_initializer())


print((aa2 + aa1).eval(session=sess))
#    [[13.  8.  4.]
#     [ 5.  6.  7.]
#     [ 8.  9. 10.]]

print((aa3 + aa1).eval(session=sess))
#    [[13.  8.  4.]
#     [ 5.  6.  7.]
#     [ 8.  9. 10.]]



