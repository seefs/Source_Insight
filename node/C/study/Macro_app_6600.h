
//目录
Save:node\C\study\Macro_app_6600.h  \[1.1\] win fun.
Save:node\C\study\Macro_app_6600.h  \[1.2\] idle, lock
Save:node\C\study\Macro_app_6600.h  \[1.3\] menu, second
Save:node\C\study\Macro_app_6600.h  \[1.4\] dial
Save:node\C\study\Macro_app_6600.h  \[1.5\] test, version
Save:node\C\study\Macro_app_6600.h  \[1.6\] file
Save:node\C\study\Macro_app_6600.h  \[1.7\] setting
Save:node\C\study\Macro_app_6600.h  \[1.8\] sms -----------------
Save:node\C\study\Macro_app_6600.h  \[1.9\] call
Save:node\C\study\Macro_app_6600.h  \[1.10\] pb, cl, callset
Save:node\C\study\Macro_app_6600.h  \[1.11\] camera -------------
Save:node\C\study\Macro_app_6600.h  \[1.12\] pic
Save:node\C\study\Macro_app_6600.h  \[1.13\] record
Save:node\C\study\Macro_app_6600.h  \[1.14\] fm
Save:node\C\study\Macro_app_6600.h  \[1.15\] //ebook
Save:node\C\study\Macro_app_6600.h  \[1.16\] vp
Save:node\C\study\Macro_app_6600.h  \[1.17\] mp3
Save:node\C\study\Macro_app_6600.h  \[1.18\] alarm --------------
Save:node\C\study\Macro_app_6600.h  \[1.19\] calc
Save:node\C\study\Macro_app_6600.h  \[1.20\] calendar
Save:node\C\study\Macro_app_6600.h  \[1.21\] unitconversion
Save:node\C\study\Macro_app_6600.h  \[1.22\] game
Save:node\C\study\Macro_app_6600.h  \[1.23\] bt
Save:node\C\study\Macro_app_6600.h  \[1.24\] env, Profile
Save:node\C\study\Macro_app_6600.h  \[1.25\] 
Save:node\C\study\Macro_app_6600.h  \[1.26\] 
Save:node\C\study\Macro_app_6600.h  \[1.27\] Browser 网络参数
Save:node\C\study\Macro_app_6600.h  \[1.28\] sos
Save:node\C\study\Macro_app_6600.h  \[1.29\] startup
Save:node\C\study\Macro_app_6600.h  \[1.30\]
	



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
// open (smart)
//		==>IdleWin_HandleMsg                #app
//		====>HandleIdleMsg
//		======>MMIIDLE_SmartHandleMsg       #idle
//		========>DisplaySmartStyleIdle
//		==========>DisplayDate
//		============>LCD_DisplayIdleString
//		==========>DisplayShortCut
//		==========>DisplayLineAndSelImg
app:idle\c\mmiidle_display.c  MMIIDLE_SmartHandleMsg
//		==>IdleWin_HandleMsg                #app
//		====>case MSG_KEYDOWN_0
//		======>OpenFuncDialingWin
//		====>case MSG_CTL_OK
//		======>MMISET_OpenFuncKeyWin(win_id, MMISET_FUNCKEY_LEFT);
//		======>GetEnabledFuncKeyShortcutInfo
//		====>case MSG_APP_CANCEL
//		======>MMISET_OpenFuncKeyWin(win_id, MMISET_FUNCKEY_RIGHT);

// --image
Save:node\C\study\Macro_res_image_6600.h  __idle__



### LOCK
//		==>DisplayClockCallbackFun
//		======>1.DrawAClock
//		======>2.OutputIdleWinDateKeylock
//		======>2.OutputIdleWinWeekKeylock
//		======>3.DisplayDate
//		====>DisplayMissedEventDC
app:keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg
//		==>DisplaySSTimerWithImage
//		======>1.DrawAClock
app:keylock\c\mmikl_keylock.c  void^DisplayScreenSaverTime( )



[1.3] menu, second
// menu
//		==>CreateMainMenuCtrl                        # init
//		====>MainmenuCtrlConstruct
//		======>MatrixMenuInit
//		========>MatrixMenuInitMenuDetail
//		==========>MatrixMenuGetInfo
//		============>MatrixMenuGetNotTitleStyleInfo
//		============>MatrixMenuGetTitleStyleInfo     # bg rect
//		==>MainmenuCtrlHandleMsg                     # up/down
//		====>MatrixMenuHandle
//		======>HandleMatrixMenuDirectionKey
//		========>MSG_FULL_PAINT
//		==>MainmenuCtrlHandleMsg
//		====>MSG_CTL_PAINT

// menu--one page
//		==>MatrixMenuDraw
//		====>MatrixMenuGetTopAndBottomLineIndex    # icon rect

// menu--matrix
//		==>MatrixMenuDraw
//		====>HandleMatrixMenuGetIconRect


