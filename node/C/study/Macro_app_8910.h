

// Ŀ¼:
//	 2. ����
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
Save:node\C\study\Macro_app_8910.h  \[1.21\] unitconversion
Save:node\C\study\Macro_app_8910.h  \[1.22\] game
Save:node\C\study\Macro_app_8910.h  \[1.23\] bt
Save:node\C\study\Macro_app_8910.h  \[1.24\] env, Profile
Save:node\C\study\Macro_app_8910.h  \[1.25\] 
Save:node\C\study\Macro_app_8910.h  \[1.26\] 
Save:node\C\study\Macro_app_8910.h  \[1.27\] Browser �������
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
app:idle\c\mmiidle_cstyle.c  void^DisplayIdleWinSoftkey
// IDLE--8910
app:idle\c\mmiidle_mstyle.c  void^OutIdleWinContent
app:idle\c\mmiidle_mstyle.c  void^DisplayIdleWinSoftkey


// --idle--pos
app:theme/c/mmidisplay_data_{size}.c  MMI_IDLE_DISPLAY_T^^mmi_idle_display
// --idle--sim
app:theme/c/mmidisplay_data_{size}.c  MMI_IDLE_COMON_MAIN_LCD_Y_NETWORKNAME
// --idle--date,week
app:theme/c/
app:theme/c/mmidisplay_data_{size}.c  MMI_IDLE_DATE_Y
// --idle--time
app:theme/h/mmi_position.h  MMI_MAIN_TIME_Y
app:theme/h/mmi_position.h  IDLE_TIME_PIC_WIDTH


### LOCK
//		==>DisplayClockCallbackFun
//		======>1.DrawAClock
//		======>2.OutputIdleWinDateKeylock
//		======>2.OutputIdleWinWeekKeylock
//		======>3.DisplayDate
//		====>DisplayMissedEventDC
app:keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg




[1.3] menu, second
// index
source:mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
source:mmi_kernel/include/mmitheme_mainmenu.h  MAINLCD_SIZE_240X320
// bg rect
app:mainmenu\c\mmi_mainmenu_matrix.c  BOOLEAN^MatrixMenuGetTitleStyleInfo
// icon rect
app:mainmenu\c\mmi_mainmenu_matrix.c  HandleMatrixMenuGetIconRect
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
source:mmi_ctrl\source\Menu\c\ctrlmenu_popup.c  check_unsel_img
source:mmi_ctrl\source\Menu\c\ctrlmenu_sec.c   check_unsel_img
// menu enter
source:mmi_app\app\mainmenu\c\mainmenu_win.c  case^ID_TOOLS_RECORD

//tone


[1.4] dial
// Open
app:idle\c\mmiidle_mstyle.c  MMIAPIIDLE_OpenDialWin
// dial
app:idle\c\mmiidle_dial.c  MMIAPIIDLE_EditDialWin
app:idle\c\mmiidle_dial.c  HandleDialWinMsg


// display--����--ƽ���м�� 
source:mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  void^DisplayTextString
source:mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  BIG_DIAL_NUM
// display--����--ȡ���ײ���࣬���1�����ظպö���
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  976
// display--����--���Ų������м��
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  uint16^BASEEDIT_GetLineHeight
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1023
// display--����--����λ�ò�����
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetLineRect
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1270
// display--����--��λ��
source:mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  BASEEDIT_GetTopLineOffsetRange



// ���ܲ���
app:idle\c\mmiidle_dial.c  HandleDialWinMsg
app:idle\c\mmiidle_dial.c  MMIAPIIDLE_SwitchEditDialWin
// icon
source:mmi_kernel\include\mmi_theme.h  BIG_DIAL_NUM

// ���Ź��
source:mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  void^BASEFLEX_DisplayCursor
// ���Ź��--set
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_highlight.c   void^BaseEditCtrlSetHighlight
// display--align
source:mmi_ctrl\source\editbox\c\ctrlbaseedit.c  CTRLBASEEDIT_SetAlign
// display--bg
source:mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  BASEEDIT_DisplayBg



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


// �ֻ�����
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestMenuWinHandleMsg
// �ֻ�����--menu
app:eng\c\mmieng_menutable.c  menu_phone_test

// �������
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGItemTestMenuWinHandleMsg
// �������--menu
app:eng\c\mmieng_menutable.c  menu_phone_item_test

// ���в���
app:eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// ���Խ��
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
app:eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo

// ����ģʽ
app:eng/c/mmieng_main.c  MMI_RESULT_E^ENGMainMenuWinHandleMsg
// ����ģʽ--menu
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_eng

// MONKEY_TEST



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

//FILE
MMIFMM_HandleOpenFileWin


[1.7] Setting
//
HandleSetLanguageInputContentWindow 	 //��������
//����-�龰ģʽ
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

### ������
//		==>SMSAPPNewEventCallback
app:sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
app:sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND
//		==>MMISMS_ShowNewMsgPrompt
//		====>ShowNewMsgPrompt
//		======>MMIPUB_OpenAlertWinByTextPtr
app:sms\c\mmisms_commonui.c  MMISMS_HandleNewMsgWin

### δ������
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

// ����softkey��
MMK_DestroyControl(MMICC_CONNECTED_STATE_LABEL_CTRL_ID);


	
//
// ui--font
app:cc\c\mmicc_wintab_custom.c MMI_CALL_NAME_FONT
// ui--label(Ĭ��)
app:cc\c\mmicc_wintab_custom.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(����)
app:cc\c\mmicc_wintab_custom.c LRBUTTON_WIDTH
// ui--icon 59 47 181 169
app:cc\c\mmicc_wintab_custom.c 24908
// ui--icon 105 17
app:cc\c\mmicc_wintab_custom.c 13839
app:cc\c\mmicc_wintab_custom.c 23750
app:cc\c\mmicc_wintab_custom.c 23839


// call--image
Save:node\C\study\Macro_res_image_8910.h __call__


// ����--����-MT��
//		==>MMICC_HandlePsMsg
//		====>CC_CallAlertingInd
//		======>CC_CallSetupIndEx  #107
//		======>CC_CallSetupInd    #8910
//		========>MMICC_UpdateCallStatusDisplay      #mo mt dis����
app:cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMtCallWin
//		============>OpenCallingWin
//		==============>PdaDisplaySingleCallInfoForCommon
// --107
app:cc\c\mmicc_wintab.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_wintab.c  PdaDisplaySingleCallInfoForCommon  
// --8910
app:cc\c\mmicc_wintab_custom.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_wintab_custom.c  PdaDisplaySingleCallInfoForCommon  


### С��
// label--name, num
app:cc\c\mmicc_wintab_custom.c  MMICC_CONNECTED_SIM_LABEL_CTRL_ID
app:cc\c\mmicc_wintab_custom.c  8538
// anim--pad--С����Ч
app:cc\c\mmicc_wintab_custom.c  9453

### ����
// label--sim, state
app:cc\c\mmicc_wintab_custom.c  8085  sim, state
// label--time
app:cc\c\mmicc_wintab_custom.c  8272  time
// label--name, num
app:cc\c\mmicc_wintab_custom.c  8330  name
app:cc\c\mmicc_wintab_custom.c  8454  num
// label--num
app:cc\c\mmicc_wintab_custom.c  8454  num


// ����--ȥ��-MO��
//		==>MMICC_ProcessMakeCall  #107
//		====>ProcessPhoneNumExt
//		======>MakeCallReqExt
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMoCallWin
//		============>CC_CallStateDisplaying      # ��Ӧ CC_FreeSimStatusSpace
//		============>MMISUB_SetSubLcdDisplay     # sublcd
//		============>OpenConnectedWin
//		==============>PdaDisplaySingleCall
//		============>DisplayCallAnimPhotoForCommon
//		========>MMICC_EnableRemoteMute(FALSE)
app:cc\c\mmicc_wintab_custom.c  CC_HandleCcWinMsg
app:cc\c\mmicc_wintab_custom.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID


// ����--�Ҷ� DIS
source:mmi_app\kernel\c\mmi_default.c  HandleFlipDown  MSG_KEYDOWN_FLIP
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

// 107 �Ҷ�
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>CC_DisconnectedCallByIndex
//		========>MMICC_OpenDisconnectWin(call_time)  #8910��ǰ��
//		==========>PdaDisplayDisconnectWin
//		============>CC_TimeCountToStr(call_time)
//		==========>MMICC_HandleOperAfterCallEnd
//		============>MMISUB_SetSubLcdDisplay()
app:cc\c\mmicc_app.c case^APP_MN_CALL_DISCONNECTED_IND


