

//Ŀ¼[Num][Ca]:
// 1. bat����
Save:node\ToolsMsg\Macro_Cmd.h \[1.1\] common
Save:node\ToolsMsg\Macro_Cmd.h \[1.2\] call ---------------����Ƕ��
Save:node\ToolsMsg\Macro_Cmd.h \[1.3\] FOR ----------------����
Save:node\ToolsMsg\Macro_Cmd.h \[1.4\] path ---------------����
Save:node\ToolsMsg\Macro_Cmd.h \[1.5\] copy
Save:node\ToolsMsg\Macro_Cmd.h \[1.6\] Shutdown
Save:node\ToolsMsg\Macro_Cmd.h \[1.7\] --
Save:node\ToolsMsg\Macro_Cmd.h \[1.8\] unrar
Save:node\ToolsMsg\Macro_Cmd.h \[1.9\] findstr
Save:node\ToolsMsg\Macro_Cmd.h \[1.10\] string ------------��ȡ���滻���ϲ�
Save:node\ToolsMsg\Macro_Cmd.h \[1.11\] if...else..., EQU
Save:node\ToolsMsg\Macro_Cmd.h \[1.12\] setlocal ----------�����ӳ�
Save:node\ToolsMsg\Macro_Cmd.h \[1.13\] set /a, set /p
Save:node\ToolsMsg\Macro_Cmd.h \[1.14\] rename
Save:node\ToolsMsg\Macro_Cmd.h \[1.15\] 
// 2. dir
Save:node\ToolsMsg\Macro_Cmd.h \[2.1\] dir ----------------����
Save:node\ToolsMsg\Macro_Cmd.h \[2.2\] show: Dir, File , Dir+File��
Save:node\ToolsMsg\Macro_Cmd.h \[2.3\] show: File , Dir
Save:node\ToolsMsg\Macro_Cmd.h \[2.4\] show: ChildFile
Save:node\ToolsMsg\Macro_Cmd.h \[2.5\] show: File
Save:node\ToolsMsg\Macro_Cmd.h \[2.6\] show: File Time
Save:node\ToolsMsg\Macro_Cmd.h \[2.7\] show: hide File
Save:node\ToolsMsg\Macro_Cmd.h \[2.8\] attrib
Save:node\ToolsMsg\Macro_Cmd.h \[2.9\] ��ǰ�̷�
Save:node\ToolsMsg\Macro_Cmd.h \[2.10\]
// 3. apk��adb
Save:node\ToolsMsg\Macro_Cmd.h \[3.1\] logcat
Save:node\ToolsMsg\Macro_Cmd.h \[3.2\] signapk
Save:node\ToolsMsg\Macro_Cmd.h \[3.3\] �鿴�ֻ��ֱ���
Save:node\ToolsMsg\Macro_Cmd.h \[3.4\] ģ����/�豸�б�
Save:node\ToolsMsg\Macro_Cmd.h \[3.5\] ��ȡ����
Save:node\ToolsMsg\Macro_Cmd.h \[3.6\] apktool
Save:node\ToolsMsg\Macro_Cmd.h \[3.7\] sqlite3
Save:node\ToolsMsg\Macro_Cmd.h \[3.8\] 
Save:node\ToolsMsg\Macro_Cmd.h \[3.9\] 
Save:node\ToolsMsg\Macro_Cmd.h \[3.10\]
// 
Save:node\ToolsMsg\Macro_Cmd.h \[4.1\] 
Save:node\ToolsMsg\Macro_Cmd.h \[4.2\] 
Save:node\ToolsMsg\Macro_Cmd.h \[4.3\] 



[1.1] common
//	1.ע�� rem REM �� ::
//	2.������� ECHO �� @,	  ������ &,&&,||
//	3.PAUSE,	TITLE,
//	
//	4.�ַ������滻����ȡ����չ,    setlocal �� �����ӳ�
//	5.�ļ���д,    ���� ATTRIB,	 �л�Ŀ¼ pushd �� popd
//	6.��������,    ������λ shift[/n]	 ������ %errorlevel%
//	7.mode ����ϵͳ�豸
//	8.FOR����,IF,GOTO �� :
//	9.FIND
//	10.�����ⲿ���� START
//	11.�ļ����� assoc �� ftype
//	13.CALL, �����ӳ� setlocal 

