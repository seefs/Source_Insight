
//Ŀ¼:
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
// 1) ����USB��, ѡ�� USB LOG��ѡ��
// 2) Channel Server Configure:
//  MS: Type: UART
//     Port:  SPRD U2S Diag(COM12) ---------------- Ҫ�� 
//                         (COM12������USB�Ķ˿�)
//     BaudRate:115200 ---------------------------- Ҫ�� 
//     Endian: self adaptive
//  
//  WinSocket Server:
//     Port: 36666 
//     Timeout: 3 (s)
// 3) Connect MSSim;channel��ͼ�꽫��̸��ɫ�ĸ��ɴ���ɫ
// ����:
// 1. ������ͬ, ������ʾ SPRD Diag(COM12)
// 2. һֱ����log, ��ԭsvn���������

// 6531
open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
// 8910
open: tools\DEBUG_TOOL\ArmLogel\Bin\ArmLogel.exe
open: tools\DEBUG_TOOL\ArmTracer\Bin\ArmLogel.exe
// 1) ����USB�ߣ�ѡ��USB LOG��ѡ��
// 2) ���� ArmLogel.exe
// 3) �˵�ѡ��LOG����һ�е�����ߵ�DLLͼ�ꣻ
// 4) DLLͼ��仯�󣬵���ڶ���ͼ��Connect;
// 5) ��������ͼ��Logging
// 6) �����������ͼ��Stop
// 7) ���log����ͼ��




USBץtrace:
//����ģʽ����:(6531)
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (��ȷ��������)

//����ģʽ����:(8910)
//8 para set->ap log:open
//8 para set->cp log:close
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (��ȷ��������)

//����ģʽ����:(107)
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:close
//8 para set->debug->alert:debug


[1.2] __uart__

uartץtrace:
//����ģʽ����:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:close (��ȷ��)
//8 para set->debug (para)->assert:open  (��ȷ��������)

//����ģʽ����:(8910 user)
//8 para set->ap log:open
//8 para set->cp log:open
//8 para set->usb log:close (��ȷ��)
//8 para set->debug (para)->assert:open  (��ȷ��������)





[1.3] __SIM__
### ����ʧ�����⣬��ο�[FAQ202172533] �ṩlog
// MO��MT�����ֻ���ϵͳʱ���������һ�º󣬸��ִ����⣻


[1.4] NVTool
// NV�޸�:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// ѡ��:
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\nvitem.prj
// ���� Armlogץȡ:
// dsp_log_switch = 0x0 //
// enable_arm_log = 0x1
// com_debug =  0;    //0xFF
// arm_log_uart_id = 0x1 //
// dsp_log_uart_id = 0x0 //

// ���� Dsplogץȡ:
// dsp_log_switch = 0x1 //
// enable_arm_log = 0x1
// com_debug = 0;    //0xFF
// arm_log_uart_id = 0x0 //
// dsp_log_uart_id = 0x1 //


// ���ø�:
// com_data = 0xFF               (USB:0xFF, ��ͬ)
// com_debug_baud_rate = 0x70800 (USB:0x1C200,չѸû˵���Ҫ��)

// ����NV��ֻ����NV
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// ���� CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug    //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....     nvm =^DSP_log_switch   //ITEM_NAME 0x0
//File��>Save Image��File��>Save Project



[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 






