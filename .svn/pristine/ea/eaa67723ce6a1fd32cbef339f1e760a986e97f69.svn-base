@echo off&setlocal EnableDelayedExpansion

mkdir E:\save\SI_res\mmi_res_240x320_mini_bar
set DestPath=F:\SBD_6531_12C_DA\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_240x320_mini.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_240x320_mini.zip=!

mkdir  E:\save\SI_res\mmi_res_240x320_mini_bar\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Title/Common/*.png -d  E:\save\SI_res\mmi_res_240x320_mini_bar\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Softkey/*.png -d  E:\save\SI_res\mmi_res_240x320_mini_bar\!sbd_dir3!

)

pause
