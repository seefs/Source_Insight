

//Ŀ¼
Save:node\ToolsMsg\Macro_SI.h \[1.1\] ��װ/����
Save:node\ToolsMsg\Macro_SI.h \[1.2\] ��������
Save:node\ToolsMsg\Macro_SI.h \[1.3\] ����
Save:node\ToolsMsg\Macro_SI.h \[1.4\] 
Save:node\ToolsMsg\Macro_SI.h \[1.5\] SI��������---------
Save:node\ToolsMsg\Macro_SI.h \[1.6\] ���
Save:node\ToolsMsg\Macro_SI.h \[1.7\] �Զ�������/�˵�
Save:node\ToolsMsg\Macro_SI.h \[1.8\] 
Save:node\ToolsMsg\Macro_SI.h \[1.9\] ShellExecute
Save:node\ToolsMsg\Macro_SI.h \[1.10\] ����



[1.1] ��װ/����
### SI4.0 ��װ
//	1) ��װ���ļ�������:
//		��װ��\sourceinsight4084-setup.exe         # ��װexe
//		��װ��\sourceinsight4.exe                  # �滻��װĿ¼�µ��ļ�
//		��װ��\si4.pediy.lic                       # ��exe ����֤��

//	2) Setting·��
//	  1���������á��޸�Ĭ��Setting·��
//		Options -> Style properties->Load->E:\save\Source Insight\SettingsXml
//		Options -> Preferences -> Folders->E:\save\Source Insight
//
//	  2��������:
//		project->add project Files->E:\save\SI3.5->ͬ���ļ�
//		project->add project Files->E:\save\SI4.0->ͬ���ļ�    # ͬʱ������������������
//
//	  3������:
//		��.h, .txt��ɫ��һ


### ���ز����������ļ� __cfg__
// ����:
//   ���塢���롢����;
//	 ��ݼ����˵�;
// ��������:
git clone https://github.com/seefs/Source_Insight_4_0_cfg

// ���º󸲸����Ŀ¼
...\Save\Source Insight 4.0\Settings
// (����)


### ͬ�����ļ�
// ͬ��:
//   ����������Ҫͬ��
//   �޸ĺ��ļ����¼Ӻ���ҲҪͬ�������򱨺����Ҳ���
// ����:
//   �л���base project�£�
//		�˵� -> project -> ��project -> base project 
//   ��Ӻ��ļ�:
//		�˵� -> project -> ��ӻ��Ƴ���Ŀ�ļ� -> ���
//		...\Macro��ѡ�����ļ�, 
//   �����ļ��������
//   ͬ��:
//		�˵�--project -> ͬ���ļ�
// ��֤
//   ������OK������ݼ��Ƿ�����:
//		ctrl+b, ������ʱ�ļ�--simple_tmp_b.h
//		f2, �򿪵�ǰĿ¼


### ���ú��ļ�
// Save ·������
Save:Help\Other\Macro_Help_SI.h  __set__


[1.2] ��������
//	***** **** ***** �������� ***** **** *****
//	1���ļ�����
//	options->Document type:
//	1.c file:��*.bat	  # ��ɫ����
//	2.make file:��*.mak
//	3.new file:��*.ss
//	
//	2�������С���кš�����
//	options->Preferences->font
//	options->Document type->Screen font
//	options->Preferences->File->Default code->System default(Windows ANSI)
//	
//	3��SI 3.5����
//	options->Preferences->Show
//	(ѡ���ص�...)
//	
//	4��SI 4.0����
//	options->Preferences->Show->Overviews->close 
//	overview->�Ҽ�->hide
//	view->overview->close
//	
//	title->hide
//	view->stutas bar->close
//	view->mono font->close(Alt+F12)
//	view->panel->project file, �����ر�
//	view->panel->context windows->Tool->Jump to definition,�ָ�Ĭ�ϴ���
//	
//	5������
//	F8, shift+F8���ĳɸ���



[1.3] ����
### ����
//	lookup refercences:
//		1��Simple String
//		2��Regular Expression
//		3��Keyword Expression
//		4��Look Up Reference	 SI4.0�ò���
//	search result option:
//		1��Include name of container function of clase    ������miss�ļ�

### �����ٶ�
// 1.��6000��xml�ļ���10s=>2s


[1.4] 
// ͨ����滻
patch:node\Help\Macro_node_Help.h  __Re__


[1.5] SI��������
//
C:\Users\Administrator\
C:\Users\{Admin}\AppData\Local\Temp\
//	ɾ����TFX��ͷ��������ʱ�ļ���


// xml�����ļ�����:
// �����ļ�UTF-8������
// ���ܸ��ļ���ʽ, ûʲô�취


// win10�ļ��б�������
// �������°汾 [��������]


// source insight һֱ checking for modified files���¿��� [δ��֤]
Option �� Preferences �� General �� Background synchronization every [] minutes��ȡ����ѡ��



[1.6] ���

### SI3.5���
//	��װ˵��:
//	
//	��ѹmsimg32.dll sihook.dll siutf8.dll ��Source Insight 3.X��װĿ¼
//	
//	msimg32.dll ��������(*)
//	sihook.dll ��ǩ���(M)
//	siutf8.dll utf8���(M)
//	
//	����˵��:
//	1,����SI���ǩ����
//	2,�޸�SI������������ַ��ϰ�CTRL+Fʱ����������.(��л��ѩ�ķ�������)
//	3,utf8����֧��.
//	
//	��֪����:
//	��utf8�����ļ����ⲿ�ı�ʱ,SI�����⵽����.��Ҫ���¹ر�SI�ٴ�.


