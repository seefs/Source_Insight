@echo off
title ping
:loop
	rem setlocal enabledelayedexpansion
	set /a a+=1	
	echo loop %a%
	
	rem �жϵ���1������ping
	if %a% == 1 (
		echo start ping bat success!
	)
	
	rem start ping.bat
	ping 192.168.16.%a% >> _ping.txt

	if %a% == 255 (
		echo exit >> _ping.txt
		exit
	)
	
	if %a% == 300 (
		rem ɱ��ping����
		echo Kill ping cmd!
		TASKKILL /F /IM adb.exe
	)
	
	@choice /t 5 /d y /n >nul
	
goto loop
pause
