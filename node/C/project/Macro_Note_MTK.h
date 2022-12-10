

//目录
// 项目
Save:node\C\project\Macro_Note_MTK.h \[1.1\] 
Save:node\C\project\Macro_Note_MTK.h \[1.2\] MTK编译指令
Save:node\C\project\Macro_Note_MTK.h \[1.3\] KEY
Save:node\C\project\Macro_Note_MTK.h \[1.4\] LCD
Save:node\C\project\Macro_Note_MTK.h \[1.5\] CAM
Save:node\C\project\Macro_Note_MTK.h \[1.6\] TP
Save:node\C\project\Macro_Note_MTK.h \[1.7\] ECG
Save:node\C\project\Macro_Note_MTK.h \[1.8\] hr
Save:node\C\project\Macro_Note_MTK.h \[1.9\] breathled
Save:node\C\project\Macro_Note_MTK.h \[1.10\] 
// 设置
Save:node\C\project\Macro_Note_MTK.h \[2.1\] 
Save:node\C\project\Macro_Note_MTK.h \[2.2\] //颜色---------common_mdu_def.h
Save:node\C\project\Macro_Note_MTK.h \[2.3\] 配置, 主题
Save:node\C\project\Macro_Note_MTK.h \[2.4\] fm
Save:node\C\project\Macro_Note_MTK.h \[2.5\] 语言, 字体----mmi_custom_define.h
Save:node\C\project\Macro_Note_MTK.h \[2.6\] 情景模式
Save:node\C\project\Macro_Note_MTK.h \[2.7\] //手电筒
Save:node\C\project\Macro_Note_MTK.h \[2.8\] U盘-----------mmisrvfmm_export.h 
Save:node\C\project\Macro_Note_MTK.h \[2.9\] 版本号--------Verno_xx.bld
Save:node\C\project\Macro_Note_MTK.h \[2.10\] 型号---------bt_cfg.h
Save:node\C\project\Macro_Note_MTK.h \[2.11\] 屏幕，时间---gpiosrv.res
Save:node\C\project\Macro_Note_MTK.h \[2.12\] 指令---------SSCPassEngine.c
Save:node\C\project\Macro_Note_MTK.h \[2.13\] 音量---------mmienvset_internal.h
Save:node\C\project\Macro_Note_MTK.h \[2.14\] 电池---------
Save:node\C\project\Macro_Note_MTK.h \[2.15\] trace
Save:node\C\project\Macro_Note_MTK.h \[2.16\] findstr
Save:node\C\project\Macro_Note_MTK.h \[2.17\] Build问题
Save:node\C\project\Macro_Note_MTK.h \[2.18\] 
Save:node\C\project\Macro_Note_MTK.h \[2.19\] 
Save:node\C\project\Macro_Note_MTK.h \[2.20\] 





[1.1] 

// set
//   F12查找宏有用
Save:set\Macro_Set_Path_mtk_.h  curKey


//特殊宏:
make/{cur}_{GSM}.mak REF_LIST_BRANCH  翻译
make/{cur}_{GSM}.mak CUSTOM_DEVICE
custom/system/FARSIGHTED61M_CN_11C_BB/custom_MemoryDevice_K220_L12_MGUO.h __MMI_SUPER_BATTERY__



//features:
plutommi/mmi/Inc/MMI_features.h PEER_CONTROL
//
features:MMI_features_switch{cur}.h  CFG_MMI_DYNAMIC_SIM_DYNAMIC_UI
features:MMI_features_switch{cur}.h  WHITELIST
	





[1.2] MTK编译指令

//编译1:
make K220_L12_MGUO gprs new
make K220_Z97_JMZ GSM new
	

//编译模块
make K220_L12_MGUO gprs r
make K220_L12_MGUO gprs remake
make K220_L12_MGUO gprs remake custom
make K220_L12_MGUO gprs remake plutommi

//编译资源 (VS接着编译即可)
make K220_L12_MGUO gprs Resgen


//模拟器: (改mk需重编)
make K220_L12_MGUO gprs gen_modis
make K220_Z97_JMZ GSM gen_modis
vs08:MoDIS_VC9\MoDIS.sln

//模拟器改NV后, 运行报错, 删除文件:
MoDIS_VC9\WIN32FS\DRIVE_C


