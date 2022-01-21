

//目录[Num][Ca]:
// 1. bat常用
Save:node\ToolsMsg\Macro_Cmd.h \[1.1\] common
Save:node\ToolsMsg\Macro_Cmd.h \[1.2\] call ---------------变量嵌套
Save:node\ToolsMsg\Macro_Cmd.h \[1.3\] FOR ----------------参数
Save:node\ToolsMsg\Macro_Cmd.h \[1.4\] path ---------------参数
Save:node\ToolsMsg\Macro_Cmd.h \[1.5\] copy
Save:node\ToolsMsg\Macro_Cmd.h \[1.6\] Shutdown
Save:node\ToolsMsg\Macro_Cmd.h \[1.7\] --
Save:node\ToolsMsg\Macro_Cmd.h \[1.8\] unrar
Save:node\ToolsMsg\Macro_Cmd.h \[1.9\] findstr
Save:node\ToolsMsg\Macro_Cmd.h \[1.10\] string ------------截取、替换、合并
Save:node\ToolsMsg\Macro_Cmd.h \[1.11\] if...else..., EQU
Save:node\ToolsMsg\Macro_Cmd.h \[1.12\] setlocal ----------变量延迟
Save:node\ToolsMsg\Macro_Cmd.h \[1.13\] set /a, set /p
Save:node\ToolsMsg\Macro_Cmd.h \[1.14\] rename
Save:node\ToolsMsg\Macro_Cmd.h \[1.15\] 
// 2. dir
Save:node\ToolsMsg\Macro_Cmd.h \[2.1\] dir ----------------参数
Save:node\ToolsMsg\Macro_Cmd.h \[2.2\] show: Dir, File , Dir+File：
Save:node\ToolsMsg\Macro_Cmd.h \[2.3\] show: File , Dir
Save:node\ToolsMsg\Macro_Cmd.h \[2.4\] show: ChildFile
Save:node\ToolsMsg\Macro_Cmd.h \[2.5\] show: File
Save:node\ToolsMsg\Macro_Cmd.h \[2.6\] show: File Time
Save:node\ToolsMsg\Macro_Cmd.h \[2.7\] show: hide File
Save:node\ToolsMsg\Macro_Cmd.h \[2.8\] attrib
Save:node\ToolsMsg\Macro_Cmd.h \[2.9\] 当前盘符
Save:node\ToolsMsg\Macro_Cmd.h \[2.10\]
// 3. apk、adb
Save:node\ToolsMsg\Macro_Cmd.h \[3.1\] logcat
Save:node\ToolsMsg\Macro_Cmd.h \[3.2\] signapk
Save:node\ToolsMsg\Macro_Cmd.h \[3.3\] 查看手机分辨率
Save:node\ToolsMsg\Macro_Cmd.h \[3.4\] 模拟器/设备列表
Save:node\ToolsMsg\Macro_Cmd.h \[3.5\] 获取包名
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
//	1.注释 rem REM 和 ::
//	2.命令回显 ECHO 和 @,	  多命令 &,&&,||
//	3.PAUSE,	TITLE,
//	
//	4.字符串：替换，截取，扩展,    setlocal 与 变量延迟
//	5.文件读写,    属性 ATTRIB,	 切换目录 pushd 和 popd
//	6.参数传递,    参数移位 shift[/n]	 返回码 %errorlevel%
//	7.mode 配置系统设备
//	8.FOR遍历,IF,GOTO 和 :
//	9.FIND
//	10.调用外部程序 START
//	11.文件关联 assoc 和 ftype
//	13.CALL, 变量延迟 setlocal 

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
//	FOR /F "delims=， tokens=x,y,m-n" %%I IN (Command1) DO Command2
//		以逗号分隔，取x,y,m-n列    
//		输入变量为%%I，%%J...
//		IN ()为dir、file、string、Command1
//	
//	FOR delims：分隔
//		tokens：列，x,y,m-n,或*
//		skip=1：忽略的行数
//		/d ：仅为目录
//		/R：递归,[可带盘符及路径]
//		/L： 迭代数值范围
//			for /l %%i in (1,1,5) do @echo %%i
//		/f：（默认）

