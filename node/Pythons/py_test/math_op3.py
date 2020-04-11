#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np
import math


a_zeros = tf.zeros(shape=[4], dtype=tf.float32)
a_ones  = tf.ones(shape=[4], dtype=tf.float32)
#ab_ones  = tf.ones(shape=[8], dtype=tf.float32)
random_ab = tf.random_uniform([8], -1.0, 1.0)

concat_ab = tf.concat([a_zeros,a_ones],0, name='concat')
big_ab = (1.0 - tf.cast(concat_ab, tf.float32)) * -10000.0
add_ab  = big_ab + random_ab*10 + 5

#add_ab = tf.constant([],  dtype=tf.float32)
probs_ab = tf.nn.softmax(add_ab)


sess=tf.Session()
sess.run(tf.global_variables_initializer())


print("random_ab ：")
#保留小数点后的两位有效数字
print("  ", random_ab.eval(session=sess))
print("  ", list(map(lambda x:round(x,2), random_ab.eval(session=sess))))

print("concat_ab ：")
print("  ", concat_ab.eval(session=sess))
#    [1. 1. 1. 1. 0. 0. 0. 0.]
print("")

print("big_ab ：")
print("  ", big_ab.eval(session=sess))
#    [    -0.     -0.     -0.     -0. -10000. -10000. -10000. -10000.]

print("add_ab ：")
#print("  ", add_ab.eval(session=sess))
print("  ", list(map(lambda x:round(x,2), add_ab.eval(session=sess))))

print("probs_ab ：")
#print("  ", probs_ab.eval(session=sess))
print("  ", list(map(lambda x:round(x,2), probs_ab.eval(session=sess))))







