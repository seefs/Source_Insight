
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_doc_MTK.h \[1.1\] Message 切换
Save:node\C\study\Macro_doc_MTK.h \[1.2\] FUN 入口-------------
Save:node\C\study\Macro_doc_MTK.h \[1.3\] 
Save:node\C\study\Macro_doc_MTK.h \[1.4\] 移配置
Save:node\C\study\Macro_doc_MTK.h \[1.5\] 说明文档
Save:node\C\study\Macro_doc_MTK.h \[1.6\] Win数据
Save:node\C\study\Macro_doc_MTK.h \[1.7\] SALE统计
Save:node\C\study\Macro_doc_MTK.h \[1.8\] 
Save:node\C\study\Macro_doc_MTK.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_MTK.h \[1.10\] ImageNote
Save:node\C\study\Macro_doc_MTK.h \[1.11\] TextNote
Save:node\C\study\Macro_doc_MTK.h \[1.12\] 
Save:node\C\study\Macro_doc_MTK.h \[1.13\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Message 切换

//	Message 切换
Save:node\C\study\Macro_Spr_MsgId.h
//
// MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);



[1.2] FUN 入口
//	FUN 入口
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 




[1.4] 移配置
common\nv_parameters\S036_MB
MS_Customize\source\product\config\S036_MB
MS_Customize\SC6530_S036_MB_vm
version\SC6530_S036_MB_version.c




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



[1.7] SALE统计
MMIDEFAULT_StartAutoSendSMSTimer        # 默认
HandleSetSmsAutoSendWindow
Enter_SMS_APP_AutoSend_SIM1
MMIDEFAULT_HandleAutoSendSMSTimer        # 处理发送




[1.8] 




[1.9] test code
// Phone
"#*8378#0#", "*#15963#", "####1111#",
// UI
"####1111#", "*#87#", "*#666#",
// Item
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
"#*8378#2#", "####0000#", 
// Version--3
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
"*#999#", "*#523#",
// IMEI
"*#333#", "*#0066#", "*#3184#"; "*#06#",
// Reset
"*#119*#", "*#70#",
// ELECTRIC
"*#2010#"; "*#0808#"; "*#0809#", 

// test code
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
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
Tool:common\MMI_RES_DEFAULT\IMAG\Pubwin\PDA

Tool:clock\MMI_RES_DEFAULT\IMAG\Alarm\IMAGE_CLOCK_ALARM_ALERT.png
Tool:clock\MMI_RES_DEFAULT\IMAG\Alarm



//查看图标是否存在
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_PUBWIN_QUERY




[1.11] TextNote

//
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt TXT_EXTRA_SETTINGS
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt TXT_SETTINGS_COMMAND
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt _EMPTY
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt Delete
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt Search
//字符整理:
// 公式:
// =IF(ISNUMBER(MATCH(C1,A$1:A$14254,)),INDEX(B$1:B$14254,MATCH(C1,A$1:A$14254,)),"")
Save:node\C\study\Show_Str_eng.h ,^Select^all,
Save:node\C\study\Show_Str_eng.h ,^Settings,
Save:node\C\study\Show_Str_eng.h ,^Once, //TXT_ALARM_MODE_ONCE
Save:node\C\study\Show_Str_eng.h ,^Daily,//TXT_ALARM_MODE_EVERYDAY
Save:node\C\study\Show_Str_eng.h ,^Weekly, //TXT_CALENDAR_WEEKLY
	
Save:node\C\study\Show_Str_eng.h ,^Close^spea
Save:node\C\study\Show_Str_eng.h ,^PAUSE,
//softkey:
STXT_CANCEL, STXT_STOP, STXT_RETURN, STXT_SAVE, STXT_OPTION, STXT_SELECT, TXT_DELETE, TXT_EDIT
STXT_OK, TXT_COMMON_CLEAR, 




[1.12] 
	





[1.13] 




[1.14] 




[1.15] 




