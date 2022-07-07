
基础路径设置:
//basePath = 

//目录
// 1. 
Save:node\C\study\Macro_res_image_8910.h \[1.1\] Logo--开关机
Save:node\C\study\Macro_res_image_8910.h \[1.2\] MainMenu--主菜单图片
Save:node\C\study\Macro_res_image_8910.h \[1.3\] Wallpaper--壁纸
Save:node\C\study\Macro_res_image_8910.h \[1.4\] //charger--关机/充电动画
Save:node\C\study\Macro_res_image_8910.h \[1.5\] Statusicons
Save:node\C\study\Macro_res_image_8910.h \[1.6\] idle/time--拨号日期锁屏
Save:node\C\study\Macro_res_image_8910.h \[1.7\] mp3
Save:node\C\study\Macro_res_image_8910.h \[1.8\] call
Save:node\C\study\Macro_res_image_8910.h \[1.9\] alert
Save:node\C\study\Macro_res_image_8910.h \[1.10\] list, file
Save:node\C\study\Macro_res_image_8910.h \[1.11\] anim
Save:node\C\study\Macro_res_image_8910.h \[1.12\] browser
Save:node\C\study\Macro_res_image_8910.h \[1.13\] sec_menu
Save:node\C\study\Macro_res_image_8910.h \[1.14\] record--------------非common模块
Save:node\C\study\Macro_res_image_8910.h \[1.15\] vp
Save:node\C\study\Macro_res_image_8910.h \[1.16\] 
Save:node\C\study\Macro_res_image_8910.h \[1.17\] set
Save:node\C\study\Macro_res_image_8910.h \[1.18\] pic
Save:node\C\study\Macro_res_image_8910.h \[1.19\] fm
Save:node\C\study\Macro_res_image_8910.h \[1.20\] calc
Save:node\C\study\Macro_res_image_8910.h \[1.21\] alarm
Save:node\C\study\Macro_res_image_8910.h \[1.22\] pb
Save:node\C\study\Macro_res_image_8910.h \[1.23\] cl------------------sim
Save:node\C\study\Macro_res_image_8910.h \[1.24\] common--------------
Save:node\C\study\Macro_res_image_8910.h \[1.25\] pubWin
Save:node\C\study\Macro_res_image_8910.h \[1.26\] browser
Save:node\C\study\Macro_res_image_8910.h \[1.27\] calen
Save:node\C\study\Macro_res_image_8910.h \[1.28\] 
Save:node\C\study\Macro_res_image_8910.h \[1.29\] 
Save:node\C\study\Macro_res_image_8910.h \[1.30\] 




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




### __Dial__
source:mmi_app\common\h\common_mdu_def.h  Callnum
// B,56*88
images:common\MMI_RES_DEFAULT\IMAG\Dial\Callnum\
// S,36*52
images:common\MMI_RES_DEFAULT\IMAG\Dial\CallnumS\



[1.7] mp3

### __mp3__
images:audioplayer\MMI_RES_DEFAULT\IMAG\L680_new_music\
images:audioplayer\MMI_RES_DEFAULT\IMAG\
images:audioplayer\MMI_RES_DEFAULT\IMAG\new\

// mp3--bg--1X1
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_ALBUM_BG

// new--vol,26*10
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_AP_DEFAULT_ALBUM_IMG

// new--title--修改重叠 (竖屏时使用)--240X52
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_AP_TITLE_BG
// old--title
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_AP_TITLE_BG_B
// new--fileInfo--1X22
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_OSD_BG_UP

// new--btn--bg--160X44
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MUSIC_BUTTON_BG2
// new--Progress--bg
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MULTIM_PLAYER_PROCESS_GROOVE_AUDIO
// new--Progress--1X4
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MULTIM_PLAYER_PROCESS_AUDIO_1
// new--Progress--16X16
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_PROCESS_SLIDE_REVIEW
// new--Progress--1X1 不知道什么用
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_PROCESS_REVIEW

// old--Progress
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_COMMON_PLAYER_PROCESS_SLIDE



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





[1.9] __alert__
// vol--bg
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\IMAGE_COMMON_PLAYER_PANEL_BG.png

// lock--bg
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\IMAGE_PUBWIN_BG.png



