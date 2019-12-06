# Extends Keras' TensorBoard callback to include the Precision-Recall summary plugin.

import os
from urllib.request import urlretrieve

import pandas as pd
import time

from tensorflow.keras.models import Model
from tensorflow.keras.layers import Layer

from tensorflow.python import keras
from tensorflow.python.keras import backend as K

import tensorflow as tf
import numpy as np
import random

from keras.callbacks import TensorBoard, EarlyStopping
from keras.layers import Input, Dense
from keras.models import Model
from sklearn import preprocessing
from sklearn.model_selection import train_test_split
from tensorboard.plugins.pr_curve import summary as pr_summary




class PRTensorBoard(TensorBoard):
    def __init__(self, *args, **kwargs):
        # One extra argument to indicate whether or not to use the PR curve summary.
        self.pr_curve = kwargs.pop('pr_curve', True)
        super(PRTensorBoard, self).__init__(*args, **kwargs)

        global tf
        import tensorflow as tf

    def set_model(self, model):
        super(PRTensorBoard, self).set_model(model)

        if self.pr_curve:
            # Get the prediction and label tensor placeholders.
            predictions = self.model._feed_outputs[0]
            labels = tf.cast(self.model._feed_targets[0], tf.bool)
            # Create the PR summary OP.
            self.pr_summary = pr_summary.op(name='pr_curve',
                                            predictions=predictions,
                                            labels=labels,
                                            display_name='Precision-Recall Curve')

    def on_epoch_end(self, epoch, logs=None):
        super(PRTensorBoard, self).on_epoch_end(epoch, logs)

        if self.pr_curve and self.validation_data:
            # Get the tensors again.
            tensors = self.model._feed_targets + self.model._feed_outputs
            # Predict the output.
            predictions = self.model.predict(self.validation_data[:-2])
            # Build the dictionary mapping the tensor to the data.
            val_data = [self.validation_data[-2], predictions]
            feed_dict = dict(zip(tensors, val_data))
            # Run and add summary.
#            result = self.sess.run([self.pr_summary], feed_dict=feed_dict)
            result = self.fit([self.pr_summary], feed_dict=feed_dict)
            self.writer.add_summary(result[0], epoch)
        self.writer.flush()


# In[3]:



# Dataset parameters.
num_classes = 2 # linear sequence or not.
all_len    = 15.0
all_start  = [5.0, 1.0]
all_end    = [20.0, 16.0]
sel_start  = [8.0, 5.0]
sel_end    = [16.0, 11.0]
product    = pow(8-12,2)+pow(5-8,2)


test_cnt_0 = 0
test_cnt_1 = 0

# Training Parameters
learning_rate = 2.1
training_steps = 1000
batch_size = 100
display_step = 50


# input data:
#    c(12.5, 8.5)
def rnd_data():
    global test_cnt_0, test_cnt_1

    while True:
        x  = all_start[0] + random.randint(0, 100)*all_len/100
        y  = all_start[1] + random.randint(0, 100)*all_len/100
        pt = pow(x-12,2)+pow(y-8,2)
        if pt<product:
            label = 1
            test_cnt_1+=1
#            print("  product = %s, %s" % (pt, product))
#            print("  data.1: %s, %s, cnt=%s, %s" % (x, y, test_cnt_1, test_cnt_0))
            yield np.array([x,y], dtype=np.float32), np.array(label, dtype=np.float32)
        elif random.random() < .5:
            continue
        else:
            label = 0
            test_cnt_0+=1
#            print("  data.0: %s, %s, cnt=%s, %s" % (x, y, test_cnt_1, test_cnt_0))
            yield np.array([x,y], dtype=np.float32), np.array(label, dtype=np.float32)


def get_test_data(cnt):
    x,y = [],[]
    i=0
    for _x, _y in rnd_data():
        x.append(_x)
        y.append(_y)
        if i>=cnt:
            break
        i+=1
    return np.array(x),np.array(y)

# In[4]:


X_train, y_train = get_test_data(10)
X_test,  y_test  = get_test_data(10)
print("data X_train", X_train)
print("data y_train", y_train)
print("data X_test",  X_test)
print("data y_test",  y_test)



# In[4]:

