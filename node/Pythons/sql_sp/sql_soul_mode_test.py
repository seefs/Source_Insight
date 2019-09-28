
// 手动更新词性
//       update_cx


#1.添加新词
replace into `dict_utf8_update` values("ml",0, 14, 14, 14, 14, 1);

replace into `dict_utf8_update` values("种",0, 0, 0, 9);
replace into `dict_utf8_update` values("1m",0, 0, 0, 14);
replace into `dict_utf8_update` values("截成",0, 0, 0, 3);
replace into `dict_utf8_update` values("截成",0, 0, 0, 3);


#2.查询存在
select * from  `dict_utf8_update` where `DTXT`="一";
select * from  `dict_utf8_update` where `DTXT`="种";
select * from  `dict_utf8_update` where `DTXT`="分钟";
select * from  `dict_utf8_update` where `DTXT`="2";
select * from  `dict_utf8_update` where `DTXT`="刷";


#3.更新 DCXE
#  ----基本词性
UPDATE `dict_utf8_update` a SET `DCXE`=14 WHERE `DTXT`="种"; 
UPDATE `dict_utf8_update` a SET `DCXE`=5 WHERE `DTXT`="每"; 
UPDATE `dict_utf8_update` a SET `DCXE`=12 WHERE `DTXT`="完"; 
UPDATE `dict_utf8_update` a SET `DCXE`=10 WHERE `DTXT`="需"; 
UPDATE `dict_utf8_update` a SET `DCXE`=3 WHERE `DTXT`="用"; 
UPDATE `dict_utf8_update` a SET `DCXE`=16 WHERE `DTXT`="来"; 
UPDATE `dict_utf8_update` a SET `DCXE`=3 WHERE `DTXT`="刷"; 
UPDATE `dict_utf8_update` a SET `DCXE`=4 WHERE `DTXT`="长"; 
UPDATE `dict_utf8_update` a SET `DCXE`=4 WHERE `DTXT`="宽"; 

#  多义词
# 范围:160000+1600+16
UPDATE `dict_utf8_update` a SET `DCXE`=14 WHERE `DTXT`="箱"; 
UPDATE `dict_utf8_update` a SET `DCXE`=6 WHERE `DTXT`="箱"; 
UPDATE `dict_utf8_update` a SET `DCXE`=614 WHERE `DTXT`="箱";
UPDATE `dict_utf8_update` a SET `DCXE`=14 WHERE `DTXT`="一箱"; 


#4.更新 DCXM---暂时用不上;
#  ----更复杂的词性
#UPDATE `dict_utf8_update` a SET `DCXM`=`DCXE`; 
#
#UPDATE `dict_utf8_update` a SET `DCXM`=14 WHERE `DTXT`="种"; 




#5.更新 DW
#  ----不可拆分
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="分钟"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="食堂"; 


replace into `dict_utf8_update` values("每分",0, 14, 14, 14, 14, 2);
DELETE FROM dict_utf8_update WHERE `DTXT`="每分"; 

replace into `dict_utf8_update` values("1",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("2",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("3",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("4",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("5",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("6",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("7",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("8",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("9",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values("0",0, 5, 5, 5, 5, 1);
replace into `dict_utf8_update` values(".",0, 5, 5, 5, 5, 1);


UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="药液"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="容积"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="如果"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="多少"; 
UPDATE `dict_utf8_update` a SET `DW`=1 WHERE `DTXT`="多少"; 

replace into `dict_utf8_update` values("L",0, 14, 14, 14, 14, 0);















