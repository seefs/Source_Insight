@echo off

set TmpPath=%cd%

::(1)���û���������XP/WIN7
ver| findstr "XP" >NUL && GOTO:XP || goto:WIN7

:XP
wmic environment where "name='SI_VER' and username='<system>'" set VariableValue="WIN7"
goto endxp

:WIN7
setx /m SI_VER WIN7

:endxp
echo �������û�������......
echo ��֤:SI_VER=%SI_VER%


pause

