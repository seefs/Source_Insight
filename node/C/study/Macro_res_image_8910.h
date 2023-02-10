
//basePath = 

//目录
// 1. 
Save:node\C\study\Macro_res_image_8910.h \[1.1\] Logo--开关机
Save:node\C\study\Macro_res_image_8910.h \[1.2\] MainMenu--主菜单图片
Save:node\C\study\Macro_res_image_8910.h \[1.3\] Wallpaper--壁纸
Save:node\C\study\Macro_res_image_8910.h \[1.4\] //charger--关机/充电动画
Save:node\C\study\Macro_res_image_8910.h \[1.5\] Statusicons
Save:node\C\study\Macro_res_image_8910.h \[1.6\] idle/time/dial
Save:node\C\study\Macro_res_image_8910.h \[1.7\] mp3
Save:node\C\study\Macro_res_image_8910.h \[1.8\] call
Save:node\C\study\Macro_res_image_8910.h \[1.9\] alert
Save:node\C\study\Macro_res_image_8910.h \[1.10\] list, file
Save:node\C\study\Macro_res_image_8910.h \[1.11\] anim
Save:node\C\study\Macro_res_image_8910.h \[1.12\] 
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
Save:node\C\study\Macro_res_image_8910.h \[1.26\] browser,bt
Save:node\C\study\Macro_res_image_8910.h \[1.27\] calen
Save:node\C\study\Macro_res_image_8910.h \[1.28\] memo
Save:node\C\study\Macro_res_image_8910.h \[1.29\] bt
Save:node\C\study\Macro_res_image_8910.h \[1.30\] 




[1.1] Logo--开关机
//
prj:project_{cur}.mk   MMI_POWER_ONOFF_ANIM    # 动画
prj:project_{cur}.mk   NOKIA_POWERONOFF_PATCH  # nv
prj:project_{cur}.mk   SECOND_LOGO
prj:project_{cur}.mk   FOUR_LOGO


### logo
prj:resource\logo\
images:\

//		==>.bmp/default
source:resource/mmi_res_prj_def.h  IMAGE_TEMPORARY_BOOTUP_DEFAULT
//		==>.bmp
source:resource/mmi_res_prj_def.h  LOGO_S2


### startup
images:common\MMI_RES_DEFAULT\IMAG\startup\
images:common\MMI_RES_DEFAULT\IMAG\Power_on_off\
Save:node\C\study\Macro_gui_8910.h  __SECOND_LOGO__
// --png/default
source:mmi_app/common/h/common_mdu_def.h  IMAGE_TEMPORARY_BOOTUP_DEFAULT
// --png
source:mmi_app/common/h/common_mdu_def.h  IMAGE_POWER_ON_NM
// --gif/default
source:resource/mmi_res_prj_def.h  IMAGE_POWER_ON
// --gif
source:resource/mmi_res_prj_def.h  MORE_LOGO

//		==>info
app:phone\c\mmiphone_onoff.c  MMI_POWER_ONOFF_ANIM



### ring
source:resource\Common\RING\
Save:node\C\study\Macro_res_ring_8910.h  __power__

//		==>.mp3
source:resource/mmi_res_prj_def.h  R_POWER_NCN_ON
//		==>ID
app:setting\h\mmiset_export.h  MMI_POWER_RING_ITEM1_ON_ID
//		==>info
app:setting\c\mmiset_ring.c   MMI_POWER_RING_ITEM1_ON_ID


[1.2] __mainmenu__--主菜单图片

// -- 107
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_page\
images:common\MMI_RES_DEFAULT\IMAG\mainmenu\
// -- 107--3X4
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_slim\
// -- 8910--page
images:common\MMI_RES_DEFAULT\IMAG\main_menu\
// -- 8910--4X3
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_matrix12\
// -- 8910--3X3
images:common\MMI_RES_DEFAULT\IMAG\mainmenu_matrix9\

// -- 107
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_ICON_BROWSER
// -- 8910 4X3
//		==>CUR_MDU_FOLDER          # mainmenu_matrix12
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

// memo
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_ICON_NOTE
// asp
source:mmi_app\common\h\common_mdu_def.h  IMAGE_MAINMENU_ICON_CALL_RECORD


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

// idle--wallpaper
//		==>IdleWin_HandleMsg
//		====>OPEN:
//		======>MMIAPIIDLE_CreatWallpaperCtrl
//		========>MMIAPIIDLE_SetInitWallpaper
//		==========>CreatWallpaperCtrl
//		======>.wallpaper_info.wallpaper_type
//		======>GUIWIN_SetStbBgImageId
// lock--wallpaper
//		==>MMIKL_HandleKLDispWinMsg
//		====>FOCUS:
//		======>MMIKL_CreatWallpaperCtrl
//		====>SetKeyLockControlParam
//		======>GUIANIM_SetOwnerDraw



[1.4] charger关机/充电动画
###   __charge__
images:common\MMI_RES_DEFAULT\IMAG\key_lock\
// power--bg--160*128, 160*128, 160*40
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_KEYLOCK_TIME_BG

//
//	IMAGE_IDLE_KEYLOCK_NUM_AM

