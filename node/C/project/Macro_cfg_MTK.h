

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\C\project\Macro_cfg_MTK.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_MTK.h \[1.2\] //PB
Save:node\C\project\Macro_cfg_MTK.h \[1.3\] //SMS
Save:node\C\project\Macro_cfg_MTK.h \[1.4\] //MMS
Save:node\C\project\Macro_cfg_MTK.h \[1.5\] //BROWSER
Save:node\C\project\Macro_cfg_MTK.h \[1.6\] //BT
Save:node\C\project\Macro_cfg_MTK.h \[1.7\] //RECORD
Save:node\C\project\Macro_cfg_MTK.h \[1.8\] Lcd---------------
Save:node\C\project\Macro_cfg_MTK.h \[1.9\] shortcut----------menu
Save:node\C\project\Macro_cfg_MTK.h \[1.10\] USB
Save:node\C\project\Macro_cfg_MTK.h \[1.11\] ATA
Save:node\C\project\Macro_cfg_MTK.h \[1.12\] 
//
Save:node\C\project\Macro_cfg_MTK.h \[2.1\] //IM
Save:node\C\project\Macro_cfg_MTK.h \[2.2\] DTMF, Dial
Save:node\C\project\Macro_cfg_MTK.h \[2.3\] ���ӱ���
Save:node\C\project\Macro_cfg_MTK.h \[2.4\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.5\] //CAMERA
Save:node\C\project\Macro_cfg_MTK.h \[2.6\] //DL
Save:node\C\project\Macro_cfg_MTK.h \[2.7\] //FM
Save:node\C\project\Macro_cfg_MTK.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_MTK.h \[2.9\] SS-------------����
Save:node\C\project\Macro_cfg_MTK.h \[2.10\] //Tool
Save:node\C\project\Macro_cfg_MTK.h \[2.11\] lib-----------
Save:node\C\project\Macro_cfg_MTK.h \[2.12\] build ����������
Save:node\C\project\Macro_cfg_MTK.h \[2.13\] build ʡ�ռ�
Save:node\C\project\Macro_cfg_MTK.h \[2.14\] MemoryDevice
Save:node\C\project\Macro_cfg_MTK.h \[2.15\] marco
Save:node\C\project\Macro_cfg_MTK.h \[2.16\] //Lib
Save:node\C\project\Macro_cfg_MTK.h \[2.17\] FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_MTK.h \[2.18\] build map
Save:node\C\project\Macro_cfg_MTK.h \[2.19\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.20\] 






[1.1] AUDIO, TONE
## ������Ͳ����һ
make/{cur}_GSM.mak  __RECEIVER_SPEAKER_2IN1_SUPPORT__
//
make/{cur}_GSM.mak  BOARD_VER_CUST_AUDIO
//BOARD_VER_CUST_AUDIO = xxx_2IN1_BB
//
custom\audio\K220_N48_SPK_2IN1_BB\
custom\audio\K220_N48_BB\


// ��������
#COM_DEFS += __ECHO_TO_SPEAKER__				# �������Դ��������



[1.2] 




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



[1.9] shortcut
// shortcut--key
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
// shortcut--tmp
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list ��ʱ�ļ�(ģ����������ļ�)
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

// USB���
USB_SUPPORT 	#USB���ܵ��ܿ���
USB_HS_SUPPORT	#usb high speed
USB_MASS_STORAGE_SUPPORT	#usb mass storage
USB_IN_NORMAL_MODE_SUPPORT	#���� mass storage
USB_COM_PORT_SUPPORT		#usb com port
USB_MULTIPLE_COMPORT_ENABLE	#ö�� com port


// ��U��
USB_MULTIPLE_COMPORT_ENABLE	?
USB_MASS_STORAGE_CDROM_SUPPORT	?
UART3_SUPPORT = FALSE


[1.11] 
//
ATA_SUPPORT = TRUE
COM_DEFS += __ATA_AUTO_TEST__



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


[2.2] DTMF, Dial
// 
features:
#define CFG_MMI_DIALER_SEARCH	(__ON__)
#define CFG_MMI_DIALER_SLIM	(__OFF__)
mk:
COM_DEFS += __MMI_DIAL_SEARCH_STYLE_MODIFY__



[2.3] ���ӱ���
//
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c void^mmi_sale_track2_init( )
//#if 0//def WIN32
//	return;
//#endif

// num
plutommi/mmi/Setting/SettingSrc/PhoneSetup.c  SALE_TRACK_SRV_DEF_NUMBER



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


// ��������Ͳ��
__FM_LCD_OLD_TEST__


[2.8] 
// wifi ����(����ģ�����಻��)
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
//	tool:�ر�MRE
make/K220_Y01A_MGUO_GSM.mak MRE_PACKAGE = SLIM
make/K220_Y01A_MGUO_GSM.mak MRE_CONTENT_NUMBER = 0
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

//���׹ر�MRE
//@wanc ���׹ر�MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif

// 2.FLAVOR ��
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

��������:
// 1) mk:
custom\system\BLEPHONE61D_11C_BB\scat_config\FeatureBased\ObjListGen\object.list.backup CUSTOM_OPTION

// 2) ��ʱĿ¼
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt

// 3) SIɾ��:��̫��
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt


[2.13] 
//
plutommi/mmi/Resource/MemoryRes.c  __MMI_K220_Z97_MEM_STYLE__
plutommi/mmi/Resource/MemoryRes.c  g_applib_mem_ap_pool




[2.14] MemoryDevice
// ADDRESS:
//    0x02C0000        -0x1000*N
//    0x02BF000
board:\\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_BASE_ADDRESS
//    0x0040000        +0x1000*N
//    0x0041000
board:\\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_SIZE
//    24               +8*N, 1N=0x200=512=0.5K, 8N=4K
board:\\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_FIRST_DRIVE_SECTORS
//
//    ADDRESS+SIZE=0x400000


// FileSystemConfig
build:log\ckSysDrv.log Cluster^Size^(Bytes) 	��ʣ��ռ䣬nv��С
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   424   #�������Լ�С SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         428	#���˼�����ʼ��ַ, ͬ��----14K


// VIVA
//    2225952        -0x1000*N
build:log\ckImgSize.log  file^system  �鿴ROM�ռ�
//	The VIVA bin size = 2225952
//	The base address of file system = 2949120
//	[Check VIVA bin size]
//	The Boundary of VIVA bin                 = 2949120  bytes
//	Actual VIVA End Address                  = 2921572  bytes

//L12--27K


//
//tools\MemoryDeviceList\MemoryDeviceList_MT6261_Since11CW1352.xls



[2.15] 



[2.16] 



[2.17] 
// history
_bat\build\_ckImgSize.log  project
//
// tmp
build\
build\{tmp}\log\ckImgSize.log  system



[2.18] build map
// auto set
build\
Save:set\Macro_Set_Path_mtk.h  curKey

//
build:log\
build:log\ckSysDrv.log Cluster^Size^(Bytes) 	��ʣ��ռ䣬nv��С
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   400   #�������Լ�С SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         405	#���˼�����ʼ��ַ, ͬ��----14K

build:log\resgen_mtk_resgenerator_make.log		res���ͷ�ļ�
build:log\resgen_xml_preprocess.log Error:
build:log\FileSystemConfig.log  Error:^Shortage
build:log\ckImgSize.log  file^system  �鿴ROM�ռ�
//The Boundary of VIVA bin				 = 3883008	bytes		#�����޸ĵ�λ 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!





[2.19] 


[2.20] 

