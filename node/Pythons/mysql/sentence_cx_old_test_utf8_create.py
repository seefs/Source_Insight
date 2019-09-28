#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS sentence_cx_old_test")
 
# 使用预处理语句创建表
sql = """CREATE TABLE sentence_cx_old_test (
         CID  INT(10) DEFAULT NULL,
         CCOUNT  INT(10) DEFAULT NULL,
         SNUM    INT(10) DEFAULT NULL,
         CX1  VARCHAR(64) DEFAULT NULL,
         CX2  VARCHAR(64) DEFAULT NULL,
         CX3  VARCHAR(64) DEFAULT NULL,
         CX4  VARCHAR(64) DEFAULT NULL,
         CX5  VARCHAR(64) DEFAULT NULL,
         CX6  VARCHAR(64) DEFAULT NULL,
         CX7  VARCHAR(64) DEFAULT NULL,
         CX8  VARCHAR(64) DEFAULT NULL,
         CX9  VARCHAR(64) DEFAULT NULL,
         CX10  VARCHAR(64) DEFAULT NULL,
         CX11  VARCHAR(64) DEFAULT NULL,
         CX12  VARCHAR(64) DEFAULT NULL,
         CX13  VARCHAR(64) DEFAULT NULL,
         CX14  VARCHAR(64) DEFAULT NULL,
         CX15  VARCHAR(64) DEFAULT NULL)
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