### ��Ȥ�ĸ�ʽ

$time$

//https://www.sourceinsight.com/pub/languages/
// --shell--style
//https://blog.csdn.net/fangye945a/article/details/108706033


[1.7] �Զ�������/�˵�
### �Զ�������
//	Options->Custom Command1. Add��new Commands2. Run �������ִ�������У�	2.1  F:; cd F:/Base/command; open_build.bat  %j ע�ͣ�%jΪ��ǰ����Ŀ¼
//	   2.2	explorer /select,%f
//	
//	
//	ע�ͣ����ļ�
//	3. Dir ��ִ��������ʱӦ����Ŀ¼���粻���Դ�����ļ�����Ŀ¼Ϊ����ִ��Ŀ¼
//	4. ��ѡ Output ��� Capture Output ���������׽�������ѡ Paste Output �������ճ��
//	   ��ѡ Control Group ���е� Save Files First �� SIS ������������ǰ�ȼ���ļ��Ƿ񱣴�    ��ѡ Control Group ���е� Pause When Done �� SIS ���������������ͣ��������	��ѡ Source Links in Output ���е� Parse Source Links

### �Զ���˵�
//	***** **** ***** �Զ���˵� ***** **** *****
//	open base:
//	Options->Menu->OpenPath 	->Menu/work->Insert->key/F2    select next window
//	Options->Menu->TwoWordFind ->Menu/work->Insert->key/F5
//	Options->Menu->Goto 	  ->Menu/work->Insert->key/F5
//	-------------------------------------------- ��ѡ�������õ�


[1.8] 


[1.9] ShellExecute
//
https://www.sourceinsight.com/doc/v4/userguide/index.html#t=Manual%2FMacro_Language%2FShellExecute_sVerb_sFile_sExtraParams_sWorkingDirectory.htm&rhsearch=shell&rhsyns=%20&rhhlterm=shell
https://www.sourceinsight.com/doc/v4/userguide/index.html#rhhlterm=shell&rhsyns=%20&t=Manual%2FMacro_Language%2FShellExecute_sVerb_sFile_sExtraParams_sWorkingDirectory.htm


//	ShellExecute
//	ShellExecute("", "iexplore", "", "", 1)
//	ShellExecute("", "iexplore somefile.htm", "", "", 1)
//	ShellExecute("find",  filespec, "", "", 1)
//	ShellExecute("explore", "C :\Documents and Settings", "", "", 1)
//	ShellExecute("open", "http://www.somedomain.com", "", "", 1)
//	ShellExecute("open", "somefile.doc", "", "", 1)

//%j �޷�ʶ��
//	ShellExecute("explore", "%j", "", "", 1)

// --����
// ----p1:Shell ����
// ----p2:��Ч·��, ����·������Χʹ��˫����
// ----p3:���ճ������
// ----p4:����Ŀ¼�����Ϊ�գ���ʹ����Ŀ��Ŀ¼��
// ----p5:���ڵĴ�С��״̬����ЧֵΪ��1 = ������2 = ��С����3 = ���


// --Windows Shell API �ĵ�
// ShellExecute
https://docs.microsoft.com/en-us/windows/win32/api/shellapi/nf-shellapi-shellexecutea


// --test
Save:Help\Macro_Note_Test.h  __Shell__





[1.10] ����

### __node__
//	**** **** ***** node ***** **** *****
//	 Character Expands to																						Example 		   
//	%f		   full path name of the current file * 												c:\myproj\file.c
//	%r		   path name of current file rela-tive to the project source direc-tory *		 file.c
//	%n		   leaf name of the current file *															 file.c 									 
//	%d		   directory path of the current file												 c:\myproj
//	%h		   directory path of current file without the drive letter							\myproj
//	%b		   leaf name of current file w/o extension *									   file 									 
//	%e		   extension of the current file													c
//	%c		   drive letter of the current file 										  c:
//	%p		   the current project name 												  c:\myproj\myproj
//	%j		   the source directory of the cur-rent project 										c:\myproj
//	%J		   the data directory of the current project											 C:\Documents and Set-tings\Jim Smith\Docu-ments\Source Insight 4.0\Projects\Base
//	%v		   the drive letter of the current project's source directory							  c:
//	%o		   leaf name of the project without path										  myproj
//	%l		   the current line number														any number
//	%w		   first word in the selection, or the word under the cursor						  any word
//	%s		   name of a temp file where the current selection is saved while the custom command runs.		   d:\tmp\vt0004.
//	%a		   the current date 																   2005/12/2
//	%t		   the current time 																		 8:23
//	%1 - %9 		user is prompted for arguments													any strings


### modifier charac-ters
//	***** **** ***** modifier charac-ters ***** **** *****
//	Character	Expands to				Example
//	%o		   for all open files		%f%o
//	%m		   for all modified files %f%m


### system path 
// Ԥ����·������
//	***** **** ***** path ***** **** *****
//	%APPDATA_DIR% %DESKTOP_DIR% %LOCAL_APPDATA_DIR% %MYDOCUMENTS_DIR% 
//  %PROGRAM_DIR% %PROGRAMFILES_DIR% %PROGRAMFILESX86_DIR% %PROJECT_DATA_DIR% 
//  %PROJECT_SOURCE_DIR% %PROJECT_NAM%E %SHARED_DOCUMENTS_DIR% 
//  %SOURCEINSIGHT_USER_DIR% %TEMP_DIR% %WINDOWS_DIR%






