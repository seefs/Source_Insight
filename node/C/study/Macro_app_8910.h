
mmiPath = MS_MMI_Main\source\
mmi:\\

// 目录:
//	 2. 界面
Save:node\C\study\Macro_app_8910.h  \[1.1\] win fun.
Save:node\C\study\Macro_app_8910.h  \[1.2\] idle, lock
Save:node\C\study\Macro_app_8910.h  \[1.3\] menu, second
Save:node\C\study\Macro_app_8910.h  \[1.4\] dial
Save:node\C\study\Macro_app_8910.h  \[1.5\] test, version
Save:node\C\study\Macro_app_8910.h  \[1.6\] file
Save:node\C\study\Macro_app_8910.h  \[1.7\] setting
Save:node\C\study\Macro_app_8910.h  \[1.8\] sms -----------------
Save:node\C\study\Macro_app_8910.h  \[1.9\] call
Save:node\C\study\Macro_app_8910.h  \[1.10\] pb, cl
Save:node\C\study\Macro_app_8910.h  \[1.11\] camera -------------
Save:node\C\study\Macro_app_8910.h  \[1.12\] pic
Save:node\C\study\Macro_app_8910.h  \[1.13\] record
Save:node\C\study\Macro_app_8910.h  \[1.14\] fm
Save:node\C\study\Macro_app_8910.h  \[1.15\] fmm
Save:node\C\study\Macro_app_8910.h  \[1.16\] vp
Save:node\C\study\Macro_app_8910.h  \[1.17\] mp3
Save:node\C\study\Macro_app_8910.h  \[1.18\] alarm --------------
Save:node\C\study\Macro_app_8910.h  \[1.19\] calc
Save:node\C\study\Macro_app_8910.h  \[1.20\] calendar
Save:node\C\study\Macro_app_8910.h  \[1.21\] 单位转换
Save:node\C\study\Macro_app_8910.h  \[1.22\] 游戏 魔音
Save:node\C\study\Macro_app_8910.h  \[1.23\] bt
Save:node\C\study\Macro_app_8910.h  \[1.24\] env
Save:node\C\study\Macro_app_8910.h  \[1.25\] 
Save:node\C\study\Macro_app_8910.h  \[1.26\] 
Save:node\C\study\Macro_app_8910.h  \[1.27\] Browser 网络参数
Save:node\C\study\Macro_app_8910.h  \[1.28\] sos
Save:node\C\study\Macro_app_8910.h  \[1.29\] startup
Save:node\C\study\Macro_app_8910.h  \[1.30\]
	



[1.1] win fun.
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



[1.2] idle, lock
// open
mmi:mmi_app\app\idle\c\mainapp.c  MMIAPIIDLE_OpenIdleWin

// IDLE
mmi:mmi_app\app\idle\c\mmiidle_cstyle.c  void^OutIdleWinContent
mmi:mmi_app\app\idle\c\mmiidle_mstyle.c  void^OutIdleWinContent

// LOCK
mmi:mmi_app\app\keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg
// LOCK
mmi:mmi_app\app\keylock\c\mmikl_keylock.c  void^DisplayClockCallbackFun


// pos--date,week
mmi:mmi_app/app/theme/c/
mmi:mmi_app/app/theme/c/mmidisplay_data_128x128.c
mmi:mmi_app/app/theme/c/mmidisplay_data_176x220.c
// pos--time
mmi:mmi_app\app\idle\c\mmiidle_cstyle.c
mmi:mmi_app/app/theme/h/mmi_position.h  MMI_MAIN_TIME_Y
mmi:mmi_app/app/theme/h/mmi_position.h  IDLE_TIME_PIC_WIDTH





[1.3] menu, second
// index
mmi:mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
mmi:mmi_kernel/include/mmitheme_mainmenu.h  MAINLCD_SIZE_240X320
// bg rect
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  BOOLEAN^MatrixMenuGetTitleStyleInfo
// icon rect
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  HandleMatrixMenuGetIconRect
// draw
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  MMITHEME_DrawMainmenuItem
// title
mmi:mmi_service/export/inc/mmi_custom_define.h  MMISET_DEFAULT_MENU_STYLE_E
// menu softkey, prg
mmi:mmi_app/app/theme/c/mmitheme_mainmenu.c  is_has_button
mmi:mmi_app/app/mainmenu/c/mainmenu_win.c  MAINMENU_ICON_WIN_TAB
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  ->is_need_prgbox

