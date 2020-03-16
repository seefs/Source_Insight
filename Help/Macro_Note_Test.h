
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1.说明
//   SprNote
//   MtkNote
Save:Help\Macro_Note_Test.h \[1.1\] Note快捷键--
Save:Help\Macro_Note_Test.h \[1.2\] 索引
Save:Help\Macro_Note_Test.h \[1.3\] 索引换行, 显示分页
Save:Help\Macro_Note_Test.h \[1.4\] 编译
Save:Help\Macro_Note_Test.h \[1.5\] 工具
Save:Help\Macro_Note_Test.h \[1.6\] cp命令
Save:Help\Macro_Note_Test.h \[1.7\] open
Save:Help\Macro_Note_Test.h \[1.8\] set当前项目
Save:Help\Macro_Note_Test.h \[1.9\] 
Save:Help\Macro_Note_Test.h \[1.10\] 
//2.cmd--Test
Save:Help\Macro_Note_Test.h \[2.1\] cmd--Test
Save:Help\Macro_Note_Test.h \[2.2\] 
Save:Help\Macro_Note_Test.h \[2.3\] 
//3.tool--Test
Save:Help\Macro_Note_Test.h \[3.1\] SVN--Test
Save:Help\Macro_Note_Test.h \[3.2\] 
Save:Help\Macro_Note_Test.h \[3.3\] 
//4.f1~f12--Test
Save:Help\Macro_Note_Test.h \[4.1\] f1--Test
Save:Help\Macro_Note_Test.h \[4.2\] f2~f5--Test
Save:Help\Macro_Note_Test.h \[4.3\] f6~f10--Test
Save:Help\Macro_Note_Test.h \[4.4\] f11--Test
Save:Help\Macro_Note_Test.h \[4.5\] f12--Test
Save:Help\Macro_Note_Test.h \[4.6\] 
Save:Help\Macro_Note_Test.h \[4.7\] file--Test
Save:Help\Macro_Note_Test.h \[4.8\] path--Set
Save:Help\Macro_Note_Test.h \[4.9\] path--Test
Save:Help\Macro_Note_Test.h \[4.10\] f11--删空格测试
Save:Help\Macro_Note_Test.h \[4.11\] f11--path--Test
Save:Help\Macro_Note_Test.h \[4.12\] 
Save:Help\Macro_Note_Test.h \[4.13\] 
Save:Help\Macro_Note_Test.h \[4.14\] 
Save:Help\Macro_Note_Test.h \[4.15\] ctrl+B--Test
Save:Help\Macro_Note_Test.h \[4.16\] 
Save:Help\Macro_Note_Test.h \[4.17\] 
Save:Help\Macro_Note_Test.h \[4.18\] 
Save:Help\Macro_Note_Test.h \[4.19\] 
Save:Help\Macro_Note_Test.h \[4.20\] 
//5.SI语法测试
Save:Help\Macro_Note_Test.h \[5.1\] 语法测试
Save:Help\Macro_Note_Test.h \[5.2\] 
Save:Help\Macro_Note_Test.h \[5.3\] 




[1.1] Note快捷键--
快捷键[Ca]:
F11:打开/关闭笔记
F2: 打开选择的路径/文件; 文件名+扩展名
F5: 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make/ctmake/xmake、open、vc、vs08开头; 默认打开文件+关键字(行)


[1.2] 索引
MtkNote

//主要索引:
ctrl+D->ctrl+S:
ctrl+D->ctrl+C:
ctrl+D->ctrl+F:
ctrl+D->ctrl+V:
ctrl+D->ctrl+B:
	
ctrl+D->ctrl+A:
ctrl+D->ctrl+T:
ctrl+D->ctrl+R:
ctrl+D->ctrl+G:
	
//分模块索引:
ctrl+D->M:
ctrl+D->K:
ctrl+D->R:
ctrl+D->S:
ctrl+D->...:




[1.3] 索引换行, 显示分页
//显示分页
Save:Help\Test\Macro_Test_Node.h
//索引换行
Save:Help\Test\Macro_Test_Replace.h



[1.4] 编译
//编译:
cmd:F:\11CW1352MP\11CW1352MP\cmd
make ...:
vs08:

//vc	   
vc: build\SE818BC_BY_S018_JX_64_64_F3_builddir\win\simulator.dsw


//vs08	   
vs08:MoDIS_VC9\MoDIS.sln


//call	   不运行cmd命令, 只复制

make
//make     运行cmd命令
make M115_JGW_D2_X191_F2 gprs gen_modis


//python   运行cmd命令
python S069_HK_H1822_IRBIS_SF31_F2_QQVGA


//ctmake   不运行cmd命令, 只复制
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


//xmake    不运行cmd命令, 只复制
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


[1.5] 工具
工具:
//下载工具:
open:D:\Desktop\工具\FlashTool_v5.1548.00\Flash_tool_Beta.exe
//字符串工具:
open:plutommi\Customer\STMTView.exe
//TRACE:
open D:\ProgramDownTool\3.1304.00_Catcher\Catcher.exe




[1.6] cp命令
cp命令
//新项目设置:
newPro = AAA
cp xxx yyy

//cp:	   复制文件
cp Save:SI\node\Test\Tmp_Test.h Save:SI\node\Test\Tmp_Test_new.h
	