// index
source:mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
source:mmi_kernel/include/mmitheme_mainmenu.h  MAINLCD_SIZE_240X320
// draw
app:mainmenu\c\mmi_mainmenu_matrix.c  MMITHEME_DrawMainmenuItem
// title
source:mmi_service/export/inc/mmi_custom_define.h  MMISET_DEFAULT_MENU_STYLE_E
app:mainmenu\c\mmi_mainmenu_matrix.c  MatrixMenuDisplayActiveItemTitle
// menu softkey, prg
app:theme/c/mmitheme_mainmenu.c  is_has_button
app:mainmenu/c/mainmenu_win.c  MAINMENU_ICON_WIN_TAB
app:mainmenu\c\mmi_mainmenu_matrix.c  ->is_need_prgbox

// menu--one page
app:mainmenu\c\mainmenu_win.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
source:mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_data_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
source:mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE

// menu--matrix
source:mmi_app\app\theme\c\mmitheme_mainmenu.c  MAINMENU_NINE_MATRIX_STYLE
source:mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_NINE_MATRIX_STYLE
source:mmi_service\export\inc\mmi_custom_define.h  MAINMENU_NINE_MATRIX_STYLE
app:mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_NINE_MATRIX_STYLE
app:mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_NINE_MATRIX_STYLE
source:mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_NINE_MATRIX_STYLE


// menu--main
app:mainmenu\c\mmi_mainmenu_data_128x128.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_128x128.c 570
app:mainmenu\c\mmi_mainmenu_data_128x160.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_176x220.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x240.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x320.c s_mainmenu_item_data
//app:mainmenu\c\mmi_mainmenu_data_240x320.c MAINMENU_FLP_STYLE

// menu--main
app:mainmenu\c\mainmenu_win.c  HandleMainMenuWinMsg
// menu--second
app:mainmenu\c\mainmenu_win.c  HandleSecMenuStaticMsg
app:mainmenu\c\mainmenu_win.c  3353

// menu--tools
source:mmi_app\common\c\mmi_menutable_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
source:mmi_app\common\c\mmi_menutable_128x128.c GUIMENU_ITEM_T^menu_icon_tools
source:mmi_app\common\c\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_icon_tools
source:mmi_app\common\c\mmi_menutable_176x220.c GUIMENU_ITEM_T^menu_icon_tools
source:mmi_app\common\c\mmi_menutable_240x320.c GUIMENU_ITEM_T^menu_icon_tools

// menu--palyer
source:mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_icon_player
source:mmi_app\common\c\mmi_menutable_128x160.c  GUIMENU_ITEM_T^menu_icon_player
source:mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_icon_player
source:mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_icon_player

// menu--settings(8910)
source:mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_settings_icon
source:mmi_app\common\c\mmi_menutable_128x160.c  GUIMENU_ITEM_T^menu_settings_icon
source:mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_settings_icon
source:mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_settings_icon
// menu--settings(107)
app:setting\c\mmiset_menutable.c  GUIMENU_ITEM_T^menu_set_phone


// menu img
ctrl:Menu\c\ctrlmenu_popup.c  check_unsel_img
ctrl:Menu\c\ctrlmenu_sec.c   check_unsel_img
// menu enter
source:mmi_app\app\mainmenu\c\mainmenu_win.c  case^ID_TOOLS_RECORD
source:mmi_app\app\mainmenu\c\mainmenu_win.c  case^ID_ENTERTAIMENT_CAMERA

//tone



[1.4] dial
// Open
//		==>MMIAPIIDLE_OpenDialWin
//		====>MMIAPIIDLE_EditDialWin
//		======>MMK_CreateWindow   # win
//		======>InitDialEdit
//		======>MMK_CreateControl  # softkey
app:idle\c\mmiidle_dial.c  HandleDialWinMsg


### 微调
// display--分行--平均行间距 
ctrl:editbox\c\ctrlbaseflex_display.c  void^DisplayTextString
ctrl:editbox\c\ctrlbaseflex_display.c  BIG_DIAL_NUM
// display--分行--取消底部间距，相差1个像素刚好对齐
ctrl:editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
ctrl:editbox\c\ctrlbaseedit_internal.c  976
// display--分行--拨号不计算行间距
ctrl:editbox\c\ctrlbaseedit_internal.c  uint16^BASEEDIT_GetLineHeight
ctrl:editbox\c\ctrlbaseedit_internal.c  1023
// display--分行--拨号位置不下移
ctrl:editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetLineRect
ctrl:editbox\c\ctrlbaseedit_internal.c  1270
// display--分行--超位置
ctrl:editbox\c\ctrlbaseflex_cursor.c  BASEEDIT_GetTopLineOffsetRange