[1.2] call call
//call cal
call call set "o=%%%%progress:~%%p%%,1%%%%" 

set a2=1
set b3=2
set c=3 

call call echo.%%%%a%%b%c%%%%%%%

//call
@ECHO OFF
SET "VAR=ab,dc,cc,ef,gg,AQ,gg"
SET "VAR=%VAR:,= %"
ECHO %VAR%
SET "MAT=gg"
ECHO %MAT%
call SET "VAR=%%VAR:%MAT%= %%"
ECHO %VAR%



[1.3] FOR
//	FOR /F "delims=�� tokens=x,y,m-n" %%I IN (Command1) DO Command2
//		�Զ��ŷָ���ȡx,y,m-n��    
//		�������Ϊ%%I��%%J...
//		IN ()Ϊdir��file��string��Command1
//	
//	FOR delims���ָ�
//		tokens���У�x,y,m-n,��*
//		skip=1�����Ե�����
//		/d ����ΪĿ¼
//		/R���ݹ�,[�ɴ��̷���·��]
//		/L�� ������ֵ��Χ
//			for /l %%i in (1,1,5) do @echo %%i
//		/f����Ĭ�ϣ�

[1.4] path
//	path %~dp0:��ǰbatĿ¼
//		%%~I����ɾ��ȫ������("")
//		%%~fI������ %%I ��չ��һ����ȫ�ϸ��·���� 
//		%%~dI�������� %%I ��չ��һ���������� 
//		%%~pI�������� %%I ��չ��һ��·�� 	\SI\Test\mmi_res_...\...\
//		%%~nI�������� %%I ��չ��һ���ļ��� 
//		%%~xI�������� %%I ��չ��һ���ļ���չ�� 
//		%%~nxi	  �ļ���
//		%%~sI������չ��·��ֻ���ж���	  C:\SI\Test\MMI_RE~1\B3107A~1\IMF0D3~1.PNG
//		%%~aI������ %%I ��չ���ļ�(���ļ���)������ 
//		%%~tI������ %%I ��չ���ļ������ļ��У����޸�����/ʱ�� 
//		%%~zI������ %%I ��չ���ļ��Ĵ�С 
//		%%~$path:I������������path�����е�Ŀ¼
//	set /p var=�����������ֵ
//		/A expression  
//	%PATH:str1=str2%,
//		set var=%a: =%	 �ո��滻
//	%a:~1,3%  ��ȡ2~4λ
//	%a:~-3%  ����3λ
//	%a:~3%	3λ
//	%a:~0,-3%  ��ȡ0~����3λ
//	
//	
//	CMD��ȡ��ǰĿ¼�ľ���·�� :
//	@echo off
//	echo ��ǰ�̷���%~d0
//	echo ��ǰ�̷���·����%~dp0
//	echo ��ǰ������ȫ·����%~f0
//	echo ��ǰ�̷���·���Ķ��ļ�����ʽ��%~sdp0
//	echo ��ǰCMDĬ��Ŀ¼��%cd%
//	echo Ŀ¼���пո�Ҳ���Լ���""�����Ҳ���·��
//	echo ��ǰ�̷���"%~d0"
//	echo ��ǰ�̷���·����"%~dp0"
//	echo ��ǰ������ȫ·����"%~f0"
//	echo ��ǰ�̷���·���Ķ��ļ�����ʽ��"%~sdp0"
//	echo ��ǰCMDĬ��Ŀ¼��"%cd%"

[1.5] copy
//	copy F:\SBD_6531_12C_DA\project\B3102AD_GTOUCH_MX_Shadow24_F4\resource\RING\R_CALL_1.mp3  E:\save\SI_res\ring_mp3_1\.mp3
//	copy F:\SBD_6531_12C_DA\project\S039_JSY_T210_XINOVA_7735CPT_F6\resource\RING\R_CALL_1.mp3	E:\save\SI_res\ring_mp3_1\S039_JSY_T210_XINOVA_7735CPT_F6.mp3

