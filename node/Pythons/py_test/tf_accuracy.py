import numpy as np
import tensorflow as tf
 
x = tf.placeholder(tf.int32, [5])
y = tf.placeholder(tf.int32, [5])
acc, acc_op = tf.metrics.accuracy(labels=x, predictions=y)
 
sess = tf.InteractiveSession()
sess.run(tf.global_variables_initializer())
sess.run(tf.local_variables_initializer())
 
v = sess.run([acc, acc_op], feed_dict={x: [1, 0, 0, 0, 0],
                                       y: [1, 0, 0, 0, 1]})
#总的5个(正确4)
print(v)   #[0.0, 0.8]
 
 
v = sess.run([acc, acc_op], feed_dict={x: [1, 1, 1, 1, 0],
                                       y: [0, 0, 0, 0, 1]})
#总的10个(正确4)                                   
print(v)    #[0.8, 0.4]
 
v = sess.run([acc, acc_op], feed_dict={x: [1, 1, 1, 1, 0],
                                       y: [0, 0, 0, 0, 1]})
#总的15个(正确4)           
print(v)    #[0.4, 0.26666668]
 
v = sess.run([acc, acc_op], feed_dict={x: [0, 1, 1, 0, 1],
                                       y: [0, 0, 0, 1, 1]})
#总的20个(正确4)           
print(v)    #[0.26666668, 0.2]


#   { x: [ 0,  1,  1,  0,  1 ], -----实际
#     y: [ 0,  0,  0,  1,  1 ] })----预测
#          TN  FN  FN  FP  TP  
# 
#  精准率: precision rate = TP / (TP + FP)
#  召回率: recall rate = TP / (TP + FN)
#  准确率: accuracy = (TP + TN) / (TP + FP + TN + FN)
#  F1-score = 2 * precision rate * recall rate / (precision rate + recall rate)
#  F1-score = 2 * TP / (2TP + FN + FP)
#  F1-score = 2/(2 + 2 + 1 )
#        1/accuracy-1 =( FP + FN)/ (TP + TN) 
#        1/F1-1 =( FP + FN)/ 2 * TP

#  精准率: 11110000<<11__11__ 推荐系统
#  召回率: 11110000<<1100____ 逃犯检索
#  准确率: 11110000<<11001100 
#  F1-scr: 11110000<<110011__ 
