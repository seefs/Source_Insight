
����·������:
//basePath = 

//Ŀ¼:
// 1. vc2010
Save:node\ToolsMsg\Macro_VS2010.h \[1.1\] ��װ��ж��
Save:node\ToolsMsg\Macro_VS2010.h \[1.2\] error build
Save:node\ToolsMsg\Macro_VS2010.h \[1.3\] debug tool
Save:node\ToolsMsg\Macro_VS2010.h \[1.4\] Dependencies------�鿴����dll
Save:node\ToolsMsg\Macro_VS2010.h \[1.5\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.6\] ģ��������
Save:node\ToolsMsg\Macro_VS2010.h \[1.7\] 
Save:node\ToolsMsg\Macro_VS2010.h \[1.8\] code
Save:node\ToolsMsg\Macro_VS2010.h \[1.9\] mp3
Save:node\ToolsMsg\Macro_VS2010.h \[1.10\] 




[1.1] ��װ��ж��
### ��װ
// ���룺yuuu
http://pan.baidu.com/s/1bpB6szl
// �ƽ�
https://blog.csdn.net/weixin_39381833/article/details/78078343
//
//	[Product Key]
//	YCFHQ9DWCYDKV88T2TMHG7BHP


### ����
//YCFHQ-9DWCY-DKV88-T2TMH-G7BHP


### framework
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

### vc6תvs2010 (�ò���)
// 1.vs2010���ð�ȫ���

// 2.Դ������� - �޷��������ݿ�
//	A.ѡ������ɾ��Դ�ؼ������󶨵�ѡ� 
//	B.ת���ļ� - >Դ������� - >����Դ������� ѡ��������Ŀ��Ȼ�󵥻��󶨡� 

// 3.lib����
ms_mmi_main\source\winsimulator_tp\win_platform\msdevkernel\h\stdafx.h
//	#ifdef WIN32
//	#pragma comment(lib, "devps.lib")
//	#endif

// 4.PDB���� (���� ���ù�)
// Cannot find or open the PDB file

// 5.vcxproj
//�������Ѵ�����Ϊ��xxxx\...\MSDevBridge\MSDevBridge_Mod.vcxproj�����ļ���
MS_MMI_Main\source\winsimulator_tp\win_platform\MSDevBridge\
//�Ƿ񸲸���Ŀ���䵼������Ա�?


### ����win10���� vs2010�ڴ����
// 0xC0000005: ִ��λ�� 0x 00000000
Appkernel:c\mmi_resource.c  ResFree
Save:node\C\study\Macro_res_8910.h \[1.15\] load res...


### run ����
// 1.ͻȻ���ܵ����ˡ������ɾ����
//	C:\Windows\Microsoft.NET\Framework\v4.0.30319\Temporary ASP.NET Files
//	�����������ʱ�ļ���
C:\Windows\Microsoft.NET\Framework\v4.0.30319\
C:\Windows\Microsoft.NET\Framework\v4.0.30319\xxx\ #û����ļ�


### set--������� vs2010��(��Ч)
//	���ȴ򿪲˵���Ŀ->��Ŀ����ҳ 
//	1��ѡ����������->������->����->���ɵ�����Ϣ��Ϊ�� 
//	2��ѡ����������->C/C++->����->������Ϣ��ʽ��Ϊ���ڡ��༭���������ĳ������ݿ�(/ZI) 
//	3��ѡ����������->C/C++->�Ż�->�Ż���Ϊ����(/Od) 


### ����
//	������壭�����ߣ�����ƻ�������ƻ�����MemoryDiagnostic���ұ߿��ҵ����ã������



[1.3] debug tool
### pageheap
//
Win10���������İ�


### Windbg--gflags
// pageheap
https://www.softpedia.com/get/System/System-Miscellaneous/PageHeap.shtml

// Download Debugging Tools for Windows
//--Use the download link on the Windows SDK (1.1G)
https://learn.microsoft.com/en-us/windows-hardware/drivers/debugger/debugger-download-tools

//ʹ��
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


### Application Verifier
//  Installing
https://learn.microsoft.com/en-us/windows-hardware/drivers/devtest/application-verifier
https://techcommunity.microsoft.com/t5/iis-support-blog/debugging-heap-corruption-with-application-verifier-and/ba-p/376844
//
https://community.sophos.com/intercept-x-endpoint/f/discussions/99935/visualstudio-debugging-with-appverifier-enabled-impossible-due-to-hmpalert-dll-crashing-application-immediately

// ������֤����
https://blog.csdn.net/lzfly/article/details/5379766

// ע�����Ȩ��
Image File Execution Options

//ʹ��
// 1.AppVerif.exe
open:C:\Windows\System32\appverif.exe
// --�����
C:\ProgramData\Microsoft\Windows\Start^Menu\Programs\Windows^Kits\Application^Verifier^(X64)\

// 2.����
https://blog.csdn.net/lixiangminghate/article/details/70305588


### WinDbg
// Windbg
D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\
open:D:\Program^Files^(x86)\Windows^Kits\10\Debuggers\x64\Windbg.exe

// dump����ץȡ


[1.4] Dependencies------�鿴����dll
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
code


### BoundsChecker



### VsCode


### �����ϵͳ�޸�
//����ʹ��΢���MediaCreationTool21H1��������/�޸�ϵͳ��
https://go.microsoft.com/fwlink/?LinkId=691209


[1.5] 


[1.6] ģ��������
//
���չѶģ��������������ȥ��������һ�� WinPcap��winpcap(windows packet capture)��windowsƽ̨��һ����ѣ��������������ϵͳ��

��������� ��

�Ϳ����ˡ�����
//
//https://www.onlinedown.net/soft/2685.htm



[1.7]  



[1.8] code
### simulator param
MS_MMI_Main\source\winsimulator_tp\win_platform\MSDevBridge\MSDevBridge_Mod.dsp


### build
// Option
make\perl_script\perl_pm\CreateDSP\createDSP.pm  Get_VS_2010_File_Name_Compile_Option
//
make\perl_script\create_dsp.pl  VS2010

// SCI_MPALLOC ����
Save:node\C\study\Macro_res_8910.h  __load__


[1.9] mp3
// win7-8910-mp3�޷�ģ�⣬����win10



[1.10] 






