

//目录:
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
Save:node\C\project\Macro_cfg_MTK.h \[1.10\] USB, 充电电流
Save:node\C\project\Macro_cfg_MTK.h \[1.11\] ATA--------------自动测试
Save:node\C\project\Macro_cfg_MTK.h \[1.12\] CALL record
Save:node\C\project\Macro_cfg_MTK.h \[1.13\] simulator
Save:node\C\project\Macro_cfg_MTK.h \[1.14\] 
//
Save:node\C\project\Macro_cfg_MTK.h \[2.1\] //IM
Save:node\C\project\Macro_cfg_MTK.h \[2.2\] DTMF, Dial, SIM, 天线
Save:node\C\project\Macro_cfg_MTK.h \[2.3\] 电子保卡
Save:node\C\project\Macro_cfg_MTK.h \[2.4\] tihu--------------语音王
Save:node\C\project\Macro_cfg_MTK.h \[2.5\] PLS---------------语音王
Save:node\C\project\Macro_cfg_MTK.h \[2.6\] DIGIT_TONE--------简易版语音王
Save:node\C\project\Macro_cfg_MTK.h \[2.7\] FM
Save:node\C\project\Macro_cfg_MTK.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_MTK.h \[2.9\] SS----------------屏保
Save:node\C\project\Macro_cfg_MTK.h \[2.10\] //Tool
Save:node\C\project\Macro_cfg_MTK.h \[2.11\] lib--------------
Save:node\C\project\Macro_cfg_MTK.h \[2.12\] 编译流程
Save:node\C\project\Macro_cfg_MTK.h \[2.13\] 省空间-----------app
Save:node\C\project\Macro_cfg_MTK.h \[2.14\] mem_pool
Save:node\C\project\Macro_cfg_MTK.h \[2.15\] marco
Save:node\C\project\Macro_cfg_MTK.h \[2.16\] //Lib
Save:node\C\project\Macro_cfg_MTK.h \[2.17\] FLASH------------文件系统
Save:node\C\project\Macro_cfg_MTK.h \[2.18\] build map
Save:node\C\project\Macro_cfg_MTK.h \[2.19\] bak
Save:node\C\project\Macro_cfg_MTK.h \[2.20\] 






[1.1] AUDIO, TONE
## 喇叭听筒二合一
make/{cur}_{GSM}.mak  __RECEIVER_SPEAKER_2IN1_SUPPORT__
//
make/{cur}_{GSM}.mak  BOARD_VER_CUST_AUDIO
//BOARD_VER_CUST_AUDIO = xxx_2IN1_BB
//
custom\audio\K220_N48_SPK_2IN1_BB\
custom\audio\K220_N48_BB\


// 回声测试
#COM_DEFS += __ECHO_TO_SPEAKER__				# 回声测试从喇叭输出

// 版权的原因，需要关闭AAC AAC+解码
make/{cur}_{GSM}.mak  AAC_DECODE = FALSE



[1.2] PB

// SIM 中的电话簿条目数
make/{cur}_{GSM}.mak  PHB_SIM_ENTRY = 100
//
// NVRAM 中的电话簿条目数
make/{cur}_{GSM}.mak  PHB_PHONE_ENTRY = 100

// 通话记录最后条目数
make/{cur}_{GSM}.mak  PHB_LN_ENTRY = 10


// 电话号码匹配的规则
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


### 交流电频率--外单
// 50HZ/60HZ
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_video.h   VDOREC_DEFAULT_SETTING_BANDING
//plutommi\mmi\Inc\MMI_features_video.h  VDOREC_DEFAULT_SETTING_BANDING
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h   CAMERA_DEFAULT_SETTING_BANDING
//plutommi\mmi\Inc\MMI_features_camera.h  CAMERA_DEFAULT_SETTING_BANDING


[1.9] __shortcut__
// shortcut--key--方向键
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
// shortcut--key--tmp
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list 临时文件(模拟器改这个文件)
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
//		==>NVRAM_EF_SHORTCUTS_LID   [12个, 完整, 数据]
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

