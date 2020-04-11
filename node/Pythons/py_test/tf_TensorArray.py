

import tensorflow as tf


n = tf.constant(5)
c = tf.TensorArray(tf.int32, n)
c = c.write(0, 1)
c = c.write(1, 3)
c = c.write(2, 5)
c = c.write(3, 7)
c = c.write(4, 9)
print(c)
print(c.read(1).numpy())
c = c.stack()
print(c.numpy())

d = tf.TensorArray(tf.int32, 7)
d = d.unstack(tf.concat([c, [11,13]], 0))
d = d.stack()
print(d.numpy())

