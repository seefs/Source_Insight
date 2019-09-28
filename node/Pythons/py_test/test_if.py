#!/usr/bin/python

import sys; x1 = 'runoob'; sys.stdout.write(x1 + '\n')

x="a"
y="b"
# 换行输出
print(x)
print(y) 

print('---------')
# 不换行输出
print(x,)
print(y,)

# 不换行输出
print(x,y)


if x=="a" : 
   print('x="b"') 
elif x=="b" :
   print('x="b"') 
else :  
   print('x="unknow"') 

   
#   //  runoob
#   //  a
#   //  b
#   //  
#   //  a
#   //  b
#   //  a b
#   //  x="b"

