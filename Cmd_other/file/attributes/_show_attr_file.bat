@echo off


::�޸���һ�е��ļ�·��
set "f=.\file.txt"
echo,�����ǣ�%date%
for %%a in ("%f%") do set "curDt=%%~ta"

echo,%f%�ļ���������ڣ�%curDt%


::����a���������ڣ���ʽΪyyyy-mm-dd
::set a=2015-07-31



::�����ȡ�ı��е����ڣ�������������������
::set Txt=olddate.txt
::for /f "usebackq delims=" %%a in ("%Txt%") do set "a=%%~a"


set options="tokens=1-4 delims=/:. "
for /f %options% %%a in ("%curDt%") do (
	echo, %%a, %%b, %%c, %%d
	
	set /a start_1=%%a
	echo,start_1,%start_1%
	
	set /a start_2=%%a*2
	echo,start_2,%start_2%
)

for /f %options% %%i in ("%date%") do (
	echo, %%i, %%j, %%k, %%l
	
	set /a start_4=%%j
	echo,start_4,%start_4%
	
	set /a start_5=%%i*2
	echo,start_5,%start_5%
)

pause

