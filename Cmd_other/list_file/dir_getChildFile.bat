@echo off
for /f "delims=" %%i in ('dir /s/b ".\*.txt"') do (
    echo %%~ni
)>>file.txt
start file.txt
pause>nul