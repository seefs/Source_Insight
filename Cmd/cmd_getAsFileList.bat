@echo off&setlocal EnableDelayedExpansion

set schDir=%1
if "%schdir%"=="" (
	echo "please input path"
	pause
	exit
)

::Ìæ»», #Ìæ»»Îª¿Õ¸ñ
set schDir=%schDir:#= %

set saveFile=..\Cmd_TXT\si_filelist.h
echo >%saveFile%

set rootpath=%schDir%
if not "%rootpath:~-1%"=="\" (
	set rootpath=%rootpath%\
)
echo %rootpath:~-1%:>>%saveFile%


echo %schDir%:>>%saveFile%
echo %rootpath%:>>%saveFile%
echo ======================================================>>%saveFile%

for /f "delims=" %%i   in ('dir  /b/a-d/s  %schDir%')  do (

	set curpath=%%~dpi
	call SET "curpath=%%curpath:!rootpath!=%%"
	
	if "!curpath!"=="" (
		@echo %%~nxi
	) else if "!curpath:~0,4!"==".git" (
		set "f="
	) else if "!curpath:~0,5!"==".idea" (
		set "f="
	) else if "!curpath:~0,7!"==".gradle" (
		set "f="
	) else if "!curpath:~0,6!"=="build\" (
		set "f="
	) else if "!curpath:~0,9!"=="app\build" (
		set "f="
	) else if "!curpath:~0,7!"=="gradle\" (
		set "f="
	) else (
rem		@echo %%~dpi, !curpath!,  %%~nxi, %%i
		@echo !curpath!%%~nxi
	) 
    
)>>%saveFile%
start %saveFile%
