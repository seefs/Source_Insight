@echo off & title ��ȡ���ϼ�Ŀ¼��

cd /d ..
for /f "delims=" %%a in ("%cd%") do set "Dn=%%~nxa"
echo ������ %%Dn%% ��ֵΪ %Dn%
cd /d "%~dp0"

pause