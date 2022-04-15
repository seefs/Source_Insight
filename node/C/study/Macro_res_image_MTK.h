
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_res_image_MTK.h \[1.1\] Logo--开关机
Save:node\C\study\Macro_res_image_MTK.h \[1.2\] MainMenu--主菜单图片
Save:node\C\study\Macro_res_image_MTK.h \[1.3\] Wallpaper--壁纸
Save:node\C\study\Macro_res_image_MTK.h \[1.4\] charger--关机/充电动画
Save:node\C\study\Macro_res_image_MTK.h \[1.5\] Statusicons
Save:node\C\study\Macro_res_image_MTK.h \[1.6\] DialNum--拨号日期锁屏
Save:node\C\study\Macro_res_image_MTK.h \[1.7\] Mp3_img
Save:node\C\study\Macro_res_image_MTK.h \[1.8\] call
Save:node\C\study\Macro_res_image_MTK.h \[1.9\] alert
Save:node\C\study\Macro_res_image_MTK.h \[1.10\] list
Save:node\C\study\Macro_res_image_MTK.h \[1.11\] 
Save:node\C\study\Macro_res_image_MTK.h \[1.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Logo--开关机


// --开关机Logo:(仅KM这套代码)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
images:MainLCD\Active\poweronoff\
images:MainLCD\Active\poweronoff\logo.BMP

// ---Logo--color
plutommi\Framework\GUI\GUI_SRC\bootup_logo.c  __BOOTUP_CLEAR_WHITE__
plutommi\Framework\GUI\GUI_SRC\wgui_categories.c  __BOOTUP_CLEAR_WHITE__


// --开关机动画:
// ---power--gif
make/{cur}_{GSM}.mak  __MMI_POWER_GIF_DISPLAY__

//  与铃声同步问题 建议开机动画时间相比减0.5s 关机动画时间减2s
images:MainLCD\Active\Poweronoff\
//	FE_DISPLAY  RES_TYPE   LOW   MK_DISPLAY   DIFF    --      
//	OFF         -          ON    OFF          -       logo.bmp
//	OFF1        -          ON2   ON3          OFF4    POONOFF.gif
//	ON          gif        -     -            -       POON.gif/pooff.gif
//	ON          OFF        -     -            -       POON.gif/pooff.gif
//	OFF         -          ON    ON           ON      POON.gif/pooff.gif
//	OFF         gif        OFF   -            -       POON.gif/pooff.gif
//	OFF         OFF        OFF   -            -       POON.gif/pooff.gif

// ---power--on--setItem
features:MMI_features_switch{cur}.h CFG_MMI_POWER_ON_OFF_DISPLAY
// ---power--gif
features:MMI_features_switch{cur}.h CFG_MMI_RES_TYPE_POWER_ONOFF_SEL
plutommi\mmi\Inc\MMI_features.h  __MMI_RES_TYPE_POWER_ONOFF_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif

//
//make/{cur}_{GSM}.mak SBD_POWER_ONOFF_SAME_LOGO
//~ 
//~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR 设置logo背景色



[1.2] MainMenu--主菜单图片

// --主菜单图片
images:MainLCD\MainMenu\SLIM_MATRIX\
images:MainLCD\MainMenu\PAGE\
//
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res __MMI_MAINMENU_PAGE_SUPPORT__
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res 850



[1.3] Wallpaper--壁纸

// --壁纸
images:MainLCD\Phonebook\
images:MainLCD\IdleScreen\Wallpaper\
//
features:\
features:MMI_features_switch{cur}.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
//
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR



[1.4] charger关机/充电动画


// --关机/充电动画
//make/{cur}_{GSM}.mak  __MMI_POWERONRING_MP3__
//
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
images:MainLCD\UIELEMENT\charger\

// idle--bat--7格/6格/5格
//		==>__FIVE_BATTERY_LEVEL__
//		==>__SIX_BATTERY_LEVEL__
//		==>__MORE_BATTERY_LEVEL__
make/{cur}_{GSM}.mak  BATTERY_FIVE_LEVEL
make/{cur}_{GSM}.mak  BATTERY_SIX_LEVEL
// idle--bat
images:MainLCD\IdleScreen\Statusicons\battery\SI_BAT\




[1.5] Statusicons

// idle--sim
Save:node\C\study\Macro_gui_MTK.h  statusbar:sim
// --sim--normal
images:MainLCD\IdleScreen\Statusicons\DualSIM\Master\SI_SIG1\
images:MainLCD\IdleScreen\Statusicons\DualSIM\Slave\SI_SIG2\
// --sim--closed
images:MainLCD\IdleScreen\Statusicons\DualSIM\Master\SI_SIG1_CLOSE\
images:MainLCD\IdleScreen\Statusicons\DualSIM\Slave\SI_SIG2_CLOSE\



[1.6] DialNum拨号日期锁屏

// --屏保1
features:MMI_features_switch{cur}.h  #define^CFG_MMI_SCREEN_SAVER
// --屏保2
make/{cur}_{GSM}.mak  __IDLE_LOCK_SHOW_TIME_NEW_STYLE__

//
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_IDLE_DATE_0             #锁屏
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_TECHNO_DIGITAL_CLOCK_0  #idle
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_TECHNO_DIGITAL_CLOCK_CH_PM
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_IDLE_DAY_0              #天

// --数字蓝--天
images:MainLCD\IdleScreen\lock_day_new\
// --数字白--锁屏
images:MainLCD\IdleScreen\lock_new\
// --数字黑--idle
images:MainLCD\IdleScreen\Techno\DigitalClock\
// --日期--status
images:MainLCD\IdleScreen\Techno\SmallClock\

// --拨号
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_DIALING_INPUT_M0          #小号数字
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_DIALING_0                 #大号数字
// --黑--小号数字
images:MainLCD\DialingScreen\INPUT\MEDIUM\
// --黑--大号数字/mid-icon
images:MainLCD\DialingScreen\DialNum\
images:MainLCD\DialingScreen\DialNum_2\


[1.7] Mp3_img


// --Mp3_img
plutommi\MtkApp\AudioPlayer\AudioPlayerRes\AudioPlayer.res  vol_full
plutommi\Customer\CustResource\PLUTO_MMI\resource_audply_skins.c  1829
//
images:MainLCD\Multimedia\



[1.8] call

// call
plutommi\Service\Gsm3gCallSrv\GCallSrv.res  CL_NET
//
images:MainLCD\Call\Connect\



[1.9] alert
// progress--load_left.bmp
images:MainLCD\UIElement\ProgressBar\



[1.10] list
//
features:\
features:\Themecomponents.h  img_list_menuitem_auto_number_img1_defaultTheme


[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





