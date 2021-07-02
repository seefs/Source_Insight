@echo off

set TmpPath=G:\_HW_NV_PARA.git

::(1)设置环境变量，XP/WIN7
ver| findstr "XP" >NUL && GOTO:XP || goto:WIN7

:XP
wmic environment where "name='path' and username='<system>'" set VariableValue="%TmpPath%;c:\Test\"
goto endxp

:WIN7
setx /m NVITEM_DIR %TmpPath%

:endxp
echo 正在配置环境变量......
echo   NVITEM_DIR %NVITEM_DIR%


pause

