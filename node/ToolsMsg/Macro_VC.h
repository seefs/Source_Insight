
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1.vc
Save:node\ToolsMsg\Macro_VC.h \[1.1\] 安装
Save:node\ToolsMsg\Macro_VC.h \[1.2\] Incredibuild
Save:node\ToolsMsg\Macro_VC.h \[1.3\] 
Save:node\ToolsMsg\Macro_VC.h \[1.4\] 重新安装VC
Save:node\ToolsMsg\Macro_VC.h \[1.5\] office
Save:node\ToolsMsg\Macro_VC.h \[1.6\] VC6.0 死机
Save:node\ToolsMsg\Macro_VC.h \[1.7\] 补丁
Save:node\ToolsMsg\Macro_VC.h \[1.8\] um.dat
Save:node\ToolsMsg\Macro_VC.h \[1.9\] bridgelayer.cpp
Save:node\ToolsMsg\Macro_VC.h \[1.10\] VC6LineNumberAddin
Save:node\ToolsMsg\Macro_VC.h \[1.11\] vc2010
Save:node\ToolsMsg\Macro_VC.h \[1.12\] excel patch
// 2.vs2008
Save:node\ToolsMsg\Macro_VC.h \[2.1\] 显示行号
Save:node\ToolsMsg\Macro_VC.h \[2.2\] cl
Save:node\ToolsMsg\Macro_VC.h \[2.3\] ntdll
Save:node\ToolsMsg\Macro_VC.h \[2.4\] regsvr32
Save:node\ToolsMsg\Macro_VC.h \[2.5\] 
Save:node\ToolsMsg\Macro_VC.h \[2.6\] 
Save:node\ToolsMsg\Macro_VC.h \[2.7\] 
Save:node\ToolsMsg\Macro_VC.h \[2.8\] 
Save:node\ToolsMsg\Macro_VC.h \[2.9\] 
Save:node\ToolsMsg\Macro_VC.h \[2.10\] 
Save:node\ToolsMsg\Macro_VC.h \[2.11\] 
Save:node\ToolsMsg\Macro_VC.h \[2.12\] 




[1.1] 安装
VC
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






[1.2] Incredibuild
//
agent setting-->network-->coordinator
192.168.0.66


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
//
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\MSDev98\AddIns



[1.11] vc2010
//
之前有提过CQ，是可以支持的，有个指令，你们可以查下



[1.12] excel patch
//
//360装这个，我跟孙工的电脑excel是这样弄好了
msvcr100.dll



[1.13] 




[1.14] 




[1.15] 




[2.1] 显示行号
//菜单－工具－选项
//在新窗口中左面树菜单中展开“文本编辑器”，
//找到子项“所有语言”在右面的面板中 显示的行号前面打勾


[2.2] cl
// baidu:解决cl不是内部命令，也不是外部命令的方法
// cl不是内部命令，也不是外部命令
//添加PATH变量：
C:\Program^Files^(x86)\
C:\Program^Files^(x86)\Microsoft Visual Studio 12.0\VC\bin;
C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\bin



[2.3] ntdll
// baidu:解决VS2019 ntdll.dll下载符号失败的问题
//mtk ntdll
//1. 点击工具->选项，在这里添加符号服务地址：
//  https://msdl.microsoft.com/download/symbols

// 缓存目录
//  F:\NTDLL\X86\Symbols

//
//https://download.microsoft.com/download/D/1/9/D196C4F3-FC5B-48D2-A5D9-D3D42CE5F4F0/Windows_Rs1.14393.0.160715-1616.X86FRE.Symbols.msi


//
C:\Windows\System32\
C:\Windows\System32\ntdll.dll





[2.4] regsvr32
//
// regsvr32 msi.dll
//   “msi.dll”已加载


//
// regsvr32 ntdll.dll
//   模块“ntdll.dll”已加载,但找不到入口点DLLRegisterServer






[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 




