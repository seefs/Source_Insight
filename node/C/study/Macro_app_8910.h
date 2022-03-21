

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
Save:node\C\study\Macro_app_8910.h  \[1.10\] pb, cl, callset
Save:node\C\study\Macro_app_8910.h  \[1.11\] camera -------------
Save:node\C\study\Macro_app_8910.h  \[1.12\] pic
Save:node\C\study\Macro_app_8910.h  \[1.13\] record
Save:node\C\study\Macro_app_8910.h  \[1.14\] fm
Save:node\C\study\Macro_app_8910.h  \[1.15\] //ebook
Save:node\C\study\Macro_app_8910.h  \[1.16\] vp
Save:node\C\study\Macro_app_8910.h  \[1.17\] mp3
Save:node\C\study\Macro_app_8910.h  \[1.18\] alarm --------------
Save:node\C\study\Macro_app_8910.h  \[1.19\] calc
Save:node\C\study\Macro_app_8910.h  \[1.20\] calendar
Save:node\C\study\Macro_app_8910.h  \[1.21\] 单位转换
Save:node\C\study\Macro_app_8910.h  \[1.22\] 游戏 魔音
Save:node\C\study\Macro_app_8910.h  \[1.23\] bt
Save:node\C\study\Macro_app_8910.h  \[1.24\] env, Profile
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
app:idle\c\mainapp.c  MMIAPIIDLE_OpenIdleWin

// IDLE--107
app:idle\c\mmiidle_cstyle.c  void^OutIdleWinContent
// IDLE--8910
app:idle\c\mmiidle_mstyle.c  void^OutIdleWinContent

// LOCK
app:keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg
// LOCK
app:keylock\c\mmikl_keylock.c  void^DisplayClockCallbackFun


// pos--date,week
app:theme/c/
app:theme/c/mmidisplay_data_128x128.c
app:theme/c/mmidisplay_data_176x220.c
app:theme/c/mmidisplay_data_240x320.c
// pos--time
app:idle\c\mmiidle_cstyle.c
app:theme/h/mmi_position.h  MMI_MAIN_TIME_Y
app:theme/h/mmi_position.h  IDLE_TIME_PIC_WIDTH





[1.3] menu, second
// index
mmi:mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
mmi:mmi_kernel/include/mmitheme_mainmenu.h  MAINLCD_SIZE_240X320
// bg rect
app:mainmenu\c\mmi_mainmenu_matrix.c  BOOLEAN^MatrixMenuGetTitleStyleInfo
// icon rect
app:mainmenu\c\mmi_mainmenu_matrix.c  HandleMatrixMenuGetIconRect
// draw
app:mainmenu\c\mmi_mainmenu_matrix.c  MMITHEME_DrawMainmenuItem
// title
mmi:mmi_service/export/inc/mmi_custom_define.h  MMISET_DEFAULT_MENU_STYLE_E
// menu softkey, prg
app:theme/c/mmitheme_mainmenu.c  is_has_button
app:mainmenu/c/mainmenu_win.c  MAINMENU_ICON_WIN_TAB
app:mainmenu\c\mmi_mainmenu_matrix.c  ->is_need_prgbox

// menu--one page
app:mainmenu\c\mainmenu_win.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_data_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
mmi:mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE

// menu--main
app:mainmenu\c\mmi_mainmenu_data_128x128.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_128x128.c 570
app:mainmenu\c\mmi_mainmenu_data_176x220.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x240.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x320.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x320.c MAINMENU_FLP_STYLE

// menu--main
app:mainmenu\c\mainmenu_win.c  HandleMainMenuWinMsg
// menu--second
app:mainmenu\c\mainmenu_win.c  HandleSecMenuStaticMsg
app:mainmenu\c\mainmenu_win.c  3353

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
app:setting\c\mmiset_menutable.c  GUIMENU_ITEM_T^menu_set_phone


// menu img
mmi:mmi_ctrl\source\Menu\c\ctrlmenu_popup.c  check_unsel_img
mmi:mmi_ctrl\source\Menu\c\ctrlmenu_sec.c   check_unsel_img


