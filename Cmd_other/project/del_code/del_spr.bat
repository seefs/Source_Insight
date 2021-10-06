@echo off
@setlocal
 
set start=%time%
 
cd ./
rd /s/q ARM
rd /s/q BASE
rd /s/q CAF
rd /s/q char_lib
rd /s/q chip_drv
rd /s/q CMMB
rd /s/q common
rd /s/q connectivity
rd /s/q DAPS
rd /s/q external
rd /s/q fdl_bootloader
rd /s/q halo_rec
rd /s/q lib\modem
rd /s/q lib\UIS8910_ROM_16MB_DS_DEBUG
rd /s/q lib
rd /s/q make
rd /s/q MS_Customize
rd /s/q MS_MMI_Main\source\mmi_app\app\accessory
rd /s/q MS_MMI_Main\source\mmi_app\app\audioplayer
rd /s/q MS_MMI_Main\source\mmi_app\app\fmm
rd /s/q MS_MMI_Main\source\mmi_app\app\game
rd /s/q MS_MMI_Main\source\mmi_app\app\ia_java
rd /s/q MS_MMI_Main\source\mmi_app\app\im
rd /s/q MS_MMI_Main\source\mmi_app\app\myriad_java
rd /s/q MS_MMI_Main\source\mmi_app\app\operamini4
rd /s/q MS_MMI_Main\source\mmi_app\app\operamini6
rd /s/q MS_MMI_Main\source\mmi_app\app\sms
rd /s/q MS_MMI_Main\source\mmi_app\app\theme
rd /s/q MS_MMI_Main\source\mmi_app\app\widget
rd /s/q MS_MMI_Main\source\mmi_app\app\
rd /s/q MS_MMI_Main\source\mmi_ctrl
rd /s/q MS_MMI_Main\source\winsimulator_tp\win_platform\SIM_Set_Files\SIM1
rd /s/q MS_MMI_Main\source\winsimulator_tp\win_platform\SIM_Set_Files\SIM2
rd /s/q MS_MMI_Main\source\winsimulator_tp\win_platform\SIM_Set_Files\SIM3
rd /s/q MS_MMI_Main\source\winsimulator_tp\win_platform\SIM_Set_Files\SIM4
rd /s/q MS_MMI_Main\source\winsimulator_tp\
rd /s/q MS_MMI_Main\source\resource\Common
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\common\MMI_RES_DEFAULT\IMAG\StatusbarIcon
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\common\MMI_RES_DEFAULT\IMAG\status_area
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\common\MMI_RES_DEFAULT\IMAG\multi_sys
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\audioplayer
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\camera
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\cc
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\clock
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\fm
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\im
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\livewallpaper
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\multim
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\pb
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\pic
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\sms
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\wallpaper
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\weather
rd /s/q MS_MMI_Main\source\resource\mmi_res_128x160\
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\common\MMI_RES_DEFAULT\IMAG\StatusbarIcon
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\common\MMI_RES_DEFAULT\IMAG\status_area
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\common\MMI_RES_DEFAULT\IMAG\multi_sys
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\audioplayer
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\camera
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\cc
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\clock
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\fm
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\im
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\livewallpaper
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\multim
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\pb
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\pic
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\sms
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\wallpaper
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\weather
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x240\
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\common\MMI_RES_DEFAULT\IMAG\StatusbarIcon
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\common\MMI_RES_DEFAULT\IMAG\status_area
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\common\MMI_RES_DEFAULT\IMAG\multi_sys
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\audioplayer
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\camera
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\cc
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\clock
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\fm
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\im
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\livewallpaper
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\multim
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\pb
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\pic
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\sms
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\wallpaper
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\weather
rd /s/q MS_MMI_Main\source\resource\mmi_res_240x320\
rd /s/q MS_MMI_Main\source\resource\
rd /s/q MS_MMI_Main\
rd /s/q MS_Ref
rd /s/q nes
rd /s/q PARSER
rd /s/q pri_code
rd /s/q project
rd /s/q RTOS
rd /s/q sccard
rd /s/q SPDE_PRJ
rd /s/q spload
rd /s/q tcard_resource
rd /s/q Third-party
rd /s/q tools
rd /s/q version

:: get time
cmd /c %*
 
set end=%time%
set options="tokens=1-4 delims=:.,"
for /f %options% %%a in ("%start%") do set start_h=%%a&set /a start_m=100%%b %% 100&set /a start_s=100%%c %% 100&set /a start_ms=100%%d %% 100
for /f %options% %%a in ("%end%") do set end_h=%%a&set /a end_m=100%%b %% 100&set /a end_s=100%%c %% 100&set /a end_ms=100%%d %% 100
 
set /a hours=%end_h%-%start_h%
set /a mins=%end_m%-%start_m%
set /a secs=%end_s%-%start_s%
set /a ms=%end_ms%-%start_ms%
if %ms% lss 0 set /a secs = %secs% - 1 & set /a ms = 100%ms%
if %secs% lss 0 set /a mins = %mins% - 1 & set /a secs = 60%secs%
if %mins% lss 0 set /a hours = %hours% - 1 & set /a mins = 60%mins%
if %hours% lss 0 set /a hours = 24%hours%
if 1%ms% lss 100 set ms=0%ms%
 
:: Mission accomplished
set /a totalsecs = %hours%*3600 + %mins%*60 + %secs%
echo command took %hours%:%mins%:%secs%.%ms% (%totalsecs%.%ms%s total)

pause
