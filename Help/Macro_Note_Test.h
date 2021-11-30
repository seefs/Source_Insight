
基础路径设置:
basePath = Save:Macro\
base:\\
base:sbd_test.em  OpenMiniTest

bakPath = Save:Help\Tmp\target
bak:\\

// 显示log级别(testParam)
//   1: 显示少量log
//   2: 显示多数log
testParam = 1
//testParam = 2


//  当前文件作为测试文件:
MiniTest = True


/***********************************************************************/


//目录[Num][Ca]:
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
Save:Help\Macro_Note_Test.h \[1.11\] F11--------------Note快捷键
Save:Help\Macro_Note_Test.h \[1.12\] F12--------------
Save:Help\Macro_Note_Test.h \[1.13\] 语法测试---------后面删除掉...
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
Save:Help\Macro_Note_Test.h \[2.3\] ctrl+D------------索引
Save:Help\Macro_Note_Test.h \[2.4\] ctrl+C
Save:Help\Macro_Note_Test.h \[2.5\] 
Save:Help\Macro_Note_Test.h \[2.6\] 
Save:Help\Macro_Note_Test.h \[2.7\] 
Save:Help\Macro_Note_Test.h \[2.8\] 
Save:Help\Macro_Note_Test.h \[2.9\] 
Save:Help\Macro_Note_Test.h \[2.10\] 
//3.f11--Test
Save:Help\Macro_Note_Test.h \[3.1\] cmd系列-----------7类
Save:Help\Macro_Note_Test.h \[3.2\] 
Save:Help\Macro_Note_Test.h \[3.3\] open(exe)---------1类
Save:Help\Macro_Note_Test.h \[3.4\] 
Save:Help\Macro_Note_Test.h \[3.5\] setPath
Save:Help\Macro_Note_Test.h \[3.6\] setProPath
Save:Help\Macro_Note_Test.h \[3.7\] sethistory
Save:Help\Macro_Note_Test.h \[3.8\] cp, RAR
Save:Help\Macro_Note_Test.h \[3.9\] make--------------2类
Save:Help\Macro_Note_Test.h \[3.10\] ctmake
Save:Help\Macro_Note_Test.h \[3.11\] xmake
Save:Help\Macro_Note_Test.h \[3.12\] set--------------3类
Save:Help\Macro_Note_Test.h \[3.13\] vc
Save:Help\Macro_Note_Test.h \[3.14\] vs08
Save:Help\Macro_Note_Test.h \[3.15\] call
Save:Help\Macro_Note_Test.h \[3.16\] 
Save:Help\Macro_Note_Test.h \[3.17\] 
Save:Help\Macro_Note_Test.h \[3.18\] 
Save:Help\Macro_Note_Test.h \[3.19\] git
Save:Help\Macro_Note_Test.h \[3.20\] python-----------4类
Save:Help\Macro_Note_Test.h \[3.21\] str
Save:Help\Macro_Note_Test.h \[3.22\] Save
Save:Help\Macro_Note_Test.h \[3.23\] ...--------------5类
Save:Help\Macro_Note_Test.h \[3.24\] file
Save:Help\Macro_Note_Test.h \[3.25\] path
Save:Help\Macro_Note_Test.h \[3.26\] 
Save:Help\Macro_Note_Test.h \[3.27\] 空格
Save:Help\Macro_Note_Test.h \[3.28\] 
Save:Help\Macro_Note_Test.h \[3.29\] 
Save:Help\Macro_Note_Test.h \[3.30\] 





[1.1] 



[1.2] 




[1.3] 



[1.4] 


[1.5] rule goto
base:sbd_test.em  goto_copy
	
//1) 选中(goto_copy), 再ctrl+E
//  复制--中文跳转:
goto_copy  越
goto_copy  越南
goto_copy  阿
goto_copy  泰
//  to:
//		VIETNAMESE
//		ARABIC
//		THAI

//2) 选中(goto_select), 再ctrl+E
//  选中--英文跳转:
goto_select  GC6133 (file)
goto_select  USB
goto_select  PRODUCT_CONFIG (path)
goto_select  CUSTOMER

//3) 选中(rule_cn_soft), 再ctrl+E
//  批量测试中文排序的准确性
//		(略)

//4) 选中(rule_en_soft), 再ctrl+E
//  批量测试英文排序的准确性
//		(略)

