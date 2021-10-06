// 目录:
//   1. 功能点
Save:node\C\study\Macro_modis_6531E.h  \[1.1\] display
Save:node\C\study\Macro_modis_6531E.h  \[1.2\] softkey
Save:node\C\study\Macro_modis_6531E.h  \[1.3\] string
Save:node\C\study\Macro_modis_6531E.h  \[1.4\] statusbar, change----
Save:node\C\study\Macro_modis_6531E.h  \[1.5\] theme
Save:node\C\study\Macro_modis_6531E.h  \[1.6\] pubWin  Alert
Save:node\C\study\Macro_modis_6531E.h  \[1.7\] form
Save:node\C\study\Macro_modis_6531E.h  \[1.8\] rect
Save:node\C\study\Macro_modis_6531E.h  \[1.9\] timer
Save:node\C\study\Macro_modis_6531E.h  \[1.10\] option
Save:node\C\study\Macro_modis_6531E.h  \[1.11\] onoff
Save:node\C\study\Macro_modis_6531E.h  \[1.12\] title
Save:node\C\study\Macro_modis_6531E.h  \[1.13\] anim ---------------
Save:node\C\study\Macro_modis_6531E.h  \[1.14\] tmp ----------------
Save:node\C\study\Macro_modis_6531E.h  \[1.15\] layer
Save:node\C\study\Macro_modis_6531E.h  \[1.16\] simulator
Save:node\C\study\Macro_modis_6531E.h  \[1.17\] key
Save:node\C\study\Macro_modis_6531E.h  \[1.18\] Lcd
Save:node\C\study\Macro_modis_6531E.h  \[1.19\] sublcd
Save:node\C\study\Macro_modis_6531E.h  \[1.20\] font
Save:node\C\study\Macro_modis_6531E.h  \[1.21\] list
Save:node\C\study\Macro_modis_6531E.h  \[1.22\] height------
Save:node\C\study\Macro_modis_6531E.h  \[1.23\] edit, im, pen
Save:node\C\study\Macro_modis_6531E.h  \[1.24\] color
Save:node\C\study\Macro_modis_6531E.h  \[1.25\] label
Save:node\C\study\Macro_modis_6531E.h  \[1.26\] 
Save:node\C\study\Macro_modis_6531E.h  \[1.27\] 
Save:node\C\study\Macro_modis_6531E.h  \[1.28\] 
Save:node\C\study\Macro_modis_6531E.h  \[1.29\] 
Save:node\C\study\Macro_modis_6531E.h  \[1.30\]
//	 2. 界面
Save:node\C\study\Macro_modis_6531E.h  \[2.1\] win fun.
Save:node\C\study\Macro_modis_6531E.h  \[2.2\] idle, lock
Save:node\C\study\Macro_modis_6531E.h  \[2.3\] menu, second
Save:node\C\study\Macro_modis_6531E.h  \[2.4\] dial
Save:node\C\study\Macro_modis_6531E.h  \[2.5\] test, version
Save:node\C\study\Macro_modis_6531E.h  \[2.6\] file
Save:node\C\study\Macro_modis_6531E.h  \[2.7\] Setting
Save:node\C\study\Macro_modis_6531E.h  \[2.8\] sms -----------------
Save:node\C\study\Macro_modis_6531E.h  \[2.9\] call
Save:node\C\study\Macro_modis_6531E.h  \[2.10\] pb, cl
Save:node\C\study\Macro_modis_6531E.h  \[2.11\] camera -------------
Save:node\C\study\Macro_modis_6531E.h  \[2.12\] pic
Save:node\C\study\Macro_modis_6531E.h  \[2.13\] record
Save:node\C\study\Macro_modis_6531E.h  \[2.14\] fm
Save:node\C\study\Macro_modis_6531E.h  \[2.15\] fmm
Save:node\C\study\Macro_modis_6531E.h  \[2.16\] vp
Save:node\C\study\Macro_modis_6531E.h  \[2.17\] mp3
Save:node\C\study\Macro_modis_6531E.h  \[2.18\] alarm --------------
Save:node\C\study\Macro_modis_6531E.h  \[2.19\] calc
Save:node\C\study\Macro_modis_6531E.h  \[2.20\] calendar
Save:node\C\study\Macro_modis_6531E.h  \[2.21\] 单位转换
Save:node\C\study\Macro_modis_6531E.h  \[2.22\] 游戏 魔音
Save:node\C\study\Macro_modis_6531E.h  \[2.23\] bt
Save:node\C\study\Macro_modis_6531E.h  \[2.24\] env
Save:node\C\study\Macro_modis_6531E.h  \[2.25\] 
Save:node\C\study\Macro_modis_6531E.h  \[2.26\] res
Save:node\C\study\Macro_modis_6531E.h  \[2.27\] Browser 网络参数
Save:node\C\study\Macro_modis_6531E.h  \[2.28\] sos
Save:node\C\study\Macro_modis_6531E.h  \[2.29\] startup
Save:node\C\study\Macro_modis_6531E.h  \[2.30\]
	



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
MS_MMI/source/mmi_gui/source/win/c/guiwin.c  GUIWIN_SeSoftkeytButtonIconId
//	#if defined (MAINLCD_SIZE_128X128) //中间softkey显示黑色
//	if(button_num == 1) {
//	}
//	else
//	#endif

// 中间softkey
MS_MMI/source/mmi_gui/source/win/c/guiwin.c  GUIWIN_SeSoftkeytButtonTextId
//	#if defined (MAINLCD_SIZE_128X128)
//	if(MIDDLE_BUTTON == button_num) { //中间softkey显示黑色
//	}
//	else
//	#endif

// 中间softkey--btn
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^DrawAllButtons
//	#if !defined (MAINLCD_SIZE_128X128)  //not show softkey mid
//    DrawButtonContent(softkey_ptr, MIDDLE_BUTTON);
//	#endif

// softkey--rect
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^CalSoftkeyRect


//
MS_MMI/source/mmi_app/app/theme/h/mmi_position.h  MMI_FULLSCREEN_SOFTKEY_BAR_HEIGHT


//
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^GUISOFTKEY_Init
// type
MS_MMI\source\mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetTextId
MS_MMI\source\mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetButtonTextId
MS_MMI\source\mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetButtonIconId


//
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^DrawSoftkey
// bg
MS_MMI\source\mmi_app\app\theme\c\mmitheme_softkey.c  MMITHEME_GetSoftkeyStyle


//常见修改
MS_MMI\source\mmi_app\common\c\mmi_setlist_win.c TXT_COMMON_OK
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c TXT_COMMON_OK


// 软键
MS_MMI\source\mmi_app\app\theme\c\mmi_theme.c  MMITHEME_GetInvalidTextID
MS_MMI\source\mmi_app\kernel\c\Mmi_resource.c  GetText 11
MS_MMI\source\mmi_app\kernel\c\Mmi_resource.c  MMIRES_GetText	10
//
MS_MMI\source\mmi_app\app\theme\c\Mmi_theme.c  MMITHEME_GetResText  10
//
MS_MMI\source\mmi_gui\source\softkey\c\Guisoftkey.c 
//
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^DrawButtonText	   9
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^DrawButtonContent	  8
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^DrawAllButtons	   7
MS_MMI/source/mmi_ctrl/source/Softkey/c/ctrlsoftkey.c  void^DrawSoftkey 	6
//		
MS_MMI\source\mmi_gui\source\win\c\Guiwin.c  GUIWIN_SetSoftkeyTextId    8
//	
MS_MMI\source\mmi_app\app\menu\c\Mmimenu_second.c DisplaySecondMenu	 6
MS_MMI\source\mmi_app\app\menu\c\Mmimenu_second.c MMIMENU_SetSoftkey	  7
//	
MS_MMI\source\mmi_gui\source\menu\c\Guimenu.c 	MenuHandleMsg	 5

// set Font
GUISOFTKEY_Init
MMITHEME_GetSoftKeyTextFont

// param
//	ctrl_id = ((MMI_NOTIFY_T*) param)->src_id;
//	MMICOMMON_BUTTON_SOFTKEY_LEFT_CTRL_ID
//	MMICOMMON_BUTTON_SOFTKEY_RIGHT_CTRL_ID


	
[1.3] GetString()






[1.4] statusbar, change
// statusbar init
MS_MMI/source/mmi_app/app/idle/c/mainapp.c  MMIAPICOM_StatusAreaInit

//动态创建状态条:
SBD_MMI_DIALWIN_HAS_STATUSBAR
// Draw
DrawStatusBarAllItem


// init--pos
MS_MMI\source\mmi_app\common\c\mmicom_statusarea.c  void^SetStatusAreaInfo


// sim--刷新
MS_MMI\source\mmi_app\common\c\mmicom_statusarea.c  void^StatusAreaSetSimInfo
MS_MMI\source\mmi_app\common\h\mmicom_statusarea.h  MMICOM_WIN_ICON_E
MS_MMI\source\mmi_app\app\idle\h\mmiidle_statusbar.h  MMI_WIN_ICON_E

// idle
// 电量--刷新
MS_MMI\source\mmi_app\app\idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleChargeState
// 电量--Level
MS_MMI\source\mmi_app\app\idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleBatLevel
// 电量--Level2
MS_MMI\source\mmi_app\app\idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleDbatLevel
//
//    MMIAPICOM_StatusAreaSetBatLevel(bat_level);


// set
// set--电量--刷新
MS_MMI\source\mmi_app\app\setting\c\mmiset_phonewin.c  void^UpdateStatusBar


// 电量--service
MS_MMI\source\mmi_app\kernel\c\mmimain.c  CHR_SERVICE
MS_MMI\source\mmi_app\kernel\c\mmimain.c  void^ChargeCallBackFunc
// 电量--msg
MS_MMI\source\mmi_app\app\phone\c\mmiphone.c  void^HandlePsAndRefMsg
MS_MMI\source\mmi_app\app\phone\c\mmiphone_charge.c   MMI_RESULT_E^MMIPHONE_ChargeHandlePsAndRefMsg


// ps--open
MS_MMI\source\mmi_app\app\setting\c\mmiset_phonewin.c   void^MMIAPISET_OpenPowerSettingMode
MS_MMI\source\mmi_app\app\phone\c\mmiphone_charge.c   920
// ps--close
MS_MMI\source\mmi_app\app\setting\c\mmiset_phonewin.c   void^MMIAPISET_SetPowerSavingSetting
MS_MMI\source\mmi_app\app\phone\c\mmiphone_charge.c   887
//            power_sav_setting.is_active = FALSE;
//            MMIAPISET_SetPowerSavingSetting(power_sav_setting);
//            MMIAPIENVSET_ResetActModeOtherRingSet();


// Draw
MS_MMI\source\mmi_ctrl\source\Statusbar\c\ctrlstatusbar.c  DrawStatusBarAllItem




[1.5] Theme
// 
MS_MMI/source/mmi_app/app/theme/c/mmitheme_list.c  4343


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
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_no_initialtext_text_and_text_with_mask_ms 
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_no_bigicon_text_and_text_with_mask_ms
// cc---紧急拨号字体
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_2_text_text
// ff---video delete 
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_multi_choice_picker_two_line_bigicon_text_and_text
// sms----未读/已读-短信
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_2_2text_and_text_icon_ms
// cl---通话记录
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c   s_item_style_2_text_icon_and_text_ms









[1.6] pubWin  Alert
//OpenAlertWin

// 去icon
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c  5882

// 去 softkey
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c  void^MMIPUBCreatSoftkeyCtrl
//    if(MMIPUB_SOFTKEY_NONE == win_info_ptr->softkey_style)
//    {
//        return;
//    }

// 居中bg
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c  bg_rect.bottom^=
//	#if !defined (MAINLCD_SIZE_128X128) //pubwin居中
//		bg_rect.bottom = bg_rect.bottom -(bg_rect.bottom - inter_bg_rect.bottom);
//	#endif


// 间距
MS_MMI\source\mmi_app\app\theme\c\mmitheme_pubwin.c  MMIPUB_TITLE_V_MARGIN_TOP


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
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c void^MMIPUBLayout
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4097
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4120
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4193 bg_rect
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4224 alert_rect
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c 4263 title_rect

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
MS_MMI/source/mmi_app/app/fmm/c/mmifmm_sd.c  MMIPUB_OpenProgressWinByTextId  MMIPUB_SOFTKEY_ONE
// pop--连接管理--数据漫游
MS_MMI/source/mmi_app/app/connection/c/mmiconn_manager_wintab.c


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
MS_MMI\source\mmi_ctrl\source\Form\c\ctrlform_calc.c  CalculateChildHeight
MS_MMI\source\mmi_ctrl\source\Form\c\ctrlform_calc.c  690
//	if(17 == child_ptr->height || 20 < child_ptr->height && 35> child_ptr->height) 
//	{
//		int a = child_ptr->height;
//		a += 0;
//		a += 0;
//	}


