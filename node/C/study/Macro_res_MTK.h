

//目录
// 1. common
Save:node\C\study\Macro_res_MTK.h \[1.1\] 项目配置
Save:node\C\study\Macro_res_MTK.h \[1.2\] mk, features, nv
Save:node\C\study\Macro_res_MTK.h \[1.3\] str
Save:node\C\study\Macro_res_MTK.h \[1.4\] res-------option key
Save:node\C\study\Macro_res_MTK.h \[1.5\] image
Save:node\C\study\Macro_res_MTK.h \[1.6\] ring, audio
Save:node\C\study\Macro_res_MTK.h \[1.7\] //add app
Save:node\C\study\Macro_res_MTK.h \[1.8\] //add res
Save:node\C\study\Macro_res_MTK.h \[1.9\] font
Save:node\C\study\Macro_res_MTK.h \[1.10\] //test
Save:node\C\study\Macro_res_MTK.h \[1.11\] //OLD_PRELOAD
Save:node\C\study\Macro_res_MTK.h \[1.12\] //anim
Save:node\C\study\Macro_res_MTK.h \[1.13\] xx_mdu_def.h
Save:node\C\study\Macro_res_MTK.h \[1.14\] tmp_project
Save:node\C\study\Macro_res_MTK.h \[1.15\] tmp_menu
Save:node\C\study\Macro_res_MTK.h \[1.16\] 
Save:node\C\study\Macro_res_MTK.h \[1.17\] 
Save:node\C\study\Macro_res_MTK.h \[1.18\] 
Save:node\C\study\Macro_res_MTK.h \[1.19\] 
Save:node\C\study\Macro_res_MTK.h \[1.20\] 




[1.1] 项目配置

### 设置当前项目
// --images / audio / features / build
Save:node\C\cfg\
Save:node\C\cfg\Macro_c_path_mtk.h  _mtk_cur_

// --nv / board / lcd
Save:node\C\cfg\Macro_c_path_mtk.h  _mtk_cfg_

// 其他 (no use)
// --rf / account
//Save:node\C\cfg\Macro_c_path_mtk.h  _mtk_other_


### 新项目
// create new project
Save:node\C\cfg\Macro_c_path_mtk.h  _mtk_copy_



[1.2] mk, features, nv
// --mk
make/{cur}_{GSM}.mak  {cur}

// --bld
make/Verno_{cur}.bld   VERNO

// --features
plutommi\Customer\CustResource\{cur}_MMI\
features:\\

// --nv
custom\audio\{nv}\
custom\audio\{nv}\nvram_default_audio.c
custom\app\{board}\
custom\app\{board}\nvram_user_config.c  __MORE_BATTERY_LEVEL__


###
// --project
make/{cur}_{GSM}.mak  PRJ_NAME
//	__K220_Z97_JMZ__
//	__K220_Z97__
//	__JMZ__


// --features
features:\
features:\MMI_features_switch{cur}.h
features:\CustResDef.h SSC_SW_VERSION
features:\ThemeRes.c  theme_defaultTheme
features:\Themecomponents.h  title_text_color_defaultTheme
features:\ref_list.txt
// --features--tmp
plutommi\Customer\CustResource\
plutommi\Customer\CustResource\PLUTO_MMI\CustResDefPLUTO.h SSC_SW_VERSION
plutommi\Customer\CustResource\ThemeRes.c  theme_defaultTheme
plutommi\Customer\CustResource\Themecomponents.h  title_text_color_defaultTheme
plutommi\Customer\CustResource\PLUTO_MMI\ref_list.txt
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h
//plutommi\mmi\Inc\MMI_features_switch.h


// --features
plutommi\mmi\Inc\MMI_features.h  STATUS_BAR




[1.3] str
//	字符串定义
make\Resgen.mak REFLIST_LIST += ref_list_
//
features:\
features:\ref_list.txt
// default
plutommi\Customer\CustResource\PLUTO_MMI\
plutommi\Customer\CustResource\PLUTO_MMI\ref_list.txt
// custom
make/{cur}_{GSM}.mak  NEW_CUS_REL_TRACE_DEFS
//	USE_PROJECT_STRING_LIST = TRUE

