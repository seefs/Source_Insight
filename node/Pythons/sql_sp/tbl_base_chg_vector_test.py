

#单值修改:
UPDATE `tbl_base_chg_vector` a SET `STR1`='', `STR2`='';
UPDATE `tbl_base_chg_vector` a SET `STR1`=(SELECT CHR8 FROM `tbl_base_all_sentence` b WHERE b.`CID`= a.`CID`);


#连接修改:
UPDATE `tbl_base_chg_vector` a left join tbl_base_all_sentence b on  b.`CID`= a.`CID`
        SET `STR1`=CHR3, `STR2`=CHR4;



#修改一个值试试:
SET @cid = '6044';
SET @tnum = '8';
SET @strsql = CONCAT('UPDATE `tbl_base_chg_vector` a SET `STR1`=(SELECT CHR',@tnum,' FROM `tbl_base_all_sentence` b WHERE b.`CID`= a.`CID`) WHERE a.`CID`=',@cid, ';');
PREPARE stmt FROM @strsql;
EXECUTE stmt;
DEALLOCATE PREPARE stmt;


#打印sql:
SET @strsql = (SELECT *  FROM `dict_utf8_tmp` limit 0,1);
select @strsql;