// ����--����
app:cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent
// ����--���� 107
//		==>MMICC_HandlePsMsg
//		====>case^APP_MN_SETUP_COMPLETE_CNF
//		======>CC_SetupCompleteCnf
//		========>MMICC_VibrateForConnectPrompt
//		========>MMICC_UpdateCallStatusDisplay
//		========>case^MMICC_MO_CONNECTED_IND
//		========>MMICC_UpdateCurrentCallStatus


// 112
app:cc\c\mmicc_wintab_custom.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  


// �࿨ͨ��
app:cc\c\mmicc_wintab_custom.c  CustomShowMultiCallList
// �࿨ͨ��--name + num
app:cc\c\mmicc_wintab_custom.c  6477
app:cc\c\mmicc_wintab_custom.c  6514
// �࿨ͨ��--num
app:cc\c\mmicc_wintab_custom.c  6541
// �࿨ͨ��--option
//		==>HandleHoldMenuWinMsg
//		====>MMICC_HoldCall
//		======>CC_HoldCall

// �࿨ͨ��--�Ҷ�
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>MMICC_UpdateCallStatusDisplay
//		======>MMICC_OpenDisconnectWin        #8910��ǰ��
//		======>CC_DisconnectedCallByIndex
//		======>CC_HandleDisconnectedInMPTY    # s_call_context.call_number -1


// ����--update
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

// �����߶�:
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
app:cl\c\Mmicl_wintab.c   HandleCallLogChildWindow

//3.cl-deltail
//		==>�Ӻ����ȡ����
app:cl\c\Mmicl_wintab.c   InitLogListDetailContactItem
// cl deltail--����ʾλ��
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


//Camera�ֱ���:
Camera�����:








[1.12] pic
// enter
app:pic_viewer\c\mmipicview_list.c HandlePicListWinMsg
app:pic_viewer\c\mmipicview_list.c 696
// pic--size
//		==>ICONLIST_GetIconRect
//		====>ICONLIST_GetRect       #list
//		====>ICONLIST_GetItemWidth  #item
//		======>iconlist_ctrl_ptr->theme.icon_item.width
//		======>MMIPICPREVIEW_LIST_ICON_SIZE
app:pic_viewer\c\mmipicview_list.c void^SetIconListParam
//
app:pic_viewer\c\mmipicview_wintab.c HandlePiclistOptWinMsg
//
app:pic_viewer\c\mmipicview_wintab.c HandlePreviewOptWinMsg
// zoom
app:pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
source:mmi_ctrl\source\IconList\c\ctrliconlist.c  void^DisplayDelimiter
app:pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR



[1.13] record
// enter
//		==>MMIAPIRECORD_OpenMainWin
//		====>MMK_StartApplet
//		======>SPRD_RECORD_APPLET_ID
//		==>MMIRECORD_RegAppletInfo
//		====>SPRD_RECORD_APPLET_ID
//		======>RecordApplet_HandleEvent
//		========>MMIRECORD_OpenRecordMainWin
//		==>MMIRECORD_MAINPLAY_WIN_TAB
//		====>HandleRecordMainPlayWinMsg   ## appMsg
//		======>MMIRECORD_HandleRecordMainPlayWinMsg
app:record\c\mmirecord_common_wintab.c  MMI_RESULT_E^HandleRecordMainPlayWinMsg
//		==>MMK_CreateCtrlByWinTabEx
//		====>MMIRECORD_MAINPLAY_WIN_CTRL_TAB
//		==>SetPortraitAndLandscapeFormParam
//		==>SetFormParam
app:record\c\mmirecord_barphone_wintab.c  MMIRECORD_HandleRecordMainPlayWinMsg


// record--image
Save:node\C\study\Macro_res_image_8910.h __record__
// record--pos
//	--ע�� 126*160 �ӵ�3�� MAINLCD_SIZE ��ʼ
app:record\h\mmirecord_position.h  {size}


// record--Update(8910)
//		==>DisplayRecordAllBG
//		====>need_refresh_bg_y
//		==>anim_frame_red  ## anim
app:record\c\mmirecord_barphone_wintab.c  void^MMIRECORD_UpdateScreen

// record--Update(107)
//		==>DisplayRecordAllBG
//		====>need_refresh_bg_y
//		==>DisplayProgress
app:record\c\mmirecord_barphone_wintab.c  void^MMIRECORD_UpdateScreen


// record--init--path
SetRecordFilePath

 




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
	
// ����set channel
app:fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel


//set
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav

	

	
//�¹���:
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
	

//�ɹ���:
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
//		==>SetFormParam      #�������л�
//		====>SetFormParamH
//		==>SetVPLayoutParam  #���������л�
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
// pos (ֻ��һ��)
app:audioplayer\c\mmiapwin_main_mini.c  435

// bg play
app:audioplayer\c\mmiap_play.c  MMIAPIMP3_ResumeMp3

// ui--pos--128*160
//		==>MMIMP3_TIME_FONT          # font
//		==>MP3_LAYOUT_PREV_RECT_V    # btn
//		==>MP3_PROGRESS_RECT_V       # progress
//		==>MP3_TIME_RECT_V           # time
//		==>MP3_PIC_RECT_V            # bg
app:audioplayer/h/mmiap_position.h   {size}
// ui--pos--128*160
//		==>MMIMP3_TITLE_MARGIN_TOP   # 



[1.18] alarm
# Enter
// Enter
app:accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
app:accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
app:accessory\h\mmialarm_position.h
//�¹���:
app:accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg



# ģ��
// key Headset--������������
source:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultHeadsetDetect
//    case KEY_LONG_RELEASED:
//			MMIAPIALM_StartAlarm(0, 0);

// key Headset ������
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


// �޸�ƥ��--���жϴ���
app:accessory\c\mmialarm.c  BOOLEAN^MMIALM_GetArrivedEvent
//        if (cur_event_ptr->is_valid &&
//            cur_event_ptr->is_on &&
//            TRUE ) // IsMatchEvent(cur_date, cur_time, cur_event_ptr) )

//
app:accessory\c\mmialarm.c  BOOLEAN^MMIAPIALM_StartAlarm
//
app:accessory\c\mmialarm.c  BOOLEAN^OpenAlarmExpiredWin

// �����ӳ�
app:accessory\c\mmialarm.c  void^OpenAlarmAliveWin
app:accessory\c\mmialarm.c  8835

//
app:accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg

//
source:mmi_app\common\c\mmi_pubwin.c  5352

	

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


// ������
prj:project_{cur}.mk  GAME_BOXMAN_SUPPORT = TRUE
// ����˹����
prj:project_{cur}.mk  GAME_TETRIS_SUPPORT = TRUE
app:game\game_square\
// ̰����
prj:project_{cur}.mk  GAME_SNAKE_SUPPORT = TRUE
//prj:project_{cur}.mk  DEFAULT_GAME = TETRIS

// ������
prj:project_{cur}.mk  GAME_LINK_SUPPORT = TRUE
// ������
prj:project_{cur}.mk  GAME_QUINTET_SUPPORT = TRUE


// game
// --.c, .h, file
make\app_main\app_main.mk  game_boxman
// --Ĭ����Ϸ
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

// �����Զ������Ż�
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


// ʵ����������  ---------------- 	++++++
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



[1.27] Browser �������
// enter
app:browser\c\mmibrowser_func.c  MMIBROWSER_Enter
//
app:browser\c\mmibrowser_wintable.c  MMI_RESULT_E^BrwHandleStartPageWinMsg
//
//BrwHandlePopMenuWinMsg

### �򿪴洢����
app:browser\c\mmibrowser_func.c  MMIBROWSER_IsOnlyChooseStorage
//   BOOLEAN is_only_storage = FALSE;


// ��ȡ��������
//MMIBROWSER_GetSim�����SIM
//MMIBROWSER_GetNetSettingIndex������sim������ȡ��Ӧ�����õ�index
//MMICONNECTION_GetLinkSettingItemByIndex����ȡ��������

// CQ:
//	sim ���е� spn/pnn �ִ������ net_comparetable �е� pnn_or_spn �����õ�һ����
//	���ִ�Сд��
//	��Ӫ����apn ��Ϣ����Ҫ�� ntac �ļ�����ӣ����ұ��� Setting Name ����һ�£�
//	Ҳ���ִ�Сд



[1.28] sos
## sos
// sos ����
prj:project_{cur}.mk  MMI_INDIAN_SOS_SUPPORT


// sos--enter
app:setting\c\mmiset_sos.c  MMIAPISET_EnterSOSSettingWin
// sos--list
app:setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg



## SPEED
// �������
app:cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// �������--�༭
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// �������--�༭--num
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg










[1.29] startup
// Start
app:phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow





[1.30] 
	





