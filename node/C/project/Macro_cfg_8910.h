
//Ŀ¼:
Save:node\C\project\Macro_cfg_8910.h \[1.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[1.2\] DTMF, Dial, SIM, ����
Save:node\C\project\Macro_cfg_8910.h \[1.3\] ���ӱ���
Save:node\C\project\Macro_cfg_8910.h \[1.4\] tihu--------------������
Save:node\C\project\Macro_cfg_8910.h \[1.5\] PLS---------------������
Save:node\C\project\Macro_cfg_8910.h \[1.6\] SIMPLIFY_TTS------���װ�������
Save:node\C\project\Macro_cfg_8910.h \[1.7\] 
Save:node\C\project\Macro_cfg_8910.h \[1.8\] 
Save:node\C\project\Macro_cfg_8910.h \[1.9\] SS
Save:node\C\project\Macro_cfg_8910.h \[1.10\] simulator
Save:node\C\project\Macro_cfg_8910.h \[1.11\] lib--------------��3��
Save:node\C\project\Macro_cfg_8910.h \[1.12\] Lib--------------ƽ̨
Save:node\C\project\Macro_cfg_8910.h \[1.13\] LCD_SIZE---------------�� Macro_info_{1}
Save:node\C\project\Macro_cfg_8910.h \[1.14\] 
Save:node\C\project\Macro_cfg_8910.h \[1.15\] marco---------------�� Macro_c_path_sprd.h
Save:node\C\project\Macro_cfg_8910.h \[1.16\] mem
Save:node\C\project\Macro_cfg_8910.h \[1.17\] FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_8910.h \[1.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[1.19\] 
Save:node\C\project\Macro_cfg_8910.h \[1.20\] 
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



[1.9] SS
//MMS--107
prj:project_{cur}.mk  SCREENSAVER_SUPPORT = TRUE

//MMS--8910
prj:{cfg}.cfg  SCREENSAVER_SUPPORT = TRUE



[1.10] simulator
// simulator
make\simulator\simulator.ini  MMI_LCD_176_220
make\simulator_idh\simulator.ini   MMI_LCD_176_220
make\simulator_main\simulator.ini   MMI_LCD_176_220
// 
app:cs\h\mmics_position.h 
app:dcd\h\mmidcd_position.h 
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


[1.13]  Lcd
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



[1.14] 


[1.15] marco
### 107
//
make\chip_drv\def_config\UMS9117.cfg
// CONFIG_LCDC_VER
chip_drv/chip_module/lcdc/v5
// CONFIG_SPI_VER
chip_drv/chip_module/spi/v5
// CONFIG_LDO_VER
chip_drv/chip_module/ldo/sc2720
// CONFIG_ANALOG_VER
chip_drv/chip_module/analog/v7
// CONFIG_ADC_VER
chip_drv\chip_module\adc\sc2720



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


// fota����С���ܱ���
fdl_bootloader\nor_bootloader\src\nor_bootloader_fota_uix8910.scf  0xB800



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


[1.19] 




[1.20] 




