#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


#X = [[12,7,3],
#    [4 ,5,6]]
    
#Y = [[1,1],
#    [1,1],
#    [1,1]]
    
#print(X*X)
#print(X*Y)
#print(Y*X)
#print("")


a = np.array([[12,7,3],
              [4 ,5,6]])
b = np.array([[1,1],
              [1,1],
              [1,1]])

print(a*a)
print(np.multiply(a, a))
print("")

print(np.dot(a, b)) #a*b
print(np.dot(b, a)) #b*a
print("")


aa1 = tf.constant([[[1],[2]],
                    [[3],[4]],
                    [[5],[6]]],dtype=tf.float32)    # (3,2,1)
aa2 = tf.constant([[[1,2]],
                    [[3,4]],
                    [[5,6]]],dtype=tf.float32)  # (3,1,2)



#b_ones = tf.ones(shape=[4, 3, 2], dtype=tf.float32)


sess=tf.Session()
sess.run(tf.global_variables_initializer())


# (3,2,1)*(3,2,1)=(3,2,1)
print((aa1 * aa1).eval(session=sess))
print("")


# (3,2,1)*(3,1,2)=(3,2,2)
print((aa1 * aa2).eval(session=sess))
print("")

# (3,1,2)*(3,2,1)=(3,2,2)
print((aa2 * aa1).eval(session=sess))
print("")


# (3,2,1)*(3,2,1)=(3,2,1)
print(tf.multiply(aa1, aa1).eval(session=sess))
print("")

# (3,2,1)*(3,1,2)=(3,2,2)
print(tf.matmul(aa1, aa2).eval(session=sess))
print("")


# (3,2,1)*(3,1,2)=(3,2,2)
print(tf.matmul(aa1, aa1, transpose_b=True).eval(session=sess))
print("")

# (3,1,2)*(3,2,1)=(3,1,1)
print(tf.matmul(aa2, aa2, transpose_b=True).eval(session=sess))
print("")










