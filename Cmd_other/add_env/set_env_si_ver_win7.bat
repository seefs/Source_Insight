@echo off

set TmpPath=%cd%

::(1)设置环境变量，XP/WIN7
ver| findstr "XP" >NUL && GOTO:XP || goto:WIN7

:XP
wmic environment where "name='SI_VER' and username='<system>'" set VariableValue="WIN7"
goto endxp

:WIN7
setx /m SI_VER WIN7

:endxp
echo 正在配置环境变量......
echo 验证:SI_VER=%SI_VER%


pause

