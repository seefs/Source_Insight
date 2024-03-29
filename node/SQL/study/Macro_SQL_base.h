
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\SQL\study\Macro_SQL_base.h \[1.1\] CREATE TABLE
Save:node\SQL\study\Macro_SQL_base.h \[1.2\] nlp--csv文件说明 
Save:node\SQL\study\Macro_SQL_base.h \[1.3\] word--csv文件说明 
Save:node\SQL\study\Macro_SQL_base.h \[1.4\] 设想 
Save:node\SQL\study\Macro_SQL_base.h \[1.5\] 表数量
Save:node\SQL\study\Macro_SQL_base.h \[1.6\] 备份--集
Save:node\SQL\study\Macro_SQL_base.h \[1.7\] alter--集
Save:node\SQL\study\Macro_SQL_base.h \[1.8\] create--集
Save:node\SQL\study\Macro_SQL_base.h \[1.9\] 余路设计
Save:node\SQL\study\Macro_SQL_base.h \[1.10\] 
Save:node\SQL\study\Macro_SQL_base.h \[1.11\] 
Save:node\SQL\study\Macro_SQL_base.h \[1.12\] 
// 2. mysql
Save:node\SQL\study\Macro_SQL_base.h \[2.1\] 语法:LOAD DATA INFILE
Save:node\SQL\study\Macro_SQL_base.h \[2.2\] 语法:SELECT INTO OUTFILE
Save:node\SQL\study\Macro_SQL_base.h \[2.3\] 语法: REGEXP
Save:node\SQL\study\Macro_SQL_base.h \[2.4\] 语法: 分组过滤 having
Save:node\SQL\study\Macro_SQL_base.h \[2.5\] select多表查询, like, REGEXP 
Save:node\SQL\study\Macro_SQL_base.h \[2.6\] 变量使用
Save:node\SQL\study\Macro_SQL_base.h \[2.7\] 存储过程
Save:node\SQL\study\Macro_SQL_base.h \[2.8\] 循环语句
Save:node\SQL\study\Macro_SQL_base.h \[2.9\] 拆分
Save:node\SQL\study\Macro_SQL_base.h \[2.10\] 删除重复, 重全名
Save:node\SQL\study\Macro_SQL_base.h \[2.11\] 
Save:node\SQL\study\Macro_SQL_base.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] CREATE TABLE
DROP TABLE IF EXISTS  `sfs_pinyin`;
CREATE TABLE `sfs_pinyin` (
  `id` int(32) NOT NULL ,
  `py` varchar(64) DEFAULT NULL,
  `sd` tinyint(4) DEFAULT NULL,
  `shendiao` tinyint(4) DEFAULT NULL,
  `pinyin` varchar(128) DEFAULT NULL ,
  `hanzi` varchar(8) DEFAULT NULL ,
  `uco_id` varchar(16) DEFAULT NULL
)default character set utf8;


insert into `sfs_pinyin`(`id`,`py`,`sd`,`shendiao`,`pinyin`,`hanzi`,`uco_id`) values
('12295','ling2','2','2','líng','〇','3007'),
('19968','yi1','1','1','yī','一','4E00'),
('19969','ding1,zheng1','0','1','dīng,zhēng','丁','4E01'),
('19970','kao3','3','2','kǎo','丂','4E02'),
('19971','qi1','1','1','qī','七','4E03'),
('40868','xie2','2','2','xié','龤','9FA4'),
('40869','yue4','4','3','yuè','龥','9FA5');





[1.2] nlp--csv文件说明 
// test数据
data_utf8.csv
data_utf8_add.csv
data_utf8_add_title.csv
// 原数据
dict_all.txt
// 数据转换
dict_cfg_conv.csv
// 新词性
dict_cfg_nbase.csv
// 旧词性
dict_cfg_obase.csv
dict_cfg_obase_full.csv
// 原数据
dict_utf8_all.csv
dict_utf8_all_test.csv




[1.3] word--csv文件说明 
//path:
dataPath = D:\project\S_name\3^sql^data

