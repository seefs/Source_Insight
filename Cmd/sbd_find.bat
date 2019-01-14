@echo off&setlocal EnableDelayedExpansion

set sbd_param1=
set sbd_param2=
set sbd_param3=
set sbd_param4=
set sbd_dir=
set sbd_type=

set sbd_param_file=..\Cmd_TXT\si_param.h
set sbd_param_file_bak=..\Cmd_TXT\si_param_bak.h
set sbd_param_is_bak= 1
set sbd_log_file=..\Cmd_TXT\si_log.h
set sbd_out_file=..\Cmd_TXT\si_test.h
set sbd_tmp_file1=..\Cmd_TXT\si_tmp_dir1.h
set sbd_tmp_file2=..\Cmd_TXT\si_tmp_dir2.h

echo [param]: > %sbd_log_file%
goto A
exit


:B
set sbd_param_file=..\Cmd_TXT\si_param_bak.h


:A
for /f "tokens=1,* delims=:" %%i in (%sbd_param_file%) do (
	rem	 echo.%%i,%%j>> %sbd_log_file%
	if "%%i"=="Param" (
		rem set /a sbd_n=!sbd_n!+1
		rem set sbd_param!sbd_n!=%%j
		if not defined sbd_param1 (
			set sbd_param1=%%j
		) else if not defined sbd_param2 (
			set sbd_param2=%%j
		) else if not defined sbd_param3 (
			set sbd_param3=%%j
		) else if not defined sbd_param4 (
			set sbd_param4=%%j
		) else (
			set sbd_param5=%%j
		) 

		
		if not defined sbd_param!sbd_n! (
			rem echo not defined  sbd_param!sbd_n!>> %sbd_log_file%
		) else (
			rem echo  defined  sbd_param!sbd_n!>> %sbd_log_file%
		) 
		
	) else if  "%%i"=="Dir" (
		set sbd_dir=%%j
	) else if  "%%i"=="Type" (
		set sbd_type=%%j
	) else  (
		echo.other %%i,%%j>> %sbd_log_file%
	)
)



if "!sbd_param1!"=="" (
	if %sbd_param_is_bak% equ 0 (
		echo.param bak is null>> %sbd_log_file%
	
	) else (
		echo.param is null>> %sbd_log_file%
		set sbd_param_is_bak=0
		goto B
	)
) else (


if %sbd_type% equ 0 (
	set sbd_dir=!sbd_dir!\project\*.mk
	set sbd_param1=!sbd_param1!.*=.*TRUE
	set sbd_param2=!sbd_param2!.*=.*TRUE
) else if %sbd_type% equ 2 (
	set sbd_dir=!sbd_dir!\*.*
) else (
	echo.sbd_type is err>> %sbd_log_file%
	exit
)

echo sbd_param1 = !sbd_param1!>> %sbd_log_file%
echo sbd_param2 = !sbd_param2!>> %sbd_log_file%
echo sbd_param3 = !sbd_param3!>> %sbd_log_file%
echo sbd_dir = !sbd_dir!>> %sbd_log_file%
echo sbd_type = !sbd_type!>> %sbd_log_file%
echo= >> %sbd_log_file%


echo [time]: >> %sbd_log_file%
for /f "tokens=1-3 delims=:." %%i in ('echo %time%') do (
  set h1=%%i
  set m1=%%j
  set s1=%%k
echo start ~ !h1!:!m1!:!s1! >> %sbd_log_file%
)

echo= > %sbd_out_file%

	
FINDSTR /S /B /M  "!sbd_param1!" !sbd_dir!>%sbd_tmp_file1%
FINDSTR /B /M /F:%sbd_tmp_file1% "!sbd_param2!" >%sbd_tmp_file2%

for /f "delims=" %%i in (%sbd_tmp_file2%) do (
 
	for /f "delims=" %%j in ('FINDSTR /B  "!sbd_param1!" %%~i') do (
		echo %%~ni:%%j >>%sbd_out_file%
	)
	for /f "delims=" %%k in ('FINDSTR /B  "!sbd_param2!" %%~i') do (
		echo %%~ni:%%k >>%sbd_out_file%
	)
	echo= >>%sbd_out_file%
)	
)

if %sbd_param_is_bak% equ 0 (
	echo.use param bak , no save>> %sbd_log_file%
	echo=>%sbd_param_file%
) else (
	copy /Y %sbd_param_file% %sbd_param_file_bak%
	echo=>%sbd_param_file%
)

for /f "tokens=1-3 delims=:." %%i in ('echo %time%') do (
  set h2=%%i
  set m2=%%j
  set s2=%%k
echo end   ~ !h2!:!m2!:!s2! >> %sbd_log_file%
)

set /a time_s=(%m2%-%m1%)*60+%s2%-%s1%
echo time ~%time_s% >> %sbd_log_file%