###  __sublcd__
images:common\MMI_RES_DEFAULT\IMAG\SUBLCD_SIZE_128_160\StatusbarIcon\
// bg--128*160
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SUBLCD_ICON_BACKGROUND



[1.5] Statusicons
// --status
prj:project_{cur}.mk   MMI_STATUSBAR_ICON_BLACK
//
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon\
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\
images:common\MMI_RES_DEFAULT\IMAG\SUBLCD_SIZE_128_160\sub_icon\battery_syle4\

### __status__
// --status--bg
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_STATUSBAR_BG
images:\common\MMI_RES_DEFAULT\IMAG\Statusbar\
//
app:theme\c\mmitheme_statusbar.c  IMAGE_STATUS_BAR

### __bat__
source:mmi_app\common\h\common_mdu_def.h  battery_syle1
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\battery_syle1\
// --bat--sub
source:mmi_app\common\h\common_mdu_def.h  SUBIDLE_ICON_BATTERIES_CHARGE1
images:common\MMI_RES_DEFAULT\IMAG\SUBLCD_SIZE_128_160\sub_icon\

// --tcard-ex
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_BLACKLIST_STATUSBAR_ICON
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\IMAGE_IDLE_TITLE_ICON_SD.png

// --sim--8910
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_ICON_NO_SIM1
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\battery_syle1\

// 假信号
Save:node\C\study\Macro_fun_8910.h  rxlevel_step


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
images:multim\MMI_RES_DEFAULT\IMAG\

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

// new--play--20X20
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_MUSIC_MAIN_SMALL_PLAY2


// old--Progress
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_COMMON_PLAYER_PROCESS_SLIDE
// osd--shuffle--28X16
app:multim\h\multim_mdu_def.h  IMAGE_COMMON_BTN_SHUFFLE_ON



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
// call--hd--20*20
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CALLING_HD
// call--sim1--16*16
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CUSTOM_SIM1_SMALL


// --同名
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SETTINGS_SIM1_ICON

// --不清楚什么用
source:mmi_app\common\h\common_mdu_def.h  IMAGE_PREFERRED_SIM1
source:mmi_app\common\h\common_mdu_def.h  IMAGE_PREFERRED_SIM2


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

//		==>MMITHEME_GetListStyle
// vp--opt--replay--radio--18*18
source:mmi_app\common\h\common_mdu_def.h  IMAGE_RADIOBUTTON_ON_BLUE
source:mmi_app\common\h\common_mdu_def.h  IMAGE_RADIOBUTTON_OFF_BLUE
// --marked--18*18
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CHECKBOX_ON_CHECK
// --check--18*18 (同上)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CHECKBOX_ON
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CHECKBOX_OFF

// --av_marked--76*76
source:mmi_app\common\h\common_mdu_def.h  IMAGE_AVATAR_CHECKBOX_ON_CHECK
// --av_check--76*76
source:mmi_app\common\h\common_mdu_def.h  IMAGE_AVATAR_CHECKBOX_SELECTED_ICON
// --av_mask--40*40 (call)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_LISTITEM_AVATAR_MASK_RED
source:mmi_app\common\h\common_mdu_def.h  IMAGE_LISTITEM_AVATAR_INITIALS

// --toggle--18*18 (switch)
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TOGGLE_ON
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TOGGLE_OFF

// --6*64
source:mmi_app\common\h\common_mdu_def.h  IMAGE_LISTITEM_SHORTCUT_64_LEFT_RED
// --prg--
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_THUMB


### __toolkit__
images:common\MMI_RES_DEFAULT\IMAG\toolkit\
images:common\MMI_RES_DEFAULT\IMAG\Common\

//		==>MMITHEME_GetPopMenuTheme
// --radio--18*18
source:mmi_app\common\h\common_mdu_def.h  (IMAGE_RADIOBUTTON_ON )
source:mmi_app\common\h\common_mdu_def.h  (IMAGE_RADIOBUTTON_OFF )
// --check--18*18
source:mmi_app\common\h\common_mdu_def.h  (IMAGE_CHECKBOX_ON )
source:mmi_app\common\h\common_mdu_def.h  (IMAGE_CHECKBOX_OFF )
// --menu--18*18
source:mmi_app\common\h\common_mdu_def.h  (IMAGE_COMMON_POP_MENU_LEFT )



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



[1.12] 




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
images:record\MMI_RES_DEFAULT\IMAG\BLACK\


### 8910
// record--numbg--黄色?--1*130
app:record\h\record_mdu_def.h  IMAGE_RECORD_NUMBER_BG

// record--anim--bg--175X156
app:record\h\record_mdu_def.h  IMAGE_RECORD_INDICATOR
// record--anim--175X156
app:record\h\record_mdu_def.h  IMAGE_VOICE_RECORDER_RECORDING_1_NEW
// record--anim--num--10=>4
app:record\h\mmirecord_wintablel.h  RECORD_ANIMAL_TOTAL_FRAME_NUM

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


### vp--btn--new
// 2/3/4--
// --红色mp3_10*10 (err)
app:audioplayer\h\audioplayer_mdu_def.h  IMAGE_MP3_MUSIC_MAIN_SMALL_PLAY2_GRAY
// --黑色/白色16*16 (注意开宏)
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

