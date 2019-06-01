/***********************************************************************/
/******************************** SPR modis ****************************/
/***********************************************************************/
// 索引, 标号优先:
[Num]
// 目录:[Ca]
//   1. 功能点
Save:SI\node\note\Macro_modis_6531E.h  \[1.1\] Display
Save:SI\node\note\Macro_modis_6531E.h  \[1.2\] Softkey
Save:SI\node\note\Macro_modis_6531E.h  \[1.3\] GetString()
Save:SI\node\note\Macro_modis_6531E.h  \[1.4\] STATUSBAR
Save:SI\node\note\Macro_modis_6531E.h  \[1.5\] Theme
Save:SI\node\note\Macro_modis_6531E.h  \[1.6\] pubWin  Alert
//	 2. 界面
Save:SI\node\note\Macro_modis_6531E.h  \[2.1\] 界面入口：
Save:SI\node\note\Macro_modis_6531E.h  \[2.2\] IDLE LOCK
Save:SI\node\note\Macro_modis_6531E.h  \[2.3\] MENU
Save:SI\node\note\Macro_modis_6531E.h  \[2.5\] 拨号：
Save:SI\node\note\Macro_modis_6531E.h  \[2.6\] FILE
Save:SI\node\note\Macro_modis_6531E.h  \[2.7\] 设置
Save:SI\node\note\Macro_modis_6531E.h  \[2.8\] 拍照
Save:SI\node\note\Macro_modis_6531E.h  \[2.8\] call

//	 3. SPR常用断点
Save:SI\node\note\Macro_modis_6531E.h  \[3.1\] 事件:
Save:SI\node\note\Macro_modis_6531E.h   \[3.2\] 
Save:SI\node\note\Macro_modis_6531E.h   \[3.3\] 
Save:SI\node\note\Macro_modis_6531E.h   \[3.4\] 
//	 4. 模块
Save:SI\node\note\Macro_modis_6531E.h  \[4.1\] 标题
Save:SI\node\note\Macro_modis_6531E.h  \[4.2\] 列表项
Save:SI\node\note\Macro_modis_6531E.h  \[4.3\] 软键
Save:SI\node\note\Macro_modis_6531E.h  \[4.4\] Win数据
Save:SI\node\note\Macro_modis_6531E.h  \[4.7\] SALE统计
	

//	 5. SPR流程
Save:SI\node\note\Macro_modis_6531E.h  \[5.1\] 移配置:
Save:SI\node\note\Macro_modis_6531E.h  \[5.2\] 说明文档
Save:SI\node\note\Macro_modis_6531E.h  \[5.3\] 常用入口
Save:SI\node\note\Macro_modis_6531E.h  \[5.5\] Message 切换

//	 6. 编译 Error
Save:SI\node\note\Macro_modis_6531E.h  \[6.1\] Error: 超空间:
//	 7. 模拟器 Error
Save:SI\node\note\Macro_modis_6531E.h  \[7.1\] 重新安装VC
	

/***********************************************************************/
/******************************** SPR modis ****************************/
/***********************************************************************/
// 功能点:[Cs]


[1.1] Display
GUISTR_DrawTextToLCDInRect


DisplayHighlightAndStr
		str_style.font_color	   = 0x3333;

HandleSetTimeWindow

		GUIEDIT_SetFontColor(MMISET_SET_TIME_TIMEEDITBOX_CTRL_ID, MMI_GREEN_COLOR);

		MMK_SetAtvCtrl(win_id,MMISET_SET_TIME_TIMEEDITBOX_CTRL_ID);
HandleSetDateWindow

		GUIEDIT_SetFontColor(MMISET_SET_DATE_DATEEDITBOX_CTRL_ID, MMI_GREEN_COLOR);


显示省略：
DrawTextInRect
DrawTextInLine	  GUISTR_STATE_ELLIPSIS


[1.2] Softkey
GUISOFTKEY_Init
MMITHEME_GetInvalidTextID
GUISOFTKEY_SetTextId
GUISOFTKEY_SetButtonTextId 
//menu-->FILE
GUISOFTKEY_SetTextId--->DrawSoftkey
//menu-->msg
GUISOFTKEY_HandleMsg--->DrawSoftkey
//menu-->env
GUISOFTKEY_SetButtonTextId --->DrawSoftkey
GUISOFTKEY_SetButtonIconId --->DrawSoftkey
GUISOFTKEY_SetButtonTextId --->DrawSoftkey
GUISOFTKEY_HandleMsg--->DrawSoftkey
//menu-->pb
GUISOFTKEY_SetTextId--->DrawSoftkey
GUISOFTKEY_SetButtonIconId--->DrawSoftkey
GUISOFTKEY_HandleMsg--->DrawSoftkey
GUISOFTKEY_SetButtonTextId--->DrawSoftkey
GUISOFTKEY_SetButtonTextId--->DrawSoftkey
GUISOFTKEY_SetButtonTextId--->DrawSoftkey
GUISOFTKEY_HandleMsg--->DrawSoftkey
GUISOFTKEY_SetButtonTextId--->DrawSoftkey
GUISOFTKEY_SetButtonTextId--->DrawSoftkey
GUISOFTKEY_SetButtonTextId--->DrawSoftkey

