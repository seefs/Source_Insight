

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\C\project\Macro_cfg_MTK.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_MTK.h \[1.2\] PB
Save:node\C\project\Macro_cfg_MTK.h \[1.3\] SMS
Save:node\C\project\Macro_cfg_MTK.h \[1.4\] //MMS
Save:node\C\project\Macro_cfg_MTK.h \[1.5\] //BROWSER
Save:node\C\project\Macro_cfg_MTK.h \[1.6\] //BT
Save:node\C\project\Macro_cfg_MTK.h \[1.7\] //RECORD
Save:node\C\project\Macro_cfg_MTK.h \[1.8\] LCD_SIZE----------
Save:node\C\project\Macro_cfg_MTK.h \[1.9\] shortcut----------menu
Save:node\C\project\Macro_cfg_MTK.h \[1.10\] USB, ������
Save:node\C\project\Macro_cfg_MTK.h \[1.11\] ATA--------------�Զ�����
Save:node\C\project\Macro_cfg_MTK.h \[1.12\] CALL record
Save:node\C\project\Macro_cfg_MTK.h \[1.13\] 
//
Save:node\C\project\Macro_cfg_MTK.h \[2.1\] //IM
Save:node\C\project\Macro_cfg_MTK.h \[2.2\] DTMF, Dial, SIM, ����
Save:node\C\project\Macro_cfg_MTK.h \[2.3\] ���ӱ���
Save:node\C\project\Macro_cfg_MTK.h \[2.4\] tihu--------------������
Save:node\C\project\Macro_cfg_MTK.h \[2.5\] PLS---------------������
Save:node\C\project\Macro_cfg_MTK.h \[2.6\] //DL
Save:node\C\project\Macro_cfg_MTK.h \[2.7\] FM
Save:node\C\project\Macro_cfg_MTK.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_MTK.h \[2.9\] SS----------------����
Save:node\C\project\Macro_cfg_MTK.h \[2.10\] //Tool
Save:node\C\project\Macro_cfg_MTK.h \[2.11\] lib--------------
Save:node\C\project\Macro_cfg_MTK.h \[2.12\] ��������
Save:node\C\project\Macro_cfg_MTK.h \[2.13\] ʡ�ռ�-----------app
Save:node\C\project\Macro_cfg_MTK.h \[2.14\] MemoryDevice
Save:node\C\project\Macro_cfg_MTK.h \[2.15\] marco
Save:node\C\project\Macro_cfg_MTK.h \[2.16\] //Lib
Save:node\C\project\Macro_cfg_MTK.h \[2.17\] FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_MTK.h \[2.18\] build map
Save:node\C\project\Macro_cfg_MTK.h \[2.19\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.20\] 






[1.1] AUDIO, TONE
## ������Ͳ����һ
make/{cur}_{GSM}.mak  __RECEIVER_SPEAKER_2IN1_SUPPORT__
//
make/{cur}_{GSM}.mak  BOARD_VER_CUST_AUDIO
//BOARD_VER_CUST_AUDIO = xxx_2IN1_BB
//
custom\audio\K220_N48_SPK_2IN1_BB\
custom\audio\K220_N48_BB\


// ��������
#COM_DEFS += __ECHO_TO_SPEAKER__				# �������Դ��������

// ��Ȩ��ԭ����Ҫ�ر�AAC AAC+����
make/{cur}_{GSM}.mak  AAC_DECODE = FALSE



[1.2] PB
//
make/{cur}_{GSM}.mak  PHB_PHONE_ENTRY = 200
//
make/{cur}_{GSM}.mak  SMS_TOTAL_ENTRY = 100


// SIM �еĵ绰����Ŀ��
make/{cur}_{GSM}.mak  PHB_SIM_ENTRY = 100
//
// NVRAM �еĵ绰����Ŀ��
make/{cur}_{GSM}.mak  PHB_PHONE_ENTRY = 100

// ͨ����¼�����Ŀ��
make/{cur}_{GSM}.mak  PHB_LN_ENTRY = 100


