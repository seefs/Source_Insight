
import tensorflow as tf
global_step = tf.Variable(0, trainable=False)
increment_op = tf.assign_add(global_step, tf.constant(1))
lr = tf.placeholder(tf.float32)
learning_rate = tf.train.exponential_decay(lr, global_step, 
							decay_steps=1, decay_rate=0.9, staircase=False)

one_op = tf.summary.scalar('learning_rate', learning_rate)
two_op = tf.summary.scalar('test', increment_op)
merged_op = tf.summary.merge_all()

init = tf.global_variables_initializer()
with tf.Session() as sess:
    sess.run(init)
    summary_writer = tf.summary.FileWriter('./log/', sess.graph) # 指定检测结果的输出目录
    for step in range(0, 10):
        val,num_step = sess.run((merged_op, increment_op), {lr:0.1})
        summary_writer.add_summary(val, global_step=num_step) # 写入文件


