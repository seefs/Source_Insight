@echo off
setlocal enabledelayedexpansion
set filenames=0
set numbers=0

set subCount=20

set filename=1
for /f "delims=" %%a in (ref_list_sub100.txt) do (
        set /a numbers+=1
        set /a filenames+=1
        echo %%a>>sub_!filename!.txt
        if !numbers! geq !subCount! (
                set /a filename+=1
                set numbers=0
                )
)