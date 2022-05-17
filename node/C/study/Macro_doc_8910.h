
//目录
Save:node\C\study\Macro_doc_8910.h \[1.1\] Message 切换
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
Save:node\C\study\Macro_doc_8910.h \[1.15\] 
Save:node\C\study\Macro_doc_8910.h \[1.16\] 
Save:node\C\study\Macro_doc_8910.h \[1.17\] 
Save:node\C\study\Macro_doc_8910.h \[1.18\] 




[1.1] Message 切换

//	Message 切换
Save:node\C\study\Macro_Spr_MsgId.h
//
// MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);



[1.2] FUN 入口
//	FUN 入口
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 




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



[1.15] 




[1.16] 




[1.17] 




[1.18] 



