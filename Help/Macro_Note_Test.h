
����·������:
basePath = Save:Macro\
base:\\
base:sbd_test.em  OpenMiniTest

bakPath = Save:Help\Tmp\target
bak:\\

// ��ʾlog����(testParam)
//   1: ��ʾ����log
//   2: ��ʾ����log
testParam = 1
//testParam = 2


//  ��ǰ�ļ���Ϊ�����ļ�:
MiniTest = True


/***********************************************************************/


//Ŀ¼[Num][Ca]:
// 1.FN
Save:Help\Macro_Note_Test.h \[1.1\] F1----------------tree
Save:Help\Macro_Note_Test.h \[1.2\] F2----------------
Save:Help\Macro_Note_Test.h \[1.3\] F3----------------
Save:Help\Macro_Note_Test.h \[1.4\] F4----------------
Save:Help\Macro_Note_Test.h \[1.5\] F5----------------rule goto
Save:Help\Macro_Note_Test.h \[1.6\] F6----------------rule soft
Save:Help\Macro_Note_Test.h \[1.7\] F7----------------SVN--Test
Save:Help\Macro_Note_Test.h \[1.8\] F8----------------
Save:Help\Macro_Note_Test.h \[1.9\] F9----------------search
Save:Help\Macro_Note_Test.h \[1.10\] F10--------------group
Save:Help\Macro_Note_Test.h \[1.11\] F11--------------Note��ݼ�
Save:Help\Macro_Note_Test.h \[1.12\] F12--------------
Save:Help\Macro_Note_Test.h \[1.13\] �﷨����---------����ɾ����...
Save:Help\Macro_Note_Test.h \[1.14\] project
Save:Help\Macro_Note_Test.h \[1.15\] project path Set
Save:Help\Macro_Note_Test.h \[1.16\] file list
Save:Help\Macro_Note_Test.h \[1.17\] mode
Save:Help\Macro_Note_Test.h \[1.18\] String
Save:Help\Macro_Note_Test.h \[1.19\] Shell
Save:Help\Macro_Note_Test.h \[1.20\] API
Save:Help\Macro_Note_Test.h \[1.21\] 
//2.ctrl
Save:Help\Macro_Note_Test.h \[2.1\] ctrl+B
Save:Help\Macro_Note_Test.h \[2.2\] ctrl+T
Save:Help\Macro_Note_Test.h \[2.3\] ctrl+D------------����
Save:Help\Macro_Note_Test.h \[2.4\] ctrl+C
Save:Help\Macro_Note_Test.h \[2.5\] 
Save:Help\Macro_Note_Test.h \[2.6\] 
Save:Help\Macro_Note_Test.h \[2.7\] 
Save:Help\Macro_Note_Test.h \[2.8\] 
Save:Help\Macro_Note_Test.h \[2.9\] 
Save:Help\Macro_Note_Test.h \[2.10\] 
//3.f11--Test
Save:Help\Macro_Note_Test.h \[3.1\] cmdϵ��-----------7��
Save:Help\Macro_Note_Test.h \[3.2\] 
Save:Help\Macro_Note_Test.h \[3.3\] open(exe)---------1��
Save:Help\Macro_Note_Test.h \[3.4\] 
Save:Help\Macro_Note_Test.h \[3.5\] setPath
Save:Help\Macro_Note_Test.h \[3.6\] setProPath
Save:Help\Macro_Note_Test.h \[3.7\] sethistory
Save:Help\Macro_Note_Test.h \[3.8\] cp, RAR
Save:Help\Macro_Note_Test.h \[3.9\] make--------------2��
Save:Help\Macro_Note_Test.h \[3.10\] ctmake
Save:Help\Macro_Note_Test.h \[3.11\] xmake
Save:Help\Macro_Note_Test.h \[3.12\] set--------------3��
Save:Help\Macro_Note_Test.h \[3.13\] vc
Save:Help\Macro_Note_Test.h \[3.14\] vs08
Save:Help\Macro_Note_Test.h \[3.15\] call
Save:Help\Macro_Note_Test.h \[3.16\] 
Save:Help\Macro_Note_Test.h \[3.17\] 
Save:Help\Macro_Note_Test.h \[3.18\] 
Save:Help\Macro_Note_Test.h \[3.19\] git
Save:Help\Macro_Note_Test.h \[3.20\] python-----------4��
Save:Help\Macro_Note_Test.h \[3.21\] str
Save:Help\Macro_Note_Test.h \[3.22\] Save
Save:Help\Macro_Note_Test.h \[3.23\] ...--------------5��
Save:Help\Macro_Note_Test.h \[3.24\] file
Save:Help\Macro_Note_Test.h \[3.25\] path
Save:Help\Macro_Note_Test.h \[3.26\] 
Save:Help\Macro_Note_Test.h \[3.27\] �ո�
Save:Help\Macro_Note_Test.h \[3.28\] 
Save:Help\Macro_Note_Test.h \[3.29\] 
Save:Help\Macro_Note_Test.h \[3.30\] 





