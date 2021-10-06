@echo off


set TmpKey=Python
set TmpPath=%cd%

echo %path% | findstr %TmpKey% >nul && (
    echo path contains %TmpKey%
) || (
    echo cfg path env, add %TmpPath%
        wmic ENVIRONMENT where "name='path' and username='<system>'" set VariableValue="%path%;%TmpPath%"

	echo cfg......
)

pause

