#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
#可写函数说明
def printinfo( name, age = 35 ):
   "打印任何传入的字符串"
   print ("Name: ", name);
   print ("Age ", age);
   return;
 
#调用printinfo函数
printinfo( age=50, name="miki" );
printinfo( name="miki" );


# 可写函数说明
def printinfo( arg1, *vartuple ):
   "打印任何传入的参数"
   print ("输出: ")
   print (arg1)
   for var in vartuple:
      print (var)
   return;
 
# 调用printinfo 函数
printinfo( 10 );
printinfo( 70, 60, 50 );



# 可写函数说明
sum = lambda arg1, arg2: arg1 + arg2;
 
# 调用sum函数
print ("相加后的值为 : ", sum( 10, 20 ))
print ("相加后的值为 : ", sum( 20, 20 ))



#//	Name:  miki
#//	Age  50
#//	Name:  miki
#//	Age  35
#//	输出:
#//	10
#//	输出:
#//	70
#//	60
#//	50
#//	相加后的值为 :  30
#//	相加后的值为 :  40

