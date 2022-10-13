
//目录
Save:node\C\study\Macro_gui_8910.h  \[1.1\] display str
Save:node\C\study\Macro_gui_8910.h  \[1.2\] softkey
Save:node\C\study\Macro_gui_8910.h  \[1.3\] draw ---------------画图
Save:node\C\study\Macro_gui_8910.h  \[1.4\] statusbar, change----
Save:node\C\study\Macro_gui_8910.h  \[1.5\] theme
Save:node\C\study\Macro_gui_8910.h  \[1.6\] pubWin, Alert
Save:node\C\study\Macro_gui_8910.h  \[1.7\] form----------------
Save:node\C\study\Macro_gui_8910.h  \[1.8\] rect
Save:node\C\study\Macro_gui_8910.h  \[1.9\] timer
Save:node\C\study\Macro_gui_8910.h  \[1.10\] option
Save:node\C\study\Macro_gui_8910.h  \[1.11\] onoff
Save:node\C\study\Macro_gui_8910.h  \[1.12\] title, tab
Save:node\C\study\Macro_gui_8910.h  \[1.13\] anim --------------所有Construct
Save:node\C\study\Macro_gui_8910.h  \[1.14\] tmp ---------------
Save:node\C\study\Macro_gui_8910.h  \[1.15\] layer
Save:node\C\study\Macro_gui_8910.h  \[1.16\] vol
Save:node\C\study\Macro_gui_8910.h  \[1.17\] key
Save:node\C\study\Macro_gui_8910.h  \[1.18\] Lcd
Save:node\C\study\Macro_gui_8910.h  \[1.19\] sublcd
Save:node\C\study\Macro_gui_8910.h  \[1.20\] font
Save:node\C\study\Macro_gui_8910.h  \[1.21\] list---------------
Save:node\C\study\Macro_gui_8910.h  \[1.22\] height-------------滚动条
Save:node\C\study\Macro_gui_8910.h  \[1.23\] edit, im, pen, cursor
Save:node\C\study\Macro_gui_8910.h  \[1.24\] color--------------属性
Save:node\C\study\Macro_gui_8910.h  \[1.25\] label--------------
Save:node\C\study\Macro_gui_8910.h  \[1.26\] text---------------
Save:node\C\study\Macro_gui_8910.h  \[1.27\] prgbox-------------进度条
Save:node\C\study\Macro_gui_8910.h  \[1.28\] menu
Save:node\C\study\Macro_gui_8910.h  \[1.29\] owndraw------------
Save:node\C\study\Macro_gui_8910.h  \[1.30\]



[1.1] display str
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

// --Height
// GetFontHeight

// GUIRES_DisplayImg


[1.2] Softkey

// 中间softkey
gui:win/c/guiwin.c  GUIWIN_SeSoftkeytButtonIconId
//	#if defined (MAINLCD_SIZE_128X128) //中间softkey显示黑色
//	if(button_num == 1) {
//	}
//	else
//	#endif

// 中间softkey
gui:win/c/guiwin.c  GUIWIN_SeSoftkeytButtonTextId
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


// call--softkey--btn
//		==>MMICC_DrawBottomButtonCtrl
//		====>CC_UpdateLRButton
//		======>SetConectedWinLeftSoftkey
//		========>GUISTR_DrawTextToLCDInRect



//softkey--rect/draw
//		==>...
//		====>MMITHEME_GetSoftKeyTextFont
//		==>ParseWinTab
//		====>DrawAllButtons
//		======>ConstructObject
//		========>GUISOFTKEY_Init  # set Font
//		==>DrawSoftkey
//		====>CalSoftkeyRect       # 字体微调 rect 
//		====>DrawAllButtons
//		======>DrawButtonText     # 自动用小字体
ctrl:Softkey/c/ctrlsoftkey.c  void^CalSoftkeyRect
//softkey--字体写死
ctrl:Button\c\ctrlbutton.c  SOFTKEY_FONT_SIZE_ADAPT_MODE
ctrl:Softkey\c\ctrlsoftkey.c  SOFTKEY_FONT_SIZE_ADAPT_MODE
//softkey--mainmenu--rect
app:mainmenu\c\mmi_mainmenu_matrix.c  void^MatrixMenuCreateButton




### softkey
//  ==>pos
Save:node\C\study\Macro_pos_8910.h  MMI_FULLSCREEN_SOFTKEY_BAR_HEIGHT
//  ==>color
Save:node\C\study\Macro_res_color_8910.h  __softkey__



// type
source:mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetTextId
source:mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetButtonTextId
source:mmi_gui\include\guisoftkey.h  GUISOFTKEY_SetButtonIconId


// bg
app:theme\c\mmitheme_softkey.c  MMITHEME_GetSoftkeyStyle


//常见修改
source:mmi_app\common\c\mmi_setlist_win.c TXT_COMMON_OK
app:theme\c\mmitheme_list.c TXT_COMMON_OK


// 软键
gui:win\c\Guiwin.c  GUIWIN_SetSoftkeyTextId    8


// param
//	ctrl_id = ((MMI_NOTIFY_T*) param)->src_id;
//	MMICOMMON_BUTTON_SOFTKEY_LEFT_CTRL_ID
//	MMICOMMON_BUTTON_SOFTKEY_RIGHT_CTRL_ID


//softkey
//GUILIST_SetOwnSofterKey( ctrl_id, TRUE );


	
[1.3] draw
// 点：
//	LCD_FillCircle
// 线：
//	LCD_DrawLine / LCD_DrawThickLine
// 矩形：
//	LCD_FillRect / LCD_DrawRect / GUI_FillRect
// 圆：
//	LCD_FillCircle / LCD_DrawCircle
// 矩形圆：
// LCD_FillRoundedRect