// USB相关
USB_SUPPORT 	#USB功能的总开关
USB_HS_SUPPORT	#usb high speed
USB_MASS_STORAGE_SUPPORT	#usb mass storage
USB_IN_NORMAL_MODE_SUPPORT	#开机 mass storage
// usb com port--
make\{cur}_{GSM}.mak  USB_COM_PORT_SUPPORT = TRUE
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


# 充电超时，默认6小时 __CHARGE__
//		==>BMT_TOTAL_CHARGE_TIME  6*60
//		==>bmt_total_charge_time  6*60
//		==>BMT_CHARGE_TIMEOUT_TIMER  6*60*13000
//		==>bmt_charging_timeout_timer_callback
//		====>BMT_CHARGE_TIMEOUT
hal\peripheral\inc\bmt_sw.h  __DRV_BMT_BATTERY_LARGER_1600MA__


# 充电停止，默认30分
//		==>BMT_STOP_CHARGE_TIMER  30
//		==>bmt_stop_charge_timer_callback
hal\peripheral\inc\bmt_sw.h  BMT_STOP_CHARGE_TIMER


# 充电电流，默认500mA
custom\drv\misc_drv\_Default_BB\MT6261\chr_parameter.h  __CHR_CHARGE_CURRENT_300__



[1.11] __ATA__
//
make/{cur}_{GSM}.mak   ATA_SUPPORT
// ATA_SUPPORT = TRUE

make/{cur}_{GSM}.mak   __ATA_AUTO_TEST__
// COM_DEFS += __ATA_AUTO_TEST__

make\Option.mak  __ATA_SUPPORT__
//
make/{cur}_{GSM}.mak   WIFI_SUPPORT = NONE
make/{cur}_{GSM}.mak   BLUETOOTH_SUPPORT = BTMTK_MT6261
make/{cur}_{GSM}.mak   GAS_SUPPORT = TRUE
make/{cur}_{GSM}.mak   ISP_SUPPORT = TRUE
//
Save:node\C\project\Macro_Note_MTK.h  __CAM__
//
custom\drv\YUV_sensor\
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\
custom\drv\YUV_sensor\{board}\{cur}\BF3A01_SERIAL\
//
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\image_sensor_GC032A_SERIAL.h

### 文档 step
// --step1:
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\image_sensor_GC032A_SERIAL.c  GC032A_SERIALSensor
//	kal_bool FirstPv;
//	kal_bool OutTestPattern;
// --step2:
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\image_sensor_GC032A_SERIAL.c  GC032A_SERIALSensorOpen
//	GC032A_SERIALSensor.OutTestPattern = KAL_FALSE;
// --step3:
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\image_sensor_GC032A_SERIAL.c  GC032A_SERIALPreview
//	if (GC032A_SERIALSensor.OutTestPattern)
//	{
//		CamWriteCmosSensor(0x0028, 0xD000);
//		CamWriteCmosSensor(0x002A, 0xB054);
//		CamWriteCmosSensor(0x0F12, 0x0001);
//	}
// --step4:
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\image_sensor_GC032A_SERIAL.c  MM_ERROR_CODE_ENUM^GC032A_SERIALSensorFeatureCtrl
//#if defined(__CATS_SUPPORT__)
//  case CAL_FEATURE_CAMERA_SENSOR_OUTPUT_TEST_PATTERN:
//			 GC032A_SERIALSensor.OutTestPattern = (kal_bool)((P_IMAGE_SENSOR_COMM_DATA_STRUCT)In)->FeatureValue;
//			 break;
//#endif  
// --step5:
//#if defined(__CATS_SUPPORT__)
//coust unsigned char CATSTestPattern[] = {0};
//#endif
//