MMITHEME_GetResText










	
[1.3] GetString()






[1.4] STATUSBAR

//动态创建状态条:
SBD_MMI_DIALWIN_HAS_STATUSBAR




[1.5] Theme
RECORD 选择框字体:
MMITHEME_GetPopMenuTheme

Edit FONT:
MMITHEME_GetEditTheme

MAINMENU TITLE:
DisplayActiveItemTitle	  str_style.font

fm font:
DrawFrqqencyText	GUILABEL_SetFont


stopwatch:
ST_DisplayCurTime	 rect.bottom

acc_position:
ST_TIMER1_HEIGHT_V


snake:
square:
Initlabel

title bg:
IMAGE_TITLE_BAR





[1.6] pubWin  Alert
//弹出窗:
DisplayTipsPtr

MMIPUB_OpenAlertWarningWin(TXT_INSERT_SIM);

//提示窗pub：
MMIPUBLayout
MMIPUBDisplayWin
DisplayPubWinText
DrawTextInRect
DrawTextInLine
SPMLAPI_DrawText


//测试Alert：
MMIAPICL_OpenCallsListWindow(MMICL_CALL_DIALED);
MMIPUB_OpenWaitWin
//	Layout
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c void^MMIPUBLayout
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4097
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4120
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4193 bg_rect
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4224 alert_rect
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4263 title_rect







MMIPUB_OpenAlertWinByTextId(
	 PNULL, 
	 TXT_COMMON_LOCK_SUCCESS, 
	 TXT_NULL,
	 IMAGE_PUBWIN_SUCCESS,
	 PNULL, 
	 PNULL,
	 MMIPUB_SOFTKEY_ONE,
	 PNULL);

HandleDefaultWinMsg(MMIPUB_WAIT_ANIM_CTRL_ID)

//wait pub
DisplayPubWinText



[1.7] 




[1.8] 







/***********************************************************************/

[2.1] 界面入口：
MMK_RunWinProc
MMIRES_GetText
GUIRES_DisplayImg
GUI_DisplayBg
GUISTR_DrawTextToLCDInRect

MMK_CreateWin


[2.2] IDLE LOCK
//IDLE
IdleWin_HandleMsg
MMIIDLE_CommonHandleMsg
DisplayIdleWinSoftkey

//LOCK
MMIKL_HandleKLDispWinMsg
SetKeyLockControlParam
//	锁屏
MMIKL_HandleEffeckKLWinMsg
MMIKL_DisplayMissedEvent
DisplayTipsPtr		  #显示字符

//状态条
UpdateStatusBar


[2.3] MENU
HandleMainMenuWinMsg
HandleSamsungMainMenuWinMsg
MenuHandleMsg	 # 显示图标
DisplayIconMenu


[2.4] 



[2.5] 拨号：
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c void^DisplayTextString
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_cursor.c void^FillCursorColor





[2.6] FILE
MMIFMM_HandleOpenFileWin


[2.7] 设置
//设置-语言
HandleSetLanguageWindow
		MMIAPISET_AppendInputLanguageListItem		 # 只加语言
HandleSetLanguageContentWindow		  //显示语言设置
HandleSetLanguageInputContentWindow 	 //输入语言
//设置-情景模式
PromptSuccessWin


[2.8] 拍照
拍照
HandleCameraWinMsg


[2.8] call
OpenCallingWin
InitPdaCallLogListCtrl        CallLog

//VIDEO
HHT_MMI_VIDEO_PLAYER_SCREEN_SWITCH_BY_KEY0
HandleShortCutMsg
HandleOptMenuWinMsg

//ver
ShowVersionInfo

//DC
GetPhonePhotoSizeList
	
	


//	提示
MMITHEME_GetTipsStrInfo



/***********************************************************************/






[3.1] 事件:
	
	
GUIFORM_SetChildDisplay(MMI_EDITWIN_FORM_CTRL_ID,MMIALM_EDIT_NAME_FORM_CTRL_ID,GUIFORM_CHILD_DISP_HIDE);


//ICON
mmiphone--HandlePsAndRefMsgmmiphone--HandleScellRssiInd    信号 - 状态条
//	Mmitheme
s_item_layout_id_table
s_item_layout_1line_icon_2text2

s_item_layout_1line_focus_icon_2text2 

s_item_layout_id_table 
s_item_style_table 
s_item_style_state_table 




