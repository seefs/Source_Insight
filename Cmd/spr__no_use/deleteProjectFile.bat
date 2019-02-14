@echo off
set RootFolder=.\
for /f "delims=" %%i in ('dir /ad /b %RootFolder%') do (
    echo %%i
    
    del /f /q "%RootFolder%\%%i\resource\RING\*.*
    del /f /q "%RootFolder%\%%i\resource\common_mdu_def.h
    del /f /q "%RootFolder%\%%i\resource\mmi*
    del /f /q "%RootFolder%\%%i\resource\R_NETWORK_*
    del /f /q "%RootFolder%\%%i\resource\sprd_*
    del /f /q "%RootFolder%\%%i\resource\str_table*
    del /f /q "%RootFolder%\%%i\mmi_res_* 
    del /f /q "%RootFolder%\%%i\New_common.bat
    del /f /q "%RootFolder%\%%i\cust_new.bat
    del /f /q "%RootFolder%\%%i\project_*
)