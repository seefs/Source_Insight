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

	set curpath=%%~dpi
	call SET "curpath=%%curpath:!rootpath!=%%"

	set nvpath=!curpath!CustNV

	for /f "delims=" %%j in ('dir /s/b ".\!nvpath!\*.*"') do (
	
		set tmpfile=%%~nxj
		set svrfile=%HW_NV_DIR%\!curpath!CustNV\!tmpfile!

		if exist !svrfile! (
			@echo y | xcopy !svrfile! .\!nvpath!\!tmpfile!
		)
	)
)

:: 遍历目录
for /f "delims=" %%i in ('dir /s/b ".\RDNV"') do (

	set curpath=%%~dpi
	call SET "curpath=%%curpath:!rootpath!=%%"

	set nvpath=!curpath!RDNV

	for /f "delims=" %%j in ('dir /s/b ".\!nvpath!\*.*"') do (
	
		set tmpfile=%%~nxj
		set svrfile=%HW_NV_DIR%\!curpath!RDNV\!tmpfile!

		if exist !svrfile! (
			@echo y | xcopy !svrfile! .\!nvpath!\!tmpfile!
		)
	)
)

:end
echo ------------
pause
