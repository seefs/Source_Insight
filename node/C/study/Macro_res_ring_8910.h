
基础路径设置:
//basePath = 

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_res_ring_8910.h \[1.1\] power
Save:node\C\study\Macro_res_ring_8910.h \[1.2\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.3\] mp3
Save:node\C\study\Macro_res_ring_8910.h \[1.4\] call
Save:node\C\study\Macro_res_ring_8910.h \[1.5\] sms
Save:node\C\study\Macro_res_ring_8910.h \[1.6\] clock, alarm
Save:node\C\study\Macro_res_ring_8910.h \[1.7\] BusyTone
Save:node\C\study\Macro_res_ring_8910.h \[1.8\] key tone
Save:node\C\study\Macro_res_ring_8910.h \[1.9\] dial tone------简版语音王
Save:node\C\study\Macro_res_ring_8910.h \[1.10\] time----------简版语音王
Save:node\C\study\Macro_res_ring_8910.h \[1.11\] menu----------简版语音王
Save:node\C\study\Macro_res_ring_8910.h \[1.12\] pb------------简版语音王
Save:node\C\study\Macro_res_ring_8910.h \[1.13\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.14\] Pause/Resume
Save:node\C\study\Macro_res_ring_8910.h \[1.15\] tts
Save:node\C\study\Macro_res_ring_8910.h \[1.16\] other
Save:node\C\study\Macro_res_ring_8910.h \[1.17\] asp
Save:node\C\study\Macro_res_ring_8910.h \[1.18\] 
Save:node\C\study\Macro_res_ring_8910.h \[1.19\] VIB
Save:node\C\study\Macro_res_ring_8910.h \[1.20\] RING
Save:node\C\study\Macro_res_ring_8910.h \[1.21\] zmaee
Save:node\C\study\Macro_res_ring_8910.h \[1.22\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] __power__
// power
source:resource\Common\RING\
source:resource\Common\RING\Startup.mid

// power--mp3--8910
source:resource\mmi_res_prj_def.h  MMI_POWER_USE_MP3
// power--mp3--107
source:resource\mmi_res_prj_def.h  R_POWER_ONOFF

// power--id
app:setting\h\mmiset_export.h  MMI_POWER_RING_START_ID = R_POWER_1
//		==>HandleNormalStartupWindow
//		====>PlayDefaultPowerOnOffAnimation
//		======>MMISET_RING_TYPE_POWER
app:setting\c\mmiset_ring.c   MMI_POWER_RING_START_ID

// power--8S
//		==>play:
//		====>.MMISET_RING_TYPE_POWER
app:phone\c\mmiphone_onoff.c  MMI_POWER_TIME_8S
app:phone\c\mmiphone_onoff.c  PHONE_STARTUP_DURING_TIME

// power--vol
app:envset\h\mmienvset_internal.h  MMIENVSET_POWER_RING_VOL_STANDARD_MODE



[1.2] 




[1.3] mp3
### __Mp3__
// mk
prj:project_{cur}.mk  MMI_AUDIO_PLAYER_ADD_TEST_SONG
prj:project_{cur}.mk  TWO_TEST_SONGS
prj:project_{cur}.mk  THREE_TEST_SONGS
prj:project_{cur}.mk  MMI_AUDIO_PLAYER_TEST_FILE_MID_FORMAT

// mp3-8910
prj:resource\my^music\
prj:resource\my^music\mmiap_song_name.h

// mp3-107
prj:resource\my_music\
prj:resource\my_music\mmiap_song_name.h
prj:resource\my_music\song1.mp3


//
//		==>filetest           # 文件不存在时, 从ring copy
//		====>num:1~3
//		====>path:"D:\\My Music\\" + L"test" + AUDIO_TYPE_MP3
app:audioplayer\c\mmiapwin_main.c  test_song_check
source:resource\mmi_res_prj_def.h  R_AP_TEST_SONG_2


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

### 语音王
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

### 语音王
// wav
//--16bit mp3转8bit mono wav (直接转比8bit.mp3中转效果好)(单声道)
//--(中转 只有部分数字比旧音源好, 更好的音源:2 3 5 6 8)
//--再转.h
//--wav数组16bit mono 换成 8bit mono 的不死机
//		==>AddString
//		====>playkeypadtoneTTS
//		======>.keycode
//		======>simple_tts_dial_broadcast
//		========>simple_tts_GetNumberResour
//		==========>.s_simplettsNumberRes
app:setting\c\mmiset_ring.c  s_simplettsNumberRes

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


[1.10] __time__
// (mp3)报时时间间隔不能改小，只能从音源控制

### 语音王
// --自动报时/按键报时
//		==>playAutoTellTimeTTS
//		====>PlayTellTime
//		======>simple_tts_time_play
app:idle\c\mainapp.c  MMI_READTIME_ENABLE
// --按键报时
//		==>playTellTimeTTS
app:setting\c\mmiset_shortcut.c  SHORTCUT_SUPPORT_SIMPLIFY_TTS_MENU


// 播报冲突
// --停止
//	StopTellTime(); // auto or shortcur
// --不进 (特殊需求播报时不进xmly)
//	if(!is_time_read)
//
// --后台运行喜马拉雅, 暂停喜马拉雅, 开始报时
// --前台运行+喜马拉雅未播放, 不报时
// --前台运行+喜马拉雅播放中, 暂停喜马拉雅, 开始报时
//
// --咪咕音乐不支持后台运行, 也会导致产生大量流量, 是其他厂家要求的


// time
source:resource\Common\RING\
source:resource\Common\RING\R_TIME_am.mp3

// time--mp3
source:resource\mmi_res_prj_def.h  R_TIME_am

// time--id
app:setting\h\mmiset_export.h  MMI_POWER_RING_START_ID = R_POWER_1
//		==>HandleNormalStartupWindow
//		====>PlayDefaultPowerOnOffAnimation
//		======>MMISET_RING_TYPE_POWER
app:setting\c\mmiset_ring.c   MMI_POWER_RING_START_ID



[1.11] menu
// menu
source:resource\Common\RING\
source:resource\Common\RING\MENU_ALIIOT.mp3

// menu--mp3
source:resource\mmi_res_prj_def.h  MENU_ALIIOT
//
source:resource\mmi_res_prj_def.h  charger_connected
source:resource\mmi_res_prj_def.h  charger_removed
source:resource\mmi_res_prj_def.h  low_power

//		==>HandleTextToSpeech
//		====>playMenuTTS
//		======>MMIAPISET_PlayRing  //MMISET_RING_TYPE_READMENU
source:mmi_app\app\setting\c\mmiset_ring.c  MMISET_RING_TYPE_READMENU


[1.12] pb
//
//		==>MMIPB_ReadNumber
//		====>TTSPlayPBNumber  //MMISET_RING_TYPE_READPB
//		======>GetRingID
//		========>Get_pb_read_number_select()



[1.13] 





[1.14] Pause/Resume
### FM
//		==>MMISRVMGR_Request
//		====>SrvCmdFunc
//		======>REQ:
//		======>REQ:
//		========>SrvCreate
//		==========>SWITCH:
//		==========>SwitchActiveSrv
//		============>MMISRVAUD_LinkTravel
//		==============>func:
//		==============>PauseAudioAndNotify
//		================>SrvNotifyClient
//		==================>notify
//		==================>PlayCallBack     #fm
//		====================>FM_PlayStop


### RECORD
//		==>HandleRecordMainPlayWinMsg
//		====>MMIRECORD_RequestVirtualHandle
//		======>MMISRVAUD_ReqVirtualHandle("RECORDER", MMISRVAUD_PRI_NORMAL)
//		====>MMIRECORD_FreeVirtualHandle
//		======>MMISRVAUD_FreeVirtualHandle("RECORDER")

### tts time
//		==>simple_tts_start_time_play()
//		====>MMISRVMGR_Request(STR_SRV_AUD_NAME, &req, &audio_srv)  //HIGH
//		==>simple_tts_stop_time_play()
//		====>MMISRVMGR_Free(s_tts_test_play_time_handle)

### cc
//		==>MMICC_ConstructAudioHandle()
//		====>MMISRVMGR_Request(STR_SRV_AUD_NAME, &req, &audio_srv)  //HIGH
//		==>MMICC_DestroyAudioHandle()
//		====>MMISRVMGR_Free(s_audio_status.audio_handle);
//		==>AP_AudioSrvCallBack()
//		====>APRequestVirtualAudioHandle()


### migu
//
Save:node\C\study\Macro_patch_third.h  __migu__


### xmly
// 完全是库，做不了暂停
Save:node\C\study\Macro_patch_third.h  __xmly__

###
//		==>MMISRVAUD_Pause
//		==>MMISRVAUD_Resume



[1.15] tts
//tts
//	PlayTellTime()
//	//
//	MMIAPISET_IsPlayingRingType
//	//Handle
//		==>
//		====>MMIAPISET_PlayRing
//		======>PlayRing
//		========>PlayFixedRing
//		==========>MMISRVAUD_GetHandleByName
//	//STOP
//		==>MMITTS_STOP_CALLBACK
//		====>MMIAPISET_StopRing
//		======>MMIAPISET_StopAppRing
//		========>MMIAPISET_StopAllRing
//		==========>MMISRVAUD_Stop(MMIAPIALARM_GetPlayHandle());
//	// type
//	MMIENVSET_SET_OPT_E
//	MMISET_ALL_RING_TYPE_E
//	MMIENVSET_SETTING_T

//tts
//	playAutoTellTimeTTS()----time
//	playTellTimeTTS()--------time
//	TTSPlayPBNumber()--------pb
//  TTSPlayInCallNumber()----cc
//	playkeypadtoneTTS()------key
//  PlayFixedRing()----------
//


// tts--ringId
//		==>MMISET_RING_CALL_KEY_TONE_RING  (not env) (mp3Index/Info) (play/Pri) (same vol)
//		==>MMISET_RING_TYPE_READDIALKEY (env) (No mp3Index/Info) (Not play/Pri) (same vol)

// tts--vol
//		==>DIALKEYREAD_VOL (same vol)



### __mp3Play__
// --mp3--play
//		==>
//		====>MMIAPISET_PlayRing
//		======>PlayRing
//		========>PlayFixedRing
//		==========>MMISRVAUD_GetHandleByName
// --env--play





[1.16] other

// DL--mp3
source:resource\mmi_res_prj_def.h  R_DL_1

// DC--mp3
//		==>PlayCaptureRing
//		====>
//		======>
source:resource\mmi_res_prj_def.h  R_DC_1

// TONE--mp3
source:resource\mmi_res_prj_def.h  TONE_425HZ

// BAT--mp3
source:resource\mmi_res_prj_def.h  R_BAT_1

// RECORD--mp3
source:resource\mmi_res_prj_def.h  R_RECORD_ON

// SMS/CLOCK--mp3
source:resource\mmi_res_prj_def.h  R_CLOCK_1

// ALERT--mp3
source:resource\mmi_res_prj_def.h  R_ALERT_1

// OPER--mp3--其他铃声
source:resource\mmi_res_prj_def.h  (R_OPER_CALL_1

// POWER--mp3
source:resource\mmi_res_prj_def.h  R_POWER_1



[1.17] __asp__
//
source:resource\Common\RING\

// power--mp3
source:resource\mmi_res_prj_def.h  R_ASP_1

// power--id
app:setting\h\mmiset_export.h  MMI_ASP_RING_START_ID = R_ASP_1
//		==>MMI_ASP_RING_START_ID
app:setting\c\mmiset_ring.c   MMISET_RING_TYPE_ASP


[1.18] 




[1.19] __VIB__
// VIB
key:VIB,file:mmi_res_prj_def.h





[1.20] __RING__

// RING
key:RING,file:mmi_res_prj_def.h



[1.21] zmaee
//
Save:node\C\study\Macro_zmaee_8910.h __RING__


[1.22] 




