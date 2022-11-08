

//目录
// 1. SI常用问题
Save:node\ToolsMsg\Macro_SI.h \[1.1\] 文件总数
Save:node\ToolsMsg\Macro_SI.h \[1.2\] 文件过滤-----------MTK
Save:node\ToolsMsg\Macro_SI.h \[1.3\] 文件过滤-----------SPDE
Save:node\ToolsMsg\Macro_SI.h \[1.4\] 通配符替换
Save:node\ToolsMsg\Macro_SI.h \[1.5\] SI崩溃问题---------
Save:node\ToolsMsg\Macro_SI.h \[1.6\] 
Save:node\ToolsMsg\Macro_SI.h \[1.7\] 安装
Save:node\ToolsMsg\Macro_SI.h \[1.8\] 有趣的格式
Save:node\ToolsMsg\Macro_SI.h \[1.9\] 
// 2. 
Save:node\ToolsMsg\Macro_SI.h \[2.1\] ShellExecute-------
Save:node\ToolsMsg\Macro_SI.h \[2.2\] 
Save:node\ToolsMsg\Macro_SI.h \[2.3\] modifier charac-ters
Save:node\ToolsMsg\Macro_SI.h \[2.4\] path
Save:node\ToolsMsg\Macro_SI.h \[2.5\] 搜索
Save:node\ToolsMsg\Macro_SI.h \[2.6\] SI3.5插件
Save:node\ToolsMsg\Macro_SI.h \[2.7\] 自定义命令
Save:node\ToolsMsg\Macro_SI.h \[2.8\] 自定义菜单
Save:node\ToolsMsg\Macro_SI.h \[2.9\] 常用设置
Save:node\ToolsMsg\Macro_SI.h \[2.10\] 
Save:node\ToolsMsg\Macro_SI.h \[2.11\] config_all
Save:node\ToolsMsg\Macro_SI.h \[2.12\] 




[1.1] 文件总数
//f1->G 显示项目中一种文件类型数量, 空行显示文件总数
//	mk
//	//==>
//	mk: 5373
//
//	java
//	//==>
//	java: 38179


[1.2] 文件过滤-----------MTK
###
//====同步时，不要点自动添加文件====

# __SI_JAVA__
//
Source Insight 导入.c .h搜索会卡, 可只导入java文件


# __SI_MTK__
// 过滤:
//----------------------------------------------
//                  61M         60D        60D
// 总数               000       25981        000
// 剩余               000       22807        000
// 减少               000        3174        000
//----------------------------------------------
//  \tst\           142         000        000
// *CustResDef.h    000         920        000
// *.txt            000        1448        000
// *ref_list.txt    820         915        000
// *.html           820         000        000
// *.xml            200         807        000
// *.hpp            200         000        000

// 过滤---不掉:
// *Themecomponents.h K1*_MMM
//    Themecomponents.h K99M_F02_PHILIPS_EH_MMI
// *ThemeRes.c


// 过滤--61M_zyf:



[1.3] 文件过滤-----------SPDE

# __SI_SPDE__
### 过滤--107
// 总数                12364  
// 剩余                12364  
// 减少                 0  
//--------------------------
// Third-party         488
// external            170
// ARM                 164
// BASE                204
// SPDE_PRJ           3274 (先输入*.xml, 再输入 SPDE_PRJ, 不会删mk)
// winsimulator_tp     270
// *.txt               114 

// 过滤---不掉:


### 过滤--8910



[1.4] 通配符替换
//	old:
//	\(.*\)、
//	new:
//	[1.\1] 
//	// .*, .*, .* 分别 \1, \2, \3




[1.5] SI崩溃问题
C:\Users\Administrator\AppData\Local\Temp
//	删除以TFX开头的所有临时文件。


// xml翻译文件乱码:
// 翻译文件UTF-8正常打开
// 不能改文件格式, 没什么办法


[1.6] 




[1.7] 安装
//	安装
//	1 安装 sourceinsight4084-setup.exe
//	2 用sourceinsight4.exe替换安装目录下的文件
//	3 打开sourceinsight4.exe，导入证书si4.pediy.lic

//Setting路径
//	1、保存配置、修改默认Setting路径
//	Options -> Style properties->Load->E:\save\Source Insight\SettingsXml
//	Options -> Preferences -> Folders->E:\save\Source Insight
//
//	2、批处理:
//	project->add project Files->E:\save\SI3.5->同步文件
//	project->add project Files->E:\save\SI4.0->同步文件    # 同时打开运行批处理有问题
//
//	3、其他:
//	用.h, .txt颜色单一


[1.8] 有趣的格式

$time$

//
//https://www.sourceinsight.com/pub/languages/
// --shell--style
//https://blog.csdn.net/fangye945a/article/details/108706033


[1.9] 




[1.10] 




