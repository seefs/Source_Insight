#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS tbl_vector")
 
# 使用预处理语句创建表
sql = """CREATE TABLE tbl_vector (
         VID    INT(10) DEFAULT NULL,
         VC1    INT(10) DEFAULT NULL,
         VC2    INT(10) DEFAULT NULL,
         VC3    INT(10) DEFAULT NULL,
         VC4    INT(10) DEFAULT NULL,
         VC5    INT(10) DEFAULT NULL,
         VC6    INT(10) DEFAULT NULL,
         VC7    INT(10) DEFAULT NULL,
         VC8    INT(10) DEFAULT NULL,
         VC9    INT(10) DEFAULT NULL,
         VC10    INT(10) DEFAULT NULL,
         VC11    INT(10) DEFAULT NULL,
         VC12    INT(10) DEFAULT NULL,
         VC13    INT(10) DEFAULT NULL,
         VC14    INT(10) DEFAULT NULL,
         VC15    INT(10) DEFAULT NULL,
         VC16    INT(10) DEFAULT NULL,
         VC26    INT(10) DEFAULT NULL,
         PRIMARY KEY (`VID`))
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
