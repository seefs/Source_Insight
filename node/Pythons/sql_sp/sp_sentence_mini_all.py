DROP PROCEDURE IF EXISTS sp_sentence_mini_all;

DELIMITER $$    
CREATE PROCEDURE sp_sentence_mini_all()     
BEGIN    
    DECLARE done INT DEFAULT -1;
    DECLARE scid INT DEFAULT 0;
    DECLARE sccount INT DEFAULT 0;
    DECLARE scstr VARCHAR(1024);
    DECLARE i INT DEFAULT 0;
      
    /* 声明游标 */  
    DECLARE myCursor CURSOR FOR SELECT CID,CCOUNT,CSTR FROM sentence_mini_all;  
      
    /* 当游标到达尾部时，mysql自动设置done=1 */     
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done=1;  
      
    /* 打开游标 */  
    OPEN myCursor;  
      
    /* 循环开始 */  
    myLoop: LOOP  
      
        /* 移动游标并赋值 */  
        FETCH myCursor INTO scid , sccount , scstr;  
          
        IF done = 1 THEN   
            LEAVE myLoop;  
        END IF;
          
        /* do something */ 
        SET @nstr_tmp="";
        SET @nstrs_tmp="";
        SET @ncx_tmp="";
        
        SET i=1;
        SET @nstr_tmp = SUBSTRING_INDEX(SUBSTRING_INDEX(scstr, "_", i), "_", -1);
        SET @ncx_tmp:=(SELECT `DCXN` FROM `dict_utf8_all` WHERE `DTXT`= @nstr_tmp);
        IF @ncx_tmp IS NULL THEN   
	        SET @nstrs_tmp = "_";
        ELSE
	        SET @nstrs_tmp = @ncx_tmp;
        END IF;

        SET i=i+1;
        WHILE i<=sccount DO
#         test:
#            SET @scstr="在_竞技_类_游戏_中_称赞_对方_玩得_好";  
#            测试时加上@
            SET @nstr_tmp = SUBSTRING_INDEX(SUBSTRING_INDEX(scstr, "_", i), "_", -1);
            SET @ncx_tmp:=(SELECT `DCXN` FROM `dict_utf8_all` WHERE `DTXT`= @nstr_tmp);  
            IF @ncx_tmp IS NULL THEN   
                SET @nstrs_tmp = CONCAT(@nstrs_tmp, "_");
            ELSE
                SET @nstrs_tmp = CONCAT_WS("_", @nstrs_tmp, @ncx_tmp);
            END IF;
#            SELECT @nstrs_tmp;

            SET i=i+1;
        END WHILE;
        UPDATE `sentence_mini_all` SET `NSTR`=@nstrs_tmp  WHERE CID=scid ;
      
    /* 循环结束 */  
    END LOOP myLoop;  
      
    /* 关闭游标 */  
    CLOSE myCursor;  
    
    SELECT * FROM sentence_mini_all; 
END    
$$    
DELIMITER ;   
  
CALL sp_sentence_mini_all();  

