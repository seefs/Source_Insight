

//Ŀ¼[Num][Ca]:
// 1. common
Save:node\C\study\Macro_res_MTK.h \[1.1\] ��Ŀ����
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




[1.1] ��Ŀ����
// new pro
Save:node\C\project\Macro_c_path.h  _mtk_copy_


// (1).nv
make/{cur}_GSM.mak  BOARD_VER_CUST_AUDIO
//	BOARD_VER_CUST_AUDIO = K220_Z97_AUDIO_BB
// 
make\custom\custom.mak BOARD_VER_CUST_AUDIO
//custom\drv\audio\{nv}\
custom\audio\{nv}\
// 
//custom\common\PLUTO_MMI
//custom\meta\K220M_YGW_BB
// 
// --nv set
Save:set\Macro_Set_Path_mtk.h  nvKey


// (2).board
make/{cur}_GSM.mak  BOARD_VER
//	BOARD_VER = K220M_BH_BB
//
// --dws
custom\codegen\{board}\
custom\codegen\{board}\codegen_H660.dws
// --MemoryDevice
custom\system\{board}\
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NAND_FS_SIZE
// 
// --board set
Save:set\Macro_Set_Path_mtk.h  boardKey


// (3).rf
make/{cur}_GSM.mak  RF_MODULE
//	RF_MODULE = MT6261RF_HS8235L_CUSTOM



// (4).consistent
make/{cur}_GSM.mak  COM_DEFS_FOR
//	COM_DEFS_FOR_MT6261RF_HS8235L_CUSTOM
//	COM_DEFS_FOR_K220D_QQVGA_LCM



// (5).config_account
custom\common\custom_config_account.c  g_config_account_gprs
//custom\common\
//custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h

// (6).userprofile
custom\common\userprofile_nvram_def.h
//custom\common\
//custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h



//ctrl+C�Զ�������ļ�, ����Ŀ->����Ŀ
//����Ŀ����:
//newPro = K220_Z97_MGUO

// bcmp
cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h


### newPro
mk, bld, features, nv, image, audio



[1.2] mk, features, nv
// --mk
make/{cur}_GSM.mak

// --bld
make/Verno_{cur}.bld   VERNO

// --features
plutommi\Customer\CustResource\{cur}_MMI\
features:\\

// --nv
custom\audio\{nv}\
custom\audio\{nv}\nvram_default_audio.c


###
// --project
make/{cur}_GSM.mak  PRJ_NAME
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
plutommi\Customer\CustResource\PLUTO_MMI\CustResDefPLUTO.h SSC_SW_VERSION
plutommi\Customer\CustResource\ThemeRes.c  theme_defaultTheme
plutommi\Customer\CustResource\Themecomponents.h  title_text_color_defaultTheme
plutommi\Customer\CustResource\PLUTO_MMI\ref_list.txt

// --features
plutommi\mmi\Inc\MMI_features.h  STATUS_BAR




[1.3] str
//	�ַ�������
make\Resgen.mak REFLIST_LIST += ref_list_
//
features:\
features:\ref_list.txt
// custom
make/{cur}_GSM.mak  NEW_CUS_REL_TRACE_DEFS
//	USE_PROJECT_STRING_LIST = TRUE

//
//make/{cur}_GSM.mak REF_LIST_BRANCH = M107


// --str--out
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
// --str--charger
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\mmi\Inc\mmi_res_range_def.h RESOURCE_BASE_TABLE_ITEM_PATH( , ".\\mmi\\...\\Res\\")


//	�ַ�������:
open:plutommi\Customer\STMTView.exe



[1.4] res
#########
// --PRJ_NAME
make/{cur}_GSM.mak  PRJ_NAME
//	PRJ_NAME = K220_D18E
//
make/{cur}_GSM.mak  PRJ_MAINBOARD_NAME
//	PRJ_MAINBOARD_NAME = K220M
//
make/{cur}_GSM.mak  PRJ_LOGO_NAME
//	PRJ_LOGO_NAME = WJT
//
make/{cur}_GSM.mak  PRJ_MODEL_NAME
//	PRJ_MODEL_NAME	= K220_N48
//
make/{cur}_GSM.mak  KEY_LAYOUT_STYLE
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
make/{cur}_GSM.mak  MMI_VERSION
//	MMI_VERSION = PLUTO_MMI

// --FLAVOR
make/{cur}_GSM.mak  FLAVOR
//	FLAVOR = NO_CAM


// --MMI_PROJ
make\Resgen.mak MMI_PROJ
//	MMI_PROJ = PLUTO

// --MMI_BASE
make/{cur}_GSM.mak  MMI_BASE
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


