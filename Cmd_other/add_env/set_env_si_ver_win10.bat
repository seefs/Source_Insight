@echo off

set TmpPath=%cd%

::(1)设置环境变量，WIN10

:WIN10
setx SI_VER WIN10

:end
echo 正在配置环境变量......
echo 验证:SI_VER=%SI_VER%


pause

