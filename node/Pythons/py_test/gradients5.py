import tensorflow as tf

with tf.Graph().as_default():
    x = tf.Variable(initial_value=3., dtype='float32')
    w = tf.Variable(initial_value=5., dtype='float32')
    y = w*x - (0*w + 1)
    opt = tf.train.GradientDescentOptimizer(0.1)
    grads_vals = opt.compute_gradients(y, [w])
    for i, (g, v) in enumerate(grads_vals):
        if g is not None:
            grads_vals[i] = (tf.clip_by_norm(g, 5), v)  # clip gradients
    train_op = opt.apply_gradients(grads_vals)
    with tf.Session() as sess:
        sess.run(tf.global_variables_initializer())
        print(sess.run(grads_vals))
        print(sess.run([x,w,y]))
        


#y = w*x - (0*w + 1)
#    [(3.0, 4.0)]
#    [3.0, 4.0, 11.0]

#y = w*x - (1*w + 1)
#    [(2.0, 4.0)]
#    [3.0, 4.0, 8.0]
        
