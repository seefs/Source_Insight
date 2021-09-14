
//appPath = MS_MMI_Main/source/mmi_app/app
appPath = MS_MMI/source/mmi_app/app
app:\\
//ctrlPath = MS_MMI_Main\source\mmi_ctrl\source
ctrlPath = MS_MMI\source\mmi_ctrl\source
ctrl:\\
//guiPath = MS_MMI_Main\source\mmi_gui\source
guiPath = MS_MMI\source\mmi_gui\source
gui:\\


// 目录:
//   1. 功能点
Save:node\C\study\Macro_gui_8910.h  \[1.1\] display
Save:node\C\study\Macro_gui_8910.h  \[1.2\] softkey
Save:node\C\study\Macro_gui_8910.h  \[1.3\] draw ---------------画图
Save:node\C\study\Macro_gui_8910.h  \[1.4\] statusbar, change----
Save:node\C\study\Macro_gui_8910.h  \[1.5\] theme
Save:node\C\study\Macro_gui_8910.h  \[1.6\] pubWin  Alert
Save:node\C\study\Macro_gui_8910.h  \[1.7\] form
Save:node\C\study\Macro_gui_8910.h  \[1.8\] rect
Save:node\C\study\Macro_gui_8910.h  \[1.9\] timer
Save:node\C\study\Macro_gui_8910.h  \[1.10\] option
Save:node\C\study\Macro_gui_8910.h  \[1.11\] onoff
Save:node\C\study\Macro_gui_8910.h  \[1.12\] title
Save:node\C\study\Macro_gui_8910.h  \[1.13\] anim --------------所有Construct
Save:node\C\study\Macro_gui_8910.h  \[1.14\] tmp ---------------
Save:node\C\study\Macro_gui_8910.h  \[1.15\] layer
Save:node\C\study\Macro_gui_8910.h  \[1.16\] simulator----------
Save:node\C\study\Macro_gui_8910.h  \[1.17\] key
Save:node\C\study\Macro_gui_8910.h  \[1.18\] Lcd
Save:node\C\study\Macro_gui_8910.h  \[1.19\] sublcd
Save:node\C\study\Macro_gui_8910.h  \[1.20\] font
Save:node\C\study\Macro_gui_8910.h  \[1.21\] list
Save:node\C\study\Macro_gui_8910.h  \[1.22\] height-------------滚动条
Save:node\C\study\Macro_gui_8910.h  \[1.23\] edit, im, pen
Save:node\C\study\Macro_gui_8910.h  \[1.24\] color--------------属性
Save:node\C\study\Macro_gui_8910.h  \[1.25\] label--------------
Save:node\C\study\Macro_gui_8910.h  \[1.26\] text---------------
Save:node\C\study\Macro_gui_8910.h  \[1.27\] prgbox-------------进度条
Save:node\C\study\Macro_gui_8910.h  \[1.28\] menu
Save:node\C\study\Macro_gui_8910.h  \[1.29\] owndraw------------
Save:node\C\study\Macro_gui_8910.h  \[1.30\]



[1.1] Display
//GUISTR_DrawTextToLCDInRect
//
//
//DisplayHighlightAndStr
//		str_style.font_color	   = 0x3333;
//
//HandleSetTimeWindow
//
//		GUIEDIT_SetFontColor(MMISET_SET_TIME_TIMEEDITBOX_CTRL_ID, MMI_GREEN_COLOR);
//
//		MMK_SetAtvCtrl(win_id,MMISET_SET_TIME_TIMEEDITBOX_CTRL_ID);
//HandleSetDateWindow
//
//		GUIEDIT_SetFontColor(MMISET_SET_DATE_DATEEDITBOX_CTRL_ID, MMI_GREEN_COLOR);
//
//
//显示省略：
//DrawTextInRect
//DrawTextInLine	  GUISTR_STATE_ELLIPSIS




[1.2] Softkey

// 中间softkey
MS_MMI_Main/source/mmi_gui/source/win/c/guiwin.c  GUIWIN_SeSoftkeytButtonIconId
//	#if defined (MAINLCD_SIZE_128X128) //中间softkey显示黑色
//	if(button_num == 1) {
//	}
//	else
//	#endif

// 中间softkey
MS_MMI_Main/source/mmi_gui/source/win/c/guiwin.c  GUIWIN_SeSoftkeytButtonTextId
//	#if defined (MAINLCD_SIZE_128X128)
//	if(MIDDLE_BUTTON == button_num) { //中间softkey显示黑色
//	}
//	else
//	#endif

// 中间softkey--btn
ctrl:Softkey/c/ctrlsoftkey.c  void^DrawAllButtons
//	#if !defined (MAINLCD_SIZE_128X128)  //not show softkey mid
//    DrawButtonContent(softkey_ptr, MIDDLE_BUTTON);
//	#endif

// softkey--rect
ctrl:Softkey/c/ctrlsoftkey.c  void^CalSoftkeyRect


