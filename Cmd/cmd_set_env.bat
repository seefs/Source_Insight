@echo off

set TmpPath=aaaa

::(1)���û���������XP/WIN7
ver| findstr "XP" >NUL && GOTO:XP || goto:WIN7

:XP
wmic environment where "name='path' and username='<system>'" set VariableValue="%TmpPath%;c:\Test\"
goto endxp

:WIN7
setx /m AAA_SETX1 "111111"
setx AAA_SETX2 "222222" -m

:endxp
echo �������û�������......
echo   AAA_SETX1 %AAA_SETX1%
echo   AAA_SETX2 %AAA_SETX2%


::(2)���û���������reg
IF EXIST %systemroot%\system32\setx.exe ( 
	echo ��������ϵͳ��������......
	reg add "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\Environment" /v AAA_SYS /t reg_sz /d "123456" /f
	echo ���������û���������......
	reg add "HKCU\Environment" /v AAA_USER /t reg_sz /d "000000" /f

) else (
	echo δ���ҵ�setx!
)
echo   AAA_SYS  %AAA_SYS%
echo   AAA_USER %AAA_USER%



