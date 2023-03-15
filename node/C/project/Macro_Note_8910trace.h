
//目录:
Save:node\C\project\Macro_Note_8910trace.h \[1.1\] SIM
Save:node\C\project\Macro_Note_8910trace.h \[1.2\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.3\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.4\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.5\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.6\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.7\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.8\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.9\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.10\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.11\] 
Save:node\C\project\Macro_Note_8910trace.h \[1.12\] 




[1.1] __USB__
### usb
// --6531
open: tools\DEBUG_TOOL\CHANNELSERVER\Bin\ChannelServer.exe
// 1) 连接USB线, 选择 USB LOG的选项
// 2) Channel Server Configure:
//  MS: Type: UART
//     Port:  SPRD U2S Diag(COM12) ---------------- 要改 
//                         (COM12是连接USB的端口)
//     BaudRate:115200 ---------------------------- 要改 
//     Endian: self adaptive
//  
//  WinSocket Server:
//     Port: 36666 
//     Timeout: 3 (s)
// 3) Connect MSSim;channel的图标将有谈绿色的更成翠绿色
// 其他:
// 1. 驱动不同, 可能显示 SPRD Diag(COM12)
// 2. 一直不出log, 还原svn后可能正常

// 6531
open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
// 8910
open: tools\DEBUG_TOOL\ArmLogel\Bin\ArmLogel.exe
open: tools\DEBUG_TOOL\ArmTracer\Bin\ArmLogel.exe
// 1) 插入USB线，选择USB LOG的选项
// 2) 运行 ArmLogel.exe
// 3) 菜单选项LOG下面一行的最左边的DLL图标；
// 4) DLL图标变化后，点击第二个图标Connect;
// 5) 点击第五个图标Logging
// 6) 点击点击第五个图标Stop
// 7) 点击log保存图标




USB抓trace:
//工程模式设置:(6531)
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (不确定开不开)

//工程模式设置:(8910)
//8 para set->ap log:open
//8 para set->cp log:close
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (不确定开不开)

//工程模式设置:(107)
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:close
//8 para set->debug->alert:debug


[1.2] __uart__

uart抓trace:
//工程模式设置:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:close (不确定)
//8 para set->debug (para)->assert:open  (不确定开不开)

//工程模式设置:(8910 user)
//8 para set->ap log:open
//8 para set->cp log:open
//8 para set->usb log:close (不确定)
//8 para set->debug (para)->assert:open  (不确定开不开)





[1.3] __SIM__
### 呼入失败问题，请参考[FAQ202172533] 提供log
// MO、MT两个手机的系统时间调整设置一致后，复现此问题；


[1.4] NVTool
// NV修改:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// 选择:
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\nvitem.prj
// 设置 Armlog抓取:
// dsp_log_switch = 0x0 //
// enable_arm_log = 0x1
// com_debug =  0;    //0xFF
// arm_log_uart_id = 0x1 //
// dsp_log_uart_id = 0x0 //

// 设置 Dsplog抓取:
// dsp_log_switch = 0x1 //
// enable_arm_log = 0x1
// com_debug = 0;    //0xFF
// arm_log_uart_id = 0x0 //
// dsp_log_uart_id = 0x1 //


// 不用改:
// com_data = 0xFF               (USB:0xFF, 相同)
// com_debug_baud_rate = 0x70800 (USB:0x1C200,展迅没说这个要改)

// 改完NV，只下载NV
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// 或者 CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug    //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....     nvm =^DSP_log_switch   //ITEM_NAME 0x0
//File—>Save Image，File—>Save Project



[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 






