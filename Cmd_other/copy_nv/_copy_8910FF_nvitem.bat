@echo off&setlocal EnableDelayedExpansion

:: ��黷������
if not DEFINED NVITEM_DIR (
	@echo "pls add env set(nv dir) NVITEM_DIR"
	pause
	goto end:
) else (
	SET HW_NV_DIR=%NVITEM_DIR%\8910FF\W20.36.2

	echo Enter !HW_NV_DIR!
	cd !NVITEM_DIR!
	git pull
	cd %~dp0
	echo Exit !NVITEM_DIR!
)

echo "��ȷ�Ͽ�ʼcopy nv"
pause

echo ------------
set rootpath=%cd%\

:: ����Ŀ¼
for /f "delims=" %%i in ('dir /s/b ".\nvitem"') do (

	set curpath=%%~dpi
	call SET "curpath=%%curpath:!rootpath!=%%"

	set nvpath=!curpath!nvitem

	for /f "delims=" %%j in ('dir /s/b ".\!nvpath!\*.*"') do (
	
		set tmpfile=%%~nxj
		set svrfile=%HW_NV_DIR%\!curpath!!tmpfile!

		if exist !svrfile! (
			@echo y | xcopy !svrfile! .\!nvpath!\!tmpfile!
		)
	    
	)
)

:end
echo ------------
pause
