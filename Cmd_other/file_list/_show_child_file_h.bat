@echo off
echo >z_file.txt
for /f "delims=" %%i in ('dir /s/b ".\*.h"') do (
    echo %%~ni
)>>z_file.txt
start z_file.txt
