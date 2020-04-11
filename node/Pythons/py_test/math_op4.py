#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np
import math



add_ab = tf.constant([0.1,0.15,0.05,0.6,0.1],  dtype=tf.float32)
probs_ab = tf.nn.softmax(add_ab)

add_1 = tf.constant([-1000, 0.15, 0.05, 0.6, 0.6],  dtype=tf.float32)
probs_1 = tf.nn.softmax(add_1)

add_2 = tf.constant([-1000, 5, 16, 0.6, 0.1],  dtype=tf.float32)
probs_2 = tf.nn.softmax(add_2)

add_3 = tf.constant([[-1000, 0.15, 0.05, 0.6, 0.6], [-1000, 0.15, 0.05, 0.6, 0.6]],  dtype=tf.float32)
probs_3 = tf.nn.softmax(add_3)


sess=tf.Session()
sess.run(tf.global_variables_initializer())


print("add_ab ：")
print("  ", list(map(lambda x:round(x,2), add_ab.eval(session=sess))))

print("probs_ab ：")
print("  ", list(map(lambda x:round(x,2), probs_ab.eval(session=sess))))


print("add_1 ：")
print("  ", list(map(lambda x:round(x,2), add_1.eval(session=sess))))

print("probs_1 ：")
print("  ", list(map(lambda x:round(x,2), probs_1.eval(session=sess))))


print("add_2 ：")
print("  ", list(map(lambda x:round(x,2), add_2.eval(session=sess))))

print("probs_2 ：")
print("  ", list(map(lambda x:round(x,2), probs_2.eval(session=sess))))


###############################################
print("map_3 ：")
map_3 = map(lambda x_arr:list(map(lambda x:round(x,2),
                                   x_arr)), 
             add_3.eval(session=sess))
print("  ", type(map_3))

map_list = list(map_3)
print("map_list ：")
print("  ", map_list)

###############################################
print("probs_3 ：")
map_3 = map(lambda x_arr:list(map(lambda x:round(x,2),
                                   x_arr)), 
             probs_3.eval(session=sess))
map_list = list(map_3)
print("  ", map_list)






