

//目录:
// 1. 
Save:node\C\project\Macro_cfg_8910.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_8910.h \[1.2\] PB
Save:node\C\project\Macro_cfg_8910.h \[1.3\] SMS
Save:node\C\project\Macro_cfg_8910.h \[1.4\] MMS, CB
Save:node\C\project\Macro_cfg_8910.h \[1.5\] BROWSER, DL
Save:node\C\project\Macro_cfg_8910.h \[1.6\] BT
Save:node\C\project\Macro_cfg_8910.h \[1.7\] RECORD
Save:node\C\project\Macro_cfg_8910.h \[1.8\] LCD_SIZE---------------
Save:node\C\project\Macro_cfg_8910.h \[1.9\] shortcut----------menu
Save:node\C\project\Macro_cfg_8910.h \[1.10\] //USB
Save:node\C\project\Macro_cfg_8910.h \[1.11\] CTA
Save:node\C\project\Macro_cfg_8910.h \[1.12\] //CALL record
Save:node\C\project\Macro_cfg_8910.h \[1.13\] simulator
Save:node\C\project\Macro_cfg_8910.h \[1.14\] torch
Save:node\C\project\Macro_cfg_8910.h \[1.15\] 
Save:node\C\project\Macro_cfg_8910.h \[1.16\] 
//
Save:node\C\project\Macro_cfg_8910.h \[2.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[2.2\] DTMF, Dial, SIM, 天线
Save:node\C\project\Macro_cfg_8910.h \[2.3\] 电子保卡
Save:node\C\project\Macro_cfg_8910.h \[2.4\] tihu--------------语音王
Save:node\C\project\Macro_cfg_8910.h \[2.5\] PLS---------------语音王
Save:node\C\project\Macro_cfg_8910.h \[2.6\] SIMPLIFY_TTS------简易版语音王
Save:node\C\project\Macro_cfg_8910.h \[2.7\] FM
Save:node\C\project\Macro_cfg_8910.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_8910.h \[2.9\] SS
Save:node\C\project\Macro_cfg_8910.h \[2.10\] Tool
Save:node\C\project\Macro_cfg_8910.h \[2.11\] lib--------------第3方
Save:node\C\project\Macro_cfg_8910.h \[2.12\] build 服务器流程
Save:node\C\project\Macro_cfg_8910.h \[2.13\] build 省空间
Save:node\C\project\Macro_cfg_8910.h \[2.14\] build time
Save:node\C\project\Macro_cfg_8910.h \[2.15\] marco
Save:node\C\project\Macro_cfg_8910.h \[2.16\] Lib
Save:node\C\project\Macro_cfg_8910.h \[2.17\] FLASH (大、/小版本)
Save:node\C\project\Macro_cfg_8910.h \[2.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[2.19\] //bak
Save:node\C\project\Macro_cfg_8910.h \[2.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] AUDIO, TONE


// 双听筒
//	DUAL_RECEIVER_SWITCH_SUPPORT
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS8910_ROM_16MB_DS_USER.mk


## TONE
SPDE_PRJ/K220U_HYBL_H660A/uis8910_phone_user_base_config.cfg  YOUNGTONE_TTS_LIB
// YOUNGTONE_TTS_LIB = MAN


[1.2] PB
// 黑名单
make\app_main\app_macro.mk  MMI_BLACKLIST_SUPPORT
// 白名单
prj:project_{cur}.mk   MMI_WHITELIST_SUPPORT = TRUE
prj:project_{cur}.mk   MMI_BLACK_AND_WHITE_LIST_ADD_SETTING = TRUE
//		==>HandleMTCallDisc
//		====>CC_MTCallWhiteFireWall


## "PB和SMS条数修改.txt"：

//1、将电话簿条目数改为5000条需要按如下步骤调整(假设增加条数为X（=5000 - 版本默认条数）)：
//a、修改条目, 均设置为5000
MS_MMI_Main\source\mmi_service\export\inc\mmipb_common.h  MMIPB_NV_MAX_RECORD_NUM
//		#define MMIPB_NV_MAX_RECORD_NUM     200 //500 

MS_MMI_Main\source\mmi_app\app\pb\h\mmipb_nv.h  MMINV_MAX_PHONEBOOK_RECORDS
//		#define MMINV_MAX_PHONEBOOK_RECORDS     MMIPB_NV_MAX_RECORD_NUM

//b、增加的RAM调整
//	每增加100条联系人，大概增加约24K的STATIC heap空间，因此，增加的空间为(24*X/100)
//	根据增加的空间（假设为X），调整mem_cfg.c中 MAX_STATIC_SPACE_SIZE 和MAX_SYSTEM_SPACE_SIZE大小，即
//	MAX_STATIC_SPACE_SIZE大小 + X
//	MAX_SYSTEM_SPACE_SIZE大小 - X
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252

//每增加100条联系人,APP HEAP增加情况：
//仅存一个号码：～14K
//存两个号码：  ～16K
//...
//
//因此，总增加RAM：(14 + 2*（K - 1）) * X / 100  -- K为号码数（见宏MMIPB_MAX_NV_PHONE_NUM@mmi_custom_define.h定义）

//【说明】上面"+ X" "- X"只是保守的修改方法，实际系统可能会有冗余，MAX_SYSTEM_SPACE_SIZE可能调整的大小会小一些。可以适当微调(以50K为单位)，只要编译不报RAM超即可。

//因此，如果增加的条数大，会导致系统空间变小，影响browser/camera等大内存应用（风险！！！）

//c、flash 调整
//请见下面《Flash 配置相关说明》
//
//d、修改后编译代码，进入手机进工程模式->Running NV Counting，查看MMI running NV item num，如果该值远远小于MAX_MMI_NV_USER_ITEM_NUM(@mmi_nv.h)定义的值，
//则不需要做下面步骤的调整，否则，需要做后续的调整。
//
//e、修改MAX_MMI_NV_USER_ITEM_NUM(@mmi_nv.h):MAX_MMI_NV_USER_ITEM_NUM值为（MAX_MMI_NV_USER_ITEM_NUM + X）
//
//f、修改NV_MAX_ID（mem_cfg.c）：NV_MAX_ID值为（NV_MAX_ID + X）
//
//g、修改MAX_NV_USER_ITEM_NUM(@nv_item_id.h):MAX_NV_USER_ITEM_NUM值为（MAX_NV_USER_ITEM_NUM + X）
//
//h、需要申请更新两个库文件umem.a及efs.a
//   MAX_NV_USER_ITME_NUM-->NV_UDISK_BASE-->umem.a
//   NV_MAX_ID-->LAST_NV_ITEM-->efs.a  
//
//注：efs中NV最大总条数<0x3fff(16383)：
//    1、查看EFS_ItemInit（@efs_item.c）语句:SCI_ASSERT(EFS_MAX_NV_ITEM < ITEM_MASK_ID)
//    2、#define ITEM_MASK_ID 0x3FFF
//-------------------------------------------------------------------------


## Flash 配置相关说明(客户量产前建议的必查项)：
//	对于runing nv的修改（修改手机中短信条数/Pb条数/增加应用NV项等）：
//	1、通过相关宏修改手机短信条数
//	2、a、修改后编译代码，进入手机进工程模式->Running NV Counting，查看All running NV size的值（假设定义为all_running_nv_size）
//	   b、查看对应的spiflash_cfg.c文件中running nv配置的大小：(RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE)
//	   c、必须满足(RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE) >= all_running_nv_size + FLASH_SECTOR_SIZE
//
//	spi flash各个区块的关系（大小定义见对应工程的spiflash_cfg.c）
//	     (RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE) + FIXED_NV_SIZE + (UMEM_SECTOR_NUM*FLASH_SECTOR_SIZE) + PS BIN SIZE(工程的*stone.bin文件：resource+ps code经压缩后文件大小) <= PHY_FLASH_SIZE（物理flash的大小，单位Bytes）
//	    注：上面等式每项NV的大小要Sector对齐（没有达到1个Sector大小，以1个Sector大小计算）
//
//	【注意】前面公式中宏对应于非镁光Flash，对于镁光Flash，需要查看和修改对应“*_B”的宏
//	（如：RUNNIN_NV_SECTOR_NUM_B等等，而不是RUNNIN_NV_SECTOR_NUM）

## 其他 
make\app_main\release_app_macro.mk  MMIPB_MAX_COUNT_200



[1.3] SMS

## 如何调整短信息条数
// 1.修改控制短信个数的宏：
BASE\l4\export\inc\mn_type.h  MN_SMS_IN_NV_MAX_NUM
//		#define MN_SMS_IN_NV_MAX_NUM        200      // the max SMS num in NV 

MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMINV_MAX_SMS_RECORDS
//		#define MMINV_MAX_SMS_RECORDS    200

// (CQ没说，最好也改下)
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  define^MMISMS_MAX_SYS_SIM_SMS_NUM
//		#define MMISMS_MAX_SYS_SIM_SMS_NUM    200

// 2.调整RUNNINT NV大小。需要相应的flash cfg的配置增大running nv的sector数目
// 短信息RUNNINT NV增加大小的计算方式为： 调整的数目* sizeof(MN_SMS_MESSAGE_ITEM_T)
//  100*230/1024 =  22.46
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  FLASH_SIZE_128MBIT
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  559
//		#define  RUNNIN_NV_SECTOR_NUM       11

// 3.调整RAM的大小
chip_drv\source\prj_win\mem_cfg_win32.c  MAX_STATIC_HEAP_SIZE
// 调整 MAX_STATIC_HEAP_SIZE 的大小。
// 短信息 MAX_STATIC_HEAP_SIZE 增加大小的计算方式为：调整的数目*sizeof(MMISMS_LINKED_ORDER_UNIT_T)
//  100*188/1024 =  18.3

// 4.RAM调整(另外一个补丁)
//  100条 约  12K
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252
//		MAX_STATIC_SPACE_SIZE大小 + 12K
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  259
//		MAX_SYSTEM_SPACE_SIZE大小 - 12K

//	【说明】上面"+ Y" "- Y"只是保守的修改方法，实际系统可能会有冗余，
//	MAX_SYSTEM_SPACE_SIZE可能调整的大小会小一些。可以适当微调(以50K为单位)，只要编译不报RAM超即可。
//	因此，如果增加的条数大，会导致系统空间变小，影响browser/camera等大内存应用（风险！！！）



## 关闭短信
//	请将 APP_RegisterPsService@mmimain.c 中sms 与smscb 部分注掉
//	{
//	    //Register sms event
//	    SCI_RegisterMsg( MN_APP_SMS_SERVICE,
//	        (uint8)(EV_MN_APP_SMS_READY_IND_F & 0xff), /*lint !e778*/
//	        (uint8)((MAX_MN_APP_SMS_EVENTS_NUM - 1) & 0xff),
//	        SCI_NULL);
//	   
//	    //Register smscb event
//	    SCI_RegisterMsg( MN_APP_SMSCB_SERVICE,
//	        (uint8)(EV_MN_APP_SMSCB_MSG_IND_F & 0xff), /*lint !e778*/
//	        (uint8)((MAX_MN_APP_SMSCB_EVENTS_NUM - 1) & 0xff),
//	        SCI_NULL);
//	}
//	然后再将主菜单中短信屏蔽掉即可。
//	要注意的是有其他应用有使用短信的选项也需要屏蔽掉，例如在拨号介面输入号码去发短信，也需从该菜单屏蔽掉。


// SECURITYBOX
make\app_main\app_macro.mk  MMI_SMS_SECURITYBOX_SUPPORT



[1.4] MMS, CB
### __MMS__
//--107
prj:project_{cur}.mk  MMS_SMS_IN_1_SUPPORT = TRUE
prj:project_{cur}.mk  MMS_SUPPORT = DORADO
//--8910
prj:{cfg}.cfg  MMS_SMS_IN_1_SUPPORT = TRUE
prj:project_{cur}.mk  MMS_SUPPORT = DORADO

// 关闭彩信功能可以透过合入patch（需要向我司申请）, 关闭MMS_SUPPORT宏，合入之后另外编版本测试即可


### __CB__
//4.pws
// 台湾版加预警系统
prj:project_{cur}.mk  REMOVE_CB_FEATURE = FALSE
prj:project_{cur}.mk  MMI_ETWS_SUPPORT = TRUE
// 107默認開
make\app_main\release_app_macro.mk  MMI_ETWS_SUPPORT



[1.5] BROWSER, DL
// mk--true
prj:project_{cur}.mk  BROWSER_SUPPORT = TRUE
prj:project_{cur}.mk  BROWSER_SUPPORT_DORADO = TRUE
prj:project_{cur}.mk  BROWSER_ALL_RUNNING_SUPPORT = TRUE   # 107
prj:{cfg}.cfg         BROWSER_ALL_RUNNING_SUPPORT = TRUE   # 8910
// mk--false
prj:project_{cur}.mk  BROWSER_OPERA_START_PAGE = FALSE
prj:project_{cur}.mk  BROWSER_OPERA_FAVORITE_WITH_DEFAULT = FALSE

// 8910      
prj:project_{cur}.mk  BROWSER_OPERA_START_PAGE = TRUE
prj:project_{cur}.mk  BROWSER_SEARCH_SUPPORT = FALSE
//
prj:project_{cur}.mk  OPERA_MINI_SUPPORT = VER42



// browser UI
prj:project_{cur}.mk  BROWSER_INPUT_BIG_FONT_BG_STYLE  = TRUE
prj:project_{cur}.mk  BROWSER_DL_DEFAULT_TCARD         = TRUE


// Download
prj:project_{cur}.mk  DL_SUPPORT    = TRUE   # 107 FALSE
prj:project_{cur}.mk  OMADL_SUPPORT = TRUE   # 107 FALSE

//
prj:project_{cur}.mk  DATACOUNTER_SUPPORT = TRUE  # 8910才有



[1.6] BT
//BT--107
prj:project_{cur}.mk  BLUETOOTH_SUPPORT = SPRD_BT

//BT--8910
prj:{cfg}.cfg  BLUETOOTH_SUPPORT = SPRD_BT
prj:project_{cur}.mk  BLUETOOTH_SUPPORT = SPRD_BT



[1.7] RECORD
// MMI_RECORD_SUPPORT
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/RF_calib.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/RF_nv.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/audio_arm_6531efm.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/audio_calib_VQE.nvm




[1.8] Lcd
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


[1.9] shortcut
// __shortcut__
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_shortcut.c  ->direction_shortcut

// fun 4
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  OpenSelectedShortcutWin
// key 4
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  GetDirectionKey
// key 2
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  GetFunctionKey
// key web
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_cstyle.c  case^MSG_APP_WEB


### 设置捷径对齐 # 107
// id
MMISET_SHORTCUT_MAX / MMISET_SHORTCUT_TYPE_E
// txt
s_shortcut_menu_list_text_id
// func
mmiset_shortcut_menu_func_arr


### 快捷方向键软键对齐 # 107 /8910
// id
MMISET_SHORTCUT_MAX / MMISET_SHORTCUT_TYPE_E
// key--txt
s_shortcut_list_text_id
// key--func
OpenSelectedShortcutWin--func_arr
// smart--idle--short
app:setting\c\mmiset_shortcut.c  OpenShortcutFunWin

// short--menu
//		==>HandleSetShortcutWindow
//		====>SetShortcutSetlistParam
//		======>.s_shortcut_list_text_id
//		========>MMISETLIST_CreateWin
//		====>SaveAllShortcutSettings
//		======>SetShortcutInfo


### mini对齐 (未使用)
// key--pic/txt    # idle (2个, mini的应该对齐)
s_shortcut_id
// key--pic        # short (107前面没对齐)
s_shortcut_list_img_id


### 默认值/显示 (不用对齐)
// default list
s_shortcut_menu_show_list_text_id


### 编辑 # 107 (不用对齐)
// all list
s_shortcut_menu_edit_list_text_id

// edit-menu
app:setting\c\mmiset_phonewin.c  MMI_RESULT_E^HandleShortCutSetMenuWindow



[1.10] 



[1.11] CTA
// PLMN
prj:project_{cur}.mk  MMI_PREFER_PLMN_SUPPORT
// PLMN--popup
//  ----都改为: TXT_COMPLETE
app:setting/c/mmiset_callwin.c  BOOLEAN^MMIAPISET_HandlePreferNetworkListCnf


// 单软多硬
prj:{cfg}.cfg  FORCECHANGE_SUPPORT  = TRUE
prj:{cfg}.cfg  DELTA_NV_CONFIG_PATH = delta_nv   
//
prj:{cfg}.cfg  DELTA_NV_BIN_SUPPORT = TRUE         
prj:{cfg}.cfg  DELTA_NV_PATITION_SUPPORT = TRUE


[1.12] 




[1.13] simulator
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


[1.14] __torch__

// 1.ENG_MANU_TORCH, ENG_MANU_TORCH_PATCH  (软开)
//		==>ID_ENG_TEST_MANU_TORCH
//		====>旧
//		======>(1)上键点亮，下键关闭 (no use)
//		======>(2)侧边开关
//		========>ENG_MANU_TORCH_HELP_STR1
//		====>107新, ENG_MANU_TORCH_107_STYLE
//		======>(1)上键点亮，下键关闭
//		========>TORCH_SUPPORT                #软开
//		======>(2)侧边开关
//		========>ENG_MANU_TORCH_HELP_STR1     #硬开
app:eng\c\mmieng_uitestwin.c  case^ID_ENG_TEST_MANU_TORCH
//		====>8910
//		========>TXT_ENG_TORCHNOTE_HELP_STR1   #硬开
//		========>TXT_ENG_TORCHNOTE             #软开 1line
//		========>TXT_ENG_TORCH_TEST            #软开 2line
//		====>107
//		========>TXT_ENG_TORCHNOTE_HELP_STR1   #硬开
//		========>TXT_ENG_TORCHNOTE             #软开

// 2.MMI_TORCH_LED_SUPPORT (手机默认开, 手表默认关)
//		==>"*#555#"
//		====>ID_ENG_TORCH_LED_TEST
//		======>上键点亮，下键关闭
//		==>单项测试style2 (默认未开)
//		====>ID_ENG_TEST_TORCH_LED
//		======>上键点亮，下键关闭
app:eng\c\mmieng_main.c   case^ID_ENG_TORCH_LED_TEST
//		==>"*#222#"
//		====>UITestTorchLedTestWinHandleMsg
app:eng\c\mmieng_uitestwin.c  case^ID_ENG_TEST_TORCH_LED

// 3.TORCH_SUPPORT (手机默认开, 手表默认关)
//		==>状态条显示
//		==>shortcut

// 4.mainmenu
//		==>MMIMAINMENU_StartTorch
//		==>shortcut



[1.15] 新宏
// 新宏
prj:project_{cur}.mk  BT_LOG_MENU_SUPPORT = FALSE
prj:project_{cur}.mk  DEBUG_VERSION = FALSE
prj:project_{cur}.mk  FLASH_SIZE = FALSE
prj:project_{cur}.mk  FLV_DEC_SUPPORT = FALSE
prj:project_{cur}.mk  AP_CP_RAM_SIZE = 40X88
prj:project_{cur}.mk  FLASH_SIZE = 128MBIT
prj:project_{cur}.mk  SRAM_SIZE = 128MBIT
prj:project_{cur}.mk   = FALSE
prj:project_{cur}.mk  xxxxxx = FALSE
prj:project_{cur}.mk  xxxxxx = FALSE
prj:project_{cur}.mk  xxxxxx = FALSE
prj:{cfg}.cfg  CARD_LOG = FALSE
prj:{cfg}.cfg  MBEDTLS_SUPPORT = FALSE
prj:{cfg}.cfg  ENABLE_HTTPC = FALSE
//prj:{cfg}.cfg  AVI_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  FLV_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  H264_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  HAS_MODEM_NV = FALSE
prj:{cfg}.cfg  JPG_DEC_SUPPORT = FALSE
prj:{cfg}.cfg  MULIT_VARIANT_SUPPORT = FALSE
//prj:{cfg}.cfg  NETFRONT_SUPPORT = NONE
prj:{cfg}.cfg  OAUTH_SUPPORT = FALSE
prj:{cfg}.cfg  PNG_DEC_SUPPORT = NONE
prj:{cfg}.cfg  SIM_LANGUAGE_SUPPORT = FALSE
prj:{cfg}.cfg  SMART_PAGING_SUPPORT = FALSE
prj:{cfg}.cfg  SMSCB_MSG_ID_MAX_NUM = 35
prj:{cfg}.cfg  UMEM_PRTITION = LARGE
prj:{cfg}.cfg  TF_LOAD_SUPPORT = FALSE
prj:{cfg}.cfg  XML_SUPPORT = FALSE
prj:{cfg}.cfg   = FALSE
prj:{cfg}.cfg  XML_SUPPORT = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE

// lang
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT = DUAL
//--开点阵link报错(SPMLAPI_Init)
prj:{cfg}.cfg  FONT_TYPE_SUPPORT   = DE_BITMAP / VECTOR
prj:{cfg}.cfg  VECTOR_FONT_SUPPORT = NONE      / DEFAULT
prj:{cfg}.cfg  VECTOR_TABLE_ADDR   = HIGH
prj:{cfg}.cfg  VM_TABLE_CONFIG     = SMALL
//
prj:{cfg}.cfg  VM_SUPPORT = FALSE
prj:{cfg}.cfg  VIDEO_RECORD_SUPPORT = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE
prj:{cfg}.cfg  xxxxxx = FALSE
//
prj:project_{cur}.mk  MMI_MULTI_SIM_SYS = DUAL
prj:{cfg}.cfg  MULTI_SIM_SYS = DUAL
prj:{cfg}.cfg  SMART_DUAL_SIM_SUPPORT = FALSE
// lib
prj:{cfg}.cfg  TCPIP_SUPPORT = DUAL
// appmain
prj:project_{cur}.mk  GBK_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_BYD_EMAIL_SUPPORT = FALSE
prj:project_{cur}.mk  CALENDAR_REMINDER_TYPE_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_PVTEST_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_IDLE_CUSTOM_WORD_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_FMM_PICTHUMBNAIL_SUPPORT = FALSE
prj:project_{cur}.mk  SALES_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_SMS_VOICE_MAIL_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_SPEEDDIAL_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_AUDIOPLAYER_ALBUM_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_PLMN_LOAD_DEFAULT_SUPPORT = FALSE


[2.1] IM
//IM_ENGINE = NONE


### IM
// ==>im
Save:node\C\study\Macro_im_8910.h  __input__



[2.2] DTMF, Dial, SIM, 天线
//
MMI_DIALPANEL_DTMF_SUPPORT

// 还有一个地方
app:phone\c\mmiphone.c  MMI_RESULT_E^HandleScellRssiInd

// sim热插拔
MS_Customize\source\product\driver\gpio\gpio_prod.c  GPIO_SIMIntHandler




[2.3] 电子保卡

// 1.本地版(不可擦除)(107)
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD = TRUE
// nv同网络版
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE
// card--set
Save:node\C\study\Macro_fun_8910.h  __SpdeCard__


// 2.网络版
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2 = TRUE
prj:project_{cur}.mk   SPDEHTTP_SUPPORT = TRUE
prj:project_{cur}.mk   SPDE_ELECTRIC_GUARANTEE_CARD_V2_USE_LOCAL_TIME = TRUE
prj:project_{cur}.mk   NV_CUS_FIXNV_DATA_LEN_128 = TRUE


// 3.本地版(107不可擦除/8910升级可保留)
prj:project_{cur}.mk   AOLEDA_ELECTRIC_GUARANTEE_CARD = TRUE
// card--set
Save:node\C\study\Macro_fun_8910.h  __AoledaCard__



// 4.销量统计
// sale--set
Save:node\C\study\Macro_fun_8910.h  __sale__
//
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SUPPORT 				= TRUE
prj:project_{cur}.mk   SPDE_SALES_TRACKER_FOR_T5_W53			= TRUE ###时间，接收号码中心号码
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SETTING_SUPPORT		= TRUE ###设置菜单
prj:project_{cur}.mk   SPDE_SALES_TRACKER_RESEND_SMS_IF_FAILED 	= TRUE	###销售追踪发送消息失败后(在不重启的情况下)继续发送
prj:project_{cur}.mk   SPDE_SALES_TRACKER_CODE_XJ123XJ			= TRUE	###查询指令*#4695#
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SAVE_SEND_STATUS_AFTER_CLEAR_DATA = TRUE
prj:project_{cur}.mk   SPDE_SALES_SIM1_FAILE_USE_TO_SIM2		= TRUE ##卡1  失败就用卡2
// other
prj:project_{cur}.mk   SPDE_SALES_TRACKER_OTHER_NUMBER_SUPPORT
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SETTING_ADD_SMS_SHOW
prj:project_{cur}.mk   SPDE_SALES_TRACKER_CONFIRM_WINDOW
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SHOW_SUCCESS_NOTIFY
prj:project_{cur}.mk   SPDE_SALES_TRACKER_DEFAULT_OFF
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SEND_BY_CONFIRM


[2.4] tihu

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


[2.5] PLS



[2.6] SIMPLIFY_TTS
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


[2.7] FM
// mk
prj:{cfg}.cfg  FM_SUPPORT = SPRD_V0 
prj:{cfg}.cfg  FM_VBC_EQ = TRUE                                     ###
prj:{cfg}.cfg  FM_VBC = TRUE
//
prj:{cfg}.cfg  BYD_CUSTOM_FM_TUNNING_STEP = TRUE

// mk--低噪放
// --代码里面应该默认会判断插入耳机用耳机的，没插耳机用低噪放的
// --要是不想用耳机的天线用宏控一下
prj:project_{cur}.mk  FM_S_ANT_SUPPORT = FALSE  # 天线, eng分开测试


// test--fm
app:eng\c\mmieng_uitestwin.c  MMI_RESULT_E^UITestFmWinHandleMsg
// --打开低噪放 / 用天线
//        GPIO_SetFmLNA( 1 );
// --关闭低噪放
//        GPIO_SetFmLNA( 0 ); //恢复内置天线的GPIO值



[2.8] WIFI
//
prj:{cfg}.cfg  WIFI_SUPPORT = UNISOC_RX
prj:{cfg}.cfg  WIFI_VENDOR = UNISOC 


// WIFI
//		==>MMIAPIENG_StartEngineerMenu
app:eng/c/mmieng_main.c  MMI_RESULT_E^ENGMainMenuWinHandleMsg
// 单项测试--menu
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_eng
// 单项测试--WIFI
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_app_set
// 单项测试--WIFI--usb
app:eng/c/mmieng_uitestwin.c  case^ID_ENG_TEST_WIFI



[2.9] SS
//MMS--107
prj:project_{cur}.mk  SCREENSAVER_SUPPORT = TRUE

//MMS--8910
prj:{cfg}.cfg  SCREENSAVER_SUPPORT = TRUE



[2.10] Tool
// CALCULATOR_SUPPORT
prj:project_{cur}.mk CALCULATOR_SUPPORT
// STOPWATCH_SUPPORT
prj:project_{cur}.mk STOPWATCH_SUPPORT
// CALENDAR_SUPPORT
prj:project_{cur}.mk CALENDAR_SUPPORT
// WORLD_CLOCK_SUPPORT
prj:project_{cur}.mk WORLD_CLOCK_SUPPORT



[2.11] lib
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



[2.12] build 服务器
//
//	Jenkins服务器上，我们自己git工程编译过程是这样，大家也可以了解下：
//	1、jenkins的对代码的更新处理
//	2、我们增加加了 git clean 操作
//	3、我们增加更新 HW_NV_PARA的操作，HW_NV_PARA放在服务器单独另一个目录
//	4、copy HW_NV_PARA这个目录的相关文件到SPDE_PRJ对应项目的nv目录中
//	5、编译的时候会运行项目的bat文件，会把SPDE_PRJ的nv文件和资源文件复制到代码编译中相关目录
//	6、开始正常的编译

// make
//		==>
//		====>
make.bat
make\make_cmd\


[2.13] build 省空间
//
build\tmp\
build\tmp\app_main.macro
build\tmp\app_main.macro.nv
//
build\tmp\error.txt


请问贵司目前缺少多少空间?

//BLUETOOTH_SUPPORT = NONE
// 可以关这些
build\tmp\app_main.macro  BT_NONSIG_SUPPORT = TRUE                             ### Nosig support
build\tmp\app_main.macro  BT_BQB_SUPPORT = TRUE                                ### BQB SUPPORT
build\tmp\app_main.macro  BT_OPP_SUPPORT = TRUE                                ### Switch Of OPP Profile Support
build\tmp\app_main.macro  BT_FTS_SUPPORT = TRUE                                ### Switch Of FTP Server Profile Support
build\tmp\app_main.macro  BT_HFG_SUPPORT = TRUE                                ### Switch Of Hand Free Gateway Profile Support
build\tmp\app_main.macro  BT_A2DP_SUPPORT = TRUE                              ### Switch Of A2DP Profile Support
build\tmp\app_main.macro  MP3_A2DP_SUPPORT = TRUE                              ### MP3 Support Bluetooth Stereo:
build\tmp\app_main.macro  WAV_A2DP_SUPPORT = TRUE                              ### WAV Support Bluetooth Stereo:
build\tmp\app_main.macro  AMR_A2DP_SUPPORT = TRUE                              ### AMR_DSP Support Bluetooth Stereo:
build\tmp\app_main.macro  MIDI_A2DP_SUPPORT = TRUE                             ### MIDI Support Bluetooth Stereo:
build\tmp\app_main.macro  AAC_A2DP_SUPPORT = TRUE                              ### AAC Support Bluetooth Stereo:

//另外 audio codec支持部分看贵司需求
build\tmp\app_main.macro  MP3_SUPPORT = TRUE                                   ### MP3 Decoder Support:
build\tmp\app_main.macro  AAC_SUPPORT = TRUE                                   ### AAC Decoder Support:
build\tmp\app_main.macro  AMR_SUPPORT = TRUE                                   ### AMR Decoder Support:




// BT
prj:{cfg}.cfg  BT_NONSIG_SUPPORT = TRUE   
prj:{cfg}.cfg  BT_BQB_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_OPP_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_FTS_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_HFG_SUPPORT = TRUE      
prj:{cfg}.cfg  BT_A2DP_SUPPORT = TRUE     
prj:{cfg}.cfg  MP3_A2DP_SUPPORT = TRUE    
prj:{cfg}.cfg  WAV_A2DP_SUPPORT = TRUE    
prj:{cfg}.cfg  AMR_A2DP_SUPPORT = TRUE    
prj:{cfg}.cfg  MIDI_A2DP_SUPPORT = TRUE   
prj:{cfg}.cfg  AAC_A2DP_SUPPORT = TRUE    

// MP3
prj:{cfg}.cfg MP3_SUPPORT = TRUE
prj:{cfg}.cfg AAC_SUPPORT = TRUE
prj:{cfg}.cfg AMR_SUPPORT = TRUE
WAV_SUPPORT = TRUE

// H264
prj:{cfg}.cfg H264_DEC_SUPPORT = TRUE

// CALENDAR 一共45K
prj:{cfg}.cfg SMS_CHAT_SUPPORT = TRUE
prj:{cfg}.cfg CALENDAR_SUPPORT = TRUE
// FDN 不点空间
prj:{cfg}.cfg PIC_ZOOM_SUPPORT = TRUE
prj:{cfg}.cfg FDN_SUPPORT = TRUE

// SMS
prj:project_{cur}.mk   MMI_APP_REMOVE_SMS_NUM = TRUE


// SALES_SUPPORT
sales.c,7K
// MMI_VCARD_SUPPORT, 联系人
mmivcard.c,5K




[2.14] build time
// build time
Save:node\ToolsMsg\Macro_win10.h  __Buildtime__


[2.15] marco
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


[2.16] Lib

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


[2.17] FLASH
### 8910

prj:project_{cur}.mk  FLASH_SIZE
//(小版本)
//   FLASH_SIZE = 128MBIT
//(大版本)
//   FLASH_SIZE = 128MBITX64MBIT_NEW

//
prj:project_{cur}.mk  WATCH_FS_FLASH_STYLE_


###
// 8910F
config:\
config:spiflash_cfg.c  FLASH_SIZE_128MBITX64MBIT_NEW
// 8910s
config:spiflash_cfg.c  FLASH_SIZE_128MBIT$


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


### 107



[2.18] build map
//
tmpPath = build\tmp
tmp:\\

// 总image
tmp:UIX8910.map  Region^LOAD_KERNEL_IMAGE

// range 1(rom) (12M 代码/存储)
tmp:UIX8910.map  Region^ROM_KERNAL_EXEC

// range 2(ram) (1.45M 代码/断电丢失)
tmp:UIX8910.map  Region^RAM_RW

// range 3(SRAM) (calc size)
tmp:UIX8910.map  Region^SRAM_RES

// Total
tmp:UIX8910.map  Total^RO

// 修改 KERNEL size
//  (同步改，否则fota差分失败)
MS_Customize/UIX8910_normal.scf  42
MS_Customize/UIX8910_normal.scf  277


//
build\{cur}_builddir\tmp\link_UIX8910_uis8910ff_refphone_vm.scf  LOAD_KERNEL_IMAGE
// 0x00870000
build\{cur}_builddir\tmp\link_UIX8910_uis8910ff_refphone_vm.scf  LOAD_FLASH_B_DFILE
// 0x60B60000


[2.19] 

build\tmp



[2.20] 




