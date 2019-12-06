#!/usr/bin/python
# -*- coding: UTF-8 -*-

import os, sys

# 打开文件
fd = os.open("E:/Desktop/NLP/xiaojshuo_data/longzu/test_write.txt",os.O_RDWR|os.O_CREAT)

# 写入字符串
str = 'this is fujieace.com test'
ret = os.write(fd,str.encode())

#str = 'this is fujieace.com test'
#os.write(fd,bytes(str,'UTF-8'))




# 输入返回值
print ("写入的位数为: ")
print  (ret)

print ("写入成功")

# 关闭文件
os.close(fd)
print ("关闭文件成功!!")
