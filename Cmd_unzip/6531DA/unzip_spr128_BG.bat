@echo off&setlocal EnableDelayedExpansion

set resDir=E:\save\SI_res\6531DA
set scrSize=128x160

mkdir %resDir%\%scrSize%_BG
set DestPath=E:\SVN\6531DA_new\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_128x160.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_128x160.zip=!

unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Bg/IMAGE_COMMON_BG.png -d  %resDir%\%scrSize%_BG\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Bg/IMAGE_COMMON_DIAL_BG.png -d  %resDir%\%scrSize%_BG\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Title/IMAGE_STATUS_BAR.png -d  %resDir%\%scrSize%_BG\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Softkey/IMAGE_SOFTKEY_BG.png -d  %resDir%\%scrSize%_BG\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/Dial/IMAGE_DIAL_EDIT_BG.png -d  %resDir%\%scrSize%_BG\!sbd_dir3!

)

pause
