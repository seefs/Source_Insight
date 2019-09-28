#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS tbl_base_all_vector")
 
# 使用预处理语句创建表
sql = """CREATE TABLE tbl_base_all_vector (
         CID  INT(10) DEFAULT NULL,
         TYPE  INT(10) DEFAULT NULL,
         TNUM    INT(10) DEFAULT NULL,
         SLIST  VARCHAR(255) DEFAULT NULL)
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
