

mkPath = SPDE_PRJ\K220U_SHY_517T\project_UIS8910_ROM_16MB_DS_USER.mk
mk:\\
cfgPath = SPDE_PRJ\K220U_SHY_517T\uis8910_phone_user_base_config.cfg
cfg:\\
configPath = MS_Customize\source\product\config
config:\\
sensorsPath = MS_Customize\source\product\driver\sensors
sensors:\\
//buildPath = build\UIS8910_ROM_16MB_DS_USER_builddir
buildPath = build\UIS8910_ROM_16MB_SS_WA07U_F30X_USER_builddir
build:\\



//Ŀ¼[Num][Ca]:
// ��Ŀѡ�� ����
Save:node\C\project\Macro_Note_8910.h \[1.1\] set project
Save:node\C\project\Macro_Note_8910.h \[1.2\] 6531E����ָ��:
Save:node\C\project\Macro_Note_8910.h \[1.3\] KEY
Save:node\C\project\Macro_Note_8910.h \[1.4\] LCD
Save:node\C\project\Macro_Note_8910.h \[1.5\] CAM
Save:node\C\project\Macro_Note_8910.h \[1.6\] TP
Save:node\C\project\Macro_Note_8910.h \[1.7\] ECG
Save:node\C\project\Macro_Note_8910.h \[1.8\] hr
Save:node\C\project\Macro_Note_8910.h \[1.9\] breathled
Save:node\C\project\Macro_Note_8910.h \[1.10\] 
// ����
Save:node\C\project\Macro_Note_8910.h \[2.1\] 
Save:node\C\project\Macro_Note_8910.h \[2.2\] ��ɫ---------common_mdu_def.h
Save:node\C\project\Macro_Note_8910.h \[2.3\] ����
Save:node\C\project\Macro_Note_8910.h \[2.4\] fm
Save:node\C\project\Macro_Note_8910.h \[2.5\] ����, ����----mmi_custom_define.h
Save:node\C\project\Macro_Note_8910.h \[2.6\] �龰ģʽ ��Ƶ����:
Save:node\C\project\Macro_Note_8910.h \[2.7\] �ֵ�Ͳ
Save:node\C\project\Macro_Note_8910.h \[2.8\] U��-----------mmisrvfmm_export.h 
Save:node\C\project\Macro_Note_8910.h \[2.9\] �汾��--------version_software_mocor.h
Save:node\C\project\Macro_Note_8910.h \[2.10\] �ͺ�---------bt_cfg.h
Save:node\C\project\Macro_Note_8910.h \[2.11\] ��Ļ��ʱ��---mmidisplay_data.h
Save:node\C\project\Macro_Note_8910.h \[2.12\] ָ��---------mmiset_security.h
Save:node\C\project\Macro_Note_8910.h \[2.13\] ����---------mmienvset_internal.h
Save:node\C\project\Macro_Note_8910.h \[2.14\] ���---------
Save:node\C\project\Macro_Note_8910.h \[2.15\] trace
Save:node\C\project\Macro_Note_8910.h \[2.16\] ��չ��Ŀ:
Save:node\C\project\Macro_Note_8910.h \[2.17\] Build����
Save:node\C\project\Macro_Note_8910.h \[2.18\] 
Save:node\C\project\Macro_Note_8910.h \[2.19\] 
Save:node\C\project\Macro_Note_8910.h \[2.20\] 
	



[1.1] ��ǰ��Ŀ
// �鿴--ѡ����ʷ��Ŀ�б�: 
Save:set\Macro_Set_Note.h	6531E-note-set

// Ĭ����Ŀ(�����ϴ�svn) [Cs]:
set K220U_ZXBLX_H35_Z

	
// ��ǰ��Ŀ:
set UIS8910_ROM_16MB_DS_USER
set ums9117_240X320BAR_48MB_X206T_H1616_user

setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��)


//	�汾�ţ�
version\SC6530_sc6500_32X32_128X160BAR_X89E_WWK_VIB_version.c
build:tmp/version_software_project.h


[1.2] 6531E����ָ��:
cmd: cmd