// 智能拨号
//		==>MMIAPIIDLE_SwitchDialWin
//		====>MMIAPIIDLE_SwitchEditDialWin
//		======>InitDialEdit
//		========>edit_init
//		======>DrawDialPanelLine    # 画线
//		==>MMIAPIIDLE_EditDialWin
//		========>list_init
//		====>5+52+5+2
//		======>margin_tb_space
app:idle\c\mmiidle_dial.c  HandleDialWinMsg
// icon
source:mmi_kernel\include\mmi_theme.h  BIG_DIAL_NUM
// --image
Save:node\C\study\Macro_res_image_8910.h  __Dial__


// 拨号光标
ctrl:editbox\c\ctrlbaseflex_cursor.c  void^BASEFLEX_DisplayCursor
// 拨号光标--set
ctrl:editbox\c\ctrlbaseedit_highlight.c   void^BaseEditCtrlSetHighlight
// display--align
ctrl:editbox\c\ctrlbaseedit.c  CTRLBASEEDIT_SetAlign
// display--bg
ctrl:editbox\c\ctrlbaseedit_internal.c  BASEEDIT_DisplayBg



[1.5] test
// test code
Save:node\C\study\Macro_doc_8910.h  __code__


// version
app:eng/c/mmieng_uitestwin.c  ID_ENG_TEST_SW_VERSION
// version
app:eng\c\mmieng_base.c   ShowVersionInfo
// version--save
app:eng\c\mmieng_base.c  MMIAPIENG_SaveTestResult


// imei
app:parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr
// 		MMIAPIPHONE_OpenIMEIDisplayWin();

// Parse
app:idle\c\mmiidle_dial.c  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM



// 手机测试
//		==>UITESTWIN_OpenPhoneTestWin
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestMenuWinHandleMsg
// 手机测试--menu
app:eng\c\mmieng_menutable.c  menu_phone_test

// 单项测试
//		==>UITESTWIN_OpenItemTestWin
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGItemTestMenuWinHandleMsg
// 单项测试--menu
app:eng\c\mmieng_menutable.c  menu_phone_item_test

// 串行测试
//		==>
app:eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// 测试结果
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
app:eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo

// 工程模式
//		==>MMIAPIENG_StartEngineerMenu
app:eng/c/mmieng_main.c  MMI_RESULT_E^ENGMainMenuWinHandleMsg
// 工程模式--menu
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_eng
// 工程模式--apptest
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_app_set
// 工程模式--apptest--usb
app:eng/c/mmieng_main.c  case^ID_ENG_USB_TEST_SET

// 老化测试
app:eng/c/mmieng_uitestwin.c  SPD_ENGINEER_SUPPORT_MONKEY_SET

// touch
Save:node\C\project\Macro_cfg_8910.h  __torch__


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
source:mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE
source:mmi_service\source\mmisrvcommon\c\mmi_common.c s_file_default_path
app:udisk\c\mmi_sd.c  MMISD_CreateDefaultFold

//record
UpdateRecordFilePath(record_win_data_ptr);


//
app:fmm\c\mmifmm_mainwin.c HandleFmmMainWinMsg
app:fmm\c\mmifmm_mainwin.c HandleMenuOption
// record
app:fmm\c\mmifmm_mainwin.c HandleRecordListWinMsg

// FILE
MMIFMM_HandleOpenFileWin
// 不进U盘 __UsbMode__
app:udisk\c\mmiudisk_wintab.c  USB_CONNECT_DEFAULT_CHARGE


[1.7] Setting
//
HandleSetLanguageInputContentWindow 	 //输入语言
//设置-情景模式
PromptSuccessWin
//
app:setting/c/mmiset_phonewin.c  MMISET_INPUT_RESET_FACTORY_PWD_WIN_TAB


// cl set
app:setting\c\mmiset_callwin.c  InitPdaCallOtherSettingsCtrl



// Reset
Save:node\C\study\Macro_fun_8910.h  __reset__



// sos

// set--phone
//		==>MMIAPISET_EnterPhoneSettingWin
//		====>MMISET_PHONE_SETTING_WIN_TAB  #128*160
//		======>HandleSetPhoneSettingWindow
//		====>MMISET_SET_PHONE_WIN_TAB      #240*320
app:setting/c/mmiset_phonewin.c  MMISET_PHONE_SETTING_WIN_TAB
app:setting/c/mmiset_phonewin.c  MMISET_SET_PHONE_WIN_TAB
// set--phone--240*320
//		==>MENU_SET_PHONE
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
//		==>SMSAPPNewEventCallback
app:sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
app:sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND
//		==>MMISMS_ShowNewMsgPrompt
//		====>ShowNewMsgPrompt
//		======>MMIPUB_OpenAlertWinByTextPtr
app:sms\c\mmisms_commonui.c  MMISMS_HandleNewMsgWin

### 未读数量
// mainmenu--sms--num
//		==>MatrixMenuDraw
//		====>MatrixMenuDrawItem
//		======>MMITHEME_DrawMainmenuItem
app:sms\c\mmisms_api.c MMIAPISMS_GetAllUnreadMsgCount




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
app:cc\c\mmicc_{wintab}.c MMI_CALL_NAME_FONT
// ui--label(默认)
app:cc\c\mmicc_{wintab}.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(大屏)
app:cc\c\mmicc_{wintab}.c LRBUTTON_WIDTH


