@echo off

setlocal enabledelayedexpansion

(for /f "delims=" %%a in ('dir /a-d /b *.py') do (

set n=0

for /f "delims=" %%b in ('type "%%a"') do set /a n+=1

if "%%a" neq "统计.py" echo,%%a --- !n!

))>"统计各txt行数.txt"