//5) 选中(rule_cn_find), 再ctrl+E
//  查找中文跳转
//		(略)

//6) 选中(rule_en_find), 再ctrl+E
//  查找英文跳转
//		(略)


[1.6] rule soft
//1) 选中(key_cn_soft), 再ctrl+E
//  英文排序测试
//		(略)

//2) 选中(key_en_soft), 再ctrl+E
//  中文排序测试
//		(略)

//3) 选中(add_rule), 再ctrl+E
//  选中后添加规则
//		(略)




[1.7] 
SVN--Test
//SVN--Test
TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" 
F:\11CW1352MP_MT6261DM\custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M610_KM_I710_F2.dws


//openCmd 
//cmd	   运行cmd命令 不包含cmd
cmd: cmd




[1.8] 





[1.9] search
base:sbd_test.em  search_bft

//1) 选中(search_version), 再ctrl+E
//  英文排序测试
//		(略)

//2) 选中(search_bft), 再ctrl+E
//  打开参数(bftParam)
//bftParam = 6531E
//  命令:
search_bft  MAINMENU
search_bft  EXTRA

//3) 选中(search_bft), 再ctrl+E
//  打开参数(bftParam)
//bftParam = 9820e
//  命令:
search_bft  lcd/lcd_st7789v2_spi.c
search_bft  values\config.xml
search_bft  statusbar\BaseStatusBar.java 
search_bft  statusbar\BaseStatusBar.java 



[1.10] group 分组
base:sbd_test.em  sr_group

//1) 选中(sr_group), 再ctrl+E
//  
sr_group

//2) 选中(show_menu), 再ctrl+E
//  
show_menu
	
//3) 选中(group), 再ctrl+E
//	 1) mk文件中: 快捷键跳转到宏 (略)
//	 2) em文件中: 显示列表 (略)
//	 3) sr文件中: 快捷键打开文件/文件互关 (略)
//	 4) 其他:
// 打开参数(bftParam)
bftParam = 6531E
命令:
group  mmiidle_cstyle.c
group  mmialarm.c



[1.11] Note快捷键--
快捷键[Ca]:
F11:打开/关闭笔记
F2: 打开选择的路径/文件; 文件名+扩展名
F5: 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make/ctmake/xmake、open、vc、vs08开头; 默认打开文件+关键字(行)


[1.12] 



//f12--Test
//test:
//F12->F12
//F12->F1


//test:
//F12->F2~F11



[1.13] 语法测试
//1.运行语法测试
// --Test格式
test:SiMro
//	代码位置
Save:Macro\sbd_test.em	TestNodeMsg




[1.14] project
//
//MiniTest = project
//bftParam = 6531E
//bftParam = 9820e

//1) 打开项目文件:
pls_press_ctrl_e




[1.15] path--Set
//sbd_base 路径设置
Save:Macro\sbd_base.em

//Macro_Set_Base 路径设置
Save:set\Macro_Set_Base.h

//定制路径设置: (新加的话参考已有路径)
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

//1) 选中(mode_save), 再ctrl+E
//  
//		(略)

//2) 选中(mode_read), 再ctrl+E
//  
//		(略)





[1.18] String
base:sbd_test.em  line_value

//1) 选中(line_value), 再ctrl+E
//  
//		(略)

//2) 选中(string_translate), 再ctrl+E
//  
//		(略)
	

[1.19] Shell
base:sbd_test.em  shell_cmd

//1) 选中(shell_cmd), 再ctrl+E
//  
//		(略)

//2) 选中(shell_SvnLog), 再ctrl+E
//  
//		(略)
	
//3) 选中(shell_SvnDiff), 再ctrl+E
//	打开参数(bftParam, fileParam), 
//bftParam = 6531E
//fileParam = mmiidle_cstyle.c
//fileParam = mmialarm.c



[1.20] API
base:sbd_test.em  API_log

//1) 选中(API_log), 再ctrl+E
//  
//		(略)

//2) 选中(API_struct), 再ctrl+E
//  
//		(略)

//3) 选中(API_val), 再ctrl+E
//  
//		(略)


[1.21] 



[2.1] ctrl+B
//  代码位置
Save:Macro\sbd_ctrl.em  CtrlB
Save:Macro\sbd_f12.em  ShowNoteHelp