// �绰����ƥ��Ĺ���
PHONEBOOK_COMPARE_LENGTH

// pb--copy
features:\MMI_features_switch{cur}.h  CFG_MMI_PHB_STARTUP_COPY_SIM  __ON__
features:\MMI_features_switch{cur}.h  CFG_MMI_PHB_MULTI_OPERATION  __ON__
features:\MMI_features_switch{cur}.h  CFG_MMI_PHB_GENERIC_MULTI_SELECT  __ON__

// pb--style
features:\MMI_features_switch{cur}.h  CFG_MMI_TAB_BARS_SUPPORT	(__OFF__)
features:\MMI_features_switch{cur}.h CFG_MMI_PHB_OPTIONAL_FIELD_ADDITIONAL	(__ON__)
features:\MMI_features_switch{cur}.h CFG_MMI_PHB_CALLER_GROUP	(__OFF__)


[1.3] SMS
//
make/{cur}_{GSM}.mak  SMS_PHONE_ENTRY = 50
//
make/{cur}_{GSM}.mak  SMS_SIM_ENTRY = 50
//
make/{cur}_{GSM}.mak  SMS_TOTAL_ENTRY = 100



[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] LCD_SIZE
// 
make/{cur}_{GSM}.mak  MAIN_LCD_SIZE
// MAIN_LCD_SIZE = 128X160

//
make/{cur}_{GSM}.mak  MAIN_LCD_SIZE
// MAIN_LCD_SIZE = 240X320


### ������Ƶ��--�ⵥ
// 50HZ/60HZ
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_video.h   VDOREC_DEFAULT_SETTING_BANDING
//plutommi\mmi\Inc\MMI_features_video.h  VDOREC_DEFAULT_SETTING_BANDING
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h   CAMERA_DEFAULT_SETTING_BANDING
//plutommi\mmi\Inc\MMI_features_camera.h  CAMERA_DEFAULT_SETTING_BANDING


[1.9] __shortcut__
// shortcut--key--�����
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
// shortcut--key--tmp
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list ��ʱ�ļ�(ģ����������ļ�)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_SHORTCUTS_TOTAL
// shortcut--key--ID:
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c mmi_shct_candidate_menu

// ShortCut--menu--mk
features:MMI_features_switch{cur}.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
// shortcut--menu
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_quick_menu_default_list

// --short--set
Save:node\C\study\Macro_app_MTK.h  __shortcut__

### set
// --set--phone--short
plutommi\mmi\Extra\ExtraSrc\Shortcuts.c  EntryShctInMainMenu
// ===short--menu--Id--base
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c  mmi_shct_candidate_menu
// ===short--menu--init
plutommi\mmi\Bootup\BootupSrc\BootupScrAni.c  mmi_ani_finalize
plutommi\mmi\Bootup\BootupSrc\BootupInitApps.c  mmi_bootup_notify_completed
plutommi\mmi\Bootup\BootupSrc\BootupInitApps.c  mmi_bootup_init_apps
plutommi\mmi\Extra\ExtraSrc\Shortcuts.c  mmi_shct_init
// ===short--menu--init--base
//		==>NVRAM_EF_SHORTCUTS_LID   [12��, ����, ����]
//		====>menu_id
//		==>str
//		====>nCustMenus[].nStrId
//		==>func
//		====>mmi_shct_candidate_menu.launch_func
plutommi\mmi\Extra\ExtraSrc\Shortcuts.c  void^ShctReadFromNvram
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_quick_menu_default_list
// ===short--menu--reg
//		==>shortcut="ON"
//		==>NVRAM_EF_SHORTCUTS_LID
plutommi\mmi\Setting\SettingRes\TihoBroadcastSettingInrom.res  MENU_TIHO_BROADCAST_SETTING_SETUP
// ===short--menu--add
plutommi\mmi\Extra\ExtraSrc\Shortcuts.c  EntryShctEditScreen
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c  mmi_shct_candidate_menu
// --idle--short
//		==>mmi_entry_blacklist_luanch
//		==>mmi_callset_blacklist_launch
//		==>mmi_callset_call_setting_launch_data
//		====>mmi_callset_proc_common
plutommi\mmi\Extra\ExtraSrc\Shortcuts.c  mmi_shct_launch_app_by_quick_menu



