
����·������:
//basePath = 

//Ŀ¼:
// 1. vc2010
Save:node\ToolsMsg\Macro_VS2010.h \[1.1\] ��װ��ж��
Save:node\ToolsMsg\Macro_VS2010.h \[1.2\] error build
Save:node\ToolsMsg\Macro_VS2010.h \[1.3\] error run
Save:node\ToolsMsg\Macro_VS2010.h \[1.4\] code
Save:node\ToolsMsg\Macro_VS2010.h \[1.5\] pageheap
Save:node\ToolsMsg\Macro_VS2010.h \[1.6\] Windbg--gflags
Save:node\ToolsMsg\Macro_VS2010.h \[1.7\] Application Verifier
Save:node\ToolsMsg\Macro_VS2010.h \[1.8\] WinDbg
Save:node\ToolsMsg\Macro_VS2010.h \[1.9\] Dependencies------�鿴����dll
Save:node\ToolsMsg\Macro_VS2010.h \[1.10\] build
Save:node\ToolsMsg\Macro_VS2010.h \[1.11\] set
Save:node\ToolsMsg\Macro_VS2010.h \[1.12\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.13\] ģ��������
Save:node\ToolsMsg\Macro_VS2010.h \[1.14\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.15\] 
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


// ����
//YCFHQ-9DWCY-DKV88-T2TMH-G7BHP


// framework
// --v2.0.50727
// --v3.5
// --v4.8(�и��߰汾װ����)
//	Windows XPװ3.5��4.0Q;
//	Windows 7 SP1װ4.79;
//	Windows 8װ3.5��4.6.1;
//	Windows 8.1װ3.5��4.7;
//	Windows 10װ3.5��4.7;
//	Windows 10 1703װ3.5;
https://go.microsoft.com/fwlink/?linkid=0


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

### ntdll.dll
//	��MSDev.exe��: �Ѽ��ء�G:\T1072\build\ums9117_240X320BAR_48MB_S89T_BYD_L66A_IN_debug_builddir\win\bin\MSDev.exe����Cannot find or open the PDB file
//	��MSDev.exe��: �Ѽ��ء�C:\Windows\SysWOW64\ntdll.dll����Cannot find or open the PDB file


### 
//MSDev.exe �е� 0x1187037f (msdevkernel.dll) ����δ��������쳣: 

### 
// 0xC0000005: ִ��λ�� 0x 00000000
Appkernel:c\mmi_resource.c  ResFree


[1.3] error run

### ��Χ�Ķ�ջ����
Run-Time Check Failure #2 - Stack around the variable 'top_offset' was corrupted.
//
app:sms\c\mmismscb_wintab.c  void^InitCBChannelList


###
// 	msdevkernel.dll!LIST_DEL()  �� 125 + 0xb �ֽ�	C


### ���ܵ���
// ǰ�����ҵ�vs2010ͻȻ���ܵ����ˡ��������˺ܶ�Ľ�����������ܽ�����⡣
//	1. ɾ�����е�bin, debug
//	2. �ؽ����̡�
//	3. ���°�װSilverlight�Ŀ�������
//	���ǲ��С������ɾ����
//	C:\Windows\Microsoft.NET\Framework\v4.0.30319\Temporary ASP.NET Files
//	�����������ʱ�ļ���
C:\Windows\Microsoft.NET\Framework\v4.0.30319\
C:\Windows\Microsoft.NET\Framework\v4.0.30319\xxx\ #û����ļ�





[1.4] code

// simulator param
MS_MMI_Main\source\winsimulator_tp\win_platform\MSDevBridge\MSDevBridge_Mod.dsp



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




[1.9] Dependencies------�鿴����dll
//
https://blog.csdn.net/tomoca/article/details/118678684
//
H:\Desktop\tool\file_down\_debug\depends22_x64\
// ������ȱ
api-ms-win-core-apiquery-l1-1-0.dll
//
//����ȱ��vs2010��runtime��


### 
c:windows\syswow64\



### win8��win7ϵͳ����������������У�
// ��ʾ��api-ms-win-crt-runtime-l1-1-0.dll ��ʧ
https://zhuanlan.zhihu.com/p/161848796




[1.10] build
// Option
make\perl_script\perl_pm\CreateDSP\createDSP.pm  Get_VS_2010_File_Name_Compile_Option
//
make\perl_script\create_dsp.pl  VS2010



[1.11] set


### ������� vs2010��(��Ч)
//	���ȴ򿪲˵���Ŀ->��Ŀ����ҳ 
//	1��ѡ����������->������->����->���ɵ�����Ϣ��Ϊ�� 
//	2��ѡ����������->C/C++->����->������Ϣ��ʽ��Ϊ���ڡ��༭���������ĳ������ݿ�(/ZI) 
//	3��ѡ����������->C/C++->�Ż�->�Ż���Ϊ����(/Od) 


###
//�������Ѵ�����Ϊ��D:\soft\wa01u_w21_svn2\MS_MMI_Main\source\winsimulator_tp\win_platform\MSDevBridge\MSDevBridge_Mod.vcxproj�����ļ���

//�Ƿ񸲸���Ŀ���䵼������Ա�?



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


[1.13] ģ��������
//
���չѶģ��������������ȥ��������һ�� WinPcap��winpcap(windows packet capture)��windowsƽ̨��һ����ѣ��������������ϵͳ��

��������� ��

�Ϳ����ˡ�����
//
//https://www.onlinedown.net/soft/2685.htm


[1.14] BoundsChecker




[1.15] VsCode




