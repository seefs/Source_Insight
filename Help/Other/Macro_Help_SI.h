
����·������:
//basePath = 


//Ŀ¼:
// 1. 
Save:Help\Other\Macro_Help_SI.h \[1.1\] marco file
Save:Help\Other\Macro_Help_SI.h \[1.2\] marco test...
Save:Help\Other\Macro_Help_SI.h \[1.3\] set save-------��·������
Save:Help\Other\Macro_Help_SI.h \[1.4\] data set-------��������
Save:Help\Other\Macro_Help_SI.h \[1.5\] set cfg--------��Ŀ����
Save:Help\Other\Macro_Help_SI.h \[1.6\] set key--------·������
Save:Help\Other\Macro_Help_SI.h \[1.7\] set common-----��������/����·��
Save:Help\Other\Macro_Help_SI.h \[1.8\] ���뱸ע--key
Save:Help\Other\Macro_Help_SI.h \[1.9\] ���뱸ע--log
Save:Help\Other\Macro_Help_SI.h \[1.10\] 
Save:Help\Other\Macro_Help_SI.h \[1.11\] 
Save:Help\Other\Macro_Help_SI.h \[1.12\] 




[1.1] marco file
### __marco__
Save:Macro\
//1) f1~f12:
Save:Macro\sbd_f1.em
Save:Macro\sbd_f2.em
Save:Macro\sbd_f7.em
Save:Macro\sbd_f10.em  macro^NoteGroup
Save:Macro\sbd_f11.em  macro^NoteHander
Save:Macro\sbd_ctrl.em
//2) tool:
Save:Macro\a_String.em
//3) �ļ�����
Save:Macro\sbd_file.em  IsTxtFile( )


[1.2] marco test...
Save:Help\

### __test__
// ���ܲ���
Save:Help\Macro_Note_Test.h

// �����滻--nv
Save:Help\Other\Macro_Help_replace.h

// ��������
Save:Help\Other\Macro_Help_search.h

// ��Ŀ�ļ�ͳ��/��������
//Save:node\ToolsMsg\Macro_SI.h  __filelist__
Save:Help\Other\Macro_Help_filelist.h


[1.3] set save
### __save__
// 1) �ı�Save·�� (����ģ�����������ò���)
// --���:
Save:Macro\sbd_base.em	getSavePath(0)
// --ֱ�ӱ༭·��:
Save:Macro\sbd_root_path.em  getRootPath(0)
// --�����Զ�����:
Save:Cmd_other\
Save:Cmd_other\first_set_path.bat
// --��������--���ְ汾
Save:Help\Other\Macro_Help_filelist.h  __SiVer__

// 2) ��������:
Save:node\C\cfg\
// --sprd--key
Save:node\C\cfg\Macro_c_path_sprd.h
// --mtk--key
Save:node\C\cfg\Macro_c_path_mtk.h



[1.4] data set
### __data__
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


[1.5] set cfg--------��Ŀ����
### __cfg__
// ��Ŀ����(ÿ����Ŀ��������)
Save:set\
Save:set\Macro_Set_Path_{pro}.h  curKey

// --��ͨkey
// ----{0},{cur}
// --����key
// ----{pro}
// ------���pro��������п��� (ûɶ�ã�ֻ���﷨�ϱ��ֲ�����)
// ------pro������ʱ��ȡproΪ��
// --������key
// ----{Next}
// ------next=2ʱ���2��·���Ƿ����
Save:set\Macro_Set_Path_{pro}_{pro}.h  curKey
Save:set\Macro_Set_Path_sprd_.h  curKey


[1.6] set key--------·������
### __key__
// ·������
Save:set\Macro_Set_Key.h

// --{91}
// ----S��Ŀ����saveĿ¼����ĿĿ¼
Save:set\Macro_Set_Key.h  base_pri

// --{HW}
// ----�Ӽ�ֵ������Ҽ�·��
Save:set\Macro_Set_Key.h  101key
{HW}\\


[1.7] set common-----��������/����·��
### __Common__
// ����·��
Save:set\Macro_Set_Common.h   HWNVPath

// ����·��
Save:set\Macro_Set_Common.h   BComparePath

// ��������
Save:set\Macro_Set_Common.h   AdminKey



[1.8] ���뱸ע
// Ӧ�ÿ���ͬ�����ã���Ŀ��������

### ��ȡkey--{0}/���ü�
//		==>getKeyHead
//		====>GetPubPathBuf                # ��Ŀ����
//		======>'Macro_Set_Path_base.h'
//		====>GetCommonPathBuf             # ��������
//		======>'Macro_Set_Common.h'
//		====>GetPubKeyBuf
//		======>'Macro_Set_Key.h'          # ·������ xxkey_8910 => path
//		======>getPathFromKey
//		========>SearchNumFromKey
//		========>SearchPathFromNum
Save:Macro\sbd_f11.em   ReAllKeyHead
//
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


[1.9] ���뱸ע--log
// ���ز���
Save:Help\Other\Macro_Help_SI.h   __test__

### __log__
// ��ʾlog����
//testParam = 0  //��Ҫlog
//testParam = 1  //��ʾ����log
//testParam = 2  //��ʾ����log
// log
Save:Macro\sbd_test.em  macro^TestMsg


//  ��ǰ�ļ���Ϊ�����ļ�:
//MiniTest = True
Save:Macro\sbd_test.em  MiniTest



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 






