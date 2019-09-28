

// 手动更新词性
//       update_cx


# tens1
([.。!！?？；;，,\s+])

# 更新1, 标点, 暂时也可以不用改
replace into `dict_utf8_update` values("，",0, 0, 0, 0);
replace into `dict_utf8_update` values("。",0, 0, 0, 0);
replace into `dict_utf8_update` values("？",0, 0, 0, 0);
replace into `dict_utf8_update` values(".",0, 0, 0, 0);


# tens2
select * from  `dict_utf8_update` where `DTXT`="喷完";
select * from  `dict_utf8_update` where `DTXT`="14L";
select * from  `dict_utf8_update` where `DTXT`="700ml";

# tens2--更新2
replace into `dict_utf8_update` values("喷完",0, 0, 0, 3);
replace into `dict_utf8_update` values("14L",0, 0, 0, 14);
replace into `dict_utf8_update` values("700ml",0, 0, 0, 14);
replace into `dict_utf8_update` values("每分钟",0, 0, 0, 14);


# tens3
select * from  `dict_utf8_update` where `DTXT`="把";
select * from  `dict_utf8_update` where `DCXO`="p";

# tens3--更新2
replace into `dict_utf8_update` values("把",0, 0, 0, 9);
replace into `dict_utf8_update` values("1m",0, 0, 0, 14);
replace into `dict_utf8_update` values("截成",0, 0, 0, 3);
replace into `dict_utf8_update` values("3",0, 0, 0, 5);
replace into `dict_utf8_update` values("段",0, 0, 0, 14);
replace into `dict_utf8_update` values("20cm2",0, 0, 0, 14);
replace into `dict_utf8_update` values("cm3",0, 0, 0, 14);



# tens4
select * from  `dict_utf8_update` where `DTXT`="后";
# tens4--更新2
replace into `dict_utf8_update` values("、",0, 0, 0, 9);
replace into `dict_utf8_update` values("2dm",0, 0, 0, 14);
replace into `dict_utf8_update` values("5",0, 0, 0, 5);
replace into `dict_utf8_update` values(".",0, 0, 0, 5);
replace into `dict_utf8_update` values("9L",0, 0, 0, 14);
replace into `dict_utf8_update` values("水后",0, 0, 0, 16);
replace into `dict_utf8_update` values("西红",0, 0, 0, 6);
replace into `dict_utf8_update` values("杮",0, 0, 0, 6);
replace into `dict_utf8_update` values("16cm",0, 0, 0, 14);


# tens5
select * from  `dict_utf8_update` where `DTXT`="后";
# tens5--更新2
replace into `dict_utf8_update` values("40",0, 0, 0, 5);
replace into `dict_utf8_update` values("6",0, 0, 0, 5);
replace into `dict_utf8_update` values("7",0, 0, 0, 5);


# tens6
select * from  `dict_utf8_update` where `DTXT`="食堂";
select * from  `dict_utf8_update` where `DTXT`="每天";



# tens6--更新2
UPDATE `dict_utf8_update` a SET `DCXE`=8 WHERE `DTXT`="食堂"; 
UPDATE `dict_utf8_update` a SET `DCXE`=14 WHERE `DTXT`="每天"; 
replace into `dict_utf8_update` values("8",0, 0, 0, 5);
replace into `dict_utf8_update` values("27",0, 0, 0, 5);
replace into `dict_utf8_update` values("0",0, 0, 0, 5);
replace into `dict_utf8_update` values("3",0, 0, 0, 5);





que   : 一种药液箱的容积14L，如果每分钟喷出药液700ml，喷完一箱药液需用多少分钟？
item0:L1 ['一种', '药液', '箱']                                        [14, 6, '14']             *7*权责*
item1:L1 ['的', '容积']                                                  [11, '6']             *4*选弃*
item2:L1 ['14L']                                                           [14]             *7*权责*
item3:L1 ['，']                                                            ['0']                       ,
item4:L1 ['如果', '每分钟', '喷出', '药液', '700ml']          [13, '14', '3', '6', '14']             *7*权责*
item5:L1 ['，']                                                            ['0']                       ,
item6:L1 ['喷完', '一箱', '药液', '需用', '多少', '分钟']           [3, 14, 6, 3, 14, '14']             *7*权责*
item7:L1 ['？']                                                            ['0']                       ,

L0 ['一'
L1 ['一种'
L2 ['一种', '药液' ----------相连
L3 ['一种', '药液', '箱'] ---视像
L2 ['的'
L2 ['容积'
L2 ['14L'] ----------相连

L1 ['如果'
L3 ['如果', '每分钟'
L3 ['如果', '每分钟', '喷出', '药液', '700ml' ---视像
L1 ['喷完'
L3 ['喷完', '一箱', '药液', '需用', '多少', '分钟' ---视像