// form--edit--getH
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit.c  BaseEditCtrlGetHeightByWidth
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit.c  BASEEDIT_EXTRA_AREA

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
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMI_RESULT_E^HandleCallSIMSelectWinMsg



[1.11] onoff
// 
MS_Customize/source/common/prod_param.c
MS_MMI/source/mmi_app/app/envset/c/mmienvset.c
MS_MMI/source/mmi_app/app/parse/c/mmiparse_dial.c
MS_MMI/source/mmi_app/app/phone/c/mmiphone.c
MS_MMI/source/mmi_app/app/phone/c/mmiphone_onoff.c    MMI_POWER_TIME_8S
MS_MMI/source/mmi_app/app/setting/c/mmiset_display.c
MS_MMI/source/mmi_app/app/setting/c/mmiset_nv.c
MS_MMI/source/mmi_app/app/setting/c/mmiset_ring.c
MS_MMI/source/mmi_app/app/setting/h/mmiset_export.h
MS_MMI/source/mmi_app/app/setting/h/mmiset_nv.h
MS_MMI/source/mmi_app/common/h/common_mdu_def.h
MS_MMI/source/resource/mmi_res_prj_def.h
common/export/inc/nv_item_id.h


//
MS_MMI/source/mmi_app/app/phone/c/mmiphone_onoff.c  MMISET_RING_TYPE_POWER
//
MS_MMI/source/resource/mmi_res_prj_def.h R_POWER_1





[1.12] title
// title bg:
//	IMAGE_TITLE_BAR
//
//	//
//	//
//	IMAGE_TITLE_BAR
//	IMAGE_CONTROL_TAB_DEFAULT
//	IMAGE_TAB_BG
//	// sms--box--tab
//	MMI_TAB_HEIGHT
//
//
//	//	  标题
//	Mmi_resource.c (MS_MMI\source\mmi_app\kernel\c)
//	    GetText 11
//	    MMIRES_GetText  10
//	Mmi_theme.c (MS_MMI\source\mmi_app\app\theme\c)
//	    MMITHEME_GetResText   9
//	Guititle.c (MS_MMI\source\mmi_gui\source\title\c)
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
//	Mmi_resource.c (MS_MMI\source\mmi_app\kernel\c)
//	    GetText 11
//	    MMIRES_GetText  10
//	Mmi_modu_main.c (MS_MMI\source\mmi_app\kernel\c)
//	    MMI_GetLabelTextByLang   9
//	Mmi_theme.c (MS_MMI\source\mmi_app\app\theme\c)
//	        MMITHEME_GetLabelTextByLang   9
//	Guimenu.c (MS_MMI\source\mmi_gui\source\menu\c)
//	        GUIMENU_GetTitleText    8
//	Mmimenu_second.c (MS_MMI\source\mmi_app\app\menu\c)
//	    SetSecondTitle    7
//	    DisplaySecondMenu    6
//	Guimenu.c (MS_MMI\source\mmi_gui\source\menu\c)
//	    MenuHandleMsg    5
//
//
//	// Text 列表项
//	MS_MMI\source\mmi_app\kernel\c\Mmi_resource.c 
//		GetText 11
//		MMIRES_GetText	10
//	MS_MMI\source\mmi_app\kernel\c\Mmi_modu_main.c 
//		MMI_GetLabelTextByLang	 9
//	MS_MMI\source\mmi_app\app\theme\c\Mmi_theme.c 
//			MMITHEME_GetLabelTextByLang   9
//	MS_MMI\source\mmi_gui\source\menu\c\Guimenu.c 
//		GUIMENU_GetItem    8
//	MS_MMI\source\mmi_app\app\menu\c\Mmimenu_second.c 
//
//	DisplaySecMenuItemText	  7
//	DisplaySecMenuItem	   6
//	DisplayOneItem	   6
//	DisplaySecMenuAllItem	  6
//			DisplaySecoMS_MMI\source\mmi_gui\source\menu\c\Guimenu.c 
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
MS_MMI/source/mmi_app/app/idle/c/mainapp.c  MAINMENU_REMOVE_KEY0_STAR_HASH_DIAL
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
MS_MMI\source\mmi_app\app\idle\c\mmiidle_mstyle.c  4489
MS_MMI\source\mmi_app\app\idle\c\mmiidle_mstyle.c  case^MSG_KEYUP_0
// 107
MS_MMI\source\mmi_app\app\idle\c\mainapp.c  case^MSG_KEYDOWN_1
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
MS_MMI\source\mmi_app\common\c\mmicom_statusarea.c  1307



// sim ch
MS_MMI\source\mmi_app\common\c\mmi_multi_variant.c  442
//	#ifdef WIN32
//	    return 1;  //china
//	#else
//	    return emergency_config;
//	#endif



// cursor
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  void^FillCursorColor
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  1205
//	#ifndef WIN32
//	        GUI_FillRect (
//	            (const GUI_LCD_DEV_INFO*) &baseedit_ctrl_ptr->edit_layer_info,
//	            cursor_rect,
//	            baseedit_ctrl_ptr->common_theme.font.color);
//	#endif



// rect
MS_MMI\source\mmi_gui\source\graph\c\guigraph.c  2908
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
MS_MMI\source\mmi_app\app\cs\h\mmics_position.h 
MS_MMI\source\mmi_app\app\dcd\h\mmidcd_position.h 
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
MS_MMI\source\winsimulator_tp\skin
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
MS_MMI\source\mmi_app\app\idle\c\mmi_subwintab.c  void^DisplaySubLcdIconOneLine
// show(mp3,fm,sms,call)
MS_MMI\source\mmi_app\app\idle\c\mmi_subwintab.c  void^MMISUB_UpdateDisplaySubLcd




[1.20] font
// font
MS_MMI/source/mmi_service/export/inc/mmi_custom_define.h  MMI_DEFAULT_NORMAL_FONT


open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
MS_MMI\source\resource\Common\FONT\LANG_FONT_LATIN_H9.lib
MS_MMI\source\resource\Common\FONT\

