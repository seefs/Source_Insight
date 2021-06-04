@echo off

set TmpPath=aaaa

::(1)设置环境变量，XP/WIN7
ver| findstr "XP" >NUL && GOTO:XP || goto:WIN7

:XP
wmic environment where "name='path' and username='<system>'" set VariableValue="%TmpPath%;c:\Test\"
goto endxp

:WIN7
setx /m AAA_SETX1 "111111"
setx AAA_SETX2 "222222" -m

:endxp
echo 正在配置环境变量......
echo   AAA_SETX1 %AAA_SETX1%
echo   AAA_SETX2 %AAA_SETX2%


::(2)设置环境变量，reg
IF EXIST %systemroot%\system32\setx.exe ( 
	echo 正在配置系统环境变量......
	reg add "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\Environment" /v AAA_SYS /t reg_sz /d "123456" /f
	echo 正在配置用户环境变量......
	reg add "HKCU\Environment" /v AAA_USER /t reg_sz /d "000000" /f

) else (
	echo 未能找到setx!
)
echo   AAA_SYS  %AAA_SYS%
echo   AAA_USER %AAA_USER%



