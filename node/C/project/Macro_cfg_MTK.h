

//目录[Num][Ca]:
// 1. 
Save:node\C\project\Macro_cfg_MTK.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_MTK.h \[1.2\] PB
Save:node\C\project\Macro_cfg_MTK.h \[1.3\] //SMS
Save:node\C\project\Macro_cfg_MTK.h \[1.4\] //MMS
Save:node\C\project\Macro_cfg_MTK.h \[1.5\] //BROWSER
Save:node\C\project\Macro_cfg_MTK.h \[1.6\] //BT
Save:node\C\project\Macro_cfg_MTK.h \[1.7\] //RECORD
Save:node\C\project\Macro_cfg_MTK.h \[1.8\] Lcd---------------
Save:node\C\project\Macro_cfg_MTK.h \[1.9\] shortcut----------menu
Save:node\C\project\Macro_cfg_MTK.h \[1.10\] USB
Save:node\C\project\Macro_cfg_MTK.h \[1.11\] ATA--------------自动测试
Save:node\C\project\Macro_cfg_MTK.h \[1.12\] 
//
Save:node\C\project\Macro_cfg_MTK.h \[2.1\] //IM
Save:node\C\project\Macro_cfg_MTK.h \[2.2\] DTMF, Dial, SIM
Save:node\C\project\Macro_cfg_MTK.h \[2.3\] 电子保卡
Save:node\C\project\Macro_cfg_MTK.h \[2.4\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.5\] //CAMERA
Save:node\C\project\Macro_cfg_MTK.h \[2.6\] //DL
Save:node\C\project\Macro_cfg_MTK.h \[2.7\] //FM
Save:node\C\project\Macro_cfg_MTK.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_MTK.h \[2.9\] SS-------------屏保
Save:node\C\project\Macro_cfg_MTK.h \[2.10\] //Tool
Save:node\C\project\Macro_cfg_MTK.h \[2.11\] lib-----------
Save:node\C\project\Macro_cfg_MTK.h \[2.12\] build 服务器流程
Save:node\C\project\Macro_cfg_MTK.h \[2.13\] build 省空间
Save:node\C\project\Macro_cfg_MTK.h \[2.14\] MemoryDevice
Save:node\C\project\Macro_cfg_MTK.h \[2.15\] marco
Save:node\C\project\Macro_cfg_MTK.h \[2.16\] //Lib
Save:node\C\project\Macro_cfg_MTK.h \[2.17\] FLASH (大、/小版本)
Save:node\C\project\Macro_cfg_MTK.h \[2.18\] build map
Save:node\C\project\Macro_cfg_MTK.h \[2.19\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.20\] 






[1.1] AUDIO, TONE
## 喇叭听筒二合一
make/{cur}_GSM.mak  __RECEIVER_SPEAKER_2IN1_SUPPORT__
//
make/{cur}_GSM.mak  BOARD_VER_CUST_AUDIO
//BOARD_VER_CUST_AUDIO = xxx_2IN1_BB
//
custom\audio\K220_N48_SPK_2IN1_BB\
custom\audio\K220_N48_BB\


// 回声测试
#COM_DEFS += __ECHO_TO_SPEAKER__				# 回声测试从喇叭输出



[1.2] PB
//
make/{cur}_GSM.mak  PHB_PHONE_ENTRY = 200
//
make/{cur}_GSM.mak  SMS_TOTAL_ENTRY = 100


// SIM 中的电话簿条目数
make/{cur}_GSM.mak  PHB_SIM_ENTRY = 100
//
// NVRAM 中的电话簿条目数
make/{cur}_GSM.mak  PHB_PHONE_ENTRY = 100

// 通话记录最后条目数
make/{cur}_GSM.mak  PHB_LN_ENTRY = 100


// 电话号码匹配的规则
PHONEBOOK_COMPARE_LENGTH


[1.3] 




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] Lcd
// 
make/K220_V35_WD_GSM.mak   MAIN_LCD_SIZE
// MAIN_LCD_SIZE = 128X160

//
make/K220_H660_TX_GSM.mak   MAIN_LCD_SIZE
// MAIN_LCD_SIZE = 240X320


