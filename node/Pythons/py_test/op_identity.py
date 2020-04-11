import tensorflow as tf

x = tf.Variable(0.0)
x_plus_1 = tf.assign_add(x, 1)

with tf.control_dependencies([x_plus_1]):
    y = tf.identity(x)#修改部分
init = tf.initialize_all_variables()

with tf.Session() as session:
    init.run()
    for i in xrange(5):
        print(y.eval())

        