//tone


[1.4] dial
// Open
app:idle\c\mmiidle_mstyle.c  MMIAPIIDLE_OpenDialWin
// dial
app:idle\c\mmiidle_dial.c  MMIAPIIDLE_EditDialWin
app:idle\c\mmiidle_dial.c  HandleDialWinMsg


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
app:idle\c\mmiidle_dial.c  HandleDialWinMsg
app:idle\c\mmiidle_dial.c  MMIAPIIDLE_SwitchEditDialWin
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
app:eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
app:eng/c/mmieng_main.c  UITESTWIN_OpenItemTestWin
app:eng/c/mmieng_main.c  MMIAPIENG_StartEngineerMenu

// version
app:eng/c/mmieng_uitestwin.c  ID_ENG_TEST_SW_VERSION
// imei
app:parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr
// 		MMIAPIPHONE_OpenIMEIDisplayWin();

// Parse
app:idle\c\mmiidle_dial.c  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM




// version
app:eng\c\mmieng_base.c   ShowVersionInfo
// version--save
app:eng\c\mmieng_base.c  MMIAPIENG_SaveTestResult


// 手机测试
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestMenuWinHandleMsg
// 手机测试--menu
app:eng\c\mmieng_menutable.c  menu_phone_test

// 单项测试
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGItemTestMenuWinHandleMsg
// 单项测试--menu
app:eng\c\mmieng_menutable.c  menu_phone_item_test

// 串行测试
app:eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// 测试结果
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
app:eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo








[1.6] file
// --enter
app:fmm\c\mmifmm_app.c  MMIFMM_OpenExplorerWin
// --dir
app:fmm\c\mmifmm_app.c  MMIAPIFMM_InitFolders


// child
app:fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleUdiskChildWindow
app:fmm/c/mmifmm_mainwin.c  1528

// --name
app:fmm/c/mmifmm_mainwin.c  MMIFMM_CombineFullFileName
// dev list
app:fmm/c/mmifmm_mainwin.c  HandleFmmListWinMsg
// opt--format
app:fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleFmmMainDetailMenuMsg

// --init
mmi:mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE
mmi:mmi_service\source\mmisrvcommon\c\mmi_common.c s_file_default_path
app:udisk\c\mmi_sd.c  MMISD_CreateDefaultFold

//record
UpdateRecordFilePath(record_win_data_ptr);


//
app:fmm\c\mmifmm_mainwin.c HandleFmmMainWinMsg
app:fmm\c\mmifmm_mainwin.c HandleMenuOption
// record
app:fmm\c\mmifmm_mainwin.c HandleRecordListWinMsg

//FILE
MMIFMM_HandleOpenFileWin


[1.7] Setting
//
HandleSetLanguageInputContentWindow 	 //输入语言
//设置-情景模式
PromptSuccessWin
//
app:setting/c/mmiset_phonewin.c  MMISET_INPUT_RESET_FACTORY_PWD_WIN_TAB


head:Set,mmiset_wintab.c
item:Set,mmiset_wintab.c
item:set,mmiset_displaywin.c
//

// cl set
app:setting\c\mmiset_callwin.c  InitPdaCallOtherSettingsCtrl



// Reset
//
HandleInputResetFactoryPwd
MMIENVSET_ResetEnvSetSetting();//
app:setting\c\mmiset_func.c
//
//MMISET_CleanUserData();


// sos

// set--phone
app:setting/c/mmiset_phonewin.c  MMISET_PHONE_SETTING_WIN_TAB
app:setting\c\mmiset_menutable.c  menu_set_phone_setting
// set--phone--time
app:setting\c\mmiset_datetime.c  HandleSetTimeDateWindow

// sec--pin
HandlePinInputExceptPhone


[1.8] sms
// Enter
//1.menu 
app:sms\c\mmisms_mainmenuwin.c  MMISMS_EnterSMSMainMenuWin
app:sms\c\mmisms_mainmenuwin.c  MMISMS_MENUWIN_TAB
app:sms\c\mmisms_mainmenuwin.c  HandleSmsMainMenuWinMsg
// option
app:sms\c\mmisms_editsmswin.c  HandleEditMenuWinMsg
// option--save  APP_MN_SMS_MEM_FULL_IND
app:sms\c\mmisms_editsmswin.c  EditSMSWin_SaveSMS

