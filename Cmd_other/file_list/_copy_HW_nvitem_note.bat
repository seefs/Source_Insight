@echo off&setlocal EnableDelayedExpansion

:: ��黷������
if not exist %HW_NV_PARA% (
	@echo "����ӻ�������(nvĿ¼) HW_NV_PARA"
	exit
) else (
	SET HW_NV_DIR=%HW_NV_PARA%\8910FFS\W20.36.2

	echo Enter !HW_NV_DIR!
	cd !HW_NV_DIR!
	git pull
	cd %~dp0
	echo Exit !HW_NV_DIR!
)

echo "��ȷ�Ͽ�ʼcopy nv"
pause

echo ------------
set rootpath=%cd%\

:: ����Ŀ¼
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