

mkPath = SPDE_PRJ\K220U_SHY_517T\project_UIS8910_ROM_16MB_DS_USER.mk
mk:\\
cfgPath = SPDE_PRJ\K220U_SHY_517T\uis8910_phone_user_base_config.cfg
cfg:\\
configPath = MS_Customize\source\product\config
config:\\
sensorsPath = MS_Customize\source\product\driver\sensors
sensors:\\
//buildPath = build\UIS8910_ROM_16MB_DS_USER_builddir
buildPath = build\UIS8910_ROM_16MB_SS_WA07U_F30X_USER_builddir
build:\\



//Ŀ¼[Num][Ca]:
// ��Ŀѡ�� ����
Save:node\C\project\Macro_Note_MTK.h \[1.1\] set project
Save:node\C\project\Macro_Note_MTK.h \[1.2\] MTK����ָ��
Save:node\C\project\Macro_Note_MTK.h \[1.3\] KEY
Save:node\C\project\Macro_Note_MTK.h \[1.4\] LCD
Save:node\C\project\Macro_Note_MTK.h \[1.5\] CAM
Save:node\C\project\Macro_Note_MTK.h \[1.6\] TP
Save:node\C\project\Macro_Note_MTK.h \[1.7\] ECG
Save:node\C\project\Macro_Note_MTK.h \[1.8\] hr
Save:node\C\project\Macro_Note_MTK.h \[1.9\] breathled
Save:node\C\project\Macro_Note_MTK.h \[1.10\] 
// ����
Save:node\C\project\Macro_Note_MTK.h \[2.1\] �ֿ�---------mmi_res_prj_def.h
Save:node\C\project\Macro_Note_MTK.h \[2.2\] ��ɫ---------common_mdu_def.h
Save:node\C\project\Macro_Note_MTK.h \[2.3\] ����, ����
Save:node\C\project\Macro_Note_MTK.h \[2.4\] fm
Save:node\C\project\Macro_Note_MTK.h \[2.5\] ����, ����----mmi_custom_define.h
Save:node\C\project\Macro_Note_MTK.h \[2.6\] �龰ģʽ ��Ƶ����
Save:node\C\project\Macro_Note_MTK.h \[2.7\] �ֵ�Ͳ
Save:node\C\project\Macro_Note_MTK.h \[2.8\] U��-----------mmisrvfmm_export.h 
Save:node\C\project\Macro_Note_MTK.h \[2.9\] �汾��--------version_software_mocor.h
Save:node\C\project\Macro_Note_MTK.h \[2.10\] �ͺ�---------bt_cfg.h
Save:node\C\project\Macro_Note_MTK.h \[2.11\] ��Ļ��ʱ��---mmidisplay_data.h
Save:node\C\project\Macro_Note_MTK.h \[2.12\] ָ��---------mmiset_security.h
Save:node\C\project\Macro_Note_MTK.h \[2.13\] ����---------mmienvset_internal.h
Save:node\C\project\Macro_Note_MTK.h \[2.14\] ���---------
Save:node\C\project\Macro_Note_MTK.h \[2.15\] trace
Save:node\C\project\Macro_Note_MTK.h \[2.16\] ��չ��Ŀ
Save:node\C\project\Macro_Note_MTK.h \[2.17\] Build����
Save:node\C\project\Macro_Note_MTK.h \[2.18\] 
Save:node\C\project\Macro_Note_MTK.h \[2.19\] 
Save:node\C\project\Macro_Note_MTK.h \[2.20\] 





[1.1] ��Ŀ·���滻
//��ǰ��Ŀ
// �鿴--ѡ����ʷ��Ŀ�б�: 
Save:set\Macro_Set_Note.h \[1.2\] MTK

--------------------------------------------------
// Ĭ����Ŀ(�����ϴ�svn) [Cs]:
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm
	
// ��ǰ��Ŀ:
set XG05_KM_Q2407_SP5000_F2 M103_KEMAN gprs
set M610_KM_V2411_SP6000_F2 M610 gprs
set M610_KM_V2411_SP6000_F2 M610 gprs
set M115_JGW_D2_X191_F2 M115 gprs
set M039_BLH_ZX M039 gprs
set M107_XYZN_S2_4A_WESTERN_F2 M107 gprs


