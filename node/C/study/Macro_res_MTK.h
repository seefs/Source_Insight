
基础路径设置:
//basePath = 
//imagesPath = projects\M107\M107_XYZN_S2_4A_WESTERN_F2
imagesPath = plutommi\Customer\Images\K220_L12_MGUO\
images:\\
audioPath = plutommi\Customer\AUDIO\K220_L12_MGUO\
audio:\\
featuresPath = plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
features:\\




/***********************************************************************/

//目录[Num][Ca]:
// 1. common
Save:node\C\study\Macro_res_MTK.h \[1.1\] 扩展项目
Save:node\C\study\Macro_res_MTK.h \[1.2\] mk, features, nv
Save:node\C\study\Macro_res_MTK.h \[1.3\] str
Save:node\C\study\Macro_res_MTK.h \[1.4\] res-------
Save:node\C\study\Macro_res_MTK.h \[1.5\] image
Save:node\C\study\Macro_res_MTK.h \[1.6\] ring, audio
Save:node\C\study\Macro_res_MTK.h \[1.7\] //add app
Save:node\C\study\Macro_res_MTK.h \[1.8\] //add res
Save:node\C\study\Macro_res_MTK.h \[1.9\] font
Save:node\C\study\Macro_res_MTK.h \[1.10\] //test
Save:node\C\study\Macro_res_MTK.h \[1.11\] //OLD_PRELOAD
Save:node\C\study\Macro_res_MTK.h \[1.12\] //anim
Save:node\C\study\Macro_res_MTK.h \[1.13\] //xx_mdu_def.h
Save:node\C\study\Macro_res_MTK.h \[1.14\] 
Save:node\C\study\Macro_res_MTK.h \[1.15\] 
Save:node\C\study\Macro_res_MTK.h \[1.16\] 
Save:node\C\study\Macro_res_MTK.h \[1.17\] 
Save:node\C\study\Macro_res_MTK.h \[1.18\] 
Save:node\C\study\Macro_res_MTK.h \[1.19\] 
Save:node\C\study\Macro_res_MTK.h \[1.20\] 




[1.1] 扩展项目
// --dws
//custom\codegen\K220M_YGW_BB\
//custom\codegen\K220M_YGW_BB\codegen_H660.dws

// --config_account
//custom\common\custom_config_account.c  g_config_account_gprs
//custom\common\
//custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h

// --userprofile
//custom\common\userprofile_nvram_def.h

// --MemoryDevice
custom\system\K220M_YGW_BB\
custom\system\K220M_YGW_BB\custom_MemoryDevice.h  NOR_BOOTING_NAND_FS_SIZE



### newPro
mk, bld, features, nv, image, audio


//ctrl+C自动添加新文件, 旧项目->新项目
//新项目设置:
newPro = K220_Z97_MGUO

//扩展项目
//custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M107_XYZN_S2_4A_WESTERN_F2.dws
//custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h
//custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h
//custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h
make/K220_Z97_JMZ_GSM.mak
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\audio.zip
images:image.zip
features:MMI_features_switchK220_Z97_MGUO.h 
plutommi\Customer\CustResource\M107_MMI\M107_XYZN_S2_4A_WESTERN_F2\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ThemeRes.c 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ref_list.txt 
features:CustResDef.h
plutommi\Customer\CustResource\M107_MMI\CustMiscDataM107.c
//CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 其他相关




