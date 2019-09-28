


//  1>查表:
SELECT *  FROM tbl_vector_mark where VID in (7, 9);
//  9--7:  9->14...7->14;   结果: 无意义. 
SELECT * FROM `tbl_base_all_vector` where SLIST='9_14';
//  2>导入:
DELETE FROM tbl_base_chg_vector; 
INSERT INTO tbl_base_chg_vector (CID,TYPE,TNUM,SLIST) select * from tbl_base_all_vector where SLIST='9_14';
SELECT *  FROM tbl_base_chg_vector;
//  3>最后运行存储过程
//  4>不保存, 无意义



//  1>查表:
SELECT *  FROM tbl_vector_mark where VID in (5, 12, 14);
//  5--14:  5->6...14->6;    结果: 还行. 数词改为数+单位
//  5--12:  5->8...12->8;    忽略. 总数少.
//  5--12:  5->14...12->14;  忽略. 总数少.
SELECT * FROM `tbl_base_all_vector` where SLIST='5_14';
SELECT count(*) FROM `tbl_base_all_vector` where SLIST='5_14';
//  2>导入:
DELETE FROM tbl_base_chg_vector; 
INSERT INTO tbl_base_chg_vector (CID,TYPE,TNUM,SLIST) select * from tbl_base_all_vector where SLIST='5_14';
SELECT *  FROM tbl_base_chg_vector;
//  3>最后运行存储过程
//  4>保存, 导出转换
select * from tbl_base_chg_vector into outfile 'E:\\Desktop\\NLP\\dict_data\\outfile\\tbl_base_all_vector_5_14.csv' fields terminated by ',';





// 1>查表, 重复步骤3~5, 步骤2作参考:
SELECT *  FROM tbl_vector_mark where VID in (8,15,16);
SELECT *  FROM tbl_vector_mark where VID in (8,15);
SELECT *  FROM tbl_vector_mark where VID in (8,15);
//  15--8:  15_3  -> 8_3  ;    正常. 不管.
//  15--8:  15_7  -> 8_7  ;    参考. 数量少 右类: 有 从 在
//  15--8:  15_9  -> 8_9  ;    参考. 数量少 右类: 是 被
//  15--8:  15_12 -> 8_12 ;    参考. 数量少 右类: 是 被
//  15--8:  15_5  -> 8_5  ;    忽略. 非必需.
// 2>选择合适分类：数量, 准确性:
SELECT * FROM `tbl_base_all_vector` where SLIST='15_3';
SELECT count(*) FROM `tbl_base_all_vector` where SLIST='15_3';
// 3>导入:
DELETE FROM tbl_base_chg_vector; 
INSERT INTO tbl_base_chg_vector (CID,TYPE,TNUM,SLIST) select * from tbl_base_all_vector where SLIST='15_3';
SELECT *  FROM tbl_base_chg_vector;
// 4>最后运行存储过程
CALL tbl_base_chg_vector(); 
// 5>保存, 导出转换
select * from tbl_base_chg_vector into outfile 'E:\\Desktop\\NLP\\dict_data\\outfile\\tbl_base_all_vector_15_7.csv' fields terminated by ',';



# 1>查表, 重复步骤3~5, 步骤2作参考:
SELECT *  FROM tbl_vector_mark where VID in (6,4);
SELECT *  FROM tbl_vector_mark where VID in (4,8);
//  6--4:  6_10  -> 8_10  ;    可以2. 很多亲属名
//  6--4:  6_15  -> 8_15  ;    可以2. 很多亲属名
//  6--4:  6_16  -> 8_16  ;    可以8. 部分地区名
# 2>选择合适分类：数量, 准确性:
SELECT * FROM `tbl_base_all_vector` where SLIST='6_16';
SELECT count(*) FROM `tbl_base_all_vector` where SLIST='6_16';
# 3>导入:
DELETE FROM tbl_base_chg_vector; 
INSERT INTO tbl_base_chg_vector (CID,TYPE,TNUM,SLIST) select * from tbl_base_all_vector where SLIST='6_16';
SELECT *  FROM tbl_base_chg_vector;
# 4>最后运行存储过程
CALL tbl_base_chg_vector(); 
# 5>保存, 导出转换
select * from tbl_base_chg_vector into outfile 'E:\\Desktop\\NLP\\dict_data\\outfile\\tbl_base_all_vector_6_16.csv' fields terminated by ',';



# 1>查表, 重复步骤3~5, 步骤2作参考:
SELECT *  FROM tbl_vector_mark where VID in (15,10);
SELECT *  FROM tbl_vector_mark where VID in (15,12);
//  15--10:  15_9   -> 10_9   ;    参考. 数量少 右类: 是 被
//  15--10:  15_12  -> 10_12  ;    正常. 不管.
//  15--10:  15_15  -> 10_15  ;    正常. 分不清.
//  15--12:  15_7   -> 12_7   ;    正常. 不管. 右类: 有 从 在
//  15--12:  15_10  -> 12_10  ;    正常. 不管.
# 2>选择合适分类：数量, 准确性:
SELECT * FROM `tbl_base_all_vector` where SLIST='15_10';
SELECT count(*) FROM `tbl_base_all_vector` where SLIST='15_10';
# 3>导入:
DELETE FROM tbl_base_chg_vector; 
INSERT INTO tbl_base_chg_vector (CID,TYPE,TNUM,SLIST) select * from tbl_base_all_vector where SLIST='15_10';
SELECT *  FROM tbl_base_chg_vector;
# 4>最后运行存储过程
CALL tbl_base_chg_vector(); 
# 5>保存, 导出转换
select * from tbl_base_chg_vector into outfile 'E:\\Desktop\\NLP\\dict_data\\outfile\\tbl_base_all_vector_15_10.csv' fields terminated by ',';


# 1>查表, 重复步骤3~5, 步骤2作参考:
SELECT *  FROM tbl_vector_mark where VID in (3,7);
SELECT *  FROM tbl_vector_mark where VID in (3,10);
SELECT *  FROM tbl_vector_mark where VID in (3,15);
//   3--10:  3_11   -> 10_11   ;    参考. 数量少 右类: 的 了
//   3--10:  3_15   -> 10_15   ;    参考. 数量少 右类: 的 了
# 2>选择合适分类：数量, 准确性:
SELECT * FROM `tbl_base_all_vector` where SLIST='3_11';
SELECT count(*) FROM `tbl_base_all_vector` where SLIST='3_11';
# 3>导入:
DELETE FROM tbl_base_chg_vector; 
INSERT INTO tbl_base_chg_vector (CID,TYPE,TNUM,SLIST) select * from tbl_base_all_vector where SLIST='3_11';
SELECT *  FROM tbl_base_chg_vector;
# 4>最后运行存储过程
CALL tbl_base_chg_vector(); 
# 5>保存, 导出转换
select * from tbl_base_chg_vector into outfile 'E:\\Desktop\\NLP\\dict_data\\outfile\\tbl_base_all_vector_3_11.csv' fields terminated by ',';























