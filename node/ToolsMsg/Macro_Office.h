

//Ŀ¼[Num][Ca]:
//  1.  Office����
Save:node\ToolsMsg\Macro_Office.h  \[1.1\] copy
Save:node\ToolsMsg\Macro_Office.h  \[1.2\] ren
Save:node\ToolsMsg\Macro_Office.h  \[1.3\] apk ��Դ���
Save:node\ToolsMsg\Macro_Office.h  \[1.4\] ����
Save:node\ToolsMsg\Macro_Office.h  \[1.5\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.6\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.7\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.8\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.9\] 
Save:node\ToolsMsg\Macro_Office.h  \[1.10\] 
//  2.  excel
Save:node\ToolsMsg\Macro_Office.h  \[2.1\] excel  ����
Save:node\ToolsMsg\Macro_Office.h  \[2.2\] �����
Save:node\ToolsMsg\Macro_Office.h  \[2.3\] ͳ��
Save:node\ToolsMsg\Macro_Office.h  \[2.4\] ʱ��
Save:node\ToolsMsg\Macro_Office.h  \[2.5\] ����
Save:node\ToolsMsg\Macro_Office.h  \[2.6\] ���1---------
Save:node\ToolsMsg\Macro_Office.h  \[2.7\] ���2---------
Save:node\ToolsMsg\Macro_Office.h  \[2.8\] ���3---------
Save:node\ToolsMsg\Macro_Office.h  \[2.9\] ���4---------
Save:node\ToolsMsg\Macro_Office.h  \[2.10\] ���5---------��ֵ�ж�-�Զ�if




[1.1] ����
//  ����
//  ="copy  \\192.168.2.74\work-xj\alps\out\target\common\obj\JAVA_LIBRARIES\"&A1&"\javalib.jar"  &  "  E:\����\test\"  &  B1&  ".jar"
//  ="copy  \\192.168.2.74\work-xj\alps\out\target\common\obj\JAVA_LIBRARIES\"&A1&"_intermediates\classes.jar"  &  "  E:\����\test\"  &  A1&  ".jar"+"


[1.2] ������
//  ������
//  ="ren  """&A1  &  ".png""  type_"  &  B1&  ".png  "