// ����projectsĿ¼:	
setPath old (����һ�а�F5, ��ʼ�滻)
setPath new (����һ�а�F5, ��ʼ�滻, ·��Ϊ projects\...)

setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��); �Կո�ֿ�; ��Ҫֱ���滻(M105<->M105_MLT ��ʱδ�ж�)



//
setPath old (����һ�а�F5, ��ʼ�滻)
setPath new (����һ�а�F5, ��ʼ�滻, ·��Ϊ projects\...)
	
#### set project path auto replace start ####
/*
��Ŀ·��: (�ϲ��������滻����)
//������ ��˫б��
CurProPath = projects\\M107\\M107_XYZN_S2_4A_WESTERN_F2

Ĭ��·��ת��: 
//���õ������� ����ע�͵�
//����б�ܶ������滻
//��2��·�������(CurProPath)
//�����У���β�ӿո񣬷�ֹ�����滻�������
setProPath plutommi\\Customer\\Audio\\M107\\M107_XYZN_S2_4A_WESTERN_F2 = AUDIO\\PLUTO
setProPath plutommi\\Customer\\Images\\M107\\M107_XYZN_S2_4A_WESTERN_F2 = Images
#setProPath plutommi\\Customer\\CustResource\\M107_MMI\\M107_XYZN_S2_4A_WESTERN_F2 = Resource
setProPath plutommi\\Customer\\CustResource\\M107_MMI\\MMI_features_switchM107_XYZN_S2_4A_WESTERN_F2.h = Resource\\MMI_features_switchPLUTO.h
#setProPath plutommi\\Customer\\CustResource\\M107_MMI\\ref_list_M107_XYZN_S2_4A_WESTERN_F2.txt = Resource\\ref_list.txt
setProPath plutommi\\Customer\\CustResource\\M107_MMI\\ref_list_M107_XYZN_S2_4A_WESTERN_F2.txt = Resource\\ref_list.txt

setProPath plutommi\\Customer\\CustResource\\M107_MMI\\M107_XYZN_S2_4A_WESTERN_F2\\Themecomponents.h = Resource\\Themecomponents.h
setProPath plutommi\\Customer\\CustResource\\M107_MMI\\M107_XYZN_S2_4A_WESTERN_F2\\ThemeRes.c = Resource\\ThemeRes.c

setProPath make\\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak = M107_XYZN_S2_4A_WESTERN_F2_gprs.mak
setProPath make\\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld = Verno_M107_XYZN_S2_4A_WESTERN_F2.bld
*/
#### set project path auto replace end ####





[1.2] 
cmd: cmd


����1:
make M107_XYZN_S2_4A_WESTERN_F2 gprs new
make K220_D18E GSM new
	

����2:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\New_common.bat


����ģ��
make M107_XYZN_S2_4A_WESTERN_F2 gprs r
make M107_XYZN_S2_4A_WESTERN_F2 gprs remake
make M107_XYZN_S2_4A_WESTERN_F2 gprs remake custom
make M107_XYZN_S2_4A_WESTERN_F2 gprs remake plutommi

������Դ (VS���ű��뼴��)
make M107_XYZN_S2_4A_WESTERN_F2 gprs Resgen


ģ����: (��mk���ر�)
make M107_XYZN_S2_4A_WESTERN_F2 gprs gen_modis
make K220_D18E GSM gen_modis
vs08:MoDIS_VC9\MoDIS.sln

ģ������NV��, ���б���, ɾ���ļ�:
MoDIS_VC9\WIN32FS\DRIVE_C


// mtk--���ع���
Save:node\C\install\Macro_C_Install.h \[3.4\] mtk--���ع���:



[1.3] 