[1.2] mk, features, nv
// --mk
make/K220_D18E_GSM.mak
make/Verno_K220_D18E.bld
//
cp make/K220_D18E_GSM.mak make/K220_Z97_MGUO_GSM.mak
cp make/K220_Z97_MGUO_GSM.mak make/K220_Z97_JMZ_GSM.mak
cp make/K220_Z97_MGUO_GSM.mak make/K220_Z97_JSZ_GSM.mak
cp make/K220_Z97_MGUO_GSM.mak make/K220_Z97_MLL_GSM.mak
cp make/K220_Z97_MGUO_GSM.mak make/K220_Z97_MOLOO_GSM.mak
//
cp make/Verno_K220_D18E.bld make/Verno_K220_Z97_MGUO.bld
cp make/Verno_K220_Z97_MGUO.bld make/Verno_K220_Z97_JMZ.bld
cp make/Verno_K220_Z97_MGUO.bld make/Verno_K220_Z97_JSZ.bld
cp make/Verno_K220_Z97_MGUO.bld make/Verno_K220_Z97_MLL.bld
cp make/Verno_K220_Z97_MGUO.bld make/Verno_K220_Z97_MOLOO.bld
cp make/Verno_K220_Z97_MGUO.bld make/Verno_K220_Y01A_MGUO.bld
//
make/K220_Z97_MGUO_GSM.mak
make/K220_Z97_JMZ_GSM.mak
make/K220_Z97_JSZ_GSM.mak
make/K220_Z97_MLL_GSM.mak
make/K220_Z97_MOLOO_GSM.mak
make/K220_Y01A_MGUO_GSM.mak
make/K220_L12_MGUO_GSM.mak
// bcmp
cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h

###
// --project
make/K220_Z97_MGUO_GSM.mak  PRJ_NAME
make/Verno_K220_Z97_MGUO.bld  VERNO
make/Verno_K220_Y01A_MOLOO.bld  VERNO
make/Verno_K220_Y01A_MGUO.bld  VERNO
make/Verno_K220_L12_MGUO.bld  VERNO
MGUO
//	__K220_Z97_JMZ__
//	__K220_Z97__
//	__JMZ__


// --features
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\MMI_features_switchK220_Y01A_MGUO.h
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\CustResDef.h SSC_SW_VERSION
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\ThemeRes.c  theme_defaultTheme
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\Themecomponents.h  title_text_color_defaultTheme
// --features--tmp
plutommi\Customer\CustResource\PLUTO_MMI\CustResDefPLUTO.h SSC_SW_VERSION
plutommi\Customer\CustResource\ThemeRes.c  theme_defaultTheme
plutommi\Customer\CustResource\Themecomponents.h  title_text_color_defaultTheme
// --features
plutommi\mmi\Inc\MMI_features.h  STATUS_BAR
// --ref_list
plutommi\Customer\CustResource\K220_D18E_MMI\ref_list.txt
// --path
plutommi\Customer\CustResource\K220_Z97_MGUO_MMI\
plutommi\Customer\CustResource\K220_Z97_MGUO_MMI\CustResDef.h  CUST_IMG_PATH
plutommi\Customer\CustResource\K220_Z97_MGUO_MMI\CustResDef.h  CUST_ADO_PATH
plutommi\Customer\CustResource\K220_Z97_MGUO_MMI\ref_list.txt
// --path
plutommi\Customer\CustResource\K220_Z97_JMZ_MMI\
plutommi\Customer\CustResource\K220_Z97_MGUO_MMI\
plutommi\Customer\CustResource\K220_Z97_JSZ_MMI\
plutommi\Customer\CustResource\K220_Z97_MLL_MMI\
plutommi\Customer\CustResource\K220_Z97_MOLOO_MMI\
plutommi\Customer\CustResource\K220_Y01A_MGUO_MMI\


// --nv
make/K220_Z97_JMZ_GSM.mak  BOARD_VER_CUST_AUDIO
//	BOARD_VER_CUST_AUDIO = K220_Z97_AUDIO_BB
// 
make\custom\custom.mak BOARD_VER_CUST_AUDIO
// 
//custom\common\PLUTO_MMI
//custom\meta\K220M_YGW_BB
custom\audio\K220_D18E_AUDIO_BB\
custom\audio\K220_D18E_AUDIO_BB\nvram_default_audio.c
custom\audio\K220_Z97_AUDIO_BB\
//custom\audio\K220M_YGW_BB