//
//make/{cur}_{GSM}.mak REF_LIST_BRANCH = M107


// --str--out
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
// --str--charger
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\mmi\Inc\mmi_res_range_def.h RESOURCE_BASE_TABLE_ITEM_PATH( , ".\\mmi\\...\\Res\\")


//	字符串工具:
open:plutommi\Customer\STMTView.exe


###
//STR_GLOBAL_FRIDAY             星期五
//STR_GLOBAL_FRIDAY_SHORT       五
//STR_ID_CLNDR_WEEK_FRI         星期五
//STR_SUBLCD_CHI_FRIDAY         (五)
//STR_SUBLCD_ENG_FRIDAY         (Fri)

### excel导出到txt, 第1列不能为空，E207 删了30条
// --多余复制
//	STR_FTP_OPTION_GET_ALL---------------------ok--x2844
//	STR_WCLOCK_CITY_ABBRE78--------------------ok--x12378
//	MEA_STR_ID_CONFIG_PERS---------------------ok--x2169--第2次
//  STR_ID_DA_JOB_LIST-------------------------ok--x3866--第2次
//	STR_ID_OPERA_LNG_366-----------------------ok--x9898--第2次
//	STR_ID_SRV_SMS_TEMPLATE_6------------------ok--x12283-第2次
// --合并到1行
//  STR_ID_AM_UNINSTALL------------------------ok--x15368
//  STR_ID_GX_PUZZLE_HELP_DESCRIPTION----------ok--x582----第2次
// --缺失--少引号
//  STR_GLOBAL_SIM_2---------------------------ok--x12357--第2次
// --引号问题, 未配对
//  STR_ID_GX_COPTER_HELP_DESCRIPTION_JET_TP---ok--569
//	STR_UC_CAN_NOT_PLAY_COMPLETE---------------ok--1148
//	MEA_STR_ID_ADD_BOOKMARK_TEXT---------------ok--2134
//	STR_BT_RECV_DRV_NOT_AVAIL_CNF--------------ok--2713
//	STR_BT_ACTIVATING--------------------------ok--2772
//	STR_DA_APP_FILE----------------------------ok--3823
//	STR_EBOOK_TOUCH_SCREEN_HELP----------------ok--3926
//	STR_ID_SYNC_CODE_FORBIDDEN-----------------ok--4103
//	STR_ID_UMMS_MODE_RESTRICTED_REMOVE_CONFIRM-ok--4881
//	STR_ID_DCD_HELP_INFO2----------------------ok--7206--连续7个
//	STR_INDICAL_HELP---------------------------ok--8622
//	STR_HIJRI_CALENDAR_HELP--------------------ok--8644
//	STR_ID_OPERA_LNG_338-----------------------ok--9872
//	STR_ID_SECURE_TIME_EXPIRED-----------------ok--12216
//	STR_ID_SRV_TETHERING_USB_RECONNECT---------ok--12302
//	STR_ID_UMMS_COMPOSER_OPTION----------------ok--13577--描述--连续3个
//	STR_ID_PHOEDT_HELP_DOODLE_INFO_FTE---------ok--13649
//	STR_ID_PHOEDT_HELP_CLIP_INFO_FTE-----------ok--13657--连上
//	STR_ID_OPERA_V11_LNG_363-------------------ok--14566
//	STR_ID_PHILIPS_INFO------------------------ok--16964--描述--连续7个



[1.4] res
#########
// --PRJ_NAME
make/{cur}_{GSM}.mak  PRJ_NAME
//	PRJ_NAME = K220_D18E
//
make/{cur}_{GSM}.mak  PRJ_MAINBOARD_NAME
//	PRJ_MAINBOARD_NAME = K220M
//
make/{cur}_{GSM}.mak  PRJ_LOGO_NAME
//	PRJ_LOGO_NAME = WJT
//
make/{cur}_{GSM}.mak  PRJ_MODEL_NAME
//	PRJ_MODEL_NAME	= K220_N48
//
make/{cur}_{GSM}.mak  KEY_LAYOUT_STYLE
//	#KEY_LAYOUT_STYLE = CODEGEN_H660


