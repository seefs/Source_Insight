import tensorflow as tf
 
a = tf.Variable([[1,2,3,4,5], [6,7,8,9,10], [11,12,13,14,15]])
index_a = tf.Variable([0,2])
index_c = tf.Variable([[1,2],[1,2],[1,2]])
index_d = tf.Variable([[1,2],[1,2]])
 
b = tf.Variable([1,2,3,4,5,6,7,8,9,10])
index_b = tf.Variable([2,4,6,8])
 
print('\n',tf.gather(a, index_a).numpy())
print('\n',tf.gather(a, index_c, batch_dims=-1).numpy())
print('\n',tf.gather(a, index_d).numpy())
print('\n',tf.gather(b, index_b).numpy())
 
#    [[ 1  2  3  4  5]
#     [11 12 13 14 15]]
#
#    [[ 2  3]
#     [ 7  8]
#     [12 13]]
#
#    [3 5 7 9]