[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 




	
/***********************************************************************/

[4.1] 标题
//	  标题
Mmi_resource.c (ms_mmi\source\mmi_app\kernel\c)
    GetText 11
    MMIRES_GetText  10
Mmi_theme.c (ms_mmi\source\mmi_app\app\theme\c)
    MMITHEME_GetResText   9
Guititle.c (ms_mmi\source\mmi_gui\source\title\c)
    GetTitleText    8
    DisplayTitleText 7
    DisplayTitle    6
    TitleHandleMsg 5
Cafcontrol.h (caf\template\include)
    IGUICTRL_HandleEvent    4
MMK_RunCtrlProc 4


//    表单标题
Mmi_resource.c (ms_mmi\source\mmi_app\kernel\c)
    GetText 11
    MMIRES_GetText  10
Mmi_modu_main.c (ms_mmi\source\mmi_app\kernel\c)
    MMI_GetLabelTextByLang   9
Mmi_theme.c (ms_mmi\source\mmi_app\app\theme\c)
        MMITHEME_GetLabelTextByLang   9
Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
        GUIMENU_GetTitleText    8
Mmimenu_second.c (ms_mmi\source\mmi_app\app\menu\c)
    SetSecondTitle    7
    DisplaySecondMenu    6
Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
    MenuHandleMsg    5



[4.2] 列表项
Mmi_resource.c (ms_mmi\source\mmi_app\kernel\c)
	GetText 11
	MMIRES_GetText	10
Mmi_modu_main.c (ms_mmi\source\mmi_app\kernel\c)
	MMI_GetLabelTextByLang	 9
Mmi_theme.c (ms_mmi\source\mmi_app\app\theme\c)
		MMITHEME_GetLabelTextByLang   9
Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
	GUIMENU_GetItem    8
Mmimenu_second.c (ms_mmi\source\mmi_app\app\menu\c)

DisplaySecMenuItemText	  7
DisplaySecMenuItem	   6
DisplayOneItem	   6
DisplaySecMenuAllItem	  6
		DisplaySecondMenu	 6
Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
	MenuHandleMsg	 5




[4.3] 软键
Mmi_resource.c (ms_mmi\source\mmi_app\kernel\c)
	GetText 11
	MMIRES_GetText	10
Mmi_theme.c (ms_mmi\source\mmi_app\app\theme\c)
	MMITHEME_GetResText   10
Guisoftkey.c (ms_mmi\source\mmi_gui\source\softkey\c)

DrawButtonText	   9
DrawButtonContent	  8
DrawAllButtons	   7
DrawSoftkey 	6
		GUISOFTKEY_SetTextId	 5
Guiwin.c (ms_mmi\source\mmi_gui\source\win\c)
	GUIWIN_SetSoftkeyTextId    8
Mmimenu_second.c (ms_mmi\source\mmi_app\app\menu\c)
	MMIMENU_SetSoftkey	  7
	DisplaySecondMenu	 6
Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
	MenuHandleMsg	 5




[4.4] Win数据
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




[4.5] 




[4.6] 
	

DisplayIconItem
AdjuestIconMenuRect
CreateIconMenuButton	#标题颜色
GetMenuItemByIndex

DrawControlPanel




[4.7] SALE统计
MMIDEFAULT_StartAutoSendSMSTimer        # 默认
HandleSetSmsAutoSendWindow
Enter_SMS_APP_AutoSend_SIM1
MMIDEFAULT_HandleAutoSendSMSTimer        # 处理发送


/***********************************************************************/

[5.1] 移配置:
common\nv_parameters\S036_MB
MS_Customize\source\product\config\S036_MB
MS_Customize\SC6530_S036_MB_vm
version\SC6530_S036_MB_version.c
	
	
[5.2] 说明文档
SC6530平台_application_notes.doc				  ###  宏说明			   
Universe手机使用说明.docx 					   ###	手机使用说明
Build_Environment_Manual.doc ###  编译环境



[5.3] 常用入口
其他常用入口：
	字符：	
MMI_GetLabelTextByLang
CalStartPoint
	消息：	
MMK_SendMsg

MMK_IsOpenWin

VideoPlayerResume
MMISRVAUD_TYPE_VIDEO




[5.4] 




[5.5] Message 切换
//	Message 切换
Save:SI\node\ToolsMsg\spr\Macro_Spr_MsgId.h
//	FUN 入口
Save:SI\node\ToolsMsg\spr\Macro_Spr_Fun.h
// 参考
Save:SI\node\ToolsMsg\spr\Macro_Spr_Other.h



[5.6] 




[5.7] 




/***********************************************************************/

[6.1] Error: 超空间:
	
[6.1] 
[6.2] 
[6.3] 
[6.4] 
[6.5] 
[6.6] 
	
/***********************************************************************/
	
[7.1] 重新安装VC
//1) 没有找到MSDevkernel.dll
//2) Error spawning cl.exe错误
//3) LONG_PTR
//error C2040: 'LONG_PTR' : 'long ' differs in levels of indirection from 'long *'

// 解决:
// 用其他电脑文件覆盖过来:
C:\Program Files (x86)\Microsoft Visual Studio


