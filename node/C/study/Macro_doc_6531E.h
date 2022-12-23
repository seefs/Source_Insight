
//目录
Save:node\C\study\Macro_doc_6531E.h \[1.1\] Message, keyStatus
Save:node\C\study\Macro_doc_6531E.h \[1.2\] FUN 入口-------------
Save:node\C\study\Macro_doc_6531E.h \[1.3\] //lang
Save:node\C\study\Macro_doc_6531E.h \[1.4\] 配置
Save:node\C\study\Macro_doc_6531E.h \[1.5\] 说明文档
Save:node\C\study\Macro_doc_6531E.h \[1.6\] Win数据
Save:node\C\study\Macro_doc_6531E.h \[1.7\] tool
Save:node\C\study\Macro_doc_6531E.h \[1.8\] //File-----------------
Save:node\C\study\Macro_doc_6531E.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_6531E.h \[1.10\] ImageNote
Save:node\C\study\Macro_doc_6531E.h \[1.11\] arm log
Save:node\C\study\Macro_doc_6531E.h \[1.12\] //FontTool
Save:node\C\study\Macro_doc_6531E.h \[1.13\] build time----------
Save:node\C\study\Macro_doc_6531E.h \[1.14\] 
Save:node\C\study\Macro_doc_6531E.h \[1.15\] ATEST_SUPPORT
Save:node\C\study\Macro_doc_6531E.h \[1.16\] fota----------adups
Save:node\C\study\Macro_doc_6531E.h \[1.17\] fota----------rs
Save:node\C\study\Macro_doc_6531E.h \[1.18\] 




[1.1] Message, keyStatus

//	Message 切换
Save:node\C\study\Macro_Spr_MsgId.h
//
// MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);


### __keyKbd__
// --虚拟值转实际值
Save:node\C\study\Macro_im_8910.h   __keySignal__
//		==>MMK_DispatchMSGKbd
//		====>MMIDEFAULT_ConvertKeyCode
//		======>signal_keycode:w/66/0x42/SCI_VK_W
//		======>key_code:      w/41/0x29/KEY_W
//		====>KPD_DOWN:
//		====>HandleMSGKbd
//		======>MMK_DefaultMSGKbd                    # 背光/按键音/音量键/handset
//		========>other:
//		==========>green:
//		==========>MMIAPICC_SendMsgToApplet(KEY_PRESSED + keycode, PNULL);
//		==========>end:
//		==========>MMIAPICC_ReleaseCallByRedkey();
//		========>DefaultIsRespond
//		======>GetMultiKeyTPParam
//		========>cur_key_num:      0
//		======>MMK_DispMsgToWin                     # 窗口处理
//		========>MMK_DispMsgToFocusWin
//		==========>MMK_DispatchToHandle             # --WINDOW
//		============>WINDOW:
//		============>MMK_DefaultProcessWinMsg
//		==============>MMK_RunWinHookProc
//		================>.MMK_RunCtrlProc

//		============>MMK_RunWinProc                 # --win_handle
//		==============>.ProcessMsg
//		==============>CC_HandleCcWinMsg            # --key--kbd--call
//		============>MMK_ProcSpecialWinMsg          # --win_handle
//		======>MMK_DefaultMSGKbdLater               # 系统默认处理
//		========>侧键/earphone/earphone/CAM/ScreenPhoto
//		======>MMK_HandlePublicKey                  # 
//		================>
//		==================>
//		====================>
//		======================>
//		========================>
//		==========================>

### __keySig__
// --
//		==>DispatchSysSig
//		====>MMICC_HandlePsMsg
//		======>APP_MN_CALL_DISCONNECTED_IND
//		========>MmiDestroySignal
//		============>MmiSendSignal
//		==============>
//		================>
//		==================>
//		====================>
//		======================>
//		========================>
//		==========================>
//		============================>
//		==============================>
//		================================>



### --key--dial--down
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # KPDSVR
//		======>MMK_DispatchMSGKbd                   # KPD_DOWN/KPD_UP
//		========>HandleMSGKbd
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_RunWinProc             # win_handle
app:idle\c\mmiidle_dial.c  MMI_RESULT_E^HandleDialWinMsg