[1.10] USB

// USB���
USB_SUPPORT 	#USB���ܵ��ܿ���
USB_HS_SUPPORT	#usb high speed
USB_MASS_STORAGE_SUPPORT	#usb mass storage
USB_IN_NORMAL_MODE_SUPPORT	#���� mass storage
// usb com port--
make\{cur}_{GSM}.mak  USB_COM_PORT_SUPPORT = TRUE
USB_MULTIPLE_COMPORT_ENABLE	#ö�� com port


// ��U��
USB_MULTIPLE_COMPORT_ENABLE	?
USB_MASS_STORAGE_CDROM_SUPPORT	?
UART3_SUPPORT = FALSE


# �����pc�������ֻ��̷�����ֻ��ʾ�洢���̷�?
//	1��0812�� #define PARTITION_SECTORS     0
//	2��0836�� #define NOR_FAT_PARTITION_SECTORS     0
//���߲�������һ�ַ�ʽ��
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c  custom_usb_ms_init
//��ע�͵����¾��ӣ�
// USB_Ms_Register_DiskDriver(&USB_NOR_drv);


# ��糬ʱ��Ĭ��6Сʱ
//		==>BMT_TOTAL_CHARGE_TIME  6*60
//		==>bmt_total_charge_time  6*60
//		==>BMT_CHARGE_TIMEOUT_TIMER  6*60*13000
//		==>bmt_charging_timeout_timer_callback
//		====>BMT_CHARGE_TIMEOUT
hal\peripheral\inc\bmt_sw.h  __DRV_BMT_BATTERY_LARGER_1600MA__


# ���ֹͣ��Ĭ��30��
//		==>BMT_STOP_CHARGE_TIMER  30
//		==>bmt_stop_charge_timer_callback
hal\peripheral\inc\bmt_sw.h  BMT_STOP_CHARGE_TIMER


# ��������Ĭ��500mA
custom\drv\misc_drv\_Default_BB\MT6261\chr_parameter.h  __CHR_CHARGE_CURRENT_300__



[1.11] ATA
//
make/{cur}_{GSM}.mak   ATA_SUPPORT
// ATA_SUPPORT = TRUE

make/{cur}_{GSM}.mak   __ATA_AUTO_TEST__
// COM_DEFS += __ATA_AUTO_TEST__



[1.12] CALL record
//
make/{cur}_{GSM}.mak   __SNDREC_SAVE_RENAME_CALL_NUM_STYLE__
//# ͨ��¼��ʱ�����ļ��� �绰��_������Щ����
//	COM_DEFS 	+= __SNDREC_SAVE_RENAME_CALL_NUM_STYLE__
//	COM_DEFS 	+= __SNDREC_SAVE_RENAME_STYLE__





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
//   �м�OK ������ͨ���н���
make/{cur}_{GSM}.mak  __REC_MID_SOFTKEY_ENABLE__
// dial--record--set
make/{cur}_{GSM}.mak  __AUTO_IN_CALL_SET_RECORDER__
// dial--record--fun
make/{cur}_{GSM}.mak  __MMI_CSK_REC_IN_CALL__


##
// ˫��ѡ��
make/{cur}_{GSM}.mak  __NEW_SPEED_DAIL_SIM_SELECT_ENABLE__
// sim��
make/{cur}_{GSM}.mak  __MMI_DRV_SIM_SWITCH_STYLE__
custom\drv\misc_drv\_Default_BB\MT6261\custom_drv_init.c  sim_switchPhysicalSlotMapping

# ����
// 4��/5��/6��
//		==>EVT_ID_SRV_NW_INFO_SIGNAL_STRENGTH_CHANGED
//		==>mmi_nw_info_signal_on_strength_changed
//		==>wgui_status_icon_bar_change_icon_level
plutommi/Service/NwInfoSrv/NwInfoSrvSignal.c  srv_nw_info_get_percentage_from_{GSM}_rssi