//2.edit
app:sms\c\mmisms_editsmswin.c  HandleEditSmsWinMsg
app:sms\c\mmisms_mainmenuwin.c  HandleMsgBoxMainWindow

//2.list
app:sms\c\mmisms_mainmenuwin.c  HandleMsgBoxMainWindow

//3.detail
//
mmismsapp_wintab.c

### 来短信
app:sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
app:sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND





// sms--box
app:sms\c\mmisms_messageboxwin.c  HandleMsgBoxMainWindow
app:sms\c\mmisms_messageboxwin.c  4506
// sms--box--mt
app:sms\c\mmisms_messageboxwin.c  HandleMtBoxChildWinMsg
// sms--box--unread
app:sms\c\mmismsapp_order.c  MMISMS_ListSmsFromOrder

// add data 
FormListBoxItem



[1.9] call

// 销毁softkey？
MMK_DestroyControl(MMICC_CONNECTED_STATE_LABEL_CTRL_ID);


	
//
// ui--font
app:cc\c\mmicc_wintab_custom.c MMI_CALL_NAME_FONT
// ui--label(默认)
app:cc\c\mmicc_wintab_custom.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(大屏)
app:cc\c\mmicc_wintab_custom.c LRBUTTON_WIDTH
// ui--icon 59 47 181 169
app:cc\c\mmicc_wintab_custom.c 24908
// ui--icon 105 17
app:cc\c\mmicc_wintab_custom.c 13839
app:cc\c\mmicc_wintab_custom.c 23750
app:cc\c\mmicc_wintab_custom.c 23839

// T107
app:cc\c\mmicc_wintab.c  MMICC_UpdateCallStatusDisplay



// 流程--来电-MT，
app:cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
app:cc\c\mmicc_app.c  void^CC_CallAlertingInd
app:cc\c\mmicc_app.c  void^CC_CallSetupInd
app:cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
app:cc\c\mmicc_wintab_custom.c  CC_OpenMtCallWin  
app:cc\c\mmicc_wintab_custom.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_wintab_custom.c  PdaDisplaySingleCallInfoForCommon  


### 小屏
// label--name, num
app:cc\c\mmicc_wintab_custom.c  MMICC_CONNECTED_SIM_LABEL_CTRL_ID
app:cc\c\mmicc_wintab_custom.c  8538
// anim--pad--小屏无效
app:cc\c\mmicc_wintab_custom.c  9453

### 大屏
// label--sim, state
app:cc\c\mmicc_wintab_custom.c  8085  sim, state
// label--time
app:cc\c\mmicc_wintab_custom.c  8272  time
// label--name, num
app:cc\c\mmicc_wintab_custom.c  8330  name
app:cc\c\mmicc_wintab_custom.c  8454  num
// label--num
app:cc\c\mmicc_wintab_custom.c  8454  num


// 流程--去电-MO，
app:cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
app:cc\c\mmicc_wintab_custom.c  CC_HandleCcWinMsg
app:cc\c\mmicc_wintab_custom.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID


// 流程--挂断 DIS
mmi:mmi_app\kernel\c\mmi_default.c  HandleFlipDown  MSG_KEYDOWN_FLIP
app:cc\c\mmicc_app.c 4345
app:cc\c\mmicc_wintab_custom.c  CC_HandleDisconnectWinMsg
app:cc\c\mmicc_wintab_custom.c  MMICC_OpenDisconnectWin  

app:cc\c\mmicc_wintab_custom.c  MMICC_MENU_WIN_ID
app:cc\c\mmicc_wintab_custom.c  MMICC_CALLLIST_WIN_ID
app:cc\c\mmicc_wintab_custom.c  MMICC_PROCESSING_WIN_ID
app:cc\c\mmicc_wintab_custom.c  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_wintab_custom.c  MMICC_ADJUSTVOLUME_WIN_ID

