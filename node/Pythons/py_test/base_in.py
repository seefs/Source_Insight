
import tensorflow as tf
import numpy as np
 

a = tf.constant(3)
b = 4

arr = tf.constant([15,16,8,1,2,10,11,3,7,4,6])
					
brr = {15,16,8,1,2,10,11,3,7,4,6}



#list
print("a in arr", a in arr)
print("b in arr", b in arr)
print("a in arr.array", a in np.array(arr))
print("b in arr.array", b in np.array(arr))
print("a.array in arr.array", np.array(a) in np.array(arr))
print("a.array in arr", np.array(a) in arr)
#    a in arr False
#    b in arr False
#    a in arr.array False
#    b in arr.array True
#    a.array in arr.array True
#    a.array in arr False


#set
print("a in brr", a in brr)
print("b in brr", b in brr)
print("a.array in brr", np.array(a) in np.array(brr))
#    a in brr False
#    b in brr True
#    a.array in brr False