[1.3] apk ��Դ���
### ��Դ���
//	��ĿĿ¼��ִ�� java -jar AndroidUnusedResources1.6.2.jar
//	���ļ� "@echo off  
//	for /f ""delims="" %%i in (del.txt) do move ""%%i"" d:\unuse\  "
//	������Դ�� =IF(ISNUMBER(FIND("name=",B1)),MID(B1,FIND("name=",B1)+6,FIND("""",B1,FIND("name=",B1)+6)-FIND("name=",B1)-6),"")
//	��Դ���� =IF(ISNA(MATCH(C1,A$1:A$69,)),"",MATCH(C1,A$1:A$69,))
//	ƴ��: =IF(LEN(D1)>0,"",B1&"")
//	ƴ��: =IF(ISNUMBER(FIND("<string>",A1)),MID(A1,FIND("<string>",A1)+8,FIND("</string>",A1)-FIND("<string>",A1)-8),IF(ISNUMBER(FIND("<item>",A1)),MID(A1,FIND("<item>",A1)+6,FIND("</item>",A1)-FIND("<item>",A1)-6),""))
//	ƴ��:��ԭ���� =IF(ISNUMBER(FIND("{N}",I1)),REPLACE(I1, FIND("{N}",I1),LEN("{N}"),C1),I1)
//	ƴ��:ͷ+��+β =IF(I1="",A1,IF(OR(ISNUMBER(--K1),LEFT(K1,2)="0x"),E1&K1&F1,E1&""""&K1&""""&F1))
//	��Դ�ظ� =IF(LEN(D1)>0,ISNUMBER(MATCH(D1,A$1:A$196,0)),E2)
//	
//	
//	
### ����<string>
//	���ң�  \<string name="[!>]{1,}\> �滻��	<string>
//	ȥ�� ���ң�  \<xliff:g id="LABEL"\>%[0-9]$s\</xliff:g\> �滻��	{N}
//	ȥ�ո� ���ң�  ^13[�� ^13^t]{1,} �滻��  ^p
//	ȡ�� ���ң�  (\<string name="[!>]{1,}\>)[!^13]{1,} �滻��  \1
//	ȡres�� ���ң�  \<string name="([!>]{1,})\> �滻��	\1
//	ȡres�� ���ң�  ["/]{1,}^13 �滻��	^p
//	ȡβ(��ȥ������<u>) ���ң�  \<[^47u]{1,}\> �滻��	��
//	���ң�  (\<string name="[!>]{1,}\>)[!\<]{1,} �滻��  ��
//	���ң�  (\<item\>)[!\<]{1,} �滻��  ��
//	ȡ�� ���ң�  (\<xliff:g id="LABEL"\>%[0-9]$s\</xliff:g\>) �滻��  ��\1��
//	���ң�  ^13[!��^13]{1,}^13 �滻��  ^p^p
//	���ң�  ^13[!��^13]{1,}�� �滻��  ^p��
//	���ң�  ��[!��^13]{1,}^13 �滻��  ��^p
### ����<color>
//	ȡ�� ���ң�  (\<color name="[!>]{1,}\>)[!^13]{1,} �滻��  \1
//	ȡres�� ���ң�  \<color name="([!>]{1,})\> �滻��  \1
//	ȡres�� ���ң�  ["/]{1,}^13 �滻��	^p
### ����<dimen>
//	ȡ�� ���ң�  (\<dimen name="[!>]{1,}\>)[!^13]{1,} �滻��  \1
//	ȡres�� ���ң�  \<dimen name="([!>]{1,})\> �滻��  \1
//	ȡres�� ���ң�  ["/]{1,}^13 �滻��	^p
//	��ע��
### �ĵ�����
//	�����־ ���ң�	^#^#-^#^# ^#^#:^#^#:^#^#.^#^#^#: �滻��	08-12 09:41:27.509: 
//	�����־ ���ң�	D/path(^#^#^#^#^#): �滻��  D/path(14571): 
### ����<logcat>
//	ȥ���� ���ң�  centername="([!"]{1,})" fontColor="([!"]{1,})" �滻��  
//	ȥ���� ���ң�  state1="([!"]{1,})" state2="([!"]{1,})" stateDetailed="([!"]{1,})" tem1="([!"]{1,})" tem2="([!"]{1,})" temNow="([!"]{1,})" �滻��  
//	ȥ���� ���ң�  windState="([!"]{1,})" windDir="([!"]{1,})" windPower="([!"]{1,})" humidity="([!"]{1,})" time="([!"]{1,})" �滻��  
### ����<JSON>
//	��ʡͷ ���ң�  \<([a-z]{1,}) dn="day"\> �滻��  {"sheng":"\1","data":[
//	��ʡβ ���ң�  \</([a-z]{1,})\> �滻��  ]},
//	������ͷβ ���ң�  \<city([!/]{1,})/\> �滻��  {\1}
//	������ͷ ���ң�	([a-zA-Z]{1,})= �滻��  "\1":
//	����� ���ң�  " " �滻��	","
//	����� ���ң�  }^p{ �滻��  },^p{


[1.4] ����
//
https://jingyan.baidu.com/article/154b463199ef6868cb8f416f.html


