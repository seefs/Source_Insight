
基础路径设置:
//basePath = 


//目录
// 1. 
Save:node\C\study\Macro_res_image_wa8910.h \[1.1\] //Logo--开关机
Save:node\C\study\Macro_res_image_wa8910.h \[1.2\] //MainMenu--主菜单图片
Save:node\C\study\Macro_res_image_wa8910.h \[1.3\] 
Save:node\C\study\Macro_res_image_wa8910.h \[1.4\] //charger--关机/充电动画
Save:node\C\study\Macro_res_image_wa8910.h \[1.5\] //Statusicons
Save:node\C\study\Macro_res_image_wa8910.h \[1.6\] //idle/time/
Save:node\C\study\Macro_res_image_wa8910.h \[1.7\] //dial
Save:node\C\study\Macro_res_image_wa8910.h \[1.8\] //call
Save:node\C\study\Macro_res_image_wa8910.h \[1.9\] pubWin
Save:node\C\study\Macro_res_image_wa8910.h \[1.10\] list---------
Save:node\C\study\Macro_res_image_wa8910.h \[1.11\] //anim
Save:node\C\study\Macro_res_image_wa8910.h \[1.12\] common
Save:node\C\study\Macro_res_image_wa8910.h \[1.13\] set
Save:node\C\study\Macro_res_image_wa8910.h \[1.14\] tool
Save:node\C\study\Macro_res_image_wa8910.h \[1.15\] app
Save:node\C\study\Macro_res_image_wa8910.h \[1.16\] 
Save:node\C\study\Macro_res_image_wa8910.h \[1.17\] 
Save:node\C\study\Macro_res_image_wa8910.h \[1.18\] 



[1.1] Logo--开关机

// logo
prj:resource\logo\
images:\
images:IMAGE_TEMPORARY_BOOTUP_DEFAULT.bmp
images:common\MMI_RES_DEFAULT\IMAG\startup\
images:common\MMI_RES_DEFAULT\IMAG\startup\IMAGE_TEMPORARY_BOOTUP_DEFAULT.png

// gif
app:phone\c\mmiphone_onoff.c  MMI_POWER_ONOFF_ANIM
// --128*160 默认加载 gif
// MMI_LOW_MEMORY_RESOURCE  # 应该是默认定义
source:mmi_app\common\h\common_mdu_def.h  MMI_POWER_ONOFF_ANIM
images:common\MMI_RES_DEFAULT\IMAG\Power_on_off\
images:common\MMI_RES_DEFAULT\IMAG\Power_on_off\IMAGE_POWER_ON.gif




[1.2] __mainmenu__--主菜单图片

// -- 107
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_page\
// -- 8910--page
images:common\MMI_RES_DEFAULT\IMAG\main_menu\
// -- 8910--4X3
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_matrix12\
// -- 8910--3X3
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_matrix9\

// -- 107
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_ICON_BROWSER
// -- 8910 4X3
//		==>CUR_MDU_FOLDER
//		====>ListHandleKeyDown
//		======>ListMoveToNextItem
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_ICON_ENV
// -- menu--path
source:mmi_app\common\h\common_mdu_def.h  CUR_MDU_FOLDER


// mainmenu bg
//		==>.bg_image
app:theme/c/mmitheme_mainmenu.c  IMAGE_THEME_BG
// mainmenu item bg
//		==>
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_ITEM_TEXT_BG
// mainmenu sfk bg
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_SOFTKEY_BG

// mainmenu font
app:theme\c\mmitheme_mainmenu.c  title_font                              #主标题
app:mainmenu\c\mmi_mainmenu_matrix.c  GUIWIN_SeSoftkeytButtonTextId      #softkey非多层
app:mainmenu\c\mmi_mainmenu_matrix.c  font_info.font                     #softkey多层btn
// mainmenu color
app:mainmenu\c\mmi_mainmenu_matrix.c  MatrixMenuDisplayActiveItemTitle   #title color



[1.3] Wallpaper--壁纸
// --壁纸
app:wallpaper\h\wallpaper_mdu_def.h  IMAGE_WALLPAPER_DEFAULT

// theme
//		==>AnimCtrlHandleMsg
//		====>MSG_CTL_PAINT
//		====>GUIANIM_Display
//		======>FillAnimBg
//		========>anim_ctrl_ptr->display_info.bg->color
//		======>anim_ctrl_ptr->data_info.img_id



[1.4] charger关机/充电动画
###   __charge__
// power--bg--160*128, 160*128, 160*40
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_TIME_BG
images:common\MMI_RES_DEFAULT\IMAG\key_lock\

//
//	IMAGE_IDLE_KEYLOCK_NUM_AM


[1.5] Statusicons
// --status
prj:project_{cur}.mk   MMI_STATUSBAR_ICON_BLACK
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\

// --status--bg
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_STATUSBAR_BG
images:\common\MMI_RES_DEFAULT\IMAG\Statusbar\
//
app:theme\c\mmitheme_statusbar.c  IMAGE_STATUS_BAR