//
MS_MMI_Main/source/mmi_app/app/theme/h/mmi_position.h  MMI_FULLSCREEN_SOFTKEY_BAR_HEIGHT


//
ctrl:Softkey/c/ctrlsoftkey.c  void^GUISOFTKEY_Init
// type
MS_MMI_Main\source\mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetTextId
MS_MMI_Main\source\mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetButtonTextId
MS_MMI_Main\source\mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetButtonIconId


//
ctrl:Softkey/c/ctrlsoftkey.c  void^DrawSoftkey
// bg
MS_MMI_Main\source\mmi_app\app\theme\c\mmitheme_softkey.c  MMITHEME_GetSoftkeyStyle


//常见修改
ms_mmi_main\source\mmi_app\common\c\mmi_setlist_win.c TXT_COMMON_OK
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c TXT_COMMON_OK


// 软键
MS_MMI_Main\source\mmi_app\app\theme\c\mmi_theme.c  MMITHEME_GetInvalidTextID
ms_mmi_main\source\mmi_app\kernel\c\Mmi_resource.c  GetText 11
ms_mmi_main\source\mmi_app\kernel\c\Mmi_resource.c  MMIRES_GetText	10
//
ms_mmi_main\source\mmi_app\app\theme\c\Mmi_theme.c  MMITHEME_GetResText  10
//
ms_mmi_main\source\mmi_gui\source\softkey\c\Guisoftkey.c 
//
ctrl:Softkey/c/ctrlsoftkey.c  void^DrawButtonText	   9
ctrl:Softkey/c/ctrlsoftkey.c  void^DrawButtonContent	  8
ctrl:Softkey/c/ctrlsoftkey.c  void^DrawAllButtons	   7
ctrl:Softkey/c/ctrlsoftkey.c  void^DrawSoftkey 	6
//		
ms_mmi_main\source\mmi_gui\source\win\c\Guiwin.c  GUIWIN_SetSoftkeyTextId    8
//	
ms_mmi_main\source\mmi_app\app\menu\c\Mmimenu_second.c DisplaySecondMenu	 6
ms_mmi_main\source\mmi_app\app\menu\c\Mmimenu_second.c MMIMENU_SetSoftkey	  7
//	
ms_mmi_main\source\mmi_gui\source\menu\c\Guimenu.c 	MenuHandleMsg	 5

// set Font
GUISOFTKEY_Init
MMITHEME_GetSoftKeyTextFont

// param
//	ctrl_id = ((MMI_NOTIFY_T*) param)->src_id;
//	MMICOMMON_BUTTON_SOFTKEY_LEFT_CTRL_ID
//	MMICOMMON_BUTTON_SOFTKEY_RIGHT_CTRL_ID


	
[1.3] draw
// 点：
//	LCD_FillCircle
// 线：
//	LCD_DrawLine / LCD_DrawThickLine
// 矩形：
//	LCD_FillRect / LCD_DrawRect
// 圆：
//	LCD_FillCircle / LCD_DrawCircle





[1.4] statusbar, change
// statusbar init
MS_MMI_Main/source/mmi_app/app/idle/c/mainapp.c  MMIAPICOM_StatusAreaInit

//动态创建状态条:
SBD_MMI_DIALWIN_HAS_STATUSBAR
// Draw
DrawStatusBarAllItem


// init--pos
MS_MMI_Main\source\mmi_app\common\c\mmicom_statusarea.c  void^SetStatusAreaInfo


// sim--刷新
MS_MMI_Main\source\mmi_app\common\c\mmicom_statusarea.c  void^StatusAreaSetSimInfo
MS_MMI_Main\source\mmi_app\common\h\mmicom_statusarea.h  MMICOM_WIN_ICON_E
MS_MMI_Main\source\mmi_app\app\idle\h\mmiidle_statusbar.h  MMI_WIN_ICON_E

// idle
// 电量--刷新
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleChargeState
// 电量--Level
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleBatLevel
// 电量--Level2
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleDbatLevel
//
//    MMIAPICOM_StatusAreaSetBatLevel(bat_level);


// set
// set--电量--刷新
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_phonewin.c  void^UpdateStatusBar


// 电量--service
MS_MMI_Main\source\mmi_app\kernel\c\mmimain.c  CHR_SERVICE
MS_MMI_Main\source\mmi_app\kernel\c\mmimain.c  void^ChargeCallBackFunc
// 电量--msg
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone.c  void^HandlePsAndRefMsg
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone_charge.c   MMI_RESULT_E^MMIPHONE_ChargeHandlePsAndRefMsg


// ps--open
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_phonewin.c   void^MMIAPISET_OpenPowerSettingMode
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone_charge.c   920
// ps--close
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_phonewin.c   void^MMIAPISET_SetPowerSavingSetting
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone_charge.c   887
//            power_sav_setting.is_active = FALSE;
//            MMIAPISET_SetPowerSavingSetting(power_sav_setting);
//            MMIAPIENVSET_ResetActModeOtherRingSet();


// Draw
ctrl:Statusbar\c\ctrlstatusbar.c  DrawStatusBarAllItem