// 输入法字体
MS_MMI/source/mmi_app/app/theme/c/mmitheme_edit.c  theme_ptr->info_font


// Height--label
MS_MMI\source\mmi_ctrl\source\Label\c\ctrllabel.c  LabelCtrlGetHeightByWidth

// set font
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex.c  BaseFlexCtrlSetFont


[1.21] list

// id1= 19 ~ 21
MS_MMI\source\mmi_kernel\include\mmitheme_list.h  GUIITEM_LAYOUT_ONE_LINE_CHECK
// id2= 20 ~ 25
MS_MMI\source\mmi_kernel\include\mmitheme_list.h  GUIITEM_STYLE_ONE_LINE_CHECK
// layout
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_layout_1line_check_icon
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_layout_1line_focus_check_icon
// layout id= 19 ~ 21
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c  &s_item_layout_1line_check
// reg id= 20 ~ 25(匹配id1)
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c  s_item_style_table 
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c  2561
// state id3= 20 ~ 25
//   custom+radio 一定要设置 GUIITEM_STYLE_STATE_RADIO
//	 MMITHEME_CustomListItemStyleReg(ctrl_id, &my_style, GUIITEM_STYLE_STATE_RADIO);
MS_MMI\source\mmi_app\app\theme\c\mmitheme_list.c s_item_style_state_table
	
// 其他错位
MS_MMI\source\mmi_kernel\include\mmitheme_list.h  GUIITEM_STYLE_ONE_LINE_ICON_TEXT_ICON_EXT

// HL image
MS_MMI/source/mmi_gui/source/listbox/c/guilistbox.c  GUIITEM_DATA_IMAGE_ID

//softkey
GUILIST_SetOwnSofterKey( ctrl_id, TRUE );


// draw
MS_MMI\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  GUIITEM_STATE_HAS_NUM
MS_MMI\source\mmi_ctrl\source\ListBox\c\ctrllist_item.c  GUIITEM_STATE_HAS_NUM


### list--位置
MS_MMI/source/mmi_app/app/theme/c/mmitheme_list.c  s_item_style_2_text_text_2_ms
//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_ITEM_TOP_MARGIN_MS, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2 - 1},    /* 1 */
//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_ITEM_TOP_MARGIN_MS, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2 - 1},    /* 1 */

//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS - MMI_LIST_ITEM_BOTTOM_MARGIN_MS},     /* 2 */
//    { MMI_LIST_TEXT_LEFT_SPACE_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS/2, MMI_LIST_ITEM_RIGHT_MS, MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS - MMI_LIST_ITEM_BOTTOM_MARGIN_MS},     /* 2 */

MS_MMI/source/mmi_ctrl/source/ListBox/c/ctrllistbox.c  end_item_bottom_margin
//    list_ctrl_ptr->end_item_bottom_margin = 6;


### list--add icon
MS_MMI/source/mmi_app/app/setting/c/mmiset_phonewin.c  5824
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


MS_MMI/source/mmi_ctrl/source/ListBox/c/ctrllistbox.c  CTRLLIST_AppendItem( )
//  if(item_ptr->state & GUIITEM_STATE_HAS_NUM) {
//		list_ctrl_ptr->show_num = TRUE;
//	}
//	else {
//		list_ctrl_ptr->show_num = FALSE;
//	}


// list--check
LIST_GetSelectIconId
// list--check--pos--init
MS_MMI\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  mark_left_margin
MS_MMI/source/mmi_app/app/theme/c/mmitheme_list.c  tag_width
// list--check--pos--set
MS_MMI\source\mmi_ctrl\source\ListBox\c\ctrllist_item.c  LIST_ResetItemDisp
// list--check--pos--draw
MS_MMI\source\mmi_ctrl\source\ListBox\c\ctrllistbox.c  ListDrawItem




[1.22] height
//
MS_MMI/source/mmi_app/app/accessory/c/mmialarm.c
// 
// line
MS_MMI/source/mmi_app/app/accessory/h/mmiacc_event.h  CHILD_FORM_BUTTON_HIGHT
MS_MMI/source/mmi_app/app/theme/c/mmitheme_edit.c  MMITHEME_EDIT_MARGIN_TB_SPACE
MS_MMI/source/mmi_app/app/theme/c/mmitheme_form.c  MMITHEME_FORM_PADDING
MS_MMI/source/mmi_app/app/theme/c/mmitheme_label.c  MMITHEME_LABEL_MARGIN_TB_SPACE
// 
MS_MMI/source/mmi_app/app/theme/c/mmitheme_richtext.c  RICHTEXT_TEXT_LINE_SPACE
// list
MS_MMI/source/mmi_app/app/theme/h/mmi_position.h  MMI_LIST_ITEM_RIGHT_MS
MS_MMI/source/mmi_app/app/theme/h/mmi_position.h  633
// form--label 
MS_MMI/source/mmi_ctrl/source/Label/c/ctrllabel.c  CTRLLABEL_SetMargin
// form--edit 
MS_MMI/source/mmi_ctrl/source/editbox/c/ctrlbaseedit.c  BASEEDIT_EXTRA_AREA
// form--edit(im,pen)
MS_MMI/source/mmi_ctrl/source/editbox/c/ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea
// form--edit(画边框前)
MS_MMI/source/mmi_ctrl/source/editbox/c/ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  344
// 滚动条
MS_MMI/source/mmi_kernel/include/mmitheme_pos.h  MMITHEME_SLIDEWIN_SCROLLBAR_WIDTH
MS_MMI\source\mmi_app\app\theme\c\mmitheme_prgbox.c  MMITHEME_GetSlideScrollBarWidth
	



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
MS_MMI/source/mmi_ctrl/source/editbox/c/ctrlbaseflex_display.c  BaseFlexCtrlDisplayLeftNum
// im + pen--display
MS_MMI/source/mmi_ctrl/source/editbox/c/ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea
MS_MMI/source/mmi_ctrl/source/editbox/c/ctrlbaseedit_internal.c  721
// im + pen--MSG
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrllistedit.c  MSG_NOTIFY_IM_COMMIT


//Im
//Initialize




[1.24] color
//
//MMITHEME_GetAccentColorByOffset(MMITHEME_OFFSET_COLOR_DEFAULT)

