
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1.vc
Save:node\ToolsMsg\Macro_VC.h \[1.1\] 安装、卸载
Save:node\ToolsMsg\Macro_VC.h \[1.2\] Incredibuild
Save:node\ToolsMsg\Macro_VC.h \[1.3\] visual sourcesafe login
Save:node\ToolsMsg\Macro_VC.h \[1.4\] 重新安装VC
Save:node\ToolsMsg\Macro_VC.h \[1.5\] office
Save:node\ToolsMsg\Macro_VC.h \[1.6\] VC6.0 死机
Save:node\ToolsMsg\Macro_VC.h \[1.7\] 补丁
Save:node\ToolsMsg\Macro_VC.h \[1.8\] um.dat
Save:node\ToolsMsg\Macro_VC.h \[1.9\] bridgelayer.cpp
Save:node\ToolsMsg\Macro_VC.h \[1.10\] VC6LineNumberAddin
Save:node\ToolsMsg\Macro_VC.h \[1.11\] 
Save:node\ToolsMsg\Macro_VC.h \[1.12\] excel patch
Save:node\ToolsMsg\Macro_VC.h \[1.13\] .NET Framework/resview
Save:node\ToolsMsg\Macro_VC.h \[1.14\] env
Save:node\ToolsMsg\Macro_VC.h \[1.15\] DLL
Save:node\ToolsMsg\Macro_VC.h \[1.16\] 





[1.1] 安装、卸载
### VC
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


### 无法创建一个dcom用户账号来注册
//
// 如果你不使用Visual Studio Analyzer，
//可以在安装时选择Custom，然后在Enterprise Tools中清除掉Visual Studio Analyzer
//--Enterprise Tools
//--Visual Studio Analyzer
//
//安装慢,取消：
//--Data Access(Enterprise Tools 前一项) 
//--ADO,RDS and OLE DB providers(第1小项)
//
//--tool
//--ole/com object viewer
//
//apemreg.exe可能未正确安装
//

### 
//	User breakpoint called from code at 0x77921ee2


### 卸载
pVC6:\
pVS08:\
file_down:\
file_down:\4^soft^tool\6^vc\vc\VC6.0\pvc6\
//	unins000


### 修改VC6.0堆栈的大小
//	Project——Settings——选 msdevkernel.dll
//	——选项卡 Link——分类 output——Stack allocations——Reserve
//	Reserve → virtual memory, 默认大小是1M=0x100000
//	Commit → physical memory, 应该小于Reserve



[1.2] Incredibuild
//
agent setting-->network-->coordinator
192.168.0.66
//

// An error occurred while preparing for build/clean 
//


[1.3] visual sourcesafe login
// sourcesafe
Tools-->Options--->Source Control 标签



[1.4] 重新安装VC
//1) 没有找到MSDevkernel.dll
//2) Error spawning cl.exe错误
//3) LONG_PTR
//error C2040: 'LONG_PTR' : 'long ' differs in levels of indirection from 'long *'

// 解决:
// 用其他电脑文件覆盖过来:
C:\Program Files (x86)\Microsoft Visual Studio



[1.5] office
//office:
//        需激活，快过期时编不过
//        win7不能装excel2003，ntac不能直接保存excel，需要打开其他表格（同时会打开ntac的表格）；
//        ntac再次保存excel，先关闭excel进程；
//
//xp虚拟机安装：
//        Visual Studio Analyzer：不安装

///   win7系统文件缺失：
//http://www.filediag.com/files/npptools.dll.html



[1.6] VC6.0 死机
// VC6.0 死机
//	调试前先打开一个命令行窗口，输入TASKKILL /F /IM msdev.exe /T，不要回车，把这个窗口最小化。
//	当VC调试中死机时，按ALT+TAB，切换到我们刚才的命令行窗口，按回车，
//	由于键盘响应也不好，可能要多按几次。这样就干掉死了的VC6了。




[1.7] 补丁
// VC 非常慢, 导入慢
//	近做项目vc6.0非常慢，左下角的“Loading Workspace”卡住了。
//	解决办法：删除工程文件中的三个文件，分别是：*.ncb  * .opt   * .plg,这样就可以飞快的打开了。


// 补丁
//	文件版本在6.0.8168.2以前的都最好打上官方的原版补丁。安装之后文件版本如图2所示。
//	英文版补丁地址：
//	http://download.microsoft.com/download/1/9/f/19fe4660-5792-4683-99e0-8d48c22eed74/Vs6sp6.exe 
//	简体中文版补丁地址：
//	http://download.microsoft.com/download/e/c/9/ec94a5d4-d0cf-4484-8b7a-21802f497309/Vs6sp6.exe




[1.8] um.dat
//vb\vb6.0\vss\um.dat may be corrupt 
1. 新建文件夹 C:\Sstemp.
//
C:\Sstemp

2. 打开命令运行窗口进入路径VSS\Win32 (具体路径根据安装vss)
//
D:\Desktop\mydoc\down\6^vc\Visual^Studio^6.0(1)\Visual^Studio^6.0\VSS\Win32

3.输入命令：mkss c:\sstemp
4.输入命令：ddconv c:\sstemp
5.输入命令：ddupd c:\sstemp
6.从C:\SStemp中把Um.dat 和Rights.dat文件复制到C:\Program Files\Microsoft Visual Studio\Common\VSS\data下
//
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\VSS\data
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\

7.最后输入analyze -f命令
8.把C:\SStemp的目录复制到C:\Program Files\Microsoft Visual Studio\Common\VSS\data下


//
// Common\VSS\user.txt not found
// Administrator


//
vb6.0 visual sourcesafe login
//删除 VSS 文件夹
//
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\VSS\