[1.1] 



[1.2] 




[1.3] 



[1.4] 


[1.5] rule goto
base:sbd_test.em  goto_copy
	
//1) ѡ��(goto_copy), ��ctrl+E
//  ����--������ת:
goto_copy  Խ
goto_copy  Խ��
goto_copy  ��
goto_copy  ̩
//  to:
//		VIETNAMESE
//		ARABIC
//		THAI

//2) ѡ��(goto_select), ��ctrl+E
//  ѡ��--Ӣ����ת:
goto_select  GC6133 (file)
goto_select  USB
goto_select  PRODUCT_CONFIG (path)
goto_select  CUSTOMER

//3) ѡ��(rule_cn_soft), ��ctrl+E
//  �����������������׼ȷ��
//		(��)

//4) ѡ��(rule_en_soft), ��ctrl+E
//  ��������Ӣ�������׼ȷ��
//		(��)

//5) ѡ��(rule_cn_find), ��ctrl+E
//  ����������ת
//		(��)

//6) ѡ��(rule_en_find), ��ctrl+E
//  ����Ӣ����ת
//		(��)


[1.6] rule soft
//1) ѡ��(key_cn_soft), ��ctrl+E
//  Ӣ���������
//		(��)

//2) ѡ��(key_en_soft), ��ctrl+E
//  �����������
//		(��)

//3) ѡ��(add_rule), ��ctrl+E
//  ѡ�к���ӹ���
//		(��)




[1.7] 
SVN--Test
//SVN--Test
TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" 
F:\11CW1352MP_MT6261DM\custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M610_KM_I710_F2.dws


//openCmd 
//cmd	   ����cmd���� ������cmd
cmd: cmd




[1.8] 





[1.9] search
base:sbd_test.em  search_bft

//1) ѡ��(search_version), ��ctrl+E
//  Ӣ���������
//		(��)

//2) ѡ��(search_bft), ��ctrl+E
//  �򿪲���(bftParam)
//bftParam = 6531E
//  ����:
search_bft  MAINMENU
search_bft  EXTRA

//3) ѡ��(search_bft), ��ctrl+E
//  �򿪲���(bftParam)
//bftParam = 9820e
//  ����:
search_bft  lcd/lcd_st7789v2_spi.c
search_bft  values\config.xml
search_bft  statusbar\BaseStatusBar.java 
search_bft  statusbar\BaseStatusBar.java 



[1.10] group ����
base:sbd_test.em  sr_group

//1) ѡ��(sr_group), ��ctrl+E
//  
sr_group

//2) ѡ��(show_menu), ��ctrl+E
//  
show_menu
	
//3) ѡ��(group), ��ctrl+E
//	 1) mk�ļ���: ��ݼ���ת���� (��)
//	 2) em�ļ���: ��ʾ�б� (��)
//	 3) sr�ļ���: ��ݼ����ļ�/�ļ����� (��)
//	 4) ����:
// �򿪲���(bftParam)
bftParam = 6531E
����:
group  mmiidle_cstyle.c
group  mmialarm.c



[1.11] Note��ݼ�--
��ݼ�[Ca]:
F11:��/�رձʼ�
F2: ��ѡ���·��/�ļ�; �ļ���+��չ��
F5: ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make/ctmake/xmake��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)


[1.12] 



//f12--Test
//test:
//F12->F12
//F12->F1


//test:
//F12->F2~F11



[1.13] �﷨����
//1.�����﷨����
// --Test��ʽ
test:SiMro
//	����λ��
Save:Macro\sbd_test.em	TestNodeMsg




[1.14] project
//
//MiniTest = project
//bftParam = 6531E
//bftParam = 9820e

//1) ����Ŀ�ļ�:
pls_press_ctrl_e




[1.15] path--Set
//sbd_base ·������
Save:Macro\sbd_base.em

//Macro_Set_Base ·������
Save:set\Macro_Set_Base.h

//����·������: (�¼ӵĻ��ο�����·��)
// Save:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_file.em	"Save:"
Save:Macro\sbd_f11.em	"Save"




