@echo off

set TmpPath=G:\_HW_NV_PARA.git

::(1)���û���������XP/WIN7
ver| findstr "XP" >NUL && GOTO:XP || goto:WIN7

:XP
wmic environment where "name='path' and username='<system>'" set VariableValue="%TmpPath%;c:\Test\"
goto endxp

:WIN7
setx /m NVITEM_DIR %TmpPath%

:endxp
echo �������û�������......
echo   NVITEM_DIR %NVITEM_DIR%


pause

