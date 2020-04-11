 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf
import numpy as np


# create data
#   x_data:
#     0.2935756  0.9394031  0.8568484  0.5922694...]
#
x_data = np.random.rand(100).astype(np.float32)
y_data = x_data*0.1 + 0.3

### create tensorflow structure start ###
#   tf.random_uniform:
#     从均匀分布中输出随机值----一维整数，它在 [x,y] 范围内
#     输出的类型：dtype=tf.float16、float32、float64、int32、orint64.
Weights = tf.Variable(tf.random_uniform([1], -1.0, 1.0))
# 偏差
#   tf.zeros:
#     一维数组里放一个值
biases = tf.Variable(tf.zeros([1]))

y = Weights*x_data + biases

# 降低--意图
#   tf.reduce_mean
#     用于计算张量tensor沿着指定的数轴（tensor的某一维度）上的的平均值
loss = tf.reduce_mean(tf.square(y-y_data))
#
#    类似函数还有:
#    tf.reduce_sum ：计算tensor指定轴方向上的所有元素的累加和;
#    tf.reduce_max? :? 计算tensor指定轴方向上的各个元素的最大值;
#    tf.reduce_all :? 计算tensor指定轴方向上的各个元素的逻辑和（and运算）;
#    tf.reduce_any:? 计算tensor指定轴方向上的各个元素的逻辑或（or运算）;


#   tf.train.GradientDescentOptimizer
#     随机梯度下降算法
#
optimizer = tf.train.GradientDescentOptimizer(0.5)

#  计算梯度，更新variable
train = optimizer.minimize(loss)

init = tf.initialize_all_variables()
### create tensorflow structure end ###

sess = tf.Session()
sess.run(init)          # Very important

for step in range(201):
    sess.run(train)
    if step % 20 == 0:
        print(step, sess.run(Weights), sess.run(biases))


