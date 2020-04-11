#!/usr/bin/env python
# coding: utf-8


# In[1]:


from __future__ import absolute_import, division, print_function

# Import TensorFlow v2.
import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import Model, layers
import numpy as np
import random


# In[2]:


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

# 总共取出数据(次数): 
#     shuffle_cnt(1000) + prefetch_cnt(1) + batch_size*steps( 1*(1+1)-2)=1001
#     shuffle_cnt(1000) + prefetch_cnt(1) + batch_size*steps(20*(1+1)-2)=1039
#     shuffle_cnt(1000) + prefetch_cnt(1) + batch_size*steps(20*(2+1)-2)=1059
#     shuffle_cnt(1000) + prefetch_cnt(1) + batch_size*steps(20*(5+1)-2)=1119


# In[3]:


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



# In[4]:


# Use tf.data API to shuffle and batch data.
train_data = tf.data.Dataset.from_generator(rnd_data, output_types=(tf.float32, tf.float32))
train_data = train_data.repeat().shuffle(1000).batch(batch_size).prefetch(1)


# In[5]:


# Create TEST Model.
class TEST(Model):
    # Set layers.
    def __init__(self):
        super(TEST, self).__init__()
#        self.lstm = layers.TEST()
        self.out = layers.Dense(num_classes)
        self.v1 = tf.Variable(tf.constant(1.0),name='v1', dtype=np.float32)
        self.v2 = tf.Variable(tf.constant(1.0),name='v2', dtype=np.float32)
        self.alpha = tf.Variable(tf.constant(1.0),name='v3', dtype=np.float32)
# 最佳：
# center[12, 18], alpha=25

    # Set forward pass.
    def call(self, x):
        x = self.test_out1(x)
#        print("  call.x: ", x.numpy())
#        x = tf.nn.softmax(x)
#        print("  softmax.x: ", x.numpy())
        return x
        
    def test_out1(self, x):
#        print("  self.v1: ", self.v1.numpy())
        p = tf.pow(x - [self.v1, self.v2], 2)
        s = tf.reduce_sum(p, 1)
        s = s/self.alpha
        s = tf.expand_dims(s, -1)
        c = 1/s
        x = tf.concat([s, c], 1)
        return x
        

# Build TEST model.
test_net = TEST()


# In[6]:


# Cross-Entropy Loss.
# Note that this will apply 'softmax' to the logits.
def cross_entropy_loss(x, y):
    # Convert labels to int 64 for tf cross-entropy function.
#    print("  cross.x: ", x)
#    print("  cross.y: ", y)
    y = tf.cast(y, tf.int64)
    # Apply softmax to logits and compute cross-entropy.
    loss = tf.nn.sparse_softmax_cross_entropy_with_logits(labels=y, logits=x)
    # Average loss across the batch.
    return tf.reduce_mean(loss)

# Accuracy metric.
def accuracy(y_pred, y_true):
    # Predicted class is the index of highest score in prediction vector (i.e. argmax).
    correct_prediction = tf.equal(tf.argmax(y_pred, 1), tf.cast(y_true, tf.int64))
#    correct_prediction = tf.equal(tf.cast(y_pred, tf.int64), tf.cast(y_true, tf.int64))
    return tf.reduce_mean(tf.cast(correct_prediction, tf.float32), axis=-1)

# Adam optimizer.
optimizer = tf.optimizers.Adam(learning_rate)
#optimizer = keras.optimizers.SGD(learning_rate)


# In[7]:


# Optimization process. 
def run_optimization(x, y):
    # Wrap computation inside a GradientTape for automatic differentiation.
    with tf.GradientTape() as g:
        # Forward pass.
#        print("\n  run.x: ", x.numpy())
#        print("\n  run.y: ", y.numpy())
        pred = test_net(x)
#        print("  run.pred: ", pred.numpy())
#        print("  run.pred: ", tf.argmax(pred, 1))
        # Compute loss.
#        loss = accuracy(pred, y)
        loss = cross_entropy_loss(pred, y)
        
    # Variables to update, i.e. trainable variables.
    trainable_variables = test_net.trainable_variables

    # Compute gradients.
    gradients = g.gradient(loss, trainable_variables)
    
    # Update weights following gradients.
    optimizer.apply_gradients(zip(gradients, trainable_variables))


# In[8]:


# Run training for the given number of steps.
for step, (batch_x, batch_y) in enumerate(train_data.take(training_steps), 1):
    # Run the optimization to update W and b values.
    run_optimization(batch_x, batch_y)
    
    if step % display_step == 0 or step == 1:
        pred = test_net(batch_x)
        loss = cross_entropy_loss(pred, batch_y)
        acc = accuracy(pred, batch_y)
        print("step: %i, v1: %s, v2: %s, alpha: %s, loss: %f, accuracy: %f" % (step, test_net.v1.numpy(), test_net.v2.numpy(), test_net.alpha.numpy(), loss, acc,))

