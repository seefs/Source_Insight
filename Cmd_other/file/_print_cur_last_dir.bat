@echo off & title 获取上上级目录名

cd /d ..
for /f "delims=" %%a in ("%cd%") do set "Dn=%%~nxa"
echo 变量名 %%Dn%% 的值为 %Dn%
cd /d "%~dp0"

pause