// menu--one page
mmi:mmi_app\app\mainmenu\c\mainmenu_win.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE

// menu--main
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c s_mainmenu_item_data
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c 570
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_176x220.c s_mainmenu_item_data
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x320.c s_mainmenu_item_data
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x320.c MAINMENU_FLP_STYLE
mmi:mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x240.c s_mainmenu_item_data

// menu--main
mmi:mmi_app\app\mainmenu\c\mainmenu_win.c  HandleMainMenuWinMsg
// menu--second
mmi:mmi_app\app\mainmenu\c\mainmenu_win.c  HandleSecMenuStaticMsg
mmi:mmi_app\app\mainmenu\c\mainmenu_win.c  3353

// menu--tools
mmi:mmi_app\common\c\mmi_menutable_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_app\common\c\mmi_menutable_128x128.c GUIMENU_ITEM_T^menu_icon_tools
mmi:mmi_app\common\c\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_icon_tools
mmi:mmi_app\common\c\mmi_menutable_176x220.c GUIMENU_ITEM_T^menu_icon_tools
mmi:mmi_app\common\c\mmi_menutable_240x320.c GUIMENU_ITEM_T^menu_icon_tools

// menu--palyer
mmi:mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_icon_player
mmi:mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_icon_player
mmi:mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_icon_player

// menu--settings
mmi:mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_settings_icon
mmi:mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_settings_icon
mmi:mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_settings_icon
// menu--settings(107)
mmi:mmi_app\app\setting\c\mmiset_menutable.c  GUIMENU_ITEM_T^menu_set_phone


// menu img
mmi:mmi_ctrl\source\Menu\c\ctrlmenu_popup.c  check_unsel_img
mmi:mmi_ctrl\source\Menu\c\ctrlmenu_sec.c   check_unsel_img


//tone


[1.4] dial
// Open
mmi:mmi_app\app\idle\c\mmiidle_mstyle.c  MMIAPIIDLE_OpenDialWin
// dial
mmi:mmi_app\app\idle\c\mmiidle_dial.c  MMIAPIIDLE_EditDialWin
mmi:mmi_app\app\idle\c\mmiidle_dial.c  HandleDialWinMsg


// display--分行--平均行间距 
mmi:mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  void^DisplayTextString
mmi:mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  BIG_DIAL_NUM
// display--分行--取消底部间距，相差1个像素刚好对齐
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  976
// display--分行--拨号不计算行间距
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  uint16^BASEEDIT_GetLineHeight
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1023
// display--分行--拨号位置不下移
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetLineRect
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1270
// display--分行--超位置
mmi:mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  BASEEDIT_GetTopLineOffsetRange



// 智能拨号
mmi:mmi_app\app\idle\c\mmiidle_dial.c  HandleDialWinMsg
mmi:mmi_app\app\idle\c\mmiidle_dial.c  MMIAPIIDLE_SwitchEditDialWin
// icon
mmi:mmi_kernel\include\mmi_theme.h  BIG_DIAL_NUM

// 拨号光标
mmi:mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  void^BASEFLEX_DisplayCursor
// 拨号光标--set
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_highlight.c   void^BaseEditCtrlSetHighlight
// display--align
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit.c  CTRLBASEEDIT_SetAlign
// display--bg
mmi:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  BASEEDIT_DisplayBg



[1.5] test
// test code
mmi:mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
mmi:mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenItemTestWin
mmi:mmi_app/app/eng/c/mmieng_main.c  MMIAPIENG_StartEngineerMenu

// version
mmi:mmi_app/app/eng/c/mmieng_uitestwin.c  ID_ENG_TEST_SW_VERSION
// imei
mmi:mmi_app\app\parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr
// 		MMIAPIPHONE_OpenIMEIDisplayWin();

// Parse
mmi:mmi_app\app\idle\c\mmiidle_dial.c  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM




// version
mmi:mmi_app\app\eng\c\mmieng_base.c   ShowVersionInfo
// version--save
mmi:mmi_app\app\eng\c\mmieng_base.c  MMIAPIENG_SaveTestResult


