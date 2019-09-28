[4.28] 转换结果--词向
//	 转换结果
//		 sentence_path_test_result
mysql\sentence_path_test_result_create.py
python_w mysql\sentence_path_test_result_create.py
//合并时统计条数
//最新条数--343--478--1058--2397--3422
DELETE FROM sentence_path_test_result;
SELECT count(*) FROM `sentence_path_test_result`;
// 更新(1)--6-->2
INSERT INTO sentence_path_test_result SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and cv<100;
SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and cv<100;
//         (2)
INSERT INTO sentence_path_test_result SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and (cv<tv2*3 or cv<100);
SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and (cv<tv2*3 or cv<100);
// 更新(2)--6-->4
INSERT INTO sentence_path_test_result SELECT cw,cn,tn2,tv2 FROM `sentence_path_test_w` WHERE tv2<18 and tv1>=18 and cv<100;
SELECT cw,cn,tn1,tv2 FROM `sentence_path_test_w` WHERE tv2<18 and tv1>=18 and (cv<tv1*3 or cv<100);
SELECT cw,cn,tn1,tv2 FROM `sentence_path_test_w` WHERE tv2<18 and tv1>=18 and cv<100;
// 更新(3)--6-->8
INSERT INTO sentence_path_test_result SELECT cw,cn,tn2,tv2 FROM `sentence_path_test_w` WHERE tv2>40  and cv<230;
SELECT cw,cn,tn2,tv2 FROM `sentence_path_test_w` WHERE tv2>40  and cv<230;
// 更新(4)--5-->14
INSERT INTO sentence_path_test_result SELECT cw,cn,tn1,tv1 FROM `sentence_path_test_w` WHERE tv1>=20;
SELECT cw,cn,tn1,tv1 FROM `sentence_path_test_w` WHERE tv1>=20;
// 更新(5)--15-->12 右词，忽略

// 备份
sql_sp\bak_tbl.py   sentence_path_test_result_bak