[1.16] file list
//file list Test:
Save:Cmd\file___no_use\...
Save:Cmd\file___no_use\dir_getFile...
Save:Cmd\file___no_use\dir_getFile time.bat
Save:Cmd\file___no_use\dir_getFile_spr.bat
Save:Cmd\cmd_getFileList.bat
Save:Cmd_TXT\si_filelist.h





[1.17] mode
base:sbd_test.em  mode_save

//1) ѡ��(mode_save), ��ctrl+E
//  
//		(��)

//2) ѡ��(mode_read), ��ctrl+E
//  
//		(��)





[1.18] String
base:sbd_test.em  line_value

//1) ѡ��(line_value), ��ctrl+E
//  
//		(��)

//2) ѡ��(string_translate), ��ctrl+E
//  
//		(��)
	

[1.19] Shell
base:sbd_test.em  shell_cmd

//1) ѡ��(shell_cmd), ��ctrl+E
//  
//		(��)

//2) ѡ��(shell_SvnLog), ��ctrl+E
//  
//		(��)
	
//3) ѡ��(shell_SvnDiff), ��ctrl+E
//	�򿪲���(bftParam, fileParam), 
//bftParam = 6531E
//fileParam = mmiidle_cstyle.c
//fileParam = mmialarm.c



[1.20] API
base:sbd_test.em  API_log

//1) ѡ��(API_log), ��ctrl+E
//  
//		(��)

//2) ѡ��(API_struct), ��ctrl+E
//  
//		(��)

//3) ѡ��(API_val), ��ctrl+E
//  
//		(��)


[1.21] 



[2.1] ctrl+B
//  ����λ��
Save:Macro\sbd_ctrl.em  CtrlB
Save:Macro\sbd_f12.em  ShowNoteHelp

//1) ��ʾ��ʾ��Ϣ--py/android�﷨
// --Test--Python
range		(ѡ�к�->ctrlB->��ʾ)
reduce_sum	(ѡ�к�->ctrlB->��ʾ)
reduce_0	(ѡ�к�->ctrlB->������, ����ʱ�ļ�)
// --Test--Android
implement	(ѡ�к�->ctrlB->��ʾ)


//2) py��android˵������, ������Ϊֻ��ʾandroid:
// --Test
compile
// --set py info(0 or 1):
Save:set\Macro_Set.h 75
// --set android info(0 or 1):
Save:set\Macro_Set.h 78


//3) Lib���ձ�, (�����ʽ, ��'.'ʱ������'::')
Save:Help\LangInfo\Macro_Info_Android_Lib.h
// --Test
implementation 'com.android.support:appcompat-v7:25.+'
implementation 'com.android.support:support-v4:25.+'


//4) Infoλ��
//   �����ؼ���:
Save:Help\LangInfo\Macro_Info_Android.h  classpath::
Save:Help\LangInfo\Macro_Info_Python.h



[2.2] ctrl+T
//
Save:Help\Tmp\sbd_Tmp_Show.em
//
Save:Help\Tmp\Tmp_Test.h


[2.3] ctrl+D����
MtkNote

//��Ҫ����:
ctrl+D->ctrl+S:
ctrl+D->ctrl+C:
ctrl+D->ctrl+F:
ctrl+D->ctrl+V:
ctrl+D->ctrl+B:
	
ctrl+D->ctrl+A:
ctrl+D->ctrl+T:
ctrl+D->ctrl+R:
ctrl+D->ctrl+G:
	
//��ģ������:
ctrl+D->M:
ctrl+D->K:
ctrl+D->R:
ctrl+D->S:
ctrl+D->...:


//��ʾ��ҳ
//  ctrlDD��, ���ctrlD, ����û����ʾ��ҳ��������:
//  ctrlD3, ��ʾ��1ҳ
//  ctrlD4, ��ʾ��2ҳ
//  ctrlD5, ��ʾ��3ҳ
//  ctrlD6, ��ʾ��4ҳ
Save:Help\DefaultFile\Macro_Node_Num.h

//�ֶ���������
//  ctrlU, ��ӱ��
//  ctrlU, ����^p^p^p, ��ӻ���



[2.4] ctrl+C
// auto set
Save:set\Macro_Set_Path_mtk.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD
//

// ���ܸ���
Save:Help\Tmp\Tmp_space.h
// ����
Save:Help\Tmp\Tmp_space{cp}.h
// ����
Save:Help\Tmp\Tmp_space_K220_V18_WD.h
// ����
Save:Help\Tmp\Tmp_space_K220_V35_WD.h



