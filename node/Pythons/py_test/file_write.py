#!/usr/bin/python3

f = open('./py_test/file_read_c.txt','w')
for i in range(1005):
    f.write('hello world: ' + str(i) + '\n')

 