[1.4] path
//	path %~dp0:当前bat目录
//		%%~I——删除全部引号("")
//		%%~fI——将 %%I 扩展到一个完全合格的路径名 
//		%%~dI——仅将 %%I 扩展到一个驱动器号 
//		%%~pI——仅将 %%I 扩展到一个路径 	\SI\Test\mmi_res_...\...\
//		%%~nI——仅将 %%I 扩展到一个文件名 
//		%%~xI——仅将 %%I 扩展到一个文件扩展名 
//		%%~nxi	  文件名
//		%%~sI——扩展的路径只含有短名	  C:\SI\Test\MMI_RE~1\B3107A~1\IMF0D3~1.PNG
//		%%~aI——将 %%I 扩展到文件(或文件夹)的属性 
//		%%~tI——将 %%I 扩展到文件（或文件夹）的修改日期/时间 
//		%%~zI——将 %%I 扩展到文件的大小 
//		%%~$path:I——查找列在path变量中的目录
//	set /p var=请输入变量的值
//		/A expression  
//	%PATH:str1=str2%,
//		set var=%a: =%	 空格替换
//	%a:~1,3%  截取2~4位
//	%a:~-3%  倒数3位
//	%a:~3%	3位
//	%a:~0,-3%  截取0~倒数3位
//	
//	
//	CMD获取当前目录的绝对路径 :
//	@echo off
//	echo 当前盘符：%~d0
//	echo 当前盘符和路径：%~dp0
//	echo 当前批处理全路径：%~f0
//	echo 当前盘符和路径的短文件名格式：%~sdp0
//	echo 当前CMD默认目录：%cd%
//	echo 目录中有空格也可以加入""避免找不到路径
//	echo 当前盘符："%~d0"
//	echo 当前盘符和路径："%~dp0"
//	echo 当前批处理全路径："%~f0"
//	echo 当前盘符和路径的短文件名格式："%~sdp0"
//	echo 当前CMD默认目录："%cd%"

[1.5] copy
//	copy F:\SBD_6531_12C_DA\project\B3102AD_GTOUCH_MX_Shadow24_F4\resource\RING\R_CALL_1.mp3  E:\save\SI_res\ring_mp3_1\.mp3
//	copy F:\SBD_6531_12C_DA\project\S039_JSY_T210_XINOVA_7735CPT_F6\resource\RING\R_CALL_1.mp3	E:\save\SI_res\ring_mp3_1\S039_JSY_T210_XINOVA_7735CPT_F6.mp3

[1.6] Shutdown
// 电脑怎么定时关机win7
// 10分钟：  
//	Shutdown -s -t 600
// 20分钟：  
//	Shutdown -s -t 1200
// 30分钟：  
//	Shutdown -s -t 1800
cmd_s:Shutdown -s -t 1800
// 100分钟：  
//	Shutdown -s -t 6000
// 3小时：  
//	Shutdown -s -t 10800
// 取消
//	Shutdown -a





[1.7] --
hosts :
清除hosts缓存：
ipconfig /flushdns




[1.8] unrar
//解压，密码文件：pass.txt
//	for /F %%i IN (pass.txt) DO UnRAR.exe  x -O- -p%%i ara.rar
//	pause

// 生成密码（4位）：
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


//综合：
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

//	缺点：解大文件，很慢
//	解大文件，用字典+RAR Password Cracker

//	用法：unzip [-Z] [-opts [modifiers]] file [.zip] [list] [-x xlist] [-d exdir]
//	  默认操作是将列表中的文件（除了xlist中的文件）提取到exdir;
//	  文件[.zip]可以是通配符。 -Z => ZipInfo模式（“unzip -Z”的用法）。
//
//	  -p将文件提取到管道，没有消息-l列表文件（短格式）
//	  -f freshen现有文件，请创建无-t测试压缩归档数据
//	  -u更新文件，如有必要，创建-z显示归档注释
//	  -x排除后面的文件（在xlist中）-d将文件提取到exdir
//
//	修饰符：-q安静模式（-qq => quieter）
//	  -n从不覆盖现有文件 - 自动转换任何文本文件
//	  -o覆盖文件WITHOUT提示-aa将所有文件视为文本
//	  -j junk paths（不要创建目录）-v是verbose / print版本信息
//	  -C匹配文件名大小写敏感-L make（一些）名称小写
//	  -X restore UID / GID info -V保留VMS版本号
//	  -K保持setuid / setgid /粘性权限-M管道通过“更多”寻呼机
//	示例（有关详细信息，请参阅unzip.txt）：
//	  unzip data1 -x joe =>从zipfile data1.zip中提取除joe之外的所有文件
//	  unzip -p foo | more =>通过管道将foo.zip的内容发送到程序中
//	  unzip -fo foo ReadMe =>如果存档文件较新，则静默替换现有的ReadMe
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
//	/B 在一行的开始配对模式。 
//	/E 在一行的结尾配对模式。 
//	/L 按字使用搜索字符串。 
//	/R 将搜索字符串作为正则表达式使用。 
//	/S 在当前目录和所有子目录中搜索匹配文件。 
//	/I 指定搜索不分大小写。 
//	/X 打印完全匹配的行。 
//	/V 只打印不包含匹配的行。 
//	/N 在匹配的每行前打印行数。 
//	/M 如果文件含有匹配项，只打印其文件名。 
//	/O 在每个匹配行前打印字符偏移量。 
//	/P 忽略有不可打印字符的文件。 
//	/OFF[LINE] 不跳过带有脱机属性集的文件。 
//	/A:attr 指定有十六进位数字的颜色属性。请见 "color /?" 
//	/F:file 从指定文件读文件列表 (/ 代表控制台)。 
//	/C:string 使用指定字符串作为文字搜索字符串。 
//	/G:file 从指定的文件获得搜索字符串。 (/ 代表控制台)。 
//	/D:dir 查找以分号为分隔符的目录列表 
//	strings 要查找的文字。 
//	[drive:][path]filename 
//	指定要查找的文件。 

