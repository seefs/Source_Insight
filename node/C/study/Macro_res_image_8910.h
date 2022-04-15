
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
Save:node\C\study\Macro_res_image_8910.h \[1.7\] //Mp3_img
Save:node\C\study\Macro_res_image_8910.h \[1.8\] //call
Save:node\C\study\Macro_res_image_8910.h \[1.9\] //alert
Save:node\C\study\Macro_res_image_8910.h \[1.10\] //list
Save:node\C\study\Macro_res_image_8910.h \[1.11\] anim
Save:node\C\study\Macro_res_image_8910.h \[1.12\] browser
Save:node\C\study\Macro_res_image_8910.h \[1.13\] sec_menu
Save:node\C\study\Macro_res_image_8910.h \[1.14\] 
Save:node\C\study\Macro_res_image_8910.h \[1.15\] 
Save:node\C\study\Macro_res_image_8910.h \[1.16\] 
Save:node\C\study\Macro_res_image_8910.h \[1.17\] 
Save:node\C\study\Macro_res_image_8910.h \[1.18\] 
Save:node\C\study\Macro_res_image_8910.h \[1.19\] 
Save:node\C\study\Macro_res_image_8910.h \[1.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Logo--开关机

// logo
prj:resource\logo\



[1.2] MainMenu--主菜单图片

// --主菜单图片



[1.3] Wallpaper--壁纸

// --壁纸



[1.4] charger关机/充电动画






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
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\IMAGE_IDLE_TITLE_ICON_SD.png

// --sim
source:mmi_app\common\h\common_mdu_def.h  IMAGE_IDLE_ICON_NO_SIM1
images:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon_Black\battery_syle1\



[1.6] DialNum拨号日期锁屏

// --time
source:mmi_app\common\h\common_mdu_def.h  IDLE_BLACK_FONT
images:common\MMI_RES_DEFAULT\IMAG\QVGA_TIME_BLACK\Idle_time\


[1.7] Mp3_img




[1.8] call




[1.9] alert



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




[1.14] 




[1.15] 





[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 




