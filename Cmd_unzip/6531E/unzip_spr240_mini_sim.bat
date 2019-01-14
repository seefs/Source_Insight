@echo off&setlocal EnableDelayedExpansion
set resDir=E:\save\SI_res\6531E
set scrSize=240x320

mkdir %resDir%\%scrSize%_SIM

set DestPath=F:\6531E_16A\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_240x320_mini.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_240x320_mini.zip=!

unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/signal/sim1/*.png -d  %resDir%\%scrSize%_SIM\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/signal/sim2/*.png -d  %resDir%\%scrSize%_SIM\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/signal_gprs/sim1/*.png -d  %resDir%\%scrSize%_SIM\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/signal_gprs/sim2/*.png -d  %resDir%\%scrSize%_SIM\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/no_sim/*.png -d  %resDir%\%scrSize%_SIM\!sbd_dir3!

)

pause
