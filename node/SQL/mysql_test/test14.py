#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用cursor()方法获取操作游标 
cursor = db.cursor()
 
         
sql = "SELECT * FROM DICT"

try:
   # 执行SQL语句
   cursor.execute(sql)
   # 获取所有记录列表
   results = cursor.fetchall()
   for row in results:
      ftxt = row[0]
      fcnt = row[1]
      fcxo = row[2]
      fcxn = row[3]
       # 打印结果
      print ("ftxt=%s, fcnt=%s, fcxo=%s, fcxn=%s" % \
             (ftxt, fcnt, fcxo, fcxn ))
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()