//
//   GUI_FONT_T font        = MMI_DEFAULT_NORMAL_FONT;
//   GUI_COLOR_T font_color = MMI_BLACK_COLOR;
//   GUITEXT_SetFont(MMIENG_TEXTBOX1_CTRL_ID,&font,&font_color);

//
//   GUILABEL_SetFont(MMIENG_UITEST_LABEL_CTRL_ID, CUSTOM_UITEST_FONT, CUSTOM_UITEST_COLOR);



[1.25] label
// label
MS_MMI\source\mmi_ctrl\source\Label\c\ctrllabel.c  LabelDrawString
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


[1.26] 


[2.1] win fun.
// msg
MMK_RunWinProc

// txt
MMIRES_GetText
GUISTR_DrawTextToLCDInRect
// cursor
GUI_FillRect
LCD_FillRect

// image
GUIRES_DisplayImg
GUI_DisplayBg

// win
MMK_CreateWin
MMK_CloseWin
MMK_CreateChildWin (, , );

// list
GUILIST_AppendItem
GUILIST_SetItemStyle

// border
GUI_DisplayBorder



[2.2] idle, lock
// open
MS_MMI\source\mmi_app\app\idle\c\mainapp.c  MMIAPIIDLE_OpenIdleWin

// IDLE
MS_MMI\source\mmi_app\app\idle\c\mmiidle_cstyle.c  void^OutIdleWinContent
MS_MMI\source\mmi_app\app\idle\c\mmiidle_mstyle.c  void^OutIdleWinContent

// LOCK
MS_MMI\source\mmi_app\app\keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg
// LOCK
MS_MMI\source\mmi_app\app\keylock\c\mmikl_keylock.c  void^DisplayClockCallbackFun


// pos--date,week
MS_MMI/source/mmi_app/app/theme/c/
MS_MMI/source/mmi_app/app/theme/c/mmidisplay_data_128x128.c
MS_MMI/source/mmi_app/app/theme/c/mmidisplay_data_176x220.c
// pos--time
MS_MMI\source\mmi_app\app\idle\c\mmiidle_cstyle.c
MS_MMI/source/mmi_app/app/theme/h/mmi_position.h  MMI_MAIN_TIME_Y
MS_MMI/source/mmi_app/app/theme/h/mmi_position.h  IDLE_TIME_PIC_WIDTH





[2.3] menu, second
// index
MS_MMI/source/mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
MS_MMI/source/mmi_kernel/include/mmitheme_mainmenu.h  MAINLCD_SIZE_240X320
// bg rect
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  BOOLEAN^MatrixMenuGetTitleStyleInfo
// icon rect
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  HandleMatrixMenuGetIconRect
// draw
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  MMITHEME_DrawMainmenuItem
// title
MS_MMI/source/mmi_service/export/inc/mmi_custom_define.h  MMISET_DEFAULT_MENU_STYLE_E
// menu softkey, prg
MS_MMI/source/mmi_app/app/theme/c/mmitheme_mainmenu.c  is_has_button
MS_MMI/source/mmi_app/app/mainmenu/c/mainmenu_win.c  MAINMENU_ICON_WIN_TAB
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  ->is_need_prgbox

### main menu--win
// 
MS_MMI\source\mmi_app\app\mainmenu\c\mainmenu_win.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
// 
MS_MMI\source\mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
// 
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
// 
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
// 
MS_MMI\source\mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE


// menu--main
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c s_mainmenu_item_data
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c 570
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_176x220.c s_mainmenu_item_data
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x320.c s_mainmenu_item_data
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x320.c MAINMENU_FLP_STYLE
MS_MMI\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x240.c s_mainmenu_item_data

// menu--main
MS_MMI\source\mmi_app\app\mainmenu\c\mainmenu_win.c  HandleMainMenuWinMsg
// menu--second
MS_MMI\source\mmi_app\app\mainmenu\c\mainmenu_win.c  HandleSecMenuStaticMsg
MS_MMI\source\mmi_app\app\mainmenu\c\mainmenu_win.c  3353

// menu--tools
MS_MMI\source\mmi_app\common\c\mmi_menutable_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI\source\mmi_app\common\c\mmi_menutable_128x128.c GUIMENU_ITEM_T^menu_icon_tools
MS_MMI\source\mmi_app\common\c\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_icon_tools
MS_MMI\source\mmi_app\common\c\mmi_menutable_176x220.c GUIMENU_ITEM_T^menu_icon_tools
MS_MMI\source\mmi_app\common\c\mmi_menutable_240x320.c GUIMENU_ITEM_T^menu_icon_tools

// menu--palyer
MS_MMI\source\mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_icon_player
MS_MMI\source\mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_icon_player
MS_MMI\source\mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_icon_player

// menu--settings
MS_MMI\source\mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_settings_icon
MS_MMI\source\mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_settings_icon


// menu img
MS_MMI\source\mmi_ctrl\source\Menu\c\ctrlmenu_popup.c  check_unsel_img
MS_MMI\source\mmi_ctrl\source\Menu\c\ctrlmenu_sec.c   check_unsel_img



[2.4] dial
// Open
MS_MMI\source\mmi_app\app\idle\c\mmiidle_mstyle.c  MMIAPIIDLE_OpenDialWin

// dial
MS_MMI\source\mmi_app\app\idle\c\mmiidle_dial.c  MMIAPIIDLE_EditDialWin

// display--分行--平均行间距 
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  void^DisplayTextString
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  BIG_DIAL_NUM
// display--分行--取消底部间距，相差1个像素刚好对齐
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  976
// display--分行--拨号不计算行间距
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  uint16^BASEEDIT_GetLineHeight
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1023
// display--分行--拨号位置不下移
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetLineRect
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1270
// display--分行--超位置
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  BASEEDIT_GetTopLineOffsetRange



// 智能拨号
MS_MMI\source\mmi_app\app\idle\c\mmiidle_dial.c  HandleDialWinMsg
MS_MMI\source\mmi_app\app\idle\c\mmiidle_dial.c  MMIAPIIDLE_SwitchEditDialWin
// icon
MS_MMI\source\mmi_kernel\include\mmi_theme.h  BIG_DIAL_NUM

// 拨号光标
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  void^BASEFLEX_DisplayCursor
// 拨号光标--set
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_highlight.c   void^BaseEditCtrlSetHighlight
// display--align
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit.c  CTRLBASEEDIT_SetAlign
// display--bg
MS_MMI\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  BASEEDIT_DisplayBg