// --bat
source:mmi_app\common\h\common_mdu_def.h  battery_syle1
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\battery_syle1\

// --bat--sub
source:mmi_app\common\h\common_mdu_def.h  SUBIDLE_ICON_BATTERIES_CHARGE1
images:common\MMI_RES_DEFAULT\IMAG\SUBLCD_SIZE_128_160\sub_icon\

// --tcard-ex
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_BLACKLIST_STATUSBAR_ICON
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\IMAGE_IDLE_TITLE_ICON_SD.png

// --sim
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_ICON_NO_SIM1
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\battery_syle1\



[1.6] time----拨号日期锁屏

// __idle__ (smart)
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time\
images:common\MMI_RES_DEFAULT\IMAG\Idle_shortcut\
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\idle_prompt\
images:common\MMI_RES_DEFAULT\IMAG\idle_prompt\
images:common\MMI_RES_DEFAULT\IMAG\key_lock\
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\
images:common\MMI_RES_DEFAULT\IMAG\Common\


### smart
// --smart--time
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_TIME_0
// --smart--shortcur--40*41
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_SHORTCUT_SELECT
// --smart--time
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_PROMPT_SIM1
// --smart--sim--line--320*1
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_PROMPT_LINE
// --smart--focus--30*36
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_TIPS_BG
// --smart--softkey
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_MIDDLE_SOFTKEY_ICON

// --smart--select
//		==>DisplayLineAndSelImg
//		====>LCD_FillRoundedRect        # 8910
//		====>IMAGE_COMMON_SELECTED_BAR  # 6300
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_SELECTED_BAR


// __time__
source:mmi_app\common\h\common_mdu_def.h  IDLE_BLACK_FONT
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_TIME_AM
// --time--black--白底黑字
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME_BLACK\Idle_time\
// --time--default--黑底白字
images:common\MMI_RES_DEFAULT\IMAG\Idle_time\


// --lock time
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_NUM_COLON
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_NUM_AM
//
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time\
//images:common\MMI_RES_DEFAULT\IMAG\key_lock\


// --lock time--diff
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_NUM_AM_CN
// --黑底白字
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time\
// --白字
images:common\MMI_RES_DEFAULT\IMAG\key_lock\

// --sim--18*18
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CUSTOM_SIM1
images:common\MMI_RES_DEFAULT\IMAG\toolkit\







[1.7] 
### __Dial__
source:mmi_app\common\h\common_mdu_def.h  Callnum
// B,56*88
images:common\MMI_RES_DEFAULT\IMAG\Dial\Callnum\
// S,36*52
images:common\MMI_RES_DEFAULT\IMAG\Dial\CallnumS\




[1.8] __call__
//
images:cc\MMI_RES_DEFAULT\IMAG\cc\
images:common\MMI_RES_DEFAULT\IMAG\toolkit\
images:common\MMI_RES_DEFAULT\IMAG\settings\

// call--gif--1X20
app:cc\h\cc_mdu_def.h  IMAGE_CC_CALL_PHOTO_ANIM
app:cc\h\cc_mdu_def.h  IMAGE_CC_CALLING_PHOTO_ANIM
app:cc\h\cc_mdu_def.h  IMAGE_CC_INCOMING_PHOTO_ANIM
app:cc\h\cc_mdu_def.h  IMAGE_CC_DISCONNECTED_PHOTO_ANIM

// call--photo--
app:cc\h\cc_mdu_def.h  IAMGE_CALL_DEFAULT_PHOTO  80X80
app:cc\h\cc_mdu_def.h  IAMGE_CALL_HOLD_DEFAULT_PHOTO_PDA  50X50
app:cc\c\mmicc_wintab.c  IMAGE_CC_INCOMING_PHOTO_ANIM
// call--sim1--122*122--显示不全
//		==>CC_HandleFlymodeEccWinMsg
app:cc\h\cc_mdu_def.h  IMAGE_CALLUI_EMERGENCYCALL


// call--volte--20*20
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CALLING_VOLTE
// call--sim1--16*16
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CUSTOM_SIM1_SMALL


// --同名
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SETTINGS_SIM1_ICON

// make call--select--24*24
//		==>HandleCallSIMSelectWinMsg
//		====>IMAGE_CL_SIM_1

// call--单独通话--sim1-- 24*24
//		====>IMAGE_CL_SIM_1
// call--单独通话--avatar-- 38*38
//		====>IMAGE_CC_AVATAR_UNKNOWN_SMALL
app:cc\h\cc_mdu_def.h  IMAGE_CC_AVATAR_UNKNOWN_SMALL
//  --bg--40*40
source:mmi_app\common\h\common_mdu_def.h  IMAGE_LISTITEM_AVATAR_MASK_RED

// call--bt--30*30
app:cc\h\cc_mdu_def.h  IMAGE_CALLUI_BT
app:cc\h\cc_mdu_def.h  IMAGE_CALLUI_BT_BLACK