app:cc\c\mmicc_wintab_custom.c  MMICC_HOLDMENU_WIN_ID
app:cc\c\mmicc_wintab_custom.c  MMICC_STATUS_WIN_ID
//app:cc\c\.c  MMIIDLE_DIAL_MENU_WIN_ID
//app:cc\c\mmicc_app.c MMICC_CALL_WAIT_INDICATOR_WIN_ID
//app:cc\c\mmicc_app.c MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_wintab_custom.c 20008


// 流程--接听
app:cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent


// 112
app:cc\c\mmicc_wintab_custom.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  


// 多卡通话
app:cc\c\mmicc_wintab_custom.c  CustomShowMultiCallList
// 多卡通话--name + num
app:cc\c\mmicc_wintab_custom.c  6477
app:cc\c\mmicc_wintab_custom.c  6514
// 多卡通话--num
app:cc\c\mmicc_wintab_custom.c  6541


//
app:cc\c\mmicc_app.c MMICC_HandlePsMsg
// DISCONNECTED
//   APP_MN_CALL_DISCONNECTED_IND


//
//MMICC_VibrateForConnectPrompt


	
[1.10] pb, cl
// enter
app:pb\c\Mmipb_view.c  MMIPB_MAIN_WIN_ID

// MEM
//MMIPB_MEMDETAIL_WIN_TAB
//
//TXT_COMMON_DETAIL_MEMORY
//
app:pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_USED_SPACE

// style-1(107) enter
app:pb\c\Mmipb_set.c
app:pb\c\Mmipb_view.c  HandleEntryListWinMsg
app:pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_TAB_WIN_TAB
// style-2
app:pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_WITH_SEARCH_WIN_TAB


// pb-search
app:pb\c\mmipb_view.c  HandleEntryListWithSearchWinMsg
app:pb\c\mmipb_view.c  13437
// 	GUIEDIT_SetStyle(editor_ctr_id,GUIEDIT_STYLE_SINGLE_DYN_DOWN);
//  CTRLBASEEDIT_SetDeActiveBorderColor(win_id, edit_id, MMI_DARK_WHITE_COLOR);

// 调整高度:
//	GUIFORM_SetChildHeight(form_ctr_id, editor_ctr_id, &editor_child_height);

// empty:
//	CTRLLIST_SetEmptyInfo

// pb-edit
app:pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddEditWinMsg
// 	GUIEDIT_SetStyle(first_name_ctr_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);


// pb-list-search
app:pb\c\mmipb_view.c  void^HandleMainReloadMsg
// pb-list-delete
app:pb\c\mmipb_view.c  void^HandleOperateReloadList



//1.cl-menu
app:cl\c\Mmicl_wintab.c   MMICL_ICON_MAIN_MENU_WIN_TAB
// cl--menu(240)
app:cc\c\mmicc_menutable.c GUIMENU_ITEM_T^menu_cl

//2.cl-list
// cl--title
app:cl\c\Mmicl_wintab.c   HandleLogListWindow

//3.cl-deltail
//		==>从号码获取姓名
app:cl\c\Mmicl_wintab.c   InitLogListDetailContactItem
// cl deltail--调显示位置
app:cl/c/Mmicl_wintab.c  AppendLogListDetailItem
// cl list--(107)
app:cl\c\Mmicl_wintab.c   AppendLogListItem
//
app:cl\c\mmicl_custom_wintab.c   AppendLogListItem

// str
InitPdaCallLogListCtrl        CallLog






[1.11] camera
// Win
app:camera\c\mmidc_main_wintab.c  MMI_RESULT_E^HandleCameraWinMsg
// softkey
app:camera\c\mmidc_full_osd_display.c  MMIDC_DisplaySettingTip
app:camera\c\mmidc_full_osd_display.c  void^MMIDC_DisplayString
// sizelist
app:camera\c\mmidc_full_osd_display.c  DisplayIconString
app:camera\c\mmidc_guiiconbar.c  DisplayIconSize
// Show
app:camera\c\mmidc_full_osd_display.c  ShowAllOSD


