@echo off&setlocal EnableDelayedExpansion

echo >z_file.txt
echo ======================================================>>z_file.txt

set rootpath=%~dp0

for /r %%i in (*) do (

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
	) else if "!curpath:~0,7!"=="gradle\" (
		set "f="
	) else (
rem		@echo %%~dpi, !curpath!,  %%~nxi, %%i
		@echo !curpath!%%~nxi
	) 
    
)>>z_file.txt
start z_file.txt