[1.5] Theme
// 
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_list.c  4343


RECORD 选择框字体:
MMITHEME_GetPopMenuTheme


MAINMENU TITLE:
DisplayActiveItemTitle	  str_style.font

fm font:
DrawFrqqencyText	GUILABEL_SetFont


stopwatch:
ST_DisplayCurTime	 rect.bottom

acc_position:
ST_TIMER1_HEIGHT_V



// theme--list
THEMELIST_GetStyle
//
	

// cc---3方通话
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_no_initialtext_text_and_text_with_mask_ms 
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_no_bigicon_text_and_text_with_mask_ms
// cc---紧急拨号字体
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_2_text_text
// ff---video delete 
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_multi_choice_picker_two_line_bigicon_text_and_text
// sms----未读/已读-短信
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_2_2text_and_text_icon_ms
// cl---通话记录
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_2_text_icon_and_text_ms









[1.6] pubWin  Alert
//OpenAlertWin

// 去icon
MS_MMI_Main\source\mmi_app\common\c\mmi_pubwin.c  5882

// 去 softkey
MS_MMI_Main\source\mmi_app\common\c\mmi_pubwin.c  void^MMIPUBCreatSoftkeyCtrl
//    if(MMIPUB_SOFTKEY_NONE == win_info_ptr->softkey_style)
//    {
//        return;
//    }

// 居中bg
MS_MMI_Main\source\mmi_app\common\c\mmi_pubwin.c  bg_rect.bottom^=
//	#if !defined (MAINLCD_SIZE_128X128) //pubwin居中
//		bg_rect.bottom = bg_rect.bottom -(bg_rect.bottom - inter_bg_rect.bottom);
//	#endif


// 间距
MS_MMI_Main\source\mmi_app\app\theme\c\mmitheme_pubwin.c  MMIPUB_TITLE_V_MARGIN_TOP


//弹出窗:
//DisplayTipsPtr
//
//MMIPUB_OpenAlertWarningWin(TXT_INSERT_SIM);

//提示窗pub：
//	MMIPUBLayout
//	MMIPUBDisplayWin
//	DisplayPubWinText
//	DrawTextInRect
//	DrawTextInLine
//	SPMLAPI_DrawText


//测试Alert：
//	MMIAPICL_OpenCallsListWindow(MMICL_CALL_DIALED);
//	MMIPUB_OpenWaitWin
//	Layout
ms_mmi_main\source\mmi_app\common\c\mmi_pubwin.c void^MMIPUBLayout
ms_mmi_main\source\mmi_app\common\c\mmi_pubwin.c 4097
ms_mmi_main\source\mmi_app\common\c\mmi_pubwin.c 4120
ms_mmi_main\source\mmi_app\common\c\mmi_pubwin.c 4193 bg_rect
ms_mmi_main\source\mmi_app\common\c\mmi_pubwin.c 4224 alert_rect
ms_mmi_main\source\mmi_app\common\c\mmi_pubwin.c 4263 title_rect

//
//关闭询问窗口
//MMIPUB_CloseQuerytWin(PNULL);
//关闭密码错误提示
//MMIPUB_CloseAlertWin();


// 去掉softkey
//MMIPUB_SOFTKEY_CUSTOMER  MMIPUB_SOFTKEY_ONE



//	MMIPUB_OpenAlertWinByTextId(
//		 PNULL, 
//		 TXT_COMMON_LOCK_SUCCESS, 
//		 TXT_NULL,
//		 IMAGE_PUBWIN_SUCCESS,
//		 PNULL, 
//		 PNULL,
//		 MMIPUB_SOFTKEY_ONE,
//		 PNULL);

//HandleDefaultWinMsg(MMIPUB_WAIT_ANIM_CTRL_ID)

//wait pub
//DisplayPubWinText


//	提示
//MMITHEME_GetTipsStrInfo

// pop--格式化
MS_MMI_Main/source/mmi_app/app/fmm/c/mmifmm_sd.c  MMIPUB_OpenProgressWinByTextId  MMIPUB_SOFTKEY_ONE
// pop--连接管理--数据漫游
MS_MMI_Main/source/mmi_app/app/connection/c/mmiconn_manager_wintab.c


[1.7] form
//form pos
//	GUIFORM_GetDisplayMaxWidth
//form cal
//	CalculateChildWidthHeight
//	CalculateChildHeight 		++++
////form cal item
//	LabelCtrlGetHeightByWidth
//	EditCtrlGetHeightByWidth
//	GetSetListHeight
//	ButtonCtrlGetHeightByWidth


// form--Calculate
ctrl:Form\c\ctrlform_calc.c  CalculateChildHeight
ctrl:Form\c\ctrlform_calc.c  690
//	if(17 == child_ptr->height || 20 < child_ptr->height && 35> child_ptr->height) 
//	{
//		int a = child_ptr->height;
//		a += 0;
//		a += 0;
//	}


// form--edit--getH
ctrl:editbox\c\ctrlbaseedit.c  BaseEditCtrlGetHeightByWidth
ctrl:editbox\c\ctrlbaseedit.c  BASEEDIT_EXTRA_AREA