// 手机测试
mmi:mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestMenuWinHandleMsg
// 手机测试--menu
mmi:mmi_app\app\eng\c\mmieng_menutable.c  menu_phone_test

// 单项测试
mmi:mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGItemTestMenuWinHandleMsg
// 单项测试--menu
mmi:mmi_app\app\eng\c\mmieng_menutable.c  menu_phone_item_test

// 串行测试
mmi:mmi_app/app/eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// 测试结果
mmi:mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
mmi:mmi_app/app/eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo








[1.6] file
// --enter
mmi:mmi_app\app\fmm\c\mmifmm_app.c  MMIFMM_OpenExplorerWin
// --dir
mmi:mmi_app\app\fmm\c\mmifmm_app.c  MMIAPIFMM_InitFolders


// child
mmi:mmi_app/app/fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleUdiskChildWindow
mmi:mmi_app/app/fmm/c/mmifmm_mainwin.c  1528

// --name
mmi:mmi_app/app/fmm/c/mmifmm_mainwin.c  MMIFMM_CombineFullFileName
// dev list
mmi:mmi_app/app/fmm/c/mmifmm_mainwin.c  HandleFmmListWinMsg
// opt--format
mmi:mmi_app/app/fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleFmmMainDetailMenuMsg

// --init
mmi:mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE
mmi:mmi_service\source\mmisrvcommon\c\mmi_common.c s_file_default_path
mmi:mmi_app\app\udisk\c\mmi_sd.c  MMISD_CreateDefaultFold

//record
UpdateRecordFilePath(record_win_data_ptr);



[1.7] Setting
//
HandleSetLanguageInputContentWindow 	 //输入语言
//设置-情景模式
PromptSuccessWin
//
mmi:mmi_app/app/setting/c/mmiset_phonewin.c  MMISET_INPUT_RESET_FACTORY_PWD_WIN_TAB


head:Set,mmiset_wintab.c
item:Set,mmiset_wintab.c
item:set,mmiset_displaywin.c
//

// cl set
mmi:mmi_app\app\setting\c\mmiset_callwin.c  InitPdaCallOtherSettingsCtrl



// Reset
//
HandleInputResetFactoryPwd
MMIENVSET_ResetEnvSetSetting();//
mmi:mmi_app\app\setting\c\mmiset_func.c
//
//MMISET_CleanUserData();


// sos
MMK_CloseWin

// set--phone--time
mmi:mmi_app\app\setting\c\mmiset_datetime.c  HandleSetTimeDateWindow

// sec--pin
HandlePinInputExceptPhone


[1.8] sms
// Enter
//1.menu 
mmi:mmi_app\app\sms\c\mmisms_mainmenuwin.c  MMISMS_EnterSMSMainMenuWin
mmi:mmi_app\app\sms\c\mmisms_mainmenuwin.c  MMISMS_MENUWIN_TAB
mmi:mmi_app\app\sms\c\mmisms_mainmenuwin.c  HandleSmsMainMenuWinMsg
// option
mmi:mmi_app\app\sms\c\mmisms_editsmswin.c  HandleEditMenuWinMsg
// option--save  APP_MN_SMS_MEM_FULL_IND
mmi:mmi_app\app\sms\c\mmisms_editsmswin.c  EditSMSWin_SaveSMS

//2.edit
mmi:mmi_app\app\sms\c\mmisms_editsmswin.c  HandleEditSmsWinMsg
mmi:mmi_app\app\sms\c\mmisms_mainmenuwin.c  HandleMsgBoxMainWindow

//2.list
mmi:mmi_app\app\sms\c\mmisms_mainmenuwin.c  HandleMsgBoxMainWindow

//3.detail
//
mmismsapp_wintab.c

### 来短信
mmi:mmi_app\app\sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
mmi:mmi_app\app\sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND





// sms--box
mmi:mmi_app\app\sms\c\mmisms_messageboxwin.c  HandleMsgBoxMainWindow
mmi:mmi_app\app\sms\c\mmisms_messageboxwin.c  4506
// sms--box--mt
mmi:mmi_app\app\sms\c\mmisms_messageboxwin.c  HandleMtBoxChildWinMsg
// sms--box--unread
mmi:mmi_app\app\sms\c\mmismsapp_order.c  MMISMS_ListSmsFromOrder

