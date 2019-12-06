
from keras import backend as K

import tensorflow as tf
import numpy as np





a  = np.array([[1, 2, 3], [2.0,2.0,2.0]])
a2 = np.array([[1, 1, 1], [1.0,1.0,1.0]])
# [1, 2, 3]

b1 = K.square(a)

#b2 = K.square(a, axis=-1)

print("\na = ", a);

print("\na-b = ", a-a2);


print("\nK.square(a) = ", b1);

#print("\nK.square(a, axis=-1) = ", b2);

print("\ntf.square(a) = ", tf.square(a));

print("\nK.sum(a) = ", K.sum(a));

print("\nK.sum(a, axis=-1) = ", K.sum(a, axis=-1));

c = K.maximum([1, 2, 3], 0)
print("\nc = ", c);

c = K.maximum([1, 2, 3], 2)
print("\nc = ", c);

c = K.maximum([1, 2, 3], 3)
print("\nc = ", c);


c = K.maximum([1, 2, 3], 4)
print("\nc = ", c);











