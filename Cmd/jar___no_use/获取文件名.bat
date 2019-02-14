@echo off
for /f "delims=" %%i in ('dir /s/b ".\*.*"') do (
    echo %%~ni
)>>op.txt
start op.txt
pause>nul