// add data 
FormListBoxItem



[1.9] call

// 销毁softkey？
MMK_DestroyControl(MMICC_CONNECTED_STATE_LABEL_CTRL_ID);


	
//
// ui--font
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c MMI_CALL_NAME_FONT
// ui--label(默认)
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(大屏)
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c LRBUTTON_WIDTH
// ui--icon 59 47 181 169
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c 24908
// ui--icon 105 17
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c 13839
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c 23750
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c 23839

// T107
mmi:mmi_app\app\cc\c\mmicc_wintab.c  MMICC_UpdateCallStatusDisplay



// 流程--来电-MT，
mmi:mmi_app\app\cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
mmi:mmi_app\app\cc\c\mmicc_app.c  void^CC_CallAlertingInd
mmi:mmi_app\app\cc\c\mmicc_app.c  void^CC_CallSetupInd
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_OpenMtCallWin  
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  PdaDisplaySingleCallInfoForCommon  


### 小屏
// label--name, num
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_CONNECTED_SIM_LABEL_CTRL_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  8538
// anim--pad--小屏无效
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  9453

### 大屏
// label--sim, state
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  8085  sim, state
// label--time
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  8272  time
// label--name, num
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  8330  name
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  8454  num
// label--num
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  8454  num


// 流程--去电-MO，
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_HandleCcWinMsg
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID


// 流程--挂断 DIS
mmi:mmi_app\kernel\c\mmi_default.c  HandleFlipDown  MSG_KEYDOWN_FLIP
mmi:mmi_app\app\cc\c\mmicc_app.c 4345
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_HandleDisconnectWinMsg
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_OpenDisconnectWin  

mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MENU_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_CALLLIST_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_PROCESSING_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_ANIMATION_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_ADJUSTVOLUME_WIN_ID

mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_HOLDMENU_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_STATUS_WIN_ID
//mmi:mmi_app\app\cc\c\.c  MMIIDLE_DIAL_MENU_WIN_ID
//mmi:mmi_app\app\cc\c\mmicc_app.c MMICC_CALL_WAIT_INDICATOR_WIN_ID
//mmi:mmi_app\app\cc\c\mmicc_app.c MMICC_ANIMATION_WIN_ID
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c 20008


// 流程--接听
mmi:mmi_app\app\cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent


// 112
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  


// 多卡通话
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  CustomShowMultiCallList
// 多卡通话--name + num
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  6477
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  6514
// 多卡通话--num
mmi:mmi_app\app\cc\c\mmicc_wintab_custom.c  6541


//
mmi:mmi_app\app\cc\c\mmicc_app.c MMICC_HandlePsMsg
// DISCONNECTED
//   APP_MN_CALL_DISCONNECTED_IND


//
//MMICC_VibrateForConnectPrompt


	
[1.10] pb, cl
// enter
mmi:mmi_app\app\pb\c\Mmipb_view.c  MMIPB_MAIN_WIN_ID

// MEM
//MMIPB_MEMDETAIL_WIN_TAB
//
//TXT_COMMON_DETAIL_MEMORY
//
mmi:mmi_app\app\pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_USED_SPACE

// style-1(107) enter
mmi:mmi_app\app\pb\c\Mmipb_set.c
mmi:mmi_app\app\pb\c\Mmipb_view.c  HandleEntryListWinMsg
mmi:mmi_app\app\pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_TAB_WIN_TAB
// style-2
mmi:mmi_app\app\pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_WITH_SEARCH_WIN_TAB


// pb-search
mmi:mmi_app\app\pb\c\mmipb_view.c  HandleEntryListWithSearchWinMsg
mmi:mmi_app\app\pb\c\mmipb_view.c  13437
// 	GUIEDIT_SetStyle(editor_ctr_id,GUIEDIT_STYLE_SINGLE_DYN_DOWN);
//  CTRLBASEEDIT_SetDeActiveBorderColor(win_id, edit_id, MMI_DARK_WHITE_COLOR);

// 调整高度:
//	GUIFORM_SetChildHeight(form_ctr_id, editor_ctr_id, &editor_child_height);

