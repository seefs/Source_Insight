

//目录[Num][Ca]:
//  1.  Office常用
Save:node\ToolsMsg\Macro_Office.h  \[1.1\] copy
Save:node\ToolsMsg\Macro_Office.h  \[1.2\] ren
Save:node\ToolsMsg\Macro_Office.h  \[1.3\] apk 资源检查
Save:node\ToolsMsg\Macro_Office.h  \[1.4\] 激活
Save:node\ToolsMsg\Macro_Office.h  \[1.5\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.6\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.7\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.8\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.9\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.10\] 
//  2.  excel
Save:node\ToolsMsg\Macro_Office.h  \[2.1\] excel  设置
Save:node\ToolsMsg\Macro_Office.h  \[2.2\] 随机数
Save:node\ToolsMsg\Macro_Office.h  \[2.3\] 统计
Save:node\ToolsMsg\Macro_Office.h  \[2.4\] 时间
Save:node\ToolsMsg\Macro_Office.h  \[2.5\] 常用
Save:node\ToolsMsg\Macro_Office.h  \[2.6\] 表格1---------
Save:node\ToolsMsg\Macro_Office.h  \[2.7\] 表格2---------
Save:node\ToolsMsg\Macro_Office.h  \[2.8\] 表格3---------
Save:node\ToolsMsg\Macro_Office.h  \[2.9\] 表格4---------
Save:node\ToolsMsg\Macro_Office.h  \[2.10\] 表格5---------中值判断-自动if




[1.1] 复制
//  复制
//  ="copy  \\192.168.2.74\work-xj\alps\out\target\common\obj\JAVA_LIBRARIES\"&A1&"\javalib.jar"  &  "  E:\桌面\test\"  &  B1&  ".jar"
//  ="copy  \\192.168.2.74\work-xj\alps\out\target\common\obj\JAVA_LIBRARIES\"&A1&"_intermediates\classes.jar"  &  "  E:\桌面\test\"  &  A1&  ".jar"+"


[1.2] 重命名
//  重命名
//  ="ren  """&A1  &  ".png""  type_"  &  B1&  ".png  "


