

//   创建函数, 已弃用:
//       INS_SENTS_PATH_NUM
DROP FUNCTION INS_SENTS_PATH_NUM;

DELIMITER //  
CREATE FUNCTION INS_SENTS_PATH_NUM(id1 INT, id2 INT)	
RETURNS INT  
BEGIN 
	SET @n_sum = SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^[1-9]*\_', id1, "\_", id2, "$");
	
	SET @n_cur = SELECT NCOUNT FROM sentence_path_layer WHERE NID REGEXP CONCAT('^[1-9]*\_', id1, "\_", id2, "$") LIMIT 0,1;
	INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) 
			VALUES(CONCAT(id1, '_', id2, 'R'), @n_sum, 
			(SELECT NCOUNT FROM sentence_path_layer WHERE NID=CONCAT('^[1-9]*\_', id1, "\_", id2, "$")'10_10_1'), 
			0);

	RETURN 0;  
END//  
DELIMITER ;  


//   调用函数
DELETE FROM sentence_path_num;
SELECT INS_SENTS_PATH_NUM(15, 9);




//   验证sp:
//   L15_6_16 (n=90, sum=1724)
SELECT *           FROM sentence_path_layer WHERE NID REGEXP CONCAT('^15\_', "6\_[1-9]*$");
SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^15\_', "6\_[1-9]*$");
//   M15_16_6 (n=47, sum=3814)
SELECT *           FROM sentence_path_layer WHERE NID REGEXP CONCAT('^15\_', "[1-9]*\_6$");
SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^15\_', "[1-9]*\_6$");
//   16_15_6R (n=87, sum=1707)
SELECT *           FROM sentence_path_layer WHERE NID REGEXP CONCAT('^[1-9]*\_', "15\_6$");
SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^[1-9]*\_', "15\_6$");



//   设置分数 验证:
//       sql_update

#  设置分数0~100 nval
UPDATE sentence_path_num SET nval = POW(ncount*64,1/3);
UPDATE sentence_path_num SET nval = POW(ncount*64,1/3) * POW(ROUND(ncount*100/nall)*2,0.86);
UPDATE sentence_path_num SET nval = ROUND(ncount*ncount/100/(nall+1)*2);

#  设置分数
UPDATE sentence_path_num SET nval = POW(POW(ncount*64,1/3) * POW(ROUND(ncount*100/nall)*2,0.84),0.54);
SELECT * FROM sentence_path_num ORDER BY NVAL DESC;
#  设置分数 验证
SELECT * FROM sentence_path_num WHERE nid LIKE "L3%\_6";


#  条数 12127
SELECT COUNT(*) FROM sentence_path_num;
#  条数 11466
SELECT COUNT(*) FROM sentence_path_num_bak;
#  条数 最大 12288--10914
SELECT COUNT(*) FROM sentence_path_num WHERE nid REGEXP "^[LM]?[0-1]?[0-9]\_[0-1]?[0-9]\_[0-1]?[0-9][R]?";
#  条数 最大 12288--10253
SELECT COUNT(*) FROM sentence_path_num_bak WHERE nid REGEXP "^[LM]?[0-1]?[0-9]\_[0-1]?[0-9]\_[0-1]?[0-9][R]?";


//   Test 2行一起
DELETE FROM sentence_path_num;
call sp_sentence_path_num(15, 6, @result);



//检查为什么少L10
SELECT * FROM sentence_path_all WHERE NSTR REGEXP "\_.*\_10\_.*\_";
SELECT * FROM sentence_path_layer WHERE NID REGEXP "^[0-9]*\_[0-9]*\_10$";
SELECT * FROM sentence_path_num WHERE NID REGEXP "L4_1_.*";
SELECT COUNT(*) FROM sentence_path_num WHERE NID REGEXP "L4_1_.*";
SELECT * FROM sentence_path_num WHERE NID REGEXP CONCAT("^L4\_1\_[0-9]*$");