// empty:
//	CTRLLIST_SetEmptyInfo

// pb-edit
mmi:mmi_app\app\pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddEditWinMsg
// 	GUIEDIT_SetStyle(first_name_ctr_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);


// pb-list-search
mmi:mmi_app\app\pb\c\mmipb_view.c  void^HandleMainReloadMsg
// pb-list-delete
mmi:mmi_app\app\pb\c\mmipb_view.c  void^HandleOperateReloadList



//1.cl-menu
mmi:mmi_app\app\cl\c\Mmicl_wintab.c   MMICL_ICON_MAIN_MENU_WIN_TAB
// cl--menu(240)
mmi:mmi_app\app\cc\c\mmicc_menutable.c GUIMENU_ITEM_T^menu_cl

//2.cl-list
// cl--title
mmi:mmi_app\app\cl\c\Mmicl_wintab.c   HandleLogListWindow

//3.cl-deltail
mmi:mmi_app\app\cl\c\Mmicl_wintab.c   InitLogListDetailContactItem
// cl deltail--调显示位置
mmi:mmi_app/app/cl/c/Mmicl_wintab.c  AppendLogListDetailItem
// cl list--(107)
mmi:mmi_app\app\cl\c\Mmicl_wintab.c   AppendLogListItem

// str
InitPdaCallLogListCtrl        CallLog






[1.11] camera
// Win
mmi:mmi_app\app\camera\c\mmidc_main_wintab.c  MMI_RESULT_E^HandleCameraWinMsg
// softkey
mmi:mmi_app\app\camera\c\mmidc_full_osd_display.c  MMIDC_DisplaySettingTip
mmi:mmi_app\app\camera\c\mmidc_full_osd_display.c  void^MMIDC_DisplayString
// sizelist
mmi:mmi_app\app\camera\c\mmidc_full_osd_display.c  DisplayIconString
mmi:mmi_app\app\camera\c\mmidc_guiiconbar.c  DisplayIconSize
// Show
mmi:mmi_app\app\camera\c\mmidc_full_osd_display.c  ShowAllOSD


//option 
mmi:mmi_app\app\camera\c\Mmidc_osd_option.c  MMIDC_OpenVideoOption
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
mmi:mmi_app\app\camera\c\mmidc_main_wintab.c  KeyFunction
//		LSDCPreview
//		LSDVPreview
//		LeftDCPreview
//		LeftDVPreview
//		RightDCPreview
//		RightDVPreview
//DC
//		GetPhonePhotoSizeList


// LCD_ANGLE_90
mmi:mmi_app\app\camera\c\mmidc_main_wintab.c  755
mmi:mmi_app\app\camera\c\mmidc_setting.c  3682


//Camera分辨率:
Camera闪光灯:








[1.12] pic
// enter
mmi:mmi_app\app\pic_viewer\c\mmipicview_list.c HandlePicListWinMsg
mmi:mmi_app\app\pic_viewer\c\mmipicview_list.c 696
// pic--size
mmi:mmi_app\app\pic_viewer\c\mmipicview_list.c void^SetIconListParam
//
mmi:mmi_app\app\pic_viewer\c\mmipicview_wintab.c HandlePiclistOptWinMsg
//
mmi:mmi_app\app\pic_viewer\c\mmipicview_wintab.c HandlePreviewOptWinMsg
// zoom
mmi:mmi_app\app\pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
mmi:mmi_ctrl\source\IconList\c\ctrliconlist.c  void^DisplayDelimiter
mmi:mmi_app\app\pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR



[1.13] record
// enter
mmi:mmi_app\app\record\c\mmirecord_common_wintab.c  HandleRecordMainPlayWinMsg
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  MMIRECORD_MAINPLAY_WIN_CTRL_TAB
//	MMK_CreateCtrlByWinTabEx(win_id, MMIRECORD_MAINPLAY_WIN_CTRL_TAB);
//
mmi:mmi_app\app\record\c\mmirecord_wintab.c  HandleRecordMainPlayWinMsg
mmi:mmi_app\app\record\c\mmirecord_wintab.c  408
// anim
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  anim_frame_red
// pos(time, anim)
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  1600
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  544
// stop
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  DisplayProgress
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  DisplayRecordAllBG
// Update(107)
mmi:mmi_app\app\record\c\mmirecord_barphone_wintab.c  MMIRECORD_UpdateScreen