//	除非参数有 /C 前缀，请使用空格隔开搜索字符串。 
//	例如: 'FINDSTR "hello there" x.y' 在文件 x.y 中寻找 "hello" 或 
//	"there"。'FINDSTR /C:"hello there" x.y' 文件 x.y 寻找 
//	"hello there"。 
//
//	正则表达式的快速参考: 
//	. 通配符: 任何字符 
//	* 重复: 以前字符或类出现零或零以上次数 
//	^ 行位置: 行的开始 
//	$ 行位置: 行的终点 
//	[class] 字符类: 任何在字符集中的字符 
//	[^class] 补字符类: 任何不在字符集中的字符 
//	[x-y] 范围: 在指定范围内的任何字符 
//	\x Escape: 元字符 x 的文字用法 
//	\<xyz 字位置: 字的开始 
//	xyz\> 字位置: 字的结束 


[1.10] string ------------截取、替换、合并
// 截取:
//	 %a:~1,3%     截取2~4位
//	 %a:~-3%      倒数3位
//	 %a:~3%	      3位
//	 %a:~0,-3%    截取0~倒数3位

// 替换:
//	 set var=%a: =%	 空格替换

// 合并:
//	 set var=%aa%%bb%	 放在一起就可以了



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
//	EQU - 等于
//	NEQ - 不等于
//	LSS - 小于
//	LEQ - 小于或等于
//	GTR - 大于
//	GEQ - 大于或等于



[1.12] setlocal----------变量延迟
// 变量延迟
@echo off&setlocal EnableDelayedExpansion
&endlocal

set sbd_param1=%%j


[1.13] set /a, set /p
set /a 执行数学计算
//	set /a a=2*%b%
set /p 提示用户输入
//	set /p POP=请输入ping的次数：


[1.14] rename
ren K:歌曲\北国之春.mp4 北国之春.mp3


[1.15] 




[2.1] dir
//	@echo off
//	for /d /r "E:\desktop\工具\a	file\dos批处理" %%i in (*) do echo %%i>>list.txt
//	pause
//
//	或者
//	@echo off
//	for /f "delims=" %%i in ('dir /ad/b/s "E:\desktop\工具\a	file\dos批处理"') do echo %%i>>list.txt
//	for /f "delims=" %%i in ('dir /ad/b/s "E:\desktop\工具\a	file\dos批处理"') do echo %%~ni>>list.txt
//	pause
//
//	文件夹名 路径:%%i
//	文件夹名	 :%%~ni
//
//	DIR *.* /B >list.txt


