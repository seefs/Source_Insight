
//目录
Save:node\C\study\Macro_doc_8910.h \[1.1\] Message, keyStatus
Save:node\C\study\Macro_doc_8910.h \[1.2\] FUN 入口-------------
Save:node\C\study\Macro_doc_8910.h \[1.3\] 
Save:node\C\study\Macro_doc_8910.h \[1.4\] 
Save:node\C\study\Macro_doc_8910.h \[1.5\] 说明文档
Save:node\C\study\Macro_doc_8910.h \[1.6\] Win数据
Save:node\C\study\Macro_doc_8910.h \[1.7\] tool
Save:node\C\study\Macro_doc_8910.h \[1.8\] 
Save:node\C\study\Macro_doc_8910.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_8910.h \[1.10\] ImageNote
Save:node\C\study\Macro_doc_8910.h \[1.11\] arm log
Save:node\C\study\Macro_doc_8910.h \[1.12\] //FontTool
Save:node\C\study\Macro_doc_8910.h \[1.13\] build/time----------
Save:node\C\study\Macro_doc_8910.h \[1.14\] 
Save:node\C\study\Macro_doc_8910.h \[1.15\] ATEST_SUPPORT
Save:node\C\study\Macro_doc_8910.h \[1.16\] fota----------adups
Save:node\C\study\Macro_doc_8910.h \[1.17\] fota----------rs
Save:node\C\study\Macro_doc_8910.h \[1.18\] T卡升级
Save:node\C\study\Macro_doc_8910.h \[1.19\] 
Save:node\C\study\Macro_doc_8910.h \[1.20\] 




[1.1] Message, keyStatus

//	Message 切换
Save:node\C\study\Macro_Spr_MsgId.h
//
// MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);




[1.2] FUN 入口
//	FUN 入口
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 



[1.4] 






[1.5] 说明文档
SC6530平台_application_notes.doc				  ###  宏说明			   
Universe手机使用说明.docx 					   ###	手机使用说明
Build_Environment_Manual.doc ###  编译环境




[1.6] Win数据
//
VIRTUAL_WIN_ID
//
MMI_BASE_NODE_T    # 可以转 WINDOW_NODE
MMI_HANDLE_NODE_T
MMI_TREE_NODE_T    HANDLE
MMI_HANDLE_T		HANDLE_NODE + APPLET_NODE	 #应用

MMI_WINDOW_T		
MMI_WINDOW_NODE_T		 NODE + WINDOW + HANDLE
MMI_WINDOW_TABLE_CREATE_T	 参数
MMI_WINDOW_CREATE_T 	   参数
MMI_APPLET_NODE_T		 
MMI_ZORDER_SYSTEM_T
MMI_ZORDER_NODE_T		 WINDOW_NODE + ……

MMI_APPLET_SYSTEM_T

MMI_CTRL_NODE_T
MMI_CONTROL_CREATE_T	参数

MMI_MESSAGE_PTR_T 
CAF_GUID_T			 module_manager
GUIMENU_GROUP_T

GUI_POINT_T
GUI_RECT_T
MMI_WIN_ID_T
MMI_IMAGE_ID_T
GUI_LCD_DEV_INFO
IMG_RES_SRC_T		 显示图片
CAF_GUID_T	  
MMI_MODINFO_NODE_T	  kernel模块的信息
CAF_RES_T
CAF_HANDLE_T
RES_NODE_DATA_T

IMG_RES_DST_T	 显示
IMG_RES_SRC_T


//		==>CTRLBASE_OBJ_T
//		====>win_handle
//		====>handle
//		====>ctrl_id
//		======>
//		========>



[1.7] tool
//
down:\\
// 自动下载
down:\UpgradeDownload_R25.21.1401\Bin\
down:\UpgradeDownload_R25.21.1401\Bin\UpgradeDownload.exe
// 格式化下载
down:\ResearchDownload_R25.21.1401_\ResearchDownload_R25.21.1401\Bin\
down:\ResearchDownload_R25.21.1401_\ResearchDownload_R25.21.1401\Bin\\UpgradeDownload.exe




[1.8] 




[1.9] test code
### __code__

// SAR
//app:eng\c\mmieng_base.c  SAR

// BUILD
app:eng\c\mmieng_base.c  BUILD



// Phone
"#*8378#0#", "*#222#", "*#15963#", "####1111#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_UI_TEST1

