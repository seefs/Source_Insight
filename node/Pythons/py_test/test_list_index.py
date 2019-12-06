#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
 
mylist = [10,20,30,40,50,60,70];




print ("mylist: ", mylist)

tmp = mylist[-1];
print ("mylist[-1]: ", tmp)


tmp = mylist[4:];
print ("mylist[4:]: ", tmp)


mylist[2:3] = [22,24]
print ("[22,24]: ", mylist)


tmp = mylist[-3:-1];
print ("mylist[-3:-1]: ", tmp)


tmp = mylist[-3:];
print ("mylist[-3:]: ", tmp)

mylist[-3:-1] = []
print ("[]: ", mylist)

############

mylist = [10];
mylist[1:] = [20,30]
print ("[20,30]: ", mylist)

mylist = [];
mylist[:] = [10,20,30]
print ("[10,20,30]: ", mylist)


mylist = [];
mylist[0:1] = [40]
print ("[40]: ", mylist)

mylist = [];
mylist[1:2] = [50]
print ("[50]: ", mylist)










