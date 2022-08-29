

//目录:
// 1. 
Save:node\C\study\Macro_slide_8910.h \[1.1\] image
Save:node\C\study\Macro_slide_8910.h \[1.2\] image--gui
Save:node\C\study\Macro_slide_8910.h \[1.3\] gui
Save:node\C\study\Macro_slide_8910.h \[1.4\] pubwin, wait, ---
Save:node\C\study\Macro_slide_8910.h \[1.5\] test
Save:node\C\study\Macro_slide_8910.h \[1.6\] 
Save:node\C\study\Macro_slide_8910.h \[1.7\] tp
Save:node\C\study\Macro_slide_8910.h \[1.8\] down---自动下载
Save:node\C\study\Macro_slide_8910.h \[1.9\] anim, common
Save:node\C\study\Macro_slide_8910.h \[1.10\] make---------------关联宏
Save:node\C\study\Macro_slide_8910.h \[1.11\] app, zdt
Save:node\C\study\Macro_slide_8910.h \[1.12\] log----------------
Save:node\C\study\Macro_slide_8910.h \[1.13\] file
Save:node\C\study\Macro_slide_8910.h \[1.14\] slide--------------异常点击
Save:node\C\study\Macro_slide_8910.h \[1.15\] slide_list
Save:node\C\study\Macro_slide_8910.h \[1.16\] 
//
Save:node\C\study\Macro_slide_8910.h \[2.1\] dropdown------------下拉消息
Save:node\C\study\Macro_slide_8910.h \[2.2\] menu----------------主菜单
Save:node\C\study\Macro_slide_8910.h \[2.3\] clock, idle---------待机
Save:node\C\study\Macro_slide_8910.h \[2.4\] dial----------------拨号
Save:node\C\study\Macro_slide_8910.h \[2.5\] call----------------通话
Save:node\C\study\Macro_slide_8910.h \[2.6\] cl, pb--------------记录
Save:node\C\study\Macro_slide_8910.h \[2.7\] sms-----------------
Save:node\C\study\Macro_slide_8910.h \[2.8\] record--------------
Save:node\C\study\Macro_slide_8910.h \[2.9\] pic-----------------
Save:node\C\study\Macro_slide_8910.h \[2.10\] camera-------------
Save:node\C\study\Macro_slide_8910.h \[2.11\] alarm--------------
Save:node\C\study\Macro_slide_8910.h \[2.12\] stopWatch,counttime
Save:node\C\study\Macro_slide_8910.h \[2.13\] set----------------设置
Save:node\C\study\Macro_slide_8910.h \[2.14\] qrcode-------------
Save:node\C\study\Macro_slide_8910.h \[2.15\] other app----------
Save:node\C\study\Macro_slide_8910.h \[2.16\] powoff
Save:node\C\study\Macro_slide_8910.h \[2.17\] charge
Save:node\C\study\Macro_slide_8910.h \[2.18\] Tip
Save:node\C\study\Macro_slide_8910.h \[2.19\] db
Save:node\C\study\Macro_slide_8910.h \[2.20\] sos
Save:node\C\study\Macro_slide_8910.h \[2.21\] 
Save:node\C\study\Macro_slide_8910.h \[2.22\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h


//
@Jefe?展讯新推送过来一个8910 手表代码版本，需要就下载一下
链接：https://pan.baidu.com/s/1NxS3ceKx_f9zpCGEJ_9bTQ 
提取码：ydo7 

何华:
MOCOR_20B_SW_W21.35.4.rar



[1.1] image
//
Save:node\C\study\
// ==>image
Save:node\C\study\Macro_res_image_8910.h
// ==>image watch
Save:node\C\study\Macro_res_image_wa8910.h



[1.2] image--gui
//
Save:node\C\study\Macro_res_image_wa8910.h  __btn__
Save:node\C\study\Macro_res_image_wa8910.h  __switch__
Save:node\C\study\Macro_res_image_wa8910.h  __im__




[1.3] gui
### banner
// 5s
DisplayBanner
DisplayControlBanner


[1.4] pubwin
// res--img
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/
// wait-fullscreen圆形
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_camera_ic_waiting.png
// wait-1line 闹钟弹窗, 倒计时弹窗
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_waitingwin_1line_tip_bg.png
// 1Line
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_notewin_1Line_tip_bg.png
// 2Line
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_notewin_2Line_tip_bg.png
// query
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_querywin_1btn_bg.png


// wait
app:launcher\c\watch_comm_test.c  WatchCOM_WaitingWin_1Line_Enter
// 1Line
app:launcher\c\watch_comm_test.c  WatchCOM_NoteWin_1Line_Enter
// 2Line
app:launcher\c\watch_comm_test.c  WatchCOM_NoteWin_2Line_Enter
// query
app:launcher\c\watch_comm_test.c  WatchCOM_QueryWin_1Btn_Enter
common:c\watch_commonwin_query.c      WatchCOM_QueryWin_1Btn_With2Str_Enter
common:c\watch_commonwin_query.c      WatchCOM_QueryWin_2Btn_Enter


// pub wait
HandleTempWaitWinMsg
HandleDCWaitWinMsg
//
// draw
CommonWin_GetLayoutByType

// --rect
common:c\watch_commonwin_internal.c CommonWin_GetLayoutByType


// sms pubwin
// --img
images:sms\MMI_RES_DEFAULT\IMAG\watch\
app:sms\h\sms_mdu_def.h  IMAGE_SMS_NOTE_BG
//
app:sms\c\watch_sms_message.c  MMISMS_OpenNoteWin





[1.5] test
// common--msg
//		==>WatchLAUNCHER_HandleCommonWinMsg
//		====>key_7
//		====>WatchTest_Win_Enter
//		======>HandleMsgTestWindow
//		========>init:
//		==========>.watch_test_menu_text
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_HandleCommonWinMsg
app:launcher\c\watch_comm_test.c  HandleMsgTestWindow
app:launcher\c\watch_comm_test.c  W_TEST_CTRL^+^W_ITEM_3
// wait--msg
//		==>WatchCOM_WaitingWin_1Line_Enter
//		====>Data:
//		======>WATCH_COMMONWIN_TYPE_WAITING_1LINE
//		====>Win:
//		======>HandleMsgWaitingWinWindow
//		====>Ctrl:
//		======>Textbox
// wait--msg--cancel
//		==>TextHandleMsg
//		====>CANCEL:
//		======>CTRLMSG_PostNotify
//		========>MSG_NOTIFY_CANCEL





[1.6] 



[1.7] tp
//
source:mmi_kernel\source\c\mmk_tp.c  MMK_DispatchMSGTp



[1.8] down---自动下载
//
MS_Ref/source/base/src/run_mode.c  RM_AUTODL_MOD



[1.9] anim, common
// res--anim(charge)
images:common/MMI_RES_DEFAULT/ANIM/WATCH_INDICATOR_ANIM/

// res--bt, btn bg
images:common/MMI_RES_DEFAULT/IMAG/Common/
// res--img
images:common/MMI_RES_DEFAULT/IMAG/Edit/Editpad/
images:common/MMI_RES_DEFAULT/IMAG/Launcher/
images:common/MMI_RES_DEFAULT/IMAG/List/
images:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/
images:common/MMI_RES_DEFAULT/IMAG/Scrollkey/
images:common/MMI_RES_DEFAULT/IMAG/key_lock/effect1/
// res--img
images:common/MMI_RES_DEFAULT/IMAG/Scrollkey/
images:clock/MMI_RES_DEFAULT/IMAG/worldclock/
images:clock/MMI_RES_DEFAULT/IMAG/timer/
images:clipbrd/MMI_RES_DEFAULT/IMAG/

//
source:mmi_app\common\h\common_mdu_def.h  image_watch_waitingwin_fullscreen_pic



[1.10] make
//
make/app_watch_main/app_watch_macro.mk  MMI_WATCH_UI
make/app_watch_main/release_app_watch_macro.mk  MMI_WATCH_UI

// add .c
make\app_watch_main\app_watch_main.mk  watch_stopwatch

//
make\app_watch_main\app_watch_main.mk  fzd


[1.11] app
// Msg--base
zdt:c\zdt_app.c  HandleZDTAppMsg
// Msg--base--net
zdt:c\zdt_net.c MMIZDT_Net_Handle_AppMsg
// Msg--base--net--init--send--reg--post--reg
zdt:c\zdt_net.c ZDT_Net_Init
zdt:c\zdt_net.c UBX_AGPS_TCP_Send
zdt:c\zdt_net.c ZDT_API_TCP_Reg
zdt:c\zdt_tcp.c ZDT_TCP_PostEvtTo_APP
zdt:c\zdt_net.c MMIZDT_TCP_Handle_AppMsg
zdt:c\zdt_tcp.c ZdtTCP_HandleReg
// Msg--base--net--tcp--open
zdt:c\zdt_net.c MMIZDT_Net_Open
zdt:c\zdt_net.c ZDT_Net_Open
zdt:c\zdt_net.c ZDT_Net_StartPdpActiveTimer
// Msg--base--net--tcp--ok
zdt:c\zdt_net.c MMIZDT_Net_Handle_PDPActiveOK
zdt:c\zdt_tcp.c MMI_ZDT_TCP_PdpStateActive
zdt:c\zdt_tcp.c ZdtTCP_RegStart
zdt:c\zdt_net.c UBX_AGPS_TCP_Callback
// Msg--base--net--tcp--send
zdt:c\zdt_net.c UBX_AGPS_TCP_SendExt
zdt:c\zdt_tcp.c ZdtTCP_HandleSend
zdt:c\zdt_tcp.c ZdtTCP_HandleSendStart
zdt:c\zdt_tcp.c ZdtTCP_ConnWrite
zdt:c\zdt_tcp.c ZdtTcp_Write
// Msg--base--net--tcp--send
zdt:c\zdt_tcp.c TCP_Task_HandleSig_Write
zdt:c\zdt_tcp.c sci_sock_send
// Msg--base--net--tcp--recv ?no
zdt:c\zdt_tcp.c sci_sock_recv



[1.12] log
### zdt
zdt:c\zdt_app.c  MMIZDT_AppInit
zdt:c\zdt_app.c  MMIZDT_InitModule
//
common:h\mmi_appmsg.h  MSG_USRE_LOG_BUF_SAVE
app:phone\c\mmiphone.c  MSG_USRE_LOG_BUF_SAVE


### fzd
fzd:c\mmifzd_app.c  FZDAPP_Init
//
common:h\mmi_appmsg.h  MSG_WATCH_LOG_BUF_SAVE
app:phone\c\mmiphone.c  MSG_WATCH_LOG_BUF_SAVE
//


### log list
//
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c
MS_MMI_Main\source\mmi_app\app\slidepage\c\watch_slidepage.c
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c
// 去掉 GET_FOCUS
MS_MMI_Main/source/mmi_app/app/launcher/c/watch_launcher_main - 副本.c
// 
MS_MMI_Main/source/mmi_app/app/launcher/c/watch_temp_win - 副本.c
// 开log
MS_MMI_Main/source/mmi_app/app/launcher/h/watch_comm_test - 副本.h
// menu_page
MS_MMI_Main/source/mmi_app/app/slidepage/c/watch_slidepage - 副本.c
MS_MMI_Main/source/mmi_kernel/source/c/mmk_kbd - 副本.c


// log:
//    if (MMIAPIUDISK_UdiskIsRun()&&MMIAPICC_IsVideoCall())
//    {
//        return;
//    }


[1.13] file
### fzd
fzd:c\mmifzd_app.c  FZDAPP_Init
//
fzd:c/mmifzd_cr.c  x
fzd:c/mmifzd_heartbeat.c
fzd:c/mmifzd_time.c




[1.14] slide
//

// --按键
//		==>key--red down: (HandleMSGKbd)
//		====>Hook
//		======>(no case)
//		==>key--cancel down:
//		====>Hook
//		====>menu
//		======>WatchLAUNCHER_HandleCommonWinMsg
// --关闭
//		==>msg--CLOSE WINDOW: (1个关闭page都关闭)
//		====>Hook
//		====>menu (A/B/C)
//		======>WatchLAUNCHER_HandleCommonWinMsg
// --待机
//		==>HandleLauncherClockWinMsg
//		====>GET_FOCUS:
// --开始滑动
//		==>HandleKeyLeftMsg / HandleKeyRightMsg / TpUp
//		====>StartAutoSlide
//		======>start:
//		======>finish:
//		========>ProcessAutoSlideFinished
//		==========>CloseAllDeactivedWinInEntity
//		======>end:
//		==========>
//		============>
//		==============>
// --异常点击
//		==>TP_DOWN
//		==>key--left:
//		====>Create_page
//		======>abc, FOCUS
//		======>abc, open
//		======>b, PAINT_13  (没走Hook)
//		======>b, PAINT_2   (走Hook)
//		========>异常情况，进主菜单后刷新，马上触发TP按下
//		========>tp down, drap
//		========>tp up, slide
//		==========>watch_setHook (2半页)
//		==========>ProcessAutoSlideFinished (滑到底)
//		==========> lose FOCUS, 再删除多余win
//		======>b, lose FOCUS
//		======>d, get FOCUS
//		======>close dial
//		========>Hook, close
//		==========>Destory



[1.15] slide_list
// --slide--加速度
//		==>1.默认step=24
//		==>2.加速度0.5倍, step=24 (不变)
//		==>3.速度1.5倍, step=65
//		==>4.时间2.0倍, step=46
// 其他
//		==>2.加速度2.0倍, step=16
//		==>3.速度2.0倍, step=120
//		==>4.时间1.5倍, step=36
//
//		====>MMITHEME_GetFlingFrictionExt
// --slide--未使用
//		======>ListHandleTpScroll
// --slide--1.Timer                  # --到第3步停
//		==>ListHandleTimer
//		====>.total_rect_height      # 284
//		====>.total_item_height      # 497
//		====>.reach_ori_offset_y     # -213 = 284 - 497
//		====>.tp_point_ptr->y        # 110
//		====>.slide_start_point.y    # 96
//		====>.slide_pre_point.y      # 96
//		====>.offset_y               # -213
//		==>ListStartTpMoveTimer
//		====>.display_style.slide_time    # 25
// --slide--2.slide                  # --up停
//		==>ListCtrlHandleMsg
//		====>TIMER:
//		====>ListHandleTimer
//		======>Start:
//		========>ListStartTpMoveTimer
//		======>slide:
//		========>ListHandleSlide     # FLING
//		==========>FLING:
//		======>Stop:
//		========>ListStopFling
// --slide--3.DrawAnim     
//		======>ListHandleSlide       # 向上 offset_y= -354
//		======>ListGetRecoverSpace   # move_space= 141
//		======>ListDrawAnim          # offset_y= -354
// --slide--4.Recover                # offset_y= -213
//		==>ListCtrlHandleMsg
//		====>LOSE_FOCUS:  还原
//		======>ListRecoverSlideByOffsetY





[1.16] 




[2.1] dropdown
// ==>image
Save:node\C\study\Macro_res_image_wa8910.h  __dropdown__


// enter
//		==>Watch_DropDownWin_Enter
//		====>HandleMsgdropdownWindow
//		======>
//		========>
//		==========>
//		============>MMINotifyWin_EnterWin
//		==============>
app:launcher\c\watch_launcher_main.c  MMINotifyWin_EnterWin
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_HandleCommonWinMsg

// statusbar
app:dropdownwin\c\mmidropdownwin_main.c  NotifyWin_HandleWinMsg


###slide win
//		==>MMINotifyWin_EnterWin
//		====>NotifyWinInfoEx_Create
//		====>MMK_CreateWin
//		====>WatchSLIDEWIN_Init
//		======>WatchSLIDEWIN_HandleMsgHook  (滑动死机)
//		========>
app:slidewin\c\watch_slidewin.c  WatchSLIDEWIN_HandleMsgHook
//   DOWN->move->time->step->full->status
// ->FULL->move->time->step->full->status
// ->UP        ->time->step->full->status
// ->FULL      ->time->step->full->status->close
// ->FULL



[2.2] menu
### 1.style (LAUNCHER APP)
// res--menu
images:common/MMI_RES_DEFAULT/IMAG/Launcher/

// enter (no idle)
app:idle\c\mainapp.c  WatchLAUNCHER_Enter
app:mainmenu\c\mainmenu_win.c  WatchLAUNCHER_Enter

// (menu item)
app:slidepage\h\watch_slidepage.h  LAUNCHER_MENU_ID_ALARM
// --list--out
//		==>WatchLAUNCHER_ClockWin_Enter
//		====>WatchMainMenu_Enter(0)
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_Enter
// --func--单页
app:launcher\c\watch_launcher_main.c  HandleLauncherCallWinMsg
// --func--四宫格
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_MENU4_Enter


// slide
app:slidepage\c\watch_slidepage.c  SetActivedEntity(new_entity)
// --entity 相关
app:slidepage\c\watch_slidepage.c  WatchSLIDEAGE_SetPageEnable
app:slidepage\c\watch_slidepage.c  WatchSLIDEAGE_SetCurrentPageIndex
app:slidepage\c\watch_slidepage.c  WatchSLIDEAGE_ReturnIdleWin
app:slidepage\c\watch_slidepage.c  SlidePageDrapTimerOut
// --msg 相关
// ----MSG_GET_FOCUS / MSG_LOSE_FOCUS
// ------切换win, 返回win 
// ----MSG_BACKLIGHT_TURN_ON / MSG_BACKLIGHT_TURN_OFF
// ------亮屏
app:slidepage\c\watch_slidepage.c  MMI_RESULT_E^HandleSlidePageMsgHook



### 2.style (SPDE APP)
// res--menu
images:spde\MMI_RES_DEFAULT\IMAG\mainmenu

// idle
app:mainmenu\c\mainmenu_win.c  MMIAPIMENU_CreatMainMenu
app:spde\c\spde_wintable.c  HandleSPDE_WatchMainMenuWinMsg
// enter
app:mainmenu\c\mainmenu_win.c  MMIAPIMENU_CreatMainMenu
app:spde\c\spde_wintable.c  HandleSPDE_WatchMainMenuWinMsg

// (menu item)
// --id
app:spde\c\spde_wintable.c  SPDE_MAINMENU_STAT_E;
// --icon+txt
app:spde\c\spde_wintable.c  SpdeMenuDlgEventHandlers
// func
app:spde\c\spde_wintable.c  watch_mainmenu_key_enter_hdlr


### 3.ZMAEE
// __style__
Save:node\C\study\Macro_zmaee_8910.h  __ZMAEE__



[2.3] clock, idle
// res--tool
//images:clock/MMI_RES_DEFAULT/IMAG/timer/
//images:clock/MMI_RES_DEFAULT/IMAG/worldclock/
// res--clock
images:common\MMI_RES_DEFAULT\IMAG\Launcher
// res--time
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time


// enter
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_DrawAnalogClock
//   draw 1 模拟
app:launcher\c\watch_launcher_common.c  WatchLAUNCHER_DrawAnalogClock
//   draw 2 数字
app:launcher\c\watch_launcher_common.c  WatchLAUNCHER_DrawDigitalClock
//   draw 3 wallpaper
app:launcher\c\watch_launcher_common.c  WatchLAUNCHER_DrawWallpaperClock

// set
app:launcher\c\watch_launcher_editclockwin.c  WatchLAUNCHER_EditClockWin_Enter
// set--common
app:launcher\c\watch_launcher_editclockwin.c  HandleLauncherEditClockWinMsg
// 自动销毁 slide
MS_MMI_Main\source\mmi_app\app\slidepage\c\watch_slidepage.c  WatchSLIDEPAGE_DestoryHandle



[2.4] dial
// res--dial
images:cc/MMI_RES_DEFAULT/IMAG/cc/watch/dialpad/

// dial
app:cc\c\watch_cc_dialpad.c  HandleDialpadWinMsg



[2.5] call
// res--call
images:cc/MMI_RES_DEFAULT/IMAG/cc/watch/notification/
images:cc/MMI_RES_DEFAULT/IMAG/cc/watch/

// call
app:cc/c/watch_cc_view.c  CC_OpenWatchMoCallWin
app:cc/c/watch_cc_view.c  CC_OpenWatchMtCallWin
// draw txt
app:cc/c/watch_cc_view.c  1755


// 流程--来电-MT，
//		==>MMICC_HandlePsMsg
//		====>ALERTING_IND:
//		====>CC_CallAlertingInd
//		======>CC_CallSetupInd    #8910
//		========>MMICC_UpdateCallStatusDisplay      #mo mt dis共用
app:cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
//		==========>MT:
//		==========>CC_OpenWatchMtCallWin
app:cc/c/watch_cc_view.c  CC_OpenWatchMtCallWin
// call--上课免打扰
//		==>MMICC_HandlePsMsg
//		====>SETUP_IND:
//		======>HandleMTCallDisc
app:cc\c\mmicc_app.c  BOOLEAN^HandleMTCallDisc


// 流程--去电-MO，
//		==>HandleDialpadWinMsg
//		====>PENOK:
//		====>WatchAPICC_MakeCall
//		======>MMIAPICC_MakeCall
//		========>MMICC_ProcessMakeCall
//		==========>...
//		==========>MMICC_UpdateCallStatusDisplay
//		============>MO:
//		============>CC_OpenWatchMoCallWin
app:cc/c/watch_cc_view.c  CC_OpenWatchMoCallWin


// 流程--挂断-DIS
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>CC_DisconnectedCallByIndex
//		========>MMICC_UpdateCallStatusDisplay
//		==========>DISCONNECTED:
//		============>sms拒接:
//		============>WatchCC_SentAndRejected_NoteWin_Enter
//		============>挂断:
//		============>WatchCC_CallEnded_NoteWin_Enter
//		========>MMICC_OpenDisconnectWin(call_time)  #8910在前面
//		==========>PdaDisplayDisconnectWin
//		==========>MMICC_HandleOperAfterCallEnd
app:cc\c\mmicc_app.c case^APP_MN_CALL_DISCONNECTED_IND
// 流程--挂断-Red
//		==>CCApplet_HandleEvent
//		====>RED:
//		======>MMIAPICC_ReleaseCallByRedkey
app:cc\c\mmicc_app.c CC_RESULT_E^MMIAPICC_ReleaseCallByRedkey


// 流程--接听
//		==>MMICC_HandlePsMsg
//		====>COMPLETE_CNF:
//		====>CC_SetupCompleteCnf
//		======>MMICC_UpdateCallStatusDisplay
//		========>CONNECTED_IND:
//		==========>CC_UpdateWatchMoCallStatus
//		==========>WatchCC_MoCallingWin_Exit
//		====>MMICC_AnswerCall
//		==>WATCHCC_CONNECTED_WIN_TAB
//		====>HandleCcVoiceCallConnectedWinMsg
//		======>
app:cc/c/watch_cc_view.c  CC_UpdateWatchMoCallStatus
// call--speaker--8910
//		if(MMIAPICC_IsHandFree() == FALSE)
//			EnableHandfreeMode(!MMIAPICC_IsHandFree());


// call--vib--8910
//		==>COMPLETE_IND: 接通
//		====>CC_SetupCompleteInd
//		======>MMICC_VibrateForConnectPrompt
//		==>
//		====>CC_SetupCompleteCnf
//		======>MMICC_VibrateForConnectPrompt
//		==>CC_HandleCcAnimWinMsg
//		====>OPEN:
//		====>PlayNewCallRing
//		======>MMIAPICC_StartRingOrVibrate




[2.6] cl, pb
// res--img
images:cc/MMI_RES_DEFAULT/IMAG/callog/watch/
images:cc/MMI_RES_DEFAULT/IMAG/cc/watch/portrait/
images:cc/MMI_RES_DEFAULT/IMAG/cc/watch/
images:cc/MMI_RES_DEFAULT/IMAG/cc/watch/volte/
images:cc/MMI_RES_DEFAULT/IMAG/cc/Mt_lock/

// main
app:launcher\c\watch_launcher_main.c  HandleLauncherCallWinMsg
// pb
HandlePbMainMenuWinMsg

// cl
HandleClListWinMsg
// icon
CL_ConvertNvInfoToArrayInfo


//
BM_CALENDAR
spde_app.c
//
第2套dial风格


//		==>WatchLAUNCHER_PBWin_Enter
//		====>WatchPB_MainWin_Enter
//		======>
app:launcher\c\watch_pb_win.c  WatchPB_MainWin_Enter


[2.7] sms
// res--img
images:sms/MMI_RES_DEFAULT/IMAG/watch/

// enter
app:launcher\c\watch_launcher_main.c  WatchSMS_MainMenuWin_Enter

// main
app:sms\c\watch_sms_main.c  HandleSmsMainMenuListWinMsg
// sms list
HandleMessageWinMsg
// sms no
MMISMS_OpenFullScreenNoteWin
HandleMsgNoteWinWindow
// sms details
HandleShowChatSmsWinMsg
//
MMISMS_DEFAULT_WORD_NUM, STXT_SMS_TEMP_1_EXT01


// idle sms
DisplayWinPanelFgAddUnreadInfoNum



[2.8] record
// res--img
images:record/MMI_RES_DEFAULT/IMAG/
images:record/MMI_RES_DEFAULT/ANIM/ANIM_RECORD_PLAY/

## record
// main
app:record\c\watch_record_mainwin.c  HandleRecordMainPlayWinMsg
// opt
HandleRecordOptWinMsg
// wait pubwin
WATCHRECORD_OpenWaitingWin
// file list
HandleRecordListWinMsg
// play btn
HandleRecordPlayWinMsg
// note/del query
WatchRec_PlayWin_Query_Callback




[2.9] pic
// res--img
images:pb/MMI_RES_DEFAULT/IMAG/contact^portrait/
images:pic_viewer/MMI_RES_DEFAULT/IMAG/
//
app:pic_viewer\c\watch_gallery_main.c  HandleGalleryMainWinMsg
app:pic_viewer\c\watch_gallery_main.c  Gallery_Pic_HandleMsg
// draw
Gallery_DisplayFilePreview();
// btn
GallerySetPicBtnParam



[2.10] camera
// res--img
images:camera/MMI_RES_DEFAULT/IMAG/WATCH/

// dc
Watch_HandleCameraWinMsg
//  MMIAPIDC_Exit()
//  Watch_HandleButtonTpUp
// pic
//	MMIDC_OpenPictureWin





[2.11] alarm
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __setAlarm__
// ==>image
Save:node\C\study\Macro_res_image_wa8910.h  __alarm__

// enter
// --alarm--list
//		==>Settings_AlarmListWin_Enter
//		====>MMISET_ALARM_LIST_WIN_TAB
//		======>Settings_AlarmList_OPEN_WINDOW
//		========>.iconRect  (no data)
//		========>.labelRect (no data)
//		========>.1btn
//		======>PAINT:
//		========>SettingsAlarmListDrawList
//		========>.listRect {0,0,240,209}
//		========>.h         210
app:setting\c\watch_set_alarmlist.c  HandleSettingsAlarmListWindow
// --alarm--option (3item)
//		==>Settings_AlarmOptionWin_Enter
//		====>MMISET_ALARM_OPTION_WIN_TAB
app:setting\c\watch_set_alarmlist.c  HandleSettingsAlarmOptionWindow
// --alarm--edit time
//		==>Settings_AlarmAddWin_Enter
//		====>MMISET_ALARM_EDIT_WIN_TAB
//		======>Settings_AlarmEdit_OPEN_WINDOW
//		========>.editRect  [0,0,240,156]
//		========>.h         52
//		========>WatchCOM_Btn_SetPos_2Btn
//		==========>[150,170,209,229] 60*60
app:setting\c\watch_set_alarmedit.c  HandleSettingsAlarmEditWindow
// --alarm--edit mode
//		==>Settings_AlarmRepeatWin_Enter
//		====>MMISET_ALARM_REPEAT_WIN_TAB
//		======>Settings_AlarmRepeat_OPEN_WINDOW
//		========>.listRect  [0,0,240,156]
app:setting\c\watch_set_alarmedit.c  HandleSettingsAlarmRepeatWindow
// --alarm--add
//		==>_Callback_AlarmRepeatBtnFixed
//		====>
//		======>


// --ctrl--time
ctrl:Picker\c\ctrltimepicker.c  TimePickerCtrlHandleMsg


// --alarm--激活
//		==>OpenAlarmAliveWin
//		====>普通闹钟:
//		====>Watch_Alarm_AliveWin_Enter      # 激活
//		======>HandleMsgAlarmAliveWindow
//		========>OPEN:
//		========>Alarm_Alive_OPEN_WINDOW
//		==========>CreatTextTitle
//		==========>CreatTextContent
//		==========>AlarmSetButtonCtrlParam
//		========>btn_close:
//		==========>HandleAlarmBtnRight
//		========>btn_snooze:
//		==========>HandleAlarmBtnLeft
//		==>ring:
//		====>MMIAPIAlarm_StartRingOrVib
//		======>StartRingOrVib
//		========>StartRingForRingOrVib
// --alarm--pos
app:accessory\c\watch_alarm.c  ALARM_ICON_X
//		==>FLIP:                       # 参考这个
//		====>Stop, CloseDelay, CloseWin, CheckEvent
//		==>OK:                         # 打开
//		====>CloseAlarmAliveWin
//		==>WEB:                        # 再响
//		====>SnoozedAlarm / Stop, SetDelay_F, CheckEvent, CloseWin
//		==>CANCEL:                     # 停止
//		====>Stop, CloseDelay, CloseWin, CheckEvent
//		==>timer_out:
//		=====>Stop, SetDelay_T, CheckEvent, CloseWin
app:accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg


[2.12] stopWatch,counttime
### 1.stopWatch
// res--img
images:clock/MMI_RES_DEFAULT/IMAG/stopwatch/

// enter
app:launcher\c\watch_launcher_main.c  WatchStopWatch_MainWin_Enter
// --win
app:accessory\c\watch_stopwatch.c  WATCH_STOPWATCH_WIN_TAB



### 2.counttime
// enter
app:launcher\c\watch_launcher_main.c  WatchCountEdtime_MainWin_Enter
// --win
app:accessory\c\watch_countedtime.c  WATCH_COUNTTIME_WIN_TAB
// -------(start)
app:accessory\c\watch_countedtime.c  CountEdtime_StartOrStopTime
// --pubwin
app:accessory\c\watch_countedtime.c  CountEdtime_StartDialogWin



### 3.counttime(old)
// enter
app:launcher\c\watch_launcher_main.c  MMIAPICT_OpenCoutimeRunningWin
// --win--(set time)
app:accessory\c\mmicountedtime_main.c  COUTIME_WIN_TAB
// -------(start)
app:accessory\c\mmicountedtime_main.c  HandleButton
// --win--(run step)
app:accessory\c\mmicountedtime_main.c  CUSTOM_CT_WIN_TAB
// --pubwin
app:accessory\c\mmicountedtime_main.c  void^StartArriveDialogWin



[2.13] set
// --set--main--(list, CallBack)
//		==>WatchSET_MainWin_Enter
//		====>init:
//		======>.s_settings_main_text_list_data
app:setting\c\watch_set_main.c  HandleSettingsMainWindow
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __setMain__
// ==>image
Save:node\C\study\Macro_res_image_wa8910.h  __set__


// 1.bn 亮度(big ic)
app:setting\c\watch_set_brightness.c  HandleSettingsBrightnessWindow


// 2.bl 背光时间(radioList)
//		==>Settings_BackLight_Enter
//		====>init:
//		======>.s_demo_backlight_list_data
//		====>WEB:
//		======>Settings_BackLight_APP_WEB
app:setting\c\watch_set_backlight.c  HandleSettingsBacklightWindow
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __setBl__


// 3.sound/next icon
//		==>Settings_SoundWin_Enter
//		====>full:
app:setting\c\watch_set_sound.c  HandleSettingsSoundWindow
//		==>HandleMsgCommonRadioListWindow
//		====>Common_RadioListWin_User_Action
//		======>_Callback
//		==>OK:
//		====>Settings_CallRingSelectWin_Enter
//		======>_Callback_CallRingSelectWin
//  --alarm--setring
//		==>Settings_AlarmRingSelectWin_Enter
//		====>.s_sound_alarm_ring_win
//		====>.s_sound_call_ring_list
//		======>web:
//		======>MMIAPIENVSET_SetFixedAlarmRingId
app:setting\c\watch_set_mmsound.c  Settings_MMSoundWin_Enter
app:setting\c\watch_set_notesound.c  Settings_NoteSoundWin_Enter
app:setting\c\watch_set_callsound.c  Settings_CallSoundWin_Enter

// ==>pos
Save:node\C\study\Macro_pos_8910.h  __setSound__
// ==>image
Save:node\C\study\Macro_res_image_wa8910.h  __list__


// 4.clock (img)/(rdo)
//		==>HandleMsgCommonRadioListWindow
//		====>Common_RadioListWin_User_Action
//		======>_Callback_ClockModeSelectWin
app:setting\c\watch_set_clock.c  HandleSettingsClockWindow
app:launcher\c\watch_launcher_editclockwin.c  WatchLAUNCHER_EditClockWin_Enter
//  --clock--12/24
//		==>
app:setting\c\watch_set_clock.c  Settings_ClockModeSelectWin_Enter


// 5.more
app:setting\c\watch_set_more.c  HandleSettingsMoreWindow


//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>


[2.14] qrcode
### 1.style
// res--2vm
images:common/MMI_RES_DEFAULT/IMAG/watch/2vm

// enter
app:launcher\c\watch_launcher_main.c  Watch2VM_MainWin_Enter
app:launcher\c\watch_qrcode_win.c  WATCH_QR_PATH_NAME


### 2.style
// res--2vm
images:spde\MMI_RES_DEFAULT\IMAG\

// enter
app:spde\c\spde_wintable.c  QRCODE_FILE_NAME



[2.15] other app
// res--menu
images:/
images:common/MMI_RES_DEFAULT/IMAG/Launcher/menu4/

// 微聊
app:launcher\c\watch_launcher_main.c  WatchWCALL_MainWin_Enter


// 加好友
app:launcher\c\watch_launcher_main.c  WatchWADD_MainWin_Enter


// 计步
images:common/MMI_RES_DEFAULT/IMAG/watch/jibu/
app:launcher\c\watch_launcher_main.c  WatchJiBu_MainWin_Enter


// 心率
images:common/MMI_RES_DEFAULT/IMAG/watch/health/
app:launcher\c\watch_launcher_main.c  WatchHR_MainWin_Enter
// ==>image
Save:node\C\study\Macro_res_image_wa8910.h  __hr__


// 体温
images:common/MMI_RES_DEFAULT/IMAG/watch/health/
app:launcher\c\watch_launcher_main.c  WatchTemp_MainWin_Enter


// 课程表
app:launcher\c\watch_launcher_main.c  WatchKCB_MainWin_Enter
app:launcher\c\watch_launcher_editclockwin.c  WatchLAUNCHER_EditClockWin_Enter


// 防走丢
app:launcher\c\watch_launcher_main.c  WatchAnti_MainWin_Enter


// imei
app:launcher\c\watch_imei_win.c  WatchImei_Enter


// test
app:launcher\c\watch_comm_test.c  WatchTest_Win_Enter
// test--win32
//		==>TRACE_APP_LOGD
//		====>WATCH_LOG
//		======>SCI_TRACE_LOW
// test--phone
//		==>TRACE_APP_LOGD
//		====>WATCH_LOG
//		======>WatchTest_Buf_Print
//		========>SCI_TRACE_LOW
app:launcher\h\watch_comm_test.h  WATCH_WINID_LOG_SUPPORT



[2.16] powoff
//
app:phone\c\mmiphone.c  HandleShutDownWinMsg


[2.17] charge
// enter
app:phone\c\mmiphone_charge.c  MMI_RESULT_E^HandleChargeStartInd

// 开机充电
//		==>HandleChargeStartInd
//		====>WatchLAUNCHER_ChargeTip_Enter (短充)
//		======>WATCH_LAUNCHER_CHARGETIP_WIN_ID
//		====>WatchLAUNCHER_Charge_Enter (长充)
app:launcher\c\watch_charge_win.c  HandleLauncherChargeTipWinMsg

// 关机充电
//		==>HandleChargeStartInd
//		====>WatchLAUNCHER_Charge_Enter (长充)
//		======>WATCH_LAUNCHER_CHARGE_WIN_ID
app:launcher\c\watch_charge_win.c  HandleLauncherChargeWinMsg


[2.18] Tip
//
app:launcher\c\
app:launcher\c\watch_charge_win.c  HandleLauncherChargeTipWinMsg


[2.19] db
//
//		==>QRCode_Check2VMFile
//		====>WatchBase_Init
//		======>Watch_DB_Init
//		========>Watch_DB_SET_ListInit
//		==========>Watch_DB_SET_Default


[2.20] 
//	--timer--sos
//		==>MMK_DispatchMSGTimer
//		====>SOS:
//		======>bm_iot_card_call_sos_number
//		========>
source:mmi_kernel/source/c/mmk_kbd.c  MMK_HandleKeySosTimer
//	--关机--sos
//		==>MMK_HandlePublicKey
//		====>LONG_RED:
//		====>bm_iot_card_call_sos_number
//		====>MMIAPIPHONE_PowerOff
app:phone\c\mmiphone.c   MMIAPIPHONE_PowerOff



[2.21] 


[2.22] 


[2.23] 


[2.24] 


[2.25] 