����:
open: project\UIS8910_ROM_16MB_DS_USER\New_common.bat


����ģ��
make p=UIS8910_ROM_16MB_DS_USER
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv
make p=UIS8910_ROM_16MB_DS_USER image


�� (1������)
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image job=4

������Դ (VS���ű��뼴��)
make p=UIS8910_ROM_16MB_DS_USER m=resource job=4


������ģ��
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main


ģ������
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
vc: build\UIS8910_ROM_16MB_DS_USER_builddir\win\simulator.dsw
build\UIS8910_ROM_16MB_DS_USER_builddir\win\
//	��NVɾ��
cmd del^build\UIS8910_ROM_16MB_DS_USER_builddir\win\bin\flash_sim.dat
build\UIS8910_ROM_16MB_DS_USER_builddir\win\bin\flash_sim.dat


// spr--���ع���
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
build\UIS8910_ROM_16MB_DS_USER_builddir\img

F:\6531G_16A_MP_W17.43.4\build\UIS8910_ROM_16MB_DS_USER_builddir\img




[1.3] KEY
//
config:uis8910ff_refphone\keymap_cfg.c  keymap\[\]

//	23����
project_UIS8910_ROM_16MB_DS_USER.mk _23KEY
project_UIS8910_ROM_16MB_DS_USER.mk MMI_MULTI_GREEN_KEY =DUAL �̼�


[1.4] LCD
// ����
make\custom_drv\custom_drv.mk  tft_ST7735S.c
//
MS_Customize\source\product\config\
MS_Customize\source\product\config\ums9117_barphone\lcm_cfg_info.c LCD_DRV_ID_ST7735S
MS_Customize\source\product\config\uis8910ff_refphone\lcm_cfg_info.c LCD_DRV_ID_ST7735S
// lcd-id
MS_Customize\export\inc\lcm_cfg.h  LCD_DRV_ID_ST7735S
// (107)
MS_Customize/source/common/lcm_prod.c  ST7735S
//
MS_Customize/source/product/driver/lcd/tft_ST7735S.c


//	�޸İ����ڵ㣺
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)

//	������/��������:
chip_drv\chip_module\analog\
//	--6531D
chip_drv\chip_module\analog\sr1131\analog_phy_sr1131.c  s_ana_bln_sw_tab
chip_drv\chip_module\analog\sr1131\analog_phy_sr1131.c  s_ana_dev_tab
//	--6531E
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c s_ana_bln_sw_tab
//	--t703
chip_drv\chip_module\analog\sc2720\analog_phy_sc2720.c  s_ana_bln_sw_tab
chip_drv\chip_module\analog\sc2720\analog_phy_sc2720.c  s_ana_dev_tab
//	--t107
chip_drv\chip_module\analog\v7\analog_phy.c  s_ana_bln_sw_tab
chip_drv\chip_module\analog\v7\analog_phy.c  BLTC_LCM_CURRENT_V
chip_drv\chip_module\analog\v7\analog_phy.c  s_ana_dev_tab
//	�������� = BLTC_LCM_CURRENT_V

//	--Ŀ¼
make\chip_drv\def_config\
make\chip_drv\def_config\UMS9117.cfg  CONFIG_ANALOG_VER = v7
make\chip_drv\chip_modules\analog.mk  CONFIG_ANALOG_VER
//
make\chip_drv\chip_drv.mk  analog_phy_sc2720.c
make\chip_drv\chip_drv.mk  analog_phy


// SUBLCD
//	SUBLCM_INTERFACE = LCM     
//	SUBLCD_DEV_SIZE  = 128X160  
//	SUBLCD_SIZE      = 128X160  
SPDE_PRJ\K220U_SHY_517T\uis8910_phone_user_base_config.cfg



[1.5] CAM
// ��CAM
make\custom_drv\custom_drv.mk  sensor_gc032A.c
//
MS_Customize/source/product/config/ums9117_barphone/sensor_cfg.c
MS_Customize\source\product\config\uis8910ff_refphone\sensor_cfg.c main_sensor_infor_tab
//
//	extern const SENSOR_INFO_T g_GC6153_yuv_info;
//
//	&g_GC6153_yuv_info,

