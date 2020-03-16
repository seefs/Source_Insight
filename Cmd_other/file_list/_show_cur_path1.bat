@echo off
echo >z_file.txt
for /r . %%a in (.) do @echo  %%a >> z_file.txt
start z_file.txt

