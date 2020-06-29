#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS sentence_path_num")
 
# 使用预处理语句创建表
sql = """CREATE TABLE sentence_path_num (
         NID  VARCHAR(64) DEFAULT NULL,
         NALL  INT(10) DEFAULT NULL,
         NCOUNT  INT(10) DEFAULT NULL,
         NVAL  INT(10) DEFAULT NULL,
         PRIMARY KEY (`NID`)
         )
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