// --project--logo
make\Option.mak  PRJ_NAME
make\Option.mak  PRJ_MODEL_NAME
make\Option.mak  PRJ_LOGO_NAME
//	__K220_D18E__
//	__K220_N48__
//	__WJT__


#########
// --MMI_VERSION
make/{cur}_{GSM}.mak  MMI_VERSION
//	MMI_VERSION = PLUTO_MMI

// --FLAVOR
make/{cur}_{GSM}.mak  FLAVOR
//	FLAVOR = NO_CAM


// --MMI_PROJ
make\Resgen.mak MMI_PROJ
//	MMI_PROJ = PLUTO

// --MMI_BASE
make/{cur}_{GSM}.mak  MMI_BASE
//	MMI_BASE = PLUTO_MMI

// --MMI_BASE_PRJ
make\Option.mak MMI_BASE_PRJ
make\Resgen.mak MMI_BASE_PRJ
//	MMI_BASE_PRJ = MMI_BASE = PLUTO


#########
// --CUSTOMER / PROJECT
make2.pl  echo^CUSTOMER
make\~buildinfo.tmp
//	CUSTOMER=K220_D18E 
//	PROJECT=gsm
make\Option.mak  (CUSTOMER)
make\MODEM.mak  (PROJECT)

// --ORIGINAL_CUSTOMER
make\Option.mak ORIGINAL_CUSTOMER
//	ORIGINAL_CUSTOMER = K220_D18E


#########
// --CUST_AUDIO
make\Option.mak  (BOARD_VER_CUST_AUDIO)
// --CUST_MEMORYDEVICE
make\Option.mak  (BOARD_VER_CUST_MEMORYDEVICE)
make/{cur}_{GSM}.mak  BOARD_VER

// --test
make\Codegen.mak (error )
//	$(warning BOARD_VER: $(strip $(BOARD_VER)))
//	$(error PLEASE check above dependency errors!)
//
//	FIXPATH=. 



#########
// --copy
make\Resgen.mak REFLIST_LIST += ref_list_
make\Resgen.mak 264  NEED_COPY_MMISWITCH
//    dst
plutommi\MMI\Inc\MMI_features_switch.h
// --copy--1--switch_list
//    src    => MMI_VERSION/MMI_PROJ
//           => "PLUTO_MMI"/"PLUTO"
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h
//    src    => ORIGINAL_CUSTOMER/ORIGINAL_CUSTOMER
//           => "{cur}"/"{cur}"
plutommi\Customer\CustResource\{cur}_MMI\MMI_features_switch{cur}.h
//    src    => ORIGINAL_CUSTOMER/ORIGINAL_CUSTOMER/FLAVOR
//           => "{cur}"/"{cur}"/"NO_CAM"
plutommi\Customer\CustResource\{cur}_MMI\MMI_features_switch{cur}NO_CAM.h
//    src    => PRJ_NAME/PRJ_NAME
//           => "{cur}"/"{cur}"
plutommi\Customer\CustResource\{cur}_MMI\MMI_features_switch{cur}.h
plutommi\Customer\CustResource\{cur}_MMI\MMI_features_switch{cur}.h
//
// --copy--2--data
//    src    => MMI_BASE/MMI_BASE_PRJ
//           => "PLUTO_MMI"/"PLUTO"
plutommi\Customer\CustResource\PLUTO_MMI\CustMiscDataPLUTO.c
//    src    => ORIGINAL_CUSTOMER/ORIGINAL_CUSTOMER
//           => "{cur}"/"{cur}"
//plutommi\Customer\CustResource\{cur}_MMI\CustMiscData{cur}.c
//
// --copy--3--resdef
//    src    => MMI_BASE/MMI_BASE_PRJ
//           => "PLUTO_MMI"/"PLUTO"
plutommi\Customer\CustResource\PLUTO_MMI\CustResDefPLUTO.h SSC_SW_VERSION
//    src    => ORIGINAL_CUSTOMER/ORIGINAL_CUSTOMER
//           => "{cur}"/"{cur}"
//plutommi\Customer\CustResource\{cur}_MMI\CustResDef{cur}.h
//    src    => PRJ_NAME
//           => "{cur}"
plutommi\Customer\CustResource\{cur}_MMI\CustResDef.h SSC_SW_VERSION
//
// --copy--4--reflist
//    src    => MMI_BASE
//           => "PLUTO_MMI"
plutommi\Customer\CustResource\PLUTO_MMI\ref_list.txt
//    src    => ORIGINAL_CUSTOMER
//           => "{cur}"
plutommi\Customer\CustResource\{cur}_MMI\ref_list.txt
//    src    => PRJ_NAME
//           => "{cur}"
plutommi\Customer\CustResource\{cur}_MMI\ref_list.txt