//1) 显示提示信息--py/android语法
// --Test--Python
range		(选中后->ctrlB->提示)
reduce_sum	(选中后->ctrlB->提示)
reduce_0	(选中后->ctrlB->不存在, 打开临时文件)
// --Test--Android
implement	(选中后->ctrlB->提示)


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


//4) Info位置
//   搜索关键字:
Save:Help\LangInfo\Macro_Info_Android.h  classpath::
Save:Help\LangInfo\Macro_Info_Python.h



[2.2] ctrl+T
//
Save:Help\Tmp\sbd_Tmp_Show.em
//
Save:Help\Tmp\Tmp_Test.h


[2.3] ctrl+D索引
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


//显示分页
//  ctrlDD后, 多次ctrlD, 不过没有显示总页数，或者:
//  ctrlD3, 显示第1页
//  ctrlD4, 显示第2页
//  ctrlD5, 显示第3页
//  ctrlD6, 显示第4页
Save:Help\DefaultFile\Macro_Node_Num.h

//手动制作索引
//  ctrlU, 添加编号
//  ctrlU, 复制^p^p^p, 添加换行



[2.4] ctrl+C
// auto set
Save:set\Macro_Set_Path_mtk.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD
//

// 不能复制
Save:Help\Tmp\Tmp_space.h
// 复制
Save:Help\Tmp\Tmp_space{cp}.h
// 复制
Save:Help\Tmp\Tmp_space_K220_V18_WD.h
// 复制
Save:Help\Tmp\Tmp_space_K220_V35_WD.h



[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] cmd系列
# 1) test
// 显示cmd命令
test:CustomCmd

//	代码位置
Save:Macro\sbd_test.em	TestNodeMsg


# 2) cmd_w
//	弹窗 + 粘贴 (base路径)
// 格式: 去掉一个head(路径在右)
cmd_w: ping dl.google.com

//	代码位置
Save:Macro\sbd_f11.em	"cmd"


# 3) cmd_s
//	弹窗 + 粘贴 (project路径)
// 格式: 去掉一个head(路径在右)
cmd_s: ping dl.google.com

//	代码位置
Save:Macro\sbd_f11.em	macro^NoteCurCmd


# 4) cmd_f
//	原目录
cmd_f: ren Tmp_Test.h Tmp_Test5.0.h
cmd_f: ren Tmp_Test5.0.h Tmp_Test.h
//	上级目录
cmd_f: ren target\Tmp_Test.h Tmp_Test5.0.h
cmd_f: ren target\Tmp_Test5.0.h Tmp_Test.h
//	全目录
cmd_w: ren D:\Save\SI\Help\Tmp\target\Tmp_Test.h Tmp_Test5.0.h

//	测试
// 格式: 去掉一个head(路径在右边中间)
cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h
cmd_f: ren bak:Tmp_Test5.0.h Tmp_Test6.0.h
cmd_f: ren bak:Tmp_Test6.0.h Tmp_Test.h
cmd_f: ren L:常用图片\* *.jpg

//	代码位置
Save:Macro\sbd_f11.em	macro^NoteInCmd
//  结果
bakPath = Save:Help\Tmp\target
bak:\\

cmd_w: D:&&cd D:\Save\SI\Macro\

# 5) cmd
//	打开基础路径的弹窗 + 粘贴(不通用)
cmd: ping dl.google.com




[3.2] 



[3.3] open(exe)
//打开
open: C:\Program^Files^(x86)\Tencent\QQ\Bin\QQScLauncher.exe


//open	   创建笔记; 打开exe; 打开文件+关键字; 非Macro_开头文件中只能用这个打开文件
open:plutommi\Customer\STMTView.exe

//工具:
//下载工具:
open:D:\Desktop\工具\FlashTool_v5.1548.00\Flash_tool_Beta.exe
//字符串工具:
open:plutommi\Customer\STMTView.exe
//TRACE:
open D:\ProgramDownTool\3.1304.00_Catcher\Catcher.exe


[3.4] 


[3.5] setPath
//set当前项目:
set ...:
sethistory:

setPath old/new:
CurProPath:
setProPath:

//set  
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm


//setPath  
setPath old (在这一行按F5, 开始替换)






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


//1) cp: 复制左到右
cp Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\Tmp_Test_new.h
cp Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\