[1.10] list
### __list__
images:common\MMI_RES_DEFAULT\IMAG\Number\
images:common\MMI_RES_DEFAULT\IMAG\List\

// 24*24
// 18*18
source:mmi_app\common\h\common_mdu_def.h  IMAGE_NUMBER_1

// HL image
gui:listbox/c/guilistbox.c  GUIITEM_DATA_IMAGE_ID


### __file__
images:files_manager\MMI_RES_DEFAULT\IMAG\
//		==>LoadItemToList
//		====>IMAGE_FMM_FOLDER
// 24*24
app:fmm\h\files_manager_mdu_def.h  IMAGE_FILE_EXPLORER_FOLDER


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



[1.12] browser
//--browser--bar--bg
app:browser\h\browser_mdu_def.h  IMAGE_BROWSER_SEARCH_BAR_BG
app:browser\h\browser_mdu_def.h  IMAGE_BROWSER_STARTPAGE_LABEL_BG
//--36==>40, 30==>32
images:browser\MMI_RES_DEFAULT\IMAG\input_new\




[1.13] sec_menu
//
images:common\MMI_RES_DEFAULT\IMAG\Secondmenu_icon\

// sms
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_MESSAGE_INBOX

// play
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_MULTIM_MEDIA

// tool
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_PHONESET_TIMEDATE

// set
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_SET_SECURITY




[1.14] __record__
//
images:record\MMI_RES_DEFAULT\IMAG\
images:record\MMI_RES_DEFAULT\IMAG\new\


### 8910
// record--numbg--黄色?--1*130
app:record\h\record_mdu_def.h  IMAGE_RECORD_NUMBER_BG

// record--anim--bg--175X156
app:record\h\record_mdu_def.h  IMAGE_RECORD_INDICATOR
app:record\h\record_mdu_def.h  IMAGE_VOICE_RECORDER_RECORDING_1_NEW


### 107
// record--playbg--OSD--20
app:record\h\record_mdu_def.h  IMAGE_RECORD_PLAY_BK_BG

// record--process--multim--1X2
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_PLAYER_PROCESS_GROOVE

// record--bg--1X1----全屏
app:record\h\record_mdu_def.h  IMAGE_RECORD_RECORD_PDA_BG

// record--bg--41X46----
app:record\h\record_mdu_def.h  IMAGE_RECORD_RECORD_BG


#####
//time
app:record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_0  

// bg
app:record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_BG			  
app:record\c\mmirecord_wintab.c IMAGE_COMMON_BG			
app:record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_PDA_BG   
// bg-w
app:record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_BG   
app:record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BK_BG  
// anim
app:record\c\mmirecord_wintab.c IMAGE_RECORD_BG_ANIM_FRAME_1		  
app:record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BTN_UNSEL 




[1.15] __vp__
//
images:videoplayer\MMI_RES_DEFAULT\IMAG\new\
images:multim\MMI_RES_DEFAULT\IMAG\
images:multim\MMI_RES_DEFAULT\IMAG\BLACK\
images:audioplayer\MMI_RES_DEFAULT\IMAG\new\

// vp--title--bg--1X20
app:videoplayer\h\videoplayer_mdu_def.h  IMAGE_VP_TITLE_BAR
app:videoplayer\h\videoplayer_mdu_def.h  IMAGE_VP_PROCESSBAR_BG


// vp--title--ic--换黑色一套
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_BTN_REPEAT_OFF

### vp--btn--
// 2/3/4--ic
// --红色mp3_10*10 (err)
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_MUSIC_MAIN_SMALL_PLAY2_GRAY
// --黑色/白色16*16
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_BTN_PLAY_GREY

// 1--opt
// --红色16*16
app:videoplayer\h\videoplayer_mdu_def.h  IMAGE_VP_BTN_OPT
// --黑色16*16
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_BTN_OPTION

// 5--stop/canel
// --红色方块10*10 (err)
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_MUSIC_MAIN_SMALL_STOP
// --黑色方块16*16
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_BTN_STOP
// --红色方块16*16
app:videoplayer\h\videoplayer_mdu_def.h  IMAGE_VP_BTN_RETURN
// --黑色方块16*16
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_BTN_RETURN



[1.16] 

[1.17] __set__
//
images:common\MMI_RES_DEFAULT\IMAG\List\

