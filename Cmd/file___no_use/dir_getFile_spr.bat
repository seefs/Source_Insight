@echo off
set DestPath=F:\trunk\SBD_6531_12C_DA\project
for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_128x160.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=%%sbd_dir1:%DestPath%\=%%
set  sbd_dir3=%sbd_dir2:\mmi_res_128x160.zip=%
echo %%~nxi£¬%%i, %sbd_dir3%
)>> file.txt
pause
