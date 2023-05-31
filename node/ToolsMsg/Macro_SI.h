

//目录
Save:node\ToolsMsg\Macro_SI.h \[1.1\] 安装/设置
Save:node\ToolsMsg\Macro_SI.h \[1.2\] 常用设置
Save:node\ToolsMsg\Macro_SI.h \[1.3\] 搜索
Save:node\ToolsMsg\Macro_SI.h \[1.4\] 
Save:node\ToolsMsg\Macro_SI.h \[1.5\] SI崩溃问题---------
Save:node\ToolsMsg\Macro_SI.h \[1.6\] 插件
Save:node\ToolsMsg\Macro_SI.h \[1.7\] 自定义命令/菜单
Save:node\ToolsMsg\Macro_SI.h \[1.8\] 
Save:node\ToolsMsg\Macro_SI.h \[1.9\] ShellExecute
Save:node\ToolsMsg\Macro_SI.h \[1.10\] 变量



[1.1] 安装/设置
### SI4.0 安装
//	1) 安装包文件、步骤:
//		安装包\sourceinsight4084-setup.exe         # 安装exe
//		安装包\sourceinsight4.exe                  # 替换安装目录下的文件
//		安装包\si4.pediy.lic                       # 打开exe 导入证书

//	2) Setting路径
//	  1、保存配置、修改默认Setting路径
//		Options -> Style properties->Load->E:\save\Source Insight\SettingsXml
//		Options -> Preferences -> Folders->E:\save\Source Insight
//
//	  2、批处理:
//		project->add project Files->E:\save\SI3.5->同步文件
//		project->add project Files->E:\save\SI4.0->同步文件    # 同时打开运行批处理有问题
//
//	  3、其他:
//		用.h, .txt颜色单一


### 下载并覆盖配置文件 __cfg__
// 配置:
//   字体、编码、布局;
//	 快捷键，菜单;
// 下载命令:
git clone https://github.com/seefs/Source_Insight_4_0_cfg

// 更新后覆盖这个目录
...\Save\Source Insight 4.0\Settings
// (举例)


### 同步宏文件
// 同步:
//   初次配置需要同步
//   修改宏文件，新加函数也要同步，否则报函数找不到
// 步骤:
//   切换到base project下：
//		菜单 -> project -> 打开project -> base project 
//   添加宏文件:
//		菜单 -> project -> 添加或移除项目文件 -> 添加
//		...\Macro，选所有文件, 
//   其他文件不用添加
//   同步:
//		菜单--project -> 同步文件
// 验证
//   宏配置OK，检查快捷键是否能用:
//		ctrl+b, 即打开临时文件--simple_tmp_b.h
//		f2, 打开当前目录


### 设置宏文件
// Save 路径设置
Save:Help\Other\Macro_Help_SI.h  __set__


[1.2] 常用设置
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



[1.3] 搜索
### 搜索
//	lookup refercences:
//		1、Simple String
//		2、Regular Expression
//		3、Keyword Expression
//		4、Look Up Reference	 SI4.0用不了
//	search result option:
//		1、Include name of container function of clase    不搜索miss文件

### 搜索速度
// 1.减6000个xml文件：10s=>2s


[1.4] 
// 通配符替换
patch:node\Help\Macro_node_Help.h  __Re__


[1.5] SI崩溃问题
//
C:\Users\Administrator\
C:\Users\{Admin}\AppData\Local\Temp\
//	删除以TFX开头的所有临时文件。


// xml翻译文件乱码:
// 翻译文件UTF-8正常打开
// 不能改文件格式, 没什么办法


// win10文件列表死机：
// 更新最新版本 [还是死机]


// source insight 一直 checking for modified files导致卡顿 [未验证]
Option → Preferences → General → Background synchronization every [] minutes，取消该选项



[1.6] 插件

### SI3.5插件
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


### 有趣的格式

$time$

//https://www.sourceinsight.com/pub/languages/
// --shell--style
//https://blog.csdn.net/fangye945a/article/details/108706033


[1.7] 自定义命令/菜单
### 自定义命令
//	Options->Custom Command1. Add、new Commands2. Run 、填入待执行命令行，	2.1  F:; cd F:/Base/command; open_build.bat  %j 注释：%j为当前工程目录
//	   2.2	explorer /select,%f
//	
//	
//	注释：打开文件
//	3. Dir 框、执行命令行时应处的目录，如不填，以源代码文件所在目录为命令执行目录
//	4. 勾选 Output 框的 Capture Output 、输出被捕捉，如果勾选 Paste Output ，输出被粘贴
//	   勾选 Control Group 框中的 Save Files First 、 SIS 会在运行命令前先检查文件是否保存    勾选 Control Group 框中的 Pause When Done 、 SIS 会在命令结束后暂停、方便检查	勾选 Source Links in Output 框中的 Parse Source Links

### 自定义菜单
//	***** **** ***** 自定义菜单 ***** **** *****
//	open base:
//	Options->Menu->OpenPath 	->Menu/work->Insert->key/F2    select next window
//	Options->Menu->TwoWordFind ->Menu/work->Insert->key/F5
//	Options->Menu->Goto 	  ->Menu/work->Insert->key/F5
//	-------------------------------------------- 可选：还有用的


[1.8] 


[1.9] ShellExecute
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

//%j 无法识别
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





[1.10] 变量

### __node__
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


### modifier charac-ters
//	***** **** ***** modifier charac-ters ***** **** *****
//	Character	Expands to				Example
//	%o		   for all open files		%f%o
//	%m		   for all modified files %f%m


### system path 
// 预定义路径变量
//	***** **** ***** path ***** **** *****
//	%APPDATA_DIR% %DESKTOP_DIR% %LOCAL_APPDATA_DIR% %MYDOCUMENTS_DIR% 
//  %PROGRAM_DIR% %PROGRAMFILES_DIR% %PROGRAMFILESX86_DIR% %PROJECT_DATA_DIR% 
//  %PROJECT_SOURCE_DIR% %PROJECT_NAM%E %SHARED_DOCUMENTS_DIR% 
//  %SOURCEINSIGHT_USER_DIR% %TEMP_DIR% %WINDOWS_DIR%