[2.3] ���ӱ���
// 4��
make\Option.mak  __PHONE_SALE_SERVERS_NEW__

// 1.���ð�
make/{cur}_{GSM}.mak  XLS_SALE_SERVERS
//	XLS_SALE_SERVERS = TRUE
//	COM_DEFS += __XLS_SALE_SERVERS_TEST_PATCH__	#���ټ�����ӱ���
//	COM_DEFS += __XLS_SALE_META_TIME_STYLE__

make/{cur}_{GSM}.mak  __XLS_SALE_CUSTOM_TIME__
make\Option.mak  __XLS_DZBK_FUN__

// ����
plutommi\mmi\Ucm\UcmSrc\UcmUi.c  NVRAM_EF_BAOKA_DATA_LID
plutommi\Service\SmsSrv\SmsConverterSrv.c  NVRAM_EF_BAOKA_DATA_LID
// baoka--init--�쳣ֵ������
plutommi\mmi\Bootup\BootupInc\BootupInitConfig.h  srv_dzbk_init
// baoka--timer
//		==>mmi_idle_obj_enter
//		==mmi_idle_classic_on_update_service_indication
plutommi\Framework\GUI\GUI_SRC\wgui_categories_idlescreen.c  SetIdleScreenNetworkName

//
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c void^mmi_sale_track2_init( )
//#if 0//def WIN32
//	return;
//#endif

// num
plutommi/mmi/Setting/SettingSrc/PhoneSetup.c  SALE_TRACK_SRV_DEF_NUMBER



// 2.Ĭ��
make\Option.mak  __PHONE_SALE_SERVERS_NEW__


// 3.��ָ�����뷢����
make/{cur}_{GSM}.mak  MX_MMI_SALE_TRACK
//	MX_MMI_SALE_TRACK = TRUE 		# ����ͳ�ƹ��ܸ�ָ�����뷢����Ϣ
//	COM_DEFS += __KINGBELL_SALE_TRACK_NUMBER__ 		#KINGBELL ����ͳ�ƺ�̨����

make\Option.mak  MX_MMI_SALE_TRACK



[2.4] tihu
// 1) tihu
make/{cur}_{GSM}.mak  HERO_ENGINE_SUPPORT
// tihu--����
//     --TCARD/125kb/145kb
make/{cur}_{GSM}.mak  HERO_ENGINE_INCOMECALL
make/{cur}_{GSM}.mak  HERO_ENGINE_INCOMECALL_TCARD


// 2) tts
make/{cur}_{GSM}.mak  TIHO_TTS_SUPPORT
// tts--SLIM ʡ97K 
make/{cur}_{GSM}.mak  TIHO_TTS_SUPPORT_INROM_SLIM
// tts--vol
make/{cur}_{GSM}.mak  __TTS_VOLUME_DEFAULT_MAX__
make/{cur}_{GSM}.mak  __MMI_TONE_VOL_MAX5__
//
plutommi\mmi\Setting\SettingRes\TihoBroadcastSetting.res  __TTS_VOLUME_DEFAULT_MAX__
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  __TTS_VOLUME_DEFAULT_MAX__
// tts--str
// =====> fun==lock
// tts--data/lunar
make/{cur}_{GSM}.mak  __TIHO_TTS_ONE_KEY_TIME_NO_READ_LUNAR__
make/{cur}_{GSM}.mak  __TIHO_TTS_ONE_KEY_TIME_NO_READ_WEEK__
make/{cur}_{GSM}.mak  __TIHO_TTS_ONE_KEY_TIME_NO_READ_DATE__
// tts--time
//   �رպ�, Ĭ�ϰ���
make/{cur}_{GSM}.mak  __TIHO_TTS_TIME_DEFAULT_OFF__
//   8:00-20:00, ��8:00-18:00
make/{cur}_{GSM}.mak  __TIHO_TTS_TIME_DEFAULT_DAY_END20__


