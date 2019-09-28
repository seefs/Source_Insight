#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS sentence_base_test")
 
# 使用预处理语句创建表
sql = """CREATE TABLE sentence_base_test (
         CID int NOT NULL AUTO_INCREMENT primary key,
         CCOUNT  INT(10) DEFAULT NULL,
         SNUM    INT(10) DEFAULT NULL,
         CHR1  VARCHAR(64) DEFAULT NULL,
         CHR2  VARCHAR(64) DEFAULT NULL,
         CHR3  VARCHAR(64) DEFAULT NULL,
         CHR4  VARCHAR(64) DEFAULT NULL,
         CHR5  VARCHAR(64) DEFAULT NULL,
         CHR6  VARCHAR(64) DEFAULT NULL,
         CHR7  VARCHAR(64) DEFAULT NULL,
         CHR8  VARCHAR(64) DEFAULT NULL,
         CHR9  VARCHAR(64) DEFAULT NULL,
         CHR10  VARCHAR(64) DEFAULT NULL,
         CHR11  VARCHAR(64) DEFAULT NULL,
         CHR12  VARCHAR(64) DEFAULT NULL,
         CHR13  VARCHAR(64) DEFAULT NULL,
         CHR14  VARCHAR(64) DEFAULT NULL,
         CHR15  VARCHAR(64) DEFAULT NULL)
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
