
����·������:
//basePath = 
//imagesPath = projects\M107\M107_XYZN_S2_4A_WESTERN_F2
imagesPath = plutommi\Customer\Images\K220_Y01A_MGUO\
images:\\
audioPath = plutommi\Customer\AUDIO\K220_Y01A_MGUO\
audio:\\
featuresPath = plutommi\Customer\CustResource\K220_Y01A_MGUO_MMI\
features:\\
buildPath = build\K220_Y01A_MGUO\
build:\\

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\C\project\Macro_cfg_MTK.h \[1.1\] //AUDIO, TONE
Save:node\C\project\Macro_cfg_MTK.h \[1.2\] //PB
Save:node\C\project\Macro_cfg_MTK.h \[1.3\] //SMS
Save:node\C\project\Macro_cfg_MTK.h \[1.4\] //MMS
Save:node\C\project\Macro_cfg_MTK.h \[1.5\] //BROWSER
Save:node\C\project\Macro_cfg_MTK.h \[1.6\] //BT
Save:node\C\project\Macro_cfg_MTK.h \[1.7\] //RECORD
Save:node\C\project\Macro_cfg_MTK.h \[1.8\] //Lcd---------------
Save:node\C\project\Macro_cfg_MTK.h \[1.9\] //shortcut----------menu
Save:node\C\project\Macro_cfg_MTK.h \[1.10\] USB
Save:node\C\project\Macro_cfg_MTK.h \[1.11\] 
Save:node\C\project\Macro_cfg_MTK.h \[1.12\] 
//
Save:node\C\project\Macro_cfg_MTK.h \[2.1\] //IM
Save:node\C\project\Macro_cfg_MTK.h \[2.2\] //DTMF
Save:node\C\project\Macro_cfg_MTK.h \[2.3\] ���ӱ���
Save:node\C\project\Macro_cfg_MTK.h \[2.4\] SCREENSAVER
Save:node\C\project\Macro_cfg_MTK.h \[2.5\] //CAMERA
Save:node\C\project\Macro_cfg_MTK.h \[2.6\] //DL
Save:node\C\project\Macro_cfg_MTK.h \[2.7\] //FM
Save:node\C\project\Macro_cfg_MTK.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_MTK.h \[2.9\] //SS
Save:node\C\project\Macro_cfg_MTK.h \[2.10\] //Tool
Save:node\C\project\Macro_cfg_MTK.h \[2.11\] lib-----------
Save:node\C\project\Macro_cfg_MTK.h \[2.12\] build ����������
Save:node\C\project\Macro_cfg_MTK.h \[2.13\] //build ʡ�ռ�
Save:node\C\project\Macro_cfg_MTK.h \[2.14\] //spiflash_cfg
Save:node\C\project\Macro_cfg_MTK.h \[2.15\] marco
Save:node\C\project\Macro_cfg_MTK.h \[2.16\] //Lib
Save:node\C\project\Macro_cfg_MTK.h \[2.17\] //FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_MTK.h \[2.18\] build map
Save:node\C\project\Macro_cfg_MTK.h \[2.19\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.20\] 






[1.1] 




[1.2] 




[1.3] 




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] USB

// USB���
USB_SUPPORT 	#USB���ܵ��ܿ���
USB_HS_SUPPORT	#usb high speed
USB_MASS_STORAGE_SUPPORT	#usb mass storage
USB_IN_NORMAL_MODE_SUPPORT	#���� mass storage
USB_COM_PORT_SUPPORT		#usb com port
USB_MULTIPLE_COMPORT_ENABLE	#ö�� com port


// ��U��
USB_MULTIPLE_COMPORT_ENABLE	?
USB_MASS_STORAGE_CDROM_SUPPORT	?
UART3_SUPPORT = FALSE


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



[2.1] 


[2.2] 


[2.3] ���ӱ���
//
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c void^mmi_sale_track2_init( )
//#if 0//def WIN32
//	return;
//#endif



[2.4] SCREENSAVER

plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_CURRENT_SCREENSVER_ID
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_CURRENT_SCREENSVER_ID

[2.5] 


[2.6] 


[2.7] FM
//
make/K220_Y01A_MGUO_GSM.mak FM_RADIO_ENABLE
//	FM_RADIO_I2S_PATH = FALSE   #TRUE
//	FM_RADIO_CHIP = NONE   #MT6261FM
//	FM_RADIO_HW_SEARCH = FALSE#TRUE
//	#COM_DEFS	+= __MMI_FM_NO_HEADSET__


// ��������Ͳ��
__FM_LCD_OLD_TEST__


[2.8] 
// wifi ����(����ģ�����಻��)
make/K220_Y01A_MGUO_GSM.mak CUSTOMER_APPLICATION


[2.9] 


[2.10] 


[2.11] lib
//	1.MRE
//	tool:�ر�MRE
make/K220_Y01A_MGUO_GSM.mak MRE_PACKAGE = SLIM
make/K220_Y01A_MGUO_GSM.mak MRE_CONTENT_NUMBER = 0
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
make/K220_Y01A_MGUO_GSM.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

//���׹ر�MRE
//@wanc ���׹ر�MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif

// 2.FLAVOR ��
//FLAVOR = GEMINI_2_NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/NONE
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_modis/MT6261/S00/gprs/FLAVOR/NONE
tst/database_modis/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_classb/MT6261/S00/gprs/FLAVOR/NONE
tst/database_classb/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF


[2.12] 

��������:
// 1) mk:
custom\system\BLEPHONE61D_11C_BB\scat_config\FeatureBased\ObjListGen\object.list.backup CUSTOM_OPTION

// 2) ��ʱĿ¼
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt

// 3) SIɾ��:��̫��
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt


[2.13] 


[2.14] 


[2.15] 


[2.16] 


[2.17] 


[2.18] build map
//
build:log\ckSysDrv.log Cluster^Size^(Bytes) 	��ʣ��ռ䣬nv��С
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   400   #�������Լ�С SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         405	#���˼�����ʼ��ַ, ͬ��----14K

build:log\resgen_mtk_resgenerator_make.log		res���ͷ�ļ�
build:log\resgen_xml_preprocess.log Error:
build:log\FileSystemConfig.log  Error:^Shortage
build:log\ckImgSize.log Error: $The^Boundary^of^VIVA  �鿴ROM�ռ�
//The Boundary of VIVA bin				 = 3883008	bytes		#�����޸ĵ�λ 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!

//ADDRESS:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\custom_MemoryDevice.h NOR_BOOTING_NOR_FS_BASE_ADDRESS





[2.19] 


[2.20] 

