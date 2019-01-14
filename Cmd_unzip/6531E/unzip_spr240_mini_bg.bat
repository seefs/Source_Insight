@echo off&setlocal EnableDelayedExpansion
set path=%path%;C:\CSDTK\cygwin\bin;
set resDir=E:\save\SI_res\6531E
set scrSize=240x320

mkdir %resDir%\%scrSize%_BG

set DestPath=F:\6531E_16A\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_240x320_mini.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_240x320_mini.zip=!

unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Bg/IMAGE_COMMON_BG.png -d  %resDir%\%scrSize%_dial\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Bg/IMAGE_COMMON_DIAL_BG.png -d  %resDir%\%scrSize%_dial\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Title/IMAGE_STATUS_BAR.png -d  %resDir%\%scrSize%_dial\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Softkey/IMAGE_SOFTKEY_BG.png -d  %resDir%\%scrSize%_dial\!sbd_dir3!

)

pause