// call--image
Save:node\C\study\Macro_res_image_8910.h __call__


// 流程--来电-MT，
//		==>MMICC_HandlePsMsg
//		====>CC_CallAlertingInd
//		======>CC_CallSetupIndEx  #107
//		======>CC_CallSetupInd    #8910
//		========>MMICC_UpdateCallStatusDisplay      #mo mt dis共用
app:cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMtCallWin
//		============>OpenCallingWin
//		==============>PdaDisplaySingleCallInfoForCommon
app:cc\c\mmicc_{wintab}.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_{wintab}.c  PdaDisplaySingleCallInfoForCommon  


### 小屏
// label--name, num
app:cc\c\mmicc_{wintab}.c  MMICC_CONNECTED_SIM_LABEL_CTRL_ID
// anim--pad--小屏无效
app:cc\c\mmicc_{wintab}.c  9453

### 大屏
app:cc\h\

// --cc--bar
// --cc--str--3st--num/state
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_HOLD_NAME_LABEL_CTRL_ID
// --cc--str--num
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_NAME_LABEL_CTRL_ID  [2]
// --cc--str--name
// --cc--anim--photo
app:cc\c\mmicc_{wintab}.c  void^PdaDisplayCallPhotoForCommon
// --cc--str--time
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_TIME_LABEL_CTRL_ID
// --cc--str--connect/state
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_STATE_LABEL_CTRL_ID
// --cc--anim--Mo/Mt/Cur/Auto/Opt/Fly
app:cc\c\mmicc_{wintab}.c  DisplayCallAnimPhotoForCommon


// call--pos
Save:node\C\study\Macro_pos_8910.h  __call__


// 流程--去电-MO，
//		==>MMICC_ProcessMakeCall  #107
//		====>ProcessPhoneNumExt
//		======>MakeCallReqExt
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMoCallWin
//		============>CC_CallStateDisplaying      # 对应 CC_FreeSimStatusSpace
//		============>MMISUB_SetSubLcdDisplay     # sublcd
//		============>OpenConnectedWin
//		==============>PdaDisplaySingleCall
//		============>DisplayCallAnimPhotoForCommon
//		========>MMICC_EnableRemoteMute(FALSE)
app:cc\c\mmicc_{wintab}.c  CC_HandleCcWinMsg
app:cc\c\mmicc_{wintab}.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID


// 流程--挂断 DIS
source:mmi_app\kernel\c\mmi_default.c  HandleFlipDown  MSG_KEYDOWN_FLIP
app:cc\c\mmicc_app.c 4345
app:cc\c\mmicc_{wintab}.c  CC_HandleDisconnectWinMsg
app:cc\c\mmicc_{wintab}.c  MMICC_OpenDisconnectWin  

app:cc\c\mmicc_{wintab}.c  MMICC_MENU_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_CALLLIST_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_PROCESSING_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_ADJUSTVOLUME_WIN_ID

app:cc\c\mmicc_{wintab}.c  MMICC_HOLDMENU_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_STATUS_WIN_ID
//app:cc\c\.c  MMIIDLE_DIAL_MENU_WIN_ID
//app:cc\c\mmicc_app.c MMICC_CALL_WAIT_INDICATOR_WIN_ID
//app:cc\c\mmicc_app.c MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_{wintab}.c 20008

// 107 挂断
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>CC_DisconnectedCallByIndex
//		========>MMICC_OpenDisconnectWin(call_time)  #8910在前面
//		==========>PdaDisplayDisconnectWin
//		============>CC_TimeCountToStr(call_time)
//		==========>MMICC_HandleOperAfterCallEnd
//		============>MMISUB_SetSubLcdDisplay()
app:cc\c\mmicc_app.c case^APP_MN_CALL_DISCONNECTED_IND


// 流程--接听
app:cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent
// 流程--接听 107
//		==>MMICC_HandlePsMsg
//		====>case^APP_MN_SETUP_COMPLETE_CNF
//		====>CC_SetupCompleteCnf
//		======>MMICC_VibrateForConnectPrompt
//		======>MMICC_UpdateCallStatusDisplay
//		========>case^MMICC_MO_CONNECTED_IND
//		========>MMICC_UpdateCurrentCallStatus


// 112
app:cc\c\mmicc_{wintab}.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  


// 多卡通话--option
//		==>HandleHoldMenuWinMsg
//		====>MMICC_HoldCall
//		======>CC_HoldCall

// 多卡通话--挂断
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>MMICC_UpdateCallStatusDisplay
//		======>MMICC_OpenDisconnectWin        #8910在前面
//		======>CC_DisconnectedCallByIndex
//		======>CC_HandleDisconnectedInMPTY    # s_call_context.call_number -1

