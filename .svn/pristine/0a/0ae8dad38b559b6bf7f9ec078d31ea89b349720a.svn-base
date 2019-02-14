@echo off&setlocal EnableDelayedExpansion
set resDir=E:\save\SI_res\6531DA
set scrSize=128x160

mkdir %resDir%\%scrSize%_WALL

set DestPath=F:\SBD_6531_12C_DA\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_128x160.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_128x160.zip=!

unzip  -qjo  %%i  wallpaper/MMI_RES_DEFAULT/IMAG/staticwallpaper/*.jpg -d  %resDir%\%scrSize%_WALL\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Bg/*.jpg -d  %resDir%\%scrSize%_WALL\!sbd_dir3!

)

pause