### 已有 step
// --step4:
hal\camera\cal\src\cal_feature_ctrl.c  __CATS_SUPPORT__
hal\camera\cal\src\cal_feature_ctrl.c  CATS_FEATURE_COMPARE_TEST_PATTERN
//        #if (defined(__CATS_SUPPORT__)||defined(__ATA_SUPPORT__))
//            case CAL_FEATURE_CAMERA_SENOSR_OUTPUT_TEST_PATTERN:
//            {
//                IMAGE_SENSOR_COMM_DATA_STRUCT SensorCommData;
//                
//                SensorCommData.FeatureValue = pFeatureIn->FeatureSetValue;
//                ErrorCode = pfImageSensor->SensorFeatureCtrl(pFeatureIn->FeatureId, &SensorCommData, NULL, 0, NULL);                        
//                break;
//            }
//
//            case CAL_FEATURE_CAMERA_GET_TEST_PATTERN:
//            {
//                IMAGE_SENSOR_COMM_DATA_STRUCT SensorCommData;
//
//                ErrorCode = pfImageSensor->SensorFeatureCtrl(pFeatureIn->FeatureId, NULL, &SensorCommData, 0, NULL);
//                pFeatureOut->FeatureCurrentValue = SensorCommData.FeatureValue;
//                break;
//            }
//        #endif
media\camera\include\cam_main.h  __CATS_SUPPORT__
//		========>CATSFeatureGetSensorID
//		========>CATSSaveFileDebug
//		========>CATSFeatureGetPatternFormat
//		========>CATSFeatureGetTestPattern
//		========>CATSFeatureCompareTestPattern
//		========>CATSFeatureCameraPreview
//		========>CATSFeatureCameraCapture
media\camera\src\cam_msg_handler.c  __CATS_SUPPORT__
//		==>custom_cmd_table
//		====>custom_em_test_camera_req(2,90)
custom\common\ps\customer_at_command.c  __CATS_SUPPORT__
//		======>custom_em_test_camera_req  # 读ID或拍照
// --读ID
//		========>CATSInit
//		========>CATSFeatureCtrl
//		========>CATSDeinit
// --拍照-测试/比较
// ----比较，384=12*16*2，18*21+6
custom\common\ps\custom_em.c  __CATS_SUPPORT__
//		==>IspYuvHISR
hal\camera\isp\src\isp_isr.c  __CATS_SUPPORT__
// --比较
//		==>Req:
//		====>CATSFeatureCtrl
//		======>CATSFeatureGetTestPattern  # 拍照
//		========>.frame_buffer
//		========>.frame_buffer1_p
//		========>.FrameBuffAddr1
//		========>.pMdpPara
//		========>.pScenarioCtrlPara
//		==========>CalCtrl
//		============>CalScenarioCtrl
//		==============>CalPreviewCtrl  # CAL_CTRL_CODE_START
//		==============>"C:\\Pattern.yuv"
//		==============>...
//		======>CATSFeatureCompareTestPattern   # 获取测试分区
//		========>CalCtrl
//		==========>CalFeatureCtrl  # CAL_FEATURE_CAMERA_GET_TEST_PATTERN
//		============>.SensorFeatureCtrl
//		==============>
media\camera\src\cam_msg_handler.c  CATS_FEATURE_COMPARE_TEST_PATTERN
media\camera\src\cam_msg_handler.c  CATSFeatureCompareTestPattern
// 加过的项目
custom/drv/YUV_sensor/K220_BB/K220_GZ_N43K_NEWMAN/GC6153_SERIAL/image_sensor_GC6153_SERIAL.c  CATSTestPattern_
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\image_sensor_GC032A_SERIAL.c  CATSTestPattern_GC032A



[1.12] CALL record
//
make/{cur}_{GSM}.mak   __SNDREC_SAVE_RENAME_CALL_NUM_STYLE__
//# 通话录音时保存文件名 电话号_日期那些命名
//	COM_DEFS 	+= __SNDREC_SAVE_RENAME_CALL_NUM_STYLE__
//	COM_DEFS 	+= __SNDREC_SAVE_RENAME_STYLE__





