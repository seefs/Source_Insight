@echo off&setlocal EnableDelayedExpansion

:: 检查环境变量
if not DEFINED NVITEM_DIR (
	@echo "pls add env set(nv dir) NVITEM_DIR"
	pause
	goto end:
) else (
	SET HW_NV_DIR=%NVITEM_DIR%\T107\W20.46.4
	echo Enter !HW_NV_DIR!
	cd !NVITEM_DIR!
	git pull
	cd %~dp0
	echo Exit !NVITEM_DIR!
)

echo "按确认开始copy nv"
pause

echo ------------
set rootpath=%cd%\

:: 遍历目录
for /f "delims=" %%i in ('dir /s/b ".\CustNV"') do (

rem "nvitem"
rem    echo %%~ni

rem "nvitem"
rem    echo %%~nxi

rem "...\F55U_G55U\nvitem"
rem    echo %%i
    
rem "...\F55U_G55U"
rem    echo %%~dpi

	set curpath=%%~dpi
	call SET "curpath=%%curpath:!rootpath!=%%"
	
rem "F55U_G55U\"
	@echo !curpath!
	
	set nvpath=!curpath!CustNV

rem "F55U_G55U\CustNV"
	@echo !nvpath!

	for /f "delims=" %%j in ('dir /s/b ".\!nvpath!\*.*"') do (
	
		set tmpfile=%%~nxj
		set svrfile=%HW_NV_DIR%\!curpath!CustNV\!tmpfile!
	    @echo =====!tmpfile!
	    @echo =====!svrfile!

		if exist !svrfile! (
	    	@echo =====svrfile=====
	    	@echo =====!svrfile!
	    	@echo =====nvpath=====
	    	@echo =====.\!nvpath!\!tmpfile!
			@echo y | xcopy !svrfile! .\!nvpath!\!tmpfile!
echo ####
		)
	)
)

:: 遍历目录
for /f "delims=" %%i in ('dir /s/b ".\RDNV"') do (

rem "nvitem"
rem    echo %%~ni

rem "nvitem"
rem    echo %%~nxi

rem "...\F55U_G55U\nvitem"
rem    echo %%i
    
rem "...\F55U_G55U"
rem    echo %%~dpi

	set curpath=%%~dpi
	call SET "curpath=%%curpath:!rootpath!=%%"
	
rem "F55U_G55U\"
	@echo !curpath!
	
	set nvpath=!curpath!RDNV
	
rem "F55U_G55U\nvitem"
	@echo !nvpath!

	for /f "delims=" %%j in ('dir /s/b ".\!nvpath!\*.*"') do (
	
		set tmpfile=%%~nxj
		set svrfile=%HW_NV_DIR%\!curpath!RDNV\!tmpfile!
	    @echo =====!tmpfile!
	    @echo =====!svrfile!

		if exist !svrfile! (
	    	@echo =====svrfile=====
	    	@echo =====!svrfile!
	    	@echo =====nvpath=====
	    	@echo =====.\!nvpath!\!tmpfile!
			@echo y | xcopy !svrfile! .\!nvpath!\!tmpfile!
echo ####
		)
	)
)

:end
echo ------------
pause
