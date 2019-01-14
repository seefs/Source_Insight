@if not exist 2.txt @for /f "tokens=1,2 delims= " %%a in ('dir d:\1.txt^|find "20"') do @echo %%a %%b>2.txt
@for /f "tokens=1,2 delims= " %%a in ('dir d:\1.txt^|find "20"') do @echo %%a %%b>_2.txt
@set /p old= <2.txt
@set /p new= <_2.txt
@if not %old%==%new% (
@echo Record %date% %time%: file %1 modified time changed to %new%>>2_log.txt
@del 2.txt
@ren _2.txt 2.txt
)
