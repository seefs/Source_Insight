

import tensorflow as tf


# tf.where
# tf.where(condition,x=None,y=None,name=None)

# 循环
a = tf.constant([1, 1])
b = tf.constant([2, 2])
p = tf.constant([True, False])
x = tf.where(p, a + b, a * b)
print(x.numpy())
#    [3 2]