[1.6] Shutdown
// ������ô��ʱ�ػ�win7
// 10���ӣ�  
//	Shutdown -s -t 600
// 20���ӣ�  
//	Shutdown -s -t 1200
// 30���ӣ�  
//	Shutdown -s -t 1800
cmd_s:Shutdown -s -t 1800
// 100���ӣ�  
//	Shutdown -s -t 6000
// 3Сʱ��  
//	Shutdown -s -t 10800
// ȡ��
//	Shutdown -a





[1.7] --
hosts :
���hosts���棺
ipconfig /flushdns




[1.8] unrar
//��ѹ�������ļ���pass.txt
//	for /F %%i IN (pass.txt) DO UnRAR.exe  x -O- -p%%i ara.rar
//	pause

// �������루4λ����
//	@echo off&setlocal EnableDelayedExpansion
//	set  str=abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
//
//	for /l %%a in (0,1,61) do (
//	for /l %%b in (0,1,61) do (
//	for /l %%c in (0,1,61) do (
//	for /l %%d in (0,1,61) do (
//	call echo %%str:~%%a,1%%%%str:~%%b,1%%%%str:~%%c,1%%%%str:~%%d,1%%>>pass.txt
//	)
//	)
//	)
//	)
//	pause


//�ۺϣ�
//	@echo off&setlocal EnableDelayedExpansion
//
//	set  str1=abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
//	set  str2=abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
//	set  str3=abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
//	set  str4=abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
//
//	for /l %%a in (0,1,61) do (
//	for /l %%b in (0,1,61) do (
//	for /l %%c in (0,1,61) do (
//	for /l %%d in (0,1,61) do (
//	call set psw=%%str1:~%%a,1%%%%str2:~%%b,1%%%%str3:~%%c,1%%%%str4:~%%d,1%%
//	UnRAR.exe  x -O- -p!psw! php.rar
//	)
//	)
//	)
//	)
//	pause

//	ȱ�㣺����ļ�������
//	����ļ������ֵ�+RAR Password Cracker

//	�÷���unzip [-Z] [-opts [modifiers]] file [.zip] [list] [-x xlist] [-d exdir]
//	  Ĭ�ϲ����ǽ��б��е��ļ�������xlist�е��ļ�����ȡ��exdir;
//	  �ļ�[.zip]������ͨ����� -Z => ZipInfoģʽ����unzip -Z�����÷�����
//
//	  -p���ļ���ȡ���ܵ���û����Ϣ-l�б��ļ����̸�ʽ��
//	  -f freshen�����ļ����봴����-t����ѹ���鵵����
//	  -u�����ļ������б�Ҫ������-z��ʾ�鵵ע��
//	  -x�ų�������ļ�����xlist�У�-d���ļ���ȡ��exdir
//
//	���η���-q����ģʽ��-qq => quieter��
//	  -n�Ӳ����������ļ� - �Զ�ת���κ��ı��ļ�
//	  -o�����ļ�WITHOUT��ʾ-aa�������ļ���Ϊ�ı�
//	  -j junk paths����Ҫ����Ŀ¼��-v��verbose / print�汾��Ϣ
//	  -Cƥ���ļ�����Сд����-L make��һЩ������Сд
//	  -X restore UID / GID info -V����VMS�汾��
//	  -K����setuid / setgid /ճ��Ȩ��-M�ܵ�ͨ�������ࡱѰ����
//	ʾ�����й���ϸ��Ϣ�������unzip.txt����
//	  unzip data1 -x joe =>��zipfile data1.zip����ȡ��joe֮��������ļ�
//	  unzip -p foo | more =>ͨ���ܵ���foo.zip�����ݷ��͵�������
//	  unzip -fo foo ReadMe =>����浵�ļ����£���Ĭ�滻���е�ReadMe
//
//	UnRAR.exe  x -O-  mmi_res_128x160.zip
//	zip common.zip common_mdu_def.h

