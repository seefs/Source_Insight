
基础路径设置:
//basePath = 
resPath = MS_MMI_Main/source/resource/mmi_res_240x240
res:\\
appPath = MS_MMI_Main\source\mmi_app\app
app:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_slide_8910.h \[1.1\] btn
Save:node\C\study\Macro_slide_8910.h \[1.2\] list
Save:node\C\study\Macro_slide_8910.h \[1.3\] switch
Save:node\C\study\Macro_slide_8910.h \[1.4\] pubwin
Save:node\C\study\Macro_slide_8910.h \[1.5\] banner
Save:node\C\study\Macro_slide_8910.h \[1.6\] im
Save:node\C\study\Macro_slide_8910.h \[1.7\] wait
Save:node\C\study\Macro_slide_8910.h \[1.8\] 
Save:node\C\study\Macro_slide_8910.h \[1.9\] anim, common
Save:node\C\study\Macro_slide_8910.h \[1.10\] make---------------关联宏
Save:node\C\study\Macro_slide_8910.h \[1.11\] 
Save:node\C\study\Macro_slide_8910.h \[1.12\] 
//
Save:node\C\study\Macro_slide_8910.h \[2.1\] dropdown------------下拉消息
Save:node\C\study\Macro_slide_8910.h \[2.2\] menu----------------主菜单
Save:node\C\study\Macro_slide_8910.h \[2.3\] clock, idle---------待机
Save:node\C\study\Macro_slide_8910.h \[2.4\] dial----------------
Save:node\C\study\Macro_slide_8910.h \[2.5\] call----------------
Save:node\C\study\Macro_slide_8910.h \[2.6\] cl, pb--------------
Save:node\C\study\Macro_slide_8910.h \[2.7\] sms-----------------
Save:node\C\study\Macro_slide_8910.h \[2.8\] record--------------
Save:node\C\study\Macro_slide_8910.h \[2.9\] pic-----------------
Save:node\C\study\Macro_slide_8910.h \[2.10\] camera-------------
Save:node\C\study\Macro_slide_8910.h \[2.11\] alarm--------------
Save:node\C\study\Macro_slide_8910.h \[2.12\] stopWatch,counttime
Save:node\C\study\Macro_slide_8910.h \[2.13\] set----------------
Save:node\C\study\Macro_slide_8910.h \[2.14\] qrcode-------------
Save:node\C\study\Macro_slide_8910.h \[2.15\] other app----------
Save:node\C\study\Macro_slide_8910.h \[2.16\] powoff
Save:node\C\study\Macro_slide_8910.h \[2.17\] charge
Save:node\C\study\Macro_slide_8910.h \[2.18\] 
Save:node\C\study\Macro_slide_8910.h \[2.19\] 
Save:node\C\study\Macro_slide_8910.h \[2.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] btn
// btn bg
res_single_button_transparency
res_double_button_transparency



[1.2] list
// res--img
//   24*24
res:common\MMI_RES_DEFAULT\IMAG\List
//   24*24  36*36
res:set/MMI_RES_DEFAULT/IMAG/set_sound/


// draw
MS_MMI_Main\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  ListDrawAllItems
MS_MMI_Main\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  6997
// item: (127, 42)
// bg: (116 X 24)
//   res_list_bg
MS_MMI_Main\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  3036
MS_MMI_Main\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  MMI_LIST_ITEM_BG_LEFT_RIGHT_MARGIN

// icon: (26 X 26)
//   res_list_bg
MS_MMI_Main\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  3375
// txt: (80 X 30)
MS_MMI_Main\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  3354

// rect
app:theme\c\mmitheme_list.c  s_item_style_small_2str
app:theme\c\mmitheme_list.c  s_item_style_1str_1icon
//   13+155=168, 168+12+24+12=216
// radio rect
app:theme\c\mmitheme_list.c  radio_tag_width


[1.3] switch
//
IMAGE_CONTROL_TOGGLE_ON



[1.4] pubwin
// res--img
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/
// wait-fullscreen圆形
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_camera_ic_waiting.png
// wait-1line 闹钟弹窗, 倒计时弹窗
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_waitingwin_1line_tip_bg.png
// 1Line
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_notewin_1Line_tip_bg.png
// 2Line
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_notewin_2Line_tip_bg.png
// query
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_querywin_1btn_bg.png


// wait
app:launcher\c\watch_launcher_main.c  WatchCOM_WaitingWin_1Line_Enter
// 1Line
app:launcher\c\watch_launcher_main.c  WatchCOM_NoteWin_1Line_Enter
// 2Line
app:launcher\c\watch_launcher_main.c  WatchCOM_NoteWin_2Line_Enter
// query
app:launcher\c\watch_launcher_main.c  WatchCOM_QueryWin_1Btn_Enter


// pub wait
HandleTempWaitWinMsg
HandleDCWaitWinMsg

