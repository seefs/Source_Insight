


with open('./py_test/file_read_c.txt','w') as f:
    for i in range(20):
        x = 1.0 / (i - 1000)
        f.write('hello world: ' + str(i) + '\n')


