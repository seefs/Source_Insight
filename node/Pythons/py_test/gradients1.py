import tensorflow as tf
 
x1 = tf.get_variable('w1', shape=[3])
x2 = tf.get_variable('w2', shape=[3])
 
x3 = tf.get_variable('w3', shape=[3])
x4 = tf.get_variable('w4', shape=[3])
 
y1 = x1 + x2+ x3
y2 = x3 + x4
 
#grads = tf.gradients([y1, y2], [x1, x2, x3, x4], grad_ys=[tf.convert_to_tensor([2.,2.,3.]),tf.convert_to_tensor([3.,2.,4.])])
grads = tf.gradients([y1,y2],  [x1, x2, x3, x4])
 
with tf.Session() as sess:
    tf.global_variables_initializer().run()
    print(sess.run(grads))
    
#	[array([1., 1., 1.], dtype=float32), 
#	array([1., 1., 1.], dtype=float32), 
#	array([2., 2., 2.], dtype=float32), 
#	array([1., 1., 1.], dtype=float32)]