//RAR:
RAR Save:SI\node\Test\Tmp_Test.h Save:SI\node\Test\Tmp_Test_new.h
RAR Save:SI\node\Test\Tmp_Test.h



[1.7] open
//open	   创建笔记; 打开exe; 打开文件+关键字; 非Macro_开头文件中只能用这个打开文件
open:plutommi\Customer\STMTView.exe


//openCmd 


//cmd	   运行cmd命令 不包含cmd
cmd: cmd




[1.8] set当前项目
//项目设置:
set ...:
sethistory:

setPath old/new:
CurProPath:
setProPath:

//set  
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm


//setPath  
setPath old (在这一行按F5, 开始替换)


//setProPath  
setProPath plutommi\\Customer\\Audio\\M115\\M115_JGW_D2_X191_F2 = AUDIO\\PLUTO


//sethistory: 





[1.9] 




[1.10] 




[2.1] cmd--Test
//1.运行cmd命令
// --Test格式
test:CustomCmd
//  代码位置
Save:Macro\sbd_test.em  TestNodeMsg
//  正常格式
cmd_w: ping dl.google.com


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] SVN--Test
//SVN--Test
TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" 
F:\11CW1352MP_MT6261DM\custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M610_KM_I710_F2.dws


[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 


[3.10] 




[4.1] f1--Test

//f1->f1, f1->1
Save:node\Pythons\Macro_Pythons_Game.h 355

//f1->f1, f1->1
cur file.





[4.2] f2~f5--Test




[4.3] f6~f10--Test




[4.4] f11--Test




[4.5] f12--Test

//test:
//F12->F12
//F12->F1


//test:
//F12->F2~F11





[4.6] 




[4.7] file--Test
#   --Test文件
基础路径设置:
basePath = F:\6261D_11C_V33
//basePath = D:\SVN


打开RAR文件:
RAR: projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images image.zip


跳转到行号:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld 30


通配符搜索:
//	2002/06/07 --> [0-9][0-9][0-9][0-9]/[0-9][0-9]/[0-9][0-9]
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld [0-9][0-9][0-9][0-9]/[0-9][0-9]/[0-9][0-9]




[4.8] path--Set
//sbd_base 路径设置
Save:Macro\sbd_base.em

//Macro_Set_Base 路径设置
Save:set\Macro_Set_Base.h

//定制路径设置: (新加的话参考已有路径)
// Save:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_file.em	"Save:"
Save:Macro\sbd_f11.em	"Save"


[4.9] path--Test

//1) 基础路径设置:
//basePath = Save:node\Pythons

// 存在basePath, 用 basePath + cur
py_test\file_read_a.txt
py_test\file_read_b.txt

// 不存在basePath, 用 project path + cur
py_test\file_read_a.txt


//2) Project路径--Test
ProjectPath = Save:node\Pythons
// ok
Project:py_test\file_read_a.txt
// err
Project2:py_test\file_read_b.txt
Project: py_test\file_read_a.txt


//3) Tool路径--Test
Tool2Path = Save:node\Pythons
// ok
Tool2:py_test\file_read_a.txt
// err
Tool:py_test\file_read_b.txt


//3) Data路径--Test
DataPath = Save:node\Pythons
// ok
Data:py_test\file_read_a.txt
// err
Data2:py_test\file_read_b.txt


//4) TSTS路径--Test
TSTSPath = Save:node\Pythons
// ok
TSTS:py_test\file_read_a.txt
// err
TSTSS:py_test\file_read_b.txt





[4.10] 




[4.11] f11--path--Test
特殊路径
//1. "E:XXX YYY" 获取路径为 "E:XXX"

//cfg--fs
Tool:soft_zip_mp3\BLEPHONE61D_11C_BB.cfg main_region

root->F




[4.12] 
	
	
[4.13] 
	
	
[4.14] 
	
	
[4.15] ctrl+B--Test
//1) 显示提示信息--py/android语法
// --Test--Python
range		(选中后->ctrlB->提示)
reduce_sum	(选中后->ctrlB->提示)
reduce_0	(选中后->ctrlB->不存在, 打开临时文件)
// --Test--Android
implement		(选中后->ctrlB->提示)

//  代码位置
Save:Macro\sbd_ctrl.em  CtrlB
Save:Macro\sbd_f12.em  ShowNoteHelp
//  Info位置
Save:Help\LangInfo\Macro_Info_Android.h
Save:Help\LangInfo\Macro_Info_Python.h


//2) py和android说明均有, 可设置为只显示android:
// --Test
compile
// --set py info(0 or 1):
Save:set\Macro_Set.h 75
// --set android info(0 or 1):
Save:set\Macro_Set.h 78


//3) Lib对照表, (特殊格式, 带'.'时不搜索'::')
Save:Help\LangInfo\Macro_Info_Android_Lib.h
// --Test
implementation 'com.android.support:appcompat-v7:25.+'
implementation 'com.android.support:support-v4:25.+'

//  代码位置
Save:Macro\sbd_f12.em  ShowNoteHelp



[4.16] 
	
	
[4.17] 
	
	
[4.18] 
	
	
[4.19] 
	
	
[4.20] 
	





[5.1] 语法测试
//1.运行语法测试
// --Test格式
test:SiMro
//	代码位置
Save:Macro\sbd_test.em	TestNodeMsg




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