// 3) tts--low
//		====>STR_LOW_BATTERY
//		====>STR_TIHO_TTS_LOWPOWER
//		==>g_mmi_bootup_main_flow
//		==>mmi_bootup_flow_battery_check
plutommi\mmi\Bootup\BootupSrc\BootupAdp.c  tiho_tts_play_low_power_set
//		==>LBAT_IDLE_DURCNT_NORMAL      //30 * 1min = 30min
plutommi\Service\CharBatSrv\CharBatSrv.c  srv_charbat_low_battery_common_action
//		==>mmi_charbat_other_evt_hdlr
//		==>tiho_tts_charbat_start_low_battery_waring
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c  tiho_tts_charbat_start_low_battery_waring


// 4) tts--other
// tts--dial--mp3
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  ttsNumKeyDataId
// tts--time--���㱨ʱ
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  tiho_tts_need_broadcast
// tts--usb--conn
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  mmi_play_USB_in_tts
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  mmi_play_USB_out_tts
// tts--bat--conn/out
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  tiho_tts_battery_broadcast
// tts--menu
plutommi\Framework\GUI\GUI_SRC\wgui_categories_util.c  UI_string_type^get_item_text
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  void^tiho_tts_menu_broadcast
plutommi\Framework\GUI\GUI_SRC\wgui_categories_util.c  tiho_tts_need_broadcast


// 5) tts--nv
plutommi\mmi\Setting\SettingRes\TihoBroadcastSetting.res  __TIHO_TTS_TIME_DEFAULT_OFF__


// 6) tts--time
//		==>tiho_broadcast_speak_time
//		==>tiho_broadcast_speak_time_function
//		==>tiho_broadcast_play_speak_time
//		==>tiho_tts_cur_time_broadcast




[2.5] PLS
// 1) PLS
make/{cur}_{GSM}.mak  PLS_APP_GSM_SUPPORT



[2.6] 


[2.7] FM
//
make/K220_Y01A_MGUO_{GSM}.mak FM_RADIO_ENABLE
//	FM_RADIO_I2S_PATH = FALSE   #TRUE
//	FM_RADIO_CHIP = NONE   #MT6261FM
//	FM_RADIO_HW_SEARCH = FALSE#TRUE
//	#COM_DEFS	+= __MMI_FM_NO_HEADSET__


// ��������Ͳ��
__FM_LCD_OLD_TEST__


[2.8] 
// wifi ����(����ģ�����಻��)
make/{cur}_{GSM}.mak   CUSTOMER_APPLICATION


[2.9] SS
//
make/{cur}_{GSM}.mak  __IDLE_LOCK_SHOW_TIME_NEW_STYLE__
make/{cur}_{GSM}.mak  __MMI_LOCK_SCR_BH_STYLE__


// SCREENSAVER
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_CURRENT_SCREENSVER_ID
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_CURRENT_SCREENSVER_ID
//



[2.10] 

// 61D mk
make/{cur}_{GSM}.mak  VM_CODEC = FALSE
make/{cur}_{GSM}.mak  DCM_COMPRESSION_MAUI_INIT = TRUE
make/{cur}_{GSM}.mak  SECURE_JTAG_ENABLE = FALSE
make/{cur}_{GSM}.mak  BOOT_ZIMAGE_SUPPORT = FALSE
make/{cur}_{GSM}.mak  SERIAL_FLASH_SUPPORT = TRUE
make/{cur}_{GSM}.mak  SIP_SERIAL_FLASH_SIZE = NONE

// file SLIM
features:\MMI_features_switch{cur}.h  CFG_MMI_SLIM_FILE_MANAGER	(__ON__)
features:\MMI_features_switch{cur}.h CFG_MMI_FMGR_SUPPORT_DEFAULT_STORAGE	(__OFF__)
features:\MMI_features_switch{cur}.h CFG_MMI_FMGR_FOLDER_COPY_SUPPORT	(__OFF__)
features:\MMI_features_switch{cur}.h CFG_MMI_ULTRA_SLIM_FILE_MANAGER	(__ON__)


