

//Ŀ¼:
// 1. 
Save:node\C\project\Macro_cfg_8910.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_8910.h \[1.2\] //PB
Save:node\C\project\Macro_cfg_8910.h \[1.3\] //SMS
Save:node\C\project\Macro_cfg_8910.h \[1.4\] 
Save:node\C\project\Macro_cfg_8910.h \[1.5\] 
Save:node\C\project\Macro_cfg_8910.h \[1.6\] 
Save:node\C\project\Macro_cfg_8910.h \[1.7\] RECORD
Save:node\C\project\Macro_cfg_8910.h \[1.8\] LCD_SIZE---------------�� Macro_info_{1}
Save:node\C\project\Macro_cfg_8910.h \[1.9\] 
Save:node\C\project\Macro_cfg_8910.h \[1.10\] //USB
Save:node\C\project\Macro_cfg_8910.h \[1.11\] CTA
Save:node\C\project\Macro_cfg_8910.h \[1.12\] //CALL record
Save:node\C\project\Macro_cfg_8910.h \[1.13\] simulator
Save:node\C\project\Macro_cfg_8910.h \[1.14\] torch
Save:node\C\project\Macro_cfg_8910.h \[1.15\] 
Save:node\C\project\Macro_cfg_8910.h \[1.16\] 
//
Save:node\C\project\Macro_cfg_8910.h \[2.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[2.2\] DTMF, Dial, SIM, ����
Save:node\C\project\Macro_cfg_8910.h \[2.3\] ���ӱ���
Save:node\C\project\Macro_cfg_8910.h \[2.4\] tihu--------------������
Save:node\C\project\Macro_cfg_8910.h \[2.5\] PLS---------------������
Save:node\C\project\Macro_cfg_8910.h \[2.6\] SIMPLIFY_TTS------���װ�������
Save:node\C\project\Macro_cfg_8910.h \[2.7\] FM
Save:node\C\project\Macro_cfg_8910.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_8910.h \[2.9\] SS
Save:node\C\project\Macro_cfg_8910.h \[2.10\] Tool
Save:node\C\project\Macro_cfg_8910.h \[2.11\] lib--------------��3��
Save:node\C\project\Macro_cfg_8910.h \[2.12\] Lib--------------ƽ̨
Save:node\C\project\Macro_cfg_8910.h \[2.13\] 
Save:node\C\project\Macro_cfg_8910.h \[2.14\] 
Save:node\C\project\Macro_cfg_8910.h \[2.15\] marco---------------�� Macro_c_path_sprd.h
Save:node\C\project\Macro_cfg_8910.h \[2.16\] mem
Save:node\C\project\Macro_cfg_8910.h \[2.17\] FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_8910.h \[2.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[2.19\] 
Save:node\C\project\Macro_cfg_8910.h \[2.20\] 
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] AUDIO, TONE


// ˫��Ͳ
//	DUAL_RECEIVER_SWITCH_SUPPORT
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS8910_ROM_16MB_DS_USER.mk


## TONE
SPDE_PRJ/K220U_HYBL_H660A/uis8910_phone_user_base_config.cfg  YOUNGTONE_TTS_LIB
// YOUNGTONE_TTS_LIB = MAN


[1.2] 

[1.3] 



[1.4] 


[1.5] 


[1.6] 



[1.7] RECORD
// MMI_RECORD_SUPPORT
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/RF_calib.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/RF_nv.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/audio_arm_6531efm.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/audio_calib_VQE.nvm




[1.8] Lcd
// 128*128
SPDE_PRJ\K220U_L680_QQVGA\uis8910_phone_user_base_config.cfg 128X128

// 128*160
SPDE_PRJ\K220U_QQVGA\uis8910_phone_user_base_config.cfg 128X160

// 128*160H
SPDE_PRJ\K220U_SHY_S13_HQQVGA\uis8910_phone_user_base_config.cfg 128X160
SPDE_PRJ\K220U_SHY_S13_HQQVGA\uis8910_phone_user_base_config.cfg MMI_RES_ORIENT

// 160*128
SPDE_PRJ\K220U_QQVGA\uis8910_phone_user_base_config.cfg 160X128
SPDE_PRJ\K220U_LBR_L691_HS_L51_HQQVGA\uis8910_phone_user_base_config.cfg 160X128

// LAND
//	MMI_RES_ORIENT_LANDSCAPE
//	MAINLCD_LOGIC_ANGLE_90
//	MAINLCD_DEV_SIZE_160X128
//	MAINLCD_SIZE_160X128
//	MMI_RES_DIR_mmi_res_160x128

// MAINLCD
//	MAINLCD_SIZE_176X220
//	SPDE_UI_176X220_STYLE

### new add
// 1.add file
source:resource\mmi_res_160x128\
source:winsimulator_tp/skin/
source:winsimulator_tp/skin/mssim_duallcd_160_128_T.ini
source:winsimulator_tp/skin/mssim_duallcd_160_128_T.png
// 2.cfg
K220SU.bat  160X128
// 107
prj:project_{cur}.mk  MAINLCD_DEV_SIZE = 160X128
prj:project_{cur}.mk  MAINLCD_SIZE = 128X160
prj:project_{cur}.mk  MMI_RES_DIR = mmi_res_160x128
prj:project_{cur}.mk  MMI_RES_ORIENT = LANDSCAPE
prj:project_{cur}.mk  MAINLCD_LOGIC_ANGLE = 90
// 8910
prj:{cfg}.cfg  MAINLCD_DEV_SIZE = 160X128
prj:{cfg}.cfg  MAINLCD_SIZE = 128X160
prj:{cfg}.cfg  MMI_RES_DIR = mmi_res_160x128
prj:{cfg}.cfg  MMI_RES_ORIENT = LANDSCAPE
prj:{cfg}.cfg  MAINLCD_LOGIC_ANGLE = 90
// 3.cfg
//	MAINLCD_SIZE_176X220
//	SPDE_UI_176X220_STYLE
// 4.mk
//  160X128
make/
make/simulator_main/
make/simulator_main/simulator_main.mk


[1.9] 



[1.10] 



[1.11] CTA
// PLMN
prj:project_{cur}.mk  MMI_PREFER_PLMN_SUPPORT
// PLMN--popup
//  ----����Ϊ: TXT_COMPLETE
app:setting/c/mmiset_callwin.c  BOOLEAN^MMIAPISET_HandlePreferNetworkListCnf


// �����Ӳ
prj:{cfg}.cfg  FORCECHANGE_SUPPORT  = TRUE
prj:{cfg}.cfg  DELTA_NV_CONFIG_PATH = delta_nv   
//
prj:{cfg}.cfg  DELTA_NV_BIN_SUPPORT = TRUE         
prj:{cfg}.cfg  DELTA_NV_PATITION_SUPPORT = TRUE


[1.12] 




[1.13] simulator
// simulator
make\simulator\simulator.ini  MMI_LCD_176_220
make\simulator_idh\simulator.ini   MMI_LCD_176_220
make\simulator_main\simulator.ini   MMI_LCD_176_220
// 
app:cs\h\mmics_position.h 
app:dcd\h\mmidcd_position.h 
// ini(copy)--8910
make/simulator_idh/simulator_idh.mk  mssim_duallcd_
// ini(copy)--107
make/simulator_main/simulator_main.mk  mssim_duallcd_

// skin name
make\simulator\simulator.mk  SKIN_FILE_NAME
make\simulator_idh\simulator_idh.mk  SKIN_FILE_NAME
make\simulator_main\simulator_main.mk  SKIN_FILE_NAME
// skin name _T
make\simulator_idh\simulator_idh.mk  SUFFIX
make\simulator_main\simulator_main.mk  SUFFIX
// skin file
MS_MMI_Main\source\winsimulator_tp\skin\
//   mssim_duallcd_160_128
//   mssim_duallcd_160_128_T   90^


// vs2010--lib
make\simulator_main\simulator_main.mk  devps
// 


[1.14] __torch__

// 1.ENG_MANU_TORCH, ENG_MANU_TORCH_PATCH  (��)
//		==>ID_ENG_TEST_MANU_TORCH
//		====>��
//		======>(1)�ϼ��������¼��ر� (no use)
//		======>(2)��߿���
//		========>ENG_MANU_TORCH_HELP_STR1
//		====>107��, ENG_MANU_TORCH_107_STYLE
//		======>(1)�ϼ��������¼��ر�
//		========>TORCH_SUPPORT                #��
//		======>(2)��߿���
//		========>ENG_MANU_TORCH_HELP_STR1     #Ӳ��
app:eng\c\mmieng_uitestwin.c  case^ID_ENG_TEST_MANU_TORCH
//		====>8910
//		========>TXT_ENG_TORCHNOTE_HELP_STR1   #Ӳ��
//		========>TXT_ENG_TORCHNOTE             #�� 1line
//		========>TXT_ENG_TORCH_TEST            #�� 2line
//		====>107
//		========>TXT_ENG_TORCHNOTE_HELP_STR1   #Ӳ��
//		========>TXT_ENG_TORCHNOTE             #��

// 2.MMI_TORCH_LED_SUPPORT (�ֻ�Ĭ�Ͽ�, �ֱ�Ĭ�Ϲ�)
//		==>"*#555#"
//		====>ID_ENG_TORCH_LED_TEST
//		======>�ϼ��������¼��ر�
//		==>�������style2 (Ĭ��δ��)
//		====>ID_ENG_TEST_TORCH_LED
//		======>�ϼ��������¼��ر�
app:eng\c\mmieng_main.c   case^ID_ENG_TORCH_LED_TEST
//		==>"*#222#"
//		====>UITestTorchLedTestWinHandleMsg
app:eng\c\mmieng_uitestwin.c  case^ID_ENG_TEST_TORCH_LED

// 3.TORCH_SUPPORT (�ֻ�Ĭ�Ͽ�, �ֱ�Ĭ�Ϲ�)
//		==>״̬����ʾ
//		==>shortcut

// 4.mainmenu
//		==>MMIMAINMENU_StartTorch
//		==>shortcut



[1.15] �º�
// �º�
prj:project_{cur}.mk  BT_LOG_MENU_SUPPORT = FALSE
prj:project_{cur}.mk  DEBUG_VERSION = FALSE
prj:project_{cur}.mk  FLASH_SIZE = FALSE
prj:project_{cur}.mk  FLV_DEC_SUPPORT = FALSE
prj:project_{cur}.mk  AP_CP_RAM_SIZE = 40X88
prj:project_{cur}.mk  FLASH_SIZE = 128MBIT
prj:project_{cur}.mk  SRAM_SIZE = 128MBIT
prj:project_{cur}.mk   = FALSE
prj:project_{cur}.mk  xxxxxx = FALSE
prj:project_{cur}.mk  xxxxxx = FALSE
prj:project_{cur}.mk  xxxxxx = FALSE
prj:{cfg}.cfg  CARD_LOG = FALSE
prj:{cfg}.cfg  MBEDTLS_SUPPORT = FALSE
prj:{cfg}.cfg  ENABLE_HTTPC = FALSE
//prj:{cfg}.cfg  AVI_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  FLV_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  H264_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  HAS_MODEM_NV = FALSE
prj:{cfg}.cfg  JPG_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  MULIT_VARIANT_SUPPORT = FALSE
//prj:{cfg}.cfg  NETFRONT_SUPPORT = NONE
prj:{cfg}.cfg  OAUTH_SUPPORT = FALSE
prj:{cfg}.cfg  PNG_DEC_SUPPORT = NONE
prj:{cfg}.cfg  SIM_LANGUAGE_SUPPORT = FALSE
prj:{cfg}.cfg  SMART_PAGING_SUPPORT = FALSE
prj:{cfg}.cfg  SMSCB_MSG_ID_MAX_NUM = 35
prj:{cfg}.cfg  UMEM_PRTITION = LARGE
prj:{cfg}.cfg  TF_LOAD_SUPPORT = FALSE
prj:{cfg}.cfg  XML_SUPPORT = FALSE
prj:{cfg}.cfg   = FALSE
prj:{cfg}.cfg  XML_SUPPORT = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE

// lang
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT = DUAL
//--������link����(SPMLAPI_Init)
prj:{cfg}.cfg  FONT_TYPE_SUPPORT   = DE_BITMAP / VECTOR
prj:{cfg}.cfg  VECTOR_FONT_SUPPORT = NONE      / DEFAULT
prj:{cfg}.cfg  VECTOR_TABLE_ADDR   = HIGH
prj:{cfg}.cfg  VM_TABLE_CONFIG     = SMALL
//
prj:{cfg}.cfg  VM_SUPPORT = FALSE
prj:{cfg}.cfg  VIDEO_RECORD_SUPPORT = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE
//
prj:project_{cur}.mk  MMI_MULTI_SIM_SYS = DUAL
prj:{cfg}.cfg  MULTI_SIM_SYS = DUAL
prj:{cfg}.cfg  SMART_DUAL_SIM_SUPPORT = FALSE
// lib
prj:{cfg}.cfg  TCPIP_SUPPORT = DUAL
// appmain
prj:project_{cur}.mk  GBK_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_BYD_EMAIL_SUPPORT = FALSE
prj:project_{cur}.mk  CALENDAR_REMINDER_TYPE_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_PVTEST_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_IDLE_CUSTOM_WORD_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_FMM_PICTHUMBNAIL_SUPPORT = FALSE
prj:project_{cur}.mk  SALES_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_SMS_VOICE_MAIL_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_SPEEDDIAL_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_AUDIOPLAYER_ALBUM_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_PLMN_LOAD_DEFAULT_SUPPORT = FALSE


[2.1] IM
//IM_ENGINE = NONE


### IM
// ==>im
Save:node\C\study\Macro_im_8910.h  __input__



[2.2] DTMF, Dial, SIM, ����
//
MMI_DIALPANEL_DTMF_SUPPORT

// ����һ���ط�
app:phone\c\mmiphone.c  MMI_RESULT_E^HandleScellRssiInd

// sim�Ȳ��
MS_Customize\source\product\driver\gpio\gpio_prod.c  GPIO_SIMIntHandler




[2.3] ���ӱ���

// 1.���ذ�(���ɲ���)(107)
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD = TRUE
// nvͬ�����
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE
// card--set
Save:node\C\study\Macro_fun_8910.h  __SpdeCard__


// 2.�����
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2 = TRUE
prj:project_{cur}.mk   SPDEHTTP_SUPPORT = TRUE
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2_USE_LOCAL_TIME = TRUE
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE


// 3.���ذ�(107���ɲ���/8910�����ɱ���)
prj:project_{cur}.mk   AOLEDA_ELECTRIC_GUARANTEE_CARD = TRUE
// card--set
Save:node\C\study\Macro_fun_8910.h  __AoledaCard__


// 4.����ͳ��
Save:node\C\study\Macro_app_8910sms.h  __sales__


[2.4] tihu

//
prj:project_{cur}.mk  HERO_ENGINE_SUPPORT
prj:project_{cur}.mk  HERO_ENGINE_TTS_SWTICH_SUPPORT

// �ܿ���
app:heroengine\tts\c\hero_tts_ui.c  masterSwitch.isShow

// ��ID���øĴ���
prj:project_{cur}.mk  HERO_ENGINE_CFG_VAR_HANDSETID_FIRST
prj:project_{cur}.mk  HERO_ENGINE_CFG_VAR_HANDSETID_SEC

// mp3
prj:project_{cur}.mk  HERO_ENGINE_TTS_NUM_USE_MP3

// ����Ƶ
prj:project_{cur}.mk   HERO_ENGINE_STVIDEO_SUPPORT

// �ʵ�
prj:project_{cur}.mk   HERO_ENGINE_DICTIONARY_SUPPORT
//����ļ����ڶ�����������
//heroengineapp.c

// ΢��
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN = TRUE #΢�Ķ�λ
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_IN_MAINMENU = TRUE
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_V1 = TRUE  #΢�Ķ�λV1 �汾����Ƶͨ��
prj:project_{cur}.mk  HERO_VIDEO_CHAT_SUPPORT = TRUE   # ֧����Ƶͨ��
prj:project_{cur}.mk  HERO_APP_PUSH_SUPPORT = TRUE #�Һ�̨������
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_INROM = TRUE #΢�Ķ�λ����
prj:project_{cur}.mk  HERO_VIDEO_CHAT_CAMERA_SUPPRT = TRUE #֧������ͷ
prj:project_{cur}.mk  HERO_CHATTER_WIFI_SUPPORT=TRUE #΢�Ķ�λ֧��WIFI��λ
prj:project_{cur}.mk  HERO_APP_CHATTER_SET_MSG__DEFAULT_RING=TURE #Ĭ�Ͽ�����������

// AI
prj:project_{cur}.mk  HERO_APP_SMART_OPEN=TRUE # AI ��������
prj:project_{cur}.mk  HERO_APP_SMART_OPEN_INROM = TRUE #������������

// ����
app:heroengine\c\heroEngineApp.c  heroenginedata_eim_tw
app:heroengine\h\heroengine_mdu_def.h x


[2.5] PLS



[2.6] SIMPLIFY_TTS
//
prj:project_{cur}.mk  MMI_SIMPLIFY_TTS
prj:project_{cur}.mk  MMI_SIMPLIFY_ENV_TTS
prj:project_{cur}.mk  MMI_READMENU_ENABLE
prj:project_{cur}.mk  MMI_READDIALKEY_ENABLE
prj:project_{cur}.mk  MMI_READTIME_ENABLE
prj:project_{cur}.mk  MMI_READCHARGE_ENABLE
prj:project_{cur}.mk  MMI_READINCALL_ENABLE
prj:project_{cur}.mk  MMI_READPB_ENABLE

//
Save:node\C\study\Macro_res_ring_8910.h  __time__


[2.7] FM
// mk
prj:{cfg}.cfg  FM_SUPPORT = SPRD_V0 
prj:{cfg}.cfg  FM_VBC_EQ = TRUE                                     ###
prj:{cfg}.cfg  FM_VBC = TRUE
//
prj:{cfg}.cfg  BYD_CUSTOM_FM_TUNNING_STEP = TRUE

// mk--�����
// --��������Ӧ��Ĭ�ϻ��жϲ�������ö����ģ�û������õ���ŵ�
// --Ҫ�ǲ����ö����������ú��һ��
prj:project_{cur}.mk  FM_S_ANT_SUPPORT = FALSE  # ����, eng�ֿ�����


// test--fm
app:eng\c\mmieng_uitestwin.c  MMI_RESULT_E^UITestFmWinHandleMsg
// --�򿪵���� / ������
//        GPIO_SetFmLNA( 1 );
// --�رյ����
//        GPIO_SetFmLNA( 0 ); //�ָ��������ߵ�GPIOֵ



[2.8] WIFI
//
prj:{cfg}.cfg  WIFI_SUPPORT = UNISOC_RX
prj:{cfg}.cfg  WIFI_VENDOR = UNISOC 


// WIFI
//		==>MMIAPIENG_StartEngineerMenu
app:eng/c/mmieng_main.c  MMI_RESULT_E^ENGMainMenuWinHandleMsg
// �������--menu
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_eng
// �������--WIFI
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_app_set
// �������--WIFI--usb
app:eng/c/mmieng_uitestwin.c  case^ID_ENG_TEST_WIFI



[2.9] SS
//MMS--107
prj:project_{cur}.mk  SCREENSAVER_SUPPORT = TRUE

//MMS--8910
prj:{cfg}.cfg  SCREENSAVER_SUPPORT = TRUE



[2.10] Tool
// CALCULATOR_SUPPORT
prj:project_{cur}.mk CALCULATOR_SUPPORT
// STOPWATCH_SUPPORT
prj:project_{cur}.mk STOPWATCH_SUPPORT
// CALENDAR_SUPPORT
prj:project_{cur}.mk CALENDAR_SUPPORT
// WORLD_CLOCK_SUPPORT
prj:project_{cur}.mk WORLD_CLOCK_SUPPORT



[2.11] lib
// fota--alup
mk: 
// ADUPS_FOTA_DELETE_SETTING_MENU
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_menutable.c  FOTA_SUPPORT_ADUPS


// xmly--
prj:project_{cur}.mk  XYSDK_SUPPORT
// ����:\n  XMLY133
MS_MMI_Main/source/mmi_app/app/xysdk/h/xysdk_mdu_def.h  TXT_XYSDK_VER_INFO



// zfb
prj:project_{cur}.mk   ALIIOT_SUPPORT = TRUE
// 
Save:node\C\study\Macro_patch_third.h  zfb_107



[2.12] Lib

### w07U
// baseLib
prj:project_{cur}.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_ROM_16MB_SS_USER

// binFile
prj:project_{cur}.mk  MODEM_BIN_FILE
// ����
//   MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_USER

// .a--��ģ�������
lib\UIS8910_ROM_16MB_SS_USER\

// binFile
lib\modem\UIS8910_ROM_16MB_DS_USER\
lib\modem\UIS8910_ROM_16MB_DS_USER\


### w03u
// baseLib
prj:project_{cur}.mk PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER

// binFile
prj:project_{cur}.mk MODEM_BIN_FILE
// ����
//   MODEM_BIN_FILE = MODEM_USER

// .a--��ģ�������
lib\UIS8910_240x320BAR_16MB_SS_USER\

// binFile
lib\modem\MODEM_USER\


### BMWATCH
// baseLib
SPDE_PRJ\BMWATCH\project_UIS8910_240x320BAR_16MB_SS_BMWATCH_USER.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER


// .a--��ģ�������
lib\UIS8910_240x320BAR_16MB_SS_USER\


### T107
// baseLib
SPDE_PRJ\S98T_FLP_E535_31\project_ums9117_240X320BAR_48MB_S98T_FLP_E535_31_user.mk  PRODUCT_BASELIB_DIR
SPDE_PRJ\S98T_FLP_E535_31\project_ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug.mk  PRODUCT_BASELIB_DIR
// user/debug
lib\ums9117_240X320BAR_48MB_CAT1_rel\
lib\ums9117_240X320BAR_48MB_CAT1\


[2.13]  



[2.14] 


[2.15] marco
### 107
//
make\chip_drv\def_config\UMS9117.cfg
// CONFIG_LCDC_VER
chip_drv/chip_module/lcdc/v5
// CONFIG_SPI_VER
chip_drv/chip_module/spi/v5
// CONFIG_LDO_VER
chip_drv/chip_module/ldo/sc2720
// CONFIG_ANALOG_VER
chip_drv/chip_module/analog/v7
// CONFIG_ADC_VER
chip_drv\chip_module\adc\sc2720



[2.16] mem

// Heap�Ĵ�С
config:mem_cfg.c  SCI_STATIC_HEAP_SIZE_THRESHOD

// ��̬RAM�Ĵ�С
config:mem_cfg.h  MEM_RWZI_SIZE




[2.17] FLASH
### 8910
prj:project_{cur}.mk  FLASH_SIZE = 128MBITX64MBIT_NEW   # ��汾
prj:project_{cur}.mk  FLASH_SIZE = 128MBIT              # С�汾
// ����
prj:project_{cur}.mk  _FLASH_STYLE_

// �޸ķ���
config:\
config:spiflash_cfg.c  FLASH_SIZE_128MBITX64MBIT_NEW    //��汾
config:spiflash_cfg.c  FLASH_SIZE_128MBIT$              //С�汾
config:spiflash_cfg.c  (FLASH_SIZE_128MBIT)             //С�汾
config:spiflash_cfg.c  FLASH_SIZE_64MBITX64MBIT         //DM�汾
// SECTOR
config:spiflash_cfg.c  MMI_RES_SECTOR_NUM
config:spiflash_cfg.c  604
// 	#define MMI_RES_SECTOR_NUM         70 // 67 //66  60
// 
config:spiflash_cfg.c  UDISK_SIZE
config:spiflash_cfg.c  573
//	#define UDISK_SIZE                 ((UMEM_SECTOR_NUM+4)*FLASH_SECTOR_SIZE)

// 
MS_Customize/UIX8910_normal.scf  LOAD_KERNEL_IMAGE
MS_Customize/UIX8910_normal.scf  43
//	LOAD_KERNEL_IMAGE IMAGE_ENTRY_ADDR 0x00A60000   # ps size

// 
config:spiflash_cfg.c  PS_STONE_SECTOR_NUM
config:spiflash_cfg.c  646
//	#define  PS_STONE_SECTOR_NUM		124 // 123 //123


// fota����С���ܱ���
fdl_bootloader\nor_bootloader\src\nor_bootloader_fota_uix8910.scf  0xB800



### 107 ����
fdl_bootloader\fdl2\src\nandparttable\ums9117_barphone\Nand_PartTable_128k.c  MMI_RESOURCE_SIZE
//#define OSB_SIZE				(96)   //EXEC_KERNEL_IMAGE.bin
//#define OSA_SIZE				(72)   //EXEC_USER_IMAGE.bin
//#define MMI_RESOURCE_SIZE		(74)   //mmi_res_240X320.bin


### ����flash
prj:project_{cur}.mk  SPI_NAND_FLASH -> FALSE  # ����flash������log
prj:project_{cur}.mk  SPI_NAND_FLASH -> TRUE   # ����flash





[2.18] build map
//
tmpPath = build\tmp
tmp:\\


// ��image
tmp:{UIX8910}.map  Region^LOAD_KERNEL_IMAGE -------8910/107

// range 1(rom) (12M ����/�洢)
tmp:{UIX8910}.map  Region^ROM_KERNAL_EXEC ---------8910

// range 2(ram) (1.45M ����/�ϵ綪ʧ)
tmp:{UIX8910}.map  Region^RAM_RW ------------------107/107

// range 3(SRAM) (calc size) ----------------------107 
tmp:{UIX8910}.map  Region^SRAM_RES

// Total
tmp:{UIX8910}.map  Total^RO

// �޸� KERNEL size
//  (ͬ���ģ�����fota���ʧ��)
MS_Customize/
MS_Customize/UIX8910_normal.scf  42
MS_Customize/UIX8910_normal.scf  277
MS_Customize/UMS9117_ums9117_barphone.scf  4


//
build\{cur}_builddir\tmp\link_UIX8910_uis8910ff_refphone_vm.scf  LOAD_KERNEL_IMAGE
// 0x00870000
build\{cur}_builddir\tmp\link_UIX8910_uis8910ff_refphone_vm.scf  LOAD_FLASH_B_DFILE
// 0x60B60000


[2.19] 




[2.20] 