//time
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_0  

// bg
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_BG			  
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_COMMON_BG			
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_PDA_BG   
// bg-w
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_BG   
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BK_BG  
// anim
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_BG_ANIM_FRAME_1		  
mmi:mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BTN_UNSEL  








[1.14] fm
//Display:
mmi:mmi_app\app\fm\c\mmifm_wintab.c  void^DisplayMainWindow
//Record
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordActionTest


//opt
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
mmi:mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	
// 所有set channel
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel


//set
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav

	

	
//新功能:
//struct
//mmi:mmi_app\app\fm\c\mmifm_wintab.c  case^MMIFM_CUSTOM_ONOFF
//mmi:mmi_app\app\fm\c\mmifm_wintab.c  uint32^s_fm_custom_channel_play_opt_item
//channel list
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelListWinMsg
mmi:mmi_app\app\fm\c\mmifm_wintab.c  void^ReadCustomOpenChannelsListBox
//channel list sel
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelSelectListWinMsg
//channel opt
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmCustomChannelOptionMsg
mmi:mmi_app\app\fm\c\mmifm_wintab.c  void^CreateCustomChannelOptionMenu
//channel Action
mmi:mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMCustomAction
	

//旧功能:
//option
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
mmi:mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
mmi:mmi_app\app\fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction



[1.15] fmm

//
mmi:mmi_app\app\fmm\c\mmifmm_mainwin.c HandleFmmMainWinMsg
mmi:mmi_app\app\fmm\c\mmifmm_mainwin.c HandleMenuOption
// record
mmi:mmi_app\app\fmm\c\mmifmm_mainwin.c HandleRecordListWinMsg

//FILE
MMIFMM_HandleOpenFileWin



[1.16] vp
// time
mmi:mmi_app/app/videoplayer/c/mmivp_wintable.c  5788
// set param
mmi:mmi_app/app/videoplayer/c/mmivp_wintable.c  8053


// Short
mmi:mmi_app/app/videoplayer/c/mmivp_wintable.c  HandleShortCutMsg
// Opt
mmi:mmi_app/app/videoplayer/c/mmivp_wintable.c  HandleOptMenuWinMsg




MMIAPMAINWIN_Enter


[1.17] mp3
// enter-- 
mmi:mmi_app\app\audioplayer\c\mmiapwin_main.c  MMIAPMAINWIN_Enter
// enter-- draw
mmi:mmi_app\app\audioplayer\c\mmiapwin_main.c  HandleMp3PlayWinMsg
mmi:mmi_app\app\audioplayer\c\mmiapwin_main.c  2428
mmi:mmi_app\app\audioplayer\c\mmiapwin_common.c  MMIMP3_DisplayProgress
mmi:mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  450
// enter--mini
mmi:mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  HandleMiniDefaultWinMsg
mmi:mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  MMIMP3_PLAY_WIN_TAB_V
// enter--pda
mmi:mmi_app\app\audioplayer\c\mmiapwin_main_pda.c  HandlePDADefaultWinMsg
// enter--play/pause
mmi:mmi_app\app\audioplayer\c\mmiapwin_common.c  void^MMIMP3_DisplayButton

// 
mmi:mmi_app\app\audioplayer\c\mmiapwin_main.c  HandleMainWinOpenMsg
// 
mmi:mmi_app\app\audioplayer\c\mmiapwin_common.c  MMI_MUSIC_NEW_STYLE
// pos--progress
mmi:mmi_app\app\audioplayer\c\mmiapwin_common.c  progress_groove_rect
// pos (只跑一次)
mmi:mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  435

// bg play
mmi:mmi_app\app\audioplayer\c\mmiap_play.c  MMIAPIMP3_ResumeMp3


[1.18] alarm
# Enter
// Enter
mmi:mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
mmi:mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
mmi:mmi_app\app\accessory\h\mmialarm_position.h
//新功能:
mmi:mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg



# 模拟
// key Headset
mmi:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultHeadsetDetect
//    case KEY_LONG_RELEASED:
//			MMIAPIALM_StartAlarm(0, 0);

