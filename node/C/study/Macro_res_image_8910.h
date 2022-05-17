
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_res_image_8910.h \[1.1\] Logo--开关机
Save:node\C\study\Macro_res_image_8910.h \[1.2\] //MainMenu--主菜单图片
Save:node\C\study\Macro_res_image_8910.h \[1.3\] //Wallpaper--壁纸
Save:node\C\study\Macro_res_image_8910.h \[1.4\] //charger--关机/充电动画
Save:node\C\study\Macro_res_image_8910.h \[1.5\] Statusicons
Save:node\C\study\Macro_res_image_8910.h \[1.6\] time--拨号日期锁屏
Save:node\C\study\Macro_res_image_8910.h \[1.7\] Mp3
Save:node\C\study\Macro_res_image_8910.h \[1.8\] //call
Save:node\C\study\Macro_res_image_8910.h \[1.9\] alert
Save:node\C\study\Macro_res_image_8910.h \[1.10\] //list
Save:node\C\study\Macro_res_image_8910.h \[1.11\] anim
Save:node\C\study\Macro_res_image_8910.h \[1.12\] browser
Save:node\C\study\Macro_res_image_8910.h \[1.13\] sec_menu
Save:node\C\study\Macro_res_image_8910.h \[1.14\] record--------------非common模块
Save:node\C\study\Macro_res_image_8910.h \[1.15\] vp
Save:node\C\study\Macro_res_image_8910.h \[1.16\] call
Save:node\C\study\Macro_res_image_8910.h \[1.17\] set
Save:node\C\study\Macro_res_image_8910.h \[1.18\] pic
Save:node\C\study\Macro_res_image_8910.h \[1.19\] 
Save:node\C\study\Macro_res_image_8910.h \[1.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




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



[1.2] MainMenu--主菜单图片

// --主菜单图片

\res\common\MMI_RES_DEFAULT\IMAG\mainmenu_page\IMAGE_MAINMENU_ICON_BROWSER.png


[1.3] Wallpaper--壁纸

// --壁纸



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
images:\common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\

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



[1.6] DialNum拨号日期锁屏

// --time
source:mmi_app\common\h\common_mdu_def.h  IDLE_BLACK_FONT
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME_BLACK\Idle_time\

// --idle time
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_TIME_AM
// --黑底白字
images:common\MMI_RES_DEFAULT\IMAG\Idle_time\
// --白底黑字
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME_BLACK\Idle_time\


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



[1.7] Mp3

### __Mp3__
// new
images:audioplayer\MMI_RES_DEFAULT\IMAG\L680_new_music\
// new--vol,26*10


// 
images:audioplayer\MMI_RES_DEFAULT\IMAG\



[1.8] call




[1.9] __alert__
// vol--bg
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\
images:common\MMI_RES_DEFAULT\IMAG\VOL_contrast\IMAGE_COMMON_PLAYER_PANEL_BG.png

// lock--bg
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\BAR\IMAGE_PUBWIN_BG.png



[1.10] list
//


[1.11] anim
// anim
source:mmi_app\common\h\common_mdu_def.h  ANIM_PUBWIN_WAIT_PDA
// 240*320
images:common\MMI_RES_DEFAULT\ANIM\ANIM_PUBWIN_WAIT_PDA\
// 128*160
images:common\MMI_RES_DEFAULT\ANIM\ANIM_PUBWIN_WAIT\


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
images:record\MMI_RES_DEFAULT\IMAG\new\
images:multim\MMI_RES_DEFAULT\IMAG\

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



[1.16] __call__
//
images:cc\MMI_RES_DEFAULT\IMAG\cc\

// call--gif--1X20
app:cc\h\cc_mdu_def.h  IMAGE_CC_CALL_PHOTO_ANIM
app:cc\h\cc_mdu_def.h  IMAGE_CC_CALLING_PHOTO_ANIM
app:cc\h\cc_mdu_def.h  IMAGE_CC_INCOMING_PHOTO_ANIM
app:cc\h\cc_mdu_def.h  IMAGE_CC_DISCONNECTED_PHOTO_ANIM

//
app:cc\c\mmicc_wintab.c  IMAGE_CC_INCOMING_PHOTO_ANIM


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


[1.19] 




[1.20] 




