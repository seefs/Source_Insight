@echo off
echo >z_file.txt
for /f "delims=" %%i in ('dir /s/b ".\*.ipynb"') do (
    echo %%~fi
)>>z_file.txt
start z_file.txt