[1.3] str
//	字符串定义
make\Resgen.mak REFLIST_LIST += ref_list_
//
plutommi\Customer\CustResource\K220_D18E_MMI\
plutommi\Customer\CustResource\K220_D18E_MMI\ref_list.txt
plutommi\Customer\CustResource\K220_Z97_JMZ_MMI\
plutommi\Customer\CustResource\K220_Z97_JMZ_MMI\ref_list.txt
plutommi\Customer\CustResource\PLUTO_MMI\ref_list.txt
// custom
make/K220_Z97_JMZ_GSM.mak  NEW_CUS_REL_TRACE_DEFS
//	USE_PROJECT_STRING_LIST = TRUE

//
make/K220_Z97_JMZ_GSM.mak REF_LIST_BRANCH = M107


//字符串
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ref_list.txt 
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\mmi\Inc\mmi_res_range_def.h RESOURCE_BASE_TABLE_ITEM_PATH( , ".\\mmi\\...\\Res\\")

//	字符串工具:
open:plutommi\Customer\STMTView.exe



[1.4] res
// --project
make/K220_D18E_GSM.mak  PRJ_NAME
//	PRJ_NAME = K220_D18E
make/K220_D18E_GSM.mak  PRJ_MAINBOARD_NAME
//	PRJ_MAINBOARD_NAME = K220M
make/K220_D18E_GSM.mak  PRJ_LOGO_NAME
//	PRJ_LOGO_NAME = WJT
make/K220_D18E_GSM.mak  PRJ_MODEL_NAME
//	PRJ_MODEL_NAME	= K220_N48
make/K220_D18E_GSM.mak  KEY_LAYOUT_STYLE
//	#KEY_LAYOUT_STYLE = CODEGEN_H660


// --project--logo
make\Option.mak  PRJ_NAME
make\Option.mak  PRJ_MODEL_NAME
make\Option.mak  PRJ_LOGO_NAME
//	__K220_D18E__
//	__K220_N48__
//	__WJT__


// --board
make/K220_D18E_GSM.mak  BOARD_VER
//	BOARD_VER = K220M_YGW_BB
make/K220_D18E_GSM.mak  BOARD_VER_CUST_AUDIO
//	BOARD_VER_CUST_AUDIO = K220_D18E_AUDIO_BB


// --rf
make/K220_D18E_GSM.mak  RF_MODULE
//	RF_MODULE = MT6261RF_HS8235L_CUSTOM


// --consistent
make/K220_D18E_GSM.mak  COM_DEFS_FOR
//	COM_DEFS_FOR_MT6261RF_HS8235L_CUSTOM
//	COM_DEFS_FOR_K220D_QQVGA_LCM


#########
// --MMI_VERSION
make/K220_D18E_GSM.mak  MMI_VERSION
//	MMI_VERSION = PLUTO_MMI

// --MMI_PROJ
make\Resgen.mak MMI_PROJ
//	MMI_PROJ = PLUTO

// --MMI_BASE
make/K220_D18E_GSM.mak  MMI_BASE
//	MMI_BASE = PLUTO_MMI

// --MMI_BASE_PRJ
make\Option.mak MMI_BASE_PRJ
make\Resgen.mak MMI_BASE_PRJ
//	MMI_BASE_PRJ = PLUTO


#########
// --CUSTOMER
make\Option.mak  (CUSTOMER)
//	CUSTOMER = K220_D18E

// --PROJECT
make\MODEM.mak  (PROJECT)
//	CUSTOMER = GSM


// --ORIGINAL
make\Option.mak ORIGINAL_CUSTOMER
//	CUSTOMER = K220_D18E