[1.13] simulator
//
MoDIS_VC9\MoDIS\Debug\MoDIS.ini
//	[INTEGRATE]
//	CATCHER =T:\[3.0852.00]Catcher\Catcher.exe




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
make/{cur}_{GSM}.mak  __REC_MID_SOFTKEY_ENABLE__
// dial--record--set
make/{cur}_{GSM}.mak  __AUTO_IN_CALL_SET_RECORDER__
// dial--record--fun
make/{cur}_{GSM}.mak  __MMI_CSK_REC_IN_CALL__


##
// 双卡选卡
make/{cur}_{GSM}.mak  __NEW_SPEED_DAIL_SIM_SELECT_ENABLE__
// sim反
make/{cur}_{GSM}.mak  __MMI_DRV_SIM_SWITCH_STYLE__
custom\drv\misc_drv\_Default_BB\MT6261\custom_drv_init.c  sim_switchPhysicalSlotMapping

# 天线
// 4格/5格/6格
//		==>EVT_ID_SRV_NW_INFO_SIGNAL_STRENGTH_CHANGED
//		==>mmi_nw_info_signal_on_strength_changed
//		==>wgui_status_icon_bar_change_icon_level
plutommi/Service/NwInfoSrv/NwInfoSrvSignal.c  srv_nw_info_get_percentage_from_{GSM}_rssi



[2.3] 电子保卡
// 4种
make\Option.mak  __PHONE_SALE_SERVERS_NEW__

// 1.内置版
make/{cur}_{GSM}.mak  XLS_SALE_SERVERS
//	XLS_SALE_SERVERS = TRUE
//	COM_DEFS += __XLS_SALE_SERVERS_TEST_PATCH__	#快速激活电子保卡
//	COM_DEFS += __XLS_SALE_META_TIME_STYLE__

make/{cur}_{GSM}.mak  __XLS_SALE_CUSTOM_TIME__
make\Option.mak  __XLS_DZBK_FUN__

// 激活
plutommi\mmi\Ucm\UcmSrc\UcmUi.c  NVRAM_EF_BAOKA_DATA_LID
plutommi\Service\SmsSrv\SmsConverterSrv.c  NVRAM_EF_BAOKA_DATA_LID
// baoka--init--异常值，无用
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



// 2.默认
make\Option.mak  __PHONE_SALE_SERVERS_NEW__


// 3.给指定号码发短信
make/{cur}_{GSM}.mak  MX_MMI_SALE_TRACK
//	MX_MMI_SALE_TRACK = TRUE 		# 销量统计功能给指定号码发送信息
//	COM_DEFS += __KINGBELL_SALE_TRACK_NUMBER__ 		#KINGBELL 销量统计后台号码

make\Option.mak  MX_MMI_SALE_TRACK
// --sale--number
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  SALE_TRACK_SRV_DEF_NUMBER


[2.4] tihu
// 1) tihu
make/{cur}_{GSM}.mak  HERO_ENGINE_SUPPORT
// tihu--来电
//     --TCARD/125kb/145kb
make/{cur}_{GSM}.mak  HERO_ENGINE_INCOMECALL
make/{cur}_{GSM}.mak  HERO_ENGINE_INCOMECALL_TCARD


// 2) tts
make/{cur}_{GSM}.mak  TIHO_TTS_SUPPORT
// tts--SLIM 省97K 
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
//   关闭宏, 默认白天
make/{cur}_{GSM}.mak  __TIHO_TTS_TIME_DEFAULT_OFF__
//   8:00-20:00, 或8:00-18:00
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
// tts--usb--conn
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  mmi_play_USB_in_tts
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  mmi_play_USB_out_tts
// tts--bat--conn/out
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  tiho_tts_battery_broadcast
// tts--menu
plutommi\Framework\GUI\GUI_SRC\wgui_categories_util.c  UI_string_type^get_item_text
plutommi\mmi\HeroEngine\TTS\src\TIHOTTSAPI.c  void^tiho_tts_menu_broadcast


