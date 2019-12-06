
需要备份的表格(全部)
// 不用管编码 1> ~ 100> , 外面用不上
//     外面用第2行的表名区分


//1> 新表--word--备份
//       dict_utf8_all_bak
DROP TABLE IF EXISTS dict_utf8_all_bak;
CREATE TABLE dict_utf8_all_bak LIKE dict_utf8_all;
INSERT INTO dict_utf8_all_bak SELECT * FROM dict_utf8_all;
//数据整理错, 也要还原
DELETE FROM dict_utf8_all;
INSERT INTO dict_utf8_all SELECT * FROM dict_utf8_all_bak;

//       dict_utf8_update_bak
DROP TABLE IF EXISTS dict_utf8_update_bak;
CREATE TABLE dict_utf8_update_bak LIKE dict_utf8_update;
INSERT INTO dict_utf8_update_bak SELECT * FROM dict_utf8_update;
//数据整理错, 需要还原
DELETE FROM dict_utf8_update;
INSERT INTO dict_utf8_update SELECT * FROM dict_utf8_update_bak;


//2> 整理--词性旧表--备份:
//       dict_count_cx_old
DROP TABLE IF EXISTS dict_count_cx_old_bak;
CREATE TABLE dict_count_cx_old_bak LIKE dict_count_cx_old;
INSERT INTO dict_count_cx_old_bak SELECT * FROM dict_count_cx_old;
//改表结构--略, 需要还原
INSERT INTO dict_count_cx_old SELECT `CTN`,`CTO`,0,`CTS`,`CT` FROM dict_count_cx_old_bak;


//3> 整理--词性旧表--all--备份:
//       dict_count_cx_old_full
DROP TABLE IF EXISTS dict_count_cx_old_full_bak;
CREATE TABLE dict_count_cx_old_full_bak LIKE dict_count_cx_old_full;
INSERT INTO dict_count_cx_old_full_bak SELECT * FROM dict_count_cx_old_full;
//改表结构--略, 需要还原
INSERT INTO dict_count_cx_old_full SELECT `CTN`,`CTO`,0,`CTS`,`CT` FROM dict_count_cx_old_full_bak;


//4> 整理--style 表--备份:
//		 dict_cfg_style_bak
DROP TABLE IF EXISTS dict_cfg_style_bak;
CREATE TABLE dict_cfg_style_bak LIKE dict_cfg_style;
INSERT INTO dict_cfg_style_bak SELECT * FROM dict_cfg_style;
//改表结构--略, 需要还原
INSERT INTO dict_cfg_style SELECT `TESTS`,`TESTN`,`TESTNN`,`TESTO`,`TESTON`,0 FROM dict_cfg_style_bak;
//查看不同 282(549), 错误超过一半
//SELECT count(*) FROM dict_cfg_style;
SELECT count(*) FROM dict_cfg_style WHERE `TESTN`!= `QN`;
//select * FROM dict_cfg_style WHERE `TESTN`!= `QN`;


//5> 手动整理--conv表--备份:
//       dict_cfg_conv_bak
DROP TABLE IF EXISTS dict_cfg_conv_bak;
CREATE TABLE dict_cfg_conv_bak LIKE dict_cfg_conv_full;
INSERT INTO dict_cfg_conv_bak SELECT * FROM dict_cfg_conv;


//6> 处理慢--sentence表--备份:
//       sentence_base_bak
DROP TABLE IF EXISTS sentence_base_bak;
CREATE TABLE sentence_base_bak LIKE sentence_base_test;
INSERT INTO sentence_base_bak SELECT * FROM sentence_base_test;

//       sentence_list_new_bak
DROP TABLE IF EXISTS sentence_list_new_bak;
CREATE TABLE sentence_list_new_bak LIKE sentence_list_new_test;
INSERT INTO sentence_list_new_bak SELECT * FROM sentence_list_new_test;

//       sentence_list_old_bak
DROP TABLE IF EXISTS sentence_list_old_bak;
CREATE TABLE sentence_list_old_bak LIKE sentence_list_old_test;
INSERT INTO sentence_list_old_bak SELECT * FROM sentence_list_old_test;
	

//7> 备份style, 后面统计all:
//       dict_count_cx_new_style
DROP TABLE IF EXISTS dict_count_cx_new_style;
CREATE TABLE dict_count_cx_new_style LIKE dict_count_cx_new;
INSERT INTO dict_count_cx_new_style SELECT * FROM dict_count_cx_new;

//       dict_count_cx_old_style
DROP TABLE IF EXISTS dict_count_cx_old_style;
CREATE TABLE dict_count_cx_old_style LIKE dict_count_cx_old;
INSERT INTO dict_count_cx_old_style SELECT * FROM dict_count_cx_old;