### --key--dial--red
//		========>HandleMSGKbd
//		============>BaseFlexCtrlHandleMsg
//		===============>RED:
//		================>.is_handle_red_key
//		========>GUIEDIT_SetHandleRedKey(FALSE, _CTRL_ID);  # 禁用


### --key--dial--long--log
//	64023 MSG_KEYDOWN_CANCEL
//	57397 MSG_NOTIFY_EDITBOX_IMSYNC_CURSOR //1~3
//	e030  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM //1~3
//	fd17  MSG_KEYPRESSUP_CANCEL

### --key--dial--longCancel
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # KPDSVR
//		======>MMK_DispatchMSGKbd                   # 
//		========>HandleMSGKbd                       # status:65024, code:23
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_DefaultProcessWinMsg   # ctrl_handle
//		==================>MMK_RunCtrlProc
//		====================>PhoneNumEditCtrlHandleMsg  # IGUICTRL_HandleEvent
//		======================>BaseFlexCtrlHandleMsg  # MSG_KEYREPEAT_CANCEL
//		========================>HandleTextCancelKey
//		==========================>BASEFLEX_DelString
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # P_APP
//		======>MMK_DispatchMSGTimer                 # APP_TIMER_EXPIRY
//		========>MMK_HandleKeyLongPressTimer        # KBD_TIMER
//		==========>SaveKeyLongDownStatus
//		============>is_long_press = TRUE
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # 
//		================>MMK_DefaultProcessWinMsg   # ctrl_handle
//		==================>MMK_RunCtrlProc
//		====================>PhoneNumEditCtrlHandleMsg  # IGUICTRL_HandleEvent
//		======================>BaseFlexCtrlHandleMsg  # MSG_KEYLONG_CANCEL
//		========================>HandleTextCancelLong
//		========>MMK_HandleKeyRepeatPressTimer      # KEY_REPEATED
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_RunWinProc             # win_handle
ctrl:editbox\c\ctrlbaseflex.c  MMI_RESULT_E^BaseFlexCtrlHandleMsg
//		==========================>AppHandle            # CURSOR


### __keyStatus__
### --key--timer
//		========>TimerCallBack
//		==========>MmiCreateSignal
//		============>
//		==============>
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # 
//		======>MMK_DispatchMSGKbd                   # 这里转换一些特殊值
//		========>MMIDEFAULT_ConvertKeyCode
//		==========>[SHIFT]: 
//		============>96 = 0x60 => {SCI_VK_SHIFT, 0x47} => 0x47 = 71 => KEY_SHIFT
//		========>SaveKeyDownStatus                  # KPD_DOWN, 多按键不知道支不支持
//		==========>MMK_StartWinTimer                # 1.5s (long) 0.3s (repeat)
//		============>StartAppTimer
//		========>HandleMSGKbd
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # P_APP
//		======>MMK_DispatchMSGTimer                 # APP_TIMER_EXPIRY
//		========>MMK_HandleKeyLongPressTimer        # KBD_TIMER
//		==========>SaveKeyLongDownStatus
//		============>is_long_press = TRUE           # ==>longUp msg
//		==========>HandleMSGKbd
//		========>MMK_HandleKeyRepeatPressTimer      # KEY_REPEATED
//		==========>SaveKeyRepeatStatus
//		==========>MMK_StartWinTimer
//		==========>HandleMSGKbd
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # 
//		======>MMK_DispatchMSGKbd                   # 
//		========>SaveKeyUpStatus                    # KPD_UP
//		==========>MMK_StopTimer
//		========>HandleMSGKbd


### --key--idle--long--ok
//		======>case MSG_APP_OK      //0
//		======>case MSG_CTL_OK      //0
//		======>case MSG_APP_OK      //1
//		======>case MSG_KEYUP_OK    //1
//		======>case MSG_KEYLONG_OK  //1
//		======>case MSG_TIMER       //+ 看着没用
app:idle\c\mainapp.c  IdleWin_HandleMsg
//		======>case MSG_APP_OK      //0
//		======>case MSG_CTL_OK      //0
//		======>case MSG_KEYUP_OK    //1
app:idle\c\mmiidle_cstyle.c   MMIIDLE_CommonHandleMsg
//		======>case MSG_KEYUP_OK    //1
app:keylock\c\mmikl_keylock.c  MMIKL_HandleKLDispWinMsg
//		======>case MSG_KEYUP_OK    //1 没用
source:mmi_app\common\c\mmi_pubwin.c  MMIPUBHandleWinMsg