[2.5] test
// version
MS_MMI/source/mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
MS_MMI/source/mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenItemTestWin
MS_MMI/source/mmi_app/app/eng/c/mmieng_main.c  MMIAPIENG_StartEngineerMenu
// version
MS_MMI/source/mmi_app/app/eng/c/mmieng_uitestwin.c  ID_ENG_TEST_SW_VERSION

// version
MS_MMI\source\mmi_app\app\eng\c\mmieng_base.c   ShowVersionInfo
// version--save
MS_MMI\source\mmi_app\app\eng\c\mmieng_base.c  MMIAPIENG_SaveTestResult


// 手机测试
MS_MMI/source/mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestMenuWinHandleMsg
// 手机测试--menu
MS_MMI\source\mmi_app\app\eng\c\mmieng_menutable.c  menu_phone_test

// 单项测试
MS_MMI/source/mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGItemTestMenuWinHandleMsg
// 单项测试--menu
MS_MMI\source\mmi_app\app\eng\c\mmieng_menutable.c  menu_phone_item_test

// 串行测试
MS_MMI/source/mmi_app/app/eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// 测试结果
MS_MMI/source/mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
MS_MMI/source/mmi_app/app/eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo










// 电子保卡




[2.6] file
//
MMIFMM_OpenExplorerWin

// 
MS_MMI/source/mmi_app/app/fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleUdiskChildWindow
MS_MMI/source/mmi_app/app/fmm/c/mmifmm_mainwin.c  1528

//
MMIFMM_CombineFullFileName

//
MS_MMI/source/mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE

//record
UpdateRecordFilePath(record_win_data_ptr);



[2.7] Setting
//
HandleSetLanguageInputContentWindow 	 //输入语言
//设置-情景模式
PromptSuccessWin
//
MS_MMI/source/mmi_app/app/setting/c/mmiset_phonewin.c  MMISET_INPUT_RESET_FACTORY_PWD_WIN_TAB


head:Set,mmiset_wintab.c
item:Set,mmiset_wintab.c
item:set,mmiset_displaywin.c
//


// Reset
MMIENVSET_ResetEnvSetSetting();//
MS_MMI\source\mmi_app\app\setting\c\mmiset_func.c
//
//MMISET_CleanUserData();


// sos
MMK_CloseWin

// set--phone--time
MS_MMI\source\mmi_app\app\setting\c\mmiset_datetime.c  HandleSetTimeDateWindow

// sec--pin
HandlePinInputExceptPhone


[2.8] sms
// Enter
MS_MMI\source\mmi_app\app\sms\c\mmisms_mainmenuwin.c  MMISMS_EnterSMSMainMenuWin
// Main
MS_MMI\source\mmi_app\app\sms\c\mmisms_mainmenuwin.c  HandleSmsMainMenuWinMsg
// option
MS_MMI\source\mmi_app\app\sms\c\mmisms_editsmswin.c  HandleEditMenuWinMsg
// option--save  APP_MN_SMS_MEM_FULL_IND
MS_MMI\source\mmi_app\app\sms\c\mmisms_editsmswin.c  EditSMSWin_SaveSMS

### 来短信
MS_MMI\source\mmi_app\app\sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
MS_MMI\source\mmi_app\app\sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND

//
mmismsapp_wintab.c

// sms
HandleEditSmsWinMsg


// sms--box
MS_MMI\source\mmi_app\app\sms\c\mmisms_messageboxwin.c  HandleMsgBoxMainWindow
MS_MMI\source\mmi_app\app\sms\c\mmisms_messageboxwin.c  4506
// sms--box--mt
MS_MMI\source\mmi_app\app\sms\c\mmisms_messageboxwin.c  HandleMtBoxChildWinMsg
// sms--box--unread
MS_MMI\source\mmi_app\app\sms\c\mmismsapp_order.c  MMISMS_ListSmsFromOrder

// add data 
FormListBoxItem



[2.9] call

// 销毁softkey？
MMK_DestroyControl(MMICC_CONNECTED_STATE_LABEL_CTRL_ID);

//
mmicc_wintab.c
// ui--font
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c MMI_CALL_NAME_FONT
// ui--label(默认)
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(大屏)
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c LRBUTTON_WIDTH
// ui--icon 59 47 181 169
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 24908
// ui--icon 105 17
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 13839
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 23750
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 23839



// 流程--来电-MT，
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_OpenMtCallWin  
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID

### 小屏
// label--name, num
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  380
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  9038
// anim--pad--小屏无效
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  9453

### 大屏
// label--sim, state
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8085  sim, state
// label--time
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8272  time
// label--name, num
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8330  name
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8454  num
// label--num
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8454  num


// 流程--去电-MO，
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_HandleCcWinMsg
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID


// 流程--挂断 DIS
MS_MMI\source\mmi_app\app\cc\c\mmicc_app.c 4345
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_HandleDisconnectWinMsg
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_OpenDisconnectWin  

MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MENU_WIN_ID
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_CALLLIST_WIN_ID
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_PROCESSING_WIN_ID
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_ANIMATION_WIN_ID
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_ADJUSTVOLUME_WIN_ID

MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_HOLDMENU_WIN_ID
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_STATUS_WIN_ID
//MS_MMI\source\mmi_app\app\cc\c\.c  MMIIDLE_DIAL_MENU_WIN_ID
//MS_MMI\source\mmi_app\app\cc\c\mmicc_app.c MMICC_CALL_WAIT_INDICATOR_WIN_ID
//MS_MMI\source\mmi_app\app\cc\c\mmicc_app.c MMICC_ANIMATION_WIN_ID
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 20008


// 流程--接听
MS_MMI\source\mmi_app\app\cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent

// 112
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  


// 多卡通话
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CustomShowMultiCallList
// 多卡通话--name + num
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  6477
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  6514
// 多卡通话--num
MS_MMI\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  6541





	
[2.10] pb, cl

// MEM
MMIPB_MEMDETAIL_WIN_TAB
//
TXT_COMMON_DETAIL_MEMORY
//
MS_MMI\source\mmi_app\app\pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_USED_SPACE

// style-1
MS_MMI\source\mmi_app\app\pb\c\Mmipb_set.c
MS_MMI\source\mmi_app\app\pb\c\Mmipb_view.c  HandleEntryListWinMsg
MS_MMI\source\mmi_app\app\pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_TAB_WIN_TAB
// style-2
MS_MMI\source\mmi_app\app\pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_WITH_SEARCH_WIN_TAB