//8> 备份vector, 手动标记不正常路径:
//       tbl_vector_bak
DROP TABLE IF EXISTS tbl_vector_bak;
CREATE TABLE tbl_vector_bak LIKE tbl_vector;
INSERT INTO tbl_vector_bak SELECT * FROM tbl_vector;


//9> 备份 vector_mark:
//       tbl_vector_mark_bak
DROP TABLE IF EXISTS tbl_vector_mark_bak;
CREATE TABLE tbl_vector_mark_bak LIKE tbl_vector_mark;
INSERT INTO tbl_vector_mark_bak SELECT * FROM tbl_vector_mark;


//10> 备份 sentence_path_all:
//       sentence_path_all_del
DROP TABLE IF EXISTS sentence_path_all_del;
CREATE TABLE sentence_path_all_del LIKE sentence_path_all;
INSERT INTO sentence_path_all_del SELECT * FROM sentence_path_all;
//部分还原:
select * from sentence_path_all_del where PSTR like "白色芭蕾裙保佑我%"
//77440
select * from sentence_path_all_del where CID>77440
INSERT INTO sentence_path_all(CCOUNT,PSTR,CSTR,NSTR) SELECT CCOUNT,PSTR,CSTR,NSTR FROM sentence_path_all_del where CID<77440;
select * from sentence_path_all_del where CID>77440
//全部还原:
DROP TABLE IF EXISTS sentence_path_all;
CREATE TABLE sentence_path_all LIKE sentence_path_all_del;
INSERT INTO sentence_path_all SELECT * FROM sentence_path_all_del;
SELECT *  FROM `sentence_path_all`; 
//   查看总数 86361
SELECT COUNT(*)  FROM `sentence_path_all`; 
//   查看总数 86361
SELECT COUNT(*)  FROM `sentence_path_all_edit`;
//   查看总数 86361
SELECT COUNT(*)  FROM `sentence_path_all_del`; 
//   查看总数 166107
SELECT COUNT(*)  FROM `sentence_path_all_no_del`;


//备份
//       sentence_path_all_del_bak
DROP TABLE IF EXISTS sentence_path_all_del_bak;
CREATE TABLE sentence_path_all_del_bak LIKE sentence_path_all;
INSERT INTO sentence_path_all_del_bak SELECT * FROM sentence_path_all;
SELECT *  FROM `sentence_path_all_del_bak`; 


//备份
//       sentence_path_all_edit
DROP TABLE IF EXISTS sentence_path_all_edit;
CREATE TABLE sentence_path_all_edit LIKE sentence_path_all;
INSERT INTO sentence_path_all_edit SELECT * FROM sentence_path_all;
SELECT *  FROM `sentence_path_all_edit`; 



//11> 再次备份 sentence_path_all_no_del:
//       sentence_path_all_no_del
DROP TABLE IF EXISTS sentence_path_all_no_del;
CREATE TABLE sentence_path_all_no_del LIKE sentence_path_all_del;
INSERT INTO sentence_path_all_no_del SELECT * FROM sentence_path_all_del;
SELECT *  FROM `sentence_path_all_no_del`; 
//全部还原:
DROP TABLE IF EXISTS sentence_path_all_del;
CREATE TABLE sentence_path_all_del LIKE sentence_path_all_no_del;
INSERT INTO sentence_path_all_del SELECT * FROM sentence_path_all_no_del;
SELECT *  FROM `sentence_path_all_del`; 


//12> 再次备份sentence_path_layer:
//       sentence_path_layer_bak
DROP TABLE IF EXISTS sentence_path_layer_bak;
CREATE TABLE sentence_path_layer_bak LIKE sentence_path_layer;
INSERT INTO sentence_path_layer_bak SELECT * FROM sentence_path_layer;
SELECT *  FROM `sentence_path_layer_bak`; 
#计数
SELECT COUNT(*) FROM sentence_path_layer;
SELECT COUNT(*) FROM sentence_path_layer_bak;