//	[drive:][path][filename]
//				 指定要列出的驱动器、目录和/或文件。
//
//	 /A 		 显示具有指定属性的文件。
//	 attributes   D  目录 			   R  只读文件
//				  H  隐藏文件			 A	准备存档的文件
//				  S  系统文件			 -	表示“否”的前缀
//	 /B 		 使用空格式(没有标题信息或摘要)。
//	 /C 		 在文件大小中显示千位数分隔符。这是默认值。用 /-C 来
//				 停用分隔符显示。
//	 /D 		 跟宽式相同，但文件是按栏分类列出的。
//	 /L 		 用小写。
//	 /N 		 新的长列表格式，其中文件名在最右边。
//	 /O 		 用分类顺序列出文件。
//	 sortorder	  N  按名称(字母顺序)	 S	按大小(从小到大)
//				  E  按扩展名(字母顺序)   D  按日期/时间(从先到后)
//				  G  组目录优先		   -  颠倒顺序的前缀
//	 /P 		 在每个信息屏幕后暂停。
//	 /Q 		 显示文件所有者。
//	 /S 		 显示指定目录和所有子目录中的文件。
//	 /T 		 控制显示或用来分类的时间字符域。
//	 timefield	 C	创建时间
//				 A	上次访问时间


[2.2] show: Dir, File , Dir+File：
//	show: Dir, File , Dir+File：
/*
	for /r . %%i in (.) do (
	    @echo  %%~dpi, %%~nxi, %%i
	)>>z_file.txt
*/


[2.3] show: File , Dir
//	show: File , Dir：/空格式/非目录/子目录/1层子目录
/*
	@echo off
	for /f "delims=" %%i   in ('dir  /b/a-d/s  .\APPS\.\classes-full-debug.jar')  do (
	echo %%~nxi，%%i
	)>> file.txt
	pause
*/

/*
	for /r %%i in (*) do (
		@echo  %%~dpi, %%~nxi, %%i
	)>>z_file.txt
*/


[2.4] show: ChildFile
//	show: ChildFile：/空格式/子目录
/*
	@echo off
	for /f "delims=" %%i in ('dir /s/b ".\*.txt"') do (
		echo %%~ni
	)>>file.txt
	start file.txt
*/


[2.5] show: File
//	show: File：/空格式
/*
	@echo off
	DIR *.* /B >> file.txt
	start file.txt
*/


[2.6] show: File Time
//	show: File Time：
//	
//	@echo off
//	@for /f "tokens=1,2 delims= " %%a in ('dir file.txt^|find "20"') do @echo %%a %%b>time.txt
//	start time.txt


[2.7] show: hide File
//	show: hide File：
//	
//	@echo off
//	for /f "delims=" %%i in ('dir /ah/b/s "*"') do echo %%i
//	start time.txt


[2.8] attrib
//	其他批处理：
//	1.	隐藏文件夹，与取消隐藏
//	
//	隐藏
//	attrib +s +a +h +r e:\bak\tools
//	
//	键入：attrib -a -s -h -r e:\bak\tools
//	
//	
//	attrib +r +h file.txt /s /d
//	ATTRIB [+R | -R] [+A | -A ] [+S | -S] [+H | -H] [[drive:] [path] filename] [/S [/D]]


[2.9] 当前盘符
//	当前盘符：%~d0
//	当前路径：%cd%
//	当前执行命令行：%0
//	当前bat文件路径：%~dp0
//	当前bat文件短路径：%~sdp0
//	G:
//	G:\T1073\
//	G:\T1073\S98T_nv_test.bat
//	G:\T1073\
//	G:\T1073\


[2.10] 




[3.1] logcat
// logcat
adb logcat > C:\Users\ZXSD-SW2\Desktop\其他文件夹\editplus_file\logcat.txt


[3.2] signapk
// signapk
java -jar out/host/linux-x86/framework/signapk.jar  ~/alps/build/target/product/security/platform.x509.pem ~/alps/build/target/product/security/platform.pk8 ~/Settings.apk ~/output.apk
// signapk
java -jar signapk.jar certificate.pem key.pk8 your-app.apk	your-signed-app.apk
// signapk
java -jar signapk.jar platform.x509.pem platform.pk8 HTSAFETY.apk HTSAFETY


[3.3] 查看手机分辨率
adb shell dumpsys window displays


[3.4] 模拟器/设备列表
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


[3.5] 获取包名
//	cd	D:\adt-bundle-windows-x86_64-20131030\sdk\build-tools\24.0.0
//	aapt dump badging E:\桌面\QuickSearchBox.apk > file.txt
//	aapt dump badging E:\桌面\QuickSearchBoxBenchmarks.apk > file.txt
//	="aapt dump badging E:\android\apk_bak\angler\"&B1&A1&">E:\android\apk_bak\angler\aapt\"&LEFT(A1,SEARCH("\",A1)-1)&".txt"
	

