

import tensorflow as tf


#tf.cond
#tf.cond(pred,true_fn = None,false_fn = None,strict = False,name = None)

a = tf.constant(1) 
b = tf.constant(2) 
c = tf.constant(3) 


# Ìõ¼þ+lambda
p = tf.constant(True)
x = tf.cond(p, lambda: a + b, lambda: a * b)
print(x.numpy())


x = tf.constant([], dtype=tf.float32)
print(tf.size(x)>0)