//option 
app:camera\c\Mmidc_osd_option.c  MMIDC_OpenVideoOption
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
app:camera\c\mmidc_main_wintab.c  KeyFunction
//		LSDCPreview
//		LSDVPreview
//		LeftDCPreview
//		LeftDVPreview
//		RightDCPreview
//		RightDVPreview
//DC
//		GetPhonePhotoSizeList


// LCD_ANGLE_90
app:camera\c\mmidc_main_wintab.c  755
app:camera\c\mmidc_setting.c  3682


//Camera分辨率:
Camera闪光灯:








[1.12] pic
// enter
app:pic_viewer\c\mmipicview_list.c HandlePicListWinMsg
app:pic_viewer\c\mmipicview_list.c 696
// pic--size
app:pic_viewer\c\mmipicview_list.c void^SetIconListParam
//
app:pic_viewer\c\mmipicview_wintab.c HandlePiclistOptWinMsg
//
app:pic_viewer\c\mmipicview_wintab.c HandlePreviewOptWinMsg
// zoom
app:pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
mmi:mmi_ctrl\source\IconList\c\ctrliconlist.c  void^DisplayDelimiter
app:pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR



[1.13] record
// enter
app:record\c\mmirecord_common_wintab.c  HandleRecordMainPlayWinMsg
app:record\c\mmirecord_barphone_wintab.c  MMIRECORD_MAINPLAY_WIN_CTRL_TAB
//	MMK_CreateCtrlByWinTabEx(win_id, MMIRECORD_MAINPLAY_WIN_CTRL_TAB);
//
app:record\c\mmirecord_wintab.c  HandleRecordMainPlayWinMsg
app:record\c\mmirecord_wintab.c  408
// anim
app:record\c\mmirecord_barphone_wintab.c  anim_frame_red
// pos(time, anim)
app:record\c\mmirecord_barphone_wintab.c  1600
app:record\c\mmirecord_barphone_wintab.c  544
// stop
app:record\c\mmirecord_barphone_wintab.c  DisplayProgress
app:record\c\mmirecord_barphone_wintab.c  DisplayRecordAllBG
// Update(107)
app:record\c\mmirecord_barphone_wintab.c  MMIRECORD_UpdateScreen


//time
app:record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_0  

// bg
app:record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_BG			  
app:record\c\mmirecord_wintab.c IMAGE_COMMON_BG			
app:record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_PDA_BG   
// bg-w
app:record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_BG   
app:record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BK_BG  
// anim
app:record\c\mmirecord_wintab.c IMAGE_RECORD_BG_ANIM_FRAME_1		  
app:record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BTN_UNSEL  








[1.14] fm
//Display:
app:fm\c\mmifm_wintab.c  void^DisplayMainWindow
//Record
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordActionTest


//opt
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
app:fm\c\mmifm_wintab.c  void^HandleFMAction
	
// 所有set channel
app:fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel


//set
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav

	

	
//新功能:
//struct
//app:fm\c\mmifm_wintab.c  case^MMIFM_CUSTOM_ONOFF
//app:fm\c\mmifm_wintab.c  uint32^s_fm_custom_channel_play_opt_item
//channel list
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelListWinMsg
app:fm\c\mmifm_wintab.c  void^ReadCustomOpenChannelsListBox
//channel list sel
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelSelectListWinMsg
//channel opt
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmCustomChannelOptionMsg
app:fm\c\mmifm_wintab.c  void^CreateCustomChannelOptionMenu
//channel Action
app:fm\c\mmifm_wintab.c  void^HandleFMCustomAction
	

//旧功能:
//option
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
app:fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
app:fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction



[1.15] 



[1.16] vp
// time
app:videoplayer/c/mmivp_wintable.c  5788
// set param
app:videoplayer/c/mmivp_wintable.c  8053


// Short
app:videoplayer/c/mmivp_wintable.c  HandleShortCutMsg
// Opt
app:videoplayer/c/mmivp_wintable.c  HandleOptMenuWinMsg




