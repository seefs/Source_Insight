@echo off&setlocal EnableDelayedExpansion

:: 检查环境变量
if not exist %HW_NV_PARA% (
	@echo "请添加环境变量(nv目录) HW_NV_PARA"
	exit
) else (
	SET HW_NV_DIR=%HW_NV_PARA%\8910FFS\W20.36.2

	echo Enter !HW_NV_DIR!
	cd !HW_NV_DIR!
	git pull
	cd %~dp0
	echo Exit !HW_NV_DIR!
)

echo "按确认开始copy nv"
pause

echo ------------
set rootpath=%cd%\

:: 遍历目录
for /f "delims=" %%i in ('dir /s/b ".\nvitem"') do (

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
	
	set nvpath=!curpath!nvitem
	
rem "F55U_G55U\nvitem"
	@echo !nvpath!

	for /f "delims=" %%j in ('dir /s/b ".\!nvpath!\*.*"') do (
	
		set tmpfile=%%~nxj
	    
		set svrfile=%HW_NV_DIR%\!curpath!!tmpfile!

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

echo ------------