// 多卡通话--接听
//		==>MMICC_HandlePsMsg
//		====>case^APP_MN_SETUP_COMPLETE_CNF
//		====>CC_SetupCompleteCnf
//		======>MMICC_UpdateCallStatusDisplay
//		========>case^MMICC_MO_CONNECTED_IND
//		========>MMICC_UpdateCurrentCallStatus
//		==========>CustomCreateAndDisplayMultiCall
//		==========>DisplayCallInfoForMulti
//		============>CustomShowMultiCallList    #list

// 多卡通话--会议电话
//		========>MMICC_UpdateCurrentCallStatus
//		==========>PdaDisplaySingleCall
//		============>PdaDisplayMPTYCallInfoForCommon

// 多卡通话--拨出
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMoCallWin
//		============>OpenConnectedWinByWinTab
//		==============>CustomDisplayMultiCallInfoForCommon   #show
//		================>CustomShowMultiCallList    #list
// --
MMICC_MULTI_CALL_ANIMATION_LIST_ID
MMICC_MULTI_CALL_ANIMATION_LIST_ID
101 202


// 多卡通话--来电
//		==========>PdaDisplayMultiCall
//		============>PdaDisplayCallInfoForMultiHoldCall   #show


// 流程--update
//		==>CC_HandleCcWinMsg
//		====>MMICC_UpdateCurrentCallStatus




	
[1.10] pb, cl
// enter
//		==>MMIMAINMENU_StartPB
//		====>MMIPB_OpenPbWin
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


// pb-memory
app:pb\c\mmipb_view.c  MMI_RESULT_E^^HandleMemDetailWinMsg



//1.cl-menu
app:cl\c\Mmicl_wintab.c   MMICL_ICON_MAIN_MENU_WIN_TAB
// cl--menu(240)
app:cc\c\mmicc_menutable.c GUIMENU_ITEM_T^menu_cl

//2.cl-list
// cl--title
app:cl\c\Mmicl_wintab.c   HandleLogListWindow
app:cl\c\Mmicl_wintab.c   HandleCallLogChildWindow

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
//		==>MMIAPIDC_OpenPhotoWin
//		====>MMIAPIDCSRV_OpenMainWin
//		======>EntryApplet
//		========>DCAMERA_GetActualSnapshotMaxResolution
//		========>EntryMainWin
//		==========>OpenMainWin
//		============>StartDCApplet
//		==============>SPRD_CAMERA_APPLET_ID
//		==============>MMK_StartApplet
//		==>RegDCAppletInfo
//		====>SPRD_CAMERA_APPLET_ID
//		======>DCApplet_HandleEvent
//		========>DC_ValidatePrivacyAppEntry
//		==========>CreateDCWaitWin
//		==>HandleDCWaitWinMsg
//		====>InitStartDCActivity
//		======>InitRunningParameter
//		====>StartDCActivity
//		======>MMIDC_OpenDC
//		========>DCAMERA_Open
//		======>MMIDC_DC_TAB     ##
app:camera\c\mmidc_main_wintab.c  MMI_RESULT_E^HandleCameraWinMsg
//		==>MMIDC_FlowStart
//		====>StartDCPreview
//		======>MMIDC_ResetHitTimer  # 定时退出
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
// pic--enter
//		==>HandlePicListWinMsg
//		====>OpenPicListWin
//		======>CreatePicListCtrl
//		========>MMIPICVIEW_VIEW_ICONLIST     # 240*320
//		==========>SetIconListParam
//		============>MMIPICPREVIEW_LIST_ICON_SIZE
app:pic_viewer\c\mmipicview_list.c HandlePicListWinMsg
app:pic_viewer\c\mmipicview_list.c void^SetIconListParam
//		====>AppendPicIconListIcon            # 一次只能加载一个
//		======>CTRLICONLIST_AppendIcon
//		========>InsertIcon
//		==========>ICONLIST_GetIconRect     # size
//		============>ICONLIST_GetRect       # list
//		============>ICONLIST_GetItemWidth  # item 分行
//		==============>iconlist_ctrl_ptr->theme.icon_item.width  #128*160

// pic--opt
app:pic_viewer\c\mmipicview_wintab.c HandlePiclistOptWinMsg
app:pic_viewer\c\mmipicview_wintab.c HandlePreviewOptWinMsg
// zoom
app:pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
ctrl:IconList\c\ctrliconlist.c  void^DisplayDelimiter
app:pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR

### pic--image
Save:node\C\study\Macro_res_image_8910.h __pic__