// 5) tts--nv
plutommi\mmi\Setting\SettingRes\TihoBroadcastSetting.res  __TIHO_TTS_TIME_DEFAULT_OFF__


// 6) tts--time
// 一键报时
//		==>tiho_broadcast_speak_time
//		==>tiho_broadcast_speak_time_function
//		==>tiho_broadcast_play_speak_time
//		==>tiho_tts_cur_time_broadcast
// 整点报时
//		==>tiho_tts_time_broadcast
//		==>tiho_tts_need_broadcast




[2.5] PLS---------------语音王
// 1) PLS
make/{cur}_{GSM}.mak  PLS_APP_GSM_SUPPORT
make/{cur}_{GSM}.mak  PLS_MSP_TTS_SHORT_WAIT_TIME


// 报时中午/下午
make/{cur}_{GSM}.mak  PLS_MSP_TTS_TIME_ZXBH
//
plutommi\mmi\msp\tts\interface\msp_api.c  __MSP_TTS_TIME_ZXBH__

// vol
plutommi\mmi\msp\tts\interface\msp_tts_platform.c  msp_tts_get_volume_value

// 整点报时时段
custom\common\PLUTO_MMI\nvram_common_config.c  __PLS_MSP_TTS_TIME_DEFULT_DAY__

// lib
plutommi/mmi/plsApp/core/lib/

//
make\Option.mak   PLS_APP_GSM_SUPPORT
// 一键报时
//		==>msp_tts_current_time_bc_start
//		==>msp_tts_bc_curr_time
// 整点报时
//		==>msp_tts_time_bc_t
//		==>msp_tts_need_broadcast
//		==>msp_tts_other_is_available



[2.6] DIGIT_TONE--------简易版语音王
// 简易版语音王
make/{cur}_{GSM}.mak  DIGIT_TONE_SUPPORT = TRUE
make/{cur}_{GSM}.mak  NEW_DIGIT_TONE_SUPPORT = TRUE
// 主菜单播报	
make/{cur}_{GSM}.mak  __PLAY_AUDIO_FOR_MENU__
make/{cur}_{GSM}.mak  __AUDIO_PLAYING_DISABLED_KING_VOICE__
// 低电量语音提醒	
make/{cur}_{GSM}.mak  __AUDIO_BAT_CHAR_LOW__
make/{cur}_{GSM}.mak  __CHARGER_TTS__
make/{cur}_{GSM}.mak  __USB_CHARGER_TTS__
// 一键报时
make/{cur}_{GSM}.mak  __MMI_TIMEKEEPING__
// 整点报时/白天模式
make/{cur}_{GSM}.mak  __MMI_PUNCTUAL_TIMEKEEPING__
make/{cur}_{GSM}.mak  __MMI_PUNCTUAL_TIMEKEEPING_DEFAULT_CLOSE__
make/{cur}_{GSM}.mak  __MMI_PUNCTUAL_TIMEKEEPING_TIME_QUANTUM_DAY_MODE__

// 一键报时
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  __MMI_IDLE_KEY_0_TIMEKEEPING__
// 白天模式
plutommi\mmi\Setting\SettingRes\PhoneSetting.res  __MMI_PUNCTUAL_TIMEKEEPING_TIME_QUANTUM_DAY_MODE__

// other
// mp3
make/{cur}_{GSM}.mak  __AUDIO_PLAYING_DISABLED_KING_VOICE__
// backlight
make/{cur}_{GSM}.mak  __MMI_TIMEKEEPING_BACKLIGHT_OFF__

// ring
plutommi\Service\MDI\MDISrc\mdi_audio.c  mdi_audio_get_word_resource

//
make\Option.mak   DIGIT_TONE_SUPPORT
// 一键报时
//		====>test
//		====>mmi_idle_entry_dialer_by_key
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  mmi_timekeeping_strat
// 整点报时
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  mmi_spunctual_timekeeping_start



