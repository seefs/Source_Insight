
import tensorflow as tf  
      
classes = 6
labels = tf.constant([0,0,1,1]) # 输入的元素值最小为0，最大为2
output = tf.one_hot(labels, classes)
print(labels)

output2 = tf.one_hot(labels, depth=2)
output3 = tf.one_hot(labels, depth=3)

sess = tf.Session()
with tf.Session() as sess:
    sess.run(tf.global_variables_initializer())
    
    output = sess.run(output)
    print("output of one-hot is : ")
    print(output)
#    output of one-hot is :
#    [[1. 0. 0. 0. 0. 0.]
#     [1. 0. 0. 0. 0. 0.]
#     [0. 1. 0. 0. 0. 0.]
#     [0. 1. 0. 0. 0. 0.]]

    output2 = sess.run(output2)
    print("output2 of one-hot is : ")
    print(output2)
#    output2 of one-hot is :
#    [[1. 0.]
#     [1. 0.]
#     [0. 1.]
#     [0. 1.]]


    output3 = sess.run(output3)
    print("output3 of one-hot is : ")
    print(output3)
#    output3 of one-hot is :
#    [[1. 0. 0.]
#     [1. 0. 0.]
#     [0. 1. 0.]
#     [0. 1. 0.]]




