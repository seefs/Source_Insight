import tensorflow as tf
import numpy as np


sess = tf.Session()

# Create example y_hat.
y_hat = tf.convert_to_tensor(np.array([[0.5, 1.5, 0.1],[2.2, 1.3, 1.7]]))
print("example:")
print(sess.run(y_hat))
# array([[ 0.5,  1.5,  0.1],
#        [ 2.2,  1.3,  1.7]])


# 进行归一化
y_hat_softmax = tf.nn.softmax(y_hat)
print("进行归一化:")
print(sess.run(y_hat_softmax))
# array([[ 0.227863  ,  0.61939586,  0.15274114],
#        [ 0.49674623,  0.20196195,  0.30129182]])

y_log_softmax = tf.nn.log_softmax(y_hat, axis=-1)
print("进行归一化 log:")
print(sess.run(y_log_softmax))
#    [[-1.4790107  -0.4790107  -1.8790107 ]
#     [-0.69967598 -1.59967598 -1.19967598]]


# 测量标签
y_true = tf.convert_to_tensor(np.array([[0.0, 1.0, 0.0],[0.0, 0.0, 1.0]]))
print("测量标签:")
print(sess.run(y_true))
# array([[ 0.,  1.,  0.],
#        [ 0.,  0.,  1.]])


# 使用交叉熵损失来测量误差
loss_per_instance_1 = -tf.reduce_sum(y_true * tf.log(y_hat_softmax), reduction_indices=[1])
print("使用交叉熵损失来测量误差:")
print(sess.run(loss_per_instance_1))
# array([ 0.4790107 ,  1.19967598])


# 全部损失
total_loss_1 = tf.reduce_mean(-tf.reduce_sum(y_true * tf.log(y_hat_softmax), reduction_indices=[1]))
print("全部损失:")
print(sess.run(total_loss_1))

#
## 或者(代码更少?)
## 使用tf.nn.softmax_cross_entropy_with_logits()函数计算总交叉熵损失
#loss_per_instance_2 = tf.nn.softmax_cross_entropy_with_logits(y_hat, y_true)
#sess.run(loss_per_instance_2)
## array([ 0.4790107 ,  1.19967598])
#
#total_loss_2 = tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits(y_hat, y_true))
#sess.run(total_loss_2)
## 0.83934333897877922

    
