@echo off
echo ===========Welcome===========
echo.
set /p input=������Ҫ�����·��:
echo.
set /p filename= ������Ҫ������ļ���:
set "output=%input%\%filename%.js"
echo.
echo �������������:%output%
echo.
set /p con=���س���ʼ
echo.
dir %input% /s /b >%output%
echo ===========END===========
set "res=�뵽 %input% �鿴%filename%.js"
echo.
echo %res%
echo.
pause