// 找不到func用这个查坐标:
//	ConvertDispRect



[1.4] statusbar, change
// --statusbar--init--8910/107
//		==>APP_Init
//		====>MMIAPIIDLE_init
//		======>MMIAPICOM_StatusAreaInit
//		========>SetStatusAreaInfo                 # for--pos
app:idle/c/mainapp.c  MMIAPICOM_StatusAreaInit
//		====>SetStatusBarInfo
//		======>GUIWIN_AppendStbItemData
//		======>MMIIDLE_SetSimStatusBarInfo
//		========>CTRLSTBDATA_SetItemVisible
//		====>HandleNetworkStatusInd
//		======>SetGprsInfo                         # sim icon
//		======>MAIN_SetIdleRoamingState            # sim icon
//		======>MMIAPICOM_StatusAreaSetVolteState   # sim icon
//		====>MMIPHONE_HandleNetworkInfoInd
//		======>MMIIDLE_SetSimStatusBarInfo         # sim icon
app:idle/c/mainapp.c  MMIDILE_StatusBarInit
// --statusbar--init--other (__bt_bar__)
//		====>MMIIDLE_InitWinInfo
//		======>.bluetooth_state = 3; (修改开机状态栏不显示蓝牙)
//		====>MMIAPIBT_AppInit
//		======>MMIBT_GetBtStatusForIcon
//		======>MMIAPICOM_StatusAreaSetBTStateWhenPoweron         # state=0
//		====>AppHandleBTMsg
//		======>BT_CNF: (on/off)
//		======>MMIBT_GetBtOnOffCnf
//		========>MMIBT_UpdateBtIdleIcon
//		==========>MMIAPICOM_StatusAreaSetBTStateWhenPoweron     # state=0
//		====>lock/LOSE_FOCUS:
//		======>MMIAPICOM_StatusAreaWithheaderSet


//动态创建状态条:
SBD_MMI_DIALWIN_HAS_STATUSBAR
//		==>MMK_IsWinIncludeStatusbar
//		==>MMK_CreateDefaultControl
//		====>
//		======>


// --statusbar--Update
//		==>GUIWIN_UpdateStb
//		====>CTRLSTATUSBAR_UpdateCtrl
//		======>RefreshStatusBar
//		========>DrawStatusBarCtrl
// --statusbar--bg
//		==>StatusbarCtrlHandleMsg
//		====>DrawStatusBarBg
//		======>DrawStatusBarBgExt
//		====>DrawStatusBarAllItem
//		======>
ctrl:Statusbar\c\ctrlstatusbar.c  BOOLEAN^DrawStatusBarBg
// 黑色背景重叠需加:
//  GUIWIN_SetStbState(win_id, GUISTATUSBAR_STATE_USE_LAYER, TRUE);

## icon test:
//    GUIWIN_SetStbItemIconId(MMI_WIN_ICON_VOLTE, IMAGE_PRIMO_STATUS_VOLTE);
//    GUIWIN_SetStbItemVisible(MMI_WIN_ICON_VOLTE, FALSE);
//    GUIWIN_UpdateStb();


### dial status
// MSG_APP_BACKWARD/MSG_APP_FORWARD
// MSG_APP_SMS
app:idle\c\mmiidle_dial.c  HandleDialWinMsg


// sim--刷新
source:mmi_app\common\c\mmicom_statusarea.c  void^StatusAreaSetSimInfo
source:mmi_app\common\h\mmicom_statusarea.h  MMICOM_WIN_ICON_E
app:idle\h\mmiidle_statusbar.h  MMI_WIN_ICON_E

// idle
// 电量--刷新
app:idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleChargeState
// 电量--Level
app:idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleBatLevel
// 电量--Level2
app:idle\c\mmiidle_statusbar.c   void^MAIN_SetIdleDbatLevel
//
//    MMIAPICOM_StatusAreaSetBatLevel(bat_level);


// 电量--5格
//		==>calc
app:phone/c/mmiphone_charge.c  uint8^MMIAPIPHONE_GetBatCapacity
//		==>动画calc //no use
app:phone/h/mmiphone_charge.h  PHONE_RX_BAT_DEFAULT_LEVEL
app:phone/h/mmiphone_export.h  PHONE_RX_BAT_LEVEL_SPAN
//		==>动画图标
app:idle/c/mmiidle_statusbar.c  charge_icon_id\[5\]
app:setting/c/mmiset_phonewin.c  icon_array\[5\]
source:mmi_kernel/include/mmitheme_statusbar.h  MMISTATUSBAR_ITEM_ICON_FRAME
source:mmi_app/common/h/common_mdu_def.h  IMAGE_IDLE_TITLE_ICON_BATTERY6
//		==>3.5V低电量msg
chip_drv/source/prj_win/charge.c  void^send_msg_to_client




// set
// set--电量--刷新
app:setting\c\mmiset_phonewin.c  void^UpdateStatusBar


// 电量--service
source:mmi_app\kernel\c\mmimain.c  CHR_SERVICE
source:mmi_app\kernel\c\mmimain.c  void^ChargeCallBackFunc
// 电量--msg
app:phone\c\mmiphone.c  void^HandlePsAndRefMsg
app:phone\c\mmiphone_charge.c   MMI_RESULT_E^MMIPHONE_ChargeHandlePsAndRefMsg


