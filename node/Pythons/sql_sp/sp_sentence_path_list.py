DROP PROCEDURE IF EXISTS sp_sentence_path_list;

DELIMITER $$    
CREATE PROCEDURE sp_sentence_path_list()     
BEGIN    

    DECLARE i INT;
    DECLARE j INT;
    
    DELETE FROM sentence_path_num;
    SET i = 1;
    WHILE i <= 16 DO
        SET j = 1;
        WHILE j <= 16 DO
            CALL sp_sentence_path_num(i, j, @result);

            SET j = j + 1;
        END WHILE;
        SET i = i + 1;
    END WHILE;

END    
$$    
DELIMITER ;   

CALL sp_sentence_path_list();

