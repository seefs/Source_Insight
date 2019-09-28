#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np
import math



a_ones  = tf.ones(shape=[32,3], dtype=tf.int32)

flat_offsets = tf.reshape(tf.range(0, 32, dtype=tf.int32) * 128, [-1, 1])

a_sum = tf.reshape(a_ones + flat_offsets, [-1,3])


sess=tf.Session()
sess.run(tf.global_variables_initializer())


print("add_ab £º")
print("  ", flat_offsets.eval(session=sess))


print("a_sum £º")
print("  ", a_sum.eval(session=sess))






