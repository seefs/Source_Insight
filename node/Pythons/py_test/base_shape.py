
 
import tensorflow as tf
import numpy as np
 
mylist = [[1,2,3], [7,8,9], [4,5,6]]
mylist = np.array(mylist)
print ("a.array: ", mylist)
print ("a.ndim: ", mylist.ndim)
print ("a.shape: ", mylist.shape)
print ("a.size: ", mylist.size)
#    a.array:  [[1 2 3]
#     [7 8 9]
#     [4 5 6]]
#    a.ndim:  2
#    a.shape:  (3, 3)
#    a.size:  9



mylist = tf.constant(2)
mylist = np.array(mylist)  # 常量转数组, ndim+shape 不改变, val+size 改变
print ("\na.array: ", mylist)
print ("a.ndim: ", mylist.ndim)
print ("a.shape: ", mylist.shape)
print ("a.size: ", mylist.size)
#    a.array:  2
#    a.ndim:  0
#    a.shape:  ()
#    a.size:  1



mylist = tf.constant(2)
print ("\na.array: ", mylist)
print ("a.ndim: ", mylist.ndim)
print ("a.shape: ", mylist.shape)
#print ("a.size: ", mylist.size)
#    a.array:  tf.Tensor(2, shape=(), dtype=int32)
#    a.ndim:  0
#    a.shape:  ()

###################

mylist = tf.constant([[1,2,3], [7,8,9], [4,5,6]])
#mylist = [[1,2,3], [7,8,9], [4,5,6]]
print ("\ntf.shape: ", tf.shape(mylist))
print ("tf.shape.numpy: ", tf.shape(mylist).numpy())
print ("np.array.tf.shape: ", np.array(tf.shape(mylist)))
print ("tf.get_shape: ", mylist.get_shape())
print ("list.tf.get_shape: ", list(mylist.get_shape()))
print ("c2t.tf.get_shape: ", tf.convert_to_tensor(mylist.get_shape()))
print ("tf.get_shape.as_list: ", mylist.get_shape().as_list())
#    tf.shape:  tf.Tensor([3 3], shape=(2,), dtype=int32)
#    tf.shape.numpy:  [3 3]
#    np.array.tf.shape:  [3 3]
#    tf.get_shape:  (3, 3)
#    list.tf.get_shape:  [3, 3]
#    c2t.tf.get_shape:  tf.Tensor([3 3], shape=(2,), dtype=int32)
#    tf.get_shape.as_list:  [3, 3]



mylist = tf.constant([[1,2,3], [7,8,9], [4,5,6]])
width = mylist.shape[-1]
print ("\na.shape[-1]: ", mylist.shape[-1])
print ("a.shape.ndims: ", mylist.shape.ndims)
print ("tf.reshape: ", tf.reshape(mylist, [-1, width]))
#    a.shape[-1]:  3
#    a.shape.ndims:  2
#    tf.reshape:  tf.Tensor(
#    [[1 2 3]
#     [7 8 9]
#     [4 5 6]], shape=(3, 3), dtype=int32)



