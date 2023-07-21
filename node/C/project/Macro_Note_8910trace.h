
//Ŀ¼:
Save:node\C\project\Macro_Note_8910trace.h \[1.1\] USB
Save:node\C\project\Macro_Note_8910trace.h \[1.2\] uart
Save:node\C\project\Macro_Note_8910trace.h \[1.3\] SIM
Save:node\C\project\Macro_Note_8910trace.h \[1.4\] NVTool
Save:node\C\project\Macro_Note_8910trace.h \[1.5\] BBAT_log
Save:node\C\project\Macro_Note_8910trace.h \[1.6\] AT_log
Save:node\C\project\Macro_Note_8910trace.h \[1.7\] ATEST
Save:node\C\project\Macro_Note_8910trace.h \[1.8\] flash
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


//		====>.enable_arm_log: 0x1
//		====>.dsp_log_set: 0x2
//		====>.cap_log_enable: 0x1



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

// ����--�̰׺��
//--û����--�̰׶Ե�
//--��--����
//--��--��������ġ���2��
//--��--������ġ���1��
//--��--������ġ���2��

// ��UART
MS_Ref\source\base\src\init.c  UART_LOG_SUPPORT        // 107
MS_Ref\source\base\src\init.c  UART_LOG_MODE_SUPPORT   // 8910
//  �����ο���8910����û�и���ϸЩ�ĸĶ�
MS_Ref\source\base\src\init.c  uint32^SCI_InitRef
//		====>.baud_rate: 921600          # ������
//		==>SIO_Create:
//		====>.parity: FALSE              # ��У��
//		====>.byte_size: EIGHT_BITS
//		====>.stop_bits: ONE_STOP_BIT


// ����:
//   ���ص�1�ο���, ��rf����
// ����:
//   �����ʣ�921600�������: com0,   RX TX������
//   ԭ��ͼ����uart1
// �쳣:
//   �����ʣ�115200�������: com1,  RX TXû�䣬ֻ�п���log+���룬
//   ������ò����ʣ�921600���������0
//   ��uart2�޷�����


//
//�Ȱ�ͨ��˫����RX��TX�̽ӣ����ػ����ԣ���������֤���������߼����⡣
//�������һ����PC�Ļ�������Linuxϵͳ�Ļ��������¸����ڵ��Թ��ߣ�������������ARM�Խӣ�
//��Ӳ������λ��������������û�С���������ĳ����ARMͨ�š�һ��һ���Ĳ飬��С����ķ�Χ��
//һ�����ҵ�����ġ�����ͨ�ŵ������������������ô���飬�Ǹ���ͨ�õķ�����


//������ʾ����
https://blog.csdn.net/hfyutdg/article/details/83896091


// serial
Save:node\Pythons\project\Macro_serial.h



[1.3] __SIM__
### ����ʧ�����⣬��ο�[FAQ202172533] �ṩlog
// MO��MT�����ֻ���ϵͳʱ���������һ�º󣬸��ִ����⣻

// ץ WCN CP2 LOG.pdf
//	���� SPRD WCN LOG �˿�������� CM4 �� FM �� BT Log, DIAG �˿�������� AP Log.
//	���ץ LOG ʱ,��Ҫͬʱ���������˿�ץ��
//	������ͬʱ�� 2 �� Logel ���ߡ�
//	��һ�� Logel ���� Diag Port ���� DIAG �˿ڣ��еĹ��ܻ���Ŀ������ SPRD LOG �˿ڣ���
//	����ץ AP Log��
//	�ڶ��� Logel ���� Log Port ���� WCN LOG �˿ڣ�����ץ WCN CP2 Log��
//	������ɺ󱣴��������ߵ� log���ṩ�����ǣ�лл

// ע�ⲻͬ: 2��toolĿ¼/����·��/Diag��Log Port

// pdf
H:\Desktop\SPRD_T107\_log\

// log
H:\Desktop\tool\file_down\4^soft^tool\ArmLogel_new\AP_log\


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



[1.5] __BBAT_log__
�繵ͨ��OK����汾������ڣ�NG�����ģʽһ��͵��ڣ��鷳��NG�汾ץ�µ�������Ĵ���log��armlog
ץlog���Բο��ĵ�������Logץȡ����˵��V1.1.pdf��2.2.3 BBAT ģʽץArmlog��BBAT G3 ����+Logel ���ߣ�
https://unisupport.unisoc.com/file/index?fileid=34086