### 交流电频率--外单
// 50HZ/60HZ
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_video.h   VDOREC_DEFAULT_SETTING_BANDING
//plutommi\mmi\Inc\MMI_features_video.h  VDOREC_DEFAULT_SETTING_BANDING
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h   CAMERA_DEFAULT_SETTING_BANDING
//plutommi\mmi\Inc\MMI_features_camera.h  CAMERA_DEFAULT_SETTING_BANDING


[1.9] shortcut
// shortcut--key
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
// shortcut--tmp
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list 临时文件(模拟器改这个文件)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_SHORTCUTS_TOTAL
//	short ID:
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c mmi_shct_candidate_menu

// ShortCut
features:MMI_features_switch{cur}.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
// ShortCut
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_DEDICATED_KEY_SHORTCUTS

// shortcut--menu
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_quick_menu_default_list



[1.10] USB

// USB相关
USB_SUPPORT 	#USB功能的总开关
USB_HS_SUPPORT	#usb high speed
USB_MASS_STORAGE_SUPPORT	#usb mass storage
USB_IN_NORMAL_MODE_SUPPORT	#开机 mass storage
USB_COM_PORT_SUPPORT		#usb com port
USB_MULTIPLE_COMPORT_ENABLE	#枚举 com port


// 开U盘
USB_MULTIPLE_COMPORT_ENABLE	?
USB_MASS_STORAGE_CDROM_SUPPORT	?
UART3_SUPPORT = FALSE


# 如何在pc上隐藏手机盘符，而只显示存储卡盘符?
//	1、0812， #define PARTITION_SECTORS     0
//	2、0836， #define NOR_FAT_PARTITION_SECTORS     0
//或者采用另外一种方式：
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c  custom_usb_ms_init
//中注释掉以下句子：
// USB_Ms_Register_DiskDriver(&USB_NOR_drv);



[1.11] ATA
//
make/{cur}_GSM.mak   ATA_SUPPORT
// ATA_SUPPORT = TRUE

make/{cur}_GSM.mak   __ATA_AUTO_TEST__
// COM_DEFS += __ATA_AUTO_TEST__



[1.12] 




[1.13] 




[1.14] 




[1.15] 