// --copy
make\Resgen.mak REFLIST_LIST += ref_list_
// --copy--1--switch--CUSTOMER=>MMI_PROJ
// --copy--1--switch--PRJ_NAME=>MMI_PROJ
plutommi\Customer\CustResource\K220_D18E_MMI\
plutommi\Customer\CustResource\K220_D18E_MMI\MMI_features_switchK220_D18E.h
plutommi\Customer\CustResource\MMI_features_switchK220_D18E.h
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h
// --copy--2--data--CUSTOMER=>MMI_BASE_PRJ
//plutommi\Customer\CustResource\K220_D18E_MMI\CustMiscDataPLUTO.c
//plutommi\Customer\CustResource\PLUTO_MMI\CustMiscDataPLUTO.c
// --copy--3--CUSTOMER=>MMI_PROJ
// --copy--3--PRJ_NAME=>MMI_PROJ
plutommi\Customer\CustResource\K220_D18E_MMI\
//plutommi\Customer\CustResource\K220_D18E_MMI\CustResDefK220_D18E.h
plutommi\Customer\CustResource\K220_D18E_MMI\CustResDef.h SSC_SW_VERSION
plutommi\Customer\CustResource\PLUTO_MMI\CustResDefPLUTO.h SSC_SW_VERSION
// --copy--4--CUSTOMER=>MMI_BASE
// --copy--4--PRJ_NAME=>MMI_BASE
plutommi\Customer\CustResource\K220_D18E_MMI\
plutommi\Customer\CustResource\K220_D18E_MMI\ref_list.txt
plutommi\Customer\CustResource\K15M_A105_JKD_MMI\ref_list.txt
plutommi\Customer\CustResource\PLUTO_MMI\ref_list.txt





[1.5] image
// --path
plutommi\Customer\CustResource\K220_D18E_MMI\CustResDef.h  CUST_IMG_PATH
plutommi\Customer\CustResource\K220_D18E_MMI\CustResDef.h  CUST_ADO_PATH
// audio
plutommi\Customer\AUDIO\
plutommi\Customer\AUDIO\K220_Z97_MGUO\
plutommi\Customer\AUDIO\K220_Z97_JMZ\
plutommi\Customer\AUDIO\K220_Z97_JSZ\
plutommi\Customer\AUDIO\K220_Z97_MLL\
plutommi\Customer\AUDIO\K220_Z97_MOLOO\
//
plutommi\Customer\AUDIO\K220_Y01A_MGUO\
plutommi\Customer\AUDIO\K220_Y01A_JMZ\
plutommi\Customer\AUDIO\K220_Y01A_JSZ\
plutommi\Customer\AUDIO\K220_Y01A_MLL\
plutommi\Customer\AUDIO\K220_Y01A_MOLOO\
// image
plutommi\Customer\Images\
plutommi\Customer\Images\K220_Z97_MGUO\
plutommi\Customer\Images\K220_Z97_JMZ\
plutommi\Customer\Images\K220_Z97_JSZ\
plutommi\Customer\Images\K220_Z97_MLL\
plutommi\Customer\Images\K220_Z97_MOLOO\
//
plutommi\Customer\Images\K220_Y01A_MGUO\
plutommi\Customer\Images\K220_Y01A_JMZ\
plutommi\Customer\Images\K220_Y01A_JSZ\
plutommi\Customer\Images\K220_Y01A_MLL\
plutommi\Customer\Images\K220_Y01A_MOLOO\


#####
//	资源路径:
//	old code：
features:CustResDef.h #define^CUST_IMG_PATH
//	new code：
features:CustResDef.h #define^CUST_IMG_PATH
features:CustResDef.h #define^CUST_ADO_PATH


//	资源子路径:
features:CustResDef.h #define^IMG_MAINMENU_SUB_DIR
features:Themecomponents.h #define^img_menu_bkg_filler_defaultTheme
features:Themecomponents.h #define^img_matrix_main_menu_highlight_image_defaultTheme
plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径

//	资源子路径 临时文件(原图不存在, 资源不生成):
plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
plutommi\Customer\CustResource\CustImgDataRes_2.c


