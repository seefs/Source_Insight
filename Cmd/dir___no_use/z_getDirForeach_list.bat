@echo off
for /r . %%a in (.) do @echo  %%a >> z_file.txt
pause
