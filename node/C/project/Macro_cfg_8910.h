
//Ŀ¼:
Save:node\C\project\Macro_cfg_8910.h \[1.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[1.2\] DTMF, Dial, SIM, ����
Save:node\C\project\Macro_cfg_8910.h \[1.3\] ���ӱ���
Save:node\C\project\Macro_cfg_8910.h \[1.4\] tihu--------------������
Save:node\C\project\Macro_cfg_8910.h \[1.5\] PLS---------------������
Save:node\C\project\Macro_cfg_8910.h \[1.6\] SIMPLIFY_TTS------���װ�������
Save:node\C\project\Macro_cfg_8910.h \[1.7\] 
Save:node\C\project\Macro_cfg_8910.h \[1.8\] 
Save:node\C\project\Macro_cfg_8910.h \[1.9\] LCD_SIZE------------�� Macro_info_{1}
Save:node\C\project\Macro_cfg_8910.h \[1.10\] simulator
Save:node\C\project\Macro_cfg_8910.h \[1.11\] lib--------------��3��
Save:node\C\project\Macro_cfg_8910.h \[1.12\] Lib--------------ƽ̨
Save:node\C\project\Macro_cfg_8910.h \[1.13\] fota----------adups
Save:node\C\project\Macro_cfg_8910.h \[1.14\] fota----------rs
Save:node\C\project\Macro_cfg_8910.h \[1.15\] 
Save:node\C\project\Macro_cfg_8910.h \[1.16\] mem
Save:node\C\project\Macro_cfg_8910.h \[1.17\] FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_8910.h \[1.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[1.19\] build/time
Save:node\C\project\Macro_cfg_8910.h \[1.20\] T������
Save:node\C\project\Macro_cfg_8910.h \[1.21\] 
Save:node\C\project\Macro_cfg_8910.h \[1.22\] 
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] IM
//IM_ENGINE = NONE


### IM
// ==>im
Save:node\C\study\Macro_im_8910.h  __input__



[1.2] DTMF, Dial, SIM, ����
//
MMI_DIALPANEL_DTMF_SUPPORT

// ����һ���ط�
app:phone\c\mmiphone.c  MMI_RESULT_E^HandleScellRssiInd

// sim�Ȳ��
MS_Customize\source\product\driver\gpio\gpio_prod.c  GPIO_SIMIntHandler


### ADN FDN SDN
//	ADN Abbreviated dialing number
//	FDN Fixed dialer number
//	BDN Barred dialing numbers
//	LND Last number dialed
//	SDN Service dialing number

//	ADN(SIM �绰��) ��λ���š����� + #��Ȼ��SNED����
//	FDN(SIM �̶�����) �̶����š������ú�ֻ�ܲ��������õĺ��룬���粻��Ӱ�졣��Ҫ����PIN2��
//	�ܷ�ʹ�ù̶����Ź���ȡ����SIM�������Լ��������Ƿ��ṩ�˹���
//	MSISDN(SIM ��������)
//	EN(SIM ��������)
//	LND(�ϳ� ME �� SIM ��󲦺�)
//	MSD(SIM δ��������)
//	ME(ME �绰��)
//	MT(�ϳ� ME �� SIM �绰��)
//	LIC(ME ��������)
//	SDN (ϵͳ���к���) ������񲦺š��̻����û����ܱ༭��

//SIM��������ܴ�ŵĵ绰������������:AND+FDN+SDN



[1.3] ���ӱ���

// 1.���ذ�(���ɲ���)(107)
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD = TRUE
// nvͬ�����
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE
// card--set
Save:node\C\study\Macro_app_8910sms.h  __SpdeCard__


// 2.�����
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2 = TRUE
prj:project_{cur}.mk   SPDEHTTP_SUPPORT = TRUE
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2_USE_LOCAL_TIME = TRUE
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE


// 3.���ذ�(107���ɲ���/8910�����ɱ���)
prj:project_{cur}.mk   AOLEDA_ELECTRIC_GUARANTEE_CARD = TRUE
// card--set
Save:node\C\study\Macro_app_8910sms.h  __AoledaCard__


// 4.����ͳ��
Save:node\C\study\Macro_app_8910sms.h  __sales__


[1.4] tihu

//
prj:project_{cur}.mk  HERO_ENGINE_SUPPORT
prj:project_{cur}.mk  HERO_ENGINE_TTS_SWTICH_SUPPORT

// �ܿ���
app:heroengine\tts\c\hero_tts_ui.c  masterSwitch.isShow

// ��ID���øĴ���
prj:project_{cur}.mk  HERO_ENGINE_CFG_VAR_HANDSETID_FIRST
prj:project_{cur}.mk  HERO_ENGINE_CFG_VAR_HANDSETID_SEC

// mp3
prj:project_{cur}.mk  HERO_ENGINE_TTS_NUM_USE_MP3

// ����Ƶ
prj:project_{cur}.mk   HERO_ENGINE_STVIDEO_SUPPORT

// �ʵ�
prj:project_{cur}.mk   HERO_ENGINE_DICTIONARY_SUPPORT
//����ļ����ڶ�����������
//heroengineapp.c

// ΢��
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN = TRUE #΢�Ķ�λ
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_IN_MAINMENU = TRUE
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_V1 = TRUE  #΢�Ķ�λV1 �汾����Ƶͨ��
prj:project_{cur}.mk  HERO_VIDEO_CHAT_SUPPORT = TRUE   # ֧����Ƶͨ��
prj:project_{cur}.mk  HERO_APP_PUSH_SUPPORT = TRUE #�Һ�̨������
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_INROM = TRUE #΢�Ķ�λ����
prj:project_{cur}.mk  HERO_VIDEO_CHAT_CAMERA_SUPPRT = TRUE #֧������ͷ
prj:project_{cur}.mk  HERO_CHATTER_WIFI_SUPPORT=TRUE #΢�Ķ�λ֧��WIFI��λ
prj:project_{cur}.mk  HERO_APP_CHATTER_SET_MSG__DEFAULT_RING=TURE #Ĭ�Ͽ�����������

// AI
prj:project_{cur}.mk  HERO_APP_SMART_OPEN=TRUE # AI ��������
prj:project_{cur}.mk  HERO_APP_SMART_OPEN_INROM = TRUE #������������

// ����
app:heroengine\c\heroEngineApp.c  heroenginedata_eim_tw
app:heroengine\h\heroengine_mdu_def.h x


[1.5] PLS



[1.6] SIMPLIFY_TTS
//
prj:project_{cur}.mk  MMI_SIMPLIFY_TTS
prj:project_{cur}.mk  MMI_SIMPLIFY_ENV_TTS
prj:project_{cur}.mk  MMI_READMENU_ENABLE
prj:project_{cur}.mk  MMI_READDIALKEY_ENABLE
prj:project_{cur}.mk  MMI_READTIME_ENABLE
prj:project_{cur}.mk  MMI_READCHARGE_ENABLE
prj:project_{cur}.mk  MMI_READINCALL_ENABLE
prj:project_{cur}.mk  MMI_READPB_ENABLE

//
Save:node\C\study\Macro_res_ring_8910.h  __time__


[1.7] 



[1.8] 



[1.9] Lcd
// 128*128
SPDE_PRJ\K220U_L680_QQVGA\uis8910_phone_user_base_config.cfg 128X128

// 128*160
SPDE_PRJ\K220U_QQVGA\uis8910_phone_user_base_config.cfg 128X160

// 128*160H
SPDE_PRJ\K220U_SHY_S13_HQQVGA\uis8910_phone_user_base_config.cfg 128X160
SPDE_PRJ\K220U_SHY_S13_HQQVGA\uis8910_phone_user_base_config.cfg MMI_RES_ORIENT

// 160*128
SPDE_PRJ\K220U_QQVGA\uis8910_phone_user_base_config.cfg 160X128
SPDE_PRJ\K220U_LBR_L691_HS_L51_HQQVGA\uis8910_phone_user_base_config.cfg 160X128

// LAND
//	MMI_RES_ORIENT_LANDSCAPE
//	MAINLCD_LOGIC_ANGLE_90
//	MAINLCD_DEV_SIZE_160X128
//	MAINLCD_SIZE_160X128
//	MMI_RES_DIR_mmi_res_160x128

// MAINLCD
//	MAINLCD_SIZE_176X220
//	SPDE_UI_176X220_STYLE

### new add
// 1.add file
source:resource\mmi_res_160x128\
source:winsimulator_tp/skin/
source:winsimulator_tp/skin/mssim_duallcd_160_128_T.ini
source:winsimulator_tp/skin/mssim_duallcd_160_128_T.png
// 2.cfg
K220SU.bat  160X128
// 107
prj:project_{cur}.mk  MAINLCD_DEV_SIZE = 160X128
prj:project_{cur}.mk  MAINLCD_SIZE = 128X160
prj:project_{cur}.mk  MMI_RES_DIR = mmi_res_160x128
prj:project_{cur}.mk  MMI_RES_ORIENT = LANDSCAPE
prj:project_{cur}.mk  MAINLCD_LOGIC_ANGLE = 90
// 8910
prj:{cfg}.cfg  MAINLCD_DEV_SIZE = 160X128
prj:{cfg}.cfg  MAINLCD_SIZE = 128X160
prj:{cfg}.cfg  MMI_RES_DIR = mmi_res_160x128
prj:{cfg}.cfg  MMI_RES_ORIENT = LANDSCAPE
prj:{cfg}.cfg  MAINLCD_LOGIC_ANGLE = 90
// 3.cfg
//	MAINLCD_SIZE_176X220
//	SPDE_UI_176X220_STYLE
// 4.mk
//  160X128
make/
make/simulator_main/
make/simulator_main/simulator_main.mk




[1.10] simulator
// simulator
make\simulator\simulator.ini  MMI_LCD_176_220
make\simulator_idh\simulator.ini   MMI_LCD_176_220
make\simulator_main\simulator.ini   MMI_LCD_176_220
// 
app:cs\h\mmics_position.h 
app:dcd\h\mmidcd_position.h 
//
Save:set\Macro_Set_Path_sprd_{pro}.h  simulator10
// ini(copy)--8910
make/simulator_idh/simulator_idh.mk  mssim_duallcd_
// ini(copy)--107
make/simulator_main/simulator_main.mk  mssim_duallcd_

// skin name
make\simulator\simulator.mk  SKIN_FILE_NAME
make\simulator_idh\simulator_idh.mk  SKIN_FILE_NAME
make\simulator_main\simulator_main.mk  SKIN_FILE_NAME
// skin name _T
make\simulator_idh\simulator_idh.mk  SUFFIX
make\simulator_main\simulator_main.mk  SUFFIX
// skin file
MS_MMI_Main\source\winsimulator_tp\skin\
//   mssim_duallcd_160_128
//   mssim_duallcd_160_128_T   90^


// vs2010--lib
make\simulator_main\simulator_main.mk  devps
// 



[1.11] lib
// fota--alup
mk: 
// ADUPS_FOTA_DELETE_SETTING_MENU
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_menutable.c  FOTA_SUPPORT_ADUPS


// xmly--
prj:project_{cur}.mk  XYSDK_SUPPORT
// ����:\n  XMLY133
MS_MMI_Main/source/mmi_app/app/xysdk/h/xysdk_mdu_def.h  TXT_XYSDK_VER_INFO



// zfb
prj:project_{cur}.mk   ALIIOT_SUPPORT = TRUE
// 
Save:node\C\study\Macro_patch_third.h  zfb_107



[1.12] Lib

### w07U
// baseLib
prj:project_{cur}.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_ROM_16MB_SS_USER

// binFile
prj:project_{cur}.mk  MODEM_BIN_FILE
// ����
//   MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_USER

// .a--��ģ�������
lib\UIS8910_ROM_16MB_SS_USER\

// binFile
lib\modem\UIS8910_ROM_16MB_DS_USER\
lib\modem\UIS8910_ROM_16MB_DS_USER\


### w03u
// baseLib
prj:project_{cur}.mk PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER

// binFile
prj:project_{cur}.mk MODEM_BIN_FILE
// ����
//   MODEM_BIN_FILE = MODEM_USER

// .a--��ģ�������
lib\UIS8910_240x320BAR_16MB_SS_USER\

// binFile
lib\modem\MODEM_USER\


### BMWATCH
// baseLib
SPDE_PRJ\BMWATCH\project_UIS8910_240x320BAR_16MB_SS_BMWATCH_USER.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER


// .a--��ģ�������
lib\UIS8910_240x320BAR_16MB_SS_USER\


### T107
// baseLib
SPDE_PRJ\S98T_FLP_E535_31\project_ums9117_240X320BAR_48MB_S98T_FLP_E535_31_user.mk  PRODUCT_BASELIB_DIR
SPDE_PRJ\S98T_FLP_E535_31\project_ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug.mk  PRODUCT_BASELIB_DIR
// user/debug
lib\ums9117_240X320BAR_48MB_CAT1_rel\
lib\ums9117_240X320BAR_48MB_CAT1\


[1.13] fota----------adups
// mk
prj:project_{cur}.mk  ABUP_FOTA_SUPPORT_TCARD = FALSE


### fota--adups--107
//
//		==>BLOCK  128
SPDE_PRJ\S98T_FLP_E535_31\adups_define.h
//
fdl_bootloader/fota_bootloader/src/tf_display.c
//		==>adups_net_start_get_new_version()
//		==>ADUPS_get_download_percent()  # ���ؽ���
//		==>adups_patch_ratio             # ��������
//		==>GetMainStates                 # state//�汾��
Third-party\adups\hal\src\adups_device.c  adups_get_device_version()


// addr
Third-party\rsfota\rsupdate\src\rs_ua_porting.c  rs_fota_addr
// 1.���ƽ̨ > ������Ŀ
// 2.����汾 v01 v02
// 3.������ְ����Զ�����
//		==>BLOCK  128 (���ܸ�)
//		==>Ŀ��    v2
//		==>ǰ��    v1
//		==>RAM    3072 (���ܸ�)
// 4.�豸imei����

// copy NV
make\perl_script\adups.pl  img_deltanv_src


// 1.������������ʾ����������
// 107��nand
fdl_bootloader\tf_fdl\src\tf_main_nand.c  TF_PM_Init
// 2.��ʾ������
//		==>main ()
//		====>.test()
//		====>AUDPSProcedure
//		======>adups_patch_ratio(0)   # ʵ�ʲ���0%
//		======>adups_patch_ratio(100)
//		========>
//		==========>
//		============>
//		==============>
Third-party\adups\hal\src\adups_bl_main.c  adups_patch_ratio
//	TF_ShowProgress(ratio,100);//zgq add
fdl_bootloader\bootloader\src\boot1_main.c  TF_SetLcdBackLight
//	TF_SetLcdBackLight (FALSE, 0x0);
//	TF_LedParamInit();



### fota
// ==>����
patch:ssh\Macro_user_psw.h  __abup__


[1.14] fota----------rs
// mk
// --8910
prj:{cfg}.cfg  FOTA_SUPPORT = REDSTONE
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_NAME_T6B = TRUE
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_FLASH_B = TRUE      # ���ڴ�
// --107
prj:project_{cur}.mk  FOTA_SUPPORT = REDSTONE
prj:project_{cur}.mk  FOTA_SUPPORT = NONE      # ��


### fota
// ==>����
patch:ssh\Macro_user_psw.h  __redstone__
// fota_file
Save:node\C\study\Macro_patch_third.h  __fota_file__


### fota--8910
// ��ȡ�ͺ�
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  get_OEMDevice

// 1�����ؼ�⣺
// --����һ�ְ�
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_first_check_cycle()
//	return (90*1000);//���������׶����ò���

// --24Сʱ����
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_auto_check_cycle()
//	return (24*60*60*1000);//���������׶����ò���


// 2����װ��⣺2-5�㣬30�������ڣ��������У����������
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_bool^rs_sys_localtime_fit_for_install
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  INSTALL_TIME_END_CLOCK
//	#define INSTALL_TIME_START_CLOCK  22 // 2
//	#define INSTALL_TIME_END_CLOCK  1823  //5
//	#define INSTALL_AUTO_CYCLE_TIME  (30*60*1000) //(2*60*60*1000) //2Сʱ


// 3����װʱ�䣺����а��󣬻���2-5�㣬���һ��ʱ��


### fota--lcd����
// --lcd
MS_Customize/source/product/config/uis8910ff_refphone/lcm_cfg_info.c  LCD_DRV_ID_NV3030B
fdl_bootloader/fota_bootloader/src/tf_lcd/src/tf_lcmcfg.c  LCD_DRV_ID_NV3030B
Third-party/rsfota/rsdl/porting/UIS8910/src/rs_param.c  INSTALL_TIME_START_CLOCK
fdl_bootloader/nor_bootloader/src/fdl_main.c  flash_size
make/fota_bootloader/fota_bootloader.mk  tft_NV3030B
// --NVδ������������
make/perl_script/UIX8910_128MBIT.xml  FOTA_BOOTLOADER
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  FOTA_BOOTLOADER


### ��ʾ
// ����ʱ��ʾ����
prj:project_{cur}.mk  BM_FOTA_SHOW_PROGRESS = FALSE

// 
prj:project_{cur}.mk  SPDE_FOTA_TIP = TRUE
// �Ƴ�������
prj:project_{cur}.mk  SPDE_FOTA_REMOVE_PROGRESS = TRUE
// ��������ͼƬ
prj:project_{cur}.mk  SPDE_FOTA_TIP_USE_GRAY_IMG = TRUE


### ������fota��̨, ͬһ��������������Թ���
// --rs_fota_size, ������ͷ��
//flash_size=0x01000000
//sect_size=0x00010000
//ps_addr=0x60020000
//rs_fota_addr=0x60630000
//rs_fota_size=0x00100000
//fota_bootloader_addr=0x60730000
//cp_addr=0x60B30000
//cp_size=0x00300000
//mmi_res=0x60760000
//mmi_res_size=0x003D0000


[1.15] 




[1.16] mem

// Heap�Ĵ�С
config:mem_cfg.c  SCI_STATIC_HEAP_SIZE_THRESHOD

// ��̬RAM�Ĵ�С
config:mem_cfg.h  MEM_RWZI_SIZE




[1.17] FLASH
### 8910
prj:project_{cur}.mk  FLASH_SIZE = 128MBITX64MBIT_NEW   # ��汾
prj:project_{cur}.mk  FLASH_SIZE = 128MBIT              # С�汾
// ����
prj:project_{cur}.mk  _FLASH_STYLE_

// �޸ķ���
config:\
config:spiflash_cfg.c  FLASH_SIZE_128MBITX64MBIT_NEW    //��汾
config:spiflash_cfg.c  FLASH_SIZE_128MBIT$              //С�汾
config:spiflash_cfg.c  (FLASH_SIZE_128MBIT)             //С�汾
config:spiflash_cfg.c  FLASH_SIZE_64MBITX64MBIT         //DM�汾
// SECTOR
config:spiflash_cfg.c  MMI_RES_SECTOR_NUM
config:spiflash_cfg.c  604
// 	#define MMI_RES_SECTOR_NUM         70 // 67 //66  60
// 
config:spiflash_cfg.c  UDISK_SIZE
config:spiflash_cfg.c  573
//	#define UDISK_SIZE                 ((UMEM_SECTOR_NUM+4)*FLASH_SECTOR_SIZE)

// 
MS_Customize/UIX8910_normal.scf  LOAD_KERNEL_IMAGE
MS_Customize/UIX8910_normal.scf  43
//	LOAD_KERNEL_IMAGE IMAGE_ENTRY_ADDR 0x00A60000   # ps size

// 
config:spiflash_cfg.c  PS_STONE_SECTOR_NUM
config:spiflash_cfg.c  646
//	#define  PS_STONE_SECTOR_NUM		124 // 123 //123


// error
Save:node\C\project\Macro_Note_8910trace.h  __flash__


### 107 ����
fdl_bootloader\fdl2\src\nandparttable\ums9117_barphone\Nand_PartTable_128k.c  MMI_RESOURCE_SIZE
//#define OSB_SIZE				(96)   //EXEC_KERNEL_IMAGE.bin
//#define OSA_SIZE				(72)   //EXEC_USER_IMAGE.bin
//#define MMI_RESOURCE_SIZE		(74)   //mmi_res_240X320.bin


### ����flash
prj:project_{cur}.mk  SPI_NAND_FLASH -> FALSE  # ����flash������log
prj:project_{cur}.mk  SPI_NAND_FLASH -> TRUE   # ����flash





[1.18] build map
//
tmpPath = build\tmp
tmp:\\


// ��image
tmp:{UIX8910}.map  Region^LOAD_KERNEL_IMAGE -------8910/107

// range 1(rom) (12M ����/�洢)
tmp:{UIX8910}.map  Region^ROM_KERNAL_EXEC ---------8910

// range 2(ram) (1.45M ����/�ϵ綪ʧ)
tmp:{UIX8910}.map  Region^RAM_RW ------------------107/107

// range 3(SRAM) (calc size) ----------------------107 
tmp:{UIX8910}.map  Region^SRAM_RES

// Total
tmp:{UIX8910}.map  Total^RO

// �޸� KERNEL size
//  (ͬ���ģ�����fota���ʧ��)
MS_Customize/
MS_Customize/UIX8910_normal.scf  42
MS_Customize/UIX8910_normal.scf  277
MS_Customize/UMS9117_ums9117_barphone.scf  4


//
build\{cur}_builddir\tmp\link_UIX8910_uis8910ff_refphone_vm.scf  LOAD_KERNEL_IMAGE
// 0x00870000
build\{cur}_builddir\tmp\link_UIX8910_uis8910ff_refphone_vm.scf  LOAD_FLASH_B_DFILE
// 0x60B60000


[1.19] build/time

// Ĭ�ϳ�������
prj:project_{cur}.mk   DEFAULT_FACTORY_YEAR_MONTH_DAY

// DisplaySystemDate
app:setting\c\mmiset_datetime.c DEFAULT_FACTORY_YEAR_MONTH_DAY
// DisplaySystemDate
app:setting\c\mmiset_display.c DEFAULT_FACTORY_YEAR_MONTH_DAY
// DisplaySystemDate
app:setting\c\mmiset_func.c DEFAULT_FACTORY_YEAR_MONTH_DAY
MMIAPISET_GetCurrentDateStr
RestoreDataTimeFactorySetting
MMIAPISET_IsNeedResetDateTime


### Jenkins������
//	Jenkins�������ϣ������Լ�git���̱�����������������Ҳ�����˽��£�
//	1��jenkins�ĶԴ���ĸ��´���
//	2���������Ӽ��� git clean ����
//	3���������Ӹ��� HW_NV_PARA�Ĳ�����HW_NV_PARA���ڷ�����������һ��Ŀ¼
//	4��copy HW_NV_PARA���Ŀ¼������ļ���SPDE_PRJ��Ӧ��Ŀ��nvĿ¼��
//	5�������ʱ���������Ŀ��bat�ļ������SPDE_PRJ��nv�ļ�����Դ�ļ����Ƶ�������������Ŀ¼
//	6����ʼ�����ı���


### bat
// ���ر������û��copy RDNV����������������copy RDNV


### make
//		==>
//		====>
make.bat
make\make_cmd\


### ����ʱ��
//gettime.pl


### ʡ�ռ�
//
Save:node\C\study\Macro_Spr_mem.h


### build time
// build time
Save:node\ToolsMsg\Macro_win10.h  __Buildtime__


### ��ʾlog
//.PHONY:all
//all: 
//ifneq ($(strip $(NVITEM_DIR)), )
//	@echo ____CWR:$(strip $(NVITEM_DIR))____
//endif
//ifneq ($(strip $(CWR)), )
//	@echo ____CWR:$(strip $(CWR))____
//endif


### ����win7
//	ifeq ($(strip $(CUR_SYS)), WIN7)
//		# �޷���copy #$(COPY_FILE)
//	else
//		MSRCPATH +=  build/$(PROJECT)_builddir/tmp
//	endif
make\app_main\app_main.mk  _ui_special_effect_table
//
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\Custom_set_env.bat




[1.20] T������
### 8910
prj:{cfg}.cfg  TF_LOAD_SUPPORT = TRUE  
prj:{cfg}.cfg  F_LOAD_PROTECT = FALSE  

### UMS9117--FAQ202172534
prj:project_{cur}.mk  TF_LOAD_SUPPORT   # ���뿪���ú�
prj:project_{cur}.mk  F_LOAD_PROTECT    #
// TRUE: ���TF BOOTLOADER����������һ��SECTOR������֧��ǿ������,��T���ϲ��÷�tfboot.bin��Ĭ��֧�����ַ�ʽ
// FALSE: ֻ֧�ֹ���ģʽ��T������,��T���ϱ������.pac��T��������tfboot.bin��Ĭ�ϲ�֧�����ַ�ʽ��

// ��������
//�� ��T�����½�Ŀ¼ bl_update ���ڸ�Ŀ¼�·���tfload.pac(����Ҫ������PAC�ļ�����Ϊtfload.pac)
//�� ������ʽ:

// A. ǿ������--��ϼ���
// ǿ��������ָ���ֻ�����������������BOOTû���𻵵�����£�ʹ����ϼ���һ���ǳ���2S���ң�ֱ��������
// ������벻��ǿ���������棬��˵��BOOT�ļ���,����ʹ��PC���߲����������س���
// ǿ���������̣�����ͨ���ֻ������û���Ϣ��

// ����ǿ��������ʽΪ�����ڹػ�״̬�°�: KEYIN_0_KEYOUT_0 �� KEYIN_1_KEYOUT_1 �� POWER ����ϼ���
// ����ǿ��������ʽҪ�󣨳�BOOT�����ƻ�����������⣩�����������г��ֶϵ���쳣����£�
// Ҳ����ͨ��ǿ��������ʽ��������(��ͷ���ز��Ƕϵ�����)�����κ�����¶������ƻ�У׼������

//ע�� KEYIN_0_KEYOUT_0 �� KEYIN_1_KEYOUT_1 ��Ӧ�İ�����ο� keymap_cfg.c (UMS9117 ƽ̨�ο��ֻ���Ӧ����KEY3��OK��)��
// ����ʹ��������ϼ�������ݾ���оƬ��SPEC�޸�tf_load.c�е� TF_EnterVerify()��

//B. �Զ�����
// �Զ�������ָ�ֻ����ܹ�����������£�ͨ����IDLE������������ϼ�: #*8378#9# ���빤��ģʽ���������水��ʾ����������

###
driver:tf_load\src\tf_load.c  TF_EnterVerify
//		==>ok+CALL,ʵ��ok+CALL+�����+Red
config:keymap_cfg.c  KEYMAP_CONFIG
//  keyRawIntSts, ����İ��������ֵ����
//  0~15���Լ�����ƿ��԰�ֵ�Գ���

###
//		==>HandleTFLoadWinMsg
//		====>TF_LoadInit
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_TFLOAD_ENTER


###
// --key--����
Save:node\C\study\Macro_doc_8910key.h  __keyPhy__
// error
patch:node\bug\Macro_bug_other.h  __tf_load__



[1.21] 


[1.22] 