//13> 测试 sentence_path_test:
//       sentence_path_test
DROP TABLE IF EXISTS sentence_path_test;
CREATE TABLE sentence_path_test LIKE sentence_path_all;
#测试1 部分--xx6xx
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 6, "\_[1-9]*\_[1-9]*") limit 0,10;
SELECT *  FROM `sentence_path_test`; 
#测试2 部分--xx610x
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 6, "\_10\_[1-9]*") limit 0,10;
SELECT *  FROM `sentence_path_test`; 
#测试3 全部--xx610x--count:1001
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 6, "\_10\_[1-9]*");
SELECT *  FROM `sentence_path_test`; 
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试4 全部--xx615x--count:3219
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 6, "\_15\_[1-9]*");
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试5 全部--xx616x--count:4292
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 6, "\_16\_[1-9]*");
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试6 全部--xx56x--count:4292
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 5, "\_6\_[1-9]*");
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试7 全部--xx159x--count:4292
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 15, "\_9\_[1-9]*");
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试8 全部--xx157x--count:789
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 15, "\_7\_[1-9]*");
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试9 全部--xx311x--count:10504
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_path_all where NSTR REGEXP CONCAT('[1-9]*\_[1-9]*\_', 3, "\_11\_[1-9]*");
SELECT COUNT(*)  FROM `sentence_path_test`; 



