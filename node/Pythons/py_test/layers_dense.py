import tensorflow as tf
import numpy as np



#tensor_2d = tf.constant([[12,7,3],
#                    [4 ,5,6],
#                    [7 ,8,9]],dtype=tf.float32)

tensor_2d = tf.constant([[1, 1, 1],
                         [1 ,1, 1],
                         [2 ,2, 2],
                         [1 ,2, 3],
                         [1 ,2, 1],
                         [1 ,1, 2],
                         [1 ,2, 4]],dtype=tf.float32)


ly = tf.layers.dense(
              tensor_2d,
              1 * 3,
              None,
              name="query",kernel_initializer=tf.truncated_normal_initializer(stddev=0.1))
# ,kernel_initializer=tf.truncated_normal_initializer(stddev=0.2)

print(ly)

sess=tf.Session()
sess.run(tf.global_variables_initializer())

#每次编译值不一样
print(ly.eval(session=sess))


#with tf.Session() as sess:
#    print(sess.run(ly))

