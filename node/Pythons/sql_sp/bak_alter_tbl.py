

# 添加自增列
#      sentence_cx
ALTER TABLE sentence_base_test add CID int;
alter table sentence_base_test change CID CID int NOT NULL AUTO_INCREMENT primary key;



# 修改主键
#      dict_utf8_all
alter table dict_utf8_all change DTXT DTXT varchar(255) NOT NULL primary key;



# 添加字段
#      tbl_base
ALTER TABLE tbl_base add FIRST_ID int;



# 添加字段
#      sentence_path_test_right_base
ALTER TABLE sentence_path_test_right_base add WSTR varchar(64);

UPDATE sentence_path_test_right_base SET WSTR = "是";



# 添加字段, 删除字段
#      dict_utf8_update
# 添加字段--DCXM,DW
ALTER TABLE dict_utf8_update add DCXM varchar(32);
ALTER TABLE dict_utf8_update add DW int(10);
UPDATE dict_utf8_update SET DW = 0;
#  DCXM+DW 都没用
select * from  `dict_utf8_update` where `DW`>0;
select * from  `dict_utf8_update` where `DCXM`!=`DCXM`;
# 删除字段
#      dict_utf8_update
alter table dict_utf8_update drop column DCNT,drop column DCXO,drop column DCXN,drop column DCXM,drop column DW;
# 添加字段--备注
ALTER TABLE dict_utf8_update add REMARKS varchar(255);
# 更新多义
select * from  `dict_utf8_update` where `DCXE`>26;
UPDATE dict_utf8_update SET `DCXE` = 17, `REMARKS`="cx:6,14" where `DTXT`="箱";
select * from  `dict_utf8_update` where `DTXT`="箱";




# 
#      tbl_base


# 
#      tbl_base





