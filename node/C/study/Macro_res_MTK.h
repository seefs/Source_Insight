
基础路径设置:
//basePath = 
resPath = MS_MMI_Main/source/resource/mmi_res_240x240
res:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. common
Save:node\C\study\Macro_res_MTK.h \[1.1\] xx_mdu_def.h
Save:node\C\study\Macro_res_MTK.h \[1.2\] anim
Save:node\C\study\Macro_res_MTK.h \[1.3\] str
Save:node\C\study\Macro_res_MTK.h \[1.4\] res-------
Save:node\C\study\Macro_res_MTK.h \[1.5\] icon
Save:node\C\study\Macro_res_MTK.h \[1.6\] ring
Save:node\C\study\Macro_res_MTK.h \[1.7\] add app
Save:node\C\study\Macro_res_MTK.h \[1.8\] add res
Save:node\C\study\Macro_res_MTK.h \[1.9\] font
Save:node\C\study\Macro_res_MTK.h \[1.10\] test
Save:node\C\study\Macro_res_MTK.h \[1.11\] OLD_PRELOAD
Save:node\C\study\Macro_res_MTK.h \[1.12\] 
Save:node\C\study\Macro_res_MTK.h \[1.13\] 
Save:node\C\study\Macro_res_MTK.h \[1.14\] 
Save:node\C\study\Macro_res_MTK.h \[1.15\] 
Save:node\C\study\Macro_res_MTK.h \[1.16\] 
Save:node\C\study\Macro_res_MTK.h \[1.17\] 
Save:node\C\study\Macro_res_MTK.h \[1.18\] 
Save:node\C\study\Macro_res_MTK.h \[1.19\] 
Save:node\C\study\Macro_res_MTK.h \[1.20\] 
Save:node\C\study\Macro_res_MTK.h \[1.21\] 
Save:node\C\study\Macro_res_MTK.h \[1.22\] 
Save:node\C\study\Macro_res_MTK.h \[1.23\] 
Save:node\C\study\Macro_res_MTK.h \[1.24\] 
Save:node\C\study\Macro_res_MTK.h \[1.25\] 
Save:node\C\study\Macro_res_MTK.h \[1.26\] 




[1.1] 




[1.2] 




[1.3] str
字符串:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ref_list.txt 
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\mmi\Inc\mmi_res_range_def.h RESOURCE_BASE_TABLE_ITEM_PATH( , ".\\mmi\\...\\Res\\")

	字符串定义:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak REF_LIST_BRANCH = M107
make\Resgen.mak REFLIST_LIST += ref_list_
	字符串工具:
open:plutommi\Customer\STMTView.exe



[1.4] res

资源: 图片 铃声 字符串 字库
//	modis: 资源
Save:node\C\study\Macro_modis_MTK.h	 \[4.7\] 资源



[1.5] icon

	资源路径:
//	old code：
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h #define^CUST_IMG_PATH
//	new code：
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h #define^CUST_IMG_PATH
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h #define^CUST_ADO_PATH

	资源子路径:
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h #define^IMG_MAINMENU_SUB_DIR
plutommi\Customer\CustResource\M107_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_menu_bkg_filler_defaultTheme
plutommi\Customer\CustResource\M107_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_matrix_main_menu_highlight_image_defaultTheme
plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径

	资源子路径 临时文件(原图不存在, 资源不生成):
plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
plutommi\Customer\CustResource\CustImgDataRes_2.c

	主菜单图片:
RAR: projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images image.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\MainMenu\SLIM_MATRIX

	壁纸
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\Phonebook\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\Wallpaper
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR

	开关机Logo:(仅KM这套代码)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\Active\poweronoff\logo.BMP

	开关机动画:与铃声同步问题 建议开机动画时间相比减0.5s 关机动画时间减2s
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\Active\Poweronoff
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h POWERONOFF_USE_SAME_IMAGE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_POWER_ONOFF_SAME_LOGO
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif
~ 
~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR 设置logo背景色
	关机充电动画
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\Customer\Images\M107\M107_S2401_GRAVITY_ULTRA_F1\MainLCD\UIELEMENT\charger\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\UIELEMENT\charger\
	

	图片资源大小:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\images_file_list.ini
plutommi\Customer\ResGenerator\debug\image_info_updated_all.txt POON 大小

	屏保:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h  #define^CFG_MMI_SCREEN_SAVER

//
图片
//	开关机动画移除壁纸:
plutommi/mmi/Setting/SettingInc/PhoneSetupResList.h #define^MAX_POWER_ON_IMG 




[1.6] ring

//
//铃声
// 1) 调整铃声个数
cui_tone_selector_creat_tone_list 调整铃声个数
// 2) 添加可选择文件
mmi_prof_customize_scrn_csk_hdlr  SIM1_MSG_TONE_ITEM flag = 2;添加可选择文件

铃声:
	铃声文件:
//	情景默认等级:
custom\common\userprofile_nvram_def.c SBD_POWER_ONOFF_RING_SAME
RAR: projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO audio.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\UserProfiles\Tone\R_POWER_1.mp3
	铃声资源大小:
plutommi\Customer\ResGenerator\debug\audio_resource_usage.txt
	开关机铃声:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res R_POWER_1.mp3
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 定义
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ProfilesSrv.res AUD_ID_PROF_TONE1
	来电铃声:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ProfilesSrv.res AUD_ID_PROF_RING1
	资源路径
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h #define^CUST_IMG_PATH
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h #define^CUST_IMG_PATH





[1.7] 




[1.8] 


[1.9] font
字库文件:
plutommi\Customer\CustResource\FontRes.c
vendor\font\FontData\OfficialFont\Farsi\Farsi14.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\Bengali\Russian_18.bdf
	俄文: 2.4屏用Russian_18,20号字;其他:dotum24太大;arial_ru_20缺字符;Cyrillic_20不熟悉;
vendor\font\FontData\OfficialFont\Bengali\
vendor\font\FontData\OfficialFont\Dialing\L_MTK_DiallingFont_27.bdf
	字库:
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd240X320\L_MTK_Arabic_vk_9.h
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd128X160\L_1_Pluto_Small.h
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_RUSSIAN__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_BENGALI__
	输入法:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h  CFG_MMI_CSTAR_MULTITAP
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


