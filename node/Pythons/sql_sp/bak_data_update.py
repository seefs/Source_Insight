

基础路径设置:
basePath = Save:node\Pythons

/***********************************************************************/


//目录[Num][Ca]:
// 1. 
sql_sp\bak_data_update.py \[1.1\] 查询--------删除
sql_sp\bak_data_update.py \[1.2\] 更新 cx----1, 5, 11
sql_sp\bak_data_update.py \[1.3\] 更新 cx----9, 13, 3, 7
sql_sp\bak_data_update.py \[1.4\] 更新 cx----14, 16
sql_sp\bak_data_update.py \[1.5\] 更新 cx----2, 4, 6, 8主类
sql_sp\bak_data_update.py \[1.6\] 更新 cx----10, 12, 15副类
sql_sp\bak_data_update.py \[1.7\] 更新 cx----标点
sql_sp\bak_data_update.py \[1.8\] 不可拆分
sql_sp\bak_data_update.py \[1.9\] 多义词 错别字
sql_sp\bak_data_update.py \[1.10\] 集体修改词性
sql_sp\bak_data_update.py \[1.11\] 
sql_sp\bak_data_update.py \[1.12\] 
//
sql_sp\bak_data_update.py \[2.1\] 添加默认值--数字
sql_sp\bak_data_update.py \[2.2\] 添加默认值--字母
sql_sp\bak_data_update.py \[2.3\] 
sql_sp\bak_data_update.py \[2.4\] 




[1.1] 查询存在, 删除

#查询存在
select * from  `dict_utf8_update` where `DTXT`="一";
select * from  `dict_utf8_update` where `DTXT`="种";
select * from  `dict_utf8_update` where `DTXT`="分钟";
select * from  `dict_utf8_update` where `DTXT`="箱";
select * from  `dict_utf8_update` where `DTXT`="花呗";
select * from  `dict_utf8_update` where `DTXT`="活动";
select * from  `dict_utf8_update` where `DTXT`=".";
select * from  `dict_utf8_update` where `DTXT`like "3%";


DELETE FROM sentence_path_test where cid>100;


#删除
DELETE FROM dict_utf8_update where `DTXT`like "27%";
select * from  `dict_utf8_update` where `DTXT`like "2%";


#删除
replace into `dict_utf8_update` values("新开通", 0, NULL);
replace into `dict_utf8_update` values("给我发", 0, NULL);





[1.2] 更新 cx----1, 5

REPLACE INTO `dict_utf8_update` VALUES("哪", 1, NULL);
select * from  `dict_utf8_update` where `DTXT`="哪";


UPDATE `dict_utf8_update` a SET `DCXE`=5 WHERE `DTXT`="每"; 






[1.3] 更新 cx----9, 13, 3, 7
# select
select * from  `dict_utf8_update` where `DTXT`="把";
select * from  `dict_utf8_update` where `DTXT`="有";

# replace
replace into `dict_utf8_update` values("把", 9, NULL);
# 常用:
replace into `dict_utf8_update` values("有", 9, NULL);

#
replace into `dict_utf8_update` values("为什么", 13, NULL);
replace into `dict_utf8_update` values("怎么", 13, NULL);
replace into `dict_utf8_update` values("如何", 13, NULL);
replace into `dict_utf8_update` values("怎么样", 13, NULL);
replace into `dict_utf8_update` values("咋个", 13, NULL);
replace into `dict_utf8_update` values("什么", 13, NULL);




# select
select * from  `dict_utf8_update` where `DTXT`="关";
select * from  `dict_utf8_update` where `DCXE`=16;

