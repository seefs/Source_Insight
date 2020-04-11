
import tensorflow as tf  
      
classes = 6
labels = tf.constant([0,0,1,1]) # 输入的元素值最小为0，最大为2
output_6 = tf.one_hot(labels, classes)
print(labels)

output_2 = tf.one_hot(labels, depth=2)
output_3 = tf.one_hot(labels, depth=3)

sess = tf.Session()
with tf.Session() as sess:
    sess.run(tf.global_variables_initializer())
    
    output_6 = sess.run(output_6)
    print("output_6 of one-hot is : ")
    print(output_6)
#    output_6 of one-hot is :
#    [[1. 0. 0. 0. 0. 0.]
#     [1. 0. 0. 0. 0. 0.]
#     [0. 1. 0. 0. 0. 0.]
#     [0. 1. 0. 0. 0. 0.]]

    output_2 = sess.run(output_2)
    print("output_2 of one-hot is : ")
    print(output_2)
#    output_2 of one-hot is :
#    [[1. 0.]
#     [1. 0.]
#     [0. 1.]
#     [0. 1.]]


    output_3 = sess.run(output_3)
    print("output_3 of one-hot is : ")
    print(output_3)
#    output_3 of one-hot is :
#    [[1. 0. 0.]
#     [1. 0. 0.]
#     [0. 1. 0.]
#     [0. 1. 0.]]




