
import tensorflow as tf  
import math

x = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]

a = [15,16,8,1,2,10,11,3,7,4,6]
#print('sorted:', sorted(a))
print('sorted:', [1 if i in a else 0 for i in x])
a = [15,14,6,5,4,12,11,3,7,2,8]
#print('sorted:', sorted(a))
print('sorted:', [1 if i in a else 0 for i in x])
a = [15,14,6,5,13,9,1,8,16,2,4]
#print('sorted:', sorted(a))
print('sorted:', [1 if i in a else 0 for i in x])
a = [11,12,4,13,9,1,2,10,6,8]
#print('sorted:', sorted(a))
print('sorted:', [1 if i in a else 0 for i in x])
    