//update unit form and all child
//	GUIFROM_Display(FALSE,TRUE,form_ctrl_ptr);
//set child rect
//	GUIFORM_SetChildRect(TRUE,form_ctrl_ptr);


// 
//CTRLFORM_SetChildSpace



[1.8] Rect
//
//MMITHEME_GetFullScreenBothRect
////
//MMITHEME_GetStatusBarHeight



[1.9] 


[1.10] option

// sel--sim
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMI_RESULT_E^HandleCallSIMSelectWinMsg



[1.11] onoff
// 
MS_Customize/source/common/prod_param.c
MS_MMI_Main/source/mmi_app/app/envset/c/mmienvset.c
MS_MMI_Main/source/mmi_app/app/parse/c/mmiparse_dial.c
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone.c
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone_onoff.c    MMI_POWER_TIME_8S
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_display.c
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_nv.c
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_ring.c
MS_MMI_Main/source/mmi_app/app/setting/h/mmiset_export.h
MS_MMI_Main/source/mmi_app/app/setting/h/mmiset_nv.h
MS_MMI_Main/source/mmi_app/common/h/common_mdu_def.h
MS_MMI_Main/source/resource/mmi_res_prj_def.h
common/export/inc/nv_item_id.h
MS_MMI_Main/source/mmi_app/kernel/c/mmimain.c  SECOND_LOGO
MS_MMI_Main/source/mmi_app/kernel/c/mmimain.c  InitMMIModule



//
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone_onoff.c  MMISET_RING_TYPE_POWER
//
MS_MMI_Main/source/resource/mmi_res_prj_def.h R_POWER_1

// off
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone_onoff.c  MMI_RESULT_E^HandlePowerOffWindow
// on
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow




[1.12] title
// title bg:
//
app:theme/h/mmi_position.h  993
//	#define	MMI_TAB_HEIGHT				18//40
//	#define	MMI_TAB_HEIGHT_H			18//40
//
app:sms/c/mmisms_messageboxwin.c  MMISMS_MSGBOX_MAIN_WIN_TAB
app:sms\c\mmismsapp_wintab.c MMISMS_MSGBOX_MAIN_WIN_TAB
//     CREATE_TAB_CTRL(.., GUITAB_STATE_NONEED_SCROLL | GUITAB_STATE_SINGLE_LINE, ..),
//
app:cl\c\Mmicl_wintab.c   MMICL_LOG_LIST_WIN_TAB

// rect
//   font height
app:theme\c\mmitheme_pos.c  MMITHEME_GetWinTabBothRect
// draw
//   title height=5+24
gui:tab\c\guitab.c  DrawTabTitleText
//   GUITAB_STATE_SINGLE_LINE 单行不画标题
//   tab top=23
gui:tab\c\guitab.c  DrawAllTabItems
//   title height=27
gui:tab\c\guitab.c  CreateTabTitleCtrl
//   临时改2个窗口
app:theme\c\mmitheme_tab.c  MMITHEME_GetTabChildWinTop




//	//
//	IMAGE_CONTROL_TAB_DEFAULT
//	IMAGE_TAB_BG
//	// sms--box--tab
//

//
//	//	  标题
//	Mmi_resource.c (ms_mmi_main\source\mmi_app\kernel\c)
//	    GetText 11
//	    MMIRES_GetText  10
//	Mmi_theme.c (ms_mmi_main\source\mmi_app\app\theme\c)
//	    MMITHEME_GetResText   9
gui:title\c\Guititle.c  DisplayTitle( )
//	    GetTitleText    8
//	    DisplayTitleText 7
//	    DisplayTitle    6
//	    TitleHandleMsg 5
//	Cafcontrol.h (caf\template\include)
//	    IGUICTRL_HandleEvent    4
//	MMK_RunCtrlProc 4
//
//
//	//    表单标题
//	Mmi_resource.c (ms_mmi_main\source\mmi_app\kernel\c)
//	    GetText 11
//	    MMIRES_GetText  10
//	Mmi_modu_main.c (ms_mmi_main\source\mmi_app\kernel\c)
//	    MMI_GetLabelTextByLang   9
//	Mmi_theme.c (ms_mmi_main\source\mmi_app\app\theme\c)
//	        MMITHEME_GetLabelTextByLang   9
//	Guimenu.c (ms_mmi_main\source\mmi_gui\source\menu\c)
//	        GUIMENU_GetTitleText    8
//	Mmimenu_second.c (ms_mmi_main\source\mmi_app\app\menu\c)
//	    SetSecondTitle    7
//	    DisplaySecondMenu    6
//	Guimenu.c (ms_mmi_main\source\mmi_gui\source\menu\c)
//	    MenuHandleMsg    5
//
//
//	// Text 列表项
//	ms_mmi_main\source\mmi_app\kernel\c\Mmi_resource.c 
//		GetText 11
//		MMIRES_GetText	10
//	ms_mmi_main\source\mmi_app\kernel\c\Mmi_modu_main.c 
//		MMI_GetLabelTextByLang	 9
//	ms_mmi_main\source\mmi_app\app\theme\c\Mmi_theme.c 
//			MMITHEME_GetLabelTextByLang   9
//	ms_mmi_main\source\mmi_gui\source\menu\c\Guimenu.c 
//		GUIMENU_GetItem    8
//	ms_mmi_main\source\mmi_app\app\menu\c\Mmimenu_second.c 
//
//	DisplaySecMenuItemText	  7
//	DisplaySecMenuItem	   6
//	DisplayOneItem	   6
//	DisplaySecMenuAllItem	  6
//			DisplaySecoms_mmi_main\source\mmi_gui\source\menu\c\Guimenu.c 
//	ndMenu	 6
//		MenuHandleMsg	 5