// 原数据
Data:u8_csv_bak\sfs_pinyin.csv
// 40_bit
Data:u8_csv_bak\sys_40_bit.csv
Data:u8_csv_bak\sys_40_gongshi.csv
Data:u8_csv_bak\sys_40_show.csv
// ph--no use
Data:u8_csv_bak\sys_ph_chat_content.csv
Data:u8_csv_bak\sys_ph_chat_type.csv
Data:u8_csv_bak\sys_ph_fenxi_content.csv
// ph--data-1-2-3
Data:u8_csv_bak\sys_ph_fenxi_type.csv
Data:u8_csv_bak\sys_ph_fenxi_user.csv
Data:u8_csv_bak\sys_ph_fenxi_user_new_csv.csv
// ph--no use
Data:u8_csv_bak\sys_ph_member.csv
// ph--data-4-5
Data:u8_csv_bak\sys_ph_mem_geren.csv
Data:u8_csv_bak\sys_ph_mem_gexing.csv
// ph--no use
Data:u8_csv_bak\sys_ph_mem_sex.csv
Data:u8_csv_bak\sys_ph_mem_type.csv
Data:u8_csv_bak\sys_ph_user.csv
// pipei
Data:u8_csv_bak\sys_pipei_bit.csv
Data:u8_csv_bak\sys_pipei_geren_chenfen.csv
Data:u8_csv_bak\sys_pipei_geren_main.csv
Data:u8_csv_bak\sys_pipei_geren_typeid.csv
Data:u8_csv_bak\sys_pipei_geren_xu.csv
// pipei--no use
Data:u8_csv_bak\sys_pipei_name.csv
// pipei--data-6
Data:u8_csv_bak\sys_pipei_word.csv
// word--1字, 2字, 3字, 4字, 5字以上
Data:u8_csv_bak\sys_word_1.csv
Data:u8_csv_bak\sys_word_2.csv
Data:u8_csv_bak\sys_word_3.csv
Data:u8_csv_bak\sys_word_4.csv
Data:u8_csv_bak\sys_word_5add.csv
// word--最多项最少项
Data:u8_csv_bak\sys_word_common.csv
Data:u8_csv_bak\sys_word_complex.csv




[1.4] 设想
//类型增加:
//12->很-短连，全-长连




[1.5] 表数量
//	67
SELECT COUNT(TABLE_NAME) FROM information_schema.TABLES WHERE TABLE_SCHEMA='jiebanew'; 




[1.6] 需要备份的表格(全部)
// 1 ~ 5
sql_sp\bak_tbl.py   dict_utf8_all_bak
sql_sp\bak_tbl.py   dict_utf8_update_bak  ++
sql_sp\bak_tbl.py   dict_count_cx_old
sql_sp\bak_tbl.py   dict_count_cx_old_full
sql_sp\bak_tbl.py   dict_cfg_style_bak
sql_sp\bak_tbl.py   dict_cfg_conv_bak
// 6 ~ 10
sql_sp\bak_tbl.py   sentence_base_bak
sql_sp\bak_tbl.py   dict_count_cx_new_style
sql_sp\bak_tbl.py   tbl_vector_bak
sql_sp\bak_tbl.py   tbl_vector_mark_bak
sql_sp\bak_tbl.py   sentence_path_all_del
// 11 ~ 15




[1.7] alter--集
//添加自增列
sql_sp\bak_alter_tbl.py  sentence_cx
//修改主键
sql_sp\bak_alter_tbl.py  dict_utf8_all
//添加字段
sql_sp\bak_alter_tbl.py  tbl_base
sql_sp\bak_alter_tbl.py  sentence_path
//添加字段, 删除字段
sql_sp\bak_alter_tbl.py  dict_utf8_update







[1.8] create--集
//字典:
sql_sp\bak_create_tbl.py  dict_utf8_update

//句子
sql_sp\bak_create_tbl.py  sentence_base




[1.9] 余路设计

//1) 未知类预测
	2-1+?+2-4
	2-1+3+2-4,max
	
//2) 名字预测
	name:?
	name:a
	name:b

//3) 补充全词性

//4) 长词性匹配
	组合词


//5) 总计划:
	1~5 前面几种;
	6~10 古文+数理化;
	11~15 普通+特殊人;
	16~20 环境+世界;
	21~25 自然+超自然;
	26~30 虚无+永生;

//6) 小计划
	没事就跑新小说





