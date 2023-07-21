
//目录:
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


//		====>.enable_arm_log: 0x1
//		====>.dsp_log_set: 0x2
//		====>.cap_log_enable: 0x1



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

// 接线--绿白红黑
//--没数据--绿白对调
//--红--不接
//--黑--接最下面的“左2”
//--白--接上面的“上1”
//--绿--接上面的“上2”

// 开UART
MS_Ref\source\base\src\init.c  UART_LOG_SUPPORT        // 107
MS_Ref\source\base\src\init.c  UART_LOG_MODE_SUPPORT   // 8910
//  看看参考下8910里有没有更详细些的改动
MS_Ref\source\base\src\init.c  uint32^SCI_InitRef
//		====>.baud_rate: 921600          # 波特率
//		==>SIO_Create:
//		====>.parity: FALSE              # 无校验
//		====>.byte_size: EIGHT_BITS
//		====>.stop_bits: ONE_STOP_BIT


// 现象:
//   下载第1次开机, 报rf错误
// 正常:
//   波特率：921600，软件上: com0,   RX TX反过来
//   原理图上用uart1
// 异常:
//   波特率：115200，软件上: com1,  RX TX没变，只有开机log+乱码，
//   如果设置波特率：921600，就是输出0
//   用uart2无法开机


//
//先把通信双方的RX和TX短接，做回环测试，可以先验证本身程序的逻辑问题。
//如果其中一方是PC的话或者是Linux系统的话，可以下个串口调试工具，先用这个程序和ARM对接，
//看硬件和下位机的设置有问题没有。最后才是你的程序和ARM通信。一步一步的查，缩小问题的范围，
//一定能找到问题的。串口通信的问题基本都可以像这么来查，是个较通用的方法。


//串口显示乱码
https://blog.csdn.net/hfyutdg/article/details/83896091


// serial
Save:node\Pythons\project\Macro_serial.h



[1.3] __SIM__
### 呼入失败问题，请参考[FAQ202172533] 提供log
// MO、MT两个手机的系统时间调整设置一致后，复现此问题；

// 抓 WCN CP2 LOG.pdf
//	其中 SPRD WCN LOG 端口用于输出 CM4 的 FM 和 BT Log, DIAG 端口用于输出 AP Log.
//	因此抓 LOG 时,需要同时连接两个端口抓。
//	电脑上同时打开 2 个 Logel 工具。
//	第一个 Logel 工具 Diag Port 连接 DIAG 端口（有的功能机项目是连接 SPRD LOG 端口），
//	用于抓 AP Log。
//	第二个 Logel 工具 Log Port 连接 WCN LOG 端口，用于抓 WCN CP2 Log。
//	测试完成后保存两个工具的 log，提供给我们，谢谢

// 注意不同: 2个tool目录/保存路径/Diag或Log Port

// pdf
H:\Desktop\SPRD_T107\_log\

// log
H:\Desktop\tool\file_down\4^soft^tool\ArmLogel_new\AP_log\


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



[1.5] __BBAT_log__
如沟通，OK软件版本不会掉口，NG软件进模式一会就掉口，麻烦用NG版本抓下掉口现象的串口log和armlog
抓log可以参考文档《常用Log抓取方法说明V1.1.pdf》2.2.3 BBAT 模式抓Armlog（BBAT G3 工具+Logel 工具）
https://unisupport.unisoc.com/file/index?fileid=34086



[1.6] __AT_log__
### arm log
//
//	客户您好，
//
//	请帮忙再提供一份log，需要修改一下nv: AUDIO\AUDIO_ARM\Handsfree\AudioStructure\reserve\reserve[63]=0x131D
//	测试前还需发送AT指令：
//	DSP侧dump开关：
//	开：
//	AT+SPDSPOP=2
//	AT+SPDSP=65535,0,0,4096
//	nv修改和at是开启arm 和 dsp的通话语音dump，语音数据会发送到log里。log抓完后重放一下log，
//	然后分别点击 Tool -> audio Arm Transfer -> Transfer 和 Tool -> audio DSP Transfer -> Transfer 
//	会解析出两个*.pcm文件夹 说明log抓取成功。
//	谢谢！

//SPCSS01205265
//?log中没有抓到dsp audio dump，怎么确认这个抓到没有？
//? 通话开启前发送at。log抓完后重放一下log，然后分别点击 Tool -> audio DSP Transfer -> Transfer 会解析出*.pcm文件夹 说明log抓取成功。
// 谢谢！


[1.7] __ATEST__

ATEST_SUPPORT
// ATEST 默认不开, 没有项目开
make\app_main\app_main.mk  ATEST_SUPPORT



[1.8] __flash__

### fota分区小可能报错
//
fdl_bootloader\nor_bootloader\src\nor_bootloader_fota_uix8910.scf  0xB800


### flash
//		==>NVITEM_GetProductInfo_Protect
//		====>...                                      # 在库中
//		======>FLASH_GetProductInfoSize
//		========>.Addr
//		==========>FLASH_GetProductInfoAddr
//		============>.s_flash_product_info_addr       # 不知道在哪初始化
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
//		========>.s_platform_patitiion_config         # 64x64 全部用 PATITION_A
//		========>.s_platform_patitiion_config_B       # 128x64 用 PATITION_A + PATITION_B
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






