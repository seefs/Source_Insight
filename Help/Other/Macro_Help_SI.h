
����·������:
//basePath = 


//Ŀ¼:
// 1. 
Save:Help\Other\Macro_Help_SI.h \[1.1\] marco file
Save:Help\Other\Macro_Help_SI.h \[1.2\] marco test...
Save:Help\Other\Macro_Help_SI.h \[1.3\] set save-------�޸�
Save:Help\Other\Macro_Help_SI.h \[1.4\] 
Save:Help\Other\Macro_Help_SI.h \[1.5\] other set
Save:Help\Other\Macro_Help_SI.h \[1.6\] set key--------��Ŀ·��
Save:Help\Other\Macro_Help_SI.h \[1.7\] set common-----����·��
Save:Help\Other\Macro_Help_SI.h \[1.8\] ��ע
Save:Help\Other\Macro_Help_SI.h \[1.9\] 
Save:Help\Other\Macro_Help_SI.h \[1.10\] 
Save:Help\Other\Macro_Help_SI.h \[1.11\] 
Save:Help\Other\Macro_Help_SI.h \[1.12\] 
// 2. SI4.0��װ����
Save:Help\Other\Macro_Help_SI.h \[2.1\] SI4.0��װ����
Save:Help\Other\Macro_Help_SI.h \[2.2\] ���������ļ�
Save:Help\Other\Macro_Help_SI.h \[2.3\] ����������Ҫͬ��, �����¹���Ҳ����Ҫͬ��(���򱨺����Ҳ���)
Save:Help\Other\Macro_Help_SI.h \[2.4\] ���ñ���Ŀ¼
Save:Help\Other\Macro_Help_SI.h \[2.5\] ��֤����OK
Save:Help\Other\Macro_Help_SI.h \[2.6\] 
Save:Help\Other\Macro_Help_SI.h \[2.7\] 
Save:Help\Other\Macro_Help_SI.h \[2.8\] 




[1.1] marco file
### __marco__
//1) path:
Save:Macro\
//2) f1~f12:
Save:Macro\sbd_f1.em
Save:Macro\sbd_f2.em
Save:Macro\sbd_f7.em
Save:Macro\sbd_f10.em  macro^NoteGroup
Save:Macro\sbd_f11.em  macro^NoteHander
Save:Macro\sbd_ctrl.em
//3) tool:
Save:Macro\a_String.em
//4) file style:
Save:Macro\sbd_file.em  IsTxtFile( )


[1.2] marco test...
### __test__
//
Save:Help\
// ���ܲ���
Save:Help\Macro_Note_Test.h
// ��������
Save:Macro\sbd_test.em  macro^TestMsg

// �����滻
Save:Help\Other\Macro_Help_replace.h


[1.3] set save path
### __set__
// 1) �ı�Save·��
// --�õĹ̶�·��������ģ�����������ò���:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_root_path.em  getRootPath(0)

// 2) �״ΰ�װ����:
Save:Help\Other\Macro_Help_SI.h


[1.4] 


[1.5] other set
//
// ����Ƶ���Ŀ�����ļ���
//
// show python help
//   1--on, 0--off
Save:set\Macro_Set.h 75

// show android help
//   1--on, 0--off
Save:set\Macro_Set.h 78

// show html help
//   1--on, 0--off
Save:set\Macro_Set.h 81

//
Save:Macro\sbd_f12.em  ShowLibHelp

//
Save:Help\LangInfo\
Save:Help\LangInfo\Macro_Info_Python.h
Save:Help\LangInfo\Macro_Info_Html.h



[1.6] set key
//

### __cfg__
Save:set\
Save:set\Macro_Set_Path_{pro}.h  curKey
// --���key��������п��� (ûɶ�ã�ֻ���﷨�ϱ��ֲ�����)
Save:set\Macro_Set_Path_{pro}_{pro}.h  curKey
// --������ȡkeyΪ��
Save:set\Macro_Set_Path_.h  curKey


### __key__
// ÿ����Ŀ��������: 
Save:set\Macro_Set_Key.h

// S��Ŀ����saveĿ¼����ĿĿ¼
Save:set\Macro_Set_Key.h  base_pri

// Ҳ�����ⲿ����·��
Save:set\Macro_Set_Key.h  101key
{HW}\\


[1.7] set common
// --���� �� cur Path;
// --tool �� Common;
// --���� �� Key;
Save:set\Macro_Set_Common.h   downPath
//
HWNV:\\



[1.8] ��ע

