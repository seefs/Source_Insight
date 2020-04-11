

import tensorflow as tf


# 条件
x = tf.cond(1, lambda: [[1],[2]], lambda: [])
print('\n', x)
print(tf.shape(x))
print(tf.shape(x)[-1]>0)
print(tf.rank(x))


x = tf.cond(0, lambda: [[1],[2]], lambda: [])
print('\n', x)
print(tf.shape(x))
print(tf.shape(x)[-1]>0)
print(tf.rank(x))


x = tf.cond(1, lambda: [1,2], lambda: [])
print('\n', x)
print(tf.shape(x))
print(tf.shape(x)[-1]>0)
print(tf.rank(x))