[1.13] record
// enter
//		==>MMIAPIRECORD_OpenMainWin
//		====>SPRD_RECORD_APPLET_ID
//		====>MMK_StartApplet
//		======>MMIRECORD_RegAppletInfo
//		========>SPRD_RECORD_APPLET_ID
//		==========>RecordApplet_HandleEvent
//		============>MMIRECORD_OpenRecordMainWin
//		==>MMIRECORD_MAINPLAY_WIN_TAB
//		====>HandleRecordMainPlayWinMsg   ## appMsg
//		======>MMIRECORD_HandleRecordMainPlayWinMsg
app:record\c\mmirecord_common_wintab.c  MMI_RESULT_E^HandleRecordMainPlayWinMsg
//		========>MMK_CreateCtrlByWinTabEx
//		==========>MMIRECORD_MAINPLAY_WIN_CTRL_TAB
app:record\c\mmirecord_barphone_wintab.c  MMIRECORD_HandleRecordMainPlayWinMsg


### record--image
Save:node\C\study\Macro_res_image_8910.h __record__
// record--pos
//	--注意 126*160 从第3组 MAINLCD_SIZE 开始
app:record\h\mmirecord_position.h  {size2}


// record--Update
//		==>MMIRECORD_HandleRecordMainPlayWinMsg
//		====>SetFormParam
//		=======>SetPortraitAndLandscapeFormParam
//		========>record_record_bg_x         # anim
//		====>MMIRECORD_UpdateScreen
//		======>DisplayRecordAllBG
//		========>time
//		========>anim
//		======>anim_frame_red  ## anim
//		======>DisplayRecordAllBG
//		========>need_refresh_bg_y
//		======>DisplayProgress
app:record\c\mmirecord_barphone_wintab.c  void^MMIRECORD_UpdateScreen


// record--init--path
SetRecordFilePath



[1.14] fm
// mk
Save:node\C\project\Macro_Note_8910.h __fm__

// enter
//		==>MMIAPIFM_OpenMainWin
//		====>MMIFM_OpenMainWin
//		======>MMK_StartApplet
//		========>MMIFM_RegAppletInfo
//		==========>SPRD_FM_APPLET_ID
//		============>FMApplet_HandleEvent
//		==>MMI_FM_MAIN_WIN_TAB
//		====>HandleFmMainMsg
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg

// fm--draw
//		==>case^MSG_OPEN_WINDOW
//		====>SetFMMainFormParam
//		======>SetButtonsAndLabelRect   #btn
//		==>case^MSG_FULL_PAINT
//		====>DisplayMainWindow    # style_new
//		======>bg1, bg2, ADJ, bg3
//		======>DisplayFMFrePic    # 指针
//		======>DrawFrqqencyText   # txt
//		======>DrawStatusButton   # txt
//		========>SetVolumeBgWhenZero
app:fm\c\mmifm_wintab.c  void^DisplayMainWindow
// fm--Record
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
// fm--opt
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
app:fm\c\mmifm_wintab.c  void^HandleFMAction
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
// fm--所有set channel
app:fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
// fm--set edit
// file: Music/FM Radio clips/Radio___J-001.wav
// fm--Headset
app:fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
app:fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction

### fm--image
Save:node\C\study\Macro_res_image_8910.h __fm__




[1.15] 



[1.16] vp
// mk
prj:project_{cur}.mk  VIDEO_PLAYER_SUPPORT = TRUE


// enter (8910)
//		==>MMIAPMAINWIN_Enter
//		====>MMIMP3_MAIN_PLAY_WIN_TAB


// enter (107)
//		==>MMIAPIVP_MainEntry
//		====>VP_ValidatePrivacyAppEntry
//		====>MMIAPIVP_PlayVideoFromVideoPlayerEx
//		======>MMIAPIVP_EnterVdoPly
//		========>MMIVP_MAIN_PLAY_WIN_TAB
//		======>MMIVP_MAIN_PLAY_WIN_TAB_H
app:videoplayer/c/mmivp_wintable.c  MMIVP_MAIN_PLAY_WIN_TAB_H
//		==>SetFormParam      #竖屏可切换
//		====>SetFormParamH
//		==>SetVPLayoutParam  #横屏不可切换
app:videoplayer/c/mmivp_wintable.c  MMI_RESULT_E^HandleVPWinMsg


// Short
app:videoplayer/c/mmivp_wintable.c  HandleShortCutMsg
// Opt
app:videoplayer/c/mmivp_wintable.c  HandleOptMenuWinMsg
// softkey
app:videoplayer/c/mmivp_wintable.c  DisplayVPWinSoftkey


// vp--image
Save:node\C\study\Macro_res_image_8910.h __vp__
// vp--pos
//	--
app:videoplayer\h\mmivp_position.h   {size}

// vp--Update(107)
//		==>DisplayRecordAllBG
//		====>need_refresh_bg_y
//		==>DisplayProgress
// time
app:record\c\mmirecord_barphone_wintab.c  void^UpdateVPWin