[1.13] anim
//
//	TYPEMNG_Register
//	//
//	BaseCtrlConstruct
//	AnimCtrlConstruct
//	StatusbarCtrlConstruct
//	MainmenuCtrlConstruct
//	btn
//	softkey
//	ProgressBar
//	TitleCtrlConstruct
//	MenuConstruct
//	ListCtrlConstruct
//	FormConstruct
//	BaseEditCtrlConstruct
//	BaseFlexCtrlConstruct
//	TextEditCtrlConstruct











[1.14] tmp
// key 0--bat
MS_MMI_Main/source/mmi_app/app/idle/c/mainapp.c  MAINMENU_REMOVE_KEY0_STAR_HASH_DIAL
//
//		static uint8 bat_level;
//	    MMI_IMAGE_ID_T icon_id = IMAGE_NULL;
//	    GUIWIN_STBDATA_ICON_STYLE_E     icon_type   =    GUIWIN_STBDATA_ICON_NONE;
//
//		if(bat_level>8)
//			bat_level = 0;
//		else 
//			bat_level += 1;
//		
//	    MMIIDLE_GetIdleWinInfo()->batlevel = bat_level;
//
//	    GUIWIN_GetStbItemIconStyle(MMICOM_WIN_ICON_BATTERY, &icon_type);
//	    GUIWIN_SetStbItemIconCurFrame(MMICOM_WIN_ICON_BATTERY, MMIIDLE_GetIdleWinInfo()->batlevel);
//	    // update
//	    GUIWIN_UpdateStb();

// key 0--系统bat
IdleWin_HandleMsg
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_mstyle.c  4489
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_mstyle.c  case^MSG_KEYUP_0
// 107
MS_MMI_Main\source\mmi_app\app\idle\c\mainapp.c  case^MSG_KEYDOWN_1
//
//    case MSG_KEYUP_0:
//		// 更新电量
//		MMIPHONE_ChargeHandlePsAndRefMsg(PNULL,    CHR_MSG_CAP_IND,   PNULL);
//        break;
//    case MSG_KEYUP_1:
//		// 充电开(关机充电start)
//		MMIPHONE_ChargeHandlePsAndRefMsg(PNULL,    CHR_MSG_CHARGE_START_IND,   PNULL);
//        break;
//    case MSG_KEYUP_2:
//		// 充电关
//		MMIPHONE_ChargeHandlePsAndRefMsg(PNULL,    CHR_MSG_CHARGE_END_IND,   PNULL);
//        break;
//    case MSG_KEYUP_3:
//		// 充电完(关机充电ok)
//		MMIPHONE_ChargeHandlePsAndRefMsg(PNULL,    CHR_MSG_CHARGE_FINISH_IND,   PNULL);
//        break;
//		
//    case MSG_KEYUP_4:
//		// 更新Status
//		{
//	        uint8     bat_level = MMIAPIPHONE_GetBatCapacity();
//	        MMIAPICOM_StatusAreaSetBatLevel(bat_level);
//		}
//        break;


// status--Volte
MS_MMI_Main\source\mmi_app\common\c\mmicom_statusarea.c  1307



// sim ch
MS_MMI_Main\source\mmi_app\common\c\mmi_multi_variant.c  442
//	#ifdef WIN32
//	    return 1;  //china
//	#else
//	    return emergency_config;
//	#endif



// cursor
ctrl:editbox\c\ctrlbaseflex_cursor.c  void^FillCursorColor
ctrl:editbox\c\ctrlbaseflex_cursor.c  1205
//	#ifndef WIN32
//	        GUI_FillRect (
//	            (const GUI_LCD_DEV_INFO*) &baseedit_ctrl_ptr->edit_layer_info,
//	            cursor_rect,
//	            baseedit_ctrl_ptr->common_theme.font.color);
//	#endif



// rect
MS_MMI_Main\source\mmi_gui\source\graph\c\guigraph.c  2908
//	#ifdef WIN32
//		if(box.top<50 && box.bottom>51){
//			int a = 1;
//		}
//	#endif







