#!/usr/bin/python3
 
import sqlite3
import pymysql
import re
 
 

'''
配置mysql数据库
'''
replacement_patterns = [
    (r'won\'t', 'will not'),
    (r'can\'t', 'cannot'),
    (r'i\'m', 'i am'),
    (r'ain\'t', 'is not'),
    (r'(\w+)\'ll', '\g<1> will'),
    (r'(\w+)n\'t', '\g<1> not'),
    (r'(\w+)\'ve', '\g<1> have'),
    (r'(\w+)\'s', '\g<1> is'),
    (r'(\w+)\'re', '\g<1> are'),
    (r'(\w+)\'d', '\g<1> would'),
    (r"s\'",'s'),(r"\'", ''),
    (r"O\'", ''),(r"o\'", '')
]

class RegexpReplacer(object):
    def __init__(self, patterns=replacement_patterns):
        self.patterns = [(re.compile(regex), repl) for (regex, repl) in patterns]
    def replace(self, text):
        s = text
        for (pattern, repl) in self.patterns:
            (s, count) = re.subn(pattern, repl, s)
        return s



mysql_db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )



#创建mysql游标
mysql_cursor = mysql_db.cursor()

#创建sqlite游标 一定要填写绝对路径
sqlite3_conn = sqlite3.connect("sqlite3/World.db3")
sqlite3_cursor = sqlite3_conn.cursor()


# DELETE TABLE
sql = "DELETE FROM dict_utf8_update;"
sqlite3_cursor.execute(sql)

sql_rd   = "SELECT * FROM `dict_utf8_update`"
#sql_rd   = "SELECT * FROM `dict_utf8_update` WHERE `DTXT`= \"1\";"
mysql_cursor.execute(sql_rd)


mysql_result = mysql_cursor.fetchall()
for x in mysql_result:
    rep = RegexpReplacer()
#    Sentence = rep.replace(x[5])
#    print("ImgPath:", ImgPath)
    
    sql_sqlite3 = "INSERT INTO dict_utf8_update(DTXT,DCXE,REMARKS) VALUES ('%s' ,'%s', '%s')" % (x[0],  x[1], x[2])
    try:
        sqlite3_cursor.execute(sql_sqlite3)
        print("\033[0;36;40m", "插入成功", "\033[0m")
        sqlite3_conn.commit()
    except Exception as e:
        print("\033[0;31;40m", "插入失败：", e, "\033[0m","打印：：：：：\n",  sql_sqlite3)
        sqlite3_conn.rollback()

sql = "select count(*) from dict_utf8_update"
sqlite3_cursor.execute(sql)
values = sqlite3_cursor.fetchall()
for value in values:
    print("sql: select count(*) from dict_utf8_update\nres:    ", value)


# 关闭游标：
sqlite3_cursor.close()
sqlite3_conn.commit()
sqlite3_conn.close()

mysql_cursor.close()

    

