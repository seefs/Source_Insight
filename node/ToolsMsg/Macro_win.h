
//目录[Num][Ca]:
// 1. win常用
Save:node\ToolsMsg\Macro_win.h \[1.1\] 重装系统
Save:node\ToolsMsg\Macro_win.h \[1.2\] 破解软件
Save:node\ToolsMsg\Macro_win.h \[1.3\] 文件设置
Save:node\ToolsMsg\Macro_win.h \[1.4\] 系统备份
Save:node\ToolsMsg\Macro_win.h \[1.5\] shutdown 杀毒
Save:node\ToolsMsg\Macro_win.h \[1.6\] 网卡win10
Save:node\ToolsMsg\Macro_win.h \[1.7\] 显示设置
Save:node\ToolsMsg\Macro_win.h \[1.8\] win10磁盘100%
Save:node\ToolsMsg\Macro_win.h \[1.9\] 电脑变慢
Save:node\ToolsMsg\Macro_win.h \[1.10\] Game
Save:node\ToolsMsg\Macro_win.h \[1.11\] 
Save:node\ToolsMsg\Macro_win.h \[1.12\] 
// 2. 开发
Save:node\ToolsMsg\Macro_win.h \[2.1\] ResOver
Save:node\ToolsMsg\Macro_win.h \[2.2\] Incredibuild
Save:node\ToolsMsg\Macro_win.h \[2.3\] cygwin
Save:node\ToolsMsg\Macro_win.h \[2.4\] SVN 配置
Save:node\ToolsMsg\Macro_win.h \[2.5\] VC
Save:node\ToolsMsg\Macro_win.h \[2.6\] ResearchDownload
Save:node\ToolsMsg\Macro_win.h \[2.7\] set_path 备份
Save:node\ToolsMsg\Macro_win.h \[2.8\] Usb
Save:node\ToolsMsg\Macro_win.h \[2.9\] InputMethod 输入法, 小狼毫
Save:node\ToolsMsg\Macro_win.h \[2.10\] 
Save:node\ToolsMsg\Macro_win.h \[2.11\] 
Save:node\ToolsMsg\Macro_win.h \[2.12\] 



[1.1] win7输入法
//	开启管理员账号
//	删除其他账号
//	win7输入法
//	收藏夹


[1.2] 破解软件
//	win7激活工具
//	  oem7
//
//	office激活
//	  Microsoft Toolkit.exe
//	  Microsoft.NET.exe


[1.3] 文件设置
//	文件权限不能删除：
//	右击文件→属性→安全→高级→所有者→编辑→点击“将所有者更改为”项下的Administrator
//	确定→退出打开的属性窗口→重新右击进入属性→编辑→
//	点击“组或用户名”项下的Administrator→在权限项下勾上“完全控制”→确定
//	你就完全拥有这个文件的控制权了！


[1.4] 系统备份
//	1 进入GHOST 的操作界面 
//	2 选择菜单到 Local（本机）－－Partition（分区）－－ToImage（备份系统）
//	3 选中硬盘
//	4 选中分区（C盘）
//	5 选择要存放备份文件的位置和文件名称，保存
//	6 选择压缩形式：No表明不紧缩，Fast表明适当紧缩，High高紧缩
//	7 选择“Yes”开始备份
//	8 进度条走到100%，点击“Continue”“Quite”,退出备份软件，自动重启系统


[1.5] shutdown 杀毒
// 20min
shutdown -s -t 1200
// 30min
shutdown -s -t 1800
// 3hour/160min
shutdown -s -t 9600
//
shutdown -a

// 杀毒
https://www.iavira.com/


// 删除 Avira
//   删除avipbb.sys即可!
C:\Windows\System32\drivers\
C:\Windows\System32\drivers\avipbb.sys



[1.6] 网卡win10
//
Qualcomm Atheros Communications Inc.
//
Qualcomm Atheros AR956x wireless network adapter
//
// win10无线网卡被自动关闭
管理--设备管理器--网络适配器--AR956x Wireless--属性--电源管理--取消勾选“允许计算机关闭此设备的电源”
// 或者
--驱动--禁用--启用

// NPcap loopback adapter 没有有效的IP配置



[1.7] 显示设置
// 显示--我的电脑
个性化--主题--桌面图标设置

// 显卡

// win10屏幕不能设置分辨率
设置--系统--关于--设备管理器--显示适配器
win+R--dxdiag 诊断工具 显示
//inter(R)UHD Graphics 下载

// 显卡驱动安装失败
https://www.somode.com/course/24701.html
// 技嘉显卡驱动官网
https://www.gigabyte.cn/Graphics-Card
// 技嘉B660M GAMING DDR4显卡驱动



[1.8] win10磁盘100%
//
https://zhuanlan.zhihu.com/p/90731272

// 关闭IPV6
// 关闭诊断跟踪服务
//   service--diagnostic 1/2/3 service


// win10 错误报告禁用
gpedit.msc-->



[1.9] 电脑变慢
// 浏览 电脑变慢
virus.vbs-writebin.a
// exe dll
Virus.Win32.Sality.I
// 复制繁殖
Virus.Win32.Ramnit.X
// js
virus.js.qexvmc.1

### file
// wa01u_svn
//   tabstrip.htm
tools\DEBUG_TOOL\AudioCalibrator\Equalizer\TI ADC\parameter-data.files

// tool
//   CmdDloader.exe
D:\Desktop\tool\wa03u_git\ResearchDownload_R25.21.1401\ResearchDownload_R25.21.1401\Bin\