[1.3] apk 资源检查
### 资源检查
//	项目目录下执行 java -jar AndroidUnusedResources1.6.2.jar
//	批文件 "@echo off  
//	for /f ""delims="" %%i in (del.txt) do move ""%%i"" d:\unuse\  "
//	查找资源名 =IF(ISNUMBER(FIND("name=",B1)),MID(B1,FIND("name=",B1)+6,FIND("""",B1,FIND("name=",B1)+6)-FIND("name=",B1)-6),"")
//	资源多余 =IF(ISNA(MATCH(C1,A$1:A$69,)),"",MATCH(C1,A$1:A$69,))
//	拼接: =IF(LEN(D1)>0,"",B1&"")
//	拼接: =IF(ISNUMBER(FIND("<string>",A1)),MID(A1,FIND("<string>",A1)+8,FIND("</string>",A1)-FIND("<string>",A1)-8),IF(ISNUMBER(FIND("<item>",A1)),MID(A1,FIND("<item>",A1)+6,FIND("</item>",A1)-FIND("<item>",A1)-6),""))
//	拼接:还原参数 =IF(ISNUMBER(FIND("{N}",I1)),REPLACE(I1, FIND("{N}",I1),LEN("{N}"),C1),I1)
//	拼接:头+中+尾 =IF(I1="",A1,IF(OR(ISNUMBER(--K1),LEFT(K1,2)="0x"),E1&K1&F1,E1&""""&K1&""""&F1))
//	资源重复 =IF(LEN(D1)>0,ISNUMBER(MATCH(D1,A$1:A$196,0)),E2)
//	
//	
//	
### 清理<string>
//	查找：  \<string name="[!>]{1,}\> 替换：	<string>
//	去参 查找：  \<xliff:g id="LABEL"\>%[0-9]$s\</xliff:g\> 替换：	{N}
//	去空格 查找：  ^13[　 ^13^t]{1,} 替换：  ^p
//	取首 查找：  (\<string name="[!>]{1,}\>)[!^13]{1,} 替换：  \1
//	取res名 查找：  \<string name="([!>]{1,})\> 替换：	\1
//	取res名 查找：  ["/]{1,}^13 替换：	^p
//	取尾(先去参数、<u>) 查找：  \<[^47u]{1,}\> 替换：	空
//	查找：  (\<string name="[!>]{1,}\>)[!\<]{1,} 替换：  空
//	查找：  (\<item\>)[!\<]{1,} 替换：  空
//	取参 查找：  (\<xliff:g id="LABEL"\>%[0-9]$s\</xliff:g\>) 替换：  ※\1※
//	查找：  ^13[!※^13]{1,}^13 替换：  ^p^p
//	查找：  ^13[!※^13]{1,}※ 替换：  ^p※
//	查找：  ※[!※^13]{1,}^13 替换：  ※^p
### 清理<color>
//	取首 查找：  (\<color name="[!>]{1,}\>)[!^13]{1,} 替换：  \1
//	取res名 查找：  \<color name="([!>]{1,})\> 替换：  \1
//	取res名 查找：  ["/]{1,}^13 替换：	^p
### 清理<dimen>
//	取首 查找：  (\<dimen name="[!>]{1,}\>)[!^13]{1,} 替换：  \1
//	取res名 查找：  \<dimen name="([!>]{1,})\> 替换：  \1
//	取res名 查找：  ["/]{1,}^13 替换：	^p
//	清注释
### 文档整理
//	清除日志 查找：	^#^#-^#^# ^#^#:^#^#:^#^#.^#^#^#: 替换：	08-12 09:41:27.509: 
//	清除日志 查找：	D/path(^#^#^#^#^#): 替换：  D/path(14571): 
### 清理<logcat>
//	去杂项 查找：  centername="([!"]{1,})" fontColor="([!"]{1,})" 替换：  
//	去杂项 查找：  state1="([!"]{1,})" state2="([!"]{1,})" stateDetailed="([!"]{1,})" tem1="([!"]{1,})" tem2="([!"]{1,})" temNow="([!"]{1,})" 替换：  
//	去杂项 查找：  windState="([!"]{1,})" windDir="([!"]{1,})" windPower="([!"]{1,})" humidity="([!"]{1,})" time="([!"]{1,})" 替换：  
### 清理<JSON>
//	换省头 查找：  \<([a-z]{1,}) dn="day"\> 替换：  {"sheng":"\1","data":[
//	换省尾 查找：  \</([a-z]{1,})\> 替换：  ]},
//	换城市头尾 查找：  \<city([!/]{1,})/\> 替换：  {\1}
//	换参数头 查找：	([a-zA-Z]{1,})= 替换：  "\1":
//	换间隔 查找：  " " 替换：	","
//	换间隔 查找：  }^p{ 替换：  },^p{


[1.4] 激活
//
https://jingyan.baidu.com/article/154b463199ef6868cb8f416f.html


