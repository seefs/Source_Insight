
//log: cv=191
//   calc_log
INSERT INTO sentence_path_test_w VALUES(87,'的',11,3,7,15,
                    (SELECT nval FROM sentence_path_num WHERE nid='L11_4_11')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M4_11_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='11_6_3R'),
                    
                    (SELECTnval FROM sentence_path_num WHERE nid='L11_4_3')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M4_3_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='3_6_3R'),
                    
                    (SELECT nval FROM sentence_path_num WHERE nid='L11_4_7')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M4_7_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='7_6_3R'),
                    
                    (SELECT nval FROM sentence_path_num WHERE nid='L11_4_15')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M4_15_6')+
                     (SELECT nval FROM sentence_path_num WHERE nid='15_6_3R'),
                        '着','油绿','的','树叶','摇曳',11,4,11,6,3);


//sql tool: cv=191
//   calc_tool
select ( (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
       ) as sum0, 
       ( (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
       ) as sum1, 
       ( (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
       ) as sum2, 
       ( (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
         (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
       ) as sum3
    from  sentence_path_test_w;

    
//sql tool: cv=191
//   calc_tool
SELECT nval FROM sentence_path_num WHERE nid in('L11_4_11', 'M4_11_6', '11_6_3R');
SELECT sum(nval) FROM sentence_path_num WHERE nid in('L11_4_11', 'M4_11_6', '11_6_3R');


                    
//update: 
//   calc_update

UPDATE sentence_path_test_w SET tn3 = 7;
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );

SELECT CONCAT("L",n1,"_",n2,"_",tn3),CONCAT("M",n2,"_",tn3,"_",n4),CONCAT(tn3,"_",n4,"_",n5,"R") FROM sentence_path_test_w;



//部分数据错误：n4少一位
//log: cv=53
//   calc_log
INSERT INTO sentence_path_test_w VALUES(7,'的',11,3,7,15,
                    (SELECT nval FROM sentence_path_num WHERE nid='L16_3_11')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_11_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='11_6_5R'),
                    
                    (SELECTnval FROM sentence_path_num WHERE nid='L16_3_3')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_3_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='3_6_5R'),
                    
                    (SELECT nval FROM sentence_path_num WHERE nid='L16_3_7')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_7_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='7_6_5R'),
                    
                    (SELECT nval FROM sentence_path_num WHERE nid='L16_3_15')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_15_6')+
                     (SELECT nval FROM sentence_path_num WHERE nid='15_6_5R'),
                        '上','显示','的','最后','一个',16,3,11,16,5);
                    
//sql tool: cv=53
//   calc_tool
SELECT nval FROM sentence_path_num WHERE nid in('L16_3_7', 'M3_7_6', '7_6_5R');
SELECT sum(nval) FROM sentence_path_num WHERE nid in('L16_3_7', 'M3_7_6', '7_6_5R');


                
//update: 
//   calc_update_list

UPDATE sentence_path_test_w SET tn1 = 1,tn2 = 2,tn3 = 4,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET tn1 = 5,tn2 = 6,tn3 = 8,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET tn1 = 9,tn2 = 10,tn3 = 16,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET tn1 = 12,tn2 = 13,tn3 = 14,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET tn1 = 11,tn2 = 0,tn3 = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
SELECT * FROM `sentence_path_test_w`;

//   导入sum:

INSERT INTO sentence_path_test_right_base SELECT cn, tn1, avg(tv1) FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT cn, tn2, avg(tv2) FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT cn, tn3, avg(tv3) FROM `sentence_path_test_w`;
SELECT * FROM `sentence_path_test_right_base`;

INSERT INTO sentence_path_test_right_base SELECT cn, cn, avg(cv) FROM `sentence_path_test_w`;


//update: 
//   calc_update_next

UPDATE sentence_path_test_w SET cn = 1,tn1 = 2,tn2 = 3,tn3 = 4,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cn = 5,tn1 = 6,tn2 = 7,tn3 = 8,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cn = 9,tn1 = 10,tn2 = 11,tn3 = 12,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cn = 13,tn1 = 14,tn2 = 15,tn3 = 16,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;

UPDATE sentence_path_test_w SET cv = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
INSERT INTO sentence_path_test_right_base SELECT n3, cn, avg(cv), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn1, avg(tv1), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn2, avg(tv2), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn3, avg(tv3), cw FROM `sentence_path_test_w`;
set @cw = (SELECT cw FROM `sentence_path_test_w` LIMIT 0,1);
SELECT * FROM `sentence_path_test_right_base` where WSTR = @cw order by val desc;



//update: 
//   calc_update_next_all
# item1
UPDATE sentence_path_test_w SET cn = 1,tn1 = 2,tn2 = 3,tn3 = 4,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cv = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
INSERT INTO sentence_path_test_right_base SELECT n3, cn, avg(cv), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn1, avg(tv1), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn2, avg(tv2), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn3, avg(tv3), cw FROM `sentence_path_test_w`;
# item2
UPDATE sentence_path_test_w SET cn = 5,tn1 = 6,tn2 = 7,tn3 = 8,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cv = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
INSERT INTO sentence_path_test_right_base SELECT n3, cn, avg(cv), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn1, avg(tv1), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn2, avg(tv2), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn3, avg(tv3), cw FROM `sentence_path_test_w`;

# item3
UPDATE sentence_path_test_w SET cn = 9,tn1 = 10,tn2 = 11,tn3 = 12,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cv = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
INSERT INTO sentence_path_test_right_base SELECT n3, cn, avg(cv), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn1, avg(tv1), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn2, avg(tv2), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn3, avg(tv3), cw FROM `sentence_path_test_w`;

# item4
UPDATE sentence_path_test_w SET cn = 13,tn1 = 14,tn2 = 15,tn3 = 16,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cv = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
INSERT INTO sentence_path_test_right_base SELECT n3, cn, avg(cv), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn1, avg(tv1), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn2, avg(tv2), cw FROM `sentence_path_test_w`;
INSERT INTO sentence_path_test_right_base SELECT n3, tn3, avg(tv3), cw FROM `sentence_path_test_w`;

#显示个词权重
set @cw = (SELECT cw FROM `sentence_path_test_w` LIMIT 0,1);
SELECT * FROM `sentence_path_test_right_base` where WSTR = @cw order by val desc;



//update: 
//   calc_update_next_order

SELECT * FROM `sentence_path_test_right_base` order by wstr, val desc;

#删除多余添加
DELETE FROM sentence_path_test_right_base where wstr='一只';
SELECT * FROM `sentence_path_test_right_base`;




//update: 
//   calc_update_full_all
# full
# 指定计算
UPDATE sentence_path_test_w SET cn = 6,tn1 = 2,tn2 = 4,tn3 = 8,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cn = 3,tn1 = 10,tn2 = 7,tn3 = 15,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cn = 5,tn1 = 14,tn2 = 12,tn3 = 0,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;
UPDATE sentence_path_test_w SET cn = 15,tn1 = 8,tn2 = 10,tn3 = 12,  cv = 0,tv1 = 0,tv2 = 0,tv3 = 0;

UPDATE sentence_path_test_w SET cv = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",cn))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",cn,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(cn,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv1 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn1))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn1,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn1,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
UPDATE sentence_path_test_w SET tv3 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn3))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn3,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn3,"_",n4,"_",n5,"R"))
    );