[1.17] mp3
// enter
//		==>JoinMainPDAWin            # 240*320
//		====>MMIMP3_PLAY_WIN_TAB_V   # win
app:audioplayer\c\mmiapwin_main.c  MMIAPMAINWIN_Enter
app:audioplayer\c\mmiapwin_main_pda.c  MMIMP3_PLAY_WIN_TAB_V
app:audioplayer\c\mmiapwin_main_mini.c  MMIMP3_PLAY_WIN_TAB_V
// mp3--Layout
//		==>HandleMp3PlayWinMsg
//		====>HandleAPDefaultWinMsg
//		======>HandlePDADefaultWinMsg   # 240*320
//		========>SetMp3CtrlParam
//		==========>SetMp3PdaFormParam
//		==========>SetMp3BtnParam
//		==>HandleMiniDefaultWinMsg      # 128*160
//		==>SetMp3LayoutParam--128*160
app:audioplayer\c\mmiapwin_main.c  HandleMp3PlayWinMsg
// mp3--btn
//		==>GetAPButtonInfo
//		====>MMIMP3_BUTTON_TYPE_E
// mp3--anim--专辑
//		==>SetMp3PdaFormParam           # Layout
//		====>MMIAP_UpdateAnimCtrlInfo
//		======>MMIAP_SetAnimCtrlParam
//		========>SetAnimParam           # 设置专辑或默认图
//		==========>CTRLANIM_SetParam
// mp3--father--播放
//		==>btn
// mp3--fileInfo
// mp3--process

// enter--mini
app:audioplayer\c\mmiapwin_main_mini.c  450
// enter--pda
//		==>OwnerDrawHandleMsg
//		====>MMIAP_DrawProgressOwnerDrawCtrl
//		======>MMIMP3_DisplayProgress
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

// ui_2--pos--128*160
//		==>MMIMP3_TIME_FONT          # font
//		==>MP3_LAYOUT_PREV_RECT_V    # btn
//		==>MP3_PROGRESS_RECT_V       # progress
//		==>MP3_TIME_RECT_V           # time
//		==>MP3_PIC_RECT_V            # bg
app:audioplayer/h/mmiap_position.h   {size}
// ui--pos--128*160
//		==>MMIMP3_TITLE_MARGIN_TOP   # 


// mp3--icon
Save:node\C\study\Macro_res_image_8910.h __Mp3__



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
source:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultHeadsetDetect
//    case KEY_LONG_RELEASED:
//			MMIAPIALM_StartAlarm(0, 0);

// key Headset 不亮屏
source:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultBackLight
source:mmi_app\kernel\c\mmi_default.c  1825
//            //MMIDEFAULT_TurnOnBackLight();
source:mmi_app\kernel\c\mmi_default.c  void^MMK_HandlePublicKey
source:mmi_app\kernel\c\mmi_default.c  4147
source:mmi_app\kernel\c\mmi_default.c  4133
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
source:mmi_app\common\c\mmi_pubwin.c  5352

	

[1.19] calc
// enter
//		==>MMIAPICALC_OpenMainWin
//		====>CALC_WIN_TAB            # win
//		====>CALC_CTRL_TAB_H         # tab
app:accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg
app:accessory\c\mmicalc_main.c  CALC_WIN_TAB
app:accessory\c\mmicalc_main.c  CALC_CTRL_TAB_H
//		==>InitFormWin
//		====>InitButtonWidthandHeight
//		==>DisplayCalcFormulaEx   # 单行/双行
app:accessory\h\mmicalc_export.h  CALC_LINE_M_STARTX

// draw
app:accessory\c\mmicalc_main.c  void^CalcRefreshContent
app:accessory\c\mmicalc_main.c  void^InitButtonFont



[1.20] calendar
// draw
app:accessory/c/mmicalendar_main.c  MMI_CALENDAR_CHINESE_JIEQI
// pos
app:accessory/h/mmiacc_position.h 128X128

// main
//		==>DrawMonthCalendar
//		====>DrawMonthTitle
//		====>DrawYearTitle
//		====>DrawLunarDate
//		====>DrawSchdule
//		====>DrawWeeks
//		====>DrawMonthDates
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


// calen--sch
//		==>AppendUserListBoxItem
//		==>AppendUserListBoxItemData
app:accessory\c\mmischedule.c  MMI_RESULT_E^HandleSchViewListWinMsg



[1.21] unitconversion
## unitconversion
prj:project_{cur}.mk  MMI_UNITCONVERSION_SUPPORT = TRUE


[1.22] game
## game
prj:project_{cur}.mk  GAME_SUPPORT = TRUE
app:game\


// 推箱子
prj:project_{cur}.mk  GAME_BOXMAN_SUPPORT = TRUE
// 俄罗斯方块
prj:project_{cur}.mk  GAME_TETRIS_SUPPORT = TRUE
app:game\game_square\
// 贪吃蛇
prj:project_{cur}.mk  GAME_SNAKE_SUPPORT = TRUE
//prj:project_{cur}.mk  DEFAULT_GAME = TETRIS