//	主菜单图片:
images:MainLCD\MainMenu\SLIM_MATRIX
images:MainLCD\MainMenu\PAGE
//
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res __MMI_MAINMENU_PAGE_SUPPORT__
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res 850


//	壁纸
images:MainLCD\Phonebook\
images:MainLCD\IdleScreen\Wallpaper
features:MMI_features_switchK220_Z97_MGUO.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR


// 开关机Logo:(仅KM这套代码)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
images:MainLCD\Active\poweronoff\
images:MainLCD\Active\poweronoff\logo.BMP


// 开关机动画:
//  与铃声同步问题 建议开机动画时间相比减0.5s 关机动画时间减2s
images:MainLCD\Active\Poweronoff\
images:MainLCD\Active\Poweronoff\logo.bmp
images:MainLCD\Active\Poweronoff\POON.gif
images:MainLCD\Active\Poweronoff\pooff.gif
//
features:MMI_features_switchK220_Z97_MGUO.h CFG_MMI_POWER_ON_OFF_DISPLAY
features:MMI_features_switchK220_Z97_MGUO.h CFG_MMI_RES_TYPE_POWER_ONOFF_SEL
plutommi\mmi\Inc\MMI_features.h  __MMI_RES_TYPE_POWER_ONOFF_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif

//
make/K220_Z97_JMZ_GSM.mak SBD_POWER_ONOFF_SAME_LOGO
//~ 
//~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR 设置logo背景色


// 关机充电动画
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
images:MainLCD\UIELEMENT\charger\

// idle--bat
images:MainLCD\IdleScreen\Statusicons\battery\SI_BAT\

// idle--sim
plutommi\mmi\NwInfo\NwInfoSrc\NwInfoSignal.c  mmi_nw_info_signal_set_image
images:MainLCD\IdleScreen\Statusicons\DualSIM\Master\SI_SIG1\
	

//	屏保:
features:MMI_features_switchK220_Z97_MGUO.h  #define^CFG_MMI_SCREEN_SAVER
//
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_IDLE_DATE_0             #锁屏
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_TECHNO_DIGITAL_CLOCK_0  #idle
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_IDLE_DAY_0              #天
// --数字蓝--天
images:MainLCD\IdleScreen\lock_day_new\
// --数字白--锁屏
images:MainLCD\IdleScreen\lock_new\
// --数字黑--idle
images:MainLCD\IdleScreen\Techno\DigitalClock\
//

// 拨号
// --黑--小号数字
images:MainLCD\DialingScreen\INPUT\MEDIUM\
// --黑--大号数字
images:MainLCD\DialingScreen\DialNum\
images:MainLCD\DialingScreen\DialNum_2\


//	Mp3
plutommi\MtkApp\AudioPlayer\AudioPlayerRes\AudioPlayer.res  vol_full
plutommi\Customer\CustResource\PLUTO_MMI\resource_audply_skins.c  1829
//
images:MainLCD\Multimedia\


###
//	图片资源大小:
images:\
images:images_file_list.ini
plutommi\Customer\ResGenerator\debug\
plutommi\Customer\ResGenerator\debug\image_info_updated_all.txt POON 大小
//	图片预览:
plutommi\Customer\ResGenerator\debug\image_resource_usage.htm

//
//	开关机动画移除壁纸:
plutommi/mmi/Setting/SettingInc/PhoneSetupResList.h #define^MAX_POWER_ON_IMG 




[1.6] ring
// --tone
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_TONE1
//	AUD_ID_PROF_TONE1 --> play_mp3.mp3
plutommi\Customer\AUDIO\K220_D18E\
//	AUD_ID_PROF_TONE2 --> cs02.mp3
plutommi\Customer\AUDIO\K220_D18E\UserProfiles\Tone\
//	AUD_ID_PROF_TONE3 --> cs03.mid
//	AUD_ID_PROF_TONE4 --> cs04.mid
//	AUD_ID_PROF_TONE5 --> cs05.mid

