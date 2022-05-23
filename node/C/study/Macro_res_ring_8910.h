
基础路径设置:
//basePath = 

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_res_ring_8910.h \[1.1\] power
Save:node\C\study\Macro_res_ring_8910.h \[1.2\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.3\] mp3
Save:node\C\study\Macro_res_ring_8910.h \[1.4\] call
Save:node\C\study\Macro_res_ring_8910.h \[1.5\] sms
Save:node\C\study\Macro_res_ring_8910.h \[1.6\] clock
Save:node\C\study\Macro_res_ring_8910.h \[1.7\] BusyTone
Save:node\C\study\Macro_res_ring_8910.h \[1.8\] key tone
Save:node\C\study\Macro_res_ring_8910.h \[1.9\] dial tone
Save:node\C\study\Macro_res_ring_8910.h \[1.10\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.11\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.12\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.13\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.14\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.15\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.16\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.17\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.18\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.19\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.20\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.21\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.22\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] power
// power
source:resource\Common\RING\
source:resource\Common\RING\Startup.mid

// power--mp3
source:resource\mmi_res_prj_def.h  MMI_POWER_USE_MP3

// power--id
app:setting\h\mmiset_export.h  MMI_POWER_RING_START_ID = R_POWER_1
//		==>HandleNormalStartupWindow
//		====>PlayDefaultPowerOnOffAnimation
//		======>MMISET_RING_TYPE_POWER
app:setting\c\mmiset_ring.c   MMI_POWER_RING_START_ID

// power--8S
app:phone\c\mmiphone_onoff.c  MMI_POWER_TIME_8S

// power--vol
app:envset\h\mmienvset_internal.h  MMIENVSET_POWER_RING_VOL_STANDARD_MODE



[1.2] 




[1.3] mp3

// mp3
prj:resource\my_music\
prj:resource\my_music\mmiap_song_name.h
prj:resource\my_music\song1.mp3



[1.4] call

// call one
//		==>RING_NAMES
//		==>RING_NAMES_EX
app:setting\h\mmiset_export.h  SPDE_MMI_CALL_RING_NUM_ONE
app:setting\h\mmiset_export.h  SPDE_MMI_CALL_RING_NUM_ONE
//		==>MMISET_RING_FIXED_DEFAUT_NUM   1
app:setting\c\mmiset_wintab.c  SPDE_MMI_CALL_RING_NUM_ONE
source:resource\mmi_res_prj_def.h  SPDE_MMI_CALL_RING_NUM_ONE
//		==>RING_NAMES
//		==>RING_NAMES_EX
app:setting\c\mmiset_ring.c  MMIAPISET_AppendFixedItemsOnly
//  107/8910
source:resource\mmi_res_prj_def.h  MMISET_RING_USER_MAX_NUM        1
source:resource\mmi_res_prj_def.h  MMISET_RING_USER_MAX_NUM_EX     2



[1.5] sms

// sms one
//		==>ALERT_NAMES_EX
//		==>ALERT_NAMES
app:setting\h\mmiset_export.h  SPDE_MMI_MSG_RING_NUM_ONE
app:setting\h\mmiset_export.h  SPDE_MMI_MSG_RING_NUM_ONE
//		==>MMISET_MSG_FIXED_RING_MAX_ITEM   1
app:setting\c\mmiset_wintab.c  MMI_RESULT_E^^HandleSelectMsgRingWindow
source:resource\mmi_res_prj_def.h  SPDE_MMI_MSG_RING_NUM_ONE
//		==>ALERT_NAMES_EX
//		==>ALERT_NAMES
app:setting\c\mmiset_ring.c  MMIAPISET_AppendFixedItemsOnly
//  107
source:resource\mmi_res_prj_def.h  MMISET_MSGRING_USER_MAX_NUM   2
source:resource\mmi_res_prj_def.h  MMISET_MMSRING_USER_MAX_NUM   2
//  8910
source:resource\mmi_res_prj_def.h  MMISET_ALERT_RING_MAX_NUM_EX  2
source:resource\mmi_res_prj_def.h  MMISET_ALERT_RING_MAX_NUM     2


### sms ring
//
HandleSelectMsgRingWindow


[1.6] clock

// clock one
//		==>CLOCK_NAMES
//		==>CLOCK_NAMES_MAT
app:setting\h\mmiset_export.h  SPDE_MMI_CLOCK_RING_NUM_ONE
//		==>MMIALM_RING_FIXED_DEFAULT_NUM   1
app:accessory\c\mmialarm.c  HandleAlarmRingSelWinMsg
source:resource\mmi_res_prj_def.h  SPDE_MMI_CLOCK_RING_NUM_ONE
//		==>CLOCK_NAMES
//		==>CLOCK_NAMES_MAT
app:setting\c\mmiset_ring.c  MMIAPISET_GetClockRingName
//  107/8910
source:resource\mmi_res_prj_def.h  MMIALM_CLOCK_RING_MAX_NUM        1
source:resource\mmi_res_prj_def.h  MMIALM_CLOCK_RING_MAX_NUM_MAT    1




[1.7] BusyTone

