
//目录:
Save:node\C\project\Macro_cfg_8910.h \[1.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[1.2\] DTMF, Dial, SIM, 天线
Save:node\C\project\Macro_cfg_8910.h \[1.3\] 电子保卡
Save:node\C\project\Macro_cfg_8910.h \[1.4\] tihu--------------语音王
Save:node\C\project\Macro_cfg_8910.h \[1.5\] PLS---------------语音王
Save:node\C\project\Macro_cfg_8910.h \[1.6\] SIMPLIFY_TTS------简易版语音王
Save:node\C\project\Macro_cfg_8910.h \[1.7\] 
Save:node\C\project\Macro_cfg_8910.h \[1.8\] 
Save:node\C\project\Macro_cfg_8910.h \[1.9\] SS
Save:node\C\project\Macro_cfg_8910.h \[1.10\] simulator
Save:node\C\project\Macro_cfg_8910.h \[1.11\] lib--------------第3方
Save:node\C\project\Macro_cfg_8910.h \[1.12\] Lib--------------平台
Save:node\C\project\Macro_cfg_8910.h \[1.13\] LCD_SIZE---------------移 Macro_info_{1}
Save:node\C\project\Macro_cfg_8910.h \[1.14\] 
Save:node\C\project\Macro_cfg_8910.h \[1.15\] marco---------------移 Macro_c_path_sprd.h
Save:node\C\project\Macro_cfg_8910.h \[1.16\] mem
Save:node\C\project\Macro_cfg_8910.h \[1.17\] FLASH (大、/小版本)
Save:node\C\project\Macro_cfg_8910.h \[1.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[1.19\] 
Save:node\C\project\Macro_cfg_8910.h \[1.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] IM
//IM_ENGINE = NONE


### IM
// ==>im
Save:node\C\study\Macro_im_8910.h  __input__



[1.2] DTMF, Dial, SIM, 天线
//
MMI_DIALPANEL_DTMF_SUPPORT

// 还有一个地方
app:phone\c\mmiphone.c  MMI_RESULT_E^HandleScellRssiInd

// sim热插拔
MS_Customize\source\product\driver\gpio\gpio_prod.c  GPIO_SIMIntHandler


### ADN FDN SDN
//	ADN Abbreviated dialing number
//	FDN Fixed dialer number
//	BDN Barred dialing numbers
//	LND Last number dialed
//	SDN Service dialing number

//	ADN(SIM 电话簿) 缩位拨号。数字 + #，然后按SNED键。
//	FDN(SIM 固定拨号) 固定拨号。当启用后，只能拨打所设置的号码，来电不受影响。需要输入PIN2码
//	能否使用固定拨号功能取决于SIM卡类型以及网络商是否提供此功能
//	MSISDN(SIM 保护号码)
//	EN(SIM 紧急号码)
//	LND(合成 ME 和 SIM 最后拨号)
//	MSD(SIM 未接听号码)
//	ME(ME 电话簿)
//	MT(合成 ME 和 SIM 电话簿)
//	LIC(ME 接听号码)
//	SDN (系统拨叫号码) 网络服务拨号。固化的用户不能编辑。

//SIM卡中最多能存放的电话号码数量等于:AND+FDN+SDN



[1.3] 电子保卡

// 1.本地版(不可擦除)(107)
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD = TRUE
// nv同网络版
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE
// card--set
Save:node\C\study\Macro_app_8910sms.h  __SpdeCard__


// 2.网络版
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2 = TRUE
prj:project_{cur}.mk   SPDEHTTP_SUPPORT = TRUE
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2_USE_LOCAL_TIME = TRUE
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE


// 3.本地版(107不可擦除/8910升级可保留)
prj:project_{cur}.mk   AOLEDA_ELECTRIC_GUARANTEE_CARD = TRUE
// card--set
Save:node\C\study\Macro_app_8910sms.h  __AoledaCard__


// 4.销量统计
Save:node\C\study\Macro_app_8910sms.h  __sales__


[1.4] tihu

//
prj:project_{cur}.mk  HERO_ENGINE_SUPPORT
prj:project_{cur}.mk  HERO_ENGINE_TTS_SWTICH_SUPPORT

// 总开关
app:heroengine\tts\c\hero_tts_ui.c  masterSwitch.isShow

// 改ID不用改代码
prj:project_{cur}.mk  HERO_ENGINE_CFG_VAR_HANDSETID_FIRST
prj:project_{cur}.mk  HERO_ENGINE_CFG_VAR_HANDSETID_SEC

// mp3
prj:project_{cur}.mk  HERO_ENGINE_TTS_NUM_USE_MP3

// 短视频
prj:project_{cur}.mk   HERO_ENGINE_STVIDEO_SUPPORT

// 词典
prj:project_{cur}.mk   HERO_ENGINE_DICTIONARY_SUPPORT
//这个文件最后第二个函数就是
//heroengineapp.c

// 微聊
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN = TRUE #微聊定位
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_IN_MAINMENU = TRUE
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_V1 = TRUE  #微聊定位V1 版本带视频通话
prj:project_{cur}.mk  HERO_VIDEO_CHAT_SUPPORT = TRUE   # 支持视频通话
prj:project_{cur}.mk  HERO_APP_PUSH_SUPPORT = TRUE #挂后台长连接
prj:project_{cur}.mk  HERO_APP_CHATTER_OPEN_INROM = TRUE #微聊定位内置
prj:project_{cur}.mk  HERO_VIDEO_CHAT_CAMERA_SUPPRT = TRUE #支持摄像头
prj:project_{cur}.mk  HERO_CHATTER_WIFI_SUPPORT=TRUE #微聊定位支持WIFI定位
prj:project_{cur}.mk  HERO_APP_CHATTER_SET_MSG__DEFAULT_RING=TURE #默认开启铃声提醒

// AI
prj:project_{cur}.mk  HERO_APP_SMART_OPEN=TRUE # AI 智能语音
prj:project_{cur}.mk  HERO_APP_SMART_OPEN_INROM = TRUE #语音助手内置

// 翻译
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
// 案号:\n  XMLY133
MS_MMI_Main/source/mmi_app/app/xysdk/h/xysdk_mdu_def.h  TXT_XYSDK_VER_INFO



// zfb
prj:project_{cur}.mk   ALIIOT_SUPPORT = TRUE
// 
Save:node\C\study\Macro_patch_third.h  zfb_107



[1.12] Lib

### w07U
// baseLib
prj:project_{cur}.mk  PRODUCT_BASELIB_DIR
// 分开
//   PRODUCT_BASELIB_DIR = UIS8910_ROM_16MB_SS_USER

// binFile
prj:project_{cur}.mk  MODEM_BIN_FILE
// 共用
//   MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_USER

// .a--编模块进这里
lib\UIS8910_ROM_16MB_SS_USER\

// binFile
lib\modem\UIS8910_ROM_16MB_DS_USER\
lib\modem\UIS8910_ROM_16MB_DS_USER\


### w03u
// baseLib
prj:project_{cur}.mk PRODUCT_BASELIB_DIR
// 分开
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER

// binFile
prj:project_{cur}.mk MODEM_BIN_FILE
// 共用
//   MODEM_BIN_FILE = MODEM_USER

// .a--编模块进这里
lib\UIS8910_240x320BAR_16MB_SS_USER\

// binFile
lib\modem\MODEM_USER\


### BMWATCH
// baseLib
SPDE_PRJ\BMWATCH\project_UIS8910_240x320BAR_16MB_SS_BMWATCH_USER.mk  PRODUCT_BASELIB_DIR
// 分开
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER


// .a--编模块进这里
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

// Heap的大小
config:mem_cfg.c  SCI_STATIC_HEAP_SIZE_THRESHOD

// 静态RAM的大小
config:mem_cfg.h  MEM_RWZI_SIZE




[1.17] FLASH
### 8910
prj:project_{cur}.mk  FLASH_SIZE = 128MBITX64MBIT_NEW   # 大版本
prj:project_{cur}.mk  FLASH_SIZE = 128MBIT              # 小版本
// 分区
prj:project_{cur}.mk  _FLASH_STYLE_

// 修改分区
config:\
config:spiflash_cfg.c  FLASH_SIZE_128MBITX64MBIT_NEW    //大版本
config:spiflash_cfg.c  FLASH_SIZE_128MBIT$              //小版本
config:spiflash_cfg.c  (FLASH_SIZE_128MBIT)             //小版本
config:spiflash_cfg.c  FLASH_SIZE_64MBITX64MBIT         //DM版本
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


// fota分区小可能报错
fdl_bootloader\nor_bootloader\src\nor_bootloader_fota_uix8910.scf  0xB800



### 107 分区
fdl_bootloader\fdl2\src\nandparttable\ums9117_barphone\Nand_PartTable_128k.c  MMI_RESOURCE_SIZE
//#define OSB_SIZE				(96)   //EXEC_KERNEL_IMAGE.bin
//#define OSA_SIZE				(72)   //EXEC_USER_IMAGE.bin
//#define MMI_RESOURCE_SIZE		(74)   //mmi_res_240X320.bin


### 并口flash
prj:project_{cur}.mk  SPI_NAND_FLASH -> FALSE  # 并口flash，死机log
prj:project_{cur}.mk  SPI_NAND_FLASH -> TRUE   # 串口flash





[1.18] build map
//
tmpPath = build\tmp
tmp:\\


// 总image
tmp:{UIX8910}.map  Region^LOAD_KERNEL_IMAGE -------8910/107

// range 1(rom) (12M 代码/存储)
tmp:{UIX8910}.map  Region^ROM_KERNAL_EXEC ---------8910

// range 2(ram) (1.45M 代码/断电丢失)
tmp:{UIX8910}.map  Region^RAM_RW ------------------107/107

// range 3(SRAM) (calc size) ----------------------107 
tmp:{UIX8910}.map  Region^SRAM_RES

// Total
tmp:{UIX8910}.map  Total^RO

// 修改 KERNEL size
//  (同步改，否则fota差分失败)
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




