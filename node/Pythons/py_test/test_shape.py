#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


a=tf.constant([[[1,2],[1,2]],[[3,4],[3,4]]],dtype=tf.float32)

print(a.dtype)
#    <dtype: 'float32'> 

b=np.array([[1,2],[3,4],[3,4]],dtype='float32')

print(b.dtype)
#    float32



ndims = a.shape.ndims
print ("a: ", a)
print ("ndims: ", ndims)
print ("shape: ", a.shape)
print ("")


sess=tf.Session()
#sess.run(tf.initialize_all_variables())
sess.run(tf.global_variables_initializer())

#   tensor转array：
print ("eval: ", a.eval(session=sess))
#   array转tensor：
print ("tensor: ", tf.convert_to_tensor(b))
print ("")


#  reshape：
width = a.shape[-1]
print ("width: ", width)
a_reshape = tf.reshape(a, [-1, width])
print ("a_reshape: ", a_reshape.eval(session=sess))
print ("")


b_1 = [1,2]
b_2 = [3]
b_3 = b_1 + b_2
print ("b_3: ", b_3)