MMIAPMAINWIN_Enter


[1.17] mp3
// enter-- 
app:audioplayer\c\mmiapwin_main.c  MMIAPMAINWIN_Enter
// enter-- draw
app:audioplayer\c\mmiapwin_main.c  HandleMp3PlayWinMsg
app:audioplayer\c\mmiapwin_main.c  2428
app:audioplayer\c\mmiapwin_common.c  MMIMP3_DisplayProgress
app:audioplayer\c\mmiapwin_main_mini.c  450
// enter--mini
app:audioplayer\c\mmiapwin_main_mini.c  HandleMiniDefaultWinMsg
app:audioplayer\c\mmiapwin_main_mini.c  MMIMP3_PLAY_WIN_TAB_V
// enter--pda
app:audioplayer\c\mmiapwin_main_pda.c  HandlePDADefaultWinMsg
// enter--play/pause
app:audioplayer\c\mmiapwin_common.c  void^MMIMP3_DisplayButton

// 
app:audioplayer\c\mmiapwin_main.c  HandleMainWinOpenMsg
// 
app:audioplayer\c\mmiapwin_common.c  MMI_MUSIC_NEW_STYLE
// pos--progress
app:audioplayer\c\mmiapwin_common.c  progress_groove_rect
// pos (只跑一次)
app:audioplayer\c\mmiapwin_main_mini.c  435

// bg play
app:audioplayer\c\mmiap_play.c  MMIAPIMP3_ResumeMp3


[1.18] alarm
# Enter
// Enter
app:accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
app:accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
app:accessory\h\mmialarm_position.h
//新功能:
app:accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg



# 模拟
// key Headset--长按触发闹钟
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
app:accessory\c\mmialarm.c  5568
//			MMIDEFAULT_TurnOnBackLight();
//


// 修改匹配--不判断触发
app:accessory\c\mmialarm.c  BOOLEAN^MMIALM_GetArrivedEvent
//        if (cur_event_ptr->is_valid &&
//            cur_event_ptr->is_on &&
//            TRUE ) // IsMatchEvent(cur_date, cur_time, cur_event_ptr) )

//
app:accessory\c\mmialarm.c  BOOLEAN^MMIAPIALM_StartAlarm
//
app:accessory\c\mmialarm.c  BOOLEAN^OpenAlarmExpiredWin

// 背光延迟
app:accessory\c\mmialarm.c  void^OpenAlarmAliveWin
app:accessory\c\mmialarm.c  8835

//
app:accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg

//
mmi:mmi_app\common\c\mmi_pubwin.c  5352

	

[1.19] calc
// draw
app:accessory\c\mmicalc_main.c  void^CalcRefreshContent
app:accessory\c\mmicalc_main.c  void^InitButtonFont

// Win
app:accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg



[1.20] calendar
// draw
app:accessory/c/mmicalendar_main.c  MMI_CALENDAR_CHINESE_JIEQI
app:accessory/c/mmicalendar_main.c  DrawMonthCalendar
// pos
app:accessory/h/mmiacc_position.h 128X128

// Win
// main
app:accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
// opt
app:accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
// opt--go to
app:accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
// list-opt
//MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);

//draw:
app:accessory\c\mmicalendar_main.c
app:accessory\c\mmischedule.c



[1.21] 


[1.22] 

//snake:
//square:
//Initlabel
	

[1.23] bt
// enter
app:bt\c\mmibt_mainwin.c  MMI_RESULT_E^^^HandleMainMenuWinMsg

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


// bt mode
app:heroengine\tts\c\hero_tts_api.c  BLUETOOTH_SUPPORT



[1.24] env
### idle switch

// env--enter
//		==>HandleSetPhoneWindow
app:envset\c\mmienvset.c  MMIENVSET_OpenMainMenuWindow
// env--set
app:envset\c\mmienvset_wintab.c  HandleEnvOptMenuWindow
// env--set-2-ring
app:setting\c\mmiset_wintab.c  void^EnterRingSettingMenu



// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request

//type new
app:envset\c\mmienvset.c 6220
app:envset\c\mmienvset.c 6353