//14> 测试 sentence_path_test_te:
//       sentence_path_test_te
#测试1 全部--的--count:18308
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_的\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试2 全部--了--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_了\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试3 全部--着--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_着\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试4 全部--是--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_是\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`;
#测试5 全部--在--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_在\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`;
#测试6 全部--有--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_有\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`;
#测试7 全部--被--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_被\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`;
#测试8 全部--就--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_就\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`;
#测试9 全部--从--count:
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_从\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`;




//15> 测试 sentence_path_test_full:
//       sentence_path_test_full
#测试1 全部--6--count:31870
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE NSTR REGEXP "\_.*\_6\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试2 全部--3--count:31603
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE NSTR REGEXP "\_.*\_3\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试3 全部--5--count:7260
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE NSTR REGEXP "\_.*\_5\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 
#测试4 全部--15--count:11597
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM `sentence_path_all` WHERE NSTR REGEXP "\_.*\_15\_.*\_";
SELECT COUNT(*)  FROM `sentence_path_test`; 



//16> 测试 sentence_path_num:
//       sentence_path_num_bak
DROP TABLE IF EXISTS sentence_path_num_bak;
CREATE TABLE sentence_path_num_bak LIKE sentence_path_num;
INSERT INTO sentence_path_num_bak SELECT * FROM sentence_path_num;
SELECT *  FROM `sentence_path_num_bak`; 
SELECT COUNT(*)  FROM `sentence_path_num_bak`; 


//17> 测试 sentence_path_test_w:
//       sentence_path_test_w_3_bak
DROP TABLE IF EXISTS sentence_path_test_w_3_bak;
CREATE TABLE sentence_path_test_w_3_bak LIKE sentence_path_test_w;
INSERT INTO sentence_path_test_w_3_bak SELECT * FROM sentence_path_test_w;
SELECT *  FROM `sentence_path_test_w_3_bak`; 

//       sentence_path_test_w_6_bak
DROP TABLE IF EXISTS sentence_path_test_w_6_bak;
CREATE TABLE sentence_path_test_w_6_bak LIKE sentence_path_test_w;
INSERT INTO sentence_path_test_w_6_bak SELECT * FROM sentence_path_test_w;
SELECT *  FROM `sentence_path_test_w_6_bak`; 

//       sentence_path_test_w_6_vct_bak
DROP TABLE IF EXISTS sentence_path_test_w_6_vct_bak;
CREATE TABLE sentence_path_test_w_6_vct_bak LIKE sentence_path_test_w_6_bak;
INSERT INTO sentence_path_test_w_6_vct_bak SELECT * FROM sentence_path_test_w_6_bak;
SELECT *  FROM `sentence_path_test_w_6_vct_bak`; 

//       sentence_path_test_w_11_bak
DROP TABLE IF EXISTS sentence_path_test_w_11_bak;
CREATE TABLE sentence_path_test_w_11_bak LIKE sentence_path_test_w;
INSERT INTO sentence_path_test_w_11_bak SELECT * FROM sentence_path_test_w;
SELECT *  FROM `sentence_path_test_w_11_bak`; 

//       sentence_path_test_w_15_bak
DROP TABLE IF EXISTS sentence_path_test_w_15_bak;
CREATE TABLE sentence_path_test_w_15_bak LIKE sentence_path_test_w;
INSERT INTO sentence_path_test_w_15_bak SELECT * FROM sentence_path_test_w;
SELECT *  FROM `sentence_path_test_w_15_bak`; 

//       sentence_path_test_w_log_bak
DROP TABLE IF EXISTS sentence_path_test_w_log_bak;
CREATE TABLE sentence_path_test_w_log_bak LIKE sentence_path_test_w;
INSERT INTO sentence_path_test_w_log_bak SELECT * FROM sentence_path_test_w;
SELECT *  FROM `sentence_path_test_w_log_bak`; 

//       sentence_path_test_w_full_bak
DROP TABLE IF EXISTS sentence_path_test_w_full_bak;
CREATE TABLE sentence_path_test_w_full_bak LIKE sentence_path_test_w;
INSERT INTO sentence_path_test_w_full_bak SELECT * FROM sentence_path_test_w;
SELECT *  FROM `sentence_path_test_w_full_bak`; 











//18> 测试 sentence_path_test_result:
//       sentence_path_test_result_bak
DROP TABLE IF EXISTS sentence_path_test_result_bak;
CREATE TABLE sentence_path_test_result_bak LIKE sentence_path_test_result;
INSERT INTO sentence_path_test_result_bak SELECT * FROM sentence_path_test_result;
SELECT *  FROM `sentence_path_test_result_bak`; 
//再次备份
DELETE FROM sentence_path_test_result_bak;
INSERT INTO sentence_path_test_result_bak SELECT * FROM sentence_path_test_result;
SELECT count(*)  FROM `sentence_path_test_result_bak`; 
//还原
INSERT INTO sentence_path_test_result SELECT * FROM sentence_path_test_result_bak;
SELECT count(*)  FROM `sentence_path_test_result`; 



//19> 测试 sentence_path_test_result_full:
#       sentence_path_test_result_full
DROP TABLE IF EXISTS sentence_path_test_result_full;
CREATE TABLE sentence_path_test_result_full LIKE sentence_path_test_result_bak;
SELECT *  FROM `sentence_path_test_result_full`; 

#       sentence_path_test_result_merge
DROP TABLE IF EXISTS sentence_path_test_result_merge;
CREATE TABLE sentence_path_test_result_merge LIKE sentence_path_test_result_bak;
SELECT *  FROM `sentence_path_test_result_merge`; 


#       sentence_path_test_result_del
DROP TABLE IF EXISTS sentence_path_test_result_del;
CREATE TABLE sentence_path_test_result_del LIKE sentence_path_test_result_bak;
SELECT *  FROM `sentence_path_test_result_del`; 



//20> 测试 sentence_path_test_result_merge:
#       sentence_path_test_result_merge_bak
DROP TABLE IF EXISTS sentence_path_test_result_merge_bak;
CREATE TABLE sentence_path_test_result_merge_bak LIKE sentence_path_test_result_merge;
INSERT INTO sentence_path_test_result_merge_bak SELECT * FROM sentence_path_test_result_merge;
SELECT *  FROM `sentence_path_test_result_merge_bak`; 



//21> 新建类似表格, 先插入再删的话, ID会很大:
//       sentence_mini_all
DROP TABLE IF EXISTS sentence_mini_all;
CREATE TABLE sentence_mini_all LIKE sentence_path_all;
INSERT INTO sentence_mini_all SELECT * FROM sentence_path_all;
//  bak mini:
DELETE FROM sentence_mini_all;
select * from sentence_mini_all;
//  查看总数 0
SELECT COUNT(*)  FROM `sentence_mini_all`; 



//22> 备份 以作者/书名为表名:
//       sentence_mini_lysheng_no_del
DROP TABLE IF EXISTS sentence_mini_lysheng_no_del;
CREATE TABLE sentence_mini_lysheng_no_del LIKE sentence_mini_all;
INSERT INTO sentence_mini_lysheng_no_del SELECT * FROM sentence_mini_all;
//  删除超长:  50
DELETE FROM sentence_mini_all where ccount>30;
//  查看总数 
SELECT COUNT(*)  FROM `sentence_mini_all`; 
//  查看总数 56049      --删除未知类
SELECT COUNT(*)  FROM `sentence_mini_lysheng_del`; 
//  查看总数 121178 --删除超长
SELECT COUNT(*)  FROM `sentence_mini_lysheng_no_del`; 


//       sentence_mini_lysheng_del
DROP TABLE IF EXISTS sentence_mini_lysheng_del;
CREATE TABLE sentence_mini_lysheng_del LIKE sentence_mini_all;
// delete
DELETE FROM sentence_mini_lysheng_del;
SELECT COUNT(*)  FROM `sentence_mini_all`; 
INSERT INTO sentence_mini_lysheng_del SELECT * FROM sentence_mini_all;


// 更新nstr后重新备份:
//       sentence_mini_lysheng_del_two
DELETE FROM sentence_mini_lysheng_no_del;
INSERT INTO sentence_mini_lysheng_no_del SELECT * FROM sentence_mini_all;

// 更新nstr后重新备份:
//       sentence_mini_lysheng_del_three
DELETE FROM sentence_mini_lysheng_del;
INSERT INTO sentence_mini_lysheng_del SELECT * FROM sentence_mini_all;