### --key--idle--long--cancel
//		======>case MSG_APP_CANCEL
//		======>case MSG_CTL_CANCEL
//		======>case MSG_KEYUP_CANCEL
//		======>case MSG_KEYLONG_CANCEL
app:idle\c\mainapp.c  IdleWin_HandleMsg


### __keySlide__
//		==>HandleMSGKbd
//		====>MMK_DefaultMSGKbd        # 背光/按键音/音量键/handset
//		====>MMK_DispMsgToWin         # 窗口
//		====>MMK_DefaultMSGKbdLater   # 后处理
//		====>MMK_HandlePublicKey      # 公共处理
//		====>MMIBT_HandleBTKey        # BT
### --点亮屏/vol
//		==>MMK_DefaultMSGKbd
//		====>DefaultBackLight   # 背光处理
//		======>KEY_PRESSED:
//		========>.is_halt       # 拦截
//		========>.halt_back     # 预处理
//		========>MMIDEFAULT_TurnOnBackLight
//		==========>MMIDEFAULT_TurnOnLCDBackLight
//		====>DefaultIsRespond   # 是否响应
//		======>.s_is_down_keystatus_backlight_on
//		==>MMK_DefaultMSGKbdLater
//		====>DefaultSideKey     # 侧键处理/vol
//		========>.!is_key_lock  # 翻盖不锁屏
//		========>MMIDEFAULT_TurnOnBackLight
//		========>.is_halt       # 音量调节
### --半亮
//		==>APP_Task
//		====>MMK_DispatchExtSig
//		======>MMK_DispatchMSGTimer
//		========>MMIDEFAULT_HandleBackLightOver
### --灭屏
//		==>CloseAllLight
//		========>MMIDEFAULT_TurnOffBackLight
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOnBackLight
### --fm
//		==>HandleMSGKbd
//		====>MMK_HandlePublicKey
//		======>GPIO_SIG1:
//		========>MMIAPI_FM_ONOFF
### --flip
//		==>MMK_DefaultMSGKbd
//		====>DefaultFlip          # 
//		======>
//		==>MMK_HandlePublicKey
//		====>MSG_KEYDOWN_FLIP:    # 合盖
//		======>HandleFlipDown     # 返回idle
//		====>MSG_KEYDOWN_FLIP:    # 合盖
//		======>recode = FALSE     # 返回FALSE 走bg mp3
//		========>MMIDEFAULT_HandleFlipKey
//		======>do()               # 不会走 MSG_APP_CANCEL
//		======>MMK_PostMsg(MSG_APP_CANCEL)
//		========>play mp3         #
//		==>MSG_KEYUP_FLIP:        # 返回FALSE 解决响铃时开盖不亮屏 (不记得什么原因)
app:accessory\c\mmicountedtime_main.c  MMIAPICT_HandleCountedTimeArriveWin



[1.2] FUN 入口
//	FUN 入口
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 
//
Save:node\C\study\Macro_res_8910.h __lang__



[1.4] 配置
### 6531D移配置
common\nv_parameters\S036_MB
MS_Customize\source\product\config\S036_MB
MS_Customize\SC6530_S036_MB_vm
version\SC6530_S036_MB_version.c


//
CUSTOMER = SE828_2IN1_ZYM
PRODUCT_CONFIG = SE828_MB
PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB
//
make\version\version.mk  PRODUCT_CONFIG


