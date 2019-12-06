#!/usr/bin/python3
 
import sqlite3

# 连接到数据库
# 如果数据库不存在的话，将会自动创建一个 数据库
conn = sqlite3.connect("sqlite3/World.db3")

#    CREATE TABLE "City" (
#      "ID" INTEGER PRIMARY KEY NOT NULL,
#      "Name" TEXT NOT NULL DEFAULT '',
#      "CountryCode" TEXT NOT NULL DEFAULT '',
#      "District" TEXT NOT NULL DEFAULT '',
#      "Population" INTEGER NOT NULL DEFAULT 0
#    );


# 创建一个游标 curson
cursor = conn.cursor()

# DROP TABLE
sql = "DROP TABLE IF EXISTS  `login`;"
cursor.execute(sql)

# 执行一条语句,创建 user表
sql = "create table login (id varchar(20) primary key, name varchar(30), password varchar(30))"
cursor.execute(sql)


# 插入一条记录
sql = "insert into login (name, password) values (\'love\', \'520520')"
cursor.execute(sql)
sql = "insert into login (name, password) values (\'ssss\', \'520521')"
cursor.execute(sql)


# UPDATE
sql = "UPDATE `login` SET `password`='520522' WHERE `name`='ssss';"
cursor.execute(sql)


# DELETE
sql = "DELETE FROM `login` WHERE  `name`='love';"
cursor.execute(sql)



# 查询一条记录：
sql = "select * from login"
cursor.execute(sql)
#sql = "select * from login where id=?"
#cursor.execute(sql, ("2",))


# 获取查询结果：
values = cursor.fetchall()
#
print(values)


# 通过rowcount获得插入的行数:
#cursor.rowcount()

# 关闭游标：
cursor.close()

# 提交事物
conn.commit()

# 关闭连接
conn.close()