[2.7] FM
//
make/K220_Y01A_MGUO_{GSM}.mak FM_RADIO_ENABLE
//	FM_RADIO_I2S_PATH = FALSE   #TRUE
//	FM_RADIO_CHIP = NONE   #MT6261FM
//	FM_RADIO_HW_SEARCH = FALSE#TRUE
//	#COM_DEFS	+= __MMI_FM_NO_HEADSET__


// 带独立听筒的
__FM_LCD_OLD_TEST__


[2.8] 
// wifi 宏总(不关模拟器编不过)
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
//	tool:关闭MRE
make/{cur}_{GSM}.mak MRE_PACKAGE = SLIM
make/{cur}_{GSM}.mak MRE_CONTENT_NUMBER = 0
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
make/{cur}_{GSM}.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

//彻底关闭MRE
//@wanc 彻底关闭MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif

// 2.__FLAVOR__ 库
//FLAVOR = GEMINI_2_NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/NONE
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_modis/MT6261/S00/gprs/FLAVOR/NONE
tst/database_modis/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_classb/MT6261/S00/gprs/FLAVOR/NONE
tst/database_classb/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF

// (61D)模拟器编不过, 换为:
make/{cur}_{GSM}.mak  FLAVOR = NONE




[2.12] 编译流程
// 编译
// (1) MODEM
make/{cur}_{GSM}.mak  MODEM.mak
//	include make\MODEM.mak
make\MODEM.mak  COMPLIST
//	COMPLIST  	+= plutommi gdi_arm mmiresource vendorapp

// (2) gsm
//	PROJECT=gsm
make/{cur}_{GSM}.mak   RELEASE_PACKAGE	= REL_CR_MMI_$(strip $(PROJECT))
//	include make\$(strip $(RELEASE_PACKAGE)).mak
make\REL_CR_MMI_gsm.mak  COMPLIST

// (3) Option
make\Option.mak
//	COMPLIST :=  $(filter-out lcmmi,$(COMPLIST))
make\REL_COMP_COMMON.mak 
//	REL_SRC_COMP_COMMON += mmiresource
tools\scatGenLib.pl 
//	mmiresource - Font

// (4) Gsm2
make2.pl  myMF
//	$myMF = "gsm2.mak"
make\Gsm2.mak  option.mak
//	include make\option.mak

// (5) test...
// --> Codegen --> gsm2.mak ??可能是这个顺序
make\Codegen.mak  genmoduleinfo:
//	@tools\make.exe -fmake\gsm2.mak -r -R...
//
// log:
//	@echo copy custom_MemoryDevice_default >>$(strip $(TARGDIR))\aaaa.log
//  $(warning ...)
//	$(error ...)


// 加载.c文件
make\custom\custom.mak  FOLDER_LIST
make\custom\custom.mak  INC_DIR


编译问题:
// 1) mk:
custom\system\BLEPHONE61D_11C_BB\scat_config\FeatureBased\ObjListGen\object.list.backup CUSTOM_OPTION

// 2) 临时目录
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt

// 3) SI删除:行太长
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt




[2.13] 省空间

### 1.app
// 1.来电归属地------121K 
// 2.TTS-SLIM--------97K 
// 3.智能拨号--------16.4K
// 4.联系人复制------8K
// 5.紧急求助--------8K
// 6.图片搜索--------6K
// 7.待机壁纸--------10K
// 8.来电2个---------1K

// 可以省 5K(加200pb)




[2.14] mem_pool

### mem--cfg
// 可以省 37.6K(加150内存), 28K(加150内存)
// 13.7K(加50内存)
plutommi/mmi/Resource/MemoryRes.c  __MMI_K220_Z97_MEM_STYLE__
plutommi/mmi/Resource/MemoryRes.c  g_applib_mem_ap_pool
//
build\{cur}\{cur}_MT6261_S00.lis  g_applib_mem_ap_pool
// g_applib_mem_ap_pool                     0xf0136860   Data       662433

