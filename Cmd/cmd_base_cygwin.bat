@echo off

echo=>> ..\Cmd_TXT\si_log.h
echo [cmd]: >> ..\Cmd_TXT\si_log.h
echo %1 %2 %3 %4 %5 %6 %7>> ..\Cmd_TXT\si_log.h

set path=%path%;C:\CSDTK\cygwin\bin;
%1 %2 %3 %4 %5 %6 %7