[1.15] layer
// layer
//
//	GUI_LCD_DEV_INFO	dev_info_ptr = MMIDC_GetOSDBlockInfo();
//
//	UILAYER_Clear(&dev_info_ptr);
//	UILAYER_SetLayerPosition(&dev_info_ptr, 0, 0);
//	//LCD_FillRect(&dev_info_ptr,rect,BG_COLOR);
//					
//	GUIRES_DisplayImg(PNULL,
//	                     &rect,
//	                     PNULL,
//	                     MMIDC_MAIN_WIN_ID,
//	                     image_config_id,
//	                     (const GUI_LCD_DEV_INFO *)&dev_info_ptr);



[1.16] simulator
// simulator
make\simulator\simulator.ini  MMI_LCD_176_220
make\simulator_idh\simulator.ini   MMI_LCD_176_220
make\simulator_main\simulator.ini   MMI_LCD_176_220
// 
MS_MMI_Main\source\mmi_app\app\cs\h\mmics_position.h 
MS_MMI_Main\source\mmi_app\app\dcd\h\mmidcd_position.h 
// ini(copy)
make/simulator_idh/simulator_idh.mk  mssim_duallcd_
make/simulator_main/simulator_main.mk  mssim_duallcd_

// skin name
make\simulator\simulator.mk  SKIN_FILE_NAME
make\simulator_idh\simulator_idh.mk  SKIN_FILE_NAME
make\simulator_main\simulator_main.mk  SKIN_FILE_NAME
// skin name _T
make\simulator_idh\simulator_idh.mk  SUFFIX
make\simulator_main\simulator_main.mk  SUFFIX
// skin file
MS_MMI_Main\source\winsimulator_tp\skin
//   mssim_duallcd_160_128
//   mssim_duallcd_160_128_T   90^



[1.17] key
// 按键替换
//#undef MSG_KEYUP_OK
//#undef MSG_KEYDOWN_OK
//#undef MSG_KEYDOWN_CANCEL
//#undef MSG_KEYDOWN_RED
//#define MSG_KEYUP_OK            (KEY_RELEASED | KEY_CANCEL)  //取消作为ok键
//#define MSG_KEYDOWN_OK          (KEY_PRESSED | KEY_CANCEL)   //取消作为ok键
//#define MSG_KEYDOWN_CANCEL      (KEY_PRESSED | KEY_RED)      //Red作为取消
//#define MSG_KEYDOWN_RED         0



[1.18] Lcd

//		GUI_RECT_T	full_rect = {0,0,10,10};
//		GUI_COLOR_T conv_value = 0x33ff;
//      GUI_LCD_DEV_INFO    lcd_dev_info = {GUI_MAIN_LCD_ID,GUI_BLOCK_MAIN};
//    for (i = 0; i < img_h; i++)
//    {
//	    for (j = 0; j < img_w; j++)
//	    {
//			conv_value = arr[img_w * i+j];
//			conv_r = 1 * 0x02;
//			conv_g = (conv_value & 0xf0) * 0x04;
//			conv_b = (conv_value & 0x0f) * 0x02;
//			conv_value = conv_r<<11 + conv_g<<5 + conv_b;
//			//conv_value = 0x8410;
//			full_rect.top  = y + (i*conv_scale);
//			full_rect.left = x + (j*conv_scale);
//			full_rect.bottom = full_rect.top + conv_scale - 1;
//			full_rect.right  = full_rect.left + conv_scale - 1;
//			GUI_FillRect(&lcd_dev_info, full_rect, conv_value);
//	    }
//    }




[1.19] sublcd
//
MMIAPIPHONE_GetBatCapacity
// Bat
MMISUB_GetBatteryLevel
// sim
MS_MMI_Main\source\mmi_app\app\idle\c\mmi_subwintab.c  void^DisplaySubLcdIconOneLine
// show(mp3,fm,sms,call)
MS_MMI_Main\source\mmi_app\app\idle\c\mmi_subwintab.c  void^MMISUB_UpdateDisplaySubLcd




[1.20] font
// font
MS_MMI_Main/source/mmi_service/export/inc/mmi_custom_define.h  MMI_DEFAULT_NORMAL_FONT


open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
ms_mmi_main\source\resource\Common\FONT\LANG_FONT_LATIN_H9.lib
ms_mmi_main\source\resource\Common\FONT\

// 输入法字体
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_edit.c  theme_ptr->info_font


// Height--label
ctrl:Label\c\ctrllabel.c  LabelCtrlGetHeightByWidth

// set font
ctrl:editbox\c\ctrlbaseflex.c  BaseFlexCtrlSetFont


[1.21] list
// id1= 19 ~ 21
ms_mmi_main\source\mmi_kernel\include\mmitheme_list.h  GUIITEM_LAYOUT_ONE_LINE_CHECK
// id2= 20 ~ 25
ms_mmi_main\source\mmi_kernel\include\mmitheme_list.h  GUIITEM_STYLE_ONE_LINE_CHECK
// layout
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_layout_1line_check_icon
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_layout_1line_focus_check_icon
// layout id= 19 ~ 21
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c  &s_item_layout_1line_check
// reg id= 20 ~ 25(匹配id1)
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_style_table 
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c  2561
// state id3= 20 ~ 25
//   custom+radio 一定要设置 GUIITEM_STYLE_STATE_RADIO
//	 MMITHEME_CustomListItemStyleReg(ctrl_id, &my_style, GUIITEM_STYLE_STATE_RADIO);
ms_mmi_main\source\mmi_app\app\theme\c\mmitheme_list.c s_item_style_state_table
	
