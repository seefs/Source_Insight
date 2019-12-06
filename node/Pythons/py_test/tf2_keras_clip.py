
import tensorflow as tf
from keras import backend

a = tf.constant(2.1) #定义tensor常量
b = backend.clip(a, 0, 1)

print (b)
#>>>1.0


