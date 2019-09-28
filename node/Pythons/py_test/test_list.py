#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
# 可写函数说明
def changeme( mylist ):
   "修改传入的列表"
   mylist.append([1,2,3,4]);
   print ("函数内取值: ", mylist)
   return
 
# 调用changeme函数
mylist = [10,20,30];
changeme( mylist );
print ("函数外取值: ", mylist)


#mylist2 = [[10,20,30],[10,20,30],[10,20,30],[10,20,30]];
#ndims = mylist2.shape.ndims
#print ("ndims: ", ndims)
#print ("shape: ", mylist2.shape)


input_shape = [3,4,1];
tmp_shape1 = input_shape[0:-1];
tmp_shape2 = [input_shape[-1] * 7];
tmp_shape3 = tmp_shape1 + tmp_shape2;
out_shape = input_shape[0:-1] + [input_shape[-1] * 7]
print ("tmp_shape1: ", tmp_shape1)
print ("tmp_shape2: ", tmp_shape2)
print ("tmp_shape3: ", tmp_shape3)
print ("out_shape: ", out_shape)


#//	函数内取值:  [10, 20, 30, [1, 2, 3, 4]]
#//	函数外取值:  [10, 20, 30, [1, 2, 3, 4]]

