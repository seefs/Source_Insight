#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
import tensorflow as tf
import numpy as np
 
mylist = [[1,2,3], [7,8,9], [4,5,6]]
a      = [1,2,3]

mylist = np.array(mylist)
print ("mylist: ", mylist)
#    mylist:  [[1 2 3]
#     [7 8 9]
#     [4 5 6]]


mylist[:,0:1] = 8
print ("mylist: ", mylist)
#    mylist:  [[8 2 3]
#     [8 8 9]
#     [8 5 6]]


mylist[:,0:1] = [[4]]
print ("mylist: ", mylist)
#    mylist:  [[4 2 3]
#     [4 8 9]
#     [4 5 6]]


mylist[:,0:1] = [[4],[5],[6]]
print ("mylist: ", mylist)
#    mylist:  [[4 2 3]
#     [5 8 9]
#     [6 5 6]]






