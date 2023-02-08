
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