[1.6] __AT_log__
### arm log
//
//	�ͻ����ã�
//
//	���æ���ṩһ��log����Ҫ�޸�һ��nv: AUDIO\AUDIO_ARM\Handsfree\AudioStructure\reserve\reserve[63]=0x131D
//	����ǰ���跢��ATָ�
//	DSP��dump���أ�
//	����
//	AT+SPDSPOP=2
//	AT+SPDSP=65535,0,0,4096
//	nv�޸ĺ�at�ǿ���arm �� dsp��ͨ������dump���������ݻᷢ�͵�log�logץ����ط�һ��log��
//	Ȼ��ֱ��� Tool -> audio Arm Transfer -> Transfer �� Tool -> audio DSP Transfer -> Transfer 
//	�����������*.pcm�ļ��� ˵��logץȡ�ɹ���
//	лл��

//SPCSS01205265
//?log��û��ץ��dsp audio dump����ôȷ�����ץ��û�У�
//? ͨ������ǰ����at��logץ����ط�һ��log��Ȼ��ֱ��� Tool -> audio DSP Transfer -> Transfer �������*.pcm�ļ��� ˵��logץȡ�ɹ���
// лл��


[1.7] __ATEST__

ATEST_SUPPORT
// ATEST Ĭ�ϲ���, û����Ŀ��
make\app_main\app_main.mk  ATEST_SUPPORT



[1.8] __flash__

### fota����С���ܱ���
//
fdl_bootloader\nor_bootloader\src\nor_bootloader_fota_uix8910.scf  0xB800


### flash
//		==>NVITEM_GetProductInfo_Protect
//		====>...                                      # �ڿ���
//		======>FLASH_GetProductInfoSize
//		========>.Addr
//		==========>FLASH_GetProductInfoAddr
//		============>.s_flash_product_info_addr       # ��֪�����ĳ�ʼ��
//		==>.s_Nor_Config_ptr
chip_drv\chip_module\norflash\flash.c  FLASH_GetPartitionEndAddr

// flash--log
// 	SFS FAT error = 0 SFS_CloseFileInternal
// 	[DRM] DRM_CloseFile normal file error_code =0\n 
// 	[flash_cfg_addr_table] addr = 7031fc00 
// 	[flash_cfg_addr_table] s_flash_end_addr = 60800000 
// 	[flash_cfg_addr_table] s_flash_fixed_nvitem_addr = 70300000 
// 	[flash_cfg_addr_table] s_flash_product_info_addr = 7031fc00 
// 	[flash_cfg_addr_table] s_flash_efs_start_addr = 60750000             # running nv
// 	[flash_cfg_addr_table] s_flash_umem_addr = 607c0000
// 	[flash_cfg_addr_table] s_flash_lcd_sensor_addr = ffffffff
// 	[flash_cfg_addr_table] s_flash_end_addr = 60800000 
// 	[flash_cfg_addr_table] next_partition_addr = ffffffff  


// flash--init
//		==>.pSpiFlashSpec
//		====>SPIFLASH_SPEC_Get
//		======>.SpiFlashSpec
//		========>.s_platform_patitiion_config         # 64x64 ȫ���� PATITION_A
//		========>.s_platform_patitiion_config_B       # 128x64 �� PATITION_A + PATITION_B
fdl_bootloader/tf_fdl/src/tf_main_nor.c  SPIFLASH_HWInit
//
config:spiflash_cfg.c                         s_platform_patitiion_config
config:spiflash_cfg_64X64_CP_RES_FIX_IN_FB.h  s_platform_patitiion_config


// flash--Erase
//		==>FDL_EraseFlash
//		====>FDL_FlashErase (0x70000000, 0x800000);
fdl_bootloader/nor_fdl/src/fdl_main.c   FDL_EraseFlash
fdl_bootloader/nor_fdl/src/fdl_main.c   flash_partition_ptr->ProdinfoAdress


### mem
config:mem_cfg.c  mem_ro2_start_add
//
MS_Customize/source/common/mem_prod.c  MEM_IsRWRegionOverflow
MS_Customize/source/common/mem_prod.c  MEM_IsRORegion



[1.9] 




[1.10] 



[1.11] 




[1.12] 