//	unzip :
//	unzip -Z -o common.zip .zip [*.h] [-x *.h] -d commondir
//	unzip  -qjo  mmi_res_128x160.zip  common/MMI_RES_DEFAULT/IMAG/mainmenu_slim/*.png -d  mmi_res_128x160


[1.9] findstr
findstr /s /i /c:"LANG_FONT_HAN" *.*
findstr /s /i /c:"SBD_TOOLS_BT_DEFAULT_STORAGE_SDCARD" *.*

findstr /s /i /c:"SYS_MMU_MEM_AREA" *.*
findstr /s /i /c:"RAM_RW" *.*


//	FINDSTR [/B] [/E] [/L] [/R] [/S] [/I] [/X] [/V] [/N] [/M] [/O] [/P] [/F:file] 
//	[/C:string] [/G:file] [/D:dir list] [/A:color attributes] [/OFF[LINE]] 
//	strings [[drive:][path]filename[ ...]] 
//
//	/B ��һ�еĿ�ʼ���ģʽ�� 
//	/E ��һ�еĽ�β���ģʽ�� 
//	/L ����ʹ�������ַ����� 
//	/R �������ַ�����Ϊ������ʽʹ�á� 
//	/S �ڵ�ǰĿ¼��������Ŀ¼������ƥ���ļ��� 
//	/I ָ���������ִ�Сд�� 
//	/X ��ӡ��ȫƥ����С� 
//	/V ֻ��ӡ������ƥ����С� 
//	/N ��ƥ���ÿ��ǰ��ӡ������ 
//	/M ����ļ�����ƥ���ֻ��ӡ���ļ����� 
//	/O ��ÿ��ƥ����ǰ��ӡ�ַ�ƫ������ 
//	/P �����в��ɴ�ӡ�ַ����ļ��� 
//	/OFF[LINE] �����������ѻ����Լ����ļ��� 
//	/A:attr ָ����ʮ����λ���ֵ���ɫ���ԡ���� "color /?" 
//	/F:file ��ָ���ļ����ļ��б� (/ �������̨)�� 
//	/C:string ʹ��ָ���ַ�����Ϊ���������ַ����� 
//	/G:file ��ָ�����ļ���������ַ����� (/ �������̨)�� 
//	/D:dir �����Էֺ�Ϊ�ָ�����Ŀ¼�б� 
//	strings Ҫ���ҵ����֡� 
//	[drive:][path]filename 
//	ָ��Ҫ���ҵ��ļ��� 

//	���ǲ����� /C ǰ׺����ʹ�ÿո���������ַ����� 
//	����: 'FINDSTR "hello there" x.y' ���ļ� x.y ��Ѱ�� "hello" �� 
//	"there"��'FINDSTR /C:"hello there" x.y' �ļ� x.y Ѱ�� 
//	"hello there"�� 
//
//	������ʽ�Ŀ��ٲο�: 
//	. ͨ���: �κ��ַ� 
//	* �ظ�: ��ǰ�ַ����������������ϴ��� 
//	^ ��λ��: �еĿ�ʼ 
//	$ ��λ��: �е��յ� 
//	[class] �ַ���: �κ����ַ����е��ַ� 
//	[^class] ���ַ���: �κβ����ַ����е��ַ� 
//	[x-y] ��Χ: ��ָ����Χ�ڵ��κ��ַ� 
//	\x Escape: Ԫ�ַ� x �������÷� 
//	\<xyz ��λ��: �ֵĿ�ʼ 
//	xyz\> ��λ��: �ֵĽ��� 


[1.10] string ------------��ȡ���滻���ϲ�
// ��ȡ:
//	 %a:~1,3%     ��ȡ2~4λ
//	 %a:~-3%      ����3λ
//	 %a:~3%	      3λ
//	 %a:~0,-3%    ��ȡ0~����3λ

// �滻:
//	 set var=%a: =%	 �ո��滻

// �ϲ�:
//	 set var=%aa%%bb%	 ����һ��Ϳ�����



