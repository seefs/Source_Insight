

//   部分测试:
//       sentence_path_all_edit
DELETE FROM sentence_path_all_edit;
INSERT INTO sentence_path_all_edit  SELECT * FROM `sentence_path_all` ;
# 部分测试
DELETE FROM sentence_path_all;
INSERT INTO sentence_path_all  SELECT * FROM `sentence_path_all_edit` limit 0,3 ;
# 部分测试--新词性
DELETE FROM sentence_path_all;
INSERT INTO sentence_path_all  SELECT * FROM `sentence_path_all_edit` where cstr like "%儿童%" limit 0,3 ;
# 还原
DELETE FROM sentence_path_all;
INSERT INTO sentence_path_all  SELECT * FROM `sentence_path_all_edit` ;















