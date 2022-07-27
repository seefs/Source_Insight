
//目录
Save:node\C\study\Macro_doc_8910.h \[1.1\] Message, keyStatus
Save:node\C\study\Macro_doc_8910.h \[1.2\] FUN 入口-------------
Save:node\C\study\Macro_doc_8910.h \[1.3\] //lang
Save:node\C\study\Macro_doc_8910.h \[1.4\] 配置
Save:node\C\study\Macro_doc_8910.h \[1.5\] 说明文档
Save:node\C\study\Macro_doc_8910.h \[1.6\] Win数据
Save:node\C\study\Macro_doc_8910.h \[1.7\] tool
Save:node\C\study\Macro_doc_8910.h \[1.8\] //File-----------------
Save:node\C\study\Macro_doc_8910.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_8910.h \[1.10\] ImageNote
Save:node\C\study\Macro_doc_8910.h \[1.11\] 
Save:node\C\study\Macro_doc_8910.h \[1.12\] //FontTool
Save:node\C\study\Macro_doc_8910.h \[1.13\] build time----------
Save:node\C\study\Macro_doc_8910.h \[1.14\] apn
Save:node\C\study\Macro_doc_8910.h \[1.15\] ATEST_SUPPORT
Save:node\C\study\Macro_doc_8910.h \[1.16\] 
Save:node\C\study\Macro_doc_8910.h \[1.17\] 
Save:node\C\study\Macro_doc_8910.h \[1.18\] 




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

// ELECTRIC
"*#2010#"; "*#0808#"; "*#0809#", 

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




[1.11] 





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



[1.14] apn
//
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey

//
tool_mini:\
tool_mini:6_res_str\
tool_mini:6_res_str\res_ntac.xlsx



[1.15] ATEST_SUPPORT
// ATEST 默认不开, 没有项目开
make\app_main\app_main.mk  ATEST_SUPPORT



[1.16] 




[1.17] 




[1.18] 



