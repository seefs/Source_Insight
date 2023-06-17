

// 删除短信服务
Save:node\C\study\Macro_app_8910sms.h  __SmsNum__   # 条数

// BT
prj:{cfg}.cfg  BLUETOOTH_SUPPORT = NONE
// 可以关这些
prj:{cfg}.cfg  BT_NONSIG_SUPPORT = TRUE   
prj:{cfg}.cfg  BT_BQB_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_OPP_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_FTS_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_HFG_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_A2DP_SUPPORT = TRUE     
prj:{cfg}.cfg  MP3_A2DP_SUPPORT = TRUE    
prj:{cfg}.cfg  WAV_A2DP_SUPPORT = TRUE    
prj:{cfg}.cfg  AMR_A2DP_SUPPORT = TRUE    
prj:{cfg}.cfg  MIDI_A2DP_SUPPORT = TRUE   
prj:{cfg}.cfg  AAC_A2DP_SUPPORT = TRUE    

//另外 audio codec支持部分看贵司需求
prj:{cfg}.cfg MP3_SUPPORT = TRUE
prj:{cfg}.cfg AAC_SUPPORT = TRUE
prj:{cfg}.cfg AMR_SUPPORT = TRUE
prj:{cfg}.cfg WAV_SUPPORT = TRUE  # 省15K

// H264
prj:{cfg}.cfg H264_DEC_SUPPORT = TRUE

// CHAT
prj:{cfg}.cfg  SMS_CHAT_SUPPORT      = TRUE  #3个关1个就行
prj:{cfg}.cfg  MMS_SMS_IN_1_SUPPORT  = TRUE
prj:{cfg}.cfg  CHATMODE_ONLY_SUPPORT = TRUE

// CALENDAR 一共45K
prj:{cfg}.cfg  CALENDAR_SUPPORT = TRUE  #
prj:{cfg}.cfg  SCHEDULE_SUPPORT = TRUE

// FDN 不省空间
prj:{cfg}.cfg  PIC_ZOOM_SUPPORT = TRUE
prj:{cfg}.cfg  FDN_SUPPORT = TRUE

// SMS
prj:project_{cur}.mk   MMI_APP_REMOVE_SMS_NUM = TRUE


// SALES_SUPPORT
sales.c,7K

// MMI_VCARD_SUPPORT, 联系人
mmivcard.c,5K


//1 超空间:
//~ 2个游戏    12K
//~ 一条APN记录占用0.163kb。3000~
//


###  __trace__
// 抓trace--压缩空间:
prj:{cfg}.cfg        FM_SUPPORT            = NONE 
prj:{cfg}.cfg        VIDEO_PLAYER_SUPPORT  = FALSE
prj:{cfg}.cfg        PIC_VIEWER_SUPPORT    = FALSE



###  __RmMacro__
// 新宏
prj:project_{cur}.mk  BT_LOG_MENU_SUPPORT = FALSE
prj:project_{cur}.mk  DEBUG_VERSION = FALSE
prj:project_{cur}.mk  AP_CP_RAM_SIZE = 40X88
prj:project_{cur}.mk  FLASH_SIZE = 128MBIT
prj:project_{cur}.mk  SRAM_SIZE = 128MBIT
prj:{cfg}.cfg  CARD_LOG = FALSE
prj:{cfg}.cfg  MBEDTLS_SUPPORT            = FALSE  # 请勿修改
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
prj:{cfg}.cfg  XML_SUPPORT = FALSE
prj:{cfg}.cfg   = FALSE
prj:{cfg}.cfg  XML_SUPPORT = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE

// lang
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT = DUAL
//--开点阵link报错(SPMLAPI_Init)
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
prj:{cfg}.cfg  TCPIP_SUPPORT = TRUE

// gui
make\gui_main\gui_feature.mk  GUIF_SCROLLKEY
make\gui_main\gui_feature.mk  GUIF_CLIPBOARD   # 未开


### 宏已关闭

# 删9个屏                   9k  用分辨率区分

# TF_LOAD                2k  mk中的宏直接关
prj:{cfg}.cfg  TF_LOAD_SUPPORT

# KEY_LOCK               4k  用 __ZMAEE_APP__  区分
make\app_main\release_app_macro_cur.mk  MMI_KEY_LOCK_EFFECT_SUPPORT
make\app_main\release_app_macro_cur.mk  MMI_KEY_LOCK_EFFECT_TYPE0_SUPPORT
make\app_main\release_app_macro_cur.mk  MMI_KEY_LOCK_EFFECT_TYPE1_SUPPORT  # git触屏

# mp3+mp3服务              54k  用 __ZMAEE_APP__  区分
make\app_main\release_app_macro_cur.mk   MMIAP_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_AUDIO_PLAYER_SUPPORT
make\app_main\release_app_macro_cur.mk   MMIAP_MUSIC_LIST_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_AUDIOPLAYER_REVIEW_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_AUDIOPLAYER_ALBUM_SUPPORT

# other                  25k  用 __ZMAEE_APP__  区分
make\app_main\release_app_macro_cur.mk   MMI_BLACKLIST_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_IDLE_STKTEXT_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_VCARD_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_CONTACT_PHOTO_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_CONTACT_RING_SUPPORT



make\app_main\
//
make\app_main\release_app_macro_cur.mk   MMI_RECORD_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_AUTO_RECORD_SUPPORT
//

make\app_main\release_app_macro_cur.mk   MMIPB_MAX_COUNT_200
//
make\app_main\release_app_macro_cur.mk   MMI_MULTI_MAINMN


make\app_main\release_app_macro_cur.mk   MMI_BYD_EMAIL_SUPPORT
make\app_main\release_app_macro_cur.mk   CALENDAR_REMINDER_TYPE_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_PVTEST_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_IDLE_CUSTOM_WORD_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_PLMN_LOAD_DEFAULT_SUPPORT
//


### 宏未关闭

# gbk                    省63K
make\app_main\release_app_macro_cur.mk   GBK_SUPPORT
prj:{cfg}.cfg  FONT_HAN_SIMP_ONLY
//prj:{cfg}.cfg  MULTI_VARIANT_SUPPORT

# WAV                    15k
prj:{cfg}.cfg  WAV_SUPPORT


### 宏关闭无效

# app
make\app_main\release_app_macro_cur.mk   SALES_SUPPORT = FALSE
//
make\app_main\release_app_macro_cur.mk   MMI_SMS_VOICE_MAIL_SUPPORT
make\app_main\release_app_macro_cur.mk   MMI_SPEEDDIAL_SUPPORT
//
// 可能展育会用
make\app_main\release_app_macro_cur.mk   MMI_FMM_PICTHUMBNAIL_SUPPORT
// 关闭报错太多
make\app_main\release_app_macro_cur.mk   CALL_TIMES_SUPPORT



// 
_readme_size.txt