[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] cmdϵ��
# 1) test
// ��ʾcmd����
test:CustomCmd

//	����λ��
Save:Macro\sbd_test.em	TestNodeMsg


# 2) cmd_w
//	���� + ճ�� (base·��)
// ��ʽ: ȥ��һ��head(·������)
cmd_w: ping dl.google.com

//	����λ��
Save:Macro\sbd_f11.em	"cmd"


# 3) cmd_s
//	���� + ճ�� (project·��)
// ��ʽ: ȥ��һ��head(·������)
cmd_s: ping dl.google.com

//	����λ��
Save:Macro\sbd_f11.em	macro^NoteCurCmd


# 4) cmd_f
//	ԭĿ¼
cmd_f: ren Tmp_Test.h Tmp_Test5.0.h
cmd_f: ren Tmp_Test5.0.h Tmp_Test.h
//	�ϼ�Ŀ¼
cmd_f: ren target\Tmp_Test.h Tmp_Test5.0.h
cmd_f: ren target\Tmp_Test5.0.h Tmp_Test.h
//	ȫĿ¼
cmd_w: ren D:\Save\SI\Help\Tmp\target\Tmp_Test.h Tmp_Test5.0.h

//	����
// ��ʽ: ȥ��һ��head(·�����ұ��м�)
cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h
cmd_f: ren bak:Tmp_Test5.0.h Tmp_Test6.0.h
cmd_f: ren bak:Tmp_Test6.0.h Tmp_Test.h
cmd_f: ren L:����ͼƬ\* *.jpg

//	����λ��
Save:Macro\sbd_f11.em	macro^NoteInCmd
//  ���
bakPath = Save:Help\Tmp\target
bak:\\

cmd_w: D:&&cd D:\Save\SI\Macro\

# 5) cmd
//	�򿪻���·���ĵ��� + ճ��(��ͨ��)
cmd: ping dl.google.com




[3.2] 



[3.3] open(exe)
//��
open: C:\Program^Files^(x86)\Tencent\QQ\Bin\QQScLauncher.exe


//open	   �����ʼ�; ��exe; ���ļ�+�ؼ���; ��Macro_��ͷ�ļ���ֻ����������ļ�
open:plutommi\Customer\STMTView.exe

//����:
//���ع���:
open:D:\Desktop\����\FlashTool_v5.1548.00\Flash_tool_Beta.exe
//�ַ�������:
open:plutommi\Customer\STMTView.exe
//TRACE:
open D:\ProgramDownTool\3.1304.00_Catcher\Catcher.exe


[3.4] 


[3.5] setPath
//set��ǰ��Ŀ:
set ...:
sethistory:

setPath old/new:
CurProPath:
setProPath:

//set  
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm


//setPath  
setPath old (����һ�а�F5, ��ʼ�滻)






[3.6] setProPath
//setProPath  
setProPath plutommi\\Customer\\Audio\\M115\\M115_JGW_D2_X191_F2 = AUDIO\\PLUTO


[3.7] sethistory
//sethistory: 



[3.8] cp, cprow, RAR
//
Save:Macro\sbd_f11.em	"cp"
Save:Macro\sbd_f11.em	"cprow"
Save:Macro\sbd_f11.em	"RAR"
Save:Macro\sbd_ctrl.em  "newPro"


//1) cp: ��������
cp Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\Tmp_Test_new.h
cp Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\

// �鿴���
Save:Help\Tmp\target\

//	����λ��
Save:Macro\sbd_f11.em	macro^NoteCopyFile


//2) cprow: ���и�������
cprow Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\Tmp_Test_new.c
cprow Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\

// �鿴���
Save:Help\Tmp\target\

//	����λ��
Save:Macro\sbd_f11.em	macro^NoteCopyFile
Save:Macro\sbd_f11.em	macro^NoteCopyRowFile


//3) ctrl+C: ���ƾ���Ŀ������Ŀ(��)
// ����Ŀ����:
newPro = Save:Help\
newPro = M610_KM_V2411_SP6000_F2
// ѡ�к�copy:
Save:Help\Tmp\Tmp_Test.h


//4) RAR:(��)
RAR Save:Help\Tmp\RTmp_Test.rar Save:Help\Tmp\RTmp_space.rar
RAR Save:Help\Tmp\Tmp_Test.h
//��RAR�ļ�:
RAR: Save:Help\Tmp RTmp_Test.rar


[3.9] make
//
Save:Macro\sbd_f11.em	"make"

//make	   ����cmd����
make M115_JGW_D2_X191_F2 gprs gen_modis