# replace
replace into `dict_utf8_update` values("喷完", 3, NULL);
replace into `dict_utf8_update` values("用", 3, NULL);
replace into `dict_utf8_update` values("刷", 3, NULL);
replace into `dict_utf8_update` values("截成", 3, NULL);
replace into `dict_utf8_update` values("关了", 3, NULL);
replace into `dict_utf8_update` values("逾期", 3, NULL);
replace into `dict_utf8_update` values("清空", 3, NULL);
replace into `dict_utf8_update` values("开花", 3, NULL);
replace into `dict_utf8_update` values("开", 3, NULL);
replace into `dict_utf8_update` values("提前", 3, NULL);














[1.4] 更新 cx----14, 16
select * from  `dict_utf8_update` where `DTXT`="种";
#
replace into `dict_utf8_update` values("段", 14, NULL);
replace into `dict_utf8_update` values("每天", 14, NULL);
replace into `dict_utf8_update` values("种", 14, NULL);

replace into `dict_utf8_update` values("后", 16, NULL);

#3 or 7 or 16
replace into `dict_utf8_update` values("去", 16, NULL);
replace into `dict_utf8_update` values("出", 16, NULL);
replace into `dict_utf8_update` values("来", 16, NULL);
replace into `dict_utf8_update` values("出来", 16, NULL);







[1.5] 更新 cx----2, 4, 6, 8主类
# 主类
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="药液"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="容积"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="多少"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="多少"; 


#
replace into `dict_utf8_update` values("长", 4, NULL);
replace into `dict_utf8_update` values("宽", 4, NULL);
replace into `dict_utf8_update` values("日期", 4, NULL);


replace into `dict_utf8_update` values("西红",0, 0, 0, 6);
replace into `dict_utf8_update` values("杮",0, 0, 0, 6);
select * from  `dict_utf8_update` where `DTXT`="食堂";
UPDATE `dict_utf8_update` a SET `DCXE`=8 WHERE `DTXT`="食堂"; 

# 
replace into `dict_utf8_update` values("花呗", 2, NULL);
replace into `dict_utf8_update` values("借呗", 2, NULL);
replace into `dict_utf8_update` values("女儿", 2, NULL);
replace into `dict_utf8_update` values("手机号码", 2, NULL);





[1.6] 更新 cx----10, 12, 15副类
#
replace into `dict_utf8_update` values("不能", 10, NULL);
replace into `dict_utf8_update` values("想", 10, NULL);
replace into `dict_utf8_update` values("不会", 10, NULL);
replace into `dict_utf8_update` values("只能", 10, NULL);
replace into `dict_utf8_update` values("才能", 10, NULL);
replace into `dict_utf8_update` values("需", 10, NULL);




#
replace into `dict_utf8_update` values("完", 12, NULL);
replace into `dict_utf8_update` values("不了", 12, NULL);
replace into `dict_utf8_update` values("不", 12, NULL);

#
replace into `dict_utf8_update` values("原来", 15, NULL);
replace into `dict_utf8_update` values("一般", 15, NULL);










[1.7] 更新 cx----标点

# 更新1, 标点, 暂时也可以不用改
replace into `dict_utf8_update` values("，",0, 0, 0, 0);
replace into `dict_utf8_update` values("。",0, 0, 0, 0);
replace into `dict_utf8_update` values("？",0, 0, 0, 0);
replace into `dict_utf8_update` values(".",0, 0, 0, 0);

replace into `dict_utf8_update` values("、",0, 0, 0, 9);
replace into `dict_utf8_update` values(".",0, 0, 0, 5);





[1.8] 不可拆分
#  ----不可拆分
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="分钟"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="食堂"; 


replace into `dict_utf8_update` values("每分",0, 14, 14, 14, 14, 2);
DELETE FROM dict_utf8_update WHERE `DTXT`="每分"; 




[1.9] 多义词 错别字
select * from  `dict_utf8_update` where `DTXT`="还";


