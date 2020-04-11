
import tensorflow as tf


ones = tf.ones(shape=[3,3])
print(ones)


if tf.__version__.startswith("1."):
  tf.enable_eager_execution()
  
ones = tf.ones(shape=[3,3])
print(ones)