#########
// --copy
make\Resgen.mak REFLIST_LIST += ref_list_
// --copy--1--switch_list
//    dst    => MMI_VERSION/MMI_PROJ
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
//
// --copy--2--data
//    dst    => MMI_BASE/MMI_BASE_PRJ
//           => "PLUTO_MMI"/"PLUTO"
plutommi\Customer\CustResource\PLUTO_MMI\CustMiscDataPLUTO.c
//    src    => ORIGINAL_CUSTOMER/ORIGINAL_CUSTOMER
//           => "{cur}"/"{cur}"
//plutommi\Customer\CustResource\{cur}_MMI\CustMiscData{cur}.c
//
// --copy--3--resdef
//    dst    => MMI_BASE/MMI_BASE_PRJ
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
//    dst    => MMI_BASE
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
features:\CustResDef.h  CUST_ADO_PATH
// audio
plutommi\Customer\AUDIO\
plutommi\Customer\AUDIO\{cur}\
audio:\
// image
plutommi\Customer\Images\
plutommi\Customer\Images\{cur}\
images:\



//	��Դ��·��:
//features:CustResDef.h #define^IMG_MAINMENU_SUB_DIR
//plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
//plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR �������·��

//	��Դ��·�� ��ʱ�ļ�(ԭͼ������, ��Դ������):
//plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
//plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
//plutommi\Customer\CustResource\CustImgDataRes_2.c


// --���˵�ͼƬ
images:MainLCD\MainMenu\SLIM_MATRIX
images:MainLCD\MainMenu\PAGE
//
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res __MMI_MAINMENU_PAGE_SUPPORT__
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR �������·��
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res 850


// --��ֽ
images:MainLCD\Phonebook\
images:MainLCD\IdleScreen\Wallpaper
features:MMI_features_switch{cur}.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR


// --���ػ�Logo:(��KM���״���)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
images:MainLCD\Active\poweronoff\
images:MainLCD\Active\poweronoff\logo.BMP


// --���ػ�����:
//  ������ͬ������ ���鿪������ʱ����ȼ�0.5s �ػ�����ʱ���2s
images:MainLCD\Active\Poweronoff\
images:MainLCD\Active\Poweronoff\logo.bmp
images:MainLCD\Active\Poweronoff\POON.gif
images:MainLCD\Active\Poweronoff\pooff.gif
//
features:MMI_features_switch{cur}.h CFG_MMI_POWER_ON_OFF_DISPLAY
features:MMI_features_switch{cur}.h CFG_MMI_RES_TYPE_POWER_ONOFF_SEL
plutommi\mmi\Inc\MMI_features.h  __MMI_RES_TYPE_POWER_ONOFF_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif

//
make/{cur}_GSM.mak SBD_POWER_ONOFF_SAME_LOGO
//~ 
//~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR ����logo����ɫ


// --�ػ���綯��
make/{cur}_GSM.mak  __MMI_POWERONRING_MP3__
//
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
images:MainLCD\UIELEMENT\charger\

// idle--bat
images:MainLCD\IdleScreen\Statusicons\battery\SI_BAT\

// idle--sim
Save:node\C\study\Macro_gui_MTK.h  statusbar:sim
// --sim--normal
images:MainLCD\IdleScreen\Statusicons\DualSIM\Master\SI_SIG1\
images:MainLCD\IdleScreen\Statusicons\DualSIM\Slave\SI_SIG2\
// --sim--closed
images:MainLCD\IdleScreen\Statusicons\DualSIM\Master\SI_SIG1_CLOSE\
images:MainLCD\IdleScreen\Statusicons\DualSIM\Slave\SI_SIG2_CLOSE\

	

// --����:
features:MMI_features_switch{cur}.h  #define^CFG_MMI_SCREEN_SAVER
//
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_IDLE_DATE_0             #����
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_TECHNO_DIGITAL_CLOCK_0  #idle
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_IDLE_DAY_0              #��
// --������--��
images:MainLCD\IdleScreen\lock_day_new\
// --���ְ�--����
images:MainLCD\IdleScreen\lock_new\
// --���ֺ�--idle
images:MainLCD\IdleScreen\Techno\DigitalClock\
//

// --����
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_DIALING_INPUT_M0          #С������
plutommi\Framework\GUI\GUI_Res\Gui.res  IMG_DIALING_0                 #�������
// --��--С������
images:MainLCD\DialingScreen\INPUT\MEDIUM\
// --��--�������/mid-icon
images:MainLCD\DialingScreen\DialNum\
images:MainLCD\DialingScreen\DialNum_2\


