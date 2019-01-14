@echo off
set sbd_dir= %1

echo=>> si_log.h
echo [version]: >> si_log.h
echo dir=%sbd_dir% >> si_log.h

if "%sbd_dir%"=="" (
	exit
) else (
	dir  /b/a-d/s  %sbd_dir%\project\.\version_software_mocor.h>> si_dir_version.h
)