// pic--folder--def--54*54
app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_PICVIEW_FOLDER_DEFAULT_ICON_BLACK
//app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_PICVIEW_PIC_ERROR_ICON_BLACK

// pic--bg--1*1
app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_PICVIEW_OSD_BG
// pic--cam--44*38
app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_PICVIEW_CAMERA_FOLDER
// pic--xx--70*70(用到了)
app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_GALLERY_ONEDRIVE_DEFAULT_PIC
// pic--xx--85*85(未用到)
app:pic_viewer\h\pic_viewer_mdu_def.h   IMAGE_GALLERY_PROMO_PHOTOS


// (pos) pic--item--70*70
app:pic_viewer\h\mmipicview_position.h   MMIPICPREVIEW_LIST_ICON_SIZE



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
// calc--char--bg--1*1
app:accessory\h\tools_mdu_def.h  IMAGE_CALC_OPERATOR_BACKGROUND_BAR



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

//
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SIM1_BLACK


// pb--photo--cam / Tcard / default
//		==>HandleEntryListWinMsg
//		====>web:
//		======>.cur_index => .user_data => .CONTACTINDEX
//		======>.entry_id => .ContactInfo => .contact_ptr
//		======>.photo_id_flag & MMIPB_PHOTO_ID_EXIST
//		======>.custom_photo_ptr
//		====>SetListItemForSearch
//		======>.user_data => .list_data
//		======>.(num_index[i])<<16 | (contact_index)
//		======>.num_index
//		========>.0,0,0       # 用于多条联系人模式
//		======>.contact_index
//		========>.FindNext
//		==>HandleEntryDetailWinMsg
//		====>OPEN:
//		====>SetEntryDetails
//		======>MMIPB_ReadPhotoFile
//		========>


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
images:common\MMI_RES_DEFAULT\IMAG\Title\

// 
//	IMAGE_CONTROL_TAB_DEFAULT
//	IMAGE_TAB_BG
//	// sms--box--tab

// tab--line--theme
app:theme\c\mmitheme_tab.c  bg_image_id   = IMAGE_TAB_BG      //240*320
app:theme\c\mmitheme_tab.c  bg_image_id   = IMAGE_TITLE_BAR2  //128*160
app:theme\c\mmitheme_tab.c  dividing_line = IMAGE_TAB_LINE    //仅240*320
app:theme\c\mmitheme_tab.c  height_bg_info.img_id = IMAGE_TAB_SELECT1

// tab--line--
//		====>(font30),  2*38 
//		====>(240*320), 2*30
//		====>(128*160), 
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_SEPARATED_FONT30
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_SEPARATED

// tab--select--(高度可不改)
//		====>(font30),  1*40
//		====>(240*320), 1*32 
//		====>(128*160), 22*22
source:mmi_app\common\h\common_mdu_def.h  IMAGE_TAB_SELECT1

// tab--bg--(高度要改)
//		====>(font30),  1*40
//		====>(240*320), 1*32 
//		====>(128*160), 
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_DEFAULT_FONT30
source:mmi_app\common\h\common_mdu_def.h  IMAGE_CONTROL_TAB_DEFAULT_B
source:mmi_app\common\h\common_mdu_def.h  IMAGE_TITLE_BAR2


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
images:common\MMI_RES_DEFAULT\ANIM\

// vol--bg--228*220
source:mmi_app\common\h\common_mdu_def.h  IMAGE_PUBWIN_BG_B
// vol--bg--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_PLAYER_PANEL_BG


// mp3--format err--tips
// --w--红--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_TIPS_BG2
// --b--黑--228*120
source:mmi_app\common\h\common_mdu_def.h  IMAGE_COMMON_TIPS_BG

// anim--bg--30*30
source:mmi_app\common\h\common_mdu_def.h  ANIM_PUBWIN_WAIT_PDA



[1.26] browser,bt

### __browser__
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


//--browser--bar--bg
app:browser\h\browser_mdu_def.h  IMAGE_BROWSER_SEARCH_BAR_BG
app:browser\h\browser_mdu_def.h  IMAGE_BROWSER_STARTPAGE_LABEL_BG
//--36==>40, 30==>32
images:browser\MMI_RES_DEFAULT\IMAG\input_new\


### __bt__
images:common\MMI_RES_DEFAULT\ANIM\AINM_BT_SEARCHING\

// bt--anim--23*24
source:mmi_app\common\h\common_mdu_def.h  AINM_BT_SEARCHING



[1.27] __calen__
//
images:clock\MMI_RES_DEFAULT\IMAG\Calendar\

// 2x2
app:accessory\h\clock_mdu_def.h  IMAGE_CLOCK_CALENDAR_BG



[1.28] __memo__
//
images:clock\MMI_RES_DEFAULT\IMAG\Calendar\

app:memo\h\memo_mdu_def.h  IMAGE_MEMO_MAIN_BG

// menu--memo--30*30
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_TOOL_NOTE


// menu--hmgs--放大镜
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_TOOL_HMGS


[1.29] 



[1.30] 


