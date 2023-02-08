@echo off

set TmpPath=%cd%

::(1)设置环境变量，WIN10

:WIN10
setx NVITEM_DIR %TmpPath%

:end
echo 正在配置环境变量......
echo 验证:NVITEM_DIR=%NVITEM_DIR%


pause