[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 




[2.1] excel  ����
//excel  ���ã�
//  1  ��ע��,�����ĵ��Ĳ������ݿ��ܰ������ĵ�������޷�ɾ���ĸ�����Ϣ
//  Office��ť�����ļ��˵�����Excelѡ���ѡ�����������  �����������������á���ť��ѡ�񡰸�����Ϣѡ���
//    �ڡ��ĵ��ض����á���ȡ��ѡ�񡰱���ʱ���ļ�������ɾ��������Ϣ����ȷ������ѡ����Ե�ǰ��������Ч��

//  1  ��ע�������ĵ��������ݿ��ܰ���
//  �ļ�-  ѡ��  -  ��������  -  ������������  -  ��������ѡ��  -  ����ʱ��...


[2.2] �����
//  �����
//  =MAX(LEN(A2:A3276))
//
//  =IF(MOD(ROW(),2)=0,REPT("}",LOG(GCD(ROW()/2,16),2)+1),"")


//  �������
//  =INT(RAND()*4)+1.
//
//  �����Ψһ�ո�
//  =IF(RAND()>1/(11-COLUMN()),"","  ")
//  =IF(ISERROR(MATCH("  ",A1:$A1,0)),IF(RAND()>1/(11-COLUMN()),"","  "),"")
//  =IF(ISERROR(MATCH("  ",$A1:B1,0)),IF(RAND()>1/(11-COLUMN()),"","  "),"")
//
//
//  ����֣�
//  =MID("������һ",FIXED(0.5+RAND()*4,0),1)
//  =MID("�͸�����",FIND(B8,"������һ"),1)
//  =MID("��˭��ʺ",FIND(B8,"������һ"),1)



[2.3] ͳ��
//  ͳ�ƣ�
//  =TEXT(SUM(B3:F6),"��=G/ͨ�ø�ʽ")                  ��=47
//  ="��ֵ="&TEXT(FIXED(AVERAGE(B3:F6),1),"G/ͨ�ø�ʽ")            ��ֵ=2.4
//  ="��0��ֵ="&TEXT(FIXED(AVERAGE(IF(B3:F6<>0,B3:F6,"")),1),"G/ͨ�ø�ʽ")      ��0��ֵ=2.4
//  ="3~7����="&TEXT(COUNTIF(B3:F6,"<8")-COUNTIF(B3:F6,"<=3"),"G/ͨ�ø�ʽ")    3~7����=1
//  ="��"&TEXT(COUNTIF(B8:D8,"?"),"G/ͨ�ø�ʽ")&"����"                ��3����

//��λС������������
//	=ROUND(A1,2)


[2.4] ʱ��
//  ʱ�䣺
//  =DATE(1,1,1)                                                        1901/1/1
//  ="NOW:"&TEXT(NOW(),"dd��h:mm:ss")                        NOW:27��14:20:02
//  =TEXT(TODAY(),"������:yyyy-mm-dd")                        ������:2017-03-27
//  ="������:"&TEXT(TODAY(),"yyyy-mm")                        ������:2017-03


[2.5] ����
//  ����:
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
//  =FIND("2","���2")
//
//  =EVEN(10.2)
//  =ABS(-2)
//  =FLOOR(10.2,4)    ����ȡ��(����)
//  =CEILING(10.2,4)  ����ȡ��(����)
//  =CONCATENATE(B3,B5,"a","b")
//  =COUNTIF(B3:F6,MODE(B3:F6))
//          I18=abc~1234#2345~bcd~12345#23456~1~0~1
//  =MID(I18,SMALL(IF(MID(I18,ROW(INDIRECT("a1:a"&LEN(I18))),1)'="~",ROW(INDIRECT("a1:a"&LEN(I18))),""),2)+1,SMALL(IF(MID(I18,ROW(INDIRECT("a1:a"&LEN(I18))),1)'="~",ROW(INDIRECT("a1:a"&LEN(I18))),""),3)-SMALL(IF(MID(I18,ROW(INDIRECT("a1:a"&LEN(I18))),1)'="~",ROW(INDIRECT("a1:a"&LEN(I18))),""),2)-1)
//
//  =NUMBERSTRING(B3,3)
//  =OFFSET(A1,2,0)
//  =SIGN(-1)
//  =sumproduct()


[2.6] ���1
//  ���1:
//  ����        C/C#
//  ����          90
//  ���          75
//  ����          85
//  Ǯ��          67
//  �ű���          61
//  ���          80
//  ������          55
//  ������          71
        
//    Ҫ����Ľ��       �ֶη�Χ         ����1
//    85~100����       100         1
//    75~84����         85         2
//    60~74����         75         4
//    0~59            60         1

//    �ֶη�Χ         ����2
//    60         1
//    75         4
//    85         2
//    100         1

//  ����1
//  =FREQUENCY(B21:B28,D21:D24)
//  =FREQUENCY(B21:B28,D21:D24)
//  =FREQUENCY(B21:B28,D21:D24)
//  =FREQUENCY(B21:B28,D21:D24)
  
//  ����2
//  =FREQUENCY(B21:B28,F21:F24)
//  =FREQUENCY(B21:B28,F21:F24)
//  =FREQUENCY(B21:B28,F21:F24)
//  =FREQUENCY(B21:B28,F21:F24)


[2.7] ���2
// ���2
//    ����      ����      ����
//    С��      С��      2
//    С��      С��      3
//    С��      С��      1
//    С��      С��      1
//    С��      С��      1
//    С�� 
//    С�� 
//    С�� 

//����
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))
//	=INDEX($A$31:$A$38,SMALL(IF(ROW($A$31:$A$38)-30'=MATCH($A$31:$A$38,$A$31:$A$38,0),ROW($A$31:$A$38)-30,""),ROW()-30))