// 查看结果
Save:Help\Tmp\target\

//	代码位置
Save:Macro\sbd_f11.em	macro^NoteCopyFile


//2) cprow: 按行复制左到右
cprow Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\Tmp_Test_new.c
cprow Save:Help\Tmp\Tmp_space.h Save:Help\Tmp\target\

// 查看结果
Save:Help\Tmp\target\

//	代码位置
Save:Macro\sbd_f11.em	macro^NoteCopyFile
Save:Macro\sbd_f11.em	macro^NoteCopyRowFile


//3) ctrl+C: 复制旧项目到新项目(略)
// 新项目设置:
newPro = Save:Help\
newPro = M610_KM_V2411_SP6000_F2
// 选中后copy:
Save:Help\Tmp\Tmp_Test.h


//4) RAR:(略)
RAR Save:Help\Tmp\RTmp_Test.rar Save:Help\Tmp\RTmp_space.rar
RAR Save:Help\Tmp\Tmp_Test.h
//打开RAR文件:
RAR: Save:Help\Tmp RTmp_Test.rar


[3.9] make
//
Save:Macro\sbd_f11.em	"make"

//make	   运行cmd命令
make M115_JGW_D2_X191_F2 gprs gen_modis


[3.10] ctmake
//ctmake   不运行cmd命令, 只复制
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


[3.11] xmake
//xmake    不运行cmd命令, 只复制
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
// 设置双路径
basePath = D:\project\NLP
base:\\
toolPath = Save:node\Pythons
tool:\\

//1) 第1个路径(base + filename)
nlp_block\_layer.py
python_w nlp_block\_layer.py
//python   nlp_block\_layer.py

//2) 第2个路径(tool + filename)
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
特殊路径
//1. "E:XXX YYY" 获取路径为 "E:XXX"

//cfg--fs
Tool:soft_zip_mp3\BLEPHONE61D_11C_BB.cfg main_region

root->F


[3.24] file
#   --Test文件
//基础路径设置:
basePath = F:\6261D_11C_V33
//basePath = D:\SVN

//跳转到行号:
projects\....bld 30

//通配符搜索:
//	2002/06/07 --> [0-9][0-9][0-9][0-9]/[0-9][0-9]/[0-9][0-9]
projects\....bld [0-9][0-9][0-9][0-9]/[0-9][0-9]/[0-9][0-9]

//搜索文件
Save:Help\Test\Macro_...
Save:Help\Test\...
Save:Help\Test\Tmp_Test.h

//搜索文件，并直接打开保存文件
FileSame:Save:Help\Test\Macro_




[3.25] path

//1) 基础路径设置:
//basePath = Save:node\Pythons
base:\\

// 1.1.存在basePath, 用 basePath + curPath
py_test\file_read_a.txt
py_test\file_read_b.txt

// 1.2.不存在basePath, 用 project path + curPath
py_test\file_read_a.txt


//2) XXX路径--Test
XXXPath = Save:node\Pythons\
XXX:\\
// ok
XXX:install\hello.py
// err
YYY:install\hello.py


//3) 搜索路径下文件
//搜索路径
AsFile:Save:Help\


//4) {cur}
//搜索路径
install\hello{cur}.py
plutommi\Customer\CustResource\{cur}_MMI\
make/{cur}_GSM.mak  XX = A



[3.26] 


[3.27] 空格
//
helpPath = Save:Help

//1) 标准
help:Tmp\Tmp_Test.h
help:Tmp\Tmp_Test.h SLIM

//2) 标准 + 中加一空格(err)
help: Tmp\Tmp_Test.h
help:Tmp\Tmp_Test.h  SLIM

//3) 标准 + 后加一空格
help:Tmp\Tmp_Test.h 
help:Tmp\Tmp_Test.h SLIM 

//4) 标准 + 后加二单词
help:Tmp\Tmp_Test.h  SLIM  FULL

//5) python + 加空格
python_w help:DefaultFile\Macro_z_null.py
python_w  help:DefaultFile\Macro_z_null.py
python_w help:DefaultFile\Macro_z_null.py 
python_w help:DefaultFile\Macro_z_null.py SLIM
python_w help:DefaultFile\Macro_z_null.py SLIM FULL


[3.28] 


[3.29] 


[3.30] 





