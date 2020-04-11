#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


X = [[12,7, 3],
     [4 ,5, 6],
     [7 ,8, 9]]
    
Y1 = [[1,1,1]]

Y2 = [[1,1,1]]


# list相加:
print('')
print(X + Y1)
#    [[12, 7, 3], [4, 5, 6], [7, 8, 9], [1, 1, 1]]
print('')
print(X + Y2)
#    [[12, 7, 3], [4, 5, 6], [7, 8, 9], [1, 1, 1]]


aa1 = tf.constant([[12,7,3],
                    [4 ,5,6],
                    [7 ,8,9]],
                    dtype=tf.float32)
aa2 = tf.constant([[1,1,1]],
                    dtype=tf.float32)


aa3 = tf.constant([1,1,1],
                    dtype=tf.float32)


# tensor相加: 每个元素相加
print('')
print((aa2 + aa1).numpy())
#    [[13.  8.  4.]
#     [ 5.  6.  7.]
#     [ 8.  9. 10.]]

print('')
print((aa3 + aa1).numpy())
#    [[13.  8.  4.]
#     [ 5.  6.  7.]
#     [ 8.  9. 10.]]


# tensor相乘: 
a = tf.constant([[1, 2],
                   [3, 4],
                   [5, 6]],
           dtype=tf.float32)
b = tf.constant([[2,2]],
           dtype=tf.float32)

print('')
print((a + b).numpy())
print('')
print(tf.pow(a, 2).numpy())
print('')
print(tf.pow(a + b, 2).numpy())
print('')
print(tf.pow(a - b, 2).numpy())
c=tf.pow(a - b, 2)
c1=c[:,0]
c2=c[:,1]
c0=c1+c2
print('')
print(c1.numpy())
print(c2.numpy())
print(c0.numpy())
s = tf.reduce_sum(c, 1)
print('')
print(s.numpy())
#x = tf.cond(s<2, lambda: 1, lambda: 0)
x = [1 if i<2 else 0 for i in s]
print(x)





