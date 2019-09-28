 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

def add_layer(inputs, in_size, out_size, activation_function=None):
    # add one more layer and return the output of this layer
    Weights = tf.Variable(tf.random_normal([in_size, out_size]))
    biases = tf.Variable(tf.zeros([1, out_size]) + 0.1)
    Wx_plus_b = tf.matmul(inputs, Weights) + biases
    if activation_function is None:
        outputs = Wx_plus_b
    else:
        outputs = activation_function(Wx_plus_b)
    return outputs

# Make up some real data
# [300,1]
x_data = np.linspace(-1,1,300)[:, np.newaxis]

noise = np.random.normal(0, 0.05, x_data.shape)
# [a1^2 a2^2 ...]
y_data = np.square(x_data) - 0.5 + noise

# define placeholder for inputs to network
xs = tf.placeholder(tf.float32, [None, 1])
ys = tf.placeholder(tf.float32, [None, 1])

# add hidden layer
# R[-1.01 ~ 1.01]XC[1,10] + [1,10] 
l1 = add_layer(xs, 1, 10, activation_function=tf.nn.relu)

# add output layer
# [300, 10] X [10, 1] = [300, 1] 
prediction = add_layer(l1, 10, 1, activation_function=None)
# sum((x.w+a).b)+c = x.x-1
# (x.w[1~10]+a).[10~1] = x(w1a1+w2a2+...)

# the error between prediciton and real data
loss = tf.reduce_mean(tf.reduce_sum(tf.square(ys - prediction),
                     reduction_indices=[1]))
train_step = tf.train.GradientDescentOptimizer(0.1).minimize(loss)

# important step
init = tf.initialize_all_variables()
sess = tf.Session()
sess.run(init)

# plot the real data
fig = plt.figure()

# add_subplot(349):
#  3-row 4-column 9-item
ax = fig.add_subplot(1,1,1)
ax.scatter(x_data, y_data)
plt.ion()
plt.show()

for i in range(30):
    # training
    sess.run(train_step, feed_dict={xs: x_data, ys: y_data})
    if i % 1 == 0:
        # to visualize the result and improvement
        try:
            ax.lines.remove(lines[0])
        except Exception:
            pass
        prediction_value = sess.run(prediction, feed_dict={xs: x_data})
        # plot the prediction
        # (x,y,format_string,**kwargs) 
        # plot(a,a*1.5,'go-',a,a*2.5,'rx',a,a*3.5,'*',a,a*4.5,'b-.')
        # lw line width
        lines = ax.plot(x_data, prediction_value, 'r-', lw=5)
        plt.pause(0.8)