// ps--open
app:setting\c\mmiset_phonewin.c   void^MMIAPISET_OpenPowerSettingMode
app:phone\c\mmiphone_charge.c   920
// ps--close
app:setting\c\mmiset_phonewin.c   void^MMIAPISET_SetPowerSavingSetting
app:phone\c\mmiphone_charge.c   887
//            power_sav_setting.is_active = FALSE;
//            MMIAPISET_SetPowerSavingSetting(power_sav_setting);
//            MMIAPIENVSET_ResetActModeOtherRingSet();


// 信号
//		==>HandlePsAndRefMsg
app:phone\c\mmiphone.c  case^APP_MN_SCELL_RSSI_IND
//		HandlePsAndRefMsg:receive APP_MN_SCELL_RSSI_IND                                                                                                                 	                                                                	0:23:04.414  	
//		ipc hisr, status: 0x2,32K:0x2b4351b                                                                                                                             	                                                                	0:23:04.414  	
//		[MMIPHONE_GetRSSIMap] dual_sys[0] rxlev[10] rat[1]                                                                                                              	                                                                	0:23:04.414  	
//		[HandleScellRssiInd] line[7228] rxLevel[1]                                                                                                                      	                                                                	0:23:04.414  	
//		NotifyRxLevelChange rx_level=1, s_notify_rx_level=1, PlmnStatus=3   


[1.5] Theme
// 
app:theme/c/mmitheme_list.c  4343


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
app:theme\c\mmitheme_list.c   s_item_style_no_initialtext_text_and_text_with_mask_ms 
app:theme\c\mmitheme_list.c   s_item_style_no_bigicon_text_and_text_with_mask_ms
// cc---紧急拨号字体
app:theme\c\mmitheme_list.c   s_item_style_2_text_text
// ff---video delete 
app:theme\c\mmitheme_list.c   s_item_style_multi_choice_picker_two_line_bigicon_text_and_text
// sms----未读/已读-短信
app:theme\c\mmitheme_list.c   s_item_style_2_2text_and_text_icon_ms
// cl---通话记录
app:theme\c\mmitheme_list.c   s_item_style_2_text_icon_and_text_ms


// ctrl--type
TYPEMNG_IsTypeOf






[1.6] pubWin  Alert
//OpenAlertWin

// 去icon
source:mmi_app\common\c\mmi_pubwin.c  5882

// 去 softkey
source:mmi_app\common\c\mmi_pubwin.c  void^MMIPUBCreatSoftkeyCtrl
//    if(MMIPUB_SOFTKEY_NONE == win_info_ptr->softkey_style)
//    {
//        return;
//    }

// 居中bg
source:mmi_app\common\c\mmi_pubwin.c  bg_rect.bottom^=
//	#if !defined (MAINLCD_SIZE_128X128) //pubwin居中
//		bg_rect.bottom = bg_rect.bottom -(bg_rect.bottom - inter_bg_rect.bottom);
//	#endif



### pubWin
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __pubWin__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __pubWin__


// --pubwin--Tips (提示)
//		==========>DisplayTipsPtr
//		==========>MMITHEME_GetTipsStrInfo
// --pubwin--alert (Lock)
//		==>MMIPUB_OpenAlertWinByTextId
//		====>MMIPUB_OpenAlertWinByTextIdEx
//		======>OpenAlertWin                 # func, font_color
//		==>HandleLockPopWinMsg
//		====>PAINT:
//		====>MMIPUB_HandleAlertWinMsg
//		======>MMIPUBHandleWinMsg
//		========>MMIPUBLayout
//		========>MMIPUBDisplayWin
//		==========>DisplayPubWinBg
//		==========>.anim_id
//		==========>DisplayPubWinText
//		==========>DisplayPubWinAnim
//		============>
// --pubWin--progress (pb--del)
//		==>MMIPUB_HandleProgressWinMsg
//		====>DisplayProgressWin              # PAINT
//		======>DisplayPubWinText
//		======>DisplayProgressText
//		========>MMIPUB_PROGRESS_TEXT_RIGHT  #
//		====>MMIPUB_UpdateProgressBarEx
// --pubwin--wait (bt)
//		==>MMIBT_OpenBluetooth();
//		====>STR_NOTE_WAITING
//		==>MMIPUB_OpenWaitWin(1,);
//		====>OpenWaitWin                     # func
//		======>
//		==>HandlePubwinWaitingMsg()
//		====>MMIPUB_HandleWaitWinMsg
//		======>MMIPUBHandleWinMsg
//		======>PAINT:
//		====>UpdatePubwinScreen
// --pubwin--wait (fm)
//		==>MMIPUB_OpenAlertWarningWin(TXT);
//		====>MMIPUB_OpenAlertWinByTextId
//		======>MMIPUB_OpenAlertWinByTextIdEx
//		========>OpenAlertWin
//		======>DisplayPubWinText
//		==>HandleDefaultWinMsg(MMIPUB_WAIT_ANIM_CTRL_ID)
//		======>
//		========>
//		==========>
// --pubwin--alarm
//		====>DisplayAlarmDialogWin
//		======>
//		========>
//		==========>
// --pubwin--psw (bt 8910)
//		==>bt msg:
//		==>DoOperation
//		====>MMIBT_CreatePinInputWin
//		======>OpenPinInputWin();                       # no use, 输入密码
//		========>MMIPUB_OpenDialogPasswordWinByTextPtr
//		==========>OpenDialogInputFieldWin              # create input, ctrl id
//		============>GUIEDIT_TYPE_PASSWORD
//		============>MMK_CreateControl
//		==============>MMITHEME_GetPubTheme             # theme bg
//		==============>MMITHEME_GetPswEditTheme
//		==============>MMITHEME_GetPwDisplayTheme       # theme color
//		==========>MMIPUB_HandleDialogInputFieldWinMsg
//		========>PswEditCtrlConstruct                   # 单独修改 font color
//		==========>MMITHEME_GetPwDisplayFontFromCtrl (&baseedit_ctrl_ptr->common_theme, base_ctrl_ptr->ctrl_id);
//		==========>MMIPUB_INPUTFIELD_CTRL_ID
//		============>
//		====>MMIBT_GetInputPinReq                       # 本机请求
//		==>Display_NumericPasskeyInfo                   # 无密码显示
// --pubwin--psw (bt 107)
//		======>OpenPinInputWin();                       # no pop
//		========>MMK_CreatePubEditWin
//		==========>CreateEditPasswordCtrl
//		============>ConstructObject
//		==============>PswEditCtrlConstruct
//		================>MMITHEME_GetPswEditTheme       # bg color(反了)
//		================>MMITHEME_GetPwDisplayTheme
//		==================>
//		==>HandlePinInputWinMsg                         # msg, ctrl id
//		====>CTRLBASEEDIT_SetBgColor                    # 单独修改 bg color
//		====>GUIEDIT_SetFontColor                       # 单独修改 font color
// --pubwin--send (bt 8910)
//		==>bt msg:
//		==>DoOperation
//		====>SEND:
//		======>MMIPUB_OpenProgressWaitingIndWinByTextPtr   # 进度条
// --pubwin--rec (bt 8910)
//		==>"正在接收文件..." / STR_BT_WAIT_RECEIVE	
//		==>"全部完成！文件已接收。" / STR_BT_RECEIVE_SUCCESS	
//		==>"此存储空间已满..." / TXT_CMSBRW_UDISK_FULL_CHANGE_STORE		
//		==>"正在连接至..." / STR_BT_CONNECTING_TO_EXT01		
//		==>"已断开。音频已切换至手机。" / STR_BT_AUDIO_PHONE