[1.5] image
// --path
features:\CustResDef.h  CUST_IMG_PATH
// image
plutommi\Customer\Images\
plutommi\Customer\Images\{cur}\
images:\

// ==>image
Save:node\C\study\Macro_res_image_MTK.h


//	资源子路径:
//features:CustResDef.h #define^IMG_MAINMENU_SUB_DIR
//plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
//plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径

//	资源子路径 临时文件(原图不存在, 资源不生成):
//plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
//plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
//plutommi\Customer\CustResource\CustImgDataRes_2.c


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
// --path
features:\CustResDef.h  CUST_ADO_PATH
// audio
plutommi\Customer\AUDIO\
plutommi\Customer\AUDIO\{cur}\
audio:\

// ==>image
Save:node\C\study\Macro_res_ring_MTK.h

// --mp3--powonoff
make/{cur}_{GSM}.mak  __MMI_POWERRING_SAME__
make/{cur}_{GSM}.mak  __MMI_POWERONRING_MP3__
make/{cur}_{GSM}.mak  __AUDIO_SAME_AS_POWONOFF__
//
//plutommi\Customer\CustResource\{cur}_MMI\MMI_features_switch{cur}.h

## --开关机
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_TONE1
audio:UserProfiles\Tone\
//	AUD_ID_PROF_TONE1 --> cs01.mid
// --env--onoff
//		==>__MMI_POWER_ON_OFF_NO_CUSTOMIZE__
features:\MMI_features_switch{cur}.h  CFG_MMI_POWER_ON_OFF_NO_CUSTOMIZE


## --短信/来电
//plutommi\Service\ProfilesSrv\ProfilesSrvMain.c  AUD_ID_PROF_TONE1^+^index

// --tone--call
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_TONE1
//	AUD_ID_PROF_TONE1 --> play_mp3.mp3
audio:\
//	AUD_ID_PROF_TONE2 --> cs02.mp3
audio:UserProfiles\Tone\
//	AUD_ID_PROF_TONE3 --> cs03.mid
//	AUD_ID_PROF_TONE4 --> cs04.mid
//	AUD_ID_PROF_TONE5 --> cs05.mid

// --ring--sms
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_RING1
//	AUD_ID_PROF_RING1 --> play_mp3.mp3
audio:\
//	AUD_ID_PROF_RING2 --> s1imy06.imy
audio:UserProfiles\Ring\
//	AUD_ID_PROF_RING3 --> s1imy07.imy
//	AUD_ID_PROF_RING4 --> s1imy04.imy
//	AUD_ID_PROF_RING5 --> s1imy08.imy

// --play
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_MP3_PLAY_0
//	AUD_ID_MP3_PLAY_0 --> play_mp3.mp3
audio:\

// --__SOS__
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_SOS_MP3
//	AUD_ID_SOS_MP3 --> SOS.mp3
audio:\

// --HERO
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res TIHO_ID_PROF_NUM1_0
//	TIHO_ID_PROF_NUM1_0 --> no

// --TTS--local
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_NUM1_DOT



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
// 英文、中文、特殊字符" ?￠"
plutommi\Customer\CustResource\FontRes.c   g_small_font_data_array
// 中文--3309
vendor\font\inc\L_Chinesec_small.h  AGB2312_TRIM_32_BOLD_RangeInfo
// 乱码--嗄--55c4--50516

// 字体高度
Save:node\C\study\Macro_gui_MTK.h  __font__


// --英文
//		==>__MMI_FONT_LATIN_BASIC__
//		==>__MMI_FONT_RESOURCE_SLIM__
//		====>MCT_SMALL_FONT/MCT_MEDIUM_FONT/MCT_LARGE_FONT
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_FONT_RESOURCE_SLIM__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_FONT_RESOURCE_SLIM__
// --英文-bdf
vendor\font\FontData\OfficialFont\Latin\
vendor\font\FontData\OfficialFont\Latin\pluto_small.bdf