[1.4] 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOMER_NAME = M107
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak MAIN_LCD_SIZE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak _COMBO_LCM = ST7735S GC9106	  ������
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SYNC_LCM_SUPPORT 			  ������ TE��
//make\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak 2_DATA_LANE_LCM 		  �� ����/����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak DUAL_CAMERA_SUPPORT 	  		  ����ͷ����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CMOS_SENSOR GC6133_SERIAL	  ����ͷ����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CMOS_SENSOR_BAK1 SP0821_SERIAL ����ͷ����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak FLASHLIGHT_TYPE				  �����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION 			  	  �Զ����

//
make/K220_D18E_GSM.mak  __MMI_POWERONRING_MP3__


Make �����:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak REF_LIST_BRANCH  ����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_DEVICE
custom/system/FARSIGHTED61M_CN_11C_BB/custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h __MMI_SUPER_BATTERY__



features:
plutommi/mmi/Inc/MMI_features.h PEER_CONTROL
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_DYNAMIC_SIM_DYNAMIC_UI
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h WHITELIST
	


�汾��[Cv]:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld BUILD_DATE �汾�ļ�
//
make/Verno_K220_D18E.bld  VERNO




[1.5] 

// ��CAM����:
	MJPG_ENCODE = FALSE
	CMOS_SENSOR = BF3A02_SERIAL  #NONE
	SENSOR_TYPE = YUV #NONE
	ISP_SUPPORT = FALSE
// ��CAM����:
	Reading custom_data succeeded.
	Start to parse the custom NVRAM DATA!
	make: *** [.\build\M115_JGW_D2_X191_F2\gprs\MT6261r\codegen_dep\cgen_cfg.det] Error 253




[1.6] 




[1.7] 




[1.8] 




[1.9] 




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



[2.1] 


[2.2] 


[2.3] 
//	modis: ����
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h 
plutommi\Customer\CustResource\Themecomponents.h
//	��������:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h UI_filled_area^popup_screen_bg_filler_defaultTheme
//	���ڸ�������ɫ:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h #define^img_menuitem_single_line_highlight_filler_color



[2.4] 


[2.5] ����, Ĭ������:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_LANG_
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_LANG_.*(__ON__)
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res NVRAM_SETTING_LANG
	Ĭ�����뷨:
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res NVRAM_SETTING_PREFER_INPUT_METHOD
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res RESTORE_PREFER_INPUT_METHOD
plutommi\Framework\InputMethod\Inc\ImeGprotEnums.h mmi_imm_input_mode_enum �ο����ö��, ע���λ2��
	�����ַ�����, ���뷨˿ӡ:
vendor/InputMethod/mtk/mtkmultitap.c g_multitap_pashto
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_urdu
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_fr
	�����������--Cstar:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_MULTITAP_BANGLA_SPEC
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_CSTAR_MULTITAP
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_MULTIGRAPH_SUPPORT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_IRE_SLIM	�ر�, # 1�������ַ����
plutommi\Framework\IndicLanguages\IndicLanguagesSrc\Bengali.c


	ʱ��:
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res TIME_FORMAT
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res DATE_FORMAT
	ϵͳʱ��:
custom/drv/misc_drv/_Default_BB/MT6261/custom_hw_default.c DEFAULT_HARDWARE_YEAR

	����:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
	�����:
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h CAMERA_DEFAULT_SETTING_FLASH
	�����Ƶȼ�:
plutommi\Service\Inc gpiosrvgprot	
	�Զ�����:
plutommi\Service\NITZSrv\res\NITZSrv.res NVRAM_SETTING_AUTOUPDATE_DT_TIME_STATUS 
plutommi\mmi\Setting\SettingRes\PhoneSetting.res NVRAM_AUTOUPDATE_DT_STATUS ??�������;
	Ĭ�ϳ���/ʱ��
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res id="CURRENT_CITY"
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res <STRING^id="STR_WCLOCK_CITY78"/>
plutommi\Customer\CustResource\PLUTO_MMI\resource_world_clock_city.c TimeZoneData �¼�ʱ��
//  Lima �C Peru   GMT-5
//	{-5, 		STR_WCLOCK_Lima,		STR_WCLOCK_CITY_ABBRE10,63, 98, 1},
	
//	modis: ��������ʱ��
Save:node\C\study\Macro_modis_MTK.h	 setting:datetime
	����ʱ��:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_HFTIME
	����ʱ��:
plutommi/mmi/ScrLocker/ScrLockerRes/ScrLocker.res <MENU^id="MENU_ID_SLK_TIME_SETTING_MENU"
plutommi/mmi/ScrLocker/ScrLockerSrc/ScrLockerSetting.c #define^MMI_SLK_SET_SELECTION_DEFAULT


	�ֻ�׷��:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res mmi_rp_app_mobile_tracker_def.h
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res MENU_ID_MOBILE_TRACKER
plutommi\mmi\Inc\ProcedureConfig.h KM_MMI_FRM_PROC_ID_MOBILE_TRACKER


[2.6] �龰ģʽ ��Ƶ����
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio.c
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio_M107_XYZN_S2_4A_WESTERN_F2.h
GAIN_HND_SPH_VOL0  ��Ƶ���� ������ 
GAIN_NOR_SPH_VOL0	������

NVRAM_PROFILES_ACTIVATED �龰ģʽĬ��NV	
//	K��: K�����ò�ͬ���ܿ����˻�
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CLASSK_CHARGEPUMP_SUPPORT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_EXTERNAL_AMPLIFIER_CLASSK
	
//	ʡ��ģʽ:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __MMI_SUPER_BATTERY__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_MMI_PROFILE_RETRENCH__
//	�龰Ĭ�ϵȼ�:
custom\common\userprofile_nvram_def.c NVRAM_PROFILES_DEFAULT
custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h
//		mt_call_tone[ 4 ]:���Ӧ��������

//	����+��������ȼ�:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_NORMAL_MODE_VOICE_LEVEL //��Ͳ
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_HDSET_MODE_VOICE_LEVEL  //����
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_LDSPK_MODE_VOICE_LEVEL  //���


[2.7] 
//	modis: �ֵ�Ͳ
Save:node\C\study\Macro_modis_MTK.h	 \[2.9\] �ֵ�Ͳ
	



[2.8] 


[2.9] 


[2.10] ����[s]:
//	modis: ����
Save:node\C\study\Macro_modis_MTK.h	 \[2.9\] setting

//	modis: �ֵ�Ͳ:
Save:node\C\study\Macro_modis_MTK.h	 setting:torch
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_ELECTRIC_TORCH__			�ֵ�Ͳ

//	modis: ��籦:
Save:node\C\study\Macro_modis_MTK.h	 setting:charging
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __SBD_CHARGING_TREASURE_SWITCH__ ��籦
//	��籦ͼ��
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\StatusIcons\SI_CHARGING.png

//	EZFM:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_EASY_FM__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_FM_RADIO_BIND_EARPHONE


//	��������:
open:custom\drv\Drv_Tool\DrvGen.exe
custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M103_KM_2401_VGOTEL_F2.dws	 -- GPIO �� ��������
//	��������:
custom\common\custom_fm.c mmi_fm_key_info_struct^g_fm_keypad_table


//	��������:
custom\common\PLUTO_MMI\nvram_common_config.c #define^BT_NAME
//	USB ��������:
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c USB_PRODUCT_STRING

//U�̷�
// U�̷�--ע�ᣨ������Ч��
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c custom_usb_ms_init
// ���루������Ч��
CFG_MMI_SET_DEF_ENCODING_TYPE
	

// flash size
SIP_SERIAL_FLASH_SIZE = 32M_BITS
// Ĭ���ļ�ϵͳ�Ĵ�С����Last Bank Region�Ĵ�С��
tools\MemoryDeviceList\MemoryDeviceList_MT62XX_SinceXXX.xls
// xls -> SERIAL_FLASH -> Last Bank -> MTKSIP_6261_SF_32_01 -> {0x1000, 32}
tools\MemoryDeviceList\MemoryDeviceList_MT6261_Since11CW1352.xls
//		file system size = {0x1000, 32} = 0x1000 * 32 = 128KB.


//����mp3�ļ�



[2.11] 