//测试Alert：
//	MMIAPICL_OpenCallsListWindow(MMICL_CALL_DIALED);
//	
//	Layout
source:mmi_app\common\c\mmi_pubwin.c void^MMIPUBLayout
source:mmi_app\common\c\mmi_pubwin.c 4097
source:mmi_app\common\c\mmi_pubwin.c 4120
source:mmi_app\common\c\mmi_pubwin.c 4193 bg_rect
source:mmi_app\common\c\mmi_pubwin.c 4224 alert_rect
source:mmi_app\common\c\mmi_pubwin.c 4263 title_rect

//
//关闭询问窗口
//MMIPUB_CloseQuerytWin(PNULL);
//关闭密码错误提示
//MMIPUB_CloseAlertWin();


// 去掉softkey
//MMIPUB_SOFTKEY_CUSTOMER  MMIPUB_SOFTKEY_ONE




// pop--格式化
app:fmm/c/mmifmm_sd.c  MMIPUB_OpenProgressWinByTextId  MMIPUB_SOFTKEY_ONE
// pop--连接管理--数据漫游
app:connection/c/mmiconn_manager_wintab.c



[1.7] form
//form pos
//	GUIFORM_GetDisplayMaxWidth

// --form--layout  (pos)
//		==>CTRLFORM_Layout
//		====>CTRLFORM_CalcAllChild              # while
//		======>CalculateChildHeight
//		========>label:
//		==========>LabelCtrlGetHeightByWidth
//		==========>CTRLLABEL_SetMargin
//		========>edit:
//		==========>EditCtrlGetHeightByWidth
//		==========>BaseEditCtrlGetHeightByWidth
//		============>BASEEDIT_EXTRA_AREA            # alarm--editName2--H
//		========>list:
//		==========>GetSetListHeight
//		========>btn:
//		==========>ButtonCtrlGetHeightByWidth
//		============>
// --form--edit  (pos) (画边框前)
//		====>BASEEDIT_GetClientRect
//		======>!time_def: (未使用...)
//		========>edit_rect
//		==========> +28 +30
//		======>time_def__DYN_name:                   # alarm--editName2--Top (单行)
//		========>edit_rect
//		==========> +font +Bottom
//		======>time_def__DYN_null:                   # pb--edit, sos--edit (单行)
//		========>edit_rect
//		==========> +border -border                  # --边框高度，距标题高度
//		============>
//		======>time_def__other:                      # 修改全屏 edit 边框
//		============>
ctrl:editbox/c/ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
// --form--edit--display  (im,pen) (font)
//		==>BaseFlexCtrlDisplayAll
//		====>BASEEDIT_DisplayEditExtraArea           # label_1
//		======>font: 26
//		======>color_active:
//		========>theme:
//		========>!theme: #64608
//		======>color_!active:
//		========>theme:
//		========>!theme: .common_theme.non_focused_color    # #ffff
//		======>(双行):
//		========>label_name:                            # label_1 (焦点)
//		============>+top, +font                        # alarm--editName1--H (pos)
//		============>(焦点) #64608
//		============>(非焦点--多层) UILAYER_SetLayerAlpha(135) #ffff
//		======>(单行) im/pen :
ctrl:editbox/c/ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea
//		====>DisplayTextString                        # edtext_2
//		======>color: (cur_str)
//		========>.common_theme.font.color             # #ffff
//		======>color: (default_str)
//		========>.flex_theme.default_str_color        # #33808
//		==========>
ctrl:editbox\c\ctrlbaseflex_display.c   void^DisplayTextString
// --form--edit--im/pen--display  (font)
//		====>DisplayTitleSubText
//		======>title_ptr->sub_font
ctrl:Title\c\ctrltitle.c  void^DisplayTitleSubText