// key Headset 不亮屏
mmi:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultBackLight
mmi:mmi_app\kernel\c\mmi_default.c  1825
//            //MMIDEFAULT_TurnOnBackLight();
mmi:mmi_app\kernel\c\mmi_default.c  void^MMK_HandlePublicKey
mmi:mmi_app\kernel\c\mmi_default.c  4147
mmi:mmi_app\kernel\c\mmi_default.c  4133
//            //MMIDEFAULT_TurnOnBackLight();
// 
mmi:mmi_app\app\accessory\c\mmialarm.c  5568
//			MMIDEFAULT_TurnOnBackLight();
//


// 修改匹配
mmi:mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^MMIALM_GetArrivedEvent
//
//        if (cur_event_ptr->is_valid &&
//            cur_event_ptr->is_on &&
//            TRUE ) // IsMatchEvent(cur_date, cur_time, cur_event_ptr) )

//
mmi:mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^MMIAPIALM_StartAlarm

//
mmi:mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^OpenAlarmExpiredWin

// 背光延迟
mmi:mmi_app\app\accessory\c\mmialarm.c  void^OpenAlarmAliveWin
mmi:mmi_app\app\accessory\c\mmialarm.c  8835

//
mmi:mmi_app\app\accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg

//
mmi:mmi_app\common\c\mmi_pubwin.c  5352

	

[1.19] calc
// draw
mmi:mmi_app\app\accessory\c\mmicalc_main.c  void^CalcRefreshContent
mmi:mmi_app\app\accessory\c\mmicalc_main.c  void^InitButtonFont

// Win
mmi:mmi_app\app\accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg



[1.20] calendar
// draw
mmi:mmi_app/app/accessory/c/mmicalendar_main.c  MMI_CALENDAR_CHINESE_JIEQI
mmi:mmi_app/app/accessory/c/mmicalendar_main.c  DrawMonthCalendar
// pos
mmi:mmi_app/app/accessory/h/mmiacc_position.h 128X128

// Win
// main
mmi:mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
// opt
mmi:mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
// opt--go to
mmi:mmi_app\app\accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
// list-opt
//MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);

//draw:
mmi:mmi_app\app\accessory\c\mmicalendar_main.c
mmi:mmi_app\app\accessory\c\mmischedule.c



[1.21] 


[1.22] 

//snake:
//square:
//Initlabel
	

[1.23] bt
// enter
mmi:mmi_app\app\bt\c\mmibt_mainwin.c  MMI_RESULT_E^^^HandleMainMenuWinMsg

//mmibt_wintab.c
//MMIAPIBT_AppInit

// 蓝牙自动测试优化
MS_Ref/source/autotest_device/src/autotest_device.c  1904
//		Is_BTSearchStart = SCI_FALSE;      //+
//        BT_CancelSearch();  // add by unisoc 2020        


//bt
// auto/menu CON
//	CON:A2DP:a-8,CallBack:8-12
//	CON:A2DP:9-8,
//	CON:A2DP:ID_STATUS_AVRCP_CONNECT_COMPLETE,CallBack:ID_STATUS_HFAG_HFU_CLCC
//	CON:A2DP:ID_STATUS_A2DP_CONNECTED,
//	// menu DIS
//	DIS:A2DP:a-9,CallBack:1-5
//	DIS:A2DP:ID_STATUS_AVRCP_DISCONNECT_COMPLETE,CallBack:ID_STATUS_CM_VISIBLE_RES
//	// menu DIS
//	DIS:A2DP:9-9,CallBack:1-5
//	DIS:A2DP:ID_STATUS_A2DP_DISCONNECTED,CallBack:ID_STATUS_CM_VISIBLE_RES

// msg
MS_MMI_Main\source\mmi_app\app\bt\c\mmibt_app.c  MMIBT_A2DPCallBackFunc
// 1.CON
//	10090008  ID_STATUS_A2DP_CONNECTED
//	100a0008  ID_STATUS_AVRCP_CONNECT_COMPLETE
//	10090003  ID_STATUS_A2DP_SRC_START_STREAM
//	100a0009  ID_STATUS_AVRCP_DISCONNECT_COMPLETE
//	10090009  ID_STATUS_A2DP_DISCONNECTED
//	10090008  a2_c
//	10090003  a2_s
//	10090005  ID_STATUS_A2DP_SRC_CLOSE_STREAM
//	100a0009  av_dc
//	10090009  a2_dc
//	100a0008  av_c
//	10090008  a2_c
//	100a0009  av_dc
//	10090009  a2_dc