[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 




//5.help
[2.1] 语法:LOAD DATA INFILE

LOAD DATA [LOW_PRIORITY | CONCURRENT] [LOCAL] INFILE 'file_name'
	[REPLACE | IGNORE]
	INTO TABLE tbl_name
	[PARTITION (partition_name,...)]
	[CHARACTER SET charset_name]
	[{FIELDS | COLUMNS}
	[TERMINATED BY 'string']
	[[OPTIONALLY] ENCLOSED BY 'char']
	[ESCAPED BY 'char']
	]
	[LINES
	[STARTING BY 'string']
	[TERMINATED BY 'string']
	]
	[IGNORE number {LINES | ROWS}]
	[(col_name_or_user_var,...)]
	[SET col_name = expr,...]




[2.2] 语法:SELECT INTO OUTFILE
> help select;
Name: 'SELECT'
Description:
Syntax:
SELECT
	[ALL | DISTINCT | DISTINCTROW ]
	  [HIGH_PRIORITY]
	  [MAX_STATEMENT_TIME = N]
	  [STRAIGHT_JOIN]
	  [SQL_SMALL_RESULT] [SQL_BIG_RESULT] [SQL_BUFFER_RESULT]
	  [SQL_CACHE | SQL_NO_CACHE] [SQL_CALC_FOUND_ROWS]
	select_expr [, select_expr ...]
	[FROM table_references
	  [PARTITION partition_list]
	[WHERE where_condition]
	[GROUP BY {col_name | expr | position}
	  [ASC | DESC], ... [WITH ROLLUP]]
	[HAVING where_condition]
	[ORDER BY {col_name | expr | position}
	  [ASC | DESC], ...]
	[LIMIT {[offset,] row_count | row_count OFFSET offset}]
	[PROCEDURE procedure_name(argument_list)]
	[INTO OUTFILE 'file_name'
		[CHARACTER SET charset_name]
		export_options
	  | INTO DUMPFILE 'file_name'
	  | INTO var_name [, var_name]]
	[FOR UPDATE | LOCK IN SHARE MODE]]



select * from e into outfile "/data/mysql/e.sql" fields terminated by ',';


[2.3] 语法: REGEXP

SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^15\_', "6\_[0-9]*$");





[2.4] 语法: 分组过滤 having
INSERT INTO dict_utf8_all (NID,SID,COUNT) select 0, DTXT,count(*) as count from dict_utf8_all group by DTXT having count>1;




[2.5] select多表查询, like, REGEXP
//1> 外连接-左连接
select * from a left join b on a.id=b.id
//2> 外连接-右连接
select * from a right join b on a.id=b.id
//3> 外连接-全连接
select * from a full join b on a.id=b.id
//4> 内连接
select * from a inner join b on a.id=b.id
同
select * form a,b where a.ID=b.ID
//4> 外连接-交叉连接
select * from a cross join b
//5> 多对多连接
select a.Name,b.Name from z left join a on z.ID=a.ID left join b on z.ID=b.ID

//like,

//REGEXP 
(SQLite 不支持)


[2.6] 变量使用
//变量使用
SET @EMAIL:=3;
SELECT * FROM tbl_vector WHERE VID=@EMAIL;
SELECT @EMAIL:=3;
SELECT * FROM tbl_vector WHERE VID=@EMAIL;
SELECT @NUM_EMAIL:= VC3 FROM tbl_vector WHERE `VID`= 3;
SELECT @NUM_EMAIL NUM;


//	mysql不允许变量直接作为字段名或表名进行查询
//	所以只能通过创建sql语句的方式实现
SET @province = 'VC3';
SET @strsql = concat('SELECT ',@province,' FROM tbl_vector;');
PREPARE stmt FROM @strsql;
EXECUTE stmt;


//获得所有字段名称
SET @sql1 = (SELECT COLUMN_NAME FROM information_schema.COLUMNS WHERE table_name = 'tbl_vector' limit 3,1);


[2.7] 存储过程





[2.8] 循环语句
//1) WHILE……DO……END WHILE
 while i<5 do
     insert into t1(filed) values(i);
     set i=i+1;
 end while;

//2) REPEAT……UNTIL……END REPEAT
 repeat
	   insert into t1(filed) values(i);
	   set i=i+1;
	   until i>=5
 end repeat;

//3) LOOP……END LOOP
loop_label: loop
    insert into t1(filed) values(i);
    set i=i+1;
    if i>=5 then
        leave loop_label;
    end if;
end loop;


//4) iterate 再次循环
loop_label:loop
iterate loop_label;
end loop;


[2.9] 拆分
SELECT SUBSTRING_INDEX(REVERSE(SUBSTRING_INDEX("aa1,bb1,cc1,dd1", ",", 1)), ",", 1); #1aa
SELECT SUBSTRING_INDEX(REVERSE(SUBSTRING_INDEX("aa1,bb1,cc1,dd1", ",", 2)), ",", 1); #1bb
SELECT SUBSTRING_INDEX(REVERSE(SUBSTRING_INDEX("aa1,bb1,cc1,dd1", ",", 3)), ",", 1); #1cc




[2.10] 删除重复, 重全名
#删除重复
	DELETE a FROM sentence_path_test_result_merge a, 
			(SELECT *,MIN(tv) mtv  FROM `sentence_path_test_result_merge` GROUP BY cw HAVING  COUNT(*)>1) b 
			where a.cw=b.cw and a.tv=mtv;


//重全名
rename table table1 to table2;


[2.11] 





[2.12] 