// TONE_425HZ
//MMISRVAUD_Play_BusyTone



[1.8] key tone

# 语音王
// id
app:envset\h\mmienvset_export.h  MMI_READDIALKEY_V909L_STYLE
// 语言
app:setting\c\mmiset_ring.c  MMI_READDIALKEY_V909L_STYLE
// 换音源
source:resource\mmi_res_prj_def.h  R_CALL_KEY_0_TONE
source:resource\Common\RING\



###
//
app:setting\c\mmiset_ring.c  case^MMISET_RING_TYPE_KEY
app:setting\h\mmiset_export.h  R_KEY_1
source:resource\mmi_res_prj_def.h  R_KEY_1
//
source:resource\Common\RING\
source:resource\Common\RING\R_KEY_1.WAV



[1.9] dial tone

# 语音王

###
// --set--call--num (mp3 play)
app:envset\c\mmienvset.c  MMI_READDIALKEY_ENABLE_EX
app:envset\h\mmienvset_export.h  MMI_READDIALKEY_ENABLE_EX
app:setting\h\mmiset_export.h  MMI_READDIALKEY_ENABLE_EX
app:setting\c\mmiset_ring.c  MMI_READDIALKEY_ENABLE_EX
// --set--string
app:envset\c\mmienvset_wintab.c  MMI_READDIALKEY_ENABLE_EX
//		==>simplify_tts_keycode_convert
app:idle\c\mmiidle_dial.c  MMI_READDIALKEY_ENABLE_EX
// --set--callset
app:setting\c\mmiset_callwin.c  MMI_READDIALKEY_ENABLE_EX
app:setting\c\mmiset_menutable.c  MMI_READDIALKEY_ENABLE_EX      # old_env
source:mmi_app\common\h\mmi_appmsg.h  MMI_READDIALKEY_ENABLE_EX
source:resource\mmi_res_prj_def.h  MMI_READDIALKEY_ENABLE_EX

###
// --dial--input
ctrl:editbox\c\ctrlbaseflex_add_del.c  MMI_READDIALKEY_ENABLE
// --enent--来电/接通/拨出
app:cc\c\mmicc_app.c  MMI_READDIALKEY_ENABLE
// --api
app:cc\c\mmicc_wintab.c  MMI_READDIALKEY_ENABLE
// --nv, set--vol/switch
//		==>GetEnvSetOptValue
//		==>SetEnvSetOptValue
//		==>GetRingVol    # no use
//		==>GetRingID
app:envset\c\mmienvset.c  MMI_READDIALKEY_ENABLE             # nv, new_set
app:envset\h\mmienvset_export.h  MMI_READDIALKEY_ENABLE      # type, old_env
app:envset\h\mmienvset_internal.h  MMI_READDIALKEY_ENABLE    # nv, old_env
app:setting\h\mmiset_export.h  MMI_READDIALKEY_ENABLE
//		==>HandleRingVolumeWindow
//		==>HandleAllRingVolumeWindow
//		==>SetAllRingVolParam
//		==>HandleOtherRingSetWindow
//		==>SetDialKeyRead
//		==>SaveOtherRingTypeSet
//		==>SetVolumeLabelcontent
app:envset\c\mmienvset_wintab.c  MMI_READDIALKEY_ENABLE    # menu, old_env
app:setting\h\mmiset_id.h  MMI_READDIALKEY_ENABLE
app:setting\h\mmiset_menutable.h  MMI_READDIALKEY_ENABLE
//		==>simple_tts_stop_play
app:setting\c\mmiset_ring.c  MMI_READDIALKEY_ENABLE
// --stop
app:sms\c\mmismsapp_main.c  MMI_READDIALKEY_ENABLE
// --dtmf
source:mmi_app\kernel\c\mmi_default.c  MMI_READDIALKEY_ENABLE
// --set--menu
//		==>ID_SET_SIMPLIFY_TTS
//		====>EnterSetSimplifyTTS
app:setting\c\mmiset_phonewin.c  ID_SET_SIMPLIFY_TTS
//		====>MENU_ICON_TTS
source:mmi_app\common\h\mmi_menutable.def    menu_icon_tts     # main
source:mmi_app\common\c\mmi_menutable_240x320.c  MMI_READDIALKEY_ENABLE
//		======>ID_TOOLS_READDIALKEY
app:mainmenu\c\mainmenu_win.c  MMI_READDIALKEY_ENABLE
source:mmi_app\common\h\mmi_menu_id.def  MMI_READDIALKEY_ENABLE
//		======>EnterSetReadDialKey
app:setting\c\mmiset_tts.c  MMI_READDIALKEY_ENABLE
app:setting\h\mmiset_tts.h  MMI_READDIALKEY_ENABLE
app:setting\c\mmiset_nv.c  MMI_READDIALKEY_ENABLE          # nv, new_set
app:setting\h\mmiset_nv.h  MMI_READDIALKEY_ENABLE
source:mmi_app\common\h\mmi_id.def  MMI_READDIALKEY_ENABLE
app:setting\h\set_mdu_def.h  MMI_READDIALKEY_ENABLE


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




[1.21] 




[1.22] 