// ue打开
build\{cur}\
build\{cur}\{cur}_MT6261_S00.lis  DYNAMIC_COMP_CODE
//    Total RO  Size (Code + RO Data)              3950992 (3858.39kB)
//    Total RW  Size (RW Data + ZI Data)           1905676 (1861.01kB)
//    Total ROM Size (Code + RO Data + RW Data)    3974928 (3881.77kB)





[2.15] 



[2.16] 



[2.17] FLASH------------文件系统
### 文件系统
// 可以省 32.7K/64K (加16, 48比40大)
make/{cur}_{GSM}.mak  FS_SIZE_56_STYLE = TRUE
make/{cur}_{GSM}.mak  FS_SIZE_48_STYLE = TRUE
make/{cur}_{GSM}.mak  FS_SIZE_40_STYLE = TRUE
//
tools\emigenMD.pl  fs_size_40_style
tools\emigenMD.pl  fs_size_48_style
tools\emigenMD.pl  fs_size_60_style
//
tools\MemoryDeviceList\
tools\MemoryDeviceList\MemoryDeviceList_MT6261_Since11CW1352.xls


### Mem
make/{cur}_{GSM}.mak  BOARD_VER_CUST_MEMORYDEVICE = C61
make\Codegen.mak  BOARD_VER_CUST_MEMORYDEVICE

// ADDRESS+SIZE=0x400000 (61D) 否则超过会报：FAT空间超过物理NOR大小
// ADDRESS+SIZE=0x300000 (61M)
// --ADDRESS  -0x1000=4K  (可以理解为viva大小吗？)
custom\system\{board}\
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_BASE_ADDRESS
// --FS_SIZE  +0x1000=4K
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NOR_FS_SIZE
// --SECTORS 为0或20以上, 为0开机起不来(可能是语音王问题)
//		==>umem  0/24/32/40  +8*N, 8N=4K
custom\system\{board}\custom_MemoryDevice.h  define^NOR_BOOTING_NOR_FS_FIRST_DRIVE_SECTORS

// 若VIVA超4K, ADDRESS加0x1000, umem减0x1000, SECTORS减8

### ADDRESS
// --default/custom   #自动生成
custom\system\{board}\
custom\system\{board}\flash_opt_gen.h  NOR_FLASH_BASE_ADDRESS_DEFAULT   0x002D0000
custom\system\{board}\flash_opt_gen.h  NOR_ALLOCATED_FAT_SPACE_DEFAULT  0x00030000
custom\system\{board}\flash_opt_gen.h  FOTA_DM_FS_OFFSET                0x0
custom\system\{board}\flash_opt_gen.h  NOR_DISK0_BLOCK_SIZE             0x1000
// --default
custom\common\hal\flash_opt.h  359  NOR_FLASH_BASE_ADDRESS              0x002D0000
custom\common\hal\flash_opt.h  376  NOR_BOOTING_NOR_DISK0_SIZE          5784+0x1000=>0x1698=>0x2000
custom\common\hal\flash_opt.h  384  NOR_BOOTING_NOR_DISK0_BASE_ADDRESS  0x002D0000+0x00030000-0x2000
custom\common\hal\flash_opt.h  392  FS_BKP_OVERLAP_SIZE                 0x002D0000+0x00030000-...=>0x2000
custom\common\hal\flash_opt.h  432  NOR_ALLOCATED_FAT_SPACE             0x00030000-0x2000



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
build:log\FileSystemConfig.log  Error:^Shortage    # 178 Sectors = -89.0 KB
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


### tmp
//Save:set\Macro_Set_Path_mtk.h  tmpKey
//build\
//build\{tmp}\log\ckImgSize.log  system
//


[2.19] bak
// bak
_bat\build\_ckImgSize.log  project


[2.20] 