// pb-search
MS_MMI\source\mmi_app\app\pb\c\mmipb_view.c  HandleEntryListWithSearchWinMsg
MS_MMI\source\mmi_app\app\pb\c\mmipb_view.c  13437
// 	GUIEDIT_SetStyle(editor_ctr_id,GUIEDIT_STYLE_SINGLE_DYN_DOWN);
//  CTRLBASEEDIT_SetDeActiveBorderColor(win_id, edit_id, MMI_DARK_WHITE_COLOR);

// 调整高度:
//	GUIFORM_SetChildHeight(form_ctr_id, editor_ctr_id, &editor_child_height);

// empty:
//	CTRLLIST_SetEmptyInfo

// pb-edit
MS_MMI\source\mmi_app\app\pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddEditWinMsg
// 	GUIEDIT_SetStyle(first_name_ctr_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);


// pb-list-search
MS_MMI\source\mmi_app\app\pb\c\mmipb_view.c  void^HandleMainReloadMsg
// pb-list-delete
MS_MMI\source\mmi_app\app\pb\c\mmipb_view.c  void^HandleOperateReloadList






// cl deltail
MS_MMI\source\mmi_app\app\cl\c\Mmicl_custom_wintab.c   InitLogListDetailContactItem
// cl deltail--调显示位置
MS_MMI/source/mmi_app/app/cl/c/mmicl_custom_wintab.c  AppendLogListDetailItem


// str
InitPdaCallLogListCtrl        CallLog






[2.11] camera
// Win
MS_MMI\source\mmi_app\app\camera\c\mmidc_main_wintab.c  MMI_RESULT_E^HandleCameraWinMsg
// softkey
MS_MMI\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  MMIDC_DisplaySettingTip
MS_MMI\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  void^MMIDC_DisplayString
// sizelist
MS_MMI\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  DisplayIconString
MS_MMI\source\mmi_app\app\camera\c\mmidc_guiiconbar.c  DisplayIconSize
// Show
MS_MMI\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  ShowAllOSD


//option 
MS_MMI\source\mmi_app\app\camera\c\Mmidc_osd_option.c  MMIDC_OpenVideoOption
// menu
//		InitRunningParameter
//		MMIDC_OpenPhotoOption
//		MMIDC_OpenVideoOption
//		MenuDisplayAndTP
//		OpenDCModeMenu
// switch
//		SetVideoMode
//		SetPhotoMode

// key
MS_MMI\source\mmi_app\app\camera\c\mmidc_main_wintab.c  KeyFunction
//		LSDCPreview
//		LSDVPreview
//		LeftDCPreview
//		LeftDVPreview
//		RightDCPreview
//		RightDVPreview
//DC
//		GetPhonePhotoSizeList
// LCD_ANGLE_90
MS_MMI\source\mmi_app\app\camera\c\mmidc_main_wintab.c  755
MS_MMI\source\mmi_app\app\camera\c\mmidc_setting.c  3682


Camera分辨率:
Camera闪光灯:
Image:



//DC
GetPhonePhotoSizeList






[2.12] pic
// enter
MS_MMI\source\mmi_app\app\pic_viewer\c\mmipicview_list.c HandlePicListWinMsg
MS_MMI\source\mmi_app\app\pic_viewer\c\mmipicview_list.c 696
//
MS_MMI\source\mmi_app\app\pic_viewer\c\mmipicview_wintab.c HandlePiclistOptWinMsg
//
MS_MMI\source\mmi_app\app\pic_viewer\c\mmipicview_wintab.c HandlePreviewOptWinMsg
// zoom
MS_MMI\source\mmi_app\app\pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
MS_MMI\source\mmi_ctrl\source\IconList\c\ctrliconlist.c  void^DisplayDelimiter
MS_MMI\source\mmi_app\app\pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR



[2.13] record
// enter
MS_MMI\source\mmi_app\app\record\c\mmirecord_common_wintab.c  HandleRecordMainPlayWinMsg
MS_MMI\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  MMIRECORD_MAINPLAY_WIN_CTRL_TAB
//	MMK_CreateCtrlByWinTabEx(win_id, MMIRECORD_MAINPLAY_WIN_CTRL_TAB);
//
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c  HandleRecordMainPlayWinMsg
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c  408
// anim
MS_MMI\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  anim_frame_red
// pos(time, anim)
MS_MMI\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  1600
MS_MMI\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  544
//
MS_MMI\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  DisplayProgress
MS_MMI\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  DisplayRecordAllBG

//time
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_0  

// bg
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_BG			  
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_COMMON_BG			
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_PDA_BG   
// bg-w
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_BG   
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BK_BG  
// anim
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_BG_ANIM_FRAME_1		  
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BTN_UNSEL  






[2.14] fm
//Display:
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^DisplayMainWindow
//Record
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordActionTest


//opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	
// 所有set channel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel



//set
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav


	

	
//新功能:
//struct
//MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  case^MMIFM_CUSTOM_ONOFF
//MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  uint32^s_fm_custom_channel_play_opt_item
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelListWinMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^ReadCustomOpenChannelsListBox
//channel list sel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelSelectListWinMsg
//channel opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmCustomChannelOptionMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^CreateCustomChannelOptionMenu
//channel Action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMCustomAction
	

//旧功能:
//option
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction



[2.15] fmm

//
MS_MMI\source\mmi_app\app\fmm\c\mmifmm_mainwin.c HandleFmmMainWinMsg
MS_MMI\source\mmi_app\app\fmm\c\mmifmm_mainwin.c HandleMenuOption
// record
MS_MMI\source\mmi_app\app\fmm\c\mmifmm_mainwin.c HandleRecordListWinMsg

//FILE
MMIFMM_HandleOpenFileWin



[2.16] vp
// time
MS_MMI/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  5788
// set param
MS_MMI/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  8053


// Short
MS_MMI/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  HandleShortCutMsg
// Opt
MS_MMI/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  HandleOptMenuWinMsg