// --rect
MS_MMI_Main\source\mmi_app\common\c\watch_commonwin_internal.c CommonWin_GetLayoutByType




[1.5] banner
// 5s
DisplayBanner
DisplayControlBanner



[1.6] im
// res--img
res:im/MMI_RES_DEFAULT/IMAG/TOUCH/



[1.7] win
// draw
CommonWin_GetLayoutByType




[1.8] 




[1.9] anim, common
// res--anim(charge)
res:common/MMI_RES_DEFAULT/ANIM/WATCH_INDICATOR_ANIM/
// res--bt, btn bg
res:common/MMI_RES_DEFAULT/IMAG/Common/
// res--img
res:common/MMI_RES_DEFAULT/IMAG/Edit/Editpad/
res:common/MMI_RES_DEFAULT/IMAG/Launcher/
res:common/MMI_RES_DEFAULT/IMAG/List/
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/
res:common/MMI_RES_DEFAULT/IMAG/Scrollkey/
res:common/MMI_RES_DEFAULT/IMAG/key_lock/effect1/
// res--img
res:common/MMI_RES_DEFAULT/IMAG/Scrollkey/
res:clock/MMI_RES_DEFAULT/IMAG/worldclock/
res:clock/MMI_RES_DEFAULT/IMAG/timer/
res:clipbrd/MMI_RES_DEFAULT/IMAG/



[1.10] make
//
make/app_watch_main/app_watch_macro.mk  MMI_WATCH_UI
make/app_watch_main/release_app_watch_macro.mk  MMI_WATCH_UI

// add .c
make\app_watch_main\app_watch_main.mk  watch_stopwatch



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] dropdown
// res--notification
res:common/MMI_RES_DEFAULT/IMAG/Launcher/
res:dropdownwin/MMI_RES_DEFAULT/IMAG/

// enter
app:launcher\c\watch_launcher_main.c  MMINotifyWin_EnterWin
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_HandleCommonWinMsg

// statusbar
app:dropdownwin\c\mmidropdownwin_main.c  NotifyWin_HandleWinMsg



[2.2] menu
### 1.style (LAUNCHER APP)
// res--menu
res:common/MMI_RES_DEFAULT/IMAG/Launcher/

// enter (no idle)
app:idle\c\mainapp.c  WatchLAUNCHER_Enter
app:mainmenu\c\mainmenu_win.c  WatchLAUNCHER_Enter

// (menu item)
app:slidepage\h\watch_slidepage.h  LAUNCHER_MENU_ID_ALARM
// --list
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_Enter
// --func--单页
app:launcher\c\watch_launcher_main.c  HandleLauncherCallWinMsg
// --func--四宫格
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_MENU4_Enter

// (test)
// common--msg
app:launcher\c\watch_launcher_main.c  WatchLAUNCHER_HandleCommonWinMsg
// common--msg (key test)
app:launcher\c\watch_launcher_main.c  DEBUG_TEST_UI


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
res:spde\MMI_RES_DEFAULT\IMAG\mainmenu

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




[2.3] clock, idle
// res--tool
//res:clock/MMI_RES_DEFAULT/IMAG/timer/
//res:clock/MMI_RES_DEFAULT/IMAG/worldclock/
// res--clock
res:common\MMI_RES_DEFAULT\IMAG\Launcher
// res--time
res:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time


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
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/dialpad/

// dial
app:cc\c\watch_cc_dialpad.c  HandleDialpadWinMsg



[2.5] call
// res--call
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/notification/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/

// call
app:cc/c/watch_cc_view.c  CC_OpenWatchMoCallWin
// draw txt
app:cc/c/watch_cc_view.c  1755



[2.6] cl, pb
// res--img
res:cc/MMI_RES_DEFAULT/IMAG/callog/watch/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/portrait/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/volte/
res:cc/MMI_RES_DEFAULT/IMAG/cc/Mt_lock/

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



[2.7] sms
// res--img
res:sms/MMI_RES_DEFAULT/IMAG/watch/

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
res:record/MMI_RES_DEFAULT/IMAG/
res:record/MMI_RES_DEFAULT/ANIM/ANIM_RECORD_PLAY/

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
res:pb/MMI_RES_DEFAULT/IMAG/contact^portrait/
res:pic_viewer/MMI_RES_DEFAULT/IMAG/
//
app:pic_viewer\c\watch_gallery_main.c  HandleGalleryMainWinMsg
app:pic_viewer\c\watch_gallery_main.c  Gallery_Pic_HandleMsg
// draw
Gallery_DisplayFilePreview();
// btn
GallerySetPicBtnParam



[2.10] camera
// res--img
res:camera/MMI_RES_DEFAULT/IMAG/WATCH/

