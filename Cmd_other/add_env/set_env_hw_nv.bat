@echo off

set TmpPath=%cd%

echo ����ϵͳ�汾:
ver | findstr /r /i " [�汾 10.0.*]" > NUL && goto win10
ver | findstr /r /i " [�汾 5.1." > NUL &&  goto WindowsXP
ver | findstr /r /i " [�汾 6.1." > NUL &&  goto Windows7
ver | findstr /r /i " [�汾 6.2." > NUL &&  goto win8
ver | findstr /r /i " [�汾 6.3." > NUL &&  goto win8.1
ver | findstr /r /i " [�汾 6.2." > NUL &&  goto win8
ver | findstr /r /i "�汾" > NUL &&  goto Windows7

:WindowsXP
echo WindowsXP...
wmic environment where "name='path' and username='<system>'" set VariableValue="%TmpPath%;c:\Test\"
goto endTag

:Windows7
echo Windows7...
setx /m NVITEM_DIR %TmpPath%
goto endTag

:win8
echo win8...
goto endTag

:win8.1
echo win8.1...
goto endTag

:win10
echo win10...
setx NVITEM_DIR %TmpPath%
goto endTag

:endTag
echo �������û�������......
echo ��֤:NVITEM_DIR=%NVITEM_DIR%


pause

