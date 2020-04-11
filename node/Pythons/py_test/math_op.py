#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


type_ids=tf.constant([0,1,1,0,1,0])
one_hot_1 = tf.one_hot(type_ids, depth=1)
one_hot_2 = tf.one_hot(type_ids, depth=2)


sess=tf.Session()
sess.run(tf.global_variables_initializer())

print(one_hot_1.eval(session=sess))
#    [[1.]
#     [0.]
#     [0.]
#     [1.]
#     [0.]
#     [1.]]
print(one_hot_2.eval(session=sess))
#    [[1. 0.]
#     [0. 1.]
#     [0. 1.]
#     [1. 0.]
#     [0. 1.]
#     [1. 0.]]