[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 




[2.1] excel  设置
//excel  设置：
//  1  请注意,您的文档的部分内容可能包含了文档检查器无法删除的个人信息
//  Office按钮（或文件菜单）→Excel选项（或选项）→信任中心  单击“信任中心设置”按钮，选择“个人信息选项”，
//    在“文档特定设置”下取消选择“保存时从文件属性中删除个人信息”后确定。该选项仅对当前工作簿有效。

//  1  请注意您的文档部分内容可能包含
//  文件-  选项  -  信任中心  -  信任中心设置  -  个人信用选项  -  保存时从...


[2.2] 随机数
//  随机数
//  =MAX(LEN(A2:A3276))
//
//  =IF(MOD(ROW(),2)=0,REPT("}",LOG(GCD(ROW()/2,16),2)+1),"")


//  随机数：
//  =INT(RAND()*4)+1.
//
//  随机，唯一空格：
//  =IF(RAND()>1/(11-COLUMN()),"","  ")
//  =IF(ISERROR(MATCH("  ",A1:$A1,0)),IF(RAND()>1/(11-COLUMN()),"","  "),"")
//  =IF(ISERROR(MATCH("  ",$A1:B1,0)),IF(RAND()>1/(11-COLUMN()),"","  "),"")
//
//
//  随机字：
//  =MID("你那王一",FIXED(0.5+RAND()*4,0),1)
//  =MID("就个八坨",FIND(B8,"你那王一"),1)
//  =MID("是谁蛋屎",FIND(B8,"你那王一"),1)



[2.3] 统计
//  统计：
//  =TEXT(SUM(B3:F6),"和=G/通用格式")                  和=47
//  ="均值="&TEXT(FIXED(AVERAGE(B3:F6),1),"G/通用格式")            均值=2.4
//  ="非0均值="&TEXT(FIXED(AVERAGE(IF(B3:F6<>0,B3:F6,"")),1),"G/通用格式")      非0均值=2.4
//  ="3~7个数="&TEXT(COUNTIF(B3:F6,"<8")-COUNTIF(B3:F6,"<=3"),"G/通用格式")    3~7个数=1
//  ="有"&TEXT(COUNTIF(B8:D8,"?"),"G/通用格式")&"个字"                有3个字

//两位小数，四舍五入
//	=ROUND(A1,2)


[2.4] 时间
//  时间：
//  =DATE(1,1,1)                                                        1901/1/1
//  ="NOW:"&TEXT(NOW(),"dd号h:mm:ss")                        NOW:27号14:20:02
//  =TEXT(TODAY(),"今天是:yyyy-mm-dd")                        今天是:2017-03-27
//  ="今天是:"&TEXT(TODAY(),"yyyy-mm")                        今天是:2017-03


[2.5] 常用
//  常用:
//  =MATCH("  ",A1:J1,0)
//  =INDEX(B3:F6,1,4)
//  =MATCH("  ",A1:J1,0)
//  =INDEX(B3:F6,1,4)
//  =LOOKUP("111",A1:J1,A2:J2)
//  =ADDRESS(2,2,3,1,"MG")
//  =EXACT("1","1")
//  =REPLACE("12345",2,3,"---")
//  =SEARCH("1?3","1234123",3)
//
//  =SMALL(B3:F6,10)
//  =ROWS(A3:D6)+COLUMNS(A3:D6)
//  =ROWS(A4:D7)+COLUMNS(A4:D7)
//  =INDIRECT(CHAR(64+2)&$C$3,TRUE)
//  =CHOOSE(1,"A",3,"C")
//  =LARGE(A2:J2,3)
//  =FIND("2","你好2")
//
//  =EVEN(10.2)
//  =ABS(-2)
//  =FLOOR(10.2,4)    向下取整(倍数)
//  =CEILING(10.2,4)  向上取整(倍数)
//  =CONCATENATE(B3,B5,"a","b")
//  =COUNTIF(B3:F6,MODE(B3:F6))
//          I18=abc~1234#2345~bcd~12345#23456~1~0~1
//  =MID(I18,SMALL(IF(MID(I18,ROW(INDIRECT("a1:a"&LEN(I18))),1)'="~",ROW(INDIRECT("a1:a"&LEN(I18))),""),2)+1,SMALL(IF(MID(I18,ROW(INDIRECT("a1:a"&LEN(I18))),1)'="~",ROW(INDIRECT("a1:a"&LEN(I18))),""),3)-SMALL(IF(MID(I18,ROW(INDIRECT("a1:a"&LEN(I18))),1)'="~",ROW(INDIRECT("a1:a"&LEN(I18))),""),2)-1)
//
//  =NUMBERSTRING(B3,3)
//  =OFFSET(A1,2,0)
//  =SIGN(-1)
//  =sumproduct()


[2.6] 表格1
//  表格1:
//  姓名        C/C#
//  赵茹          90
//  孙楠          75
//  孙涛          85
//  钱琳          67
//  张宝生          61
//  杨大海          80
//  周向阳          55
//  高艳艳          71
        
//    要计算的结果       分段范围         人数1
//    85~100人数       100         1
//    75~84人数         85         2
//    60~74人数         75         4
//    0~59            60         1

//    分段范围         人数2
//    60         1
//    75         4
//    85         2
//    100         1

//  人数1
//  =FREQUENCY(B21:B28,D21:D24)
//  =FREQUENCY(B21:B28,D21:D24)
//  =FREQUENCY(B21:B28,D21:D24)
//  =FREQUENCY(B21:B28,D21:D24)
  
//  人数2
//  =FREQUENCY(B21:B28,F21:F24)
//  =FREQUENCY(B21:B28,F21:F24)
//  =FREQUENCY(B21:B28,F21:F24)
//  =FREQUENCY(B21:B28,F21:F24)


[2.7] 表格2
// 表格2
//    姓名      姓名      人数
//    小花      小花      2
//    小明      小明      3
//    小红      小红      1
//    小黄      小黄      1
//    小花      小兰      1
//    小明 
//    小兰 
//    小明 

//姓名
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))

