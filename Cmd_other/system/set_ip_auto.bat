@echo off
cls
echo IP��ַ����С����

echo.
echo ���� IP1(192.168.16.241) �밴 1
echo.
echo ���� IP2(192.168.0.241) �밴 2
echo.
echo �ָ�(�Զ���ȡ) �밴 3
echo.

set /p KEY= [����ѡ����:]
echo.

if %KEY% == 1 goto ONE
if %KEY% == 2 goto TWO
if %KEY% == 3 goto THREE

:ONE
echo �����Զ����� IP ......
netsh interface ip set address name="��������"  source=static addr=192.168.16.241 mask=255.255.255.0 gateway=192.168.16.1 1
netsh interface ipv4 set dns name="��������" source=static addr=10.10.10.10 register=PRIMARY >nul   
netsh interface ipv4 add dns name="��������" addr=202.98.18.3 index=2 >nul   
echo IP��ַ /�������� /�����������
pause
goto end

:TWO
echo �����Զ����� IP ......
netsh interface ip set address name="��������"  source=static addr=192.168.0.241 mask=255.255.255.0 gateway=192.168.0.1 1
netsh interface ipv4 set dns name="��������" source=static addr=192.168.0.1 register=PRIMARY >nul  
echo IP��ַ /�������� /�����������
echo.
pause
goto end

:THREE
echo ���ڽ��ж�̬IP���ã����Ե�...   
echo. IP ��ַ���ڴ�DHCP�Զ���ȡ...   
netsh interface ip set address "��������" dhcp   
echo. DNS��ַ���ڴ�DHCP�Զ���ȡ...   
netsh interface ip set dns "��������" dhcp   
echo ----   
echo ȫ���������!   
pause  