#  多义词
# 范围:160000+1600+16
replace into `dict_utf8_update` values("箱",17, "cx:6,14");
replace into `dict_utf8_update` values("活动",17, "cx:3,4");
replace into `dict_utf8_update` values("还",17, "cx:3,15");
replace into `dict_utf8_update` values("分",17, "cx:3,14");
replace into `dict_utf8_update` values("根",17, "cx:6,14");
replace into `dict_utf8_update` values("量",17, "cx:3,6,14");
replace into `dict_utf8_update` values("度",17, "cx:6,14");
replace into `dict_utf8_update` values("制",17, "cx:3,6");
replace into `dict_utf8_update` values("帮",17, "cx:3,14");
replace into `dict_utf8_update` values("日",17, "cx:4,14");
replace into `dict_utf8_update` values("影响",17, "cx:3,4");




# 错别字
replace into `dict_utf8_update` values("己", 17, 'cx:1,12');
replace into `dict_utf8_update` values("帐", 17, "cx:6,14");







[1.10] 集体修改词性
### 1与5与9与13细节调整
select * from  `dict_utf8_update` where `DCXE`=1;
###
select * from  `dict_utf8_update` where `DTXT`="每";
select * from  `dict_utf8_update` where `DTXT`="何";
###
### 哪*-->1改成13
select * from  `dict_utf8_update` where `DTXT` LIKE "哪%";
select * from  `dict_utf8_update` where `DTXT` LIKE "何_";
select * from  `dict_utf8_update` where `DTXT` LIKE "何_%";
select * from  `dict_utf8_update` where `DTXT` LIKE "各_";
select * from  `dict_utf8_update` where `DTXT` LIKE "各__";
select * from  `dict_utf8_update` where `DTXT` LIKE "每%";
select * from  `dict_utf8_update` where `DTXT` LIKE "怎%";
###
### 多义, (姓名)
replace into `dict_utf8_update` values("何",17, "cx:13,8");
UPDATE `dict_utf8_update`  SET `DCXE`=8 WHERE `DTXT` LIKE "何__";
###
replace into `dict_utf8_update` values("哪",13, NULL);
replace into `dict_utf8_update` values("每",13, NULL);
###
UPDATE `dict_utf8_update`  SET `DCXE`=13 WHERE `DTXT` LIKE "哪%";
UPDATE `dict_utf8_update`  SET `DCXE`=13 WHERE `DTXT` LIKE "何_";
UPDATE `dict_utf8_update`  SET `DCXE`=13 WHERE `DTXT` LIKE "各_";
UPDATE `dict_utf8_update`  SET `DCXE`=13 WHERE `DTXT` LIKE "每%";
UPDATE `dict_utf8_update`  SET `DCXE`=13 WHERE `DTXT` LIKE "各__";
UPDATE `dict_utf8_update`  SET `DCXE`=13 WHERE `DTXT` LIKE "怎%";
###
### --9--
select * from  `dict_utf8_update` where `DTXT` LIKE "有%";
###
UPDATE `dict_utf8_update`  SET `DCXE`=9 WHERE `DTXT` LIKE "有%";







[1.11] 



[1.12] 


[2.1] 添加默认值--数字
#
replace into `dict_utf8_update` values("1",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("2",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("3",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("4",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("5",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("6",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("7",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("8",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("9",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("0",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values(".",0, 5, 5, 5, 5, 1);




[2.2] 添加默认值--字母
#
REPLACE INTO `dict_utf8_update` VALUES("a", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("b", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("c", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("d", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("e", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("f", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("g", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("h", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("i", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("j", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("k", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("l", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("m", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("n", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("o", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("p", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("q", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("r", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("s", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("t", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("u", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("v", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("w", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("x", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("y", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("z", 14, NULL);

REPLACE INTO `dict_utf8_update` VALUES("A", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("B", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("C", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("D", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("E", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("F", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("G", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("H", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("I", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("J", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("K", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("L", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("M", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("N", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("O", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("P", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("Q", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("R", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("S", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("T", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("U", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("V", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("W", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("X", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("Y", 14, NULL);
REPLACE INTO `dict_utf8_update` VALUES("Z", 14, NULL);






[2.3] 


[2.4] 


