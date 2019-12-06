#!/usr/bin/python3
 
import sqlite3

# 连接到数据库
# 如果数据库不存在的话，将会自动创建一个 数据库
conn = sqlite3.connect("sqlite3/World.db3")


# 手动创建：
DROP TABLE IF EXISTS  "dict_utf8_update";
CREATE TABLE "dict_utf8_update" (
  "DTXT" TEXT PRIMARY KEY NOT NULL,
  "DCXE" TEXT DEFAULT NULL,
  "REMARKS" TEXT DEFAULT NULL
);



#SELECT MAX(LENGTH("DTXT")) FROM "dict_utf8_update";
# ==> max len = 48;





