
基础路径设置:
//basePath = 
resPath = MS_MMI_Main/source/resource/mmi_res_240x240
res:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_slide_8910.h \[1.1\] btn
Save:node\C\study\Macro_slide_8910.h \[1.2\] list
Save:node\C\study\Macro_slide_8910.h \[1.3\] switch
Save:node\C\study\Macro_slide_8910.h \[1.4\] pubwin
Save:node\C\study\Macro_slide_8910.h \[1.5\] 
Save:node\C\study\Macro_slide_8910.h \[1.6\] 
Save:node\C\study\Macro_slide_8910.h \[1.7\] win
Save:node\C\study\Macro_slide_8910.h \[1.8\] statusbar
Save:node\C\study\Macro_slide_8910.h \[1.9\] anim, common
Save:node\C\study\Macro_slide_8910.h \[1.10\] 
Save:node\C\study\Macro_slide_8910.h \[1.11\] 
Save:node\C\study\Macro_slide_8910.h \[1.12\] 
//
Save:node\C\study\Macro_slide_8910.h \[2.1\] win fun.
Save:node\C\study\Macro_slide_8910.h \[2.2\] dial, call------1
Save:node\C\study\Macro_slide_8910.h \[2.3\] menu
Save:node\C\study\Macro_slide_8910.h \[2.4\] sms-------------6
Save:node\C\study\Macro_slide_8910.h \[2.5\] cl, pb----------2
Save:node\C\study\Macro_slide_8910.h \[2.6\] set-------------7
Save:node\C\study\Macro_slide_8910.h \[2.7\] record, pic-----5
Save:node\C\study\Macro_slide_8910.h \[2.8\] StopWatch
Save:node\C\study\Macro_slide_8910.h \[2.9\] clock, alarm----3
Save:node\C\study\Macro_slide_8910.h \[2.10\] camera---------4
Save:node\C\study\Macro_slide_8910.h \[2.11\] charge
Save:node\C\study\Macro_slide_8910.h \[2.12\] powoff
Save:node\C\study\Macro_slide_8910.h \[2.13\] qrcode---------8
Save:node\C\study\Macro_slide_8910.h \[2.14\] 
Save:node\C\study\Macro_slide_8910.h \[2.15\] 
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
MS_MMI_Main\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_style_small_2str
MS_MMI_Main\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_style_1str_1icon
//   13+155=168, 168+12+24+12=216
// radio rect
MS_MMI_Main\source\mmi_app\app\theme\c\mmitheme_list.c  radio_tag_width


[1.3] switch
//
IMAGE_CONTROL_TOGGLE_ON



[1.4] pubwin
// res--img
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/
// 圆形
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_camera_ic_waiting.png
//
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_notewin_1Line_tip_bg.png
//
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_notewin_2Line_tip_bg.png
//
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/res_watch_querywin_1btn_bg.png


// pub wait
HandleTempWaitWinMsg
HandleDCWaitWinMsg

// rect--pubwin
MS_MMI_Main\source\mmi_app\common\c\watch_commonwin_internal.c CommonWin_GetLayoutByType



[1.5] 



[1.6] 




[1.7] win
// wait
WatchCOM_WaitingWin_1Line_Enter
// draw
CommonWin_GetLayoutByType




[1.8] statusbar
// res--img
res:common/MMI_RES_DEFAULT/IMAG/Launcher/


// enter
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  WatchLAUNCHER_HandleCommonWinMsg

//
MS_MMI_Main\source\mmi_app\app\dropdownwin\c\mmidropdownwin_main.c  NotifyWin_HandleWinMsg




[1.9] anim, common
// res--img
res:common/MMI_RES_DEFAULT/ANIM/WATCH_INDICATOR_ANIM/
res:common/MMI_RES_DEFAULT/IMAG/Common/
res:common/MMI_RES_DEFAULT/IMAG/Edit/Editpad/
res:common/MMI_RES_DEFAULT/IMAG/Launcher/
res:common/MMI_RES_DEFAULT/IMAG/List/
res:common/MMI_RES_DEFAULT/IMAG/Pubwin/BAR/
res:common/MMI_RES_DEFAULT/IMAG/Scrollkey/
res:common/MMI_RES_DEFAULT/IMAG/key_lock/effect1/
res:dropdownwin/MMI_RES_DEFAULT/IMAG/




[1.10] 




[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] win fun.




[2.2] dial, call
// res--img
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/dialpad/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/notification/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/

// dial
MS_MMI_Main\source\mmi_app\app\cc\c\watch_cc_dialpad.c  HandleDialpadWinMsg

// call
MS_MMI_Main/source/mmi_app/app/cc/c/watch_cc_view.c  CC_OpenWatchMoCallWin
// draw txt
MS_MMI_Main/source/mmi_app/app/cc/c/watch_cc_view.c  1755