[1.11] if...else..., EQU
// 
if not defined sbd_param1 (
	set sbd_param1=%%j
) else if not defined sbd_param2 (
	set sbd_param2=%%j
) else (
	exit
) 


// and or


//
//	EQU - ����
//	NEQ - ������
//	LSS - С��
//	LEQ - С�ڻ����
//	GTR - ����
//	GEQ - ���ڻ����



[1.12] setlocal----------�����ӳ�
// �����ӳ�
@echo off&setlocal EnableDelayedExpansion
&endlocal

set sbd_param1=%%j


[1.13] set /a, set /p
set /a ִ����ѧ����
//	set /a a=2*%b%
set /p ��ʾ�û�����
//	set /p POP=������ping�Ĵ�����


[1.14] rename
ren K:����\����֮��.mp4 ����֮��.mp3


[1.15] 




[2.1] dir
//	@echo off
//	for /d /r "E:\desktop\����\a	file\dos������" %%i in (*) do echo %%i>>list.txt
//	pause
//
//	����
//	@echo off
//	for /f "delims=" %%i in ('dir /ad/b/s "E:\desktop\����\a	file\dos������"') do echo %%i>>list.txt
//	for /f "delims=" %%i in ('dir /ad/b/s "E:\desktop\����\a	file\dos������"') do echo %%~ni>>list.txt
//	pause
//
//	�ļ����� ·��:%%i
//	�ļ�����	 :%%~ni
//
//	DIR *.* /B >list.txt


//	[drive:][path][filename]
//				 ָ��Ҫ�г�����������Ŀ¼��/���ļ���
//
//	 /A 		 ��ʾ����ָ�����Ե��ļ���
//	 attributes   D  Ŀ¼ 			   R  ֻ���ļ�
//				  H  �����ļ�			 A	׼���浵���ļ�
//				  S  ϵͳ�ļ�			 -	��ʾ���񡱵�ǰ׺
//	 /B 		 ʹ�ÿո�ʽ(û�б�����Ϣ��ժҪ)��
//	 /C 		 ���ļ���С����ʾǧλ���ָ���������Ĭ��ֵ���� /-C ��
//				 ͣ�÷ָ�����ʾ��
//	 /D 		 ����ʽ��ͬ�����ļ��ǰ��������г��ġ�
//	 /L 		 ��Сд��
//	 /N 		 �µĳ��б��ʽ�������ļ��������ұߡ�
//	 /O 		 �÷���˳���г��ļ���
//	 sortorder	  N  ������(��ĸ˳��)	 S	����С(��С����)
//				  E  ����չ��(��ĸ˳��)   D  ������/ʱ��(���ȵ���)
//				  G  ��Ŀ¼����		   -  �ߵ�˳���ǰ׺
//	 /P 		 ��ÿ����Ϣ��Ļ����ͣ��
//	 /Q 		 ��ʾ�ļ������ߡ�
//	 /S 		 ��ʾָ��Ŀ¼��������Ŀ¼�е��ļ���
//	 /T 		 ������ʾ�����������ʱ���ַ���
//	 timefield	 C	����ʱ��
//				 A	�ϴη���ʱ��


[2.2] show: Dir, File , Dir+File��
//	show: Dir, File , Dir+File��
/*
	for /r . %%i in (.) do (
	    @echo  %%~dpi, %%~nxi, %%i
	)>>z_file.txt
*/


[2.3] show: File , Dir
//	show: File , Dir��/�ո�ʽ/��Ŀ¼/��Ŀ¼/1����Ŀ¼
/*
	@echo off
	for /f "delims=" %%i   in ('dir  /b/a-d/s  .\APPS\.\classes-full-debug.jar')  do (
	echo %%~nxi��%%i
	)>> file.txt
	pause
*/

/*
	for /r %%i in (*) do (
		@echo  %%~dpi, %%~nxi, %%i
	)>>z_file.txt
*/


[2.4] show: ChildFile
//	show: ChildFile��/�ո�ʽ/��Ŀ¼
/*
	@echo off
	for /f "delims=" %%i in ('dir /s/b ".\*.txt"') do (
		echo %%~ni
	)>>file.txt
	start file.txt
*/


