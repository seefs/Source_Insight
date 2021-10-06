@echo off
cls
echo IP地址更改小工具

echo.
echo 设置 IP1(192.168.16.241) 请按 1
echo.
echo 设置 IP2(192.168.0.241) 请按 2
echo.
echo 恢复(自动获取) 请按 3
echo.

set /p KEY= [您的选择是:]
echo.

if %KEY% == 1 goto ONE
if %KEY% == 2 goto TWO
if %KEY% == 3 goto THREE

:ONE
echo 正在自动更改 IP ......
netsh interface ip set address name="本地连接"  source=static addr=192.168.16.241 mask=255.255.255.0 gateway=192.168.16.1 1
netsh interface ipv4 set dns name="本地连接" source=static addr=10.10.10.10 register=PRIMARY >nul   
netsh interface ipv4 add dns name="本地连接" addr=202.98.18.3 index=2 >nul   
echo IP地址 /子网掩码 /网关设置完成
pause
goto end

:TWO
echo 正在自动更改 IP ......
netsh interface ip set address name="本地连接"  source=static addr=192.168.0.241 mask=255.255.255.0 gateway=192.168.0.1 1
netsh interface ipv4 set dns name="本地连接" source=static addr=192.168.0.1 register=PRIMARY >nul  
echo IP地址 /子网掩码 /网关设置完成
echo.
pause
goto end

:THREE
echo 正在进行动态IP设置，请稍等...   
echo. IP 地址正在从DHCP自动获取...   
netsh interface ip set address "本地连接" dhcp   
echo. DNS地址正在从DHCP自动获取...   
netsh interface ip set dns "本地连接" dhcp   
echo ----   
echo 全部设置完成!   
pause  