// UI
"####1111#", "*#87#", "*#666#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_FULL_TEST

// Item
app:eng\c\mmieng_main.c  MMIENG_IDLE_ITEM_TEST
 "*#777#", "*#66*#", "*#79*#",
 
// Product
"#*8378#3#",

// PhoneInfo -- bg
"#*8378#4#",

// SN
"####2222#",

// Net--mcc,mnc
"####1040#",

// Engineer
"#*8378#1#", "*#555#",--mcc,mnc


//--v--mk--sw--hide
//app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SW_VERSION

// Version--Out -- bg
"#*8378#2#", "####0000#", 
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1

// Version--2
"*#888#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2

// Version--3--wa01u, mk,//显示更多版本信息
//"*#888#",
//app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION3


// Chip
"#*8378#5#",

// NV
"#*786646468#",

// Monkey--no use
"#*8378#8#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_MONKEY_TEST_AUTOSET

// TFload
"#*8378#9#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_TFLOAD_ENTER

// ALLSVN -- bg
"#*786837#",

// HW
"*#999#", "*#523#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_HW_VERSION

// IMEI
"*#333#", "*#0066#", "*#3184#"; "*#06#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SET_SIM_IMEI_ALL

// Reset
"*#119*#", "*#70#",

// __ELECTRIC__
"*#2010#"; "*#0808#"; "*#0809#", 
app:eng\c\mmieng_main.c  MMIENG_ELECTRIC_GUARNTEE_CARD_RESET

// SALES_TRACKER
app:eng\c\mmieng_main.c  MMIENG_IDLE_SALES_TRACKER_SETTING
"*#55555#"

// test code
app:eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
//    {
//         "#1#",
//         MMIENG_IDLE_DIAL_NUM_UI_TEST2, //func id
//         PARS_MANUFACTURE_TEST,         //无使用
//         MMIAPIENG_StartUITest
//    }

// imsi:
SpdeShow3GIMSIInfo


### 
//--v--time,data,vol
//MMIENG_IDLE_DIAL_NUM_PHONE_INFO


//--t--nv error
//MMIENG_IDLE_DIAL_NUM_NV_COUNTING,

//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUDIO_DEMO,
//MMIENG_IDLE_DIAL_NUM_VIDEO_DEMO,
//MMIENG_IDLE_DIAL_NUM_MEDIA_DEMO,

//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUTO_LOG,
//MMIENG_IDLE_DIAL_NUM_LOG_OFF,



### 暗码查看
// 密码6~8位
//		==>####8888#，暗码, simlock
//		==>语言切换
app:parse\c\mmiparse_dial.c  MMIAPISET_ParseSIMLockSwitchString
//		==>IMEI; "*#06#",
app:parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr

### reset
Save:node\C\study\Macro_app_8910set.h  __reset__


[1.10] ImageNote

//查看图标是否存在
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_QUERY
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_SUCCESS  
//
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\PDA

images:clock\MMI_RES_DEFAULT\IMAG\Alarm\IMAGE_CLOCK_ALARM_ALERT.png
images:clock\MMI_RES_DEFAULT\IMAG\Alarm



//查看图标是否存在
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_PUBWIN_QUERY




[1.11] arm log
//
//	客户您好，
//
//	请帮忙再提供一份log，需要修改一下nv: AUDIO\AUDIO_ARM\Handsfree\AudioStructure\reserve\reserve[63]=0x131D
//	测试前还需发送AT指令：
//	DSP侧dump开关：
//	开：
//	AT+SPDSPOP=2
//	AT+SPDSP=65535,0,0,4096
//	nv修改和at是开启arm 和 dsp的通话语音dump，语音数据会发送到log里。log抓完后重放一下log，
//	然后分别点击 Tool -> audio Arm Transfer -> Transfer 和 Tool -> audio DSP Transfer -> Transfer 
//	会解析出两个*.pcm文件夹 说明log抓取成功。
//	谢谢！




[1.12] 
	





[1.13] build/time

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


[1.14] 


[1.15] ATEST_SUPPORT
// ATEST 默认不开, 没有项目开
make\app_main\app_main.mk  ATEST_SUPPORT



[1.16] fota----------adups
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


[1.17] fota----------rs
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




[1.18] T卡升级
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


[1.19] 




[1.20] 