[3.10] ctmake
//ctmake   ������cmd����, ֻ����
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


[3.11] xmake
//xmake    ������cmd����, ֻ����
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


[3.12] 
//
Save:Macro\sbd_f11.em	"set"


[3.13] vc
//vc
vc: build\SE818BC_BY_S018_JX_64_64_F3_builddir\win\simulator.dsw


[3.14] vs08
//vs08
vs08:MoDIS_VC9\MoDIS.sln


[3.15] 


[3.16] 


[3.17] 


[3.18] 


[3.19] git
//
tmpPath = D:\project\C\tmp
tmp:\\
tmpCPath = D:\project\C\
tmpC:\\
//
cd:tmp:      git clone https://github.com/twardoch/ttfdiet
cd:tmpC:tmp\ git clone https://github.com/twardoch/ttfdiet
cd:tmpC:tmp  git clone https://github.com/twardoch/ttfdiet
cd:tmp       git clone https://github.com/twardoch/ttfdiet




[3.20] python
Save:Macro\sbd_f11.em	"python"

//python
// ����˫·��
basePath = D:\project\NLP
base:\\
toolPath = Save:node\Pythons
tool:\\

//1) ��1��·��(base + filename)
nlp_block\_layer.py
python_w nlp_block\_layer.py
//python   nlp_block\_layer.py

//2) ��2��·��(tool + filename)
tool:py_test\test_time.py
python_w tool:py_test\test_time.py
python_w:tool py_test\test_time.py
python_w:tool: py_test\test_time.py






[3.21] str
# 1) replace
//	
replace a123456 12 ccc
replace tmpC:tmp\ tmpC: D:\project\C\
replace tmpC:tmp  tmpC: D:\project\C\
replace ^^^sss^^^ddd^eee^^^   ^  =
replace a\\\\bb\\cc\\dd\\\\   \  =



[3.22] 


[3.23] 
f11--path--Test
����·��
//1. "E:XXX YYY" ��ȡ·��Ϊ "E:XXX"

//cfg--fs
Tool:soft_zip_mp3\BLEPHONE61D_11C_BB.cfg main_region

root->F


[3.24] file
#   --Test�ļ�
//����·������:
basePath = F:\6261D_11C_V33
//basePath = D:\SVN

//��ת���к�:
projects\....bld 30

//ͨ�������:
//	2002/06/07 --> [0-9][0-9][0-9][0-9]/[0-9][0-9]/[0-9][0-9]
projects\....bld [0-9][0-9][0-9][0-9]/[0-9][0-9]/[0-9][0-9]

//�����ļ�
Save:Help\Test\Macro_...
Save:Help\Test\...
Save:Help\Test\Tmp_Test.h

//�����ļ�����ֱ�Ӵ򿪱����ļ�
FileSame:Save:Help\Test\Macro_




[3.25] path

//1) ����·������:
//basePath = Save:node\Pythons
base:\\

// 1.1.����basePath, �� basePath + curPath
py_test\file_read_a.txt
py_test\file_read_b.txt

// 1.2.������basePath, �� project path + curPath
py_test\file_read_a.txt


//2) XXX·��--Test
XXXPath = Save:node\Pythons\
XXX:\\
// ok
XXX:install\hello.py
// err
YYY:install\hello.py


//3) ����·�����ļ�
//����·��
AsFile:Save:Help\


//4) {cur}
//����·��
install\hello{cur}.py
plutommi\Customer\CustResource\{cur}_MMI\
make/{cur}_GSM.mak  XX = A



[3.26] 


[3.27] �ո�
//
helpPath = Save:Help

//1) ��׼
help:Tmp\Tmp_Test.h
help:Tmp\Tmp_Test.h SLIM

//2) ��׼ + �м�һ�ո�(err)
help: Tmp\Tmp_Test.h
help:Tmp\Tmp_Test.h  SLIM

//3) ��׼ + ���һ�ո�
help:Tmp\Tmp_Test.h 
help:Tmp\Tmp_Test.h SLIM 

//4) ��׼ + ��Ӷ�����
help:Tmp\Tmp_Test.h  SLIM  FULL

//5) python + �ӿո�
python_w help:DefaultFile\Macro_z_null.py
python_w  help:DefaultFile\Macro_z_null.py
python_w help:DefaultFile\Macro_z_null.py 
python_w help:DefaultFile\Macro_z_null.py SLIM
python_w help:DefaultFile\Macro_z_null.py SLIM FULL


[3.28] 


[3.29] 


[3.30] 