// --俄文
//   2.4屏用Russian_18,20号字;其他:dotum24太大;arial_ru_20缺字符;Cyrillic_20不熟悉;
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_RUSSIAN__
// --俄文-bdf
vendor\font\FontData\OfficialFont\RUSSIAN\
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf

// --中文
vendor\font\FontData\OfficialFont\Chinese\
vendor\font\MTK\official\project\plutommi\content\src\MainLcd160X128\res_gen_font.cpp __MMI_LANG_SM_CHINESE__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_SM_CHINESE__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_SM_CHINESE__
// --中文-bdf
vendor\font\FontData\OfficialFont\Chinese\
// --中文-128*160
//	font_22_type.bdf-----------L12, 粗, 2.12M
//  HW2424_18_New.BDF----------V35, 大, 1.51M
//  GB2312_24.BDF-----------------, --, 2.00M
//	common.BDF-----------------Def, --, 2.15M
// --中文-240*320
//	S_36_CHINESE.BDF-----------D58, 粗, 3.20M
//	GB2312_TRIM_32_BOLD.BDF----D58, 粗, 2.20M


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

// dial
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp L_MTK_DiallingFont_27


// 字体
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT


//	输入法
features:\MMI_features_switch{cur}.h  CFG_MMI_CSTAR_MULTITAP
//对应语言之输入法
plutommi/customer/lcdresource/mainlcd240x320/
plutommi/customer/lcdresource/mainlcd240x320/inputmethod/inc/Zi8DatZH_Prc.h


//	参考: 制作字库
https://wenku.baidu.com/view/ea58850bf78a6529647d53a1.html
https://blog.csdn.net/zzsg2005/article/details/4330253


// 大字体
make/{cur}.mak  __COMMON_HW2424_24_FONT__


[1.10] 



[1.11] 




[1.12] 




[1.13] 
// imgview--cui
plutommi\CUI\ImageViewCui\res\imgviewcui.res  STR_ID_IMGVIEWCUI_NAME
// imgview--reg
plutommi\mmi\Inc\mmi_pluto_res_range_def.h  CUI_IMAGEVIEWER
// imgview--def
plutommi\Customer\CustomerInc\mmi_rp_cui_imageviewer_def.h STR_ID_IMGVIEWCUI_NAME
// imgview--app_info
plutommi\Customer\CustResource\mmi_rp_app_data.c  RESOURCE_BASE_CUI_IMAGEVIEWER

// hero_engine--app
plutommi\mmi\HeroEngine\HeroEngineRes\HeroEngine.res  MENU_HERO_HCCALL
// hero_engine--reg
plutommi\mmi\Inc\mmi_res_range_def.h  APP_HERO_ENGINE
// hero_engine--def
plutommi\Customer\CustomerInc\mmi_rp_app_hero_engine_def.h MENU_HERO_HCCALL
// hero_engine--app_info
plutommi\Customer\CustResource\mmi_rp_app_data.c  RESOURCE_BASE_APP_HERO_ENGINE

// build...
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_Hero.c  heroResDef
plutommi\mmi/heroengine/heroengineinc/heroResDef.h  mmi_rp_all_defs
plutommi\Customer\customerinc/mmi_rp_all_defs.h  mmi_rp_app_mre_def
plutommi\Customer\CustomerInc\mmi_rp_app_hero_engine_def.h heroResDef

[1.14] tmp_project
//
plutommi\Customer\Images\K220_GZ_N61_WJT\
plutommi\Customer\AUDIO\K220_GZ_N61_WJT\
plutommi\Customer\CustResource\K220_GZ_N61_WJT_MMI\
build\K220_GZ_N61_WJT\
_bat\build
make/K220_V19_WD_{GSM}.mak  XLS
make/K220_V88_WD_{GSM}.mak  XLS
make/K220_V35_WD_{GSM}.mak  __PHONE_SALE_SERVERS_QUICK_CONFIG__
//



[1.15] tmp_menu
//
MENU_SETTING_LANGUAGE


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