// dc
Watch_HandleCameraWinMsg
//  MMIAPIDC_Exit()
//  Watch_HandleButtonTpUp
// pic
//	MMIDC_OpenPictureWin





[2.11] alarm
// res--img
res:set/MMI_RES_DEFAULT/IMAG/set_clock/

// enter
app:launcher\c\watch_launcher_main.c  Settings_AlarmListWin_Enter
// --win (3item,1btn)
app:setting\c\watch_set_alarmlist.c  MMISET_ALARM_LIST_WIN_TAB
// --edit time
app:setting\c\watch_set_alarmedit.c  MMISET_ALARM_EDIT_WIN_TAB
// --edit mode
app:setting\c\watch_set_alarmedit.c  MMISET_ALARM_REPEAT_WIN_TAB
// --option (3item)
app:setting\c\watch_set_alarmlist.c  MMISET_ALARM_OPTION_WIN_TAB

// --time
MS_MMI_Main\source\mmi_ctrl\source\Picker\c\ctrltimepicker.c  TimePickerCtrlHandleMsg






[2.12] stopWatch,counttime
### 1.stopWatch
// res--img
res:clock/MMI_RES_DEFAULT/IMAG/stopwatch/

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
// res--img
res:set/MMI_RES_DEFAULT/IMAG/screenlock_style/
res:set/MMI_RES_DEFAULT/IMAG/set_bluetooth/
res:set/MMI_RES_DEFAULT/IMAG/set_brightness/
res:set/MMI_RES_DEFAULT/IMAG/set_clock/
res:set/MMI_RES_DEFAULT/IMAG/set_common/
res:set/MMI_RES_DEFAULT/IMAG/set_main/
res:set/MMI_RES_DEFAULT/IMAG/set_sound/
res:set/MMI_RES_DEFAULT/IMAG/set_volte/
//res:set/MMI_RES_DEFAULT/IMAG/set_wifi/

// main
app:setting\c\watch_set_main.c  HandleSettingsMainWindow

// 1.bn (大图标)
app:setting\c\watch_set_brightness.c  HandleSettingsBrightnessWindow

// 2.bl (rdo)
app:setting\c\watch_set_backlight.c  HandleSettingsBacklightWindow

// 3.sound/next icon
app:setting\c\watch_set_sound.c  HandleSettingsSoundWindow

// 4.clock (img)/(rdo)
app:setting\c\watch_set_clock.c  HandleSettingsClockWindow
app:launcher\c\watch_launcher_editclockwin.c  WatchLAUNCHER_EditClockWin_Enter

// 5.more
app:setting\c\watch_set_more.c  HandleSettingsMoreWindow



[2.14] qrcode
### 1.style
// res--2vm
res:common/MMI_RES_DEFAULT/IMAG/watch/2vm

// enter
app:launcher\c\watch_launcher_main.c  Watch2VM_MainWin_Enter
app:launcher\c\watch_qrcode_win.c  QRCODE_FILE_NAME


### 2.style
// res--2vm
res:spde\MMI_RES_DEFAULT\IMAG\

// enter
app:spde\c\spde_wintable.c  QRCODE_FILE_NAME



[2.15] other app
// res--menu
res:common/MMI_RES_DEFAULT/IMAG/Launcher/menu4

// 微聊
app:launcher\c\watch_launcher_main.c  WatchWCALL_MainWin_Enter


// 加好友
app:launcher\c\watch_launcher_main.c  WatchWADD_MainWin_Enter


// 计步
res:common/MMI_RES_DEFAULT/IMAG/watch/jibu
app:launcher\c\watch_launcher_main.c  WatchJiBu_MainWin_Enter


// 心率
res:common/MMI_RES_DEFAULT/IMAG/watch/health
app:launcher\c\watch_launcher_main.c  WatchHR_MainWin_Enter


// 体温
res:common/MMI_RES_DEFAULT/IMAG/watch/health
app:launcher\c\watch_launcher_main.c  WatchTemp_MainWin_Enter


// 课程表
app:launcher\c\watch_launcher_main.c  WatchKCB_MainWin_Enter
app:launcher\c\watch_launcher_editclockwin.c  WatchLAUNCHER_EditClockWin_Enter

// 防走丢
app:launcher\c\watch_launcher_main.c  WatchAnti_MainWin_Enter




[2.16] powoff
//
app:phone\c\mmiphone.c  HandleShutDownWinMsg


[2.17] charge
// enter
app:phone\c\mmiphone_charge.c  MMI_RESULT_E^HandleChargeStartInd

// 开机充电
app:launcher\c\watch_charge_win.c  HandleLauncherChargeTipWinMsg

// 关机充电
app:launcher\c\watch_charge_win.c  HandleLauncherChargeWinMsg


[2.18] 


[2.19] 


[2.20] 


[2.21] 


[2.22] 


[2.23] 


[2.24] 


[2.25] 



