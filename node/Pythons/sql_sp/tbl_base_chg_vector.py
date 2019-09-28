DROP PROCEDURE IF EXISTS tbl_base_chg_vector;

DELIMITER $$    
CREATE PROCEDURE tbl_base_chg_vector()     
BEGIN    
    DECLARE done INT DEFAULT -1;
    DECLARE scid INT DEFAULT 0;
    DECLARE stnum INT DEFAULT 0;
      
    /* 声明游标 */  
    DECLARE myCursor CURSOR FOR SELECT CID,TNUM FROM tbl_base_chg_vector;  
      
    /* 当游标到达尾部时，mysql自动设置done=1 */     
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done=1;  
      
    /* 打开游标 */  
    OPEN myCursor;  
      
    /* 循环开始 */  
    myLoop: LOOP  
      
        /* 移动游标并赋值 */  
        FETCH myCursor INTO scid , stnum;  
          
        IF done = 1 THEN   
            LEAVE myLoop;  
        END IF;  
          
        /* do something */  
        #SET @cid = '6044';
        #SET @tnum = '8';
        SET @strsql = CONCAT('UPDATE `tbl_base_chg_vector` a left join `tbl_base_all_sentence` b on  b.`CID`= a.`CID`
                            SET `STR1`= CHR', stnum, ', `STR2`=CHR', stnum+1, 
                            ' WHERE a.CID=', scid, ';');
        PREPARE stmt FROM @strsql;
        EXECUTE stmt;
        DEALLOCATE PREPARE stmt;
      
    /* 循环结束 */  
    END LOOP myLoop;  
      
    /* 关闭游标 */  
    CLOSE myCursor;  
    
    SELECT * FROM tbl_base_chg_vector; 
END    
$$    
DELIMITER ;   
  
CALL tbl_base_chg_vector();  

