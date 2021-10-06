@echo off&setlocal EnableDelayedExpansion
rem set DestPath= %1
set DestPath=F:\6531E_16A\project

echo=>> ..\Cmd_TXT\si_log.h
echo [mp3]: >> ..\Cmd_TXT\si_log.h
echo dir=%DestPath% >> ..\Cmd_TXT\si_log.h

set /a sbd_n=0
set /a sbd_item=0
		
if "%DestPath%"=="" (
	exit
) else (
	echo=> ..\Cmd_TXT\si_mp3.h
	for /f "delims=" %%i in ('dir /ad /b %DestPath%') do (
		
		set /a sbd_n=!sbd_n!+1
		set sbd_item=
		rem echo %%i>> ..\Cmd_TXT\si_mp3.h
		
		rem ´æÔÚ
		rem if exist "%DestPath%\%%i\resource\RING\R_CALL_1.mp3" echo %%i\R_CALL_1.mp3>> ..\Cmd_TXT\si_mp3.h
		rem if exist "%DestPath%\%%i\resource\RING\R_CALL_2.mp3" echo %%i\R_CALL_2.mp3>> ..\Cmd_TXT\si_mp3.h
		rem if exist "%DestPath%\%%i\resource\RING\R_SMS_1.mp3" echo %%i\R_SMS_1.mp3>> ..\Cmd_TXT\si_mp3.h
		rem if exist "%DestPath%\%%i\resource\RING\R_SMS_2.mp3" echo %%i\R_SMS_2.mp3>> ..\Cmd_TXT\si_mp3.h

		if exist "%DestPath%\%%i\resource\RING\R_CALL_1.mp3" (
			set sbd_item=!sbd_item!c1
		)
		if exist "%DestPath%\%%i\resource\RING\R_CALL_2.mp3" (
			set sbd_item=!sbd_item!c2
		)
		if exist "%DestPath%\%%i\resource\RING\R_SMS_1.mp3" (
			set sbd_item=!sbd_item!s1
		)
		if exist "%DestPath%\%%i\resource\RING\R_SMS_2.mp3" (
			set sbd_item=!sbd_item!s2
		)
		
		rem if not "%sbd_item%"=="" (
		if defined sbd_item (
			echo %%i\!sbd_item!>> ..\Cmd_TXT\si_mp3.h
		)
	)
)
echo file count:%sbd_n%>> ..\Cmd_TXT\si_mp3.h
pause
