DROP PROCEDURE IF EXISTS sp_sentence_path_num;

DELIMITER $$    
CREATE PROCEDURE sp_sentence_path_num(IN id1 INT, id2 INT, OUT o_result VARCHAR(64))     
BEGIN    
    DECLARE done INT DEFAULT -1;
    DECLARE cur_ncount INT DEFAULT 0;
    DECLARE cur_nid VARCHAR(64);
    DECLARE i INT DEFAULT 0;

    /* 声明游标 */  
    DECLARE myCursor CURSOR FOR SELECT NID, NCOUNT FROM  sentence_path_layer WHERE NID REGEXP CONCAT('^[0-9]*\_', id1, "\_", id2, "$");
    /* 声明游标 */  
    DECLARE myCursor2 CURSOR FOR SELECT NID, NCOUNT FROM  sentence_path_layer WHERE NID REGEXP CONCAT('^', id1, "\_", id2, "\_[0-9]*$");
    /* 声明游标 */  
    DECLARE myCursor3 CURSOR FOR SELECT NID, NCOUNT FROM  sentence_path_layer WHERE NID REGEXP CONCAT('^', id1, "\_[0-9]*\_", id2, "$");

    /* 当游标到达尾部时，mysql自动设置done=1 */     
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done=1;  
    
    /* 打开游标 */  
    OPEN myCursor;  
        SET @n_sum=(SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^[0-9]*\_', id1, "\_", id2, "$"));
          
        /* 循环开始 */  
        myLoop: LOOP  
            /* 移动游标并赋值 */  
            FETCH myCursor INTO cur_nid, cur_ncount;  
            #SELECT cur_nid INTO o_result; 
            
            IF done = 1 THEN   
                LEAVE myLoop;  
            END IF;
              
            /* do something */ 
        	INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) VALUES(CONCAT(cur_nid, 'R'), @n_sum, cur_ncount, 0);
    			
            SET i=i+1;
        /* 循环结束 */  
        END LOOP myLoop;  

        INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) VALUES(CONCAT('SUM_R_', id1, "_", id2), @n_sum, 0, 0);
      
    /* 关闭游标 */  
    CLOSE myCursor;  

    -- 注意这里，一定要重置done的值为 0
    SET done = 0;
    
    /* 打开游标 */  
    OPEN myCursor2;
        SET @n_sum=(SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^', id1, "\_", id2, "\_[0-9]*$"));
          
        /* 循环开始 */  
        myLoop: LOOP  
            /* 移动游标并赋值 */  
            FETCH myCursor2 INTO cur_nid, cur_ncount;  
            #SELECT cur_nid INTO o_result; 
            
            IF done = 1 THEN   
                LEAVE myLoop;  
            END IF;
              
            /* do something */ 
        	INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) VALUES(CONCAT('L', cur_nid), @n_sum, cur_ncount, 0);
    			
            SET i=i+1;
        /* 循环结束 */  
        END LOOP myLoop;  

        INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) VALUES(CONCAT('SUM_L_', id1, "_", id2), @n_sum, 0, 0);
      
    /* 关闭游标 */  
    CLOSE myCursor2;  
    
    -- 注意这里，一定要重置done的值为 0
    SET done = 0;
    
    /* 打开游标 */  
    OPEN myCursor3;
        SET @n_sum=(SELECT SUM(NCOUNT) FROM sentence_path_layer WHERE NID REGEXP CONCAT('^', id1, "\_[0-9]*\_", id2, "$"));
          
        /* 循环开始 */  
        myLoop: LOOP  
            /* 移动游标并赋值 */  
            FETCH myCursor3 INTO cur_nid, cur_ncount;  
            #SELECT cur_nid INTO o_result; 
            
            IF done = 1 THEN   
                LEAVE myLoop;  
            END IF;
              
            /* do something */ 
        	INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) VALUES(CONCAT('M', cur_nid), @n_sum, cur_ncount, 0);
    			
            SET i=i+1;
        /* 循环结束 */  
        END LOOP myLoop;  

        INSERT INTO sentence_path_num (NID, NALL,NCOUNT, NVAL) VALUES(CONCAT('SUM_M_', id1, "_", id2), @n_sum, 0, 0);
      
    /* 关闭游标 */  
    CLOSE myCursor3;  
    /* 关闭游标 */  
END    
$$    
DELIMITER ;   
  

