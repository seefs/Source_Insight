
//basePath = 

//目录
// 1. 
Save:node\C\study\Macro_res_image_wa8910.h \[1.1\] gui
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



[1.1] gui

// __btn__
// btn bg
res_single_button_transparency
res_double_button_transparency


//__switch__
//
IMAGE_CONTROL_TOGGLE_ON


//__im__
// res--img
images:im/MMI_RES_DEFAULT/IMAG/TOUCH/


//__status__
images:common/MMI_RES_DEFAULT/IMAG/Launcher/
//
res_stat_battery_0


[1.2] 

### __dropdown__
// res--notification
images:common/MMI_RES_DEFAULT/IMAG/Launcher/
images:dropdownwin/
images:dropdownwin/MMI_RES_DEFAULT/IMAG/
//
app:dropdownwin\h\dropdownwin_mdu_def.h  IMAGE_DROPDOWN_BG



[1.3] 



[1.4] 


[1.5] 



[1.6] 







[1.7] 




[1.8] 





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