[1.10] Game
//war3分辨率--1920*1080
regedit
HEY_CURRENT_USER
	software
		Blizzard Entertainment
			video
				reswidth
				resheight



[1.11] 


[1.12] 


[2.1] ResOver
//ResOver
//	F:\SBD_6531_12C_DA\tools\DEBUG_TOOL\ResOver
//
//	1、ResOver 保存到 excel 时，提示失败；
//	2、结束excel进程
//	3、再打开任一一个excel，关闭，会有一个临时表格
//	4、编辑临时表格，保存到ntac格式


[2.2] Incredibuild
//	并行编译软件：Incredibuild5.0 crack.zip		  ---管理员运行，可能VC没菜单
//	
//	行号：VC6LineNumberAddin.zip
//		  win7下注册，修改注册表路径
//	
//	~：VA_X_Setup2108.exe


[2.3] cygwin
//	添加 unzip
//	C:\CSDTK\cygwin\bin


[2.4] SVN 配置
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
//	清理失败:
//	sqlite3 wc.db "select * from work_queue"
//	sqlite3 wc.db "delete from work_queue"


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
//
//
//	E:\save\SI\Cmd\svn_commit.bat "F:\6531DA_Btdialer\version" xx
//	E:\save\SI\Cmd\svn_log.bat  "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\cmd_base.bat  "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\svn_diff.bat  "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\svn_diff.bat  "F:\6531DA_Btdialer\version.h"


//	svn卡死
//	打开Win7的控制面选，选择“索引选项”，然后选择“修改”，将G:\doc\projects\estar全部反选即可
//
//	1.关闭SVN的cache监视。即关闭tsvncache.exe这个程序对目录的监视。
//	具体操作步骤如下：
//	a) 右击任意目录打开右键菜单,打开"tortoisesvn" => "settings"下的设置窗口
//	b) 找到"icon overlays"的设置项，将"status cache"设置成"none"



[2.5] VC
//	Visual Studio 6.0	 安装：
//			1、product id：全写111...
//			2、file may be corrupt：取消（按多次）
//			3、mmi_menutable.c   error：
//					//注释，再编译，一般像游戏或者是facebook，whatsapp都会报这种错误
//	
//	***** **** ***** 编译模拟器 ***** **** *****
//	打开模拟，设置路径后，右击按start：
//			MS image Files：F:\trunk\SBD_6531_12C_DA\MS_MMI\source\winsimulator_tp\skin\mssim_duallcd_128_160.png
//			MS ini Files：
//			MS resouce Files：build\xxx_builddir\img\
//			如果弹出sim卡设置，可能驱动未更新有问题，或重新编译

//	已停止工作 windows可以联机检查：
//	控制面板→系统和安全→操作中心→问题报告设置， 设置成“自动解决方案” 就可以了
//
//	2 Visual Studio 与此版本的 Windows 之间存在已知的兼容性问题
//	设置不再显示

//office:
//        需激活，快过期时编不过
//        win7不能装excel2003，ntac不能直接保存excel，需要打开其他表格（同时会打开ntac的表格）；
//        ntac再次保存excel，先关闭excel进程；
//
//xp虚拟机安装：
//        Visual Studio Analyzer：不安装

///   win7系统文件缺失：
//http://www.filediag.com/files/npptools.dll.html



[2.6] ResearchDownload
//	刷机：
//			SBD_6531_12C_DA\build\X601_LZ_S8_ZX_F4_builddir\img\X601_LZ_S8_ZX_F4.pac
//	ResearchDownload:
//				1、下载取消校验：set->backup
//	6531E下载工具:
//			   \\192.168.2.118


[2.7] set_path 备份
//	环境变量备份 set_path
//	
//	C:\Perl\bin;
//	C:\Program Files\ARM\bin\win_32-pentium;
//	%SystemRoot%\system32;
//	%SystemRoot%;
//	%SystemRoot%\System32\Wbem;
//	%SYSTEMROOT%\System32\WindowsPowerShell\v1.0\;
//	C:\Program Files\TortoiseSVN\bin;C:\Program Files\ARM\RDI\Deprecated\1.3.1\1\windows;
//	C:\Program Files\ARM\RVCT\Programs\3.1\569\win_32-pentium;
//	C:\Program Files\ARM\Utilities\FLEXlm\10.8.5.0\1\win_32-pentium;
//	C:\Program Files (x86)\Xoreax\IncrediBuild;
//	C:\Program Files (x86)\Microsoft SQL Server\90\Tools\binn\;
//	%cygwin%;
//	%vc6.0%\Common\Tools\WinNT;
//	%vc6.0%\Common\MSDev98\Bin;
//	%vc6.0%\Common\Tools;
//	%vc6.0%\VC98\bin


[2.8] Usb
//
C:\Windows\inf\setupapi.dev.log


[2.9] InputMethod
// InputMethod 去广告
// 1) 首先从官网下载并安装最新的万能五笔软件
// 2) 打开
C:\Users\Administrator\AppData\LocalLow
//  删除两个文件目录:
C:\Users\Administrator\AppData\LocalLow\BubblesPop
C:\Users\Administrator\AppData\LocalLow\WindowPop
// 3) 安装目录
C:\Program^Files^(x86)\WanNengWBInput\
C:\Program^Files^(x86)\WanNengWBInput\10.0.4.10418
// 寻找 WnMoniter.exe，进行改名或者删除
新建一个文本文件并改名为WnMoniter.exe，设置道只读属性。


// 小狼毫
Save:node\C\cfg\Macro_c_list.h  __rime__


[2.10] 



[2.11] 


[2.12] 









