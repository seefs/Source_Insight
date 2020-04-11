
from keras import backend as K

import tensorflow as tf
import numpy as np



x  = [
      [0.2, 0.8], 
      [0.3, 0.7]
     ]
y  = [
      0, 1
     ]


a = tf.constant(x, dtype='float32', shape=None)
b = tf.constant(y, dtype='float32', shape=None)
#a = tf.cast(a, tf.int64)
b = tf.cast(b, tf.int64)
print("\na = ", a);
print("\nb = ", b);

loss = tf.nn.sparse_softmax_cross_entropy_with_logits(labels=y, logits=x)
print("\nloss = ", loss);


x  = [0.2, 0.8]
y  = 1
b = tf.cast(b, tf.int64)
print("\na = ", a);
print("\nb = ", b);
loss = tf.nn.sparse_softmax_cross_entropy_with_logits(labels=y, logits=x)
print("\nloss = ", loss);









