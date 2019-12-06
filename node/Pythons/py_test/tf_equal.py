
import tensorflow as tf

import numpy as np



a = tf.constant(4)
b = 3




#greater_equal
print("a>=b", tf.greater_equal(a,b))
print("a.arr>=b", tf.greater_equal(np.array(a),b))


#greater
print("\na>b", tf.greater(a,b))
print("a.arr>b", tf.greater(np.array(a),b))


#equal
print("\na=b", tf.equal(a,b))
print("a.arr=b", tf.equal(np.array(a),b))



#equal
print("\na=b", a>b)
print("a.arr=b", np.array(a)>b)

if a>b:
    print("\n===========")
if np.array(a)>b:
    print("\n===========")


