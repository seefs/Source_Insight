

f = open('./py_test/file_read_c.txt','w')
try:
    for i in range(10):
        f.write('hello world: ' + str(i) + '\n')
except Exception:
    print ("something bad happened")
finally:
    f.close()



