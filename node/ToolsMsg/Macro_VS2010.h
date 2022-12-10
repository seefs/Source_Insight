
基础路径设置:
//basePath = 

//目录:
// 1. vc2010
Save:node\ToolsMsg\Macro_VS2010.h \[1.1\] 安装、卸载
Save:node\ToolsMsg\Macro_VS2010.h \[1.2\] error build
Save:node\ToolsMsg\Macro_VS2010.h \[1.3\] error run
Save:node\ToolsMsg\Macro_VS2010.h \[1.4\] code
Save:node\ToolsMsg\Macro_VS2010.h \[1.5\] pageheap
Save:node\ToolsMsg\Macro_VS2010.h \[1.6\] Windbg--gflags
Save:node\ToolsMsg\Macro_VS2010.h \[1.7\] Application Verifier
Save:node\ToolsMsg\Macro_VS2010.h \[1.8\] WinDbg
Save:node\ToolsMsg\Macro_VS2010.h \[1.9\] Dependencies------查看依赖dll
Save:node\ToolsMsg\Macro_VS2010.h \[1.10\] build
Save:node\ToolsMsg\Macro_VS2010.h \[1.11\] set
Save:node\ToolsMsg\Macro_VS2010.h \[1.12\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.13\] 模拟器联网
Save:node\ToolsMsg\Macro_VS2010.h \[1.14\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.15\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 安装、卸载
//
之前有提过CQ，是可以支持的，有个指令，你们可以查下
//
make p=xxx m=s.. VS2010=1 -j4
// 密码：yuuu
http://pan.baidu.com/s/1bpB6szl
// 破解
https://blog.csdn.net/weixin_39381833/article/details/78078343
//
//	[Product Key]
//	YCFHQ9DWCYDKV88T2TMHG7BHP


//vs2010禁用安全检查
// ---


// 激活
//YCFHQ-9DWCY-DKV88-T2TMH-G7BHP


// framework
// --v2.0.50727
// --v3.5
// --v4.8(有更高版本装不上)
//	Windows XP装3.5、4.0Q;
//	Windows 7 SP1装4.79;
//	Windows 8装3.5、4.6.1;
//	Windows 8.1装3.5、4.7;
//	Windows 10装3.5、4.7;
//	Windows 10 1703装3.5;
https://go.microsoft.com/fwlink/?linkid=0


[1.2] error

//--源代码管理 - 无法访问数据库
//	我在VS2010（不是我的项目）中打开了一个解决方案，并得到了相同的消息。
//	它给了我选择临时使用解决方案不受控制，或永久删除源控件关联绑定。 
//	我选择了永久删除源控件关联绑定的选项。 现在打开您的项目/解决方案。
//	转到文件 - >源代码管理 - >更改源代码管理 选择您的项目，然后单击绑定。 
//	现在绑定正常在线工作。 这就是我能够解决这个问题的方法。希望能帮助到你。    

//
ms_mmi_main\source\winsimulator_tp\win_platform\msdevkernel\h\stdafx.h
//	#ifdef WIN32
//	#pragma comment(lib, "devps.lib")
//	#endif

### ntdll.dll
//	“MSDev.exe”: 已加载“G:\T1072\build\ums9117_240X320BAR_48MB_S89T_BYD_L66A_IN_debug_builddir\win\bin\MSDev.exe”，Cannot find or open the PDB file
//	“MSDev.exe”: 已加载“C:\Windows\SysWOW64\ntdll.dll”，Cannot find or open the PDB file


### 
//MSDev.exe 中的 0x1187037f (msdevkernel.dll) 处有未经处理的异常: 

### 
// 0xC0000005: 执行位置 0x 00000000
Appkernel:c\mmi_resource.c  ResFree


[1.3] error run

### 周围的堆栈已损坏
Run-Time Check Failure #2 - Stack around the variable 'top_offset' was corrupted.
//
app:sms\c\mmismscb_wintab.c  void^InitCBChannelList


###
// 	msdevkernel.dll!LIST_DEL()  行 125 + 0xb 字节	C


### 不能调试
// 前几天我的vs2010突然不能调试了。后来找了很多的解决方案都不能解决问题。
//	1. 删除所有的bin, debug
//	2. 重建工程。
//	3. 重新安装Silverlight的开发包。
//	还是不行。最后是删除了
//	C:\Windows\Microsoft.NET\Framework\v4.0.30319\Temporary ASP.NET Files
//	下面的所有临时文件。
C:\Windows\Microsoft.NET\Framework\v4.0.30319\
C:\Windows\Microsoft.NET\Framework\v4.0.30319\xxx\ #没这个文件





[1.4] code

// simulator param
MS_MMI_Main\source\winsimulator_tp\win_platform\MSDevBridge\MSDevBridge_Mod.dsp



[1.5] pageheap
//
Win10不兼容中文版


[1.6] Windbg--gflags
// pageheap
https://www.softpedia.com/get/System/System-Miscellaneous/PageHeap.shtml

// Download Debugging Tools for Windows
//--Use the download link on the Windows SDK (1.1G)
https://learn.microsoft.com/en-us/windows-hardware/drivers/debugger/debugger-download-tools


### 使用
// 1.gflags.exe
D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\
D:\Program Files (x86)\Windows Kits\10\Debuggers\x64\
open:D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x86\gflags.exe


// 2.命令行
//
gflags –p /enable MSDev.exe /full 
gflags –p /enable MSDev.exe /full /dlls msdevkernel.dll
gflags –p /enable MSDev.exe /full /dlls verifier.dll
gflags –p /enable APP01.exe /full 

// regedit
https://blog.csdn.net/nui111/article/details/39892183
//
[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\MSDev.exe]
//	"GlobalFlag"=dword:0x02000000
//	"PageHeapFlags"=dword:0x403
//	"PageHeapTargetDlls"=str:msdevkernel.dll


//	"GlobalFlag"=dword:00000100
//	"VerifierFlags"=dword:00040007
//	"PageHeapFlags"=dword:00000003


// 3.窗口
https://blog.csdn.net/weitaming1/article/details/83992048
// Debugger: vsjitdebugger.exe



[1.7]  Application Verifier
//  Installing
https://learn.microsoft.com/en-us/windows-hardware/drivers/devtest/application-verifier
https://techcommunity.microsoft.com/t5/iis-support-blog/debugging-heap-corruption-with-application-verifier-and/ba-p/376844
//
https://community.sophos.com/intercept-x-endpoint/f/discussions/99935/visualstudio-debugging-with-appverifier-enabled-impossible-due-to-hmpalert-dll-crashing-application-immediately


// 代码验证工具
https://blog.csdn.net/lzfly/article/details/5379766


// 注册表项权限
Image File Execution Options


### 使用
// 1.AppVerif.exe
open:C:\Windows\System32\appverif.exe
// --从这打开
C:\ProgramData\Microsoft\Windows\Start^Menu\Programs\Windows^Kits\Application^Verifier^(X64)\

// 2.窗口
https://blog.csdn.net/lixiangminghate/article/details/70305588



[1.8] WinDbg
// Windbg
D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\
open:D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\Windbg.exe

// dump包的抓取




[1.9] Dependencies------查看依赖dll
//
https://blog.csdn.net/tomoca/article/details/118678684
//
H:\Desktop\tool\file_down\_debug\depends22_x64\
// 不是真缺
api-ms-win-core-apiquery-l1-1-0.dll
//
//这是缺少vs2010的runtime库


### 
c:windows\syswow64\



### win8，win7系统经常出现软件不运行，
// 提示：api-ms-win-crt-runtime-l1-1-0.dll 丢失
https://zhuanlan.zhihu.com/p/161848796




[1.10] build
// Option
make\perl_script\perl_pm\CreateDSP\createDSP.pm  Get_VS_2010_File_Name_Compile_Option
//
make\perl_script\create_dsp.pl  VS2010



[1.11] set


### 解决方法 vs2010：(无效)
//	首先打开菜单项目->项目属性页 
//	1。选择配置属性->链接器->调试->生成调试信息改为是 
//	2。选择配置属性->C/C++->常规->调试信息格式改为用于“编辑并继续”的程序数据库(/ZI) 
//	3。选择配置属性->C/C++->优化->优化改为禁用(/Od) 


###
//磁盘上已存在名为“D:\soft\wa01u_w21_svn2\MS_MMI_Main\source\winsimulator_tp\win_platform\MSDevBridge\MSDevBridge_Mod.vcxproj”的文件。

//是否覆盖项目及其导入的属性表?



[1.12] 
// 禁用
//	控制面板－管理工具－任务计划－任务计划程序－MemoryDiagnostic－右边框－找到禁用－点击。


// 修改VC6.0堆栈的大小
//	Project——Settings——选 msdevkernel.dll
//	——选项卡 Link——分类 output——Stack allocations——Reserve
//	Reserve → virtual memory, 默认大小是1M=0x100000
//	Commit → physical memory, 应该小于Reserve


//无损的系统修复
//建议使用微软的MediaCreationTool21H1工具升级/修复系统：
https://go.microsoft.com/fwlink/?LinkId=691209


[1.13] 模拟器联网
//
如果展讯模拟器不能联网，去网上下载一个 WinPcap（winpcap(windows packet capture)是windows平台下一个免费，公共的网络访问系统）

点击打开链接 。

就可以了。。。
//
//https://www.onlinedown.net/soft/2685.htm


[1.14] BoundsChecker




[1.15] VsCode