[1.9] __pubWin__

### __btn__
images:set/MMI_RES_DEFAULT/IMAG/set_common/
images:common/MMI_RES_DEFAULT/IMAG/Common/


// 1btn--216*48
//		==>PairDevice (bt)
//		====>WatchCOM_QueryWin_1Btn_Enter
source:mmi_app\common\h\common_mdu_def.h  image_watch_single_button
//		==>CommonWin_GetLayoutByType
//		====>WATCH_QUERYWIN_BTN_1BTN_RECT

// 1btn_2str-- (no use)
//		==>PHONE_OpenInputPinWindow (pin)
//		====>WatchCOM_QueryWin_1Btn_With2Str_Enter
source:mmi_app\common\h\common_mdu_def.h  image_watch_single_button
//		==>CommonWin_GetLayoutByType
//		====>WATCH_COMMONWIN_TYPE_QUERY_1BTN_WITH2STR


// 2btn--60*60
app:setting\h\set_mdu_def.h  IMAGE_SET_COM_BTN_FIXED
//		====>WATCH_QUERYWIN_TEXT_2BTN_RECT
source:mmi_app\common\h\watch_commonwin_internal.h  WATCH_QUERYWIN_TEXT_2BTN_RECT




[1.10] list
### __list__
images:common\MMI_RES_DEFAULT\IMAG\List\
images:set/MMI_RES_DEFAULT/IMAG/set_sound/



// set--sound--list--24*24
app:setting\h\set_mdu_def.h  res_setting_ic_list_right


//
//		==>WatchCOM_ListItem_Draw_1Str_1Icon
app:setting\c\watch_set_sound.c  IMAGE_SET_SOUND_LIST_RIGHT



[1.11] anim
// anim
source:mmi_app\common\h\common_mdu_def.h  ANIM_PUBWIN_WAIT_PDA
// 240*320
images:common\MMI_RES_DEFAULT\ANIM\ANIM_PUBWIN_WAIT_PDA\
// 128*160
images:common\MMI_RES_DEFAULT\ANIM\ANIM_PUBWIN_WAIT\

// pubwin
source:mmi_app\common\h\common_mdu_def.h  IMAGE_PUBWIN_BG_LIGHT
//
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\



[1.12] common

### 


### __btn__
images:set/MMI_RES_DEFAULT/IMAG/set_common/

// btn--60*60
app:setting\h\set_mdu_def.h  IMAGE_SET_COM_BTN_CANCEL


[1.13] __set__
// res--img
images:set/MMI_RES_DEFAULT/IMAG/screenlock_style/
images:set/MMI_RES_DEFAULT/IMAG/set_bluetooth/
images:set/MMI_RES_DEFAULT/IMAG/set_brightness/
images:set/MMI_RES_DEFAULT/IMAG/set_clock/
images:set/MMI_RES_DEFAULT/IMAG/set_common/
images:set/MMI_RES_DEFAULT/IMAG/set_main/
images:set/MMI_RES_DEFAULT/IMAG/set_sound/
images:set/MMI_RES_DEFAULT/IMAG/set_volte/
//images:set/MMI_RES_DEFAULT/IMAG/set_wifi/



// set--main--list--36*36
app:setting\h\set_mdu_def.h  res_setting_ic_alarm

// set--bn--112*112
app:setting\h\set_mdu_def.h  IMAGE_SET_BRIGHTNESS_INTENSITY_00



[1.14] tool

### __alarm__
// res--img
images:set/MMI_RES_DEFAULT/IMAG/set_clock/
images:common/MMI_RES_DEFAULT/IMAG/Common/
images:common/MMI_RES_DEFAULT/IMAG/List/


// --alarm--list--36*36
app:setting\h\set_mdu_def.h  IMAGE_SET_ALARM_ON


// --alarm--pubwin--76*76
app:setting\h\set_mdu_def.h  res_clock_ic_clock_ring
// --alarm--pubwin--55*24  102*48 
source:mmi_app\common\h\common_mdu_def.h  image_watch_double_button
// --alarm--pubwin--116*24 216*48 
source:mmi_app\common\h\common_mdu_def.h  image_watch_single_button


### no use
// --
source:mmi_app\common\h\common_mdu_def.h  common_list_disp_more
// --idle--sfk--16*16
source:mmi_app\common\h\common_mdu_def.h  image_common_swap_delete
// --240*60
source:mmi_app\common\h\common_mdu_def.h  image_watch_list_bg
// --240*80
source:mmi_app\common\h\common_mdu_def.h  image_watch_list_highlight_bg


[1.15] app

### __hr__
images:common\MMI_RES_DEFAULT\IMAG\watch\
images:common\MMI_RES_DEFAULT\IMAG\watch\hr\
// 240*284
source:mmi_app\common\h\common_mdu_def.h  res_watch_wrists_off
// 240*280
source:mmi_app\common\h\common_mdu_def.h  res_watch_hr_begin





[1.16] 




[1.17] 