class MyLayer(Layer):
   def __init__(self, output_dim, init='glorot_uniform',
                activation=None, weights=None,
                W_regularizer=None, b_regularizer=None, activity_regularizer=None,
                W_constraint=None, b_constraint=None,
                bias=True, input_dim=None, **kwargs):
       pass
       super(MyLayer, self).__init__(**kwargs)
       print("--MyLayer--init")
#       self.input_dim = input_dim
       self.output_dim = output_dim
       self.output_ly = keras.layers.Dense(units=2, activation="softmax")
       
   def build(self, input_shape):
       print("--MyLayer--build", input_shape)
       input_dim = input_shape[-1]
##       self.input_spec = keras.layers.InputSpec(shape=input_shape, dtype='float32')
#       self.input_spec = keras.layers.InputSpec(min_ndim=2, axes={-1: input_dim})
#       self.built = True
       self.W = self.add_weight(name='kernel', 
                         shape=(input_shape[1], self.output_dim),
                         initializer='uniform',
                         trainable=True)
#       print("--MyLayer--build", (input_shape[1], self.output_dim))
##       super(MyLayer, self).build(input_shape)

   def call(self, x, mask=None):
       print("--MyLayer--call", x)
       output = K.dot(x, self.W)
#       if self.bias:
#           output += self.b
       output = self.output_ly(x)
       return output

   def get_output_shape_for(self, input_shape):
       pass

   def get_config(self):
       pass


def build_model(n_features):
    print("--model--ly")
    ly = MyLayer(10,2)
    print("--model--Input")
    input_layer = Input(shape=[10, 10], dtype='float32', name="input_ids")
    print("--model--output")
    output = ly(input_layer)
    print("--model--new")
    model = Model(inputs=input_layer, outputs=output)
    print("--model--build")
    model.build(input_shape=(None, n_features))
    print("--model--compile")
    model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])
    model.summary()
    return model
    
def build_new_model(model):
    model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])
    return model



# In[4]:


if __name__ == '__main__':
    current_dir = os.path.dirname(os.path.realpath(__file__))
    data_dir = os.path.join(current_dir, 'data')
    log_dir = os.path.join(current_dir, 'logs')
    
    model_name = "testA-{}".format(int(time.time()))
    model_dir = os.path.join(log_dir, model_name)
    train_dir = os.path.join(model_dir, "train")
    

    print('Working directory: %s' % current_dir)
    if not os.path.exists(data_dir) or not os.path.isdir(data_dir):
        os.mkdir(data_dir)
    if not os.path.exists(log_dir) or not os.path.isdir(log_dir):
        os.mkdir(log_dir)
    if not os.path.exists(model_dir) or not os.path.isdir(model_dir):
        os.mkdir(model_dir)
    if not os.path.exists(train_dir) or not os.path.isdir(train_dir):
        os.mkdir(train_dir)
    

    model = build_model(2)

    tensorboard = TensorBoard(log_dir=model_dir)

    first_epoch = 50
#    callbacks = [ PRTensorBoard(log_dir=log_dir), EarlyStopping(monitor='val_loss', patience=3) ]
    callbacks = [ tensorboard, EarlyStopping(monitor='val_loss', patience=3) ]
    
    history = model.fit(X_train, y_train, validation_data=[X_test, y_test], epochs=first_epoch, callbacks=callbacks)

    # 保存
    json_string = model.to_json()
    model.save_weights(os.path.join(log_dir, 'my_model_weights.h5')) #保存的模型位置
    del model

    
    # 重新训练
    from keras.models import model_from_json
#    from keras.optimizers import SGD
    new_model = model_from_json(json_string)
    new_model.load_weights(os.path.join(log_dir, 'my_model_weights.h5')) #载入模型
#    model = build_model(features_normalized.shape[1])
    new_model = build_new_model(new_model)
    
    second_epoch = 50
#    callbacks = [ PRTensorBoard(log_dir=log_dir), EarlyStopping(monitor='val_loss', patience=3) ]
    callbacks = [ tensorboard, EarlyStopping(monitor='val_loss', patience=3) ]
    # 关键的初始化epoch数 initial_epoch=first_epoch
    history = new_model.fit(X_train, y_train, validation_data=[X_test, y_test], epochs=first_epoch+second_epoch, callbacks=callbacks,initial_epoch=first_epoch)
    
    print("test end.")


