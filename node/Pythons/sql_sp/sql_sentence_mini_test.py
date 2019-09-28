

//sql update NSTR--test: 
//   update_test
//
DELETE FROM sentence_mini_all;
INSERT INTO sentence_mini_all SELECT * FROM sentence_mini_lysheng_del limit 0, 30;
SELECT * FROM `sentence_mini_all`;

//sql update NSTR--all: 
//   update_all
//
DELETE FROM sentence_mini_all;
INSERT INTO sentence_mini_all SELECT * FROM sentence_mini_lysheng_del;
SELECT * FROM `sentence_mini_all`;
SELECT COUNT(*) FROM `sentence_mini_all`;


//sql 删除不全词性: 
//   del_no_full
//
DELETE FROM sentence_mini_all where nstr like '%\_\_%';
SELECT * FROM sentence_mini_all WHERE nstr LIKE '%\_\_%';
SELECT COUNT(*) FROM sentence_mini_all WHERE nstr LIKE '%\_\_%';
SELECT COUNT(*)  FROM `sentence_mini_all`; 
//   删除_结尾 误操作
DELETE FROM sentence_mini_all where nstr like '%\_';
SELECT * FROM sentence_mini_all WHERE nstr LIKE '%\_';
SELECT COUNT(*) FROM sentence_mini_all WHERE nstr LIKE '%\_';


//sql update NSTR--test: 
//   update_mini_test
// 取6位以上: 25034
DELETE FROM sentence_mini_all;
INSERT INTO sentence_mini_all SELECT * FROM sentence_mini_lysheng_del  where  CCOUNT >5;
SELECT COUNT(*)  FROM `sentence_mini_all`; 
// test
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_mini_all limit 0, 30;
SELECT * FROM `sentence_path_test`;
// all
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_mini_all;
SELECT * FROM `sentence_path_test`;
// next
DELETE FROM sentence_path_test;
INSERT INTO sentence_path_test SELECT * FROM sentence_mini_all limit 500, 1000;
SELECT * FROM `sentence_path_test`;