SELECT * FROM `sentence_path_test_w`;



//update: 
//   calc_update_full_order


# 数词--都差不多, 意义不大
#5:  用复合词性比较好
#15: 时间副词, 改为8, 时间分块; 频率可以改为10，比较难区分；修饰改为12, 比较难区分
#3:  统计条数，多的改为10; 7是半个动词；15更像是2的组合词; 2的组合词先不管
#6:  名--转成8不错; 转成4一般; 4类型是有疑问的. 转成2一般; 
SELECT *, (100+cv*3-tv1-tv2-tv3) as plus FROM `sentence_path_test_w` order by plus desc;
SELECT *, (100+tv1*3-tv2-tv3-cv) as plus FROM `sentence_path_test_w` order by plus desc;
SELECT *, (100+tv2*3-tv1-tv3-cv) as plus FROM `sentence_path_test_w` order by plus desc;
SELECT *, (100+tv3*3-tv1-tv2-cv) as plus FROM `sentence_path_test_w` order by plus desc;
#bak
SELECT *, (100+cv*3-tv1-tv2-tv3) as plus FROM `sentence_path_test_w_11_bak` order by plus desc;
SELECT *, (100+tv1*3-tv2-tv3-cv) as plus FROM `sentence_path_test_w_11_bak` order by plus desc;
SELECT *, (100+tv2*3-tv1-tv3-cv) as plus FROM `sentence_path_test_w_11_bak` order by plus desc;
SELECT *, (100+tv3*3-tv1-tv2-cv) as plus FROM `sentence_path_test_w_11_bak` order by plus desc;

