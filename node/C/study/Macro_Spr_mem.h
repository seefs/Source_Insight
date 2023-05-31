
请问贵司目前缺少多少空间?

//BLUETOOTH_SUPPORT = NONE
// 可以关这些
build\tmp\app_main.macro  BT_NONSIG_SUPPORT = TRUE                             ### Nosig support
build\tmp\app_main.macro  BT_BQB_SUPPORT = TRUE                                ### BQB SUPPORT
build\tmp\app_main.macro  BT_OPP_SUPPORT = TRUE                                ### Switch Of OPP Profile Support
build\tmp\app_main.macro  BT_FTS_SUPPORT = TRUE                                ### Switch Of FTP Server Profile Support
build\tmp\app_main.macro  BT_HFG_SUPPORT = TRUE                                ### Switch Of Hand Free Gateway Profile Support
build\tmp\app_main.macro  BT_A2DP_SUPPORT = TRUE                              ### Switch Of A2DP Profile Support
build\tmp\app_main.macro  MP3_A2DP_SUPPORT = TRUE                              ### MP3 Support Bluetooth Stereo:
build\tmp\app_main.macro  WAV_A2DP_SUPPORT = TRUE                              ### WAV Support Bluetooth Stereo:
build\tmp\app_main.macro  AMR_A2DP_SUPPORT = TRUE                              ### AMR_DSP Support Bluetooth Stereo:
build\tmp\app_main.macro  MIDI_A2DP_SUPPORT = TRUE                             ### MIDI Support Bluetooth Stereo:
build\tmp\app_main.macro  AAC_A2DP_SUPPORT = TRUE                              ### AAC Support Bluetooth Stereo:

//另外 audio codec支持部分看贵司需求
build\tmp\app_main.macro  MP3_SUPPORT = TRUE                                   ### MP3 Decoder Support:
build\tmp\app_main.macro  AAC_SUPPORT = TRUE                                   ### AAC Decoder Support:
build\tmp\app_main.macro  AMR_SUPPORT = TRUE                                   ### AMR Decoder Support:




// BT
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

// MP3
prj:{cfg}.cfg MP3_SUPPORT = TRUE
prj:{cfg}.cfg AAC_SUPPORT = TRUE
prj:{cfg}.cfg AMR_SUPPORT = TRUE
WAV_SUPPORT = TRUE

// H264
prj:{cfg}.cfg H264_DEC_SUPPORT = TRUE

// CALENDAR 一共45K
prj:{cfg}.cfg SMS_CHAT_SUPPORT = TRUE
prj:{cfg}.cfg CALENDAR_SUPPORT = TRUE
// FDN 不点空间
prj:{cfg}.cfg PIC_ZOOM_SUPPORT = TRUE
prj:{cfg}.cfg FDN_SUPPORT = TRUE

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
prj:project_{cur}.mk FM_SUPPORT = NONE 
prj:project_{cur}.mk VIDEO_PLAYER_SUPPORT = FALSE
prj:project_{cur}.mk PIC_VIEWER_SUPPORT = FALSE



###  __RmMacro__
// 新宏
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


