@echo off&setlocal EnableDelayedExpansion
set resDir=E:\save\SI_res\6531DA\Ring\


mkdir %resDir%\R_SMS_1_mp3
mkdir %resDir%\R_SMS_2_mp3
mkdir %resDir%\R_SMS_3_mp3
mkdir %resDir%\R_SMS_4_mp3

set DestPath=F:\SBD_6531_12C_DA\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\R_SMS_*.mp3')  do (

	set sbd_dir1=%%i
	call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
	set  sbd_project=!sbd_dir2:~0,-26!
	set  sbd_filename=!sbd_dir2:~-11!
	set  sbd_ext=!sbd_dir2:~-4!
	set  sbd_dir=!sbd_filename:.=_!


copy %%i  !resDir!!sbd_dir!\!sbd_project!!sbd_ext!

)

pause