[2.11] lib
//	1.MRE
//	tool:�ر�MRE
make/{cur}_{GSM}.mak MRE_PACKAGE = SLIM
make/{cur}_{GSM}.mak MRE_CONTENT_NUMBER = 0
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

//���׹ر�MRE
//@wanc ���׹ر�MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif

// 2.__FLAVOR__ ��
//FLAVOR = GEMINI_2_NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/NONE
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_modis/MT6261/S00/gprs/FLAVOR/NONE
tst/database_modis/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_classb/MT6261/S00/gprs/FLAVOR/NONE
tst/database_classb/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF

// ģ�����಻��, ��Ϊ:
make/{cur}_{GSM}.mak  FLAVOR = NONE




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


[2.13] ʡ�ռ�
// history
_bat\build\_ckImgSize.log  project

### 1.app
// 1.���������------121K 
// 2.TTS-SLIM--------97K 
// 3.���ܲ���--------16.4K
// 4.��ϵ�˸���------8K
// 5.��������--------8K
// 6.ͼƬ����--------6K
// 7.������ֽ--------10K
// 8.����2��---------1K





[2.14] MemoryDevice
### 1.Mem
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
// ����ʡ 37.6K(��150�ڴ�), 28K(��150�ڴ�)
plutommi/mmi/Resource/MemoryRes.c  __MMI_K220_Z97_MEM_STYLE__
plutommi/mmi/Resource/MemoryRes.c  g_applib_mem_ap_pool
//
build\{cur}\{cur}_MT6261_S00.lis  g_applib_mem_ap_pool
// g_applib_mem_ap_pool                     0xf0136860   Data       662433

// ue��
build\{cur}\
build\{cur}\{cur}_MT6261_S00.lis  DYNAMIC_COMP_CODE
//    Total RO  Size (Code + RO Data)              3950992 (3858.39kB)
//    Total RW  Size (RW Data + ZI Data)           1905676 (1861.01kB)
//    Total ROM Size (Code + RO Data + RW Data)    3974928 (3881.77kB)


### 2.�ļ�ϵͳ
// ����ʡ 32.7K, 64K(��16)
make/{cur}_{GSM}.mak  #FS_SIZE_56_STYLE = TRUE
make/{cur}_{GSM}.mak  FS_SIZE_48_STYLE = TRUE
make/{cur}_{GSM}.mak  #FS_SIZE_40_STYLE = TRUE
//
tools\emigenMD.pl  fs_size_40_style
tools\emigenMD.pl  fs_size_48_style
tools\emigenMD.pl  fs_size_60_style
//
tools\MemoryDeviceList\
tools\MemoryDeviceList\MemoryDeviceList_MT6261_Since11CW1352.xls


### 3.��ϵ��
// ����ʡ 5K(��200pb)




[2.15] 



[2.16] 


[2.17] 



[2.18] build map
// auto set
//build\
//Save:set\Macro_Set_Path_mtk.h  curKey

//
build:log\
build:log\ckSysDrv.log Cluster^Size^(Bytes) 	��ʣ��ռ䣬nv��С
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   400   #�������Լ�С SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         405	#���˼�����ʼ��ַ, ͬ��----14K

build:log\resgen_mtk_resgenerator_make.log		res���ͷ�ļ�
build:log\resgen_xml_preprocess.log Error:
build:log\FileSystemConfig.log  Error:^Shortage
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   185
//Folders and Applications Requirement (Clusters)         221
//
//		==>185=304-24-11-74-10
//		==>221=208+9+4
//		==>221<=185
build:log\ckImgSize.log  file^system  �鿴ROM�ռ�
//The Boundary of VIVA bin				 = 3883008	bytes		#�����޸ĵ�λ 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!


### tmp
//Save:set\Macro_Set_Path_mtk.h  tmpKey
//build\
//build\{tmp}\log\ckImgSize.log  system
//




[2.19] 


[2.20] 