=+INDEX($B$2:$B$33,SMALL(IF(ROW($B$2:$B$33)-1=MATCH($B$2:$B$33,$B$2:$B$33,0),ROW($B$2:$B$33)-1,""),ROW()-1))

//人数
//	=COUNTIF($A$31:$A$38,B31)
//	=COUNTIF($A$31:$A$38,B32)
//	=COUNTIF($A$31:$A$38,B33)
//	=COUNTIF($A$31:$A$38,B34)
//	=COUNTIF($A$31:$A$38,B35)


[2.8] 表格3
//	 A轮        B轮        C轮      公共
//	小花        小金        小兰        小黄
//	小明        小陈        小黄        
//	                        
//	小红        小兰        小陈        
//	                        
//	小黄        小黄        小金        
    
//    公共
//	=INDEX(E31:E34,SMALL(IF(ISERROR(MATCH(E31:E34,F31:F34,0)),"",IF(ISERROR(MATCH(E31:E34,G31:G34,0)),"",ROW(E31:E34)-30)),ROW()-30))
    


[2.9] 表格4
//     A组      B组       匹配/任一
//     123      4561     TRUE
//     234      1335     TRUE
//     123      456      FALSE
//     124      367      FALSE
//     128      34562    TRUE
    
// 匹配/任一
//	=OR(ISNUMBER(FIND(MID(K31,ROW(INDIRECT("a1:a"&LEN(K31))),1),J31)))
//	=OR(ISNUMBER(FIND(MID(K32,ROW(INDIRECT("a1:a"&LEN(K32))),1),J32)))
//	=OR(ISNUMBER(FIND(MID(K33,ROW(INDIRECT("a1:a"&LEN(K33))),1),J33)))
//	=OR(ISNUMBER(FIND(MID(K34,ROW(INDIRECT("a1:a"&LEN(K34))),1),J34)))
//	=OR(ISNUMBER(FIND(MID(K35,ROW(INDIRECT("a1:a"&LEN(K35))),1),J35)))
    

[2.10] 表格5---------中值判断-自动if
//	判断1~6
//	=IF(MOD(ROW(),2^(6+4-COLUMN()))=1,IF(MOD(ROW(),2^(6+5-COLUMN()))=1,"if(value<="&INDIRECT("c"&(2^(6+4-COLUMN())+ROW()-1))&"){","}else{"),"")
//	
//	判断7
//	=IF(MOD(ROW(),2)=1,"if(value=="&C1&"){","}else{")&""
//	
//	判断8
//	="tmp="""&B1&""""
//	
//	判断9
//	=IF(MOD(ROW(),2)=0,REPT("}",LOG(GCD(ROW()/2,16),2)+1),"")
//	=IF(MOD(ROW(),2)=0,REPT("}",LOG(GCD(ROW()/2,128),2)+1),"")
	
	
//	步骤：
//	1. 生成不重复的最简明值
//		=w1*w3+(len-2)*w2*17
//	2~6. 如上判断
//	7.删除 if(value<=){ ，最后补6-N个｝
//	8.eclipse里括号对齐.
	
	
//	单位：
//	2位4个：8次，平均2次
//	2位8个：8*2+8=24次，平均3次
//	2位16个：24*2+24=72次，平均4.5次
//	
//	3位6个：10次，平均1.6次
//	3位9个：1*5，2*5，2*5=25次，平均2.7次
//	3位18个：1*25，2*25=75次，平均4.16次
//	
//	4位8个：1*10，2*10=20次，平均2.5次
//	4位16个：1*10，2*10，3*10，4*10=100次，平均6.25次













