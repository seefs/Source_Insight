
import sys
import os
import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import Model, layers
from keras import backend as K
import numpy as np
import copy
import random
import logging


# In[1]:

# path
curPath  = os.path.abspath(os.path.dirname(__file__))
rootPath = os.path.split(curPath)[0]
dataPath = os.path.join(rootPath, "data")
log_dir   = os.path.join(dataPath,  "log")
modelPath = os.path.join(dataPath, "model")
csvPath  = os.path.join(dataPath, "csv")

# file
h5_file      = os.path.join(modelPath, "atec_nlp_calc_{}.h5")

# log
if not os.path.exists(log_dir) or not os.path.isdir(log_dir):
    os.mkdir(log_dir)
if not os.path.exists(modelPath) or not os.path.isdir(modelPath):
    os.mkdir(modelPath)

# cfg
sys.path.append(rootPath)

# Custom Class
from _loader import LoadData, save_pred_result
from _token import TokenizerChg
from _losses import f1, expand_dims_f1, cross_entropy_loss, accuracy
from _model import create_model


# In[2]:
#
# 备注:
#   all=100,  rate=0.001,  batch=50,  45次, 实际11遍, (accuracy: 0.760, f1: 0.769231), 达到最大值
#   all=1000, rate=0.001,  batch=100, 50次, 实际05遍, (accuracy: 0.664, f1: 0.617312) ++
#   all=1000, rate=0.001,  batch=100, 10次, 实际01遍, (accuracy: 0.666, f1: 0.626398) ++
#   all=1000, rate=0.010,  batch=100, 10次, 实际01遍, (accuracy: 0.636, f1: 0.577726) ++
#   all=1000, rate=0.002,  batch=100, 20次, 实际02遍, (accuracy: 0.688, f1: 0.653333) ++
#   all=1000, rate=0.002,  batch=100, 20次, 实际02遍, (accuracy: 0.717, f1: 0.672832, f1: 0.6982758) ++
#   all=1000, rate=0.0001, batch=40,  60次, 实际01遍, (accuracy: 0.720, f1: 0.678161, f1: 0.7017166) ++
#   all=1000, rate=0.0001, batch=40,  60次, 实际01遍, (accuracy: 0.719, f1: 0.678161, f1: 0.700745) ++
# 


# Training Parameters
learning_rate = 0.0001
training_steps = 60        ###
batch_size = 40
display_step = 1
#
### 指标变化大, 选择在最佳指标时主动退出
###   将steps设置较大, 然后中间退出
is_use_check_stop = False  ### 总开关
###   条件指标:
check_stop_acc   = 0.6
check_stop_f1    = 0.7
###   从多少步开始验证:
start_check_step = 40      ###
###   计步:
cur_stop_step  = 0
###   渐进加大步数, 如6~10步
diff_stop_step = 8         ###


data = LoadData(sample_size=None, train_enable=True, test_enable=False)
data.show_data_shape()


if data.train_enable:
    ds_train = tf.data.Dataset.from_tensor_slices(data.get_train_slices())
    ds_train  = ds_train.repeat().shuffle(1).batch(batch_size).prefetch(1)

if data.test_enable:
    ds_test = tf.data.Dataset.from_tensor_slices(data.get_test_slices())
    ds_test  = ds_test.repeat().shuffle(1).batch(batch_size).prefetch(1)



# In[3]:

# model
model = create_model(data.max_vocab_len, data.max_seq_len, data.max_modes_len, h5_file=h5_file, debug=True, mean='mean', save_data=False)

# Adam optimizer.
optimizer = tf.optimizers.Adam(learning_rate)
#optimizer = keras.optimizers.SGD(learning_rate)

# Optimization process. 
def run_optimization(x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2, y):
    # Wrap computation inside a GradientTape for automatic differentiation.
    with tf.GradientTape() as g:
        # Forward pass.
        pred = model([x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2])
        #print("---pred %s" % (pred))
        # Compute loss.
        loss = cross_entropy_loss(pred, y)
        
    # Variables to update, i.e. trainable variables.
    trainable_variables = model.trainable_variables

    # Compute gradients.
    gradients = g.gradient(loss, trainable_variables)
    
    # Update weights following gradients.
    optimizer.apply_gradients(zip(gradients, trainable_variables))
    return pred,loss