[2.3] menu
### Enter_1
//
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mainmenu_win.c  MMIAPIMENU_CreatMainMenu
MS_MMI_Main\source\mmi_app\app\spde\c\spde_wintable.c  HandleSPDE_WatchMainMenuWinMsg


### UI_SPDE_APP
// id
MS_MMI_Main\source\mmi_app\app\spde\c\spde_wintable.c  SPDE_MAINMENU_STAT_E;
// icon+txt
MS_MMI_Main\source\mmi_app\app\spde\c\spde_wintable.c  SpdeMenuDlgEventHandlers
// func
MS_MMI_Main\source\mmi_app\app\spde\c\spde_wintable.c  watch_mainmenu_key_enter_hdlr


### UI_LAUNCHER_APP
// list
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  WatchLAUNCHER_Enter
// func
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  HandleLauncherCallWinMsg
// sub--enter
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  WatchSMS_MainMenuWin_Enter
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  Settings_AlarmListWin_Enter
// common--msg
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  WatchLAUNCHER_HandleCommonWinMsg





[2.4] sms
// res--img
res:sms/MMI_RES_DEFAULT/IMAG/watch/

// main
HandleSmsMainMenuListWinMsg
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






[2.5] cl, pb
// res--img
res:cc/MMI_RES_DEFAULT/IMAG/callog/watch/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/portrait/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/
res:cc/MMI_RES_DEFAULT/IMAG/cc/watch/volte/


// main
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_launcher_main.c  HandleLauncherCallWinMsg
// pb
HandlePbMainMenuWinMsg

// cl
HandleClListWinMsg
// icon
CL_ConvertNvInfoToArrayInfo



[2.6] set
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
MS_MMI_Main\source\mmi_app\app\setting\c\watch_set_main.c  HandleSettingsMainWindow

// 1.bn (大图标)
MS_MMI_Main\source\mmi_app\app\setting\c\watch_set_brightness.c  HandleSettingsBrightnessWindow

// 2.bl (rdo)
MS_MMI_Main\source\mmi_app\app\setting\c\watch_set_backlight.c  HandleSettingsBacklightWindow

// 3.sound/next icon
MS_MMI_Main\source\mmi_app\app\setting\c\watch_set_sound.c  HandleSettingsSoundWindow

// 4.clock (img)/(rdo)
MS_MMI_Main\source\mmi_app\app\setting\c\watch_set_clock.c  HandleSettingsClockWindow

// 5.more
MS_MMI_Main\source\mmi_app\app\setting\c\watch_set_more.c  HandleSettingsMoreWindow




[2.7] record
// res--img
res:record/MMI_RES_DEFAULT/IMAG/
res:record/MMI_RES_DEFAULT/ANIM/ANIM_RECORD_PLAY/
res:pb/MMI_RES_DEFAULT/IMAG/contact portrait/
res:pic_viewer/MMI_RES_DEFAULT/IMAG/

## record
// main
MS_MMI_Main\source\mmi_app\app\record\c\watch_record_mainwin.c  HandleRecordMainPlayWinMsg
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

## pic
//
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\watch_gallery_main.c  HandleGalleryMainWinMsg
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\watch_gallery_main.c  Gallery_Pic_HandleMsg
// draw
Gallery_DisplayFilePreview();
// btn
GallerySetPicBtnParam



[2.8] StopWatch
// res--img
res:clock/MMI_RES_DEFAULT/IMAG/stopwatch/



[2.9] clock, alarm
// res--img
res:clock/MMI_RES_DEFAULT/IMAG/timer/
res:clock/MMI_RES_DEFAULT/IMAG/worldclock/

// clock
//   draw 1 模拟
WatchLAUNCHER_DrawAnalogClock
//   draw 2 数字
WatchLAUNCHER_DrawDigitalClock
// set 1/2
HandleLauncherEditClockWinMsg

// alarm
HandleSettingsAlarmListWindow
// edit
HandleSettingsAlarmEditWindow
// --time
TimePickerCtrlHandleMsg




[2.10] camera
// res--img
res:camera/MMI_RES_DEFAULT/IMAG/WATCH/

// dc
Watch_HandleCameraWinMsg
//  MMIAPIDC_Exit()
//  Watch_HandleButtonTpUp
// pic
//	MMIDC_OpenPictureWin






[2.11] charge
// enter
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone_charge.c  MMI_RESULT_E^HandleChargeStartInd

// 开机充电
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_charge_win.c  HandleLauncherChargeTipWinMsg

// 关机充电
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_charge_win.c  HandleLauncherChargeWinMsg



[2.12] powoff
//
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone.c  HandleShutDownWinMsg


[2.13] qrcode
// ui_1
MS_MMI_Main\source\mmi_app\app\spde\c\spde_wintable.c  QRCODE_FILE_NAME

// ui_2
MS_MMI_Main\source\mmi_app\app\launcher\c\watch_qrcode_win.c  a


[2.14] 


[2.15] 


//
BM_CALENDAR
spde_app.c
//
第2套dial风格