// --ring
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_RING1
//	AUD_ID_PROF_RING1 --> play_mp3.mp3
plutommi\Customer\AUDIO\K220_D18E\
//	AUD_ID_PROF_RING2 --> s1imy06.imy
plutommi\Customer\AUDIO\K220_D18E\UserProfiles\Ring\
//	AUD_ID_PROF_RING3 --> s1imy07.imy
//	AUD_ID_PROF_RING4 --> s1imy04.imy
//	AUD_ID_PROF_RING5 --> s1imy08.imy

// --play
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_MP3_PLAY_0
//	AUD_ID_MP3_PLAY_0 --> play_mp3.mp3
plutommi\Customer\AUDIO\K220_D18E\

// --SOS
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_SOS_MP3
//	AUD_ID_SOS_MP3 --> SOS.mp3
plutommi\Customer\AUDIO\K220_D18E\

// --HERO
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res TIHO_ID_PROF_NUM1_0
//	TIHO_ID_PROF_NUM1_0 --> no



#####
// --内置音乐
plutommi\MtkApp\AudioPlayer\AudioPlayerSrc\AudioPlayerMainScreen.c __AUDIO_PLAY_TEST__
// 默认来电铃声和内置音乐
//  --> AUD_ID_PROF_RING4
plutommi\mmi\Organizer\OrganizerInc\AlarmProt.h ALARM_DEFAULT_RING_ID
//


// --sms/call
plutommi\CUI\ToneSelectorCui\ToneSelectorCuiForSLIM.c  void^cui_tone_selector_creat_tone_list
//    CUI_TONESEL_TONE_ID_BEGIN = AUD_ID_PROF_TONE_BEGIN + 1, 
//    CUI_TONESEL_RING_ID_BEGIN = AUD_ID_PROF_RING_BEGIN + 1, 





//
//铃声
// 1) 调整铃声个数
cui_tone_selector_creat_tone_list 调整铃声个数
// 2) 添加可选择文件
mmi_prof_customize_scrn_csk_hdlr  SIM1_MSG_TONE_ITEM flag = 2;添加可选择文件


//	铃声文件:
//	情景默认等级:
custom\common\userprofile_nvram_def.c SBD_POWER_ONOFF_RING_SAME
audio:UserProfiles\Tone\
audio:UserProfiles\Tone\R_POWER_1.mp3
//	铃声资源大小:
plutommi\Customer\ResGenerator\debug\audio_resource_usage.txt
//	开关机铃声:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res R_POWER_1.mp3
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 定义
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_TONE1
//	来电铃声:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_RING1





[1.7] 




[1.8] 


[1.9] font
//
plutommi\Customer\CustResource\FontRes.c


// --英文
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_ENGLISH__
// --英文-bdf
vendor\font\FontData\OfficialFont\Latin\
vendor\font\FontData\OfficialFont\Latin\pluto_small.bdf

// --俄文
//   2.4屏用Russian_18,20号字;其他:dotum24太大;arial_ru_20缺字符;Cyrillic_20不熟悉;
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_RUSSIAN__
// --俄文-bdf
vendor\font\FontData\OfficialFont\Chinese\
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf

// --中文
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_SM_CHINESE__
// --中文-bdf
vendor\font\FontData\OfficialFont\Chinese\

// --波斯
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd240X320\L_MTK_Arabic_vk_9.h
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd128X160\L_1_Pluto_Small.h
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_BENGALI__
// --波斯-bdf
vendor\font\FontData\OfficialFont\Farsi\Farsi14.bdf

// --孟加拉
vendor\font\FontData\OfficialFont\Bengali\

// --
vendor\font\FontData\OfficialFont\Dialing\L_MTK_DiallingFont_27.bdf


// 字体
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT
//	输入法
features:MMI_features_switchK220_Z97_MGUO.h  CFG_MMI_CSTAR_MULTITAP
//	参考: 制作字库
https://wenku.baidu.com/view/ea58850bf78a6529647d53a1.html



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 