def check_run_stop(step, data, model):
    global check_stop_acc,check_stop_f1,cur_stop_step
    # 批大小不一样, 单独计算
    if data.test_enable:
        pred = model.predict(data.get_test_data())    # 感觉这个要快
        loss = cross_entropy_loss(pred, data.train_y)
        acc  = accuracy(data.train_y, pred)
        f1_score = expand_dims_f1(data.train_y, pred)  # 用f1有问题
    
        if step<0:
            # 训练结束, 显示总指标, 传参数-1:
            print("----------------\n  predict: accuracy: %f, f1: %f" % (acc, f1_score))
        elif acc>check_stop_acc and f1_score>check_stop_f1:
            # 更新f1, 用于判断下次是否保存:
            #   不更新acc, 大于0.6就行
            check_stop_f1   = f1_score
            print("----------------\n  update stop step: %s, acc: %s, f1: %s"%(step+diff_stop_step, check_stop_acc, check_stop_f1))
            # 更新weights, 加大结束步长
            #   第1步不保存, 效果未知, 避免覆盖上次训练的结果
            if cur_stop_step>0:
                print("--------save_weights")
                model.save_weights(h5_file.format(data.max_vocab_len), overwrite=True)
            # 渐进6步后退出:
            cur_stop_step = step + diff_stop_step
        else:
            # 退出条件
            if cur_stop_step>0 and step>cur_stop_step:
                return 1
    elif data.train_enable:
        pred = model.predict(data.get_train_data())    # 感觉这个要快
        loss = cross_entropy_loss(pred, data.train_y)
        acc  = accuracy(data.train_y, pred)
        f1_score = expand_dims_f1(data.train_y, pred)  # 用f1有问题
    
        if step<0:
            # 训练结束, 显示总指标, 传参数-1:
            print("----------------\n  predict: accuracy: %f, f1: %f" % (acc, f1_score))
        elif acc>check_stop_acc and f1_score>check_stop_f1:
            # 更新f1, 判断下次是否保存:
            #   不更新acc, 大于0.6就行
            check_stop_f1   = f1_score
            print("----------------\n  update stop step: %s, acc > %s, f1 > %s"%(step+diff_stop_step, check_stop_acc, check_stop_f1))
            # 更新weights, 加大结束步长
            #   第1步不保存, 效果未知, 避免覆盖上次训练的结果
            if cur_stop_step>0:
                print("--------save_weights")
                model.save_weights(h5_file.format(data.max_vocab_len), overwrite=True)
            # 渐进6步后退出:
            cur_stop_step = step + diff_stop_step
        else:
            # 退出条件
            if cur_stop_step>0 and step>cur_stop_step:
                return 1
    return 0
    


# In[4]:


# 训练
# Run training for the given number of steps.
for step, (x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2, y) in enumerate(ds_train.take(training_steps), 1):
    if random.random() < .5:
        continue
        
    check_ret = 0
    if is_use_check_stop and step>start_check_step:
        check_ret = check_run_stop(step, data, model)
        
    if check_ret>0:
        break
    else:
        # Run the optimization to update W and b values.
        pred,loss = run_optimization(x1, x2, m1, m2, mi1, mi2, n1, n2, cnt1, cnt2, y)
    
        if step % display_step == 0 or step == 1:
            #loss = cross_entropy_loss(pred, y)
            acc   = accuracy(y, pred)
            f1_score  = expand_dims_f1(y, pred)   # 用f1有问题
            print("step: %i,  loss: %f, accuracy: %f, f1: %f" % (step, loss, acc, f1_score))


if is_use_check_stop==False:
    print("  save: %s" % (h5_file.format(data.max_vocab_len)))
    model.save_weights(h5_file.format(data.max_vocab_len), overwrite=True)


# 总的acc,f1
check_run_stop(-1, data, model)


#w = new_model.get_weights()
#logging.getLogger().info("--weights\n  %s" % (tf.shape(w)))
#logging.getLogger().info("--weights\n  %s" % (w))