// --form--edit--label--display
//		==>.is_active
//		==>MMITHEME_GetAccentId
//		====>MMITHEME_InitAccentId
//		==>BaseFlexCtrlDisplayAll
//		====>GUI_DisplayBorder
//		==>.name.height
//		====>.alarm--editName2, BASEEDIT_EXTRA_AREA
ctrl:editbox\c\ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea


### CHILD_EDIT_TEXT (sms--edit text)
//		==>BASEFLEX_AddString
//		====>BASEFLEX_UpdateDisplay
//		======>PART:
//		======>DisplayPart
//		====>GUI_DisplayBorder

//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>
//		================>BASEEDIT_UpdateTextBg
//		==================>BASEEDIT_DisplayBg     # 画2~3行背景,从上一行开始
//		==================>BASEEDIT_GetLineRect   # 画线, h=1
//		====================>line_height = 
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __EditSms__


### CHILD_LIST (color)
// alarm--repeat/ring/snooze
//		==>ListDrawString
//		====>ListGetTextStyle
//		======>str_style_ptr->font_color
//		========>LIST_GetItemContentTextColor
//		==========>GUIITEM_THEME_STATE_FOCUS
//		==========>THEMELIST_GetContentTextColor    #区分焦点
//		==========>MMI_WHITE_COLOR

### CHILD_EDIT_TEXT (alarm--edit Name)
//		==>BASEEDIT_DisplayEditExtraArea


### CHILD_EDIT_TEXT (browser--edit page) (color)
//		==>MMITHEME_GetTextDisplayTheme
//		====>.bg.color       # w
//		==>BaseFlexCtrlDisplayAll
//		====>BASEEDIT_DisplayBg
//		======>GUISTR_DrawTextToLCDInRect
//		====>GUI_DisplayBorder

### CHILD_EDIT_TEXT (sos--edit sms) (style2)
//		==>BaseFlexCtrlDisplayAll
//		====>BASEEDIT_DisplayBg
//		======>GUISTR_DrawTextToLCDInRect
//		====>BASEEDIT_DisplayThemeLine
//		======>line_color = MMITHEME_OFFSET_COLOR_DEFAULT
//		======>height = 3

//		==>CTRLBASEFLEX_SetThemeLine  # 未设置
//		======>.is_themeline_set
//		====>MMITHEME_GetAccentColor(MMITHEME_GetAccentId(),MMITHEME_OFFSET_COLOR_DEFAULT)
//		======>s_theme_accent_color_array
//		========>GUI_RGB2RGB565(0xff, 0x8c, 0x00)
//		==========>

//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>
//		================>
//		==================>


### CHILD_BTN (draw)
//		====>CTRLFORM_Layout
//		======>LayoutAllChildCtrl
//		========>CTRLFORM_CalcAllChild
//		==========>GetAllChildSpace                 # 3btn 2space
//		==========>CalculateChildWidthHeight
//		============>all_child_width = 61           # 有1个空ctrl
//		============>all_space       = 64           # hor_space*2
//		============>sbs_width       = 125
//		========>AdjustFormRelativeRect
//		==========>ModifyPosByAlign                 # 第1个ctrl,left-1, 更新 relative_rect.right
//		========>GetChildRelativeRect
//		==========>GetChildRelativeLeft
//		============>.relative_rect.right           # 
//		==>ButtonCtrlHandleMsg
//		====>PAINT:
//		====>ButtonDraw
//		=====>ButtonDrawBg
//		=====>ButtonDrawFg
//		=======>.fg_display_x
//		=======>.rect
//		=======>GUIRES_DisplayImg



// form--Calculate (抓断点)
ctrl:Form\c\ctrlform_calc.c  690
//	if(17 == child_ptr->height || 20 < child_ptr->height && 35> child_ptr->height) 
//	{
//		int a = child_ptr->height;
//		a += 0;
//		a += 0;
//	}



// --form--func
//		==>update unit form and all child
//		====>GUIFROM_Display(FALSE,TRUE,form_ctrl_ptr);
//		==>set child rect
//		====>GUIFORM_SetChildRect(TRUE,form_ctrl_ptr);
//		==>
//		====>CTRLFORM_SetChildSpace
//		==>FONT/COLOR
//		====>CTRLFORM_SetChildTheme(MMISET_SOS_MSG_CONTENT_EDIT_CTRL_ID, PNULL, PNULL, &FONT_ALL1);




### form
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __form__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __form__


[1.8] Rect
//
//MMITHEME_GetFullScreenBothRect
////
//MMITHEME_GetStatusBarHeight



[1.9] 


[1.10] option

// sel--sim
app:cc\c\mmicc_wintab_custom.c  MMI_RESULT_E^HandleCallSIMSelectWinMsg



[1.11] onoff

### __SECOND_LOGO__
// 
MS_Customize/source/common/prod_param.c   white
app:envset/c/mmienvset.c
app:parse/c/mmiparse_dial.c
app:phone/c/mmiphone.c
app:phone/c/mmiphone_onoff.c    MMI_POWER_TIME_8S
app:setting/c/mmiset_display.c
app:setting/c/mmiset_nv.c
app:setting/c/mmiset_ring.c
app:setting/h/mmiset_export.h
app:setting/h/mmiset_nv.h
source:mmi_app/common/h/common_mdu_def.h
source:resource/mmi_res_prj_def.h
common/export/inc/nv_item_id.h
source:mmi_app/kernel/c/mmimain.c  SECOND_LOGO
source:mmi_app/kernel/c/mmimain.c  InitMMIModule



//
app:phone/c/mmiphone_onoff.c  MMISET_RING_TYPE_POWER
//
source:resource/mmi_res_prj_def.h R_POWER_1

