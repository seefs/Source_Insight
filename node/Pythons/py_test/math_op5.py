#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


a = np.array([[[2,3],[2,3]],
              [[2,3],[2,3]]])
    
b = np.array([[[2,3]]])
c = np.array([[2,3]])
d = np.array([2,3])
d3 = np.array([2,3,4])

e = np.array([[[2]]])
f = np.array([[2]])
g = np.array([2])
m = np.array([0,0])
n1 = np.array([0,1])
n3 = np.array([1,1,1,0,0,0])



# 加法: 形状同a
print('加法 = %s' %( a+b))
print('加法 = %s' %( a+c))
print('加法 = %s' %( a+d))

# 双x双: 形状同a
print('\n双x双 = %s' %( tf.multiply(a,b)))
print('双x双 = %s' %(tf.multiply(a,c)))
print('双x双 = %s' %(tf.multiply(a,d)))

# 双x单: 形状同a
print('\n双x单 = %s' %(tf.multiply(a,e)))
print('双x单 = %s' %( tf.multiply(a,f)))
print('双x单 = %s' %( tf.multiply(a,g)))


# 单x双: 形状成倍数?
print('\n单x双 = %s' %(tf.multiply(e,d)))
# 双x三: err?
#print('\n双x三 = %s' %(tf.multiply(d,d3)))
# 加00=翻倍
print('shape%s x shape%s = %s' %(e.shape, m.shape, e+m))

# 扩充:
n4 = tf.expand_dims(n3, -1)
print('\n扩充 = %s' %(tf.multiply(n4,n1)+tf.multiply(1-n4,1-n1)))

# 2*4*2  X mark(2*4)
A242 = np.array([[[1,10],[1,11],[1,12],[1,13]],[[2,10],[2,11],[2,12],[2,13]]])
B24  = np.array([[1,1,0,0],[0,0,1,1]])
A224=tf.transpose(A242,[2,0,1])
S224=tf.multiply(A224, B24)
S242=tf.transpose(S224,[1,2,0])
print('\nmark A242= %s' %(A242))
print('mark = %s' %(A224))
print('mark = %s' %(S224))
print('mark = %s' %(S242))


