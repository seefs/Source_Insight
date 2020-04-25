from keras.models import Sequential
from keras.backend import concatenate
from keras.layers import Input, Lambda
from keras.layers import Dense
import tensorflow as tf
import keras.backend as K



model = Sequential()
model.add(Dense(32, input_dim=32))
# now: model.output_shape == (None, 32)
# note: `None` is the batch dimension

model.add(RepeatVector(3))
# now: model.output_shape == (None, 3, 32)
model.add(Lambda(lambda x: x ** 2))
def antirectifier(x):
	gamma=tf.Variable(10.0, trainable=True)
    x -= K.mean(x, axis=1, keepdims=True)
    x = K.l2_normalize(x, axis=1)
    pos = K.relu(x)
    neg = K.relu(-x)
    return tf.multiply(gamma,K.concatenate([pos, neg], axis=1))

def antirectifier_output_shape(input_shape):
    shape = list(input_shape)
    assert len(shape) == 2  # only valid for 2D tensors
    shape[-1] *= 2
    return tuple(shape)

model.add(Lambda(antirectifier,
                 output_shape=antirectifier_output_shape))
model.summary()