### ��ȡkey--{0}/���ü�
//		==>getKeyHead
//		====>GetPubPathBuf
//		======>'Macro_Set_Path_base.h'
//		====>GetCommonPathBuf
//		======>'Macro_Set_Common.h'
//		====>GetPubKeyBuf
//		======>'Macro_Set_Key.h'
Save:Macro\sbd_f11.em   ReAllKeyHead


### ��ȡkey--8910 path�ⲿʹ��
//		==>getKeyHead
//		====>getPathFromKey
//		======>SearchNumFromKey
//		======>SearchPathFromNum
//		========>'8910' -> '60' -> path
{8910}:\


### ��ȡkey--tool
//		==>NoteHander
//		====>getVS08Path(0)
//		======>getToolPathFromKey("", "VS08")
//		========>'VS08' -> path


### ��ȡkey--Alias/��Ŀ��
//		==>getPathFromAlias   #  (δʹ��)
Macro\sbd_base.em  getPathFromAlias
//		==>BCompare
//		====>getBaseOther(curtype, "alias")
//		======>'6531D' -> 'MS_MMI'
//		==>getCustomHot(hbuf, 2)
//		====>getBaseType
//		====>getBaseOther(n, "alias")
//		====>getBaseOther(curtype, "Hot")
//		======>"Hot2" -> path


### ��ȡNum/�����
//		==>BCompare
//		====>getBaseDirNum
//		======>SearchNumFromPath
//		==>GetPubPathBuf
//		====>getBaseDirNum
//		==>getCustomKeyHead
//		====>getBaseDirNum
//		====>getBaseKey
//		======>"pro" -> "60" -> "8910"
Save:Macro\sbd_f11.em   ReCustomKeyHead


### ��ȡNum
//		==>Item_2
//		====>Item_Tree(2)
//		======>Code_Tree(2-12)
//		========>TreeNum(hbuf, 2)
//		==========>"work" -> "tree" -> 1 -> 2
//		==>Tree()  # f1-2
//		====>TreeNum(hbuf, 2)
//		======>getCustomHot(hbuf, 2)


### ��ȡproject
//		==>OpenPath
//		====>getProjectPath
//		======>getBaseDirNum
//		========>"ѡ��" -> "\\target"       # ��ʱ�ˣ��Ƶ�cfg��
//		==>ShowMacro
//		====>OpenSelMakeFile
//		======>OpenMakeFile
//		========>getProjectPath
//		==========>"SR" -> "mk"    # ��һ�����
//		==>getBaseType
//		====>getBaseDirNum


### ��ȡ tag1
//		==>ShowMarcoFromFile
//		====>getBaseOther(n, "tag1")


### 
//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>


[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] SI4.0��װ����

	1) ��װ���ļ�:
		SI4.0��װ��\si4.pediy.lic
		SI4.0��װ��\sourceinsight4.exe
		SI4.0��װ��\sourceinsight4084-setup.exe

	2) ��װ����:
		1 ��װ sourceinsight4084-setup.exe
		2 ��sourceinsight4.exe�滻��װĿ¼�µ��ļ�
			D:\Program Files (x86)\Source Insight 4.0\sourceinsight4.exe
		3 ��sourceinsight4.exe������֤��si4.pediy.lic

	3) SI4.0Ĭ������, ��Ҫ�����塢���롢����..
		//����鿴:
		//SI4.0��װʹ��.txt


[2.2] ���������ļ�
#    �����ļ� ��������:
git clone https://github.com/seefs/Source_Insight_4_0_cfg

#    ���º󸲸����Ŀ¼
#    �����úÿ�ݼ������壬�˵�
...\Save\Source Insight 4.0\Settings
#    (����)
	
	


[2.3] ����������Ҫͬ��, �����¹���Ҳ����Ҫͬ��(���򱨺����Ҳ���)

�˵�--project -> ��project -> base project 
�л���base project�£�

###��Ӻ��ļ�:
�˵�--project -> ��ӻ��Ƴ���Ŀ�ļ� -> ���
...\Macro

ѡ�����ļ�, 
�����ļ��������


###ͬ��:
�˵�--project -> ͬ���ļ�



[2.4] ���ñ���Ŀ¼
����:
...\Cmd_other\first_set_path.bat

����ֱ�ӱ༭:
...\Save\SI_db\Macro\sbd_root_path.em
	


[2.5] ��֤����OK
###��ݼ�
ctrl+b, ������ʱ�ļ�--simple_tmp_b.h
f2, �򿪵�ǰĿ¼


[2.6] 


[2.7] 


[2.8] 