[2.5] show: File
//	show: File��/�ո�ʽ
/*
	@echo off
	DIR *.* /B >> file.txt
	start file.txt
*/


[2.6] show: File Time
//	show: File Time��
//	
//	@echo off
//	@for /f "tokens=1,2 delims= " %%a in ('dir file.txt^|find "20"') do @echo %%a %%b>time.txt
//	start time.txt


[2.7] show: hide File
//	show: hide File��
//	
//	@echo off
//	for /f "delims=" %%i in ('dir /ah/b/s "*"') do echo %%i
//	start time.txt


[2.8] attrib
//	����������
//	1.	�����ļ��У���ȡ������
//	
//	����
//	attrib +s +a +h +r e:\bak\tools
//	
//	���룺attrib -a -s -h -r e:\bak\tools
//	
//	
//	attrib +r +h file.txt /s /d
//	ATTRIB [+R | -R] [+A | -A ] [+S | -S] [+H | -H] [[drive:] [path] filename] [/S [/D]]


[2.9] ��ǰ�̷�
//	��ǰ�̷���%~d0
//	��ǰ·����%cd%
//	��ǰִ�������У�%0
//	��ǰbat�ļ�·����%~dp0
//	��ǰbat�ļ���·����%~sdp0
//	G:
//	G:\T1073\
//	G:\T1073\S98T_nv_test.bat
//	G:\T1073\
//	G:\T1073\


[2.10] 




[3.1] logcat
// logcat
adb logcat > C:\Users\ZXSD-SW2\Desktop\�����ļ���\editplus_file\logcat.txt


[3.2] signapk
// signapk
java -jar out/host/linux-x86/framework/signapk.jar  ~/alps/build/target/product/security/platform.x509.pem ~/alps/build/target/product/security/platform.pk8 ~/Settings.apk ~/output.apk
// signapk
java -jar signapk.jar certificate.pem key.pk8 your-app.apk	your-signed-app.apk
// signapk
java -jar signapk.jar platform.x509.pem platform.pk8 HTSAFETY.apk HTSAFETY


[3.3] �鿴�ֻ��ֱ���
adb shell dumpsys window displays


[3.4] ģ����/�豸�б�
//	adb nodaemon server
//	netstat -ano | findstr "5037"
//	tasklist|find "13528"
//	adb devices
//	adb connect localhost:6666
//
//	adb devices
//	"240995d6b7ce    device
//	        2349f9ff        device"
//	adb -s 240995d6b7ce shell
//	adb -s 2349f9ff shell
//	adb -s CVH7N15A19006563 shell


[3.5] ��ȡ����
//	cd	D:\adt-bundle-windows-x86_64-20131030\sdk\build-tools\24.0.0
//	aapt dump badging E:\����\QuickSearchBox.apk > file.txt
//	aapt dump badging E:\����\QuickSearchBoxBenchmarks.apk > file.txt
//	="aapt dump badging E:\android\apk_bak\angler\"&B1&A1&">E:\android\apk_bak\angler\aapt\"&LEFT(A1,SEARCH("\",A1)-1)&".txt"
	

[3.6] apktool
//	cd F:\����\3  linux����\apktool
//	apktool d hello.apk /tmp/hello        #���
//	apktool b /tmp/hello /tmp/hello2.apk        #���
//
//	./apktool d  -f Velvet.apk  -o   Velvet
//	apktool d [-s] -f <apkPath> -o <folderPath>
	