[1.24] env
### idle switch


// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request

//type new
mmi:mmi_app\app\envset\c\mmienvset.c 6220
mmi:mmi_app\app\envset\c\mmienvset.c 6353


//ring--key--4-1-N 才能播放
mmi:mmi_app\app\setting\c\mmiset_ring.c 1736 PlayRing
mmi:mmi_app\app\setting\c\mmiset_ring.c 5377 MMIAPISET_PreviewRing
mmi:mmi_app\app\setting\c\mmiset_ring.c 1391 PlayFixedRing
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 4102	Save
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 3993	换TYPE
//	MMIAPISET_SetCurRingType
mmi:mmi_app\app\envset\c\mmienvset.c 6456   KEY_ID
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 6432	WIN_ID
//	ring id:
mmi:mmi_app\app\envset\c\mmienvset.c 5084    GetRingID



//vib--one
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 1403	  --vib
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 3915	  --timer


//env main
mmi:mmi_app\app\envset\c\mmienvset_wintab.c  1395
//vib list
mmi:mmi_app\app\envset\c\mmienvset.c 6398
	


//play--type
MMIENVSET_PlayRingByListItem
//play--vib
MMIENVSET_PlayMsgAlarmRingByListItem
//play--tone
MMIAPISET_PlayCallRingByVol


//vol--alert
mmi:mmi_app\app\setting\c\mmiset_wintab.c 822
mmi:mmi_app\app\setting\c\mmiset_wintab.c 8886

//call type
//msg type
//keypad 
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 3695
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 3966 


//call ring1
mmi:mmi_app\app\setting\c\mmiset_wintab.c 608
//call ring2 --ring
mmi:mmi_app\app\setting\c\mmiset_wintab.c 924
mmi:mmi_app\app\setting\c\mmiset_wintab.c 988 ++vol


//msg ring
mmi:mmi_app\app\setting\c\mmiset_wintab.c 322
mmi:mmi_app\app\setting\c\mmiset_wintab.c 812

//keypad 
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 4148
	

//vol
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 4909

MMK_CreateWin



// bak--不用
//env main
mmi:mmi_app\app\envset\c\mmienvset_wintab.c MMIENVSET_MAIN_MENU_WIN_TAB
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 1910 handle


//opt
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 1400
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 1480


//	set edit
mmi:mmi_app\app\envset\c\mmienvset_wintab.c 2862


//	nv
mmi:mmi_app\app\envset\c\mmienvset.c 6730
// item
mmi:mmi_app\app\envset\c\mmienvset.c 3300
// def nv
mmi:mmi_app\app\envset\c\mmienvset.c 1680


project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_CALL_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_MSG_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_OTHER_RING1



[1.25] 






[1.26] 



[1.27] Browser 网络参数
// enter
mmi:mmi_app\app\browser\c\mmibrowser_func.c  MMIBROWSER_Enter
//
mmi:mmi_app\app\browser\c\mmibrowser_wintable.c  MMI_RESULT_E^BrwHandleStartPageWinMsg
//
//BrwHandlePopMenuWinMsg

### 打开存储设置
mmi:mmi_app\app\browser\c\mmibrowser_func.c  MMIBROWSER_IsOnlyChooseStorage
//   BOOLEAN is_only_storage = FALSE;


// 获取网络设置
//MMIBROWSER_GetSim：获得SIM
//MMIBROWSER_GetNetSettingIndex：根据sim卡，获取对应的设置的index
//MMICONNECTION_GetLinkSettingItemByIndex来获取网络设置



[1.28] sos
// sos--
mmi:mmi_app\app\setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg


// 亲情号码
mmi:mmi_app\app\cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// 亲情号码--编辑
mmi:mmi_app\app\cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// 亲情号码--编辑--num
mmi:mmi_app\app\cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg










[1.29] startup
// Start
mmi:mmi_app\app\phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow





[1.30] 
	