//ring--key--4-1-N 才能播放
app:setting\c\mmiset_ring.c 1736 PlayRing
app:setting\c\mmiset_ring.c 5377 MMIAPISET_PreviewRing
app:setting\c\mmiset_ring.c 1391 PlayFixedRing
app:envset\c\mmienvset_wintab.c 4102	Save
app:envset\c\mmienvset_wintab.c 3993	换TYPE
//	MMIAPISET_SetCurRingType
app:envset\c\mmienvset.c 6456   KEY_ID
app:envset\c\mmienvset_wintab.c 6432	WIN_ID
//	ring id:
app:envset\c\mmienvset.c 5084    GetRingID



//vib--one
app:envset\c\mmienvset_wintab.c 1403	  --vib
app:envset\c\mmienvset_wintab.c 3915	  --timer


//env main
app:envset\c\mmienvset_wintab.c  1395
//vib list
app:envset\c\mmienvset.c 6398
	


//play--type
MMIENVSET_PlayRingByListItem
//play--vib
MMIENVSET_PlayMsgAlarmRingByListItem
//play--tone
MMIAPISET_PlayCallRingByVol


//vol--alert
app:setting\c\mmiset_wintab.c 822
app:setting\c\mmiset_wintab.c 8886

//call type
//msg type
//keypad 
app:envset\c\mmienvset_wintab.c 3695
app:envset\c\mmienvset_wintab.c 3966 


//call ring1
app:setting\c\mmiset_wintab.c 608
//call ring2 --ring
app:setting\c\mmiset_wintab.c 924
app:setting\c\mmiset_wintab.c 988 ++vol


//msg ring
app:setting\c\mmiset_wintab.c 322
app:setting\c\mmiset_wintab.c 812

//keypad 
app:envset\c\mmienvset_wintab.c 4148
	

//vol
app:envset\c\mmienvset_wintab.c 4909

MMK_CreateWin



// bak--不用
//env main
app:envset\c\mmienvset_wintab.c MMIENVSET_MAIN_MENU_WIN_TAB
app:envset\c\mmienvset_wintab.c 1910 handle


//opt
app:envset\c\mmienvset_wintab.c 1400
app:envset\c\mmienvset_wintab.c 1480


//	set edit
app:envset\c\mmienvset_wintab.c 2862


//	nv
app:envset\c\mmienvset.c 6730
// item
app:envset\c\mmienvset.c 3300
// def nv
app:envset\c\mmienvset.c 1680


project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_CALL_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_MSG_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_OTHER_RING1



[1.25] 






[1.26] 



[1.27] Browser 网络参数
// enter
app:browser\c\mmibrowser_func.c  MMIBROWSER_Enter
//
app:browser\c\mmibrowser_wintable.c  MMI_RESULT_E^BrwHandleStartPageWinMsg
//
//BrwHandlePopMenuWinMsg

### 打开存储设置
app:browser\c\mmibrowser_func.c  MMIBROWSER_IsOnlyChooseStorage
//   BOOLEAN is_only_storage = FALSE;


// 获取网络设置
//MMIBROWSER_GetSim：获得SIM
//MMIBROWSER_GetNetSettingIndex：根据sim卡，获取对应的设置的index
//MMICONNECTION_GetLinkSettingItemByIndex来获取网络设置

// CQ:
//	sim 卡中的 spn/pnn 字串必须和 net_comparetable 中的 pnn_or_spn 中设置的一样，
//	区分大小写。
//	运营商中apn 信息，需要在 ntac 文件中添加，并且表中 Setting Name 保持一致，
//	也区分大小写



[1.28] sos
// sos 开关
prj:project_{cur}.mk  MMI_INDIAN_SOS_SUPPORT


// sos--enter
app:setting\c\mmiset_sos.c  MMIAPISET_EnterSOSSettingWin
// sos--list
app:setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg


// 亲情号码
app:cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// 亲情号码--编辑
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// 亲情号码--编辑--num
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg










[1.29] startup
// Start
app:phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow





[1.30] 
	





