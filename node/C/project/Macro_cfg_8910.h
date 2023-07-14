
//目录:
Save:node\C\project\Macro_cfg_8910.h \[1.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[1.2\] DTMF, Dial, SIM, 天线
Save:node\C\project\Macro_cfg_8910.h \[1.3\] 电子保卡
Save:node\C\project\Macro_cfg_8910.h \[1.4\] tihu--------------语音王
Save:node\C\project\Macro_cfg_8910.h \[1.5\] PLS---------------语音王
Save:node\C\project\Macro_cfg_8910.h \[1.6\] SIMPLIFY_TTS------简易版语音王
Save:node\C\project\Macro_cfg_8910.h \[1.7\] 
Save:node\C\project\Macro_cfg_8910.h \[1.8\] 
Save:node\C\project\Macro_cfg_8910.h \[1.9\] LCD_SIZE------------移 Macro_info_{1}
Save:node\C\project\Macro_cfg_8910.h \[1.10\] simulator
Save:node\C\project\Macro_cfg_8910.h \[1.11\] lib--------------第3方
Save:node\C\project\Macro_cfg_8910.h \[1.12\] Lib--------------平台
Save:node\C\project\Macro_cfg_8910.h \[1.13\] fota----------adups
Save:node\C\project\Macro_cfg_8910.h \[1.14\] fota----------rs
Save:node\C\project\Macro_cfg_8910.h \[1.15\] 
Save:node\C\project\Macro_cfg_8910.h \[1.16\] mem
Save:node\C\project\Macro_cfg_8910.h \[1.17\] FLASH (大、/小版本)
Save:node\C\project\Macro_cfg_8910.h \[1.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[1.19\] build/time
Save:node\C\project\Macro_cfg_8910.h \[1.20\] T卡升级
Save:node\C\project\Macro_cfg_8910.h \[1.21\] 
Save:node\C\project\Macro_cfg_8910.h \[1.22\] 
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
//		==>ADUPS_get_download_percent()  # 下载进度
//		==>adups_patch_ratio             # 升级进度
//		==>GetMainStates                 # state//版本号
Third-party\adups\hal\src\adups_device.c  adups_get_device_version()


// addr
Third-party\rsfota\rsupdate\src\rs_ua_porting.c  rs_fota_addr
// 1.差分平台 > 创建项目
// 2.编译版本 v01 v02
// 3.制作差分包，自动部署
//		==>BLOCK  128 (不能改)
//		==>目标    v2
//		==>前置    v1
//		==>RAM    3072 (不能改)
// 4.设备imei更新

// copy NV
make\perl_script\adups.pl  img_deltanv_src


// 1.主屏副屏都显示到主屏上了
// 107是nand
fdl_bootloader\tf_fdl\src\tf_main_nand.c  TF_PM_Init
// 2.显示进度条
//		==>main ()
//		====>.test()
//		====>AUDPSProcedure
//		======>adups_patch_ratio(0)   # 实际不是0%
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
// ==>密码
patch:ssh\Macro_user_psw.h  __abup__


[1.14] fota----------rs
// mk
// --8910
prj:{cfg}.cfg  FOTA_SUPPORT = REDSTONE
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_NAME_T6B = TRUE
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_FLASH_B = TRUE      # 大内存
// --107
prj:project_{cur}.mk  FOTA_SUPPORT = REDSTONE
prj:project_{cur}.mk  FOTA_SUPPORT = NONE      # 关


### fota
// ==>密码
patch:ssh\Macro_user_psw.h  __redstone__
// fota_file
Save:node\C\study\Macro_patch_third.h  __fota_file__


### fota--8910
// 获取型号
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  get_OEMDevice

// 1、下载检测：
// --开机一分半
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_first_check_cycle()
//	return (90*1000);//量产出货阶段配置参数

// --24小时周期
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_auto_check_cycle()
//	return (24*60*60*1000);//量产出货阶段配置参数


// 2、安装检测：2-5点，30分钟周期，如果检测有，不继续检测
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_bool^rs_sys_localtime_fit_for_install
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  INSTALL_TIME_END_CLOCK
//	#define INSTALL_TIME_START_CLOCK  22 // 2
//	#define INSTALL_TIME_END_CLOCK  1823  //5
//	#define INSTALL_AUTO_CYCLE_TIME  (30*60*1000) //(2*60*60*1000) //2小时


// 3、安装时间：检测有包后，会在2-5点，随机一个时间


### fota--lcd驱动
// --lcd
MS_Customize/source/product/config/uis8910ff_refphone/lcm_cfg_info.c  LCD_DRV_ID_NV3030B
fdl_bootloader/fota_bootloader/src/tf_lcd/src/tf_lcmcfg.c  LCD_DRV_ID_NV3030B
Third-party/rsfota/rsdl/porting/UIS8910/src/rs_param.c  INSTALL_TIME_START_CLOCK
fdl_bootloader/nor_bootloader/src/fdl_main.c  flash_size
make/fota_bootloader/fota_bootloader.mk  tft_NV3030B
// --NV未配升级会死机
make/perl_script/UIX8910_128MBIT.xml  FOTA_BOOTLOADER
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  FOTA_BOOTLOADER


### 显示
// 下载时显示进度
prj:project_{cur}.mk  BM_FOTA_SHOW_PROGRESS = FALSE

// 
prj:project_{cur}.mk  SPDE_FOTA_TIP = TRUE
// 移除进度条
prj:project_{cur}.mk  SPDE_FOTA_REMOVE_PROGRESS = TRUE
// 下载中用图片
prj:project_{cur}.mk  SPDE_FOTA_TIP_USE_GRAY_IMG = TRUE


### 分区给fota后台, 同一个分区的软件可以共用
// --rs_fota_size, 不包括头部
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


// error
Save:node\C\project\Macro_Note_8910trace.h  __flash__


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


[1.19] build/time

// 默认出厂日期
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


### Jenkins服务器
//	Jenkins服务器上，我们自己git工程编译过程是这样，大家也可以了解下：
//	1、jenkins的对代码的更新处理
//	2、我们增加加了 git clean 操作
//	3、我们增加更新 HW_NV_PARA的操作，HW_NV_PARA放在服务器单独另一个目录
//	4、copy HW_NV_PARA这个目录的相关文件到SPDE_PRJ对应项目的nv目录中
//	5、编译的时候会运行项目的bat文件，会把SPDE_PRJ的nv文件和资源文件复制到代码编译中相关目录
//	6、开始正常的编译


### bat
// 本地编译可能没有copy RDNV，服务器编译另外copy RDNV


### make
//		==>
//		====>
make.bat
make\make_cmd\


### 编译时间
//gettime.pl


### 省空间
//
Save:node\C\study\Macro_Spr_mem.h


### build time
// build time
Save:node\ToolsMsg\Macro_win10.h  __Buildtime__


### 显示log
//.PHONY:all
//all: 
//ifneq ($(strip $(NVITEM_DIR)), )
//	@echo ____CWR:$(strip $(NVITEM_DIR))____
//endif
//ifneq ($(strip $(CWR)), )
//	@echo ____CWR:$(strip $(CWR))____
//endif


### 区分win7
//	ifeq ($(strip $(CUR_SYS)), WIN7)
//		# 无法加copy #$(COPY_FILE)
//	else
//		MSRCPATH +=  build/$(PROJECT)_builddir/tmp
//	endif
make\app_main\app_main.mk  _ui_special_effect_table
//
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\Custom_set_env.bat




[1.20] T卡升级
### 8910
prj:{cfg}.cfg  TF_LOAD_SUPPORT = TRUE  
prj:{cfg}.cfg  F_LOAD_PROTECT = FALSE  

### UMS9117--FAQ202172534
prj:project_{cur}.mk  TF_LOAD_SUPPORT   # 必须开启该宏
prj:project_{cur}.mk  F_LOAD_PROTECT    #
// TRUE: 会把TF BOOTLOADER编进主程序第一个SECTOR分区，支持强制升级,在T卡上不用放tfboot.bin，默认支持这种方式
// FALSE: 只支持工程模式下T卡升级,且T卡上必须包含.pac和T卡热升级tfboot.bin，默认不支持这种方式。

// 升级方法
//⑴ 在T卡上新建目录 bl_update ，在该目录下放入tfload.pac(将需要升级的PAC文件更名为tfload.pac)
//⑵ 升级方式:

// A. 强制升级--组合键：
// 强制升级是指在手机不能正常开机并且BOOT没有损坏的情况下，使用组合键（一般是长按2S左右）直接升级。
// 如果进入不了强制升级界面，就说明BOOT文件损坏,必须使用PC工具才能重新下载程序。
// 强制升级过程，不必通过手机备份用户信息。

// 进入强制升级方式为在现在关机状态下按: KEYIN_0_KEYOUT_0 和 KEYIN_1_KEYOUT_1 和 POWER 键组合键。
// 进入强制升级方式要求（除BOOT区被破坏的特殊情况外）在升级过程中出现断电的异常情况下，
// 也可以通过强制升级方式进行下载(从头下载不是断点续传)且在任何情况下都不能破坏校准参数。

//注： KEYIN_0_KEYOUT_0 和 KEYIN_1_KEYOUT_1 对应的按键请参考 keymap_cfg.c (UMS9117 平台参考手机对应的是KEY3和OK键)。
// 如需使用其他组合键，请根据具体芯片的SPEC修改tf_load.c中的 TF_EnterVerify()。

//B. 自动升级
// 自动升级是指手机在能够开机的情况下：通过在IDLE界面下输入组合键: #*8378#9# 进入工程模式热升级界面按提示进行升级。

###
driver:tf_load\src\tf_load.c  TF_EnterVerify
//		==>ok+CALL,实测ok+CALL+任意键+Red
config:keymap_cfg.c  KEYMAP_CONFIG
//  keyRawIntSts, 如果改按键，这个值不对
//  0~15，试几版估计可以把值试出来

###
//		==>HandleTFLoadWinMsg
//		====>TF_LoadInit
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_TFLOAD_ENTER


###
// --key--读键
Save:node\C\study\Macro_doc_8910key.h  __keyPhy__
// error
patch:node\bug\Macro_bug_other.h  __tf_load__



[1.21] 


[1.22] 