//
把你工程目录下的mssccprj文件删除
//
当你安装vss或者cvs后安装vc就会出现你说的这个内容.点击2个no,yes就可以了


[1.9] bridgelayer.cpp
//
e:\projects\8910_z\ms_mmi_main\source\winsimulator_tp\win_platform\msdevbridge\bridgelayer.cpp



[1.10] VC6LineNumberAddin
// 1. copy
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\MSDev98\AddIns\
// VC6LineNumberAddin.dll
H:\Desktop\tool\file_down\4^soft^tool\6^vc\VC6LineNumberAddin\

// 2. 双击注册
//	VC6LineNumberAddin.reg				(xp)
//	VC6LineNumberAddin_X64.reg		(win7_64)

// 3. 启用
//打开vc6，菜单栏：Tools -> customize -> Add-ins and Macro Files
//选中VC6LineNumber Developer Studio Add-in



[1.11] 

[1.12] excel patch
//
//360装这个，我跟孙工的电脑excel是这样弄好了
msvcr100.dll

// 32
C:\Windows\system32\
// 64
C:\Windows\SysWOW64\



[1.13] .NET Framework/resview
//
make/perl_script/ResGen/
make/perl_script/ResGen/resview.exe
//
SxsTrace Trace -logfile:SxsTrace.etl
//
SxsTrace Parse -logfile:SxsTrace.etl -outfile:C:\SxsTrace.txt

//
//无法解析参考 Microsoft.VC90.MFC,processorArchitecture=“amd64”,publicKeyToken=“1fc8b3b9a1e18e3b”,type=“win32”,version=“9.0.21022.8”

//由于应用程序是在64位环境下编译，到64位环境下找不到对应的C++库导致。
//解决：下载对应的运行环境Microsoft Visual C++ 2008 Redistributable Package (x64)即可
//下载地址：http://www.downza.cn/soft/20816.html
// --360微软VC++运行库合集


//系统执行修复操作，然后查看效果。(无异常)
Dism /Online /Cleanup-Image /ScanHealth
//这条命令将扫描全部系统文件并和官方系统文件对比，扫描计算机中的不一致情况。
Dism /Online /Cleanup-Image /CheckHealth
//这条命令必须在前一条命令执行完以后，发现系统文件有损坏时使用。
DISM /Online /Cleanup-image /RestoreHealth
//这条命令是把那些不同的系统文件还原成官方系统源文件。



[1.14] env
### win10
cmd:sysdm.cpl
// 或者，关于--高级系统设置

### vc6.0 (tool--option--dir)
//--include
//	C:\Program Files (x86)\Microsoft Visual Studio\VC98\atl\include
//	C:\Program Files (x86)\Microsoft Visual Studio\VC98\mfc\include
//	C:\Program Files (x86)\Microsoft Visual Studio\VC98\include
//--lib
//	C:\Program Files (x86)\Microsoft Visual Studio\VC98\mfc\lib
//	C:\Program Files (x86)\Microsoft Visual Studio\VC98\lib
//--MSDevDir (默认无)
//	C:\Program Files (x86)\Microsoft Visual Studio\Common\MSDev98
//--path
//	C:\Program Files (x86)\Microsoft Visual Studio\Common\Tools\WinNT
//	C:\Program Files (x86)\Microsoft Visual Studio\Common\MSDev98\Bin
//	C:\Program Files (x86)\Microsoft Visual Studio\Common\Tools
//	C:\Program Files (x86)\Microsoft Visual Studio\VC98\bin

### vs2010 (实际不用，软件内置)
//--include
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include
//--lib
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\lib
//	C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\Lib
//--VS100COMNTOOLS
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\Tools\
//--MSDevDir (默认无)
//	C:\Program Files (x86)\Microsoft Visual Studio\Common\MSDev98
//--path
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\bin
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\IDE
//	C:\Windows\Microsoft.NET\Framework\v3.5
//	C:\Windows\Microsoft.NET\Framework\v2.0.50727
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\Tools
//	C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcpackages



[1.15] DLL
### vc++6.0 
//--project--setting--常规
//----msdevkernel:不使用MFC
//------否则报错: __imp__KillTimer@8
//----其他:使用MFC作为静态链接库
//------正常
//----其他:使用MFC做为共享的DLL
//------报错: 运行时检查 __RTC_Shutdown __RTC_InitBase


### vs2010
//--project--setting--常规
//------1.使用标准 Windows 库
//------2.使用MFC作为静态链接库
//------3.使用MFC做为共享的DLL
//----msdevkernel:
//------1.
//------2.error LNK1120: 118
//------3.error LNK1120: 118
//----其他:
//------1.
//------2.
//------3.

// 
msdevkernel==>项目==>引用
  ==>通用属性
  ====>框架和引用: .netFramework,Version v4.0
  ==>配置属性
  ====>常规
  ======>配置类型: 静态库(.lib)
  ======>MFC的使用: 使用标准 Windows 库
  ====>C++引用目录
  ======>引用目录: $(VCInstallDir)atlmfc\lib;$(VCInstallDir)lib
  ====>C++
  ======>常规
  ========>调用信息格式: 用于“编辑并继续”的程序数据库 (/ZI)
  ======>代码生成
  ========>启动C++异常: 是 (/EHsc)
  ========>基本运行时检查: 两者(/RTC1，等同于 /RTCsu) (/RTC1)
  ======>预编译头
  ========>预编译头: 不使用预编译头
  ====>库管理器
  ======>常规
  ========>链接库依赖项: 否
  ======>预编译头: 不使用预编译头



// log:
$(IntDir)\$(MSBuildProjectName).log


  ========>调用信息格式: C7 兼容 (/Z7)









[1.16] 