// 其他错位
ms_mmi_main\source\mmi_kernel\include\mmitheme_list.h  GUIITEM_STYLE_ONE_LINE_ICON_TEXT_ICON_EXT

// HL image
MS_MMI/source/mmi_gui/source/listbox/c/guilistbox.c  GUIITEM_DATA_IMAGE_ID

//softkey
//GUILIST_SetOwnSofterKey( ctrl_id, TRUE );


// draw
ctrl:ListBox\c\ctrllistbox.c  GUIITEM_STATE_HAS_NUM
ctrl:ListBox\c\ctrllist_item.c  GUIITEM_STATE_HAS_NUM


### list--位置
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_list.c  s_item_style_2_text_text_2_ms
//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_ITEM_TOP_MARGIN_MS, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2 - 1},    /* 1 */
//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_ITEM_TOP_MARGIN_MS, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2 - 1},    /* 1 */

//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS - MMI_LIST_ITEM_BOTTOM_MARGIN_MS},     /* 2 */
//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS - MMI_LIST_ITEM_BOTTOM_MARGIN_MS},     /* 2 */

ctrl:ListBox/c/ctrllistbox.c  end_item_bottom_margin
//    list_ctrl_ptr->end_item_bottom_margin = 6;


### list--add icon
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_phonewin.c  5824
//	#if defined (MAINLCD_SIZE_128X128)
//		item_t.item_style = GUIITEM_STYLE_ONE_LINE_NUMBER_TEXT;
//	#else
//    	item_t.item_style    = GUIITEM_STYLE_ONE_LINE_TEXT;
//	#endif

//    AppendPdaPhoneSettingsItem1Line(ctrl_id, TXT_COMMON_SETTING_AS, IMAGE_NULL, ID_SET_CUSTOM);
//    AppendPdaPhoneSettingsItem1Line(ctrl_id, TXT_SETTINGS_ENVIONMENT, IMAGE_NULL, ID_SETTINGS_ENVIONMENT);
//    AppendPdaPhoneSettingsItem1Line(ctrl_id, TXT_SET_PHONE, IMAGE_NULL, ID_SETTINGS_PHONE);
//    AppendPdaPhoneSettingsItem1Line(ctrl_id, TXT_COMM_SECURITY_SETTING, IMAGE_NULL, ID_SETTINGS_SECURITY);
//    AppendPdaPhoneSettingsItem1Line(ctrl_id, TXT_COMMON_RESTORE_FACTORY_SETTINGS, IMAGE_NULL, ID_SET_RESET_FACTORY);


ctrl:ListBox/c/ctrllistbox.c  CTRLLIST_AppendItem( )
//  if(item_ptr->state & GUIITEM_STATE_HAS_NUM) {
//		list_ctrl_ptr->show_num = TRUE;
//	}
//	else {
//		list_ctrl_ptr->show_num = FALSE;
//	}


// list--check
//LIST_GetSelectIconId
// list--check--pos--init
ctrl:ListBox\c\ctrllistbox.c  mark_left_margin
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_list.c  tag_width
// list--check--pos--set
ctrl:ListBox\c\ctrllist_item.c  LIST_ResetItemDisp
// list--check--pos--draw
ctrl:ListBox\c\ctrllistbox.c  ListDrawItem



[1.22] height
//
MS_MMI_Main/source/mmi_app/app/accessory/c/mmialarm.c
// 
// line
MS_MMI_Main/source/mmi_app/app/accessory/h/mmiacc_event.h  CHILD_FORM_BUTTON_HIGHT
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_edit.c  MMITHEME_EDIT_MARGIN_TB_SPACE
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_form.c  MMITHEME_FORM_PADDING
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_label.c  MMITHEME_LABEL_MARGIN_TB_SPACE
// 
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_richtext.c  RICHTEXT_TEXT_LINE_SPACE
// list
MS_MMI_Main/source/mmi_app/app/theme/h/mmi_position.h  MMI_LIST_ITEM_RIGHT_MS
MS_MMI_Main/source/mmi_app/app/theme/h/mmi_position.h  633
// form--label 
ctrl:Label/c/ctrllabel.c  CTRLLABEL_SetMargin
// form--edit 
ctrl:editbox/c/ctrlbaseedit.c  BASEEDIT_EXTRA_AREA
// form--edit(im,pen)
ctrl:editbox/c/ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea
// form--edit(画边框前)
ctrl:editbox/c/ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
ctrl:editbox\c\ctrlbaseflex_display.c  344
// 滚动条
MS_MMI_Main/source/mmi_kernel/include/mmitheme_pos.h  MMITHEME_SLIDEWIN_SCROLLBAR_WIDTH
MS_MMI_Main\source\mmi_app\app\theme\c\mmitheme_prgbox.c  MMITHEME_GetSlideScrollBarWidth
// form 滚动条
ctrl:Form\c\ctrlform.c  BOOLEAN^FormConstruct