//
MS_Customize/source/product/driver/dc/sensor_gc6153.c
//
project_UIS8910_ROM_16MB_DS_USER.mk SENSOR_CHIP

	
[1.6] TP
// BL6133  CST816S
project_UIS8910_ROM_16MB_SS_WA07U_USER.mk  CAP_TP_SUPPORT
uis8910_phone_user_base_config.cfg  CAP_TP_SUPPORT
//
SPDE_PRJ\WA07U\project_UIS8910_ROM_16MB_SS_WA07U_USER.mk  CAP_TP_SUPPORT
SPDE_PRJ\WA07U\uis8910_phone_user_base_config.cfg  CAP_TP_SUPPORT
//


	
[1.7] ECG
// 

	
[1.8] HEART_RATE
//HEART_RATE_SENSOR_SUPPORT

	
[1.9] breathled
sensors:breathled\led_et6037y.c
sensors:breathled\led_AW2013.c


[1.10] 



[2.1] 






[2.2] ��ɫ---------common_mdu_def.h
// �¼� COLOR_RES_CUSTOM_BG
ms_mmi_main/source/mmi_app/common/h/common_mdu_def.h       COLOR_RES_PUBWIN_BG
MS_MMI_Main\source\mmi_app\app\theme\c\mmi_theme.c     COLOR_RES_PUBWIN_BG
MS_MMI_Main\source\mmi_app\app\theme\c\mmi_theme.c MMI_THEME_PUBWIN_BG

//
MS_MMI_Main\source\resource\Common\RING\




[2.3] ����
//	˫����ͷ(Ĭ�ϵ�)��
project_UIS8910_ROM_16MB_DS_USER.mk SBD_DUAL_CAMERA_SUPPORT

//	��Ƶ / 2Ƶ����;������2Ƶ��
project_UIS8910_ROM_16MB_DS_USER.mk __SBD_RF_TWO_BAND_SUPPORT__
project_UIS8910_ROM_16MB_DS_USER.mk SBD_RF_TWO_BAND_SUPPORT

//	������
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_REMOVE_VIBRA__ =TRUE

//	˫����
project_UIS8910_ROM_16MB_DS_USER.mk MMI_MULTI_SIM_SYS = DUAL
project_UIS8910_ROM_16MB_DS_USER.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    ����
//	�������룺
//TXT_SIM_SEL_SIM1--pb	--	 SIM1
//SIM1 network account

	



[2.4] fm
//	FM��
project_UIS8910_ROM_16MB_DS_USER.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project_UIS8910_ROM_16MB_DS_USER.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #�����ѵ�̨��һ��
project_UIS8910_ROM_16MB_DS_USER.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #���ʱ��

//
FM_SUPPORT = NONE          
FM_S_ANT_SUPPORT = FALSE   
FM_VBC = FALSE			





	
[2.5] ����, ����---mmi_custom_define.h 
// font-8910
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMI_DEFAULT_BIG_FONT
// font-6531
MS_MMI\source\mmi_app\custom\h\mmi_custom_define.h MMI_DEFAULT_BIG_FONT
// Ĭ������:
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_LANGUAGE
// sms--sim--num
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMISMS_MAX_SYS_SIM_SMS_NUM

// MULTIM
key:MULTIM,file:mmiset_export.h

// KEYTABLE
key:KEYTABLE,file:mmiim_sp_ml9key_data.c


## ����
IM_SIMP_CHINESE_SUPPORT	= FALSE	          
MMI_DISPLAY_SIMP_CHINESE_SUPPORT = FALSE  
IM_TRAD_CHINESE_SUPPORT = TRUE            
MMI_DISPLAY_TRAD_CHINESE_SUPPORT = TRUE   
MMI_LANG_HAN_VECTOR_DEFAULT_ADD_SIMP_LIB = TRUE
MMISET_EDEFAULT_INPUT_LANGUAGE_TRAD_CN = TRUE



[2.6] �龰ģʽ ��Ƶ����:
//	����K�๦�ţ�
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