[2.1] ShellExecute
//
https://www.sourceinsight.com/doc/v4/userguide/index.html#t=Manual%2FMacro_Language%2FShellExecute_sVerb_sFile_sExtraParams_sWorkingDirectory.htm&rhsearch=shell&rhsyns=%20&rhhlterm=shell
https://www.sourceinsight.com/doc/v4/userguide/index.html#rhhlterm=shell&rhsyns=%20&t=Manual%2FMacro_Language%2FShellExecute_sVerb_sFile_sExtraParams_sWorkingDirectory.htm


//	ShellExecute
//	ShellExecute("", "iexplore", "", "", 1)
//	ShellExecute("", "iexplore somefile.htm", "", "", 1)
//	ShellExecute("find",  filespec, "", "", 1)
//	ShellExecute("explore", "C :\Documents and Settings", "", "", 1)
//	ShellExecute("open", "http://www.somedomain.com", "", "", 1)
//	ShellExecute("open", "somefile.doc", "", "", 1)
//	
//	ShellExecute("explore", "%j", "", "", 1)

// --参数
// ----p1:Shell 操作
// ----p2:有效路径, 复杂路径名周围使用双引号
// ----p3:最终程序参数
// ----p4:运行目录。如果为空，则使用项目主目录。
// ----p5:窗口的大小和状态。有效值为：1 = 正常，2 = 最小化，3 = 最大化


// --Windows Shell API 文档
// ShellExecute
https://docs.microsoft.com/en-us/windows/win32/api/shellapi/nf-shellapi-shellexecutea


// --test
Save:Help\Macro_Note_Test.h  __Shell__



[2.2] node 
//	**** **** ***** node ***** **** *****
//	 Character Expands to																						Example 		   
//	%f		   full path name of the current file * 												c:\myproj\file.c
//	%r		   path name of current file rela-tive to the project source direc-tory *		 file.c
//	%n		   leaf name of the current file *															 file.c 									 
//	%d		   directory path of the current file												 c:\myproj
//	%h		   directory path of current file without the drive letter							\myproj
//	%b		   leaf name of current file w/o extension *									   file 									 
//	%e		   extension of the current file													c
//	%c		   drive letter of the current file 										  c:
//	%p		   the current project name 												  c:\myproj\myproj
//	%j		   the source directory of the cur-rent project 										c:\myproj
//	%J		   the data directory of the current project											 C:\Documents and Set-tings\Jim Smith\Docu-ments\Source Insight 4.0\Projects\Base
//	%v		   the drive letter of the current project's source directory							  c:
//	%o		   leaf name of the project without path										  myproj
//	%l		   the current line number														any number
//	%w		   first word in the selection, or the word under the cursor						  any word
//	%s		   name of a temp file where the current selection is saved while the custom command runs.		   d:\tmp\vt0004.
//	%a		   the current date 																   2005/12/2
//	%t		   the current time 																		 8:23
//	%1 - %9 		user is prompted for arguments													any strings


[2.3] modifier charac-ters
//	***** **** ***** modifier charac-ters ***** **** *****
//	Character	Expands to				Example
//	%o		   for all open files		%f%o
//	%m		   for all modified files %f%m


[2.4] path 
	
//	***** **** ***** path ***** **** *****
//	%APPDATA_DIR% %DESKTOP_DIR% %LOCAL_APPDATA_DIR% %MYDOCUMENTS_DIR% %PROGRAM_DIR% %PROGRAMFILES_DIR% %PROGRAMFILESX86_DIR% %PROJECT_DATA_DIR% %PROJECT_SOURCE_DIR% %PROJECT_NAM%E %SHARED_DOCUMENTS_DIR% %SOURCEINSIGHT_USER_DIR% %TEMP_DIR% %WINDOWS_DIR%


[2.5] 搜索
//	***** **** ***** 搜索 ***** **** *****
//	lookup refercences:
//		1、Simple String
//		2、Regular Expression
//		3、Keyword Expression
//		4、Look Up Reference	 SI4.0用不了
//	search result option:
//		1、Include name of container function of clase    不搜索miss文件


[2.6] SI3.5插件
//	安装说明:
//	
//	解压msimg32.dll sihook.dll siutf8.dll 到Source Insight 3.X安装目录
//	
//	msimg32.dll 引导程序(*)
//	sihook.dll 标签插件(M)
//	siutf8.dll utf8插件(M)
//	
//	功能说明:
//	1,增加SI多标签功能
//	2,修复SI当光标在中文字符上按CTRL+F时崩溃的问题.(感谢看雪的封心锁爱)
//	3,utf8编码支持.
//	
//	已知问题:
//	当utf8编码文件在外部改变时,SI不会检测到更新.需要重新关闭SI再打开.


[2.7] 自定义命令
//	Options->Custom Command1. Add、new Commands2. Run 、填入待执行命令行，	2.1  F:; cd F:/Base/command; open_build.bat  %j 注释：%j为当前工程目录
//	   2.2	explorer /select,%f
//	
//	
//	注释：打开文件
//	3. Dir 框、执行命令行时应处的目录，如不填，以源代码文件所在目录为命令执行目录
//	4. 勾选 Output 框的 Capture Output 、输出被捕捉，如果勾选 Paste Output ，输出被粘贴
//	   勾选 Control Group 框中的 Save Files First 、 SIS 会在运行命令前先检查文件是否保存    勾选 Control Group 框中的 Pause When Done 、 SIS 会在命令结束后暂停、方便检查	勾选 Source Links in Output 框中的 Parse Source Links