[3.7] sqlite3
//sqlite3 ���뵼��excel��Excel����
//	D:cd D:\adt-bundle-windows-x86-20130522\sdk\platform-tools\adb.exe shell
//
//	/data/data/com.*.*(package name)/  
//	adb kill-server
//	adb start-serveradb shell
//	   ���ݿ��Ķ��壺 
//	cd D:\adt-bundle-windows-x86-20130522\sdk\tools\
//	sqlite3.exe d:\ss.db 
//	create table bookroom(id integer, roomname nvarchar(20), mapfilename nvarchar(20));
//	create table ind(id1 integer, roomname nvarchar(20), id2 integer);
//	 
//	   1��Excel  ->  bookroom.csv  ->  ɾ���У����UTF-8
//	   2������sqlite3��import������ݴ��ļ����뵽���У�Ĭ�ϵķָ����������'|'��
//	sqlite3 test.db
//	sqlite> .separator ','
//	sqlite>.import D:\\ss.csv ind
//	     3���������ݾ͵��뵽��bookroom�����ˣ����²���
//	sqlite> select * from bookroom;
//	      4������ 
//	sqlite> .output test.txt   
//	sqlite> select * from table_name; 
//	sqlite> .output stdout
//	sqlite> select * from table_name; 
//	sqlite> .output stdout  
//	      5������ģ����       6����ϸ���̣�
//	single ���ֱ�;complex ���ֱ�;common ���ֱ�
//	tone ����;standard ��׼;property ����;field ��
//	create table standard(name nvarchar(20),n1 integer,  n2 integer,  n3 integer);
//	.import E:\\����\\ר�ʿ�\\��׼.csv standard
//	.output  E:\\����\\ר�ʿ�\\test.txt
//	select * from standard limit 10; 
//	DELETE FROM standard ;
//
//	create table property (n1 integer, name2 nvarchar(10), name1 nvarchar(10));
//	.import E:\\����\\ר�ʿ�\\����.csv property 
//
//
//	create table single(name nvarchar(10));
//	create table tmp as select name2  from single;
//	.import E:\\����\\ר�ʿ�\\single1.csv single.import E:\\����\\ר�ʿ�\\single2.csv single
//	drop table single ;
//	alter table tmp rename to single ;
//
//	create table complex(name nvarchar(10));.import E:\\����\\ר�ʿ�\\complex.csv complex
//	create table common(name nvarchar(10));.import E:\\����\\ר�ʿ�\\common.csv common
//	create table three(name nvarchar(12));
//	.import E:\\����\\ר�ʿ�\\three1.csv three.import E:\\����\\ר�ʿ�\\three2.csv three
//	create table four(name nvarchar(16));
//	.import E:\\����\\ר�ʿ�\\four1.csv four.import E:\\����\\ר�ʿ�\\four2.csv four
//	create table more(name nvarchar(30));.import E:\\����\\ר�ʿ�\\more.csv more
//
//
//	create table one(name nvarchar(10), n1 integer,n2 integer,n3 integer,n4 integer,n5 integer,n6 integer,n7 integer, name2 nvarchar(10), name3 nvarchar(10));
//	alter table single add column name  varchar;.import E:\\����\\ר�ʿ�\\one.csv one
//	select * from one where name="�P"; 
//	select * from one where name2 ="�"; 
//	select count(*) from one; 
//
//	 
//	  adb push 001.jpg /sdcard
//	adb shell 
//	Excel����
//	<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>
//	 <uses-permission android:name="android.permission.MOUNT_UNMOUNT_FILESYSTEMS"/>
//	//��ϸ�ο�     http://www.ibm.com/developerworks/cn/java/l-javaExcel/
//	Sheet sheet = book.getSheet(0);//�õ�x��y�����ڵ�Ԫ�������
//	String cellStr = sheet.getRow(x)[y].getContents(); String path = "mnt/sdcard/test.xls";
//	 //����һ����д��Ĺ�����(Workbook)����
//	wwb = Workbook.createWorkbook(new File(fileName));// ��һ�������ǹ���������ƣ��ڶ����ǹ������ڹ������е�λ��
//	WritableSheet ws = wwb.createSheet("sheet1", 0);// ��ָ����Ԫ���������
//	Label lbl1 = new Label(5, 5, "Excel");Label bll2 = new Label(10, 10, "�Ĳ���");
//	ws.addCell(lbl1);ws.addCell(bll2);// ���ڴ���д���ļ���
//	wwb.write();wwb.close();    


[3.8] 


[3.9] 


[3.10] 




[4.1] 




[4.2] 




[4.3] 




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 






[5.1] 




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