//	���2��1��FALSE��������Ͳ����(Ӳ������һ)���ֿ������2��1
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_EARPIECE_SPEAK_USE_ONE
project_UIS8910_ROM_16MB_DS_USER.mk CUSTOMER = S039_JX_2IN1	                 # ����һ����Ƶ����K�����Ƶ��ͬ��
\audio\audio_dsp_codec_6531.nvm    0x6C0/Ӳ��2��1;    0x638/���2��1

//	����һ��
project_UIS8910_ROM_16MB_DS_USER.mk CUS_ADD_SHAKE= TRUE  ����һ���Ⱥ�        
project_UIS8910_ROM_16MB_DS_USER.mk VIRTUAL_VIBRATE_FUNC
project_UIS8910_ROM_16MB_DS_USER.mk __SPEAKER_VIB_INTENSITY_WEAK__
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE ����һͬʱ��


// CUSTOMER
key:CUSTOMER,path:common\nv_parameters\{CONFIG}\{VALUE}

// PRTITION
key:PRTITION,file:MS_Customize\source\product\config\{CONFIG}\mem_cfg.c

// CONFIG
key:PRODUCT_CONFIG,path:MS_Customize\source\product\config\{CONFIG}



[2.7] �ֵ�Ͳ
//	�ֵ�Ͳ
project_UIS8910_ROM_16MB_DS_USER.mk HHT_ADD_TORCHLIGHT= TRUE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_ADD_TORCHLIGHT			 #6531E
	
//	�����
project_UIS8910_ROM_16MB_DS_USER.mk DC_FLASH_SUPPORT= TRUE


[2.8] 
//	U��
project_UIS8910_ROM_16MB_DS_USER.mk UMEM_PRTITION _MICRO
// path 
//  MMIMULTIM_DIR_MUSIC
MS_MMI_Main\source\mmi_service\export\inc\mmisrvfmm_export.h 




[2.9] �汾��version_software_mocor.h
version_software_mocor.h

// VERSION
key:VERSION,file:mmieng_main.c

// SAR
key:SAR,file:mmieng_base.c


// IMEI
key:IMEI,file:mmieng_main.c

// FULLTEST
key:FULLTEST,file:mmieng_main.c

// BUILD
key:BUILD,file:mmieng_base.c



[2.10] �ͺ�---------bt_cfg.h

	�ͺ�--MSD, ���룺
project_UIS8910_ROM_16MB_DS_USER.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

// USB
MS_Customize\source\product\driver\ubot\ubot_cfg_info.c  s_UBOT_StrProduct

// UDISK
key:UDISK,file:mmisd_export.h

// UA
key:UA,file:mmibrowser_wintable.c

// FMM
key:FMM,file:mmisd_export.h

// DEVICE
key:DEVICE,file:bt_cfg.h

// BT
MS_Customize\export\inc\bt_cfg.h  BT_DEFAULT_LOCAL_NAME


[2.11] ��Ļ��ʱ��---------mmidisplay_data.h

// TITLE
MS_MMI_Main\source\mmi_app\app\theme\h\mmidisplay_data.h  MMI_TITLE_TEXT_FONT

// softkey
MS_MMI_Main\source\mmi_app\app\theme\h\mmidisplay_data.h  MMI_FULLSCREEN_SOFTKEY_TEXT_FONT

// ��������
chip_drv/chip_module/analog/sr1131/analog_phy_sr1131.c

// time--�����
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_BACKLIGHT_TIME
// time--������
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_KEYBOARD_LIGHT_TIME

// time--KEYLOCK
MS_MMI_Main\source\mmi_app\app\setting\h\mmiset_func.h  DEFAULT_KEYLOCK_TIME_15S_SETTING
// ������ʾ��
MS_MMI_Main/source/mmi_app/app/idle/c/mainapp.c  iTimeOut  KEYLOCK_LSK_TIME


// time--ALERT
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  xx  SBD_ALERT_WIN_TIME_PERIOD_1S
// time--format-12
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_display.c  MMI_TIME_DISPALY_TYPE_DEFAULT_12


// POWER
mmiphone_onoff.c  SBD_CHANGE_POWER_OFF_TIME_10S

