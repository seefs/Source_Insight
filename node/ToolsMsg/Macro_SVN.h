
����·������:
//basePath = 

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\ToolsMsg\Macro_svn.h \[1.1\] config
Save:node\ToolsMsg\Macro_svn.h \[1.2\] ����ʧ��
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
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] config
// config
C:\Users\Administrator\AppData\Roaming\Subversion\config

//	1.svn error:	
//	post of '/svn/!svn/me':500 internal server error
//	svn 500���� 500 Internal Server Error response to POST request
//	//	��VisualSVN Server GUI��
//	//	�Ҽ�������ർ�������Ŀ¼�µġ�VisualSVN Server���򣩡���Ȼ��ѡ�����ԡ���
//	//	�ڡ����桱ѡ��£������������Զ�����Ȩ�ޡ���ѡ��
//	//	A.���δѡ�д����ѡ������������Ӧ�á��� �⽫ֹͣ����������VisualSVN���񣬲�Ӧ��������⡣
//	//	B.���ѡ�д����ȡ��ѡ�в�������Ӧ�á��� �⽫ֹͣ����������Visual SVN���� 
//	//	��ɺ����¼���ѡ��ٴε�����Ӧ�á��� �����������������Ӧ�ý�������⡣
//	
//	
//	

// list
*.o *.lo *.la *.al .libs  *.so.[0-9]*  *.pyc *.pyo __pycache__ *.rej *~ #*# .#* .*.swp .DS_Store [Tt]humbs.db





[1.2] ����ʧ��
//	����ʧ��:
//	sqlite3 wc.db "select * from work_queue"
//	sqlite3 wc.db "delete from work_queue"




[1.3] path add
//	path add:
//	D:\Program Files\TortoiseSVN\bin\TortoiseProc.exe
//	svn log "F:\6531DA_Btdialer\version"
//	svn log "version"
//
//	�ο���http://blog.csdn.net/gwzz1228/article/details/7840666
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

//	svn����
//	��Win7�Ŀ�����ѡ��ѡ������ѡ���Ȼ��ѡ���޸ġ�����G:\doc\projects\estarȫ����ѡ����
//
//	1.�ر�SVN��cache���ӡ����ر�tsvncache.exe��������Ŀ¼�ļ��ӡ�
//	��������������£�
//	a) �һ�����Ŀ¼���Ҽ��˵�,��"tortoisesvn" => "settings"�µ����ô���
//	b) �ҵ�"icon overlays"���������"status cache"���ó�"none"





[1.5] svn.exe
//windows��û��svn.exe ����취
https://blog.csdn.net/pyf09/article/details/78690849
//
����װ�ڱ���Ӳ����
�������ܽ���װ�ڱ���Ӳ����
��Ҫʱ����װ����
�������ܽ�������



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
svn 500���� 500 Internal Server Error response to POST request
//	��VisualSVN Server GUI��
//	�Ҽ�������ർ�������Ŀ¼�µġ�VisualSVN Server���򣩡���Ȼ��ѡ�����ԡ���
//	�ڡ����桱ѡ��£������������Զ�����Ȩ�ޡ���ѡ��
//	A.���δѡ�д����ѡ������������Ӧ�á��� �⽫ֹͣ����������VisualSVN���񣬲�Ӧ��������⡣
//	B.���ѡ�д����ȡ��ѡ�в�������Ӧ�á��� �⽫ֹͣ����������Visual SVN���� 
//	��ɺ����¼���ѡ��ٴε�����Ӧ�á��� �����������������Ӧ�ý�������⡣


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