UPDATE sentence_path_test_w SET tv2 = (
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",n1,"_",n2,"_",tn2))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",n2,"_",tn2,"_",n4))+
    (SELECT nval FROM sentence_path_num WHERE nid=CONCAT(tn2,"_",n4,"_",n5,"R"))
    );
SELECT * FROM `sentence_path_test_w`;

#查看L10为什么没有值
SELECT CONCAT("L",n1,"_",n2,"_",tn2) FROM sentence_path_test_w;
SELECT n1,n2,tn2,nid,nval FROM sentence_path_test_w a LEFT JOIN sentence_path_num b ON CONCAT("L",n1,"_",n2,"_",tn2)=b.`nid`;

SELECT * FROM sentence_path_num WHERE nid LIKE "L3%\_6";
SELECT * FROM sentence_path_num WHERE nid LIKE "L%\_10";


//   calc_tool
#验证数据为什么没有? val为0
SELECT nval FROM sentence_path_num WHERE nid in('L16_3_7', 'M3_7_6', '7_6_5R');
SELECT sum(nval) FROM sentence_path_num WHERE nid in('L16_3_7', 'M3_7_6', '7_6_5R');

SELECT CONCAT("L",n1,"_",n2,"_",tn2) FROM sentence_path_test_w;
SELECT * FROM sentence_path_num WHERE nid LIKE "L3\_11";
SELECT * FROM sentence_path_num WHERE nid REGEXP "^[LM]?3\_11\_[0-1]?[0-9][R]?";
SELECT * FROM sentence_path_num WHERE nid REGEXP "^[LM]?[0-1]?[0-9]\_[0-1]?[0-9]\_[0-1]?[0-9][R]?";





//update: 
//   calc_update_test_result

#1.总还原
DELETE FROM sentence_path_test_result_merge;

#2.分步还原
DELETE FROM sentence_path_test_result_del;
DELETE FROM sentence_path_test_result_full;
SELECT count(*)  FROM `sentence_path_test_result_full`;

DELETE FROM sentence_path_test_w;
INSERT INTO sentence_path_test_w SELECT * FROM `sentence_path_test_w_15_bak`;
SELECT count(*)  FROM `sentence_path_test_w`;

#  分步还原--记录 (放弃11，数据有误)
INSERT INTO sentence_path_test_w SELECT * FROM `sentence_path_test_w_3_bak`;
INSERT INTO sentence_path_test_w SELECT * FROM `sentence_path_test_w_6_bak`;
INSERT INTO sentence_path_test_w SELECT * FROM `sentence_path_test_w_11_bak`;
INSERT INTO sentence_path_test_w SELECT * FROM `sentence_path_test_w_15_bak`;

#3.保存部分正常值
set @curmax0 = (SELECT max(cv*3-tv1-tv2-tv3)  FROM `sentence_path_test_w`);
INSERT INTO sentence_path_test_result_del 
    SELECT cw, cn, cn, (100-@curmax0+cv*3-tv1-tv2-tv3) AS plus FROM `sentence_path_test_w` ORDER BY plus DESC;
DELETE FROM sentence_path_test_result_del WHERE tv<20 OR tv IS NULL;
SELECT count(*)  FROM `sentence_path_test_result_del`;

#  保存部分正常值--验证
set @curmax0 = (SELECT max(cv*3-tv1-tv2-tv3)  FROM `sentence_path_test_w`);
SELECT *, (100-@curmax0+cv*3-tv1-tv2-tv3) as plus FROM `sentence_path_test_w` order by plus desc;


#4.删除部分正常值--40%以上
set @curavg = (SELECT avg(cv)  FROM `sentence_path_test_w`);
DELETE FROM sentence_path_test_w where cv>=@curavg;
SELECT count(*)  FROM `sentence_path_test_w`;


#5.合并转换最佳值
#   各导入1000条
set @curmax1 = (SELECT max(tv1*3-tv2-tv3-cv)  FROM `sentence_path_test_w`);
set @curmax2 = (SELECT max(tv2*3-tv1-tv3-cv)  FROM `sentence_path_test_w`);
set @curmax3 = (SELECT max(tv3*3-tv1-tv2-cv)  FROM `sentence_path_test_w`);

INSERT INTO sentence_path_test_result_full 
    SELECT cw, cn, tn1, (100-@curmax1+tv1*3-tv2-tv3-cv) as plus FROM `sentence_path_test_w` GROUP BY cw order by plus desc LIMIT 0,1000;
INSERT INTO sentence_path_test_result_full 
    SELECT cw, cn, tn2, (100-@curmax2+tv2*3-tv1-tv3-cv) as plus FROM `sentence_path_test_w` GROUP BY cw order by plus desc LIMIT 0,1000;