// sys time
DisplaySystemDate
MMIAPISET_GetCurrentDateStr
RestoreDataTimeFactorySetting
MMIAPISET_IsNeedResetDateTime

// red--��������ʱ��
chip_drv\chip_module\chip\uix8910\chip_phy_uix8910.c  CHIP_PHY_PB1KeyHwRstSet



[2.12] ָ��
// psw
MS_MMI_Main/source/mmi_app/app/setting/h/mmiset_security.h  MMISET_PRIVACY_PROTECT_INIT_PWD




[2.13] ����---------mmienvset_internal.h
// set vol
MS_MMI_Main\source\mmi_app\app\envset\h\mmienvset_internal.h  MMIENVSET_CALL_RING_VOL_SILENT_MODE
// multim vol
MS_MMI_Main\source\mmi_app\app\setting\h\mmiset_export.h  MMISET_VOL_DEFAULT_MULTIM


[2.14] ���---------
// battery
Save:node\C\study\Macro_Spr_battery.h




[2.15] trace
mk: RELEASE_INFO = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk RELEASE_INFO = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk MEMORY_DEBUG_SUPPORT = TRUE
project_UIS8910_ROM_16MB_DS_USER.mk TRACE_INFO_SUPPORT = TRUE
project_UIS8910_ROM_16MB_DS_USER.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
//
UART_LOG_SUPPORT
// 8910
MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_DEBUG
// 107 user�򴮿�
UART_LOG_SUPPORT

ץtrace:
open: tools\DEBUG_TOOL\CHANNELSERVER\Bin\ChannelServer.exe
//	1) ����USB��, ѡ�� USB LOG��ѡ��
//	2) Channel Server Configure:
//		MS: Type:	UART
//		   Port:  SPRD U2S Diag(COM12)	---------------- Ҫ�� 
//		                       (COM12������USB�Ķ˿�)
//		   BaudRate:115200	---------------------------- Ҫ�� 
//		   Endian: self adaptive
//		
//		WinSocket Server:
//		   Port: 36666 
//		   Timeout: 3 (s)
//	3) Connect MSSim;channel��ͼ�꽫��̸��ɫ�ĸ��ɴ���ɫ
// ����:
// 1. ������ͬ, ������ʾ SPRD Diag(COM12)
// 2. һֱ����log, ��ԭsvn���������


open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
//	1) ����USB�ߣ�ѡ��USB LOG��ѡ��
//	2) ���� ArmLogel.exe
//	3) �˵�ѡ��LOG����һ�е�����ߵ�DLLͼ�ꣻ
//	4) DLLͼ��仯�󣬵���ڶ���ͼ��Connect;
//	5) ��������ͼ��Logging
//	6) �����������ͼ��Stop
//	7) ���log����ͼ��


// NV�޸�:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// ѡ��:
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\nvitem.prj
F:\6531G_16A_MP_W17.43.4\build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem
// ���� Armlogץȡ:
//	dsp_log_switch = 0x0 //
//	enable_arm_log = 0x1
//	com_debug =  0; 		 //0xFF
//	arm_log_uart_id = 0x1 //
//	dsp_log_uart_id = 0x0 //

// ���� Dsplogץȡ:
//	dsp_log_switch = 0x1 //
//	enable_arm_log = 0x1
//	com_debug = 0;  		//0xFF
//	arm_log_uart_id = 0x0 //
//	dsp_log_uart_id = 0x1 //


// ���ø�:
//	com_data = 0xFF               (USB:0xFF, ��ͬ)
//	com_debug_baud_rate = 0x70800 (USB:0x1C200,չѸû˵���Ҫ��)


// NV����(������ɰ��):
open: tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
// ֻѡ��: FDL1, FDL1, NV
// replace NV bin:
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// ���� CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug			 //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....		   nvm =^DSP_log_switch 	 //ITEM_NAME 0x0
//File��>Save Image��File��>Save Project


USBץtrace:
//����ģʽ����:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (��ȷ��������)

//����ģʽ����:(107)
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:close
//8 para set->debug->alert:debug