// off
app:phone/c/mmiphone_onoff.c  MMI_RESULT_E^HandlePowerOffWindow
// on
app:phone/c/mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow




[1.12] title, tab
// title bg:

// 标题
//		==>MMITHEME_GetTitleStyle
//		====>MMI_TITLE_TEXT_FONT             # --w big 30
//		==>DisplayTitle
//		====>DisplayTitleBg
//		====>DisplayScrollTitleByOffset
//		======>title_ptr->str_style.font
gui:title\c\Guititle.c  DisplayTitle( )
// 标题--滚动
//		====>StartTitleScrollTimer
//		======>HandleWinTitleTimerMsg
//		========>HandleWinTitleTimerAsPixelMsg
//		==========>DisplayScrollTitleByOffset
//		============>DisplayTitleTextBg        #未画背景


### tab
// tab--不画标题
//		==> 同时修改 MMI_TAB_HEIGHT
app:sms/c/mmisms_messageboxwin.c  MMISMS_MSGBOX_MAIN_WIN_TAB
app:sms\c\mmismsapp_wintab.c MMISMS_MSGBOX_MAIN_WIN_TAB
//     CREATE_TAB_CTRL(.., GUITAB_STATE_NONEED_SCROLL | GUITAB_STATE_SINGLE_LINE, ..),
//
app:cl\c\Mmicl_wintab.c   MMICL_LOG_LIST_WIN_TAB
//
app:pb\c\mmipb_view.c  MMIPB_MAIN_WIN_TAB
// --未验证
app:browser\c\mmibrowser_wintable.c  MMIBROWSER_BK_AND_HISTORY_WIN_TAB
//
app:fmm\c\mmifmm_interface.c  MMIFMM_OPENFILE_WIN_TAB
app:fmm\c\mmifmm_mainwin.c  MMIFMM_MAIN_WIN_TAB
//
app:sms\c\mmisms_settingwin.c  MMISMS_SETTINGS_TAB_WIN_TAB
//
app:videoplayer\c\mmivp_wintable.c  MMIVP_LOCALLIST_WIN_TAB


### tab
//  ==>pos
Save:node\C\study\Macro_pos_8910.h   __tab__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __tab__
Save:node\C\study\Macro_res_image_8910.h  __title__



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
app:idle/c/mainapp.c  MAINMENU_REMOVE_KEY0_STAR_HASH_DIAL
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
app:idle\c\mmiidle_mstyle.c  4489
app:idle\c\mmiidle_mstyle.c  case^MSG_KEYUP_0
// 107
app:idle\c\mainapp.c  case^MSG_KEYDOWN_1
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
source:mmi_app\common\c\mmicom_statusarea.c  1307



// sim ch
source:mmi_app\common\c\mmi_multi_variant.c  442
//	#ifdef WIN32
//	    return 1;  //china
//	#else
//	    return emergency_config;
//	#endif




// rect
source:mmi_gui\source\graph\c\guigraph.c  2908
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



[1.16] __vol__

// vol
//		==>InitDisplayPosition
//		==>DrawControlPanel
source:mmi_app\common\c\mmicom_panel.c HandlePanelWindow
// res
Save:node\C\study\Macro_res_image_8910.h  __alert__

// 合盖 vol
source:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultSideKey




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
// Bat
//		==>MMIAPIPHONE_GetBatCapacity
app:idle\c\mmi_subwintab.c  uint8^MMISUB_GetBatteryLevel
// sim
app:idle\c\mmi_subwintab.c  void^DisplaySubLcdIconOneLine
// show(mp3,fm,sms,call)
app:idle\c\mmi_subwintab.c  void^MMISUB_UpdateDisplaySubLcd




[1.20] font
// font
source:mmi_service/export/inc/mmi_custom_define.h  MMI_DEFAULT_NORMAL_FONT


open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
source:resource\Common\FONT\LANG_FONT_LATIN_H9.lib
source:resource\Common\FONT\

// 输入法字体
app:theme/c/mmitheme_edit.c  theme_ptr->info_font

// set font
ctrl:editbox\c\ctrlbaseflex.c  BaseFlexCtrlSetFont


[1.21] list
// list--click
//		==>
// list--enter
//		==>GUILIST_AppendItem           # add
//		====>ConvertItem
//		======>SetItemStyle
//		========>THEMELIST_GetStyle     # pos style,  [6,23],  [5,53]
//		====>CTRLLIST_AppendItem        # new_item->style_ptr
//		======>LIST_ResetItemDisp       # pos set
//		========> + tag_width           # +34, 数字或check
ctrl:ListBox\c\ctrllist_item.c  LIST_ResetItemDisp
// list--theme, init
//		==>MMK_ParseWinTab
//		====>CreateListBoxCtrl             # list
//		======>ConstructObject
//		========>ListCtrlConstruct
//		==========>ListCtrlInit            # item
//		============>mark_left_margin      # --check pos1 [6,23] 
ctrl:ListBox\c\ctrllistbox.c  mark_left_margin
//		============>MMITHEME_GetListStyle
app:theme/c/mmitheme_list.c  tag_width     # --check pos2 [39,87], bug