// --Mp3
plutommi\MtkApp\AudioPlayer\AudioPlayerRes\AudioPlayer.res  vol_full
plutommi\Customer\CustResource\PLUTO_MMI\resource_audply_skins.c  1829
//
images:MainLCD\Multimedia\

// call
plutommi\Service\Gsm3gCallSrv\GCallSrv.res  CL_NET
//
images:MainLCD\Call\Connect\




###
//	ͼƬ��Դ��С:
images:\
images:images_file_list.ini
plutommi\Customer\ResGenerator\debug\
plutommi\Customer\ResGenerator\debug\image_info_updated_all.txt POON ��С
//	ͼƬԤ��:
plutommi\Customer\ResGenerator\debug\image_resource_usage.htm

//
//	���ػ������Ƴ���ֽ:
plutommi/mmi/Setting/SettingInc/PhoneSetupResList.h #define^MAX_POWER_ON_IMG 




[1.6] ring
// --tone
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_TONE1
//	AUD_ID_PROF_TONE1 --> play_mp3.mp3
audio:\
//	AUD_ID_PROF_TONE2 --> cs02.mp3
audio:UserProfiles\Tone\
//	AUD_ID_PROF_TONE3 --> cs03.mid
//	AUD_ID_PROF_TONE4 --> cs04.mid
//	AUD_ID_PROF_TONE5 --> cs05.mid

// --ring
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
audio:

// --SOS
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_SOS_MP3
//	AUD_ID_SOS_MP3 --> SOS.mp3
audio:

// --HERO
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res TIHO_ID_PROF_NUM1_0
//	TIHO_ID_PROF_NUM1_0 --> no



#####
// --��������
plutommi\MtkApp\AudioPlayer\AudioPlayerSrc\AudioPlayerMainScreen.c __AUDIO_PLAY_TEST__
// Ĭ��������������������
//  --> AUD_ID_PROF_RING4
plutommi\mmi\Organizer\OrganizerInc\AlarmProt.h ALARM_DEFAULT_RING_ID
//


// --sms/call
plutommi\CUI\ToneSelectorCui\ToneSelectorCuiForSLIM.c  void^cui_tone_selector_creat_tone_list
//    CUI_TONESEL_TONE_ID_BEGIN = AUD_ID_PROF_TONE_BEGIN + 1, 
//    CUI_TONESEL_RING_ID_BEGIN = AUD_ID_PROF_RING_BEGIN + 1, 





//
//����
// 1) ������������
cui_tone_selector_creat_tone_list ������������
// 2) ��ӿ�ѡ���ļ�
mmi_prof_customize_scrn_csk_hdlr  SIM1_MSG_TONE_ITEM flag = 2;��ӿ�ѡ���ļ�


//	�����ļ�:
//	�龰Ĭ�ϵȼ�:
custom\common\userprofile_nvram_def.c SBD_POWER_ONOFF_RING_SAME
audio:UserProfiles\Tone\
audio:UserProfiles\Tone\R_POWER_1.mp3
//	������Դ��С:
plutommi\Customer\ResGenerator\debug\audio_resource_usage.txt
//	���ػ�����:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res R_POWER_1.mp3
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 ����
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_TONE1
//	��������:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res AUD_ID_PROF_RING1





[1.7] 




[1.8] 


[1.9] font
//
plutommi\Customer\CustResource\FontRes.c


// --Ӣ��
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_ENGLISH__
// --Ӣ��-bdf
vendor\font\FontData\OfficialFont\Latin\
vendor\font\FontData\OfficialFont\Latin\pluto_small.bdf

// --����
//   2.4����Russian_18,20����;����:dotum24̫��;arial_ru_20ȱ�ַ�;Cyrillic_20����Ϥ;
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_RUSSIAN__
// --����-bdf
vendor\font\FontData\OfficialFont\Chinese\
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf

// --����
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_SM_CHINESE__
// --����-bdf
vendor\font\FontData\OfficialFont\Chinese\

// --��˹
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd240X320\L_MTK_Arabic_vk_9.h
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd128X160\L_1_Pluto_Small.h
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_BENGALI__
// --��˹-bdf
vendor\font\FontData\OfficialFont\Farsi\Farsi14.bdf

// --�ϼ���
vendor\font\FontData\OfficialFont\Bengali\

// --
vendor\font\FontData\OfficialFont\Dialing\L_MTK_DiallingFont_27.bdf


// ����
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT
//	���뷨
features:MMI_features_switchK220_Z97_MGUO.h  CFG_MMI_CSTAR_MULTITAP
//	�ο�: �����ֿ�
https://wenku.baidu.com/view/ea58850bf78a6529647d53a1.html


// ������
make/{cur}.mak  __COMMON_HW2424_24_FONT__


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


