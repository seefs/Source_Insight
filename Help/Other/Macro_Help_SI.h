
����·������:
//basePath = 


//Ŀ¼:
// 1. 
Save:Help\Other\Macro_Help_SI.h \[1.1\] marco file
Save:Help\Other\Macro_Help_SI.h \[1.2\] marco test...
Save:Help\Other\Macro_Help_SI.h \[1.3\] set save path---�޸�
Save:Help\Other\Macro_Help_SI.h \[1.4\] set work path
Save:Help\Other\Macro_Help_SI.h \[1.5\] other set
Save:Help\Other\Macro_Help_SI.h \[1.6\] set cfg path
Save:Help\Other\Macro_Help_SI.h \[1.7\] 
Save:Help\Other\Macro_Help_SI.h \[1.8\] 
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
// 1) �ı�Save·��, �������������ʹ��:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_root_path.em  getRootPath(0)

// 2) �״ΰ�װ����:
Save:Help\Other\Macro_Help_SI.h


[1.4] set work path
//1) ����·�����
Save:set\Macro_Set_Base.h

//2) ��Ŀ·���ɴ�(�滻)
Save:set\Macro_Set_Note.h


[1.5] other set
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



[1.6] set {pro} path
// 1.��Ŀ��
// --��Ŀ��--����
Save:Macro\sbd_f11.em   ReCustomKeyHead
// --��Ŀ��--�������ĸ��ļ�
Save:Macro\sbd_base.em  getPathConfig(0)
// --��Ŀ��--�ļ�
Save:set\Macro_Set_Base.h
// --��Ŀ��--{pro}--���ƿ���ת��������
Save:Macro\sbd_file.em  GetPubPathBuf
//
Save:set\
Save:set\Macro_Set_Path_*_*.h

// __cfg__
// 2.��ȡ��Ŀ��
// --ÿ����Ŀ��������;���key��������п���,������ȡkeyΪ��
// --S��Ŀ����saveĿ¼����ĿĿ¼
Save:set\
Save:set\Macro_Set_Path_{pro}.h  curKey
Save:set\Macro_Set_Path_.h  curKey





[1.7] 




[1.8] 




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