[2.8] 自定义菜单
//	***** **** ***** 自定义菜单 ***** **** *****
//	open base:
//	Options->Menu->OpenPath 	->Menu/work->Insert->key/F2    select next window
//	Options->Menu->TwoWordFind ->Menu/work->Insert->key/F5
//	Options->Menu->Goto 	  ->Menu/work->Insert->key/F5
//	Options->Menu->AddParam    ->Menu/work->Insert->key/F6
//	Options->Menu->Rule 	  ->Menu/work->Insert->key/F6
//	Options->Menu->Tools	   ->Menu/work->Insert->key/F7
//	Options->Menu->CfgPreview  ->Menu/work->Insert->key/F9
//	Options->Menu->Search	   ->Menu/work->Insert->key/F9
//	Options->Menu->Win		  ->Menu/work->Insert->key/F10
//	Options->Menu->Tree    ->Menu/work->Insert->key/F11
//	Options->Menu->ShowNote    ->Menu/work->Insert->key/F12
//	Options->Menu->testMacro, 选择command
//	-------------------------------------------- 可选：还有用的


[2.9] 常用设置
//	***** **** ***** 常用设置 ***** **** *****
//	1、文件类型
//	options->Document type:
//	1.c file:加*.bat	  # 颜色区分
//	2.make file:加*.mak
//	3.new file:加*.ss
//	
//	2、字体大小、行号、中文
//	options->Preferences->font
//	options->Document type->Screen font
//	options->Preferences->File->Default code->System default(Windows ANSI)
//	
//	3、SI 3.5窗口
//	options->Preferences->Show
//	(选项重叠...)
//	
//	4、SI 4.0窗口
//	options->Preferences->Show->Overviews->close 
//	overview->右键->hide
//	view->overview->close
//	
//	title->hide
//	view->stutas bar->close
//	view->mono font->close(Alt+F12)
//	view->panel->project file, 其他关闭
//	view->panel->context windows->Tool->Jump to definition,恢复默认窗口
//	
//	5、其他
//	F8, shift+F8都改成高亮


[2.10] 




[2.11] config_all
//	1.
//	微软雅黑
//	宋体
//	2.
//	psize="9" fpfamily="0" charset="1"
//	psize="12" fpfamily="2" charset="134"
//	3.
//	ShowFileDate="1"
//	ShowFileSize="1"
//	ShowDirName="1"
//	ShowMetrics="1"
//	
//	ShowFileDate="0"
//	ShowFileSize="0"
//	ShowDirName="0"
//	ShowMetrics="0"
//	4.
//	SearchMethod="Regular Expression"
//	SearchMethod="Look Up Reference"
//	5.
//	psize="9" fpfamily="0"
//	psize="12" fpfamily="49"
//	6.
//	ShowLineNumbers="0"
//	ShowLineNumbers="1"
//	7.
//	<item Command="Goto" Keycode="F5" Allocated="1" />
//	<item Command="Rule" Keycode="F6" Allocated="1" />
//	<item Command="Tools" Keycode="F7" Allocated="1" />
//	<item Command="Search" Keycode="F9" Allocated="1" />
//	<item Command="Win" Keycode="F10" Allocated="1" />
//	<item Command="Tree" Keycode="F11" Allocated="1" />
//	
//	8.
//	<Menu
//	Name="Work"
//	>
//	<item Command="OpenPath" Allocated="1" />
//	<item Command="Goto" Allocated="1" />
//	<item Command="Rule" Allocated="1" />
//	<item Command="Tools" Allocated="1" />
//	<item Command="Search" Allocated="1" />
//	<item Command="Win" Allocated="1" />
//	<item Command="Tree" Allocated="1" />
//	<item Command="ShowNote" Allocated="1" />
//	<item Command="AddParam" Allocated="1" />
//	</Menu>
//	
//	9.
//	<OverviewOptions
//	IsVisible="0"
//	IsLocked="0"
//	ShowCurFunction="1"
//	ShowFunctions="0"
//	ShowBookmarks="1"
//	ShowSourceTips="1"
//	ShowSelection="1"
//	ShowChangeMarks="1"
//	ShowNestingLines="1"
//	
//	<OverviewOptions
//	IsVisible="0"
//	IsLocked="0"
//	ShowCurFunction="0"
//	ShowFunctions="0"
//	ShowBookmarks="0"
//	ShowSourceTips="0"
//	ShowSelection="0"
//	ShowChangeMarks="0"
//	ShowNestingLines="0"
//	10.
//	<GeneralDisplayOptions
//	StatusBar="0"
//	MonoFontView="1"
//	EnableOverviews="0"
//	11.
//	<DisplayColors>
//	<Item Name="ApplicationBackground" Color="#808080" />
//	
//	<FilePreferences
//	DefaultEncoding="0"


[2.12] 










