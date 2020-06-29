@echo off

set str=machine-order-service

set matchStr1=orderd

set matchStr2=order

echo %str% | findstr %matchStr1% >nul && echo yes || echo no

echo %str% | findstr %matchStr2% >nul && echo yes || echo no

echo %str% | findstr %matchStr1% >nul && echo yes

echo %str% | findstr %matchStr2% >nul && echo yes

pause