=+INDEX($B$2:$B$33,SMALL(IF(ROW($B$2:$B$33)-1=MATCH($B$2:$B$33,$B$2:$B$33,0),ROW($B$2:$B$33)-1,""),ROW()-1))

//����
//	=COUNTIF($A$31:$A$38,B31)
//	=COUNTIF($A$31:$A$38,B32)
//	=COUNTIF($A$31:$A$38,B33)
//	=COUNTIF($A$31:$A$38,B34)
//	=COUNTIF($A$31:$A$38,B35)


[2.8] ���3
//	 A��        B��        C��      ����
//	С��        С��        С��        С��
//	С��        С��        С��        
//	                        
//	С��        С��        С��        
//	                        
//	С��        С��        С��        
    
//    ����
//	=INDEX(E31:E34,SMALL(IF(ISERROR(MATCH(E31:E34,F31:F34,0)),"",IF(ISERROR(MATCH(E31:E34,G31:G34,0)),"",ROW(E31:E34)-30)),ROW()-30))
    


[2.9] ���4
//     A��      B��       ƥ��/��һ
//     123      4561     TRUE
//     234      1335     TRUE
//     123      456      FALSE
//     124      367      FALSE
//     128      34562    TRUE
    
// ƥ��/��һ
//	=OR(ISNUMBER(FIND(MID(K31,ROW(INDIRECT("a1:a"&LEN(K31))),1),J31)))
//	=OR(ISNUMBER(FIND(MID(K32,ROW(INDIRECT("a1:a"&LEN(K32))),1),J32)))
//	=OR(ISNUMBER(FIND(MID(K33,ROW(INDIRECT("a1:a"&LEN(K33))),1),J33)))
//	=OR(ISNUMBER(FIND(MID(K34,ROW(INDIRECT("a1:a"&LEN(K34))),1),J34)))
//	=OR(ISNUMBER(FIND(MID(K35,ROW(INDIRECT("a1:a"&LEN(K35))),1),J35)))
    

[2.10] ���5---------��ֵ�ж�-�Զ�if
//	�ж�1~6
//	=IF(MOD(ROW(),2^(6+4-COLUMN()))=1,IF(MOD(ROW(),2^(6+5-COLUMN()))=1,"if(value<="&INDIRECT("c"&(2^(6+4-COLUMN())+ROW()-1))&"){","}else{"),"")
//	
//	�ж�7
//	=IF(MOD(ROW(),2)=1,"if(value=="&C1&"){","}else{")&""
//	
//	�ж�8
//	="tmp="""&B1&""""
//	
//	�ж�9
//	=IF(MOD(ROW(),2)=0,REPT("}",LOG(GCD(ROW()/2,16),2)+1),"")
//	=IF(MOD(ROW(),2)=0,REPT("}",LOG(GCD(ROW()/2,128),2)+1),"")
	
	
//	���裺
//	1. ���ɲ��ظ��������ֵ
//		=w1*w3+(len-2)*w2*17
//	2~6. �����ж�
//	7.ɾ�� if(value<=){ �����6-N����
//	8.eclipse�����Ŷ���.
	
	
//	��λ��
//	2λ4����8�Σ�ƽ��2��
//	2λ8����8*2+8=24�Σ�ƽ��3��
//	2λ16����24*2+24=72�Σ�ƽ��4.5��
//	
//	3λ6����10�Σ�ƽ��1.6��
//	3λ9����1*5��2*5��2*5=25�Σ�ƽ��2.7��
//	3λ18����1*25��2*25=75�Σ�ƽ��4.16��
//	
//	4λ8����1*10��2*10=20�Σ�ƽ��2.5��
//	4λ16����1*10��2*10��3*10��4*10=100�Σ�ƽ��6.25��













