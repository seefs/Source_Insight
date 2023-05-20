
//目录:
Save:node\C\study\Macro_app_8910asp.h \[1.1\] set enter
Save:node\C\study\Macro_app_8910asp.h \[1.2\] option
Save:node\C\study\Macro_app_8910asp.h \[1.3\] setting/ring
Save:node\C\study\Macro_app_8910asp.h \[1.4\] Applet
Save:node\C\study\Macro_app_8910asp.h \[1.5\] start
Save:node\C\study\Macro_app_8910asp.h \[1.6\] record
Save:node\C\study\Macro_app_8910asp.h \[1.7\] 
Save:node\C\study\Macro_app_8910asp.h \[1.8\] 
Save:node\C\study\Macro_app_8910asp.h \[1.9\] 
Save:node\C\study\Macro_app_8910asp.h \[1.10\] 
Save:node\C\study\Macro_app_8910asp.h \[1.11\] 
Save:node\C\study\Macro_app_8910asp.h \[1.12\] 



// win
MMK_CreateWin
MMK_CreateChildWin (, , );
MMK_CloseWin


[1.1] set enter

//		==>MMIMAINMENU_StartASP
//		====>MMIAPIASP_EnterIntoAsp
app:asp\c\mmiasp_wintab.c  MMI_RESULT_E^^HandleMsgListWinMsg



[1.2] option
//
app:asp\c\mmiasp_wintab.c  MMI_RESULT_E^^HandleMsgListOptMsg
app:asp\h\Mmiasp_menutable.def  MENU_ASP_MSG_OPT
//		==>.menu_asp_msg_opt
app:asp\c\mmiasp_menutable.c  menu_asp_msg_opt
//		==>HandleAspMenuOperation
//		====>...


[1.3] setting
//		==>.menu_asp_setting
//		====>SaveAspSetting
//		======>SetSpeakerFlag
app:asp\c\mmiasp_wintab.c  MMI_RESULT_E^HandleAspSettingWinMsg

### set--ring
app:asp\c\mmiasp_wintab.c  MMI_RESULT_E^HandleRingSelectWinMsg
### set--ring--fixed
//		==>MMISET_RING_TYPE_ASP
app:asp\c\mmiasp_wintab.c  MMI_RESULT_E^HandleFixedAnswerRingSelectWinMsg

//
Save:node\C\study\Macro_res_ring_8910.h  __asp__


[1.4] Applet

// enter
//		==>MMIASP_StartApplet
//		====>.SPRD_ANSMACHINE_APPLET_ID
//		====>MMK_StartApplet
//		==>MMIASP_RegAppletInfo
//		====>AspAppletHandleEvent
app:record\c\mmirecord_common_wintab.c  MMI_RESULT_E^HandleRecordMainPlayWinMsg

//		==>.menu_asp_set_music_opt

//		==>.menu_asp_play_win_msg_opt


[1.5] start

###  通道问题
//		==>MMICC_ConstructAudioHandle   # --APPLET_START
//		====>                           # MMISRVMGR_Request-0-27
//		==>CC_HandleCcAnimWinMsg        # --来电
//		====>PlayNewCallRing            # MMISRVMGR_Request-0-14
//		==>CC_SyncInd                   # --收到信道分配事件的处理
//		====>CC_OpenAudioTunnel         # 跳过
//		==>MMICC_AnswerASPCall          # --接听
//		====>CC_ConnectCallReq          # accept call
//		======>CC_OpenAudioTunnel       # MMISRVMGR_Request-16-27
//		==>CC_SetupCompleteInd          # --接通
//		====>MMIAPIASP_StartAnswerCall
//		==>MMIASP_StartPlayAnswerMusic  # --asp
//		====>MMIASP_PlayAudioInCall     # MMISRVMGR_Request-0-10
//		====>StartRecord                # MMISRVMGR_Request-0-0
//		==>MMIAPIASP_HandlePlayAudioEnd # --record
//		==>CC_DisconnectedCall          # --挂断
//		====>CC_OpenAudioTunnel

### asp--MT
//		==>OPEN_WINDOW:
//		====>MMIAPIASP_CreateWaitTimer
//		======>MMIASP_GetWaitTime
Save:node\C\study\Macro_app_8910call.h  CC_HandleCcAnimWinMsg

### asp--TIMER
//		==>MSG_TIMER:
//		====>MMICC_AnswerASPCall
//		======>CC_ConnectCallReq  # 接通
app:cc\c\mmicc_{wintab}.c  MMIAPIASP_IsWaitTimeout

### asp--COMPLETE
//		==>COMPLETE_IND: 接通
//		====>CC_SetupCompleteInd
//		======>MMIAPIASP_StartAnswerCall
//		========>MMIASP_OpenRecordingWin
app:cc\c\mmicc_app.c  case^APP_MN_SETUP_COMPLETE_IND



[1.6] record
//
//		==>MMIASP_RECORDING_WIN_TAB_V
app:asp\c\mmiasp_wintab.c  MMI_RESULT_E^^HandleRecordingWinMsg
//		==>ans
//		====>CC_HandleCcWinMsg


[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 