// list--draw
//		==>ListCtrlHandleMsg                        # msg
//		====>ListHandleKeyDown
//		======>ListMoveToNextItem
//		========>ListDraw
//		==========>ListDrawAllItems
//		============>ListDrawItem                   # draw
//		==============>isNeedDrawListItemBG         # bg
//		==============>GUIITEM_STATE_DISABLE_MARK   # check
//		================>mark_left, tag_img_width   # --check pos1 [6,23]
//		==============>GUIITEM_STATE_HAS_NUM        # num
//		==========>ListDrawScrollBar
//		============>GUIPRGBOX_SetPosByPtr
//		==============>ProgressBarDraw
//		================>DisplayAutoHideScroll      # 超过15项画这个
//		================>.thumb_threshold = 5;      # 1页3项*5
ctrl:ListBox\c\ctrllistbox.c  GUIITEM_STATE_DISABLE_MARK


### list
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __list__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __list__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __list__


### list--add layout
// list--layout
app:theme\c\mmitheme_list.c  s_item_layout_1line_check_icon
app:theme\c\mmitheme_list.c  s_item_layout_1line_focus_check_icon
// layout id= 19 ~ 21
app:theme\c\mmitheme_list.c  &s_item_layout_1line_check
// reg id= 20 ~ 25(匹配id1)
app:theme\c\mmitheme_list.c  s_item_style_table 
// state id3= 20 ~ 25
//   custom+radio 一定要设置 GUIITEM_STYLE_STATE_RADIO
//	 MMITHEME_CustomListItemStyleReg(ctrl_id, &my_style, GUIITEM_STYLE_STATE_RADIO);
app:theme\c\mmitheme_list.c s_item_style_state_table
	



### list--set--add icon
//		==>HandleSetPhoneSettingWindow         # 240X320
//		==>HandleSetPhoneSettingWindow         # 128X128
//		====>InitPdaPhoneSettingsCtrl
//		======>AppendPdaPhoneSettingsItem1Line
app:setting/c/mmiset_phonewin.c  AppendPdaPhoneSettingsItem1Line
//
//	#if defined (MAINLCD_SIZE_128X128)
//		item_t.item_style = GUIITEM_STYLE_ONE_LINE_NUMBER_TEXT;
//	#else
//    	item_t.item_style    = GUIITEM_STYLE_ONE_LINE_TEXT;
//	#endif




[1.22] height

# 非form
// line
app:accessory/h/mmiacc_event.h  CHILD_FORM_BUTTON_HIGHT
app:theme/c/mmitheme_edit.c  MMITHEME_EDIT_MARGIN_TB_SPACE
app:theme/c/mmitheme_form.c  MMITHEME_FORM_PADDING
app:theme/c/mmitheme_label.c  MMITHEME_LABEL_MARGIN_TB_SPACE
// 
app:theme/c/mmitheme_richtext.c  RICHTEXT_TEXT_LINE_SPACE
// pos
Save:node\C\study\Macro_pos_8910.h  __height__


# form
ctrl:editbox\c\ctrlbaseflex_display.c  344
// 滚动条
source:mmi_kernel/include/mmitheme_pos.h  MMITHEME_SLIDEWIN_SCROLLBAR_WIDTH
app:theme\c\mmitheme_prgbox.c  MMITHEME_GetSlideScrollBarWidth
// form 滚动条
ctrl:Form\c\ctrlform.c  BOOLEAN^FormConstruct



//BASEEDIT_DisplayBg
//
//GUI_DisplayBorder
////
//电话本


[1.23] edit, im, pen, cursor
// --edit--func
//		==>
//		====>GUIEDIT_SetFont(ctrl_id, SONG_FONT_60);
//		==>禁用边框
//		====>GUIEDIT_PermitBorder(ctrl_id, FALSE);
//		==>禁用字体
//		====>CTRLFORM_PermitChildFont(MMISET_SOS_MSG_CONTENT_EDIT_CTRL_ID, is_Permit);
//		==>
//		====>//GUIEDIT_SetDispImIcon(ctrl_id,&is_disp_im_icon,&is_disp_num_info);
//		==>
//		====>GUIEDIT_SetStyle(ctrl_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);


// show
//		====>BASEEDIT_UpdateTextBg
//		======>common_theme.bg
//		====>DisplayTextString
//		======>common_theme.font.color


### EDIT_DATE
// --edit--calendar--time (full)
//		==>DateEditCtrlConstruct
//		====>MMITHEME_GetMsDateEditTheme
//		==>DateEditCtrlHandleMsg
//		====>BaseEditCtrlHandleMsg              # base
//		======>PAINT:
//		======>VTLBASEEDIT_DisplayAll
//		========>BaseFixedCtrlDisplayAll
//		==========>BASEEDIT_DisplayBg
//		==========>GUI_DisplayBorder
//		==========>BASEEDIT_DisplayHighlight
//		============>BASEEDIT_DisplayBg
//		============>DisplayHighlightAndStr
//		==============>BASEEDIT_GetTextRect     # [43,73]
//		==============>VTLBASEEDIT_GetAlign
//		================>.theme.align
//		==================>MMITHEME_GetMsDateEditTheme   # theme

### EDIT_TEXT
// --edit--memo

// --edit--pic--rename (more line)
//		==>BaseEditCtrlConstruct
//		====>MMITHEME_GetEditTheme
//		==>TextEditCtrlHandleMsg
//		====>BaseEditCtrlHandleMsg              # base
//		======>PAINT:
//		======>VTLBASEEDIT_DisplayAll
//		========>BaseFixedCtrlDisplayAll
//		==========>BASEEDIT_DisplayBg
//		==========>GUI_DisplayBorder
//		==========>BASEEDIT_DisplayHighlight
//		============>BASEEDIT_DisplayBg
//		============>DisplayHighlightAndStr
//		==============>BASEEDIT_GetTextRect     # [43,73]  (标题len少5)
//		==============>VTLBASEEDIT_GetAlign
//		================>BASEEDIT_UpdateTextBg
//		==>DisplayTextString
//		====>BASEEDIT_GetTextRect
//		======>BASEEDIT_GetLineRect   # 画线, (多行不带分隔线)
//		========>.edit_rect           # --[40,199]
//		========>.common_theme.font.color
// --edit--alarm--fm ring (标题len少5)


