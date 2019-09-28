#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","test333" )
 
# 使用cursor()方法获取操作游标 
cursor = db.cursor()
 
# SQL 查询语句
sql = "SELECT * FROM sfs_pinyin \
       WHERE id = %s" % (19969)
try:
   # 执行SQL语句
   cursor.execute(sql)
   # 获取所有记录列表
   results = cursor.fetchall()
   for row in results:
      id = row[0]
      py = row[1]
      sd = row[2]
      shendiao = row[3]
      pinyin = row[4]
      hanzi = row[5]
      uco_id = row[6]
       # 打印结果
      print ("id=%s,py=%s,sd=%s,shendiao=%s,pinyin=%s,hanzi=%s,uco_id=%s" % \
             (id, py, sd, shendiao, pinyin, hanzi, uco_id ))
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()