// bt--check
source:mmi_app\common\h\common_mdu_def.h   IMAGE_CONTROL_LIST_CHECK_DISABLED



[1.18] __pic__

//
images:pic_viewer\MMI_RES_DEFAULT\IMAG\

// pic--def
app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_PICVIEW_FOLDER_DEFAULT_ICON_BLACK
//app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_PICVIEW_PIC_ERROR_ICON_BLACK


[1.19] __fm__
//
images:fm\MMI_RES_DEFAULT\IMAG\
images:fm\MMI_RES_DEFAULT\IMAG\fm_new\

// fm--anim--bg--320*80
app:fm\h\fm_mdu_def.h  IMAGE_FM_ADJ_BG


[1.20] __calc__
images:tools\MMI_RES_DEFAULT\IMAG\calculator\B\
// calc--num--bg--1*1
app:accessory\h\tools_mdu_def.h  IMAGE_CALC_NUMBER_BACKGROUND_BAR


[1.21] __alarm__
images:clock\MMI_RES_DEFAULT\IMAG\Alarm\

// alarm--week--bg--33*40
app:accessory\h\clock_mdu_def.h  IMAGE_CLOCK_ALARM_WEEK_ENABLED


[1.22] __pb__
images:pb\MMI_RES_DEFAULT\IMAG\
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\

// pb--sim--18*18
app:pb\h\pb_mdu_def.h  IMAGE_PHONEBOOK_SIM2MEMORY, IMAGE_SIM2
// status--sim--18*18
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SIM2


[1.23] __cl__
//
images:common/MMI_RES_DEFAULT/IMAG/toolkit/
images:cc\MMI_RES_DEFAULT\IMAG\callog\

// idle--sim--16*16
//		==>DisplaySimStatus
//		====>IMAGE_CUSTOM_SIM1
source:mmi_app\common\h\common_mdu_def.h  toolkit\\IMAGE_SIM1
// cl--sim--16*16
//		==>AppendCustomLogListItem
//		====>IMAGE_CUSTOM_SIM1_SMALL
source:mmi_app\common\h\common_mdu_def.h  toolkit\\IMAGE_SIM1_SMALL

// call--sim--select
//		==>HandleCallSIMSelectWinMsg
//		====>IMAGE_CL_PRE_SIM_1   # 24*24
//		====>IMAGE_CL_SIM_1       # 24*24
app:cc\h\cc_mdu_def.h  IMAGE_CL_SIM_1      # 24*24  (cur)
// call--sim--select--
app:cc\h\cc_mdu_def.h  IMAGE_CL_PRE_SIM_1  # 24*24


[1.24] common
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

// tab--select--1*32, 1*40 (高度可不改)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_TAB_SELECT1

// tab--bg--1*40
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_DEFAULT_FONT30
// tab--bg--1*32 (高度要改)
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

//		====>MMI_LIST_NUM_IMG_BLUE_STYLE       # 选中与数字同时改
// num--24*24
source:mmi_app\common\h\common_mdu_def.h  Number_blue




[1.25] __pubWin__
//
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\
images:common\MMI_RES_DEFAULT\IMAG\Common\

// vol--bg--228*220
source:mmi_app\common\h\common_mdu_def.h  IMAGE_PUBWIN_BG_B
// vol--bg--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_PLAYER_PANEL_BG


// mp3--format err--tips--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_TIPS_BG


[1.26] __browser__
//
images:browser\MMI_RES_DEFAULT\IMAG\

// 焦点--11*28
app:browser\h\browser_mdu_def.h   IMAGE_BROWSER_STARTPAGE_LABEL_BG_FOCUSED
// 非焦点--11*28
app:browser\h\browser_mdu_def.h   IMAGE_BROWSER_STARTPAGE_LABEL_BG

// search--1*1
app:browser\h\browser_mdu_def.h   IMAGE_BROWSER_SEARCH_BAR_BG

// 同时改 label 高度
MMI_LIST_ITEM_LEFT_MARGIN
MMIBROWSER_STARTPAGE_FORM1_HEIGHT


[1.27] __calen__
//
images:clock\MMI_RES_DEFAULT\IMAG\Calendar\

// 2x2
app:accessory\h\clock_mdu_def.h  IMAGE_CLOCK_CALENDAR_BG



[1.28] 


[1.29] 



[1.30] 