// mtk--下载工具
Save:node\C\install\Macro_C_Install.h \[3.4\] mtk--下载工具:



[1.3] KEY
// --KEY
make/K220_Z97_JMZ_GSM.mak  KEY_LAYOUT_STYLE
//	KEY_LAYOUT_STYLE = CODEGEN_N19

// --KEY
make/K220_Z97_JMZ_GSM.mak  BOARD_VER
//	BOARD_VER = K220M_YGW_BB

//
COM_DEFS	+= __MMI_KEY_BACKLITE_STYLE__		#  按键灯背光时间显示控制
COM_DEFS 	+= __MMI_KEY_BACKLITE_STYLE_07_TO_19_HOUR__


// 拨号丝印
CFG_MMI_MULTITAP_KEY_0



[1.4] __LCD__
//
make/{cur}_{GSM}.mak  LCD_MODULE
//	LCD_MODULE = K220D_QQVGA_LCM
//
make/{cur}_{GSM}.mak  COM_DEFS_FOR_ xxx_LCM
//	COM_DEFS_FOR_K220D_D188A_QQVGA_LCM = COLOR_LCD K220D_QQVGA_LCM TFT_MAINLCD

//
//make/{cur}_{GSM}.mak CUSTOMER_NAME = M107
//make/{cur}_{GSM}.mak _COMBO_LCM = ST7735S GC9106	  屏设置
//
make/{cur}_{GSM}.mak SYNC_LCM_SUPPORT 			  屏设置 TE脚
//make\{cur}_GSM.mak 2_DATA_LANE_LCM 		  屏 三线/四线


// 横屏
make/{cur}_{GSM}.mak BOARD_VER
//	BOARD_VER = K220_L12_BB
make/{cur}_{GSM}.mak MAIN_LCD_SIZE
//	MAIN_LCD_SIZE = 160X128
make/{cur}_{GSM}.mak LCM_ROTATE_SUPPORT
//	LCM_ROTATE_SUPPORT = TRUE
make/{cur}_{GSM}.mak MAIN_LCM_SCANLINE_ROTATION
//	MAIN_LCM_SCANLINE_ROTATION = TRUE
make/{cur}_{GSM}.mak LCM_SCANLINE_ROTATION_SUPPORT
//	LCM_SCANLINE_ROTATION_SUPPORT = TRUE

//
custom\drv\LCD\{lcd}\
custom\drv\LCD\{lcd}\combo_lcm_ILI9340.c __FM_ADD_LCD_ID_EX__
custom\drv\LCD\{lcd}\combo_lcm_ST7735S.c
// lcd--id
custom\drv\LCD\{lcd}\lcd_sw.h  LCD_GC9306
// lcd--id
custom\drv\LCD\{lcd}\lcd_sw.h  SERIAL_LCM_2_DATA_LINE_PROTOCOL
// lcd--str
custom\drv\LCD\{lcd}\lcd_sw.h  main_lcm_enum
//	GC9108,
//	GC9102,
// hw--ic
custom\drv\LCD\{lcd}\combo_lcm.c  get_lcm_type_info
 

// 背光电流
custom/drv/misc_drv/_Default_BB/
custom/drv/misc_drv/_Default_BB/MT6261/pmu_custom.c  ISINK0_STEP

// 背光等级?? 
custom\app\{board}\nvram_user_config.c  MTKLCM_COLOR

// 背光延时
custom/drv/misc_drv/_Default_BB/MT6261/uem_gpio.c  __DRV_DELAY_ON_LED__


[1.5] CAM
### __CAM__
// 摄像头设置(开/关)
make/{cur}_{GSM}.mak SENSOR_TYPE = YUV / RAW / JPEG / NONE
make/{cur}_{GSM}.mak CMOS_SENSOR = GC032A_SERIAL / NONE
make/{cur}_{GSM}.mak FLAVOR = NONE
make/{cur}_{GSM}.mak SWITCHABLE_FEATURE_2ND = GEMINI
make/{cur}_{GSM}.mak ISP_SUPPORT = TRUE
// 摄像头设置(关)
make/{cur}_{GSM}.mak FLAVOR = NO_CAM / GEMINI_2_NO_CAM / GEMINI_2_SIM_OFF(gprs)
make/{cur}_{GSM}.mak SWITCHABLE_FEATURE_2ND = FLAVOR
make/{cur}_{GSM}.mak ISP_SUPPORT = FALSE
//	COM_DEFS += YUV_MAIN_CAMERA
// --非 _DIRECT 定义：
//  COM_DEFS += DIRECT_V2_MAIN_CAMERA
make/{cur}_{GSM}.mak PLATFORM = MT6261


