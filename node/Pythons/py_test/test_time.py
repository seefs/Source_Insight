#!/usr/bin/python3
#coding=utf-8

import time;  # 引入time模块
import calendar
import datetime

ticks = time.time()
print ("当前时间戳为:", ticks)


cal = calendar.month(2016, 1)
print ("以下输出2016年1月份的日历:")
print (cal)

i = datetime.datetime.now()
print ("当前的日期和时间是 %s" % i)


#    当前时间戳为: 1556783534.2755892
#    以下输出2016年1月份的日历:
#    	January 2016
#    Mo Tu We Th Fr Sa Su
#    			 1	2  3
#     4	5  6  7  8	9 10
#    11 12 13 14 15 16 17
#    18 19 20 21 22 23 24
#    25 26 27 28 29 30 31
#
#    当前的日期和时间是 20190502 15:52:14.275589



