#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt


input_a = np.linspace(-1,1,10)[:, np.newaxis]
input_b = np.square(input_a)


# [[-1.1607002   1.2850347   0.3663669   0.6845521   0.65603167  1.8982685
#  -1.9052689  -0.89072853  0.07735021  2.1980917 ]]
#inputs1 = tf.random_normal([10, 1])
#inputs2 = tf.random_normal([1, 10])
#inputs3 = tf.random_normal([10, 1])

#mat_a = tf.matmul(inputs1, inputs2) + 1
#mat_b = tf.matmul(mat_a, inputs3) + 2


# [[0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1]]
#output = tf.zeros([10, 1]) + 0.1

init = tf.initialize_all_variables()
sess = tf.Session()
sess.run(init)

print ("input_a:")
print (input_a)

print ("input_b:")
print (input_b)
#print ("inputs2:")
#print (sess.run(inputs2))
#print ("inputs3:")
#print (sess.run(inputs3))
#print ("mat_a:")
#print (sess.run(mat_a))
#print ("mat_b:")
#print (sess.run(mat_b))