uartץtrace:
//����ģʽ����:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:close (��ȷ��)
//8 para set->debug->assert:open  (��ȷ��������)


ץtrace--ѹ���ռ�:
project_UIS8910_ROM_16MB_DS_USER.mk FM_SUPPORT = NONE 
project_UIS8910_ROM_16MB_DS_USER.mk VIDEO_PLAYER_SUPPORT = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk PIC_VIEWER_SUPPORT = FALSE


// USB--log--ok
--         	10:33:09.907 	--	Start Logging[LittleEndian]                         	----->----                                   	0:05:43.325  	
--         	10:33:09.907 	--	Modem Version: FM_BASE_20A_THIN_MODEM_W20.39.4      	----->----                                   	0:05:43.325  	
--         	10:33:09.907 	--	ParserLib Version: FM_BASE_20A_THIN_MODEM_W20.39.4  	----->----                                   	0:05:43.325  	
--         	10:33:09.907 	--	Tool Version: R9.20.3101.0                          	----->----                                   	0:05:43.325  	
--         	10:27:26.582 	--	Lost 8956 PS packets in channel, SN range:(152804,161759)	----->----                                   	0:00:00.000  	
--         	10:27:26.582 	--	Lost 25 PS packet(s) on CP side                     	----->----                                   	0:00:00.000  	
163457-1   	10:33:09.907 	--	*Unknown:0x0001                                     	AUDIO->*Unknown:0x0083                       	0:05:43.325  	

// USB--log--err
--         	10:36:07.278 	--	Start Logging[LittleEndian]                         	----->----                                   	0:00:00.000  	
--         	10:36:07.278 	--	Modem Version: FM_BASE_20A_THIN_MODEM_W20.46.4      	----->----                                   	0:00:00.000  	
--         	10:36:07.278 	--	ParserLib Version: FM_BASE_20A_THIN_MODEM_W20.39.4  	----->----                                   	0:00:00.000  	
--         	10:36:07.278 	--	Tool Version: R9.20.3101.0                          	----->----                                   	0:00:00.000  	
--         	10:36:07.278 	--	Lost a PS packet in channel, SN:2243527             	----->----                                   	0:00:00.000  	
--         	10:36:07.278 	--	Lost 5948 PS packets in channel, SN range:(2243579,2249526)	----->----                                   	0:00:00.000  	
--         	10:36:07.278 	--	Lost 1999 PS packets in channel, SN range:(2249528,2251526)	----->----                                   	0:00:00.000  	




--------------------------------------------------
CE ������Ƶ�汾:
project_UIS8910_ROM_16MB_DS_USER.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project_UIS8910_ROM_16MB_DS_USER.mk BT_NONSIG_SUPPORT = TRUE







[2.16] ��չ��Ŀ:



//�����������:
//set path=%path%;C:\CSDTK\cygwin\bin;
//find ./ -name "*.log"| xargs grep "ERROR"
//ûװcygwin:
//findstr /s /i "ERROR" *.log>aaaa.txt

// open aaaa:
cmd: F:&&cd build\M115_JGW_D2_X191_F2\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
// open aaaa:
build\M115_JGW_D2_X191_F2\log\aaaa.txt Error:
// open cmd:
cmd: cmd



[2.17] Build����
//
build:\
build:log\midisoundbank.log �ļ��޷�ɾ�� 
build:log\app_main.log ERROR
build:log\resource.log ERROR
build:log\caf_templete.log ERROR
build:tmp/SC6531EFM.def ��
build:tmp\app.macro �鿴���Ƿ����
	

//cmd:
//findstr /s /i "ERROR" *.log>aaaa.txt
//findstr /s /i "Generate" *.log>aaaa.txt
	

cmd_w: cd build\UIS8910_ROM_16MB_DS_USER_builddir\
cmd_w: D:&&cd D:\Save\SI\Macro\


//1 ���ռ�:
//~ 2����Ϸ		  12K
//~ һ��APN��¼ռ��0.163kb��3000~
//
//2 ����ʱ��
//gettime.pl


[2.18] 


[2.19] 


[2.20] 






