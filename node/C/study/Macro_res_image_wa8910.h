
����·������:
//basePath = 


//Ŀ¼
// 1. 
Save:node\C\study\Macro_res_image_wa8910.h \[1.1\] Logo--���ػ�
Save:node\C\study\Macro_res_image_wa8910.h \[1.2\] MainMenu--���˵�ͼƬ
Save:node\C\study\Macro_res_image_wa8910.h \[1.3\] 
Save:node\C\study\Macro_res_image_wa8910.h \[1.4\] //charger--�ػ�/��綯��
Save:node\C\study\Macro_res_image_wa8910.h \[1.5\] Statusicons
Save:node\C\study\Macro_res_image_wa8910.h \[1.6\] idle/time/
Save:node\C\study\Macro_res_image_wa8910.h \[1.7\] dial
Save:node\C\study\Macro_res_image_wa8910.h \[1.8\] call
Save:node\C\study\Macro_res_image_wa8910.h \[1.9\] pubWin
Save:node\C\study\Macro_res_image_wa8910.h \[1.10\] list---------
Save:node\C\study\Macro_res_image_wa8910.h \[1.11\] anim
Save:node\C\study\Macro_res_image_wa8910.h \[1.12\] common
Save:node\C\study\Macro_res_image_wa8910.h \[1.13\] set
Save:node\C\study\Macro_res_image_wa8910.h \[1.14\] 
Save:node\C\study\Macro_res_image_wa8910.h \[1.15\] 



[1.1] Logo--���ػ�

// logo
prj:resource\logo\
images:\
images:IMAGE_TEMPORARY_BOOTUP_DEFAULT.bmp
images:common\MMI_RES_DEFAULT\IMAG\startup\
images:common\MMI_RES_DEFAULT\IMAG\startup\IMAGE_TEMPORARY_BOOTUP_DEFAULT.png

// gif
app:phone\c\mmiphone_onoff.c  MMI_POWER_ONOFF_ANIM
// --128*160 Ĭ�ϼ��� gif
// MMI_LOW_MEMORY_RESOURCE  # Ӧ����Ĭ�϶���
source:mmi_app\common\h\common_mdu_def.h  MMI_POWER_ONOFF_ANIM
images:common\MMI_RES_DEFAULT\IMAG\Power_on_off\
images:common\MMI_RES_DEFAULT\IMAG\Power_on_off\IMAGE_POWER_ON.gif




[1.2] __mainmenu__--���˵�ͼƬ

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
app:theme\c\mmitheme_mainmenu.c  title_font                              #������
app:mainmenu\c\mmi_mainmenu_matrix.c  GUIWIN_SeSoftkeytButtonTextId      #softkey�Ƕ��
app:mainmenu\c\mmi_mainmenu_matrix.c  font_info.font                     #softkey���btn
// mainmenu color
app:mainmenu\c\mmi_mainmenu_matrix.c  MatrixMenuDisplayActiveItemTitle   #title color



[1.3] Wallpaper--��ֽ
// --��ֽ
app:wallpaper\h\wallpaper_mdu_def.h  IMAGE_WALLPAPER_DEFAULT

// theme
//		==>AnimCtrlHandleMsg
//		====>MSG_CTL_PAINT
//		====>GUIANIM_Display
//		======>FillAnimBg
//		========>anim_ctrl_ptr->display_info.bg->color
//		======>anim_ctrl_ptr->data_info.img_id



[1.4] charger�ػ�/��綯��
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



[1.6] time----������������

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
// --time--black--�׵׺���
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME_BLACK\Idle_time\
// --time--default--�ڵװ���
images:common\MMI_RES_DEFAULT\IMAG\Idle_time\


// --lock time
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_NUM_COLON
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_NUM_AM
//
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time\
//images:common\MMI_RES_DEFAULT\IMAG\key_lock\


// --lock time--diff
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_NUM_AM_CN
// --�ڵװ���
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME\Idle_time\
// --����
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
// call--sim1--122*122--��ʾ��ȫ
//		==>CC_HandleFlymodeEccWinMsg
app:cc\h\cc_mdu_def.h  IMAGE_CALLUI_EMERGENCYCALL


// call--volte--20*20
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CALLING_VOLTE
// call--sim1--16*16
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CUSTOM_SIM1_SMALL


// --ͬ��
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SETTINGS_SIM1_ICON

// make call--select--24*24
//		==>HandleCallSIMSelectWinMsg
//		====>IMAGE_CL_SIM_1

// call--����ͨ��--sim1-- 24*24
//		====>IMAGE_CL_SIM_1
// call--����ͨ��--avatar-- 38*38
//		====>IMAGE_CC_AVATAR_UNKNOWN_SMALL
app:cc\h\cc_mdu_def.h  IMAGE_CC_AVATAR_UNKNOWN_SMALL
//  --bg--40*40
source:mmi_app\common\h\common_mdu_def.h  IMAGE_LISTITEM_AVATAR_MASK_RED

// call--bt--30*30
app:cc\h\cc_mdu_def.h  IMAGE_CALLUI_BT
app:cc\h\cc_mdu_def.h  IMAGE_CALLUI_BT_BLACK





[1.9] __pubWin__
// vol--bg
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\IMAGE_COMMON_PLAYER_PANEL_BG.png

// lock--bg
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\IMAGE_PUBWIN_BG.png

//
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\
images:common\MMI_RES_DEFAULT\IMAG\Common\
images:common\MMI_RES_DEFAULT\ANIM\

// vol--bg--228*220
source:mmi_app\common\h\common_mdu_def.h  IMAGE_PUBWIN_BG_B
// vol--bg--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_PLAYER_PANEL_BG


// mp3--format err--tips
// --w--��--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_TIPS_BG2
// --b--��--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_TIPS_BG

// anim--bg--30*30
source:mmi_app\common\h\common_mdu_def.h  ANIM_PUBWIN_WAIT_PDA



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
### __tab__
images:common\MMI_RES_DEFAULT\IMAG\Tab\

// 
//	IMAGE_CONTROL_TAB_DEFAULT
//	IMAGE_TAB_BG
//	// sms--box--tab

// tab--line--theme
app:theme\c\mmitheme_tab.c  dividing_line = IMAGE_TAB_LINE
app:theme\c\mmitheme_tab.c  height_bg_info.img_id = IMAGE_TAB_SELECT1

// tab--line--2*38 (font30)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_SEPARATED_FONT30
// tab--line--2*30
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_SEPARATED

// tab--select--1*32, 1*40 (�߶ȿɲ���)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_TAB_SELECT1

// tab--bg--1*40
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_DEFAULT_FONT30
// tab--bg--1*32 (�߶�Ҫ��)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_DEFAULT_B


### __title__
images:common\MMI_RES_DEFAULT\IMAG\Title\

// title--bg--1*35
source:mmi_app\common\h\common_mdu_def.h  IMAGE_TITLE_BAR
// title--bg--1*72
source:mmi_app\common\h\common_mdu_def.h  IMAGE_TITLE_BAR2
// title--bg--240*32
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_TITLE_BAR


### __num__
images:common\MMI_RES_DEFAULT\IMAG\Number\
images:common\MMI_RES_DEFAULT\IMAG\Number_blue\

//		====>MMI_LIST_NUM_IMG_BLUE_STYLE       # ѡ��������ͬʱ��
// num--24*24
source:mmi_app\common\h\common_mdu_def.h  Number_blue




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



[1.14] 




[1.15] 


