
����·������:
//basePath = 

//Ŀ¼:
// 1. vc2010
Save:node\ToolsMsg\Macro_VS2010.h \[1.1\] ��װ��ж��
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
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] ��װ��ж��
//
֮ǰ�����CQ���ǿ���֧�ֵģ��и�ָ����ǿ��Բ���
//
make p=xxx m=s.. VS2010=1 -j4
// ���룺yuuu
http://pan.baidu.com/s/1bpB6szl
// �ƽ�
https://blog.csdn.net/weixin_39381833/article/details/78078343
//
//	[Product Key]
//	YCFHQ9DWCYDKV88T2TMHG7BHP


//vs2010���ð�ȫ���
// ---






[1.2] error

//--Դ������� - �޷��������ݿ�
//	����VS2010�������ҵ���Ŀ���д���һ��������������õ�����ͬ����Ϣ��
//	��������ѡ����ʱʹ�ý���������ܿ��ƣ�������ɾ��Դ�ؼ������󶨡� 
//	��ѡ��������ɾ��Դ�ؼ������󶨵�ѡ� ���ڴ�������Ŀ/���������
//	ת���ļ� - >Դ������� - >����Դ������� ѡ��������Ŀ��Ȼ�󵥻��󶨡� 
//	���ڰ��������߹����� ��������ܹ�����������ķ�����ϣ���ܰ������㡣    

//
ms_mmi_main\source\winsimulator_tp\win_platform\msdevkernel\h\stdafx.h
//	#ifdef WIN32
//	#pragma comment(lib, "devps.lib")
//	#endif



[1.3] 




[1.4] 




[1.5] pageheap
//
Win10���������İ�


[1.6] Windbg--gflags
// pageheap
https://www.softpedia.com/get/System/System-Miscellaneous/PageHeap.shtml

// Download Debugging Tools for Windows
//--Use the download link on the Windows SDK (1.1G)
https://learn.microsoft.com/en-us/windows-hardware/drivers/debugger/debugger-download-tools


### ʹ��
// 1.gflags.exe
D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\
D:\Program Files (x86)\Windows Kits\10\Debuggers\x64\
open:D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x86\gflags.exe


// 2.������
//
gflags �Cp /enable MSDev.exe /full 
gflags �Cp /enable MSDev.exe /full /dlls msdevkernel.dll
gflags �Cp /enable MSDev.exe /full /dlls verifier.dll
gflags �Cp /enable APP01.exe /full 

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


// 3.����
https://blog.csdn.net/weitaming1/article/details/83992048
// Debugger: vsjitdebugger.exe



[1.7]  Application Verifier
//  Installing
https://learn.microsoft.com/en-us/windows-hardware/drivers/devtest/application-verifier
https://techcommunity.microsoft.com/t5/iis-support-blog/debugging-heap-corruption-with-application-verifier-and/ba-p/376844
//
https://community.sophos.com/intercept-x-endpoint/f/discussions/99935/visualstudio-debugging-with-appverifier-enabled-impossible-due-to-hmpalert-dll-crashing-application-immediately


// ������֤����
https://blog.csdn.net/lzfly/article/details/5379766


// ע�����Ȩ��
Image File Execution Options


### ʹ��
// 1.AppVerif.exe
open:C:\Windows\System32\appverif.exe
// --�����
C:\ProgramData\Microsoft\Windows\Start^Menu\Programs\Windows^Kits\Application^Verifier^(X64)\

// 2.����
https://blog.csdn.net/lixiangminghate/article/details/70305588



[1.8] WinDbg
// Windbg
D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\
open:D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\Windbg.exe

// dump����ץȡ




[1.9] 




[1.10] 



[1.11] 




[1.12] 
// ����
//	������壭�����ߣ�����ƻ�������ƻ�����MemoryDiagnostic���ұ߿��ҵ����ã������


// �޸�VC6.0��ջ�Ĵ�С
//	Project����Settings����ѡ msdevkernel.dll
//	����ѡ� Link�������� output����Stack allocations����Reserve
//	Reserve �� virtual memory, Ĭ�ϴ�С��1M=0x100000
//	Commit �� physical memory, Ӧ��С��Reserve


//�����ϵͳ�޸�
//����ʹ��΢���MediaCreationTool21H1��������/�޸�ϵͳ��
https://go.microsoft.com/fwlink/?LinkId=691209


[1.13] 




[1.14] BoundsChecker




[1.15] VsCode




