
基础路径设置:
basePath = Save:node\SQL
base:\\

bakPath = D:\project\bak\bak\Pythons\infile
bak:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\SQL\study\Macro_SQL_word.h \[1.1\] 创建表
Save:node\SQL\study\Macro_SQL_word.h \[1.2\] 插入
Save:node\SQL\study\Macro_SQL_word.h \[1.3\] 查询
Save:node\SQL\study\Macro_SQL_word.h \[1.4\] 更新
Save:node\SQL\study\Macro_SQL_word.h \[1.5\] 导入
Save:node\SQL\study\Macro_SQL_word.h \[1.6\] mysql导入导出sqlite3
Save:node\SQL\study\Macro_SQL_word.h \[1.7\] csv  导入导出sqlite3
Save:node\SQL\study\Macro_SQL_word.h \[1.8\] csv  导入导出mysql
Save:node\SQL\study\Macro_SQL_word.h \[1.9\] 
Save:node\SQL\study\Macro_SQL_word.h \[1.10\] 




[1.1] 创建表
//1) 创建表
mysql_test\test12.py
python_w mysql_test\test12.py




[1.2] 插入
//2) 数据库插入操作
mysql_test\test13.py
python mysql_test\test13.py




[1.3] 查询
//3) 数据库查询操作
mysql_test\test14.py
python mysql_test\test14.py


////7) 数据库查询操作
mysql_test\test17.py
python_w mysql_test\test17.py

//1) sfs_pinyin
mysql_test\test10.py
python mysql_test\test10.py

////2) 数据库查询操作
mysql_test\test11.py
python mysql_test\test11.py



[1.4] 更新
//4) 数据库更新操作
mysql_test\test15.py
python mysql_test\test15.py





[1.5] 导入
//5) 导入
mysql_test\test16.py
python_w mysql_test\test16.py

insert into `DICT`(`DTXT`,`DCNT`,`DCXO`,`DCXN`) values
('数据库',21,'dc', 'aba'),
('更新',31,'fdc', 'aba'),
('操作',5,'edc', 'abg');


//6) 导入整理
mysql\demo2.py
python_w mysql\demo2.py



[1.6] mysql导入sqlite3
bak:\\mysql_to_sqlite3

//导入测试:
// db_read
bak:mysql_to_sqlite3\db_read.py
python_w bak:mysql_to_sqlite3\db_read.py

// db_create
//  手动创建
bak:mysql_to_sqlite3\db_create.py
python_w bak:mysql_to_sqlite3\db_create.py

// db_infile\mysql_to_sqlite3----------------------不要重复导入
bak:mysql_to_sqlite3\db_mysql_to_sqlite3.py
python_w bak:mysql_to_sqlite3\db_mysql_to_sqlite3.py

//清理存储大小
VACUUM



[1.7] csv  导入导出sqlite3
bak:\\csv_to_sqlite3

// 路径未改
bak:csv_to_sqlite3\db_read.py
python_w bak:csv_to_sqlite3\db_read.py

// 导出1
//   (pandas.io.sql 不存在)
bak:csv_to_sqlite3\db_write1.py
python_w bak:csv_to_sqlite3\db_write1.py
// 输出

// 导出2
//   (cStringIO 安装不了)
bak:csv_to_sqlite3\db_write2.py
python_w bak:csv_to_sqlite3\db_write2.py
// 输出

// 导出3
//   (OK)
bak:csv_to_sqlite3\db_write3.py
python_w bak:csv_to_sqlite3\db_write3.py
// 输出
bak:\\
bak:output.csv




[1.8] csv  导入mysql
// 删除重新导入:
DELETE FROM dict_utf8_all;

// 导入不带标题
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_cfg_obase.csv'  INTO TABLE dict_cfg_obase FIELDS TERMINATED BY ',';

// set character 一次就好:
SET character_set_client = utf8;
SET character_set_results = utf8;


[1.9] 


[1.10] 

