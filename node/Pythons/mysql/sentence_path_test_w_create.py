#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS sentence_path_test_w")
 
# 使用预处理语句创建表
sql = """CREATE TABLE sentence_path_test_w (
         CID  INT(10) DEFAULT NULL,
         CW  VARCHAR(64) DEFAULT NULL,
         CN  INT(10) DEFAULT NULL,
         TN1  INT(10) DEFAULT NULL,
         TN2  INT(10) DEFAULT NULL,
         TN3  INT(10) DEFAULT NULL,
         CV  INT(10) DEFAULT NULL,
         TV1  INT(10) DEFAULT NULL,
         TV2  INT(10) DEFAULT NULL,
         TV3  INT(10) DEFAULT NULL,
         W1  VARCHAR(64) DEFAULT NULL,
         W2  VARCHAR(64) DEFAULT NULL,
         W3  VARCHAR(64) DEFAULT NULL,
         W4  VARCHAR(64) DEFAULT NULL,
         W5  VARCHAR(64) DEFAULT NULL,
         N1  INT(10) DEFAULT NULL,
         N2  INT(10) DEFAULT NULL,
         N3  INT(10) DEFAULT NULL,
         N4  INT(10) DEFAULT NULL,
         N5  INT(10) DEFAULT NULL,
         PRIMARY KEY (`CID`)
         )
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