// 摄像头2
make/{cur}_{GSM}.mak CMOS_SENSOR_BAK1 = BF3A01_SERIAL
//	COM_DEFS += YUV_BAK1_CAMERA
// --非 _DIRECT 定义：
//	COM_DEFS += DIRECT_V2_BAK1_CAMERA
// --好像要定义:
make/{cur}_{GSM}.mak LENS_MODULE_BAK1 = NONE
make/{cur}_{GSM}.mak BACKUP_SENSOR_SUPPORT = TRUE


// --path:
make/{cur}_{GSM}.mak NEW_SENSOR_CODE_FOLDER = TRUE
make/{cur}_{GSM}.mak PRJ_NAME = F209_KW_S77
// --new:
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\
custom\drv\YUV_sensor\{board}\{cur}\BF3A01_SERIAL\
// --old:
custom\drv\YUV_sensor\GC6133_SERIAL\


// 双摄
make/{cur}_{GSM}.mak DUAL_CAMERA_SUPPORT = FALSE
make/{cur}_{GSM}.mak CMOS_SENSOR_SUB = NONE
make/{cur}_{GSM}.mak CMOS_SENSOR_SUB_BAK1 = NONE

// 视频录像
make/{cur}_{GSM}.mak VIDEO_PLAYER_RECORDER_W_DCM = ENABLE


// 关CAM报错:
//	MJPG_ENCODE = FALSE
//	CMOS_SENSOR = BF3A02_SERIAL  #NONE
//	SENSOR_TYPE = YUV #NONE
//	ISP_SUPPORT = FALSE
// 关CAM报错:
//	Reading custom_data succeeded.
//	Start to parse the custom NVRAM DATA!
//	make: *** [.\build\M115_JGW_D2_X191_F2\gprs\MT6261r\codegen_dep\cgen_cfg.det] Error 253


//
make/{cur}_{GSM}.mak FLASHLIGHT_TYPE				  闪光灯
make/{cur}_{GSM}.mak CUSTOM_OPTION 			  	  自定义宏