//BASEEDIT_DisplayBg
//
//GUI_DisplayBorder
////
//电话本


[1.23] edit, im, pen
//
//	GUIEDIT_PermitBorder(ctrl_id, FALSE);
//	//GUIEDIT_SetDispImIcon(ctrl_id,&is_disp_im_icon,&is_disp_num_info);
//	GUIEDIT_SetStyle(ctrl_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);
//	GUIEDIT_SetFont(ctrl_id, SONG_FONT_60);



//	BOOLEAN           is_Permit = FALSE;
//	CTRLFORM_PermitChildFont(MMISET_SOS_MSG_CONTENT_EDIT_FORM_CTRL_ID,is_Permit);
//	CTRLFORM_PermitChildFont(MMISET_SOS_MSG_CONTENT_EDIT_CTRL_ID, is_Permit);

//	GUI_FONT_ALL_T FONT_ALL1 = {0};
//	FONT_ALL1.font = CAF_FONT_50;
//	FONT_ALL1.color = MMI_BLACK_COLOR;
//	CTRLFORM_SetChildTheme(MMISET_SOS_MSG_CONTENT_EDIT_CTRL_ID, PNULL, PNULL, &FONT_ALL1);



// im + pen
ctrl:editbox/c/ctrlbaseflex_display.c  BaseFlexCtrlDisplayLeftNum
// im + pen--display
ctrl:editbox/c/ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea
ctrl:editbox/c/ctrlbaseedit_internal.c  721
// im + pen--MSG
ctrl:editbox\c\ctrllistedit.c  MSG_NOTIFY_IM_COMMIT


//Im
//Initialize




[1.24] color
# color
//
//MMITHEME_GetAccentColorByOffset(MMITHEME_OFFSET_COLOR_DEFAULT)

//
//   GUI_FONT_T font        = MMI_DEFAULT_NORMAL_FONT;
//   GUI_COLOR_T font_color = MMI_BLACK_COLOR;
//   GUITEXT_SetFont(CTRL_ID,&font,&font_color);

//
//   GUILABEL_SetFont(CTRL_ID, CUSTOM_UITEST_FONT, CUSTOM_UITEST_COLOR);


# visible
//	GUIAPICTRL_SetState(CTRL_ID,GUICTRL_STATE_INVISIBLE,TRUE);
//	GUIAPICTRL_SetState(CTRL_ID,GUICTRL_STATE_INVISIBLE,FALSE);

# rect
//	GUI_RECT_T edit_rect = {0};
//	GUIAPICTRL_SetRect(CTRL_ID, &edit_rect);







[1.25] label
// label
//CREATE_LABEL_CTRL(GUILABEL_ALIGN_LEFT, CTRL_ID),

//
//GUILABEL_SetText(MMIENG_UITEST_LABEL_CTRL_ID, &text, FALSE);

// label
ctrl:Label\c\ctrllabel.c  LabelDrawString
//
// alpha
//	CTRLLIST_SetItemContentOpacityFontColor
//	//
//	// draw
//	LabelDrawBg
//	// bg-custom
//	CTRLLABEL_SetBg
//	// bg-form
//	LabelCtrlSetBg
//	CTRLFORM_PermitChildBg(MMIMP3_TITLE_FORM_CTRL_ID, FALSE);


[1.26] text
// text
//CREATE_TEXT_CTRL(CTRL_ID),  

//
//GUITEXT_SetString(nodata_ctrl_id, str_label.wstr_ptr,str_label.wstr_len, FALSE);

//txt
//	GUISTR_DrawTextToLCDSingleLine
//	GUISTR_DrawTextToLCDInRect
//	GUISTR_DrawTextByOffset



[1.27] prgbox
// 进度条
//CREATE_PRGBOX_CTRL(GUIPRGBOX_STYLE_HORIZONTAL_PROCESS, CTRL_ID),



[1.28] menu



[1.29] owndraw
//
//CHILD_OWNDRAW_CTRL(FALSE,CTRL_ID,FORM_ID,DisplayFunc),


//
//GUIFORM_SetChildSpace(FORM_ID,CTRL_ID,PNULL,&v_space);
//GUIOWNDRAW_SetHeight(CTRL_ID,height);    
//GUIFORM_SetChildAlign(FORM_ID,CTRL_ID,GUIFORM_CHILD_ALIGN_HMIDDLE);  
//GUIOWNDRAW_SetVisible(CTRL_ID, TRUE, is_fresh);

// rect
ctrl:OwnerDraw\c\ctrlownerdraw.c  void^OwnerDrawDraw^( )



[1.30] 



[1.31] 





[1.32] 




[1.33] 




[1.34] 




[1.35] 




[1.36] 




