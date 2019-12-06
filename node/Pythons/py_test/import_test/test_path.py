#!/usr/bin/python3

import datetime,time


now = time.strftime("%Y-%m-%d %H:%M:%S")
print (now)
#   2019-09-30 11:23:14

now = datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
print (now)
#   2019-09-30 11:23:14.026635
#   20190930-112749


# 前一天
now = datetime.datetime.now()
d2 = now - datetime.timedelta(days=1)
print (d2.strftime("%Y-%m-%d %H:%S:%M"))
#    2019-09-29 12:36:04

# 上周日
now = datetime.datetime.now()
d3 = now - datetime.timedelta(days=now.isoweekday())
print (d3.strftime("%Y-%m-%d %H:%S:%M"), " ", d3.isoweekday())
#    2019-09-29 12:36:04   7

# 
print (datetime.datetime(2019, 12, 1) )
#    2019-12-01 00:00:00

# 时间戳转datetime对象
t1 = time.time()
d1 = datetime.datetime.fromtimestamp(t1)
print (d1)
#    2019-09-30 12:04:36.386989

# 时间搓
datestr1 = '2019-9-30 12:00:10'
print ('datestr to time :', time.mktime(time.strptime(datestr1, "%Y-%m-%d %H:%M:%S")))
#    datestr to time : 1569816010.0



log_dir = "py_test/import_test/A/" + time.strftime("%Y%m%d-%H%M%S")
f = open(log_dir + '.txt','w')
for i in range(1005):
    f.write('hello world: ' + str(i) + '\n')


log_dir = "py_test/import_test/A/"
f = open(log_dir + '/20190930.txt','w')
for i in range(1005):
    f.write('hello world: ' + str(i) + '\n')


#read
log_dir = "py_test/import_test/A/"
f = open(log_dir + '/20190930.txt','r')
line = f.readline()
print ('readline :', line)