[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 



[2.1] 


[2.2] 


[2.3] 配置, 主题
//	modis: 手电筒:
make/{cur}_{GSM}.mak __KM_ELECTRIC_TORCH__			手电筒

//	modis: 充电宝:
make/{cur}_{GSM}.mak __SBD_CHARGING_TREASURE_SWITCH__ 充电宝
//	充电宝图标
projects\M107\K220_L12_MGUO\Images\MainLCD\IdleScreen\StatusIcons\SI_CHARGING.png

// 马达
make/{cur}_{GSM}.mak  __NO_VIBRATOR__

//	按键配置:
open:custom\drv\Drv_Tool\DrvGen.exe
custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M103_KM_2401_VGOTEL_F2.dws	 -- GPIO 口 按键配置
//	按键定义:
custom\common\custom_fm.c mmi_fm_key_info_struct^g_fm_keypad_table


//	modis: 主题
projects\M107\K220_L12_MGUO\Resource\Themecomponents.h 
plutommi\Customer\CustResource\Themecomponents.h
//	弹窗背景:
projects\M107\K220_L12_MGUO\Resource\Themecomponents.h UI_filled_area^popup_screen_bg_filler_defaultTheme
//	日期高亮背景色:
projects\M107\K220_L12_MGUO\Resource\Themecomponents.h #define^img_menuitem_single_line_highlight_filler_color



[2.4] fm
//
make/{cur}_{GSM}.mak  FM_RADIO_CHIP
//	FM_RADIO_CHIP = MT6261FM
//	FM_RADIO_CHIP = NONE
//
make/{cur}_{GSM}.mak  FM_RADIO_HW_SEARCH
//	FM_RADIO_HW_SEARCH = TRUE
//
make/{cur}_{GSM}.mak  FM_RADIO_I2S_PATH
//	FM_RADIO_I2S_PATH = TRUE

//	FM--headset
make/{cur}_{GSM}.mak  __MMI_FM_NO_HEADSET__
//	COM_DEFS	+= __MMI_FM_NO_HEADSET__               	# 不支持耳机
//	COM_DEFS	+= __PLUGOUT_DEFAULT__        			# 不支持耳机须开此宏

//	FM--headset
features:MMI_features_switch{cur}.h  CFG_MMI_FM_RADIO_BIND_EARPHONE



### old
//	FM:
make/{cur}_{GSM}.mak  FM_RADIO_RECORD
//	EZFM:
make/{cur}_{GSM}.mak  SBD_EZFM_SUPPORT 
make/{cur}_{GSM}.mak  EASY_FM
features:MMI_features_switch{cur}.h  CFG_MMI_FM_RADIO_BIND_EARPHONE
//	FM 天线:
make/{cur}_{GSM}.mak  INTERNAL_ANTENNAL_SUPPORT

//	EZFM:
//make/{cur}_{GSM}.mak __KM_EASY_FM__
features:MMI_features_switch{cur}.h  CFG_MMI_FM_RADIO_BIND_EARPHONE





[2.5] 语言, 默认语言:

### 语言
features:MMI_features_switch{cur}.h  CFG_MMI_LANG_
features:MMI_features_switch{cur}.h  CFG_MMI_LANG_.*(__ON__)
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res NVRAM_SETTING_LANG
//	默认输入法:
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res NVRAM_SETTING_PREFER_INPUT_METHOD
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res RESTORE_PREFER_INPUT_METHOD
plutommi\Framework\InputMethod\Inc\ImeGprotEnums.h mmi_imm_input_mode_enum 参考这个枚举, 注意错位2个
//	按键字符定义, 输入法丝印:
vendor/InputMethod/mtk/mtkmultitap.c g_multitap_pashto
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_urdu
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_fr
//	孟拉加组合字--Cstar:
features:MMI_features_switch{cur}.h  CFG_MMI_MULTITAP_BANGLA_SPEC
features:MMI_features_switch{cur}.h  CFG_MMI_CSTAR_MULTITAP
features:MMI_features_switch{cur}.h  CFG_MMI_MULTIGRAPH_SUPPORT
features:MMI_features_switch{cur}.h  CFG_MMI_IRE_SLIM	关闭, # 1键部分字符组合
plutommi\Framework\IndicLanguages\IndicLanguagesSrc\Bengali.c


	时间:
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res TIME_FORMAT
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res DATE_FORMAT
	系统时间:
custom/drv/misc_drv/_Default_BB/MT6261/custom_hw_default.c DEFAULT_HARDWARE_YEAR
plutommi\mmi\Setting\SettingSrc\Restore.c  time->info.data_time.rtc_year

	亮度:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
	闪光灯:
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h CAMERA_DEFAULT_SETTING_FLASH
	按键灯等级:
plutommi\Service\Inc gpiosrvgprot	


	手机追踪:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res mmi_rp_app_mobile_tracker_def.h
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res MENU_ID_MOBILE_TRACKER
plutommi\mmi\Inc\ProcedureConfig.h KM_MMI_FRM_PROC_ID_MOBILE_TRACKER


[2.6] 情景模式

NVRAM_PROFILES_ACTIVATED 情景模式默认NV	

//	K类: K类设置不同可能开不了机
make/{cur}_{GSM}.mak CLASSK_CHARGEPUMP_SUPPORT
make/{cur}_{GSM}.mak SBD_EXTERNAL_AMPLIFIER_CLASSK
	
//	省电模式:
make/{cur}_{GSM}.mak __MMI_SUPER_BATTERY__
make/{cur}_{GSM}.mak __KM_MMI_PROFILE_RETRENCH__


###	情景默认等级:
// --env--vol
custom\common\userprofile_nvram_def.c NVRAM_PROFILES_DEFAULT
//custom\common\userprofile_nvram_def_{cur}.h
custom\common\userprofile_nvram_def.c 462
// --env--vol--define
custom\common\userprofile_nvram_def.h  nvram_srv_prof_setting_struct;
// +1~8: ring_vol ~ ring_type
// +1~6: intelligent_call_alert ~ touch_vib
// +1~5: power_on_tone ~ cover_close_tone
// +1~4: sms_tone
// +1~4: mms_tone
// +1~4: email_tone
// +1~4: voice_tone
// +1~4: mt_call_tone  这个应该是来电
// +1~4: vt_call_tone



//	耳机+外放音量等级:
// __call_vol__
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_NORMAL_MODE_VOICE_LEVEL //听筒
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_HDSET_MODE_VOICE_LEVEL  //耳机
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_LDSPK_MODE_VOICE_LEVEL  //外放/免提
// 用 [71] 不用 [LEVEL7]
custom\common\PLUTO_MMI\custom_mmi_default_value.h  LEVEL6


[2.7] 手电筒
	



[2.8] U盘


[2.9] 版本号


[2.10] 型号

//	蓝牙名称:
//BTMMICm.c  MMI_BT_DEF_HOST_BT_NAME
//	蓝牙名称:
custom\common\PLUTO_MMI\nvram_common_config.c #define^BT_NAME
//	USB 链接名称:
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c USB_PRODUCT_STRING

//U盘符
// U盘符--注册（改了无效）
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c custom_usb_ms_init
// 编码（改了无效）
CFG_MMI_SET_DEF_ENCODING_TYPE
//
// BOAT_SW_CUSTOMER_UDISK_NAME_SUPPORT
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c  BOAT_CUSTOM_TF_CARD1_NAME_WSTR
	

// flash size
SIP_SERIAL_FLASH_SIZE = 32M_BITS
// 默认文件系统的大小就是Last Bank Region的大小。
tools\MemoryDeviceList\MemoryDeviceList_MT62XX_SinceXXX.xls
// xls -> SERIAL_FLASH -> Last Bank -> MTKSIP_6261_SF_32_01 -> {0x1000, 32}
tools\MemoryDeviceList\MemoryDeviceList_MT6261_Since11CW1352.xls
//		file system size = {0x1000, 32} = 0x1000 * 32 = 128KB.


//内置mp3文件



[2.11] 屏幕，时间
// 自动更新:
plutommi\Service\NITZSrv\res\NITZSrv.res NVRAM_SETTING_AUTOUPDATE_DT_TIME_STATUS 
plutommi\mmi\Setting\SettingRes\PhoneSetting.res NVRAM_AUTOUPDATE_DT_STATUS ??不清楚用途
// 默认城市/时区
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res id="CURRENT_CITY"
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res <STRING^id="STR_WCLOCK_CITY78"/>
plutommi\Customer\CustResource\PLUTO_MMI\resource_world_clock_city.c TimeZoneData 新加时区
//  Lima – Peru   GMT-5
//	{-5, 		STR_WCLOCK_Lima,		STR_WCLOCK_CITY_ABBRE10,63, 98, 1},
	
// 屏背光亮度/时间:
// --亮度默认5
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
// --时间默认10s
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_HFTIME
// 屏半亮时间:
//    g_gpio_p->hf_time  = 15
//    g_gpio_p->dim_time =  5
//       ==>SRV_GPIO_BACKLIGHT_DIMMING_TIME
plutommi/Service/GpioSrv/gpioBacklightSrv.c 940

// 自动锁屏时间:
plutommi/mmi/ScrLocker/ScrLockerRes/ScrLocker.res <MENU^id="MENU_ID_SLK_TIME_SETTING_MENU"
plutommi/mmi/ScrLocker/ScrLockerSrc/ScrLockerSetting.c #define^MMI_SLK_SET_SELECTION_DEFAULT

// 按键灯时间
make/{cur}_{GSM}.mak  __MMI_KEY_BACKLITE_STYLE__
make/{cur}_{GSM}.mak  __MMI_KEY_BACKLITE_STYLE_07_TO_19_HOUR__
//
plutommi\mmi\gpio\gpiores\PhnsetGpio.res  __MMI_KEY_BACKLITE_STYLE_07_TO_19_HOUR__

// 关机时间
//		==>Powerkey_longpress_timeout = 300 /*3s*/
hal\peripheral\src\kbdmain.c  __KPD_LONGPRESS_POWER_KEY_ALONE_TIME__
// 长按时间(no use)
//		==>KBD.longpress_timeout = 200; /*2s*/
hal\peripheral\src\kbdmain.c  Kbd_Initiaze
// 长按时间
//		==>uem_set_repeat_time(0.6s); /*0.6s*/
custom\drv\misc_drv\_Default_BB\MT6261\custom_hw_default.c  KPD_LONGPRESS_PERIOD
//		==>repeat_time   /*1s->0.5s*/
ps\l4\uem\src\uem_main.c  KPD_REPEAT_PERIOD

// 充电超时
Save:node\C\project\Macro_cfg_MTK.h  __CHARGE__


[2.12] 指令
// version
plutommi/AppCore/SSC/SSCPassEngine.c SSC_SW_VERSION
plutommi\AppCore\SSC\SSCStringTable.h SSC_SW_VERSION_1
plutommi\AppCore\SSC\SSCStringTable.h SSC_FACTORY_MODE
// version--no use
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\CustResDef.h SSC_SW_VERSION

// SAR
plutommi/AppCore/SSC/SSCPassEngine.c mmi_show_sar_info

// IMEI
plutommi/AppCore/SSC/SSCPassEngine.c SSCHandleIMEI
plutommi\AppCore\SSC\SSCStringTable.h SSC_MANUAL_SET_IMEI
plutommi\AppCore\SSC\SSCStringTable.h SSC_MANUAL_SET_IMEI1


// hw LCD+CAM信息
plutommi/AppCore/SSC/SSCPassEngine.c hw_info_show

//
plutommi/AppCore/SSC/SSCOperate.c mmi_ssc_send_imei_get_ilm

// eng
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\CustResDef.h SSC_ENGINEERING_MODE

// 恢复出厂设置指令:
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_EF_PHONE_LOCK_DEFAULT
// 手机密码:
custom\common\hal\nvram\nvram_cust_pack.c COMMON_NVRAM_EF_MS_SECURITY_DEFAULT





[2.13] 音量
// mp3
Save:node\C\study\Macro_app_MTK.h  __mp3_vol__
// env
Save:node\C\study\Macro_app_MTK.h  __env_vol__
// call
Save:node\C\project\Macro_Note_MTK.h  __call_vol__


[2.14] 


[2.15] trace
### 利用Catcher抓取真机上的LOG
// *#555#
//device-->set uart-->uart-->usb port->usb model
//tool-->log mode(bar9)-->nv file
//tool-->connect(bar14), filter, view-->ps
//tool-->view-->ps intergrated


### 利用Catcher抓取模拟器上的LOG
//1、启动Modis（一定要先启动这个，否则可能会报错）
//2、启动Catcher，在config->set database path下选择.
//  \tst\database_modis\BPGUInfoCustomApp_pc_SrcP
//




[2.16] findstr
//错误查找命令:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
没装cygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

// 有 ERROR 才打开 aaaa.txt:
cmd_f cd build\{cur}\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
cmd_f cd build\{cur}\log&&findstr /s /i "font" *.log>aaaa.txt&&start aaaa.txt
cmd_f cd build\{cur}\log&&findstr /s /i "custom_MemoryDevice" *.log>aaaa.txt&&start aaaa.txt
cmd_f cd build\{cur}\&&findstr /s /i "copy" *.log>aaaa.txt&&start aaaa.txt
// open aaaa:
build\{cur}\log\aaaa.txt Error:
// open cmd:
cmd: cmd



[2.17] Build问题
//
build:build.log cleanlib 				编译时间
build:MT6261.log Finished: 			链接问题看这个
build:log\
build:log\mmi_check.log Error:
build:log\mmiresource.log Error:
build:log\mmi_framework.log Error:
build:log\mmi_app.log Error:
build:log\mmi_core.log Error:
build:log\custom.log Error:
build:log\ckImgSize.log Error:
build:log\mmi_service.log Error:
build:log\resgen.log Error:
build:log\resgen_mtk_resgenerator_make.log Error:
build:log\resgen_xml_parse.log Error:
build:log\conn_app.log Error:
build:log\DrvGen.log Error:
	

build:MMI_DRV_DEFS.mak  				查看宏是否存在
build:log\info.log  					查看宏是否存在
build:log\drv_features_option.log  	查看宏是否存在
build:log\MMI_features.log  			查看宏是否存在

build:log\vivaConfig.log Error:     #RAM超 把0x003B6000改小
//#define NOR_BOOTING_NOR_FS_BASE_ADDRESS   0x003B4000  //<-  0x003B6000
//#define NOR_BOOTING_NOR_FS_SIZE 0x00048000  //<-  0x0004A000

build:gprs\MT6261r\pregen_dep\emigen.det




[2.18] 


[2.19] 


[2.20] 


[2.21] 


[2.22] 