// 不显示 cursor
Save:node\C\study\Macro_fun_8910.h  __cursor__




### sms (im)
// 详细键值
Save:node\C\study\Macro_im_8910.h


### form (edit)
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __form2__




//特殊edit:
//工程模式--item9-2-5--黄色边框重叠(可不改)
//工程模式--item10-21--编辑线(可不改)
//工程模式--item11-1-1-1--进度条名称深色(可不改)
//工程模式--item22-2-1-1---编辑4角白点

### EDIT_DIGITAL (eng)
// MMK_CloseWin
//		==>MMITHEME_GetEditTheme
//		====>.bg.shape         = GUI_SHAPE_ROUNDED_RECT
//		====>换成：GUI_SHAPE_RECT不会有白底
//		==>HandleFreqEditBoxWinMsg



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


### form
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __form__



[1.25] label
//	--label
//CREATE_LABEL_CTRL(GUILABEL_ALIGN_LEFT, CTRL_ID),
//GUILABEL_SetText(MMIENG_UITEST_LABEL_CTRL_ID, &text, FALSE);

//	--label--alpha
//		====>CTRLLIST_SetItemContentOpacityFontColor
//		======>GUILABEL_TEXT_TRANS
//		========>alpha = 89
//	--label--draw
//		====>LabelDraw
//		======>LabelDrawBg
//		========>bg-custom
//		==========>CTRLLABEL_SetBg
//		============>bg-form
//		==========>LabelCtrlSetBg
//		============>CTRLFORM_PermitChildBg(MMIMP3_TITLE_FORM_CTRL_ID, FALSE);
//		======>LabelDrawString
ctrl:Label\c\ctrllabel.c  LabelDrawString


// label--FORM
app:theme\c\mmitheme_label.c  MMITHEME_GetLabelTheme



[1.26] text
// text
//CREATE_TEXT_CTRL(CTRL_ID),  

//
//GUITEXT_SetString(nodata_ctrl_id, str_label.wstr_ptr,str_label.wstr_len, FALSE);

//txt
//	GUISTR_DrawTextToLCDSingleLine
//	GUISTR_DrawTextToLCDInRect
//	GUISTR_DrawTextByOffset



### text
//  ==>pos
Save:node\C\study\Macro_pos_8910.h  __text__


[1.27] prgbox
// 进度条
//CREATE_PRGBOX_CTRL(GUIPRGBOX_STYLE_HORIZONTAL_PROCESS, CTRL_ID),


[1.28] menu
//
// menu--click
//		==>MainmenuCtrlHandleMsg              # mainmenu
//		====>MatrixMenuHandle                 # web
//		======>MatrixMenuHandleOkKey
//		========>MatrixMenuRunItem
//		==========>MMIMANMENU_EnterPlayer
// menu--enter (eng--net info)                # (static menu)
//		==>MMK_ParseWinTab
//		====>CreateMenuCtrl
//		======>ConstructObject
//		========>MenuConstruct
//		==========>InitStaticMenu
//		============>MMITHEME_GetSecondMenuTheme  # item
//		======>SwitchCtrlRect
//		========>MenuCtrlSetRect
//		==========>ModifyMenuRect
//		============>CTRLMENU_SecModifyRect
//		==============>CalculateSecItemRect   # pos
//		==>MenuHandleMsg
//		====>WEB:
//		====>HandleMenuOkKey
//		======>CTRLMENU_SecHandleOk
//		======>.is_exist_child
//		======>CTRLMENU_Draw
//		========>CTRLMENU_DrawSec
//		==========>DisplaySecMenuAllItem
// menu--enter (sms--switch)                  # (dyn menu)
//		==>CreateIMMenu
//		====>CTRLMENU_CreatDynamic
//		======>TYPEMNG_Init
//		========>ConstructObject
//		==========>MenuConstruct
//		============>InitDynamicMenu
//		==============>MMITHEME_GetPopMenuTheme
// menu--draw
//		==>MenuHandleMsg
//		====>HandleMenuPaint
//		======>CTRLMENU_Draw
//		========>CTRLMENU_DrawSec       # sec
//		==========>DisplaySecMenuAllItem
//		============>DisplayOneItem
//		==============>DisplayHighlightItemBg
//		==============>DisplaySecMenuItem
//		==>DisplaySecMenuItem
//		====>DisplaySecMenuItemIcon
//		====>DisplaySecMenuItemText
//		======>menu_ctrl_ptr->item_pos_info_ptr[item_index].item_rect
// menu--theme--height
app:theme\c\mmitheme_menu.c  MMITHEME_GetSecondMenuTheme


// popmenu--draw
//		==>Paint:
//		==>HandleMenuPaint
//		====>CTRLMENU_UpdatePrevPop(0,menu_ctrl_ptr);
//		======>CTRLMENU_Draw
//		========>CTRLMENU_DrawPop
//		==========>DisplayPopupMenu
app:theme\c\mmitheme_menu.c  MMITHEME_GetPopMenuTheme


### menu
//  ==>pos
Save:node\C\study\Macro_pos_8910.h  __menu__

// menuSec
//	DisplaySecMenuItemText	  7
//	DisplaySecMenuItem	   6
//	DisplayOneItem	   6
//	DisplaySecMenuAllItem	  6
//			DisplaySecosource:mmi_gui\source\menu\c\Guimenu.c 


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