[2.17] mp3
// enter-- 
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  MMIAPMAINWIN_Enter
// enter-- draw
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  HandleMp3PlayWinMsg
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  2428
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  MMIMP3_DisplayProgress
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  450
// enter--mini
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  HandleMiniDefaultWinMsg
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  MMIMP3_PLAY_WIN_TAB_V
// enter--pda
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main_pda.c  HandlePDADefaultWinMsg
// enter--play/pause
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  void^MMIMP3_DisplayButton

// 
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  HandleMainWinOpenMsg
// 
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  MMI_MUSIC_NEW_STYLE
// pos--progress
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  progress_groove_rect
// pos (只跑一次)
MS_MMI\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  435

// bg play
MS_MMI\source\mmi_app\app\audioplayer\c\mmiap_play.c  MMIAPIMP3_ResumeMp3


[2.18] alarm
# Enter
// Enter
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h
//新功能:
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg

// key Headset
MS_MMI\source\mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultHeadsetDetect
//
//    case KEY_LONG_RELEASED:
//			MMIAPIALM_StartAlarm(0, 0);

// key Headset 不亮屏
MS_MMI\source\mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultBackLight
MS_MMI\source\mmi_app\kernel\c\mmi_default.c  1825
//            //MMIDEFAULT_TurnOnBackLight();
MS_MMI\source\mmi_app\kernel\c\mmi_default.c  void^MMK_HandlePublicKey
MS_MMI\source\mmi_app\kernel\c\mmi_default.c  4147
MS_MMI\source\mmi_app\kernel\c\mmi_default.c  4133
//            //MMIDEFAULT_TurnOnBackLight();
// 
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  5568
//			MMIDEFAULT_TurnOnBackLight();
//


// 修改匹配
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^MMIALM_GetArrivedEvent
//
//        if (cur_event_ptr->is_valid &&
//            cur_event_ptr->is_on &&
//            TRUE ) // IsMatchEvent(cur_date, cur_time, cur_event_ptr) )

//
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^MMIAPIALM_StartAlarm

//
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^OpenAlarmExpiredWin

// 背光延迟
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  void^OpenAlarmAliveWin
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  8835

//
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg

//
MS_MMI\source\mmi_app\common\c\mmi_pubwin.c  5352


//AlarmNote
//alarm
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h
//新功能:
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg



MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c 4788
OpenAlarmAliveWin
//过期事件
OpenPastSchEventWin



//test
OpenAlarmAliveWin
HandleEventAliveWinMsg



	

[2.19] calc
// draw
MS_MMI\source\mmi_app\app\accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg

// Win
MS_MMI\source\mmi_app\app\accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg



[2.20] calendar
// draw
MS_MMI/source/mmi_app/app/accessory/c/mmicalendar_main.c  MMI_CALENDAR_CHINESE_JIEQI
MS_MMI/source/mmi_app/app/accessory/c/mmicalendar_main.c  DrawMonthCalendar
// pos
MS_MMI/source/mmi_app/app/accessory/h/mmiacc_position.h 128X128

// Win
// main
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
// opt
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
// opt--go to
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
// list-opt
//MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);

//draw:
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c
MS_MMI\source\mmi_app\app\accessory\c\mmischedule.c



[2.21] 


[2.22] 

//snake:
//square:
//Initlabel
	

[2.23] bt
//mmibt_wintab.c
//MMIAPIBT_AppInit

// 蓝牙自动测试优化
MS_Ref/source/autotest_device/src/autotest_device.c  1904
//		Is_BTSearchStart = SCI_FALSE;      //+
//        BT_CancelSearch();  // add by unisoc 2020        




[2.24] env
// Env 改不动的问题: 
//	 按键音录制的有杂音; 半透明;长按上键手电筒

//不严重问题:
//	 分卡 SBD_H9_KLS_PROFILE_SIM_NV
//	 RES_ADD_STRING(TXT_ALARM_PLAY_IN_SLIENT, "Play sound in Silent profile?")
//	   offline---功能待改 
//	 拨号音: 音量实际调不了; 
//			 beep菜单中, 按键音、beep声都没反应;
//			 拨号音按键音共用, 一关都关, 测试不了未改;


//其他待改+BUG:
// key_wav 最大5格;
// call ring.mp3 都大一倍
// vol play--上下键移动了背景;

//功能问题:
//	   s---没有key tone+拨号间--功能待改
//	   menu--beep--少2响 --------------------------	 #####	  ++++++
// 最后3项有waiting...
//	 检查各种key tone



// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request

//type new
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6220
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6353


//ring--key--4-1-N 才能播放
MS_MMI\source\mmi_app\app\setting\c\mmiset_ring.c 1736 PlayRing
MS_MMI\source\mmi_app\app\setting\c\mmiset_ring.c 5377 MMIAPISET_PreviewRing
MS_MMI\source\mmi_app\app\setting\c\mmiset_ring.c 1391 PlayFixedRing
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 4102	Save
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3993	换TYPE
//	MMIAPISET_SetCurRingType
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6456   KEY_ID
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 6432	WIN_ID
//	ring id:
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 5084    GetRingID



//vib--one
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1403	  --vib
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3915	  --timer


//env main
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c  1395
//vib list
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6398
	


//play--type
MMIENVSET_PlayRingByListItem
//play--vib
MMIENVSET_PlayMsgAlarmRingByListItem
//play--tone
MMIAPISET_PlayCallRingByVol


//vol--alert
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 822
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 8886

//call type
//msg type
//keypad 
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3695
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3966 


//call ring1
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 608
//call ring2 --ring
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 924
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 988 ++vol


//msg ring
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 322
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 812

//keypad 
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 4148
	

//vol
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 4909

MMK_CreateWin



// bak--不用
//env main
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c MMIENVSET_MAIN_MENU_WIN_TAB
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1910 handle


//opt
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1400
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1480


//	set edit
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 2862


//	nv
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6730
// item
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 3300
// def nv
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 1680


project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_CALL_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_MSG_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_OTHER_RING1



[2.25] 






[2.26] res
	
head:res,mmi_res_prj_def.h
item:res,mmi_res_prj_def.h


[2.27] 


[2.28] sos
// sos--
MS_MMI\source\mmi_app\app\setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg


// 亲情号码
MS_MMI\source\mmi_app\app\cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// 亲情号码--编辑
MS_MMI\source\mmi_app\app\cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// 亲情号码--编辑--num
MS_MMI\source\mmi_app\app\cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg










[2.29] startup
// Start
MS_MMI\source\mmi_app\app\phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow





[2.30] 
	







