@echo off
echo ===========Welcome===========
echo.
set /p input=输入您要输出的路径:
echo.
set /p filename= 输入您要保存的文件名:
set "output=%input%\%filename%.js"
echo.
echo 将会输出在这里:%output%
echo.
set /p con=按回车开始
echo.
dir %input% /s /b >%output%
echo ===========END===========
set "res=请到 %input% 查看%filename%.js"
echo.
echo %res%
echo.
pause