### 8910单软多硬 (row = newV /oldV)
// prdt
prj:nvitem/ProductionParam_uix8910.nvm  1393 = 0x5 /0x0
prj:nvitem/ProductionParam_uix8910.nvm  1403 = 0x7 /0x0
// rf
prj:nvitem/RF_nv.nvm  42069 = 0xD013B / 0xD0199
prj:nvitem/RF_nv.nvm  42130 = 0xD013B / 0xD0199
// rename
prj:nvitem/audio_sc6531efm.nvm
prj:nvitem/audio_sc6531efm_AEC.nvm
prj:nvitem/
// ver
Custom_Copy.bat  project\config_nv
prj:nvitem/hw_ver00.nv
prj:nvitem/hw_ver01.nv
// mk
prj:uis8910_phone_base_config.cfg  FORCECHANGE_SUPPORT  = TRUE
prj:uis8910_phone_user_base_config.cfg  FORCECHANGE_SUPPORT  = TRUE




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

// Version--Out -- bg
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1
"#*8378#2#", "####0000#", 
// Version--3
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2
"*#888#",

// Chip
"#*8378#5#",
// NV
"#*786646468#",
// Monkey
"#*8378#8#",
// TFload
"#*8378#9#",
// ALLSVN -- bg
"#*786837#",

// HW
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_HW_VERSION
"*#999#", "*#523#",

// IMEI
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SET_SIM_IMEI_ALL
"*#333#", "*#0066#", "*#3184#"; "*#06#",

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

### 
//--v--time,data,vol
//MMIENG_IDLE_DIAL_NUM_PHONE_INFO
//--v--mk--sw--hide
//MMIENG_IDLE_DIAL_NUM_SW_VERSION
//--v--8910--outV, HW closed
//MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1,
//--v--8910--outV, HW closed
//MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2,
//--l--no use
//MMIENG_IDLE_DIAL_NUM_MONKEY_TEST_AUTOSET,
//--t--nv error
//MMIENG_IDLE_DIAL_NUM_NV_COUNTING,
//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUDIO_DEMO,
//MMIENG_IDLE_DIAL_NUM_VIDEO_DEMO,
//MMIENG_IDLE_DIAL_NUM_MEDIA_DEMO,
//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUTO_LOG,
//MMIENG_IDLE_DIAL_NUM_LOG_OFF,
//--wa01u, mk,
//MMIENG_IDLE_DIAL_NUM_SHOW_VERSION3, //显示更多版本信息



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
	





[1.13] build time

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


### fota
// ==>密码
patch:ssh\Macro_user_psw.h  __abup__


[1.17] fota----------rs
// mk--8910
prj:{cfg}.cfg  FOTA_SUPPORT = REDSTONE
// mk--8910--大内存
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_FLASH_B = TRUE
// mk--107
prj:project_{cur}.mk  FOTA_SUPPORT = REDSTONE
prj:project_{cur}.mk  FOTA_SUPPORT_REDSTONE_NAME_T6B = TRUE
// mk
prj:project_{cur}.mk  FOTA_SUPPORT = NONE


### fota
// ==>密码
patch:ssh\Macro_user_psw.h  __redstone__


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


### fota--lcd
//
MS_Customize/source/product/config/uis8910ff_refphone/lcm_cfg_info.c  LCD_DRV_ID_NV3030B
fdl_bootloader/fota_bootloader/src/tf_lcd/src/tf_lcmcfg.c  LCD_DRV_ID_NV3030B
Third-party/rsfota/rsdl/porting/UIS8910/src/rs_param.c  INSTALL_TIME_START_CLOCK
fdl_bootloader/nor_bootloader/src/fdl_main.c  flash_size
make/fota_bootloader/fota_bootloader.mk  tft_NV3030B
make/perl_script/UIX8910_128MBIT.xml  FOTA_BOOTLOADER
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  FOTA_BOOTLOADER


###
// 下载时显示进度
prj:project_{cur}.mk  BM_FOTA_SHOW_PROGRESS = FALSE

// 
prj:project_{cur}.mk  SPDE_FOTA_TIP = TRUE
// 移除进度条
prj:project_{cur}.mk  SPDE_FOTA_REMOVE_PROGRESS = TRUE
// 下载中用图片
prj:project_{cur}.mk  SPDE_FOTA_TIP_USE_GRAY_IMG = TRUE


### 分区
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




[1.18] 



