
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\ToolsMsg\Macro_svn.h \[1.1\] config
Save:node\ToolsMsg\Macro_svn.h \[1.2\] 清理失败
Save:node\ToolsMsg\Macro_svn.h \[1.3\] path add
Save:node\ToolsMsg\Macro_svn.h \[1.4\] revert
Save:node\ToolsMsg\Macro_svn.h \[1.5\] svn.exe
Save:node\ToolsMsg\Macro_svn.h \[1.6\] revert test
Save:node\ToolsMsg\Macro_svn.h \[1.7\] help
Save:node\ToolsMsg\Macro_svn.h \[1.8\] SVN test
Save:node\ToolsMsg\Macro_svn.h \[1.9\] 
Save:node\ToolsMsg\Macro_svn.h \[1.10\] 
Save:node\ToolsMsg\Macro_svn.h \[1.11\] 
Save:node\ToolsMsg\Macro_svn.h \[1.12\] 
//
Save:node\ToolsMsg\Macro_svn.h \[2.1\] svn error
Save:node\ToolsMsg\Macro_svn.h \[2.2\] 
Save:node\ToolsMsg\Macro_svn.h \[2.3\] 
Save:node\ToolsMsg\Macro_svn.h \[2.4\] 
Save:node\ToolsMsg\Macro_svn.h \[2.5\] 
Save:node\ToolsMsg\Macro_svn.h \[2.6\] 
Save:node\ToolsMsg\Macro_svn.h \[2.7\] 
Save:node\ToolsMsg\Macro_svn.h \[2.8\] 
Save:node\ToolsMsg\Macro_svn.h \[2.9\] 
Save:node\ToolsMsg\Macro_svn.h \[2.10\] 
Save:node\ToolsMsg\Macro_svn.h \[2.11\] 
Save:node\ToolsMsg\Macro_svn.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] config
// config
C:\Users\Administrator\AppData\Roaming\Subversion\config

//	1.svn error:	
//	post of '/svn/!svn/me':500 internal server error
//	svn 500错误 500 Internal Server Error response to POST request
//	//	打开VisualSVN Server GUI。
//	//	右键单击左侧导航窗格根目录下的“VisualSVN Server（域）”，然后选择“属性”。
//	//	在“常规”选项卡下，您将看到“自动调整权限”复选框。
//	//	A.如果未选中此项，请选中它并单击“应用”。 这将停止并重新启动VisualSVN服务，并应解决此问题。
//	//	B.如果选中此项，请取消选中并单击“应用”。 这将停止并重新启动Visual SVN服务。 
//	//	完成后，重新检查该选项并再次单击“应用”。 重新启动服务后，现在应该解决该问题。
//	
//	
//	

// list
*.o *.lo *.la *.al .libs  *.so.[0-9]*  *.pyc *.pyo __pycache__ *.rej *~ #*# .#* .*.swp .DS_Store [Tt]humbs.db





[1.2] 清理失败
//	清理失败:
//	sqlite3 wc.db "select * from work_queue"
//	sqlite3 wc.db "delete from work_queue"




[1.3] path add
//	path add:
//	D:\Program Files\TortoiseSVN\bin\TortoiseProc.exe
//	svn log "F:\6531DA_Btdialer\version"
//	svn log "version"
//
//	参考：http://blog.csdn.net/gwzz1228/article/details/7840666
//	TortoiseProc help
//	TortoiseProc.exe /command:asdf
//	TortoiseProc.exe /command:log /path:".\"
//	TortoiseProc.exe /command:log /path:"F:\6531DA_Btdialer\version"
//	TortoiseProc.exe /command:commit /path:".\"
//	TortoiseProc.exe /command:commit /path:%1
//	TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" /closeonend:0
//	TortoiseProc.exe /command:diff /path:%1 /path2:%2
//	TortoiseProc.exe /command:update /path:"c:\svn_wc\" /closeonend:0
//
"D:\Program Files\TortoiseSVN\bin\TortoiseProc.exe" /command:revert /path:"MS_MMI_Main\source\resource\Common\RING\"  /closeonend:0

//
//
//	E:\save\SI\Cmd\svn_commit.bat "F:\6531DA_Btdialer\version" xx
//	E:\save\SI\Cmd\svn_log.bat  "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\cmd_base.bat  "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\svn_diff.bat  "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\svn_diff.bat  "F:\6531DA_Btdialer\version.h"
"


[1.4] revert
#svn revert [-R] xxx_file_dir

//	svn卡死
//	打开Win7的控制面选，选择“索引选项”，然后选择“修改”，将G:\doc\projects\estar全部反选即可
//
//	1.关闭SVN的cache监视。即关闭tsvncache.exe这个程序对目录的监视。
//	具体操作步骤如下：
//	a) 右击任意目录打开右键菜单,打开"tortoisesvn" => "settings"下的设置窗口
//	b) 找到"icon overlays"的设置项，将"status cache"设置成"none"





[1.5] svn.exe
//windows下没有svn.exe 解决办法
https://blog.csdn.net/pyf09/article/details/78690849
//
将安装在本地硬盘上
整个功能将安装在本地硬盘上
必要时将安装功能
整个功能将不可用



[1.6] revert test
// TortoiseProc
G:\wa01u_svn/MS_MMI_Main/source/resource/mmi_res_240x240/
C:\Program^Files\TortoiseSVN\bin\
"C:\Program Files\TortoiseSVN\bin\TortoiseProc.exe" /command:revert /path:MS_MMI_Main\source\resource\%ressize%\
"C:\Program Files\TortoiseSVN\bin\TortoiseProc.exe" /command:revert /path:./


// svn
#svn revert [-R] xxx_file_dir
svn revert [-R] xxx_file_dir
svn revert -R ./
svn add . --no-ignore --force

"C:\Program Files\TortoiseSVN\bin\svn.exe" revert -R MS_MMI_Main/source/resource/mmi_res_240x240/


//!svn!
set svn="C:\Program Files\TortoiseSVN\bin\svn.exe"
!svn! /command:revert /path:common\nv_parameters\ProductionParam\ProductionParam_uix8910.nvm
!svn! /command:revert /path:lib\modem\


// powershell
svn add . --no-ignore --force
powershell "svn status | ? { $_ -match '^!\s+(.*)' } | % { svn del $Matches[1] }"
powershell "svn revert -R ./"



[1.7] help
//
"C:\Program Files\TortoiseSVN\bin\TortoiseProc.exe" /command:help


[1.8] SVN test
SVN test
TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" 
F:\11CW1352MP_MT6261DM\custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M107_XYZN_S2_4A_WESTERN_F2.dws




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] svn error
1.svn error:	
post of '/svn/!svn/me':500 internal server error
svn 500错误 500 Internal Server Error response to POST request
//	打开VisualSVN Server GUI。
//	右键单击左侧导航窗格根目录下的“VisualSVN Server（域）”，然后选择“属性”。
//	在“常规”选项卡下，您将看到“自动调整权限”复选框。
//	A.如果未选中此项，请选中它并单击“应用”。 这将停止并重新启动VisualSVN服务，并应解决此问题。
//	B.如果选中此项，请取消选中并单击“应用”。 这将停止并重新启动Visual SVN服务。 
//	完成后，重新检查该选项并再次单击“应用”。 重新启动服务后，现在应该解决该问题。


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