[2.12] ָ��:
plutommi/AppCore/SSC/SSCPassEngine.c mmi_show_sar_info			SAR
plutommi/AppCore/SSC/SSCPassEngine.c SSCHandleIMEI		IMEI
plutommi/AppCore/SSC/SSCPassEngine.c hw_info_show			LCD+CAM��Ϣ
plutommi/AppCore/SSC/SSCOperate.c mmi_ssc_send_imei_get_ilm
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h SSC_ENGINEERING_MODE
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h SSC_ENGINEERING_MODE
// �ָ���������ָ��:
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_EF_PHONE_LOCK_DEFAULT
// �ֻ�����:
custom\common\hal\nvram\nvram_cust_pack.c COMMON_NVRAM_EF_MS_SECURITY_DEFAULT



//	modis: �ָ���������
Save:node\C\study\Macro_modis_MTK.h	 setting:Restore


[2.13] 


[2.14] 


[2.15] 


[2.16] ��չ��Ŀ
//ctrl+C�Զ�������ļ�, ����Ŀ->����Ŀ
//����Ŀ����:
newPro = M107_XYZN_S2_4A_WESTERN_F2

��չ��Ŀ[e]:

custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M107_XYZN_S2_4A_WESTERN_F2.dws
custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h
custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h
custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h
custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h
custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\audio.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\image.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h 
plutommi\Customer\CustResource\M107_MMI\M107_XYZN_S2_4A_WESTERN_F2\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ThemeRes.c 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ref_list.txt 
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h
plutommi\Customer\CustResource\M107_MMI\CustMiscDataM107.c
//CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 �������


----------------------------------------------------------------------------

�����������:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
ûװcygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

// open aaaa:
cmd: F:&&cd build\M107_XYZN_S2_4A_WESTERN_F2\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
// open aaaa:
build\M107_XYZN_S2_4A_WESTERN_F2\log\aaaa.txt Error:
// open cmd:
cmd: cmd



[2.17] Build����

build\M107_XYZN_S2_4A_WESTERN_F2\build.log cleanlib 				����ʱ��
build\M107_XYZN_S2_4A_WESTERN_F2\MT6261.log Finished: 			�������⿴���
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmiresource.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_framework.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_app.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\custom.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_service.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_check.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_mtk_resgenerator_make.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_xml_parse.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\conn_app.log Error:

build\M107_XYZN_S2_4A_WESTERN_F2\MMI_DRV_DEFS.mak  				�鿴���Ƿ����
build\M107_XYZN_S2_4A_WESTERN_F2\log\info.log  					�鿴���Ƿ����
build\M107_XYZN_S2_4A_WESTERN_F2\log\drv_features_option.log  	�鿴���Ƿ����
build\M107_XYZN_S2_4A_WESTERN_F2\log\MMI_features.log  			�鿴���Ƿ����

build\M107_XYZN_S2_4A_WESTERN_F2\log\vivaConfig.log Error:     #RAM�� ��0x003B6000��С
//#define NOR_BOOTING_NOR_FS_BASE_ADDRESS   0x003B4000  //<-  0x003B6000
//#define NOR_BOOTING_NOR_FS_SIZE 0x00048000  //<-  0x0004A000

build\M107_XYZN_S2_4A_WESTERN_F2\log\ckSysDrv.log Cluster^Size^(Bytes) 	��ʣ��ռ䣬nv��С
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   400   #�������Լ�С SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         405	#���˼�����ʼ��ַ, ͬ��----14K

build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_mtk_resgenerator_make.log		res���ͷ�ļ�
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_xml_preprocess.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\FileSystemConfig.log  Error:^Shortage
build\M107_XYZN_S2_4A_WESTERN_F2\log\ckImgSize.log Error: $The^Boundary^of^VIVA  �鿴ROM�ռ�
//The Boundary of VIVA bin				 = 3883008	bytes		#�����޸ĵ�λ 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!

build\M107_XYZN_S2_4A_WESTERN_F2\gprs\MT6261r\pregen_dep\emigen.det
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_mtk_resgenerator_make.log Error:


//ADDRESS:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\custom_MemoryDevice.h NOR_BOOTING_NOR_FS_BASE_ADDRESS




[2.18] 


[2.19] 


[2.20] 


[2.21] 


[2.22] 


