
基础路径设置:
//basePath = 

//目录:
// 1. vc2010
Save:node\ToolsMsg\Macro_VS2010.h \[1.1\] 安装、卸载
Save:node\ToolsMsg\Macro_VS2010.h \[1.2\] error
Save:node\ToolsMsg\Macro_VS2010.h \[1.3\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.4\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.5\] pageheap
Save:node\ToolsMsg\Macro_VS2010.h \[1.6\] Windbg--gflags
Save:node\ToolsMsg\Macro_VS2010.h \[1.7\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.8\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.9\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.10\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.11\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.12\] 
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



[1.3] 




[1.4] 




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




[1.9] 




[1.10] 



[1.11] 




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


[1.13] 




[1.14] BoundsChecker




[1.15] VsCode




