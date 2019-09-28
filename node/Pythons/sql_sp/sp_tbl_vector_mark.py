DROP PROCEDURE IF EXISTS sp_tbl_vector_mark;
DELIMITER $$
CREATE
    /*[DEFINER = { user | CURRENT_USER }]*/
    PROCEDURE `jiebanew`.`sp_tbl_vector_mark`(OUT o_result INT)
    BEGIN
        DECLARE i INT;
        DECLARE j INT;
        SET i = 0;
        WHILE i < 16 DO
            SET @strsql3 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',i+1,'`=4 WHERE `VID`= ',i+1);
            PREPARE stmt3 FROM @strsql3;
            EXECUTE stmt3;
            DEALLOCATE PREPARE stmt3;
            
            SET j = i+1;
            WHILE j < 16 DO
                SET @sql1 = 0;
                SET @sql2 = 0;
                SET @ai = i;
                SET @aj = j;
                SET @strsql1 = CONCAT('SET @sql1 = (SELECT VC',i+1,' FROM tbl_vector limit ?,1);');
                SET @strsql2 = CONCAT('SET @sql2 = (SELECT VC',j+1,' FROM tbl_vector limit ?,1);');
                PREPARE stmt1 FROM @strsql1;
                PREPARE stmt2 FROM @strsql2;
                EXECUTE stmt1 USING @aj ;
                EXECUTE stmt2 USING @ai ;
                DEALLOCATE PREPARE stmt1;
                DEALLOCATE PREPARE stmt2;

                SET @sql1 = IF(ISNULL(@sql1), 0, @sql1);
                SET @sql2 = IF(ISNULL(@sql2), 0, @sql2);
                #SELECT i INTO o_result; 
                IF @sql1+1>(@sql2+1)*2 THEN
                    SET @strsql3 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',i+1,'`=1 WHERE `VID`= ',j+1);
                    SET @strsql4 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',j+1,'`=0 WHERE `VID`= ',i+1);
                ELSEIF @sql2+1>(@sql1+1)*2 THEN
                    SET @strsql3 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',i+1,'`=0 WHERE `VID`= ',j+1);
                    SET @strsql4 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',j+1,'`=1 WHERE `VID`= ',i+1);
                ELSEIF @sql1=0 or @sql2=0 THEN
                    IF @sql1=0 THEN
                        SET @strsql3 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',i+1,'`=4 WHERE `VID`= ',j+1);
                    ELSE
                        SET @strsql3 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',i+1,'`=1 WHERE `VID`= ',j+1);
                    END IF;
                    IF @sql2=0 THEN
                        SET @strsql4 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',j+1,'`=4 WHERE `VID`= ',i+1);
                    ELSE
                        SET @strsql4 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',j+1,'`=1 WHERE `VID`= ',i+1);
                    END IF;
                ELSE
                    SET @strsql3 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',i+1,'`=2 WHERE `VID`= ',j+1);
                    SET @strsql4 = CONCAT('UPDATE `tbl_vector_mark` SET `VC',j+1,'`=2 WHERE `VID`= ',i+1);
                END IF;
                PREPARE stmt3 FROM @strsql3;
                PREPARE stmt4 FROM @strsql4;
                EXECUTE stmt3;
                EXECUTE stmt4;
                DEALLOCATE PREPARE stmt3;
                DEALLOCATE PREPARE stmt4;
                SET j = j + 1;
            END WHILE;
            SET i = i + 1;
        END WHILE;
        SELECT * FROM tbl_vector_mark;    
    END$$
DELIMITER ;
CALL sp_tbl_vector_mark(@result);
#SELECT @result;


