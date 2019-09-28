@echo off

cd ..
set a=%cd%
set b=%a:\=\\%
echo macro getRootPath(0) { return "%b%" }>.\Macro\sbd_root_path.em

echo set si dir:
echo   %b%
pause