INSERT INTO sentence_path_test_result_full 
    SELECT cw, cn, tn3, (100-@curmax3+tv3*3-tv1-tv2-cv) AS plus FROM `sentence_path_test_w` GROUP BY cw ORDER BY plus DESC LIMIT 0,1000;

#  合并转换最佳值--验证
SELECT cw, cn, tn1, (100-@curmax1+tv1*3-tv2-tv3-cv) as plus FROM `sentence_path_test_w` GROUP BY cw order by plus desc LIMIT 0,1000;
SELECT cw, cn, tn2, (100-@curmax2+tv2*3-tv1-tv3-cv) as plus FROM `sentence_path_test_w` GROUP BY cw order by plus desc LIMIT 0,1000;
SELECT cw, cn, tn3, (100-@curmax3+tv3*3-tv1-tv2-cv) AS plus FROM `sentence_path_test_w` GROUP BY cw ORDER BY plus DESC LIMIT 0,1000;


#6.删除部分非最佳值
SELECT count(*)  FROM `sentence_path_test_result_full`;
DELETE FROM sentence_path_test_result_full where tv<0 or tv is null;
SELECT count(*)  FROM `sentence_path_test_result_full`;


#7.多表删除正常值
SELECT count(*) FROM `sentence_path_test_result_full`;
DELETE a FROM sentence_path_test_result_full a, sentence_path_test_result_del b where
        a.cw=b.cw and b.tv>a.tv;
SELECT count(*) FROM `sentence_path_test_result_full`;
SELECT count(*) FROM `sentence_path_test_result_merge`;

#  多表删除--验证
SELECT a.cw, a.cn, a.tn, a.tv, b.tv  FROM `sentence_path_test_result_full` a LEFT JOIN sentence_path_test_result_del b ON 
        a.cw=b.cw WHERE b.tv>a.tv;


#8.合并
#  数量 6--1631 3--162
INSERT INTO sentence_path_test_result_merge  SELECT *  FROM `sentence_path_test_result_full`;
SELECT count(*)  FROM `sentence_path_test_result_merge`;

#  合并--验证
SELECT a.cw, a.cn, a.tn, a.tv, b.tv  FROM `sentence_path_test_result_full` a LEFT JOIN sentence_path_test_result_del b ON 
        a.cw=b.cw WHERE b.tv<a.tv OR b.tv IS NULL;






//update: 
//   calc_update_test_result_te

#检查重复
SELECT *, count(*)  FROM `sentence_path_test_result_merge` group by cw;

SELECT *,MIN(tv) mtv  FROM `sentence_path_test_result_merge` GROUP BY cw HAVING  COUNT(*)>1;

#删除重复
DELETE a FROM sentence_path_test_result_merge a, 
        (SELECT *,MIN(tv) mtv  FROM `sentence_path_test_result_merge` GROUP BY cw HAVING  COUNT(*)>1) b 
        where a.cw=b.cw and a.tv=mtv;


#检查空
SELECT *  FROM `sentence_path_test_result_merge` where tv is null;
DELETE FROM sentence_path_test_result_merge where tv<0 or tv is null;


#总数 1513
SELECT count(*) FROM `sentence_path_test_result_merge`;




#手选--右词:
# 的:选11，限D区
#INSERT INTO sentence_path_test_result_full values("的", 11, 11, 100);
# 了:选3或11，限D区
#INSERT INTO sentence_path_test_result_full values("了", 11, 11, 100);
# 着:选11，限D区
#INSERT INTO sentence_path_test_result_full values("着", 11, 11, 100);
# 是:选7或9或3，--chg3.
INSERT INTO sentence_path_test_result_full values("是", 9, 15, 100);
# 在:选7或9，限TR区, 选对角比较好--7
#INSERT INTO sentence_path_test_result_full values("在", 7, 7, 100);
# 有:选7或9或3，分D区的话选3合适--chg3.
#INSERT INTO sentence_path_test_result_full values("有", 7, 3, 100);
# 被:选9，限R区
#INSERT INTO sentence_path_test_result_full values("被", 9, 9, 100);
# 就:选7或9或15，限T区, 分区的话选15合适--chg15.
#INSERT INTO sentence_path_test_result_full values("就", 9, 15, 100);
# 从:多义，选7或9，限TR区
#INSERT INTO sentence_path_test_result_full values("从", 7, 9, 100);




//update: 
//   calc_update_test_result_zu

//手记1:
//  第六局:改为组合词
//  选择:动名词. 你_永远_都_有_第二个_选择




//	 短语块
//update: 
//   calc_update_test_short