[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



[2.1] 


[2.2] DTMF, Dial, SIM
// 
features:
#define CFG_MMI_DIALER_SEARCH	(__ON__)
#define CFG_MMI_DIALER_SLIM	(__OFF__)
mk:
COM_DEFS += __MMI_DIAL_SEARCH_STYLE_MODIFY__


// dial--record
//   中间OK 键长按通话中界面
make/{cur}_GSM.mak  __REC_MID_SOFTKEY_ENABLE__
// dial--record--set
make/{cur}_GSM.mak  __AUTO_IN_CALL_SET_RECORDER__
// dial--record--fun
make/{cur}_GSM.mak  __MMI_CSK_REC_IN_CALL__


##
// 双卡选卡
make/{cur}_GSM.mak  __NEW_SPEED_DAIL_SIM_SELECT_ENABLE__
// sim反
make/{cur}_GSM.mak  __MMI_DRV_SIM_SWITCH_STYLE__


[2.3] 电子保卡
//
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c void^mmi_sale_track2_init( )
//#if 0//def WIN32
//	return;
//#endif

// num
plutommi/mmi/Setting/SettingSrc/PhoneSetup.c  SALE_TRACK_SRV_DEF_NUMBER


//
make/{cur}_GSM.mak  XLS_SALE_SERVERS
make\Option.mak  __XLS_DZBK_FUN__
make/{cur}_GSM.mak  __XLS_SALE_CUSTOM_TIME__
// 激活
plutommi\mmi\Ucm\UcmSrc\UcmUi.c  NVRAM_EF_BAOKA_DATA_LID
plutommi\Service\SmsSrv\SmsConverterSrv.c  NVRAM_EF_BAOKA_DATA_LID



[2.4] 


[2.5] 


[2.6] 


[2.7] FM
//
make/K220_Y01A_MGUO_GSM.mak FM_RADIO_ENABLE
//	FM_RADIO_I2S_PATH = FALSE   #TRUE
//	FM_RADIO_CHIP = NONE   #MT6261FM
//	FM_RADIO_HW_SEARCH = FALSE#TRUE
//	#COM_DEFS	+= __MMI_FM_NO_HEADSET__


// 带独立听筒的
__FM_LCD_OLD_TEST__


[2.8] 
// wifi 宏总(不关模拟器编不过)
make/K220_Y01A_MGUO_GSM.mak CUSTOMER_APPLICATION


[2.9] SS
//
make/{cur}_GSM.mak  __IDLE_LOCK_SHOW_TIME_NEW_STYLE__
make/{cur}_GSM.mak  __MMI_LOCK_SCR_BH_STYLE__


// SCREENSAVER
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_CURRENT_SCREENSVER_ID
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_CURRENT_SCREENSVER_ID
//



[2.10] 


[2.11] lib
//	1.MRE
//	tool:关闭MRE
make/K220_Y01A_MGUO_GSM.mak MRE_PACKAGE = SLIM
make/K220_Y01A_MGUO_GSM.mak MRE_CONTENT_NUMBER = 0
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

//彻底关闭MRE
//@wanc 彻底关闭MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif

// 2.FLAVOR 库
//FLAVOR = GEMINI_2_NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/NONE
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_modis/MT6261/S00/gprs/FLAVOR/NONE
tst/database_modis/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_classb/MT6261/S00/gprs/FLAVOR/NONE
tst/database_classb/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF


[2.12] 

编译问题:
// 1) mk:
custom\system\BLEPHONE61D_11C_BB\scat_config\FeatureBased\ObjListGen\object.list.backup CUSTOM_OPTION

// 2) 临时目录
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt

// 3) SI删除:行太长
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt


[2.13] 

//
make/{cur}_GSM.mak  #FS_SIZE_56_STYLE = TRUE
make/{cur}_GSM.mak  FS_SIZE_48_STYLE = TRUE
make/{cur}_GSM.mak  #FS_SIZE_40_STYLE = TRUE


[2.14] MemoryDevice
###
// ADDRESS:
//    0x02C0000        -0x1000*N
//    0x02BF000
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_BASE_ADDRESS
//    0x0040000        +0x1000*N
//    0x0041000
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_SIZE
//    24               +8*N, 1N=0x200=512=0.5K, 8N=4K
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_FIRST_DRIVE_SECTORS
//
//    ADDRESS+SIZE=0x400000



### mem--cfg
// 
plutommi/mmi/Resource/MemoryRes.c  __MMI_K220_Z97_MEM_STYLE__
plutommi/mmi/Resource/MemoryRes.c  g_applib_mem_ap_pool
//
build\{cur}\{cur}_MT6261_S00.lis  g_applib_mem_ap_pool
// g_applib_mem_ap_pool                     0xf0136860   Data       662433

//
build\{cur}\{cur}_MT6261_S00.lis  DYNAMIC_COMP_CODE
//    Total RO  Size (Code + RO Data)              3950992 (3858.39kB)
//    Total RW  Size (RW Data + ZI Data)           1905676 (1861.01kB)
//    Total ROM Size (Code + RO Data + RW Data)    3974928 (3881.77kB)


###
tools\emigenMD.pl  fs_size_40_style
tools\emigenMD.pl  fs_size_48_style
tools\emigenMD.pl  fs_size_60_style
//
tools\MemoryDeviceList\
tools\MemoryDeviceList\MemoryDeviceList_MT6261_Since11CW1352.xls




[2.15] 



[2.16] 


[2.17] 
// history
_bat\build\_ckImgSize.log  project
//
// tmp
//Save:set\Macro_Set_Path_mtk.h  tmpKey
//build\
//build\{tmp}\log\ckImgSize.log  system



[2.18] build map
// auto set
//build\
//Save:set\Macro_Set_Path_mtk.h  curKey

//
build:log\
build:log\ckSysDrv.log Cluster^Size^(Bytes) 	看剩余空间，nv大小
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   400   #不够可以减小 SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         405	#超了减少起始地址, 同上----14K

build:log\resgen_mtk_resgenerator_make.log		res添加头文件
build:log\resgen_xml_preprocess.log Error:
build:log\FileSystemConfig.log  Error:^Shortage
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   185
//Folders and Applications Requirement (Clusters)         221
//
//		==>185=304-24-11-74-10
//		==>221=208+9+4
//		==>221<=185
build:log\ckImgSize.log  file^system  查看ROM空间
//The Boundary of VIVA bin				 = 3883008	bytes		#可以修改单位 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!





[2.19] 


[2.20] 

