
//分析词层
//  sentence_path_num
#  6_16_3_11_16_5_6
set @str="屏幕_上_显示_的_最后_一个_场景";
set @vl1=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",6,"_",16,"_",3));
set @vl2=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",16,"_",3,"_",11));
set @vl3=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",3,"_",11,"_",16));
set @vl4=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",11,"_",16,"_",5));
set @vl5=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("L",16,"_",5,"_",6));

set @vm2=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",6,"_",16,"_",3));
set @vm3=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",16,"_",3,"_",11));
set @vm4=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",3,"_",11,"_",16));
set @vm5=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",11,"_",16,"_",5));
set @vm6=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT("M",16,"_",5,"_",6));

set @vr2=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT(6,"_",16,"_",3,"R"));
set @vr3=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT(16,"_",3,"_",11,"R"));
set @vr4=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT(3,"_",11,"_",16,"R"));
set @vr5=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT(11,"_",16,"_",5,"R"));
set @vr6=(SELECT nval FROM sentence_path_num WHERE nid=CONCAT(16,"_",5,"_",6,"R"));

select @str,CONCAT( @vl1 , "_", @vl2, "_", @vl3, "_", @vl4, "_", @vl5) vleft;
select @str,CONCAT( @vm2 , "_", @vm3, "_", @vm4, "_", @vm5, "_", @vm6) vmid;
select @str,CONCAT( @vr2 , "_", @vr3, "_", @vr4, "_", @vr5, "_", @vr6) vright;

select @str,CONCAT( ROUND((@vr2 + @vr2 + @vr2)/3), "_", 
					ROUND((@vm2 + @vm2 + @vr3)/3), "_", 
					ROUND((@vl1 + @vm3 + @vr4)/3), "_", 
					ROUND((@vl2 + @vm4 + @vr5)/3), "_", 
					ROUND((@vl3 + @vm5 + @vr6)/3), "_", 
					ROUND((@vl4 + @vm6 + @vm6)/3), "_",
					ROUND((@vl5 + @vl5 + @vl5)/3)) sum;
select @str,CONCAT( @vl1 + @vl1, "_", 
					@vl2 + @vr2, "_", 
					@vl3 + @vr3, "_", 
					@vl4 + @vr4, "_", 
					@vl5 + @vr5, "_", 
					@vr6 + @vr6) sum;
//不理想，下次修改类型.




//验证 INSERT
//	sentence_path_test_w
INSERT INTO sentence_path_test_w VALUES(100,'好看',3,4,5,0,
	(SELECT nval FROM sentence_path_num WHERE nid="11_11_11R"),
	(SELECT nval FROM sentence_path_num WHERE nid="L7_3_1"),
	(SELECT nval FROM sentence_path_num WHERE nid="L7_3_1"),
	0,
	'好1','好1','好1','好2','好3',4,4,4,4,5);


INSERT INTO sentence_path_test_w VALUES(1824,'全家',6,10,0,0,
	(SELECT nval FROM sentence_path_num WHERE nid='L3_11_6')+
	(SELECT nval FROM sentence_path_num WHERE nid='M11_6_10')+
	(SELECT nval FROM sentence_path_num WHERE nid='6_10_6R'),
	(SELECT nval FROM sentence_path_num WHERE nid='L3_11_0')+
	(SELECT nval FROM sentence_path_num WHERE nid='M11_0_10')+
	(SELECT nval FROM sentence_path_num WHERE nid='0_10_6R'),
	0,
	0,
	'说','着','全家','要','移民',3,11,6,10,6,4,4,4,4,5);


INSERT INTO sentence_path_test_w VALUES(1824,'全家',6,
                    4,8,2,
                    (SELECT nval FROM sentence_path_num WHERE nid='L3_11_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_11_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='3_11_6R'),
                    (SELECT nval FROM sentence_path_num WHERE nid='L3_4_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_4_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='3_4_6R'),
                    (SELECT nval FROM sentence_path_num WHERE nid='L3_8_6')+
                    (SELECT nval FROM sentence_path_num WHERE nid='M3_8_6')+
                     (SELECT nval FROM sentence_path_num WHERE nid='3_8_6R'),
                     (SELECT nval FROM sentence_path_num WHERE nid='L3_2_6')+
                     (SELECT nval FROM sentence_path_num WHERE nid='M3_2_6')+
                     (SELECT nval FROM sentence_path_num WHERE nid='3_2_6R'),
                        '说','着','全家','要','移民',3,11,6,10,6);






	
