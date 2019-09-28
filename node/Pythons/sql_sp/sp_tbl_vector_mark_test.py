
//单元测试1
SET @sql1 = 0;
SET @i = 1;
SET @strsql1 = CONCAT('SET @sql1 = (SELECT VC1 FROM tbl_vector limit ?,1);');
PREPARE stmt1 FROM @strsql1;
EXECUTE stmt1 USING @i ;
SELECT @sql1;

//单元测试2
SET @sql2 = 0;
SET @i = 1;
SET @strsql2 = CONCAT('SET @sql2 = (SELECT VC',@i,' FROM tbl_vector limit 0,1);');
PREPARE stmt2 FROM @strsql2;
EXECUTE stmt2 ;
SELECT @sql2;


//		 sp--select
UPDATE `tbl_vector_mark` SET `VC1`=2 WHERE `VID`= i;
set aaa =(select VC3 from tbl_vector WHERE `VID`= 3);
select $aaa;
//		 sp--delete
drop procedure if exists sp_tbl_vector_mark2;


//带参数
CALL sp_tbl_vector_mark();
CALL sp_tbl_vector_mark(111,222,@result);
SELECT @result



