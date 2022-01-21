@echo off
@setlocal
 
set start=%time%
 
cd ./

echo \%0...
rd /s/q applib
rd /s/q bootloader_bin
rd /s/q btstacka
rd /s/q BuildMMAA.pl
rd /s/q cmd.exe
rd /s/q config

echo %%10...
rd /s/q custom
rd /s/q Debug.men
rd /s/q del_mtk.bat
rd /s/q Doc
rd /s/q drm
rd /s/q drv
rd /s/q fmr
rd /s/q fmt

echo %%20...
rd /s/q fm_drv
rd /s/q fs
rd /s/q gdi_arm
rd /s/q hal
rd /s/q inc
rd /s/q inet_ps
rd /s/q init
rd /s/q interface
rd /s/q j2me

echo %%30...
rd /s/q kal
rd /s/q l1_dm
rd /s/q make
rd /s/q matv
rd /s/q MCT_TOOL
rd /s/q media
rd /s/q meta

echo %%40...
rd /s/q mmi_core
rd /s/q MoDIS_VC9\MoDIS_LIB\MT6260
rd /s/q MoDIS_VC9\MoDIS_LIB\MT6261
rd /s/q MoDIS_VC9
rd /s/q mre
rd /s/q mtkdebug

echo %%50...
rd /s/q mtk_lib\MT6260
rd /s/q mtk_lib\MT6261
rd /s/q mtk_lib
rd /s/q mtk_tools
rd /s/q nucleus
rd /s/q nvram

echo %%60...
rd /s/q plutommi\Customer\Audio
rd /s/q plutommi\Customer\CustResource
rd /s/q plutommi\Customer\Images
rd /s/q plutommi\Customer\LcdResource
rd /s/q plutommi\Customer

echo %%70...
rd /s/q plutommi\Framework
rd /s/q plutommi\mmi
rd /s/q plutommi\MtkApp
rd /s/q plutommi\Service
rd /s/q plutommi

echo %%80...
rd /s/q ps
rd /s/q rsva
rd /s/q security
rd /s/q ssf
rd /s/q sss
rd /s/q sst
rd /s/q tools
rd /s/q tst
rd /s/q ttl
rd /s/q usb
rd /s/q vcard

echo %%90...
rd /s/q vendor\InputMethod\cstar
rd /s/q vendor\InputMethod\GUOBI
rd /s/q vendor\InputMethod\Komoxo
rd /s/q vendor\InputMethod\mtk
rd /s/q vendor\InputMethod\T9
rd /s/q vendor\InputMethod
rd /s/q vendor\intergrafx
rd /s/q vendor\intergrafx_hw
rd /s/q vendor
rd /s/q venusmmi
rd /s/q verno
rd /s/q wapadp
rd /s/q xmlp

echo %%100...


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