// 连连看
prj:project_{cur}.mk  GAME_LINK_SUPPORT = TRUE
// 五子棋
prj:project_{cur}.mk  GAME_QUINTET_SUPPORT = TRUE


// game
// --.c, .h, file
make\app_main\app_main.mk  game_boxman
// --默认游戏
make\app_main\app_macro.mk  GAME_BOXMAN_SUPPORT
make\app_main\release_app_macro.mk  GAME_BOXMAN_SUPPORT
// --mdu_def
make\resource_main\resource_header.mk  game_boxman_mdu_def
// --menutable
app:game\game_manager\c\mmigame_menutable.c  GUIMENU_ITEM_T^^menu_gm_list
app:game\game_manager\c\mmigame_wintab.c  IDGAME_MENU_SNAKE_ITEM_ID
source:mmi_app\common\h\common_mdu_def.h  IMAGE_SECMENU_ICON_PASTIME_SNAKE 
// --MODULE
source:resource\mmi_res_prj_def.h  game_snake

###
// snake
app:game\game_snake\c\mmigame_snake_wintab.c



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


// bt--nv
MMIBT_GetBtStatusForIcon
//    is_poweron = BT_GetState();


[1.24] env
### idle switch

// env--enter
//		==>MMIENVSET_OpenMainMenuWindow  # env
//		====>HandleEnvSetMainMenuWindow
app:envset\c\mmienvset_wintab.c MMIENVSET_MAIN_MENU_WIN_TAB
// env--option
//		======>OpenEnvOptMenuWin
//		======>HandleEnvOptMenuWindow
app:envset\c\mmienvset_wintab.c  MMIENVSET_MAIN_OPT_WIN_TAB
// env--option--set
//		======>HandleEnvSetMainMenuWindow
//		======>MENU_ENVSET_SETTING
app:envset\c\mmienvset_wintab.c  MMIENVSET_SETTING_OPT_WIN_TAB
app:setting\h\mmiset_menutable.def  MENU_ENVSET_SETTING


// env--option--set--setRing
//		==>HandleOperationMenu
//		====>MMISET_EnterRingSettingMenu
//		======>EnterRingSettingMenu
//		========>HandleRingMainMenuWindow
app:setting\c\mmiset_wintab.c  MMISET_ICON_RING_MENU_WIN_TAB
// env--option--set--setRing--callRing
//		==>EnvSetRingParam
app:setting\c\mmiset_wintab.c  MMISET_RING_SELECT_CALL_WIN_TAB


// env--option--set--RingVol
//		==>HandleOperationMenu
//		====>MMIAPICOM_OpenPanelChildWin
//		======>HandlePanelWindow
//		========>AdjustValue
//		====>SetRingVolumeCB
//		======>SetAllRingVolParam        # vol str
//		========>GetEnvSetOptValue

//		======>MMIAPICC_SetCallVolume    # ring, no use
//		======>MMIAPICC_SetCallVolume    # msg
//		======>MMIAPICC_SetCallVolume    # call
app:envset\c\mmienvset_wintab.c  MMIENVSET_ALL_RING_VOL_WIN_TAB



// env--option--set--RingType
//		==>MMIAPISET_SetCurRingType
//		==>MMIENVSET_PlayRingByListItem
//		==>MMIENVSET_PlayMsgAlarmRingByListItem
//		==>MMIAPISET_PlayCallRingByVol
app:envset\c\mmienvset_wintab.c  MMIENVSET_RING_TYPE_WIN_TAB


// env--option--set--OtherRing
//		==>MMIAPISET_SetCurRingType
app:setting\c\mmiset_wintab.c 822
app:envset\c\mmienvset_wintab.c  MMIENVSET_OTHER_RING_SET_WIN_TAB


// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request


// env--option--set--setRing--PlayRing
//		==>PlayRing
//		====>MMIAPISET_PreviewRing
//		======>PlayFixedRing
//		==>vib
//		==>timer
app:setting\c\mmiset_ring.c 1736 PlayRing






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
## sos
// sos 开关
prj:project_{cur}.mk  MMI_INDIAN_SOS_SUPPORT


// sos--enter
app:setting\c\mmiset_sos.c  MMIAPISET_EnterSOSSettingWin
// sos--list
app:setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg



## SPEED
// 亲情号码
app:cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// 亲情号码--编辑
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// 亲情号码--编辑--num
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg




[1.29] startup
// Start
app:phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow

// power
// --8910 要加 RED-close
//		==>HandleChargeStartupWindow
//		====>DisplayDayTimeEffert
//		======>ChargeDisplayDateAndDay
app:phone\c\mmiphone_charge.c  PHONE_STARTUP_CHARGE_WIN_TAB
app:phone\c\mmiphone_charge.c  PHONE_STARTUP_CHARGE_OK_WIN_TAB

### power--patch
Save:node\C\study\Macro_patch_8910.h  __charge__


// power--image
Save:node\C\study\Macro_res_image_8910.h  __charge__


[1.30] 
	