[3.6] apktool
//	cd F:\工具\3  linux工具\apktool
//	apktool d hello.apk /tmp/hello        #解包
//	apktool b /tmp/hello /tmp/hello2.apk        #打包
//
//	./apktool d  -f Velvet.apk  -o   Velvet
//	apktool d [-s] -f <apkPath> -o <folderPath>
	

[3.7] sqlite3
//sqlite3 导入导出excel、Excel操作
//	D:cd D:\adt-bundle-windows-x86-20130522\sdk\platform-tools\adb.exe shell
//
//	/data/data/com.*.*(package name)/  
//	adb kill-server
//	adb start-serveradb shell
//	   数据库表的定义： 
//	cd D:\adt-bundle-windows-x86-20130522\sdk\tools\
//	sqlite3.exe d:\ss.db 
//	create table bookroom(id integer, roomname nvarchar(20), mapfilename nvarchar(20));
//	create table ind(id1 integer, roomname nvarchar(20), id2 integer);
//	 
//	   1、Excel  ->  bookroom.csv  ->  删首行，另存UTF-8
//	   2、利用sqlite3的import命令将数据从文件导入到表中，默认的分割符号是竖线'|'。
//	sqlite3 test.db
//	sqlite> .separator ','
//	sqlite>.import D:\\ss.csv ind
//	     3、这样数据就导入到了bookroom表中了，如下测试
//	sqlite> select * from bookroom;
//	      4、导出 
//	sqlite> .output test.txt   
//	sqlite> select * from table_name; 
//	sqlite> .output stdout
//	sqlite> select * from table_name; 
//	sqlite> .output stdout  
//	      5、导入模拟器       6、详细过程：
//	single 简字表;complex 简字表;common 常字表
//	tone 声调;standard 标准;property 词性;field 场
//	create table standard(name nvarchar(20),n1 integer,  n2 integer,  n3 integer);
//	.import E:\\开发\\专词库\\标准.csv standard
//	.output  E:\\开发\\专词库\\test.txt
//	select * from standard limit 10; 
//	DELETE FROM standard ;
//
//	create table property (n1 integer, name2 nvarchar(10), name1 nvarchar(10));
//	.import E:\\开发\\专词库\\词性.csv property 
//
//
//	create table single(name nvarchar(10));
//	create table tmp as select name2  from single;
//	.import E:\\开发\\专词库\\single1.csv single.import E:\\开发\\专词库\\single2.csv single
//	drop table single ;
//	alter table tmp rename to single ;
//
//	create table complex(name nvarchar(10));.import E:\\开发\\专词库\\complex.csv complex
//	create table common(name nvarchar(10));.import E:\\开发\\专词库\\common.csv common
//	create table three(name nvarchar(12));
//	.import E:\\开发\\专词库\\three1.csv three.import E:\\开发\\专词库\\three2.csv three
//	create table four(name nvarchar(16));
//	.import E:\\开发\\专词库\\four1.csv four.import E:\\开发\\专词库\\four2.csv four
//	create table more(name nvarchar(30));.import E:\\开发\\专词库\\more.csv more
//
//
//	create table one(name nvarchar(10), n1 integer,n2 integer,n3 integer,n4 integer,n5 integer,n6 integer,n7 integer, name2 nvarchar(10), name3 nvarchar(10));
//	alter table single add column name  varchar;.import E:\\开发\\专词库\\one.csv one
//	select * from one where name="鵓"; 
//	select * from one where name2 ="鹁"; 
//	select count(*) from one; 
//
//	 
//	  adb push 001.jpg /sdcard
//	adb shell 
//	Excel操作
//	<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>
//	 <uses-permission android:name="android.permission.MOUNT_UNMOUNT_FILESYSTEMS"/>
//	//详细参考     http://www.ibm.com/developerworks/cn/java/l-javaExcel/
//	Sheet sheet = book.getSheet(0);//得到x行y列所在单元格的内容
//	String cellStr = sheet.getRow(x)[y].getContents(); String path = "mnt/sdcard/test.xls";
//	 //创建一个可写入的工作薄(Workbook)对象
//	wwb = Workbook.createWorkbook(new File(fileName));// 第一个参数是工作表的名称，第二个是工作表在工作薄中的位置
//	WritableSheet ws = wwb.createSheet("sheet1", 0);// 在指定单元格插入数据
//	Label lbl1 = new Label(5, 5, "Excel");Label bll2 = new Label(10, 10, "的操作");
//	ws.addCell(lbl1);ws.addCell(bll2);// 从内存中写入文件中
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


















