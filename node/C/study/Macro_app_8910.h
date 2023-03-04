
//目录
Save:node\C\study\Macro_app_8910.h  \[1.1\] win fun.
Save:node\C\study\Macro_app_8910.h  \[1.2\] idle, lock
Save:node\C\study\Macro_app_8910.h  \[1.3\] menu, second
Save:node\C\study\Macro_app_8910.h  \[1.4\] dial
Save:node\C\study\Macro_app_8910.h  \[1.5\] test, version
Save:node\C\study\Macro_app_8910.h  \[1.6\] file, path
Save:node\C\study\Macro_app_8910.h  \[1.7\] setting
Save:node\C\study\Macro_app_8910.h  \[1.8\] sms -----------------
Save:node\C\study\Macro_app_8910.h  \[1.9\] call
Save:node\C\study\Macro_app_8910.h  \[1.10\] pb, cl
Save:node\C\study\Macro_app_8910.h  \[1.11\] camera -------------
Save:node\C\study\Macro_app_8910.h  \[1.12\] pic
Save:node\C\study\Macro_app_8910.h  \[1.13\] record
Save:node\C\study\Macro_app_8910.h  \[1.14\] fm
Save:node\C\study\Macro_app_8910.h  \[1.15\] ebook, memo
Save:node\C\study\Macro_app_8910.h  \[1.16\] vp
Save:node\C\study\Macro_app_8910.h  \[1.17\] mp3
Save:node\C\study\Macro_app_8910.h  \[1.18\] alarm --------------
Save:node\C\study\Macro_app_8910.h  \[1.19\] calc
Save:node\C\study\Macro_app_8910.h  \[1.20\] calendar
Save:node\C\study\Macro_app_8910.h  \[1.21\] unitconversion
Save:node\C\study\Macro_app_8910.h  \[1.22\] game
Save:node\C\study\Macro_app_8910.h  \[1.23\] bt
Save:node\C\study\Macro_app_8910.h  \[1.24\] env, Profile
Save:node\C\study\Macro_app_8910.h  \[1.25\] other --------------
Save:node\C\study\Macro_app_8910.h  \[1.26\] wifi
Save:node\C\study\Macro_app_8910.h  \[1.27\] Browser 网络参数
Save:node\C\study\Macro_app_8910.h  \[1.28\] sos, speed
Save:node\C\study\Macro_app_8910.h  \[1.29\] 
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
MMK_CreateChildWin (, , );
MMK_CloseWin

// list
GUILIST_AppendItem
GUILIST_SetItemStyle

// border
GUI_DisplayBorder



[1.2] idle, lock
// mk--smart
prj:{cfg}.cfg  MMI_SMART_IDLE_SUPPORT = SMALL_ICON
prj:{cfg}.cfg  MMI_MSTYLE_SUPPORT = TRUE
prj:{cfg}.cfg  USE_IMAGE_OPEN = TRUE


// open
//		==>MAIN_IDLE_WIN_ID
//		==>IdleWin_HandleMsg
//		====>HandleIdleMsg
//		======>MMIIDLE_MStyleHandleMsg   #
//		====>MMIAPIWIFI_Init
//		====>WatchLAUNCHER_Enter
app:idle\c\mainapp.c  MMIAPIIDLE_OpenIdleWin

### idle--mstyle
// IDLE--107
//		==>MMIIDLE_CommonHandleMsg
//		====>UP:
//		======>MMIAPISET_OpenDirectionKeyWin
//		==>IdleWin_HandleMsg
//		====>CANCEL:
//		======>MMIAPISET_OpenFuncKeyWin
//		====>OutputIdleWinNetworkName
//		======>MMIAPIPHONE_GetSimAndServiceString
//		========>MMIPHONE_GetNetworkNameString
//		========>MMIAPIPHONE_GetServiceStatus
//		==========>.g_service_status
//		========>MMIPHONE_GetAciString
//		==========>.s_network_acitable
//		========>MMIPHONE_CatAciOpnSpnString
//		==========>SelectOPNString
//		==========>.s_network_name
app:idle\c\mmiidle_cstyle.c  void^OutIdleWinContent
app:idle\c\mmiidle_cstyle.c  void^DisplayIdleWinSoftkey
// IDLE--8910
//		====>OutputIdleWinTimerWithImage
//		====>OutputIdleWinDate
//		====>OutputIdleWinWeek
//		====>OutputIdleWinLunarDate
//		====>OutputIdleSimStatusEx
//		======>MMIAPIPHONE_GetSimAndServiceString
//		========>g_service_status.plmn.mcc          #模拟器手动修改网格
//		========>g_service_status.plmn_status
//		======>DisplaySimStatus
//		====>DisplayIdleMp3Name
app:idle\c\mmiidle_mstyle.c  void^OutIdleWinContent
app:idle\c\mmiidle_mstyle.c  void^DisplayIdleWinSoftkey


### idle--time
//		==>MAIN_HandleSysMsg
//		====>RTC_MIN:
//		====>MMIIDLE_MStyleHandleMsg
//		======>MSG_IDLE_UPDATE_DATETIME:
//		======>


### idle
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __idle__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __idle__
Save:node\C\study\Macro_res_image_8910.h  __time__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __idle__


### idle--smart/large
// open
//		==>IdleWin_HandleMsg                #
//		====>InitIdleDisplayMode            # is_show_fm 关闭
//		==>IdleWin_HandleMsg                # app
//		====>HandleIdleMsg
//		======>MMIIDLE_SmartHandleMsg       # idle
//		========>InitListItem
//		========>DisplaySmartStyleIdle      # show
//		==========>DisplayDate
//		============>LCD_DisplayIdleString
//		==========>DisplayShortCut          # --shortcur
//		============>MMIAPISET_GetIdleShortcut
//		============>s_shortcut_id          # --ID对齐
//		==========>DisplayNetname
//		============>g_service_status
//		==========>DisplayLineAndSelImg     # --select
//		==========>SwitchFocusShortCut      # --tips
//		==========>DisplaySoftkey           # --softkey
//		============>MMIAPISET_GetIdleStyle
//		============>GetEnabledFuncKeyShortcutInfo
//		========>SwitchFocusLine            # --waller
//		==========>UpdateSmartStyleIdle
//		======>OpenFocusItemWin             #web
//		========>MMIAPISET_GetIdleShortcut
//		========>OpenShortcutFunWin
app:idle\c\mmiidle_displaymini.c  MMIIDLE_SmartHandleMsg


### LOCK
//		==>init:
//		====>MMIAPIKL_LockPhone
//		======>MMIKC_DISP_WINTAB
//		====>MMIKL_HandleEffeckKLWinMsg
//		======>CreateKLWinCtrlDynamic
//		========>MMIAPISET_GetKeyLockEffect   # type
//		======>MMIKL_HandleKLDispWinMsg
//		========>SetKeyLockControlParam
//		==========>SwitchControlRectInfo      # anim rect
//		==========>DisplayClockCallbackFun    # anim func
//		==>DisplayClockCallbackFun
//		======>1.DrawAClock
//		======>2.OutputIdleWinDateKeylock
//		======>2.OutputIdleWinWeekKeylock
//		======>3.DisplayDate
//		====>DisplayMissedEventDC
app:keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg
//		==>DisplayScreenSaverTime
//		====>DisplaySSTimerWithImage
//		======>1.DrawAClock
app:keylock\c\mmikl_keylock.c  void^DisplayScreenSaverTime( )

// lock
Save:node\C\study\Macro_fun_8910.h  __lock__


[1.3] menu, second
// menu--matrix--mk
prj:project_{cur}.mk  MAINMENU_4X3_MATRIX_STYLE    = TRUE
prj:project_{cur}.mk  MAINMENU_SELECT_LAYER_ON_TOP = TRUE  #107
prj:{cfg}.cfg         UI_MULTILAYER_SUPPORT        = TRUE  #8910


### menu
// ==>app
Save:node\C\study\Macro_app_8910menu.h  __Creat__
Save:node\C\study\Macro_app_8910menu.h  __onePage__
Save:node\C\study\Macro_app_8910menu.h  __matrix__
Save:node\C\study\Macro_app_8910menu.h  __title__
Save:node\C\study\Macro_app_8910menu.h  
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __mainmenu__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __mainmenu__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __mainmenu__



// menu--main
app:mainmenu\c\mmi_mainmenu_data_128x128.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_128x128.c 570
app:mainmenu\c\mmi_mainmenu_data_128x160.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_176x220.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x240.c s_mainmenu_item_data
app:mainmenu\c\mmi_mainmenu_data_240x320.c s_mainmenu_item_data
//app:mainmenu\c\mmi_mainmenu_data_240x320.c MAINMENU_FLP_STYLE


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





[1.4] dial
// Open
//		==>MMIAPIIDLE_OpenDialWin
//		====>MMIAPIIDLE_EditDialWin(key5)
//		======>phone:
//		========>MMK_CreateWindow   # win
//		========>InitDialEdit
//		========>MMK_CreateControl  # softkey
//		======>tp:
//		========>MMIIDLE_DIAL_WIN_TAB
//		==========>MMIAPIIDLE_GetNumMsgId
//		========>OPEN:
//		==========>CreateCtrlOfDialWin
//		============>CreateDialPanel
//		==============>UpdateDialCoordinate (btn)
//		==============>CreateNumberButtons (edit)
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

### Dial
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __Dial__
// --image
Save:node\C\study\Macro_res_image_8910.h  __Dial__
// --down0
Save:node\C\study\Macro_im_8910.h  __DOWN_0__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  s_theme_font_color_arry_ex


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
// 单项测试--gpstest
app:eng/c/mmieng_uitestwin.c  case^ID_ENG_TEST_GPS

// 串行测试
//		==>s_mmieng_test_win_id
//		==>s_mmieng_test_win_ptr_tab
app:eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// 测试结果
//		==>s_all_test_win_id
//		==>s_all_test_name
app:eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
app:eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo

// 工程模式
//		==>MMIAPIENG_StartEngineerMenu
app:eng/c/mmieng_main.c  MMI_RESULT_E^ENGMainMenuWinHandleMsg
// 工程模式--menu
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_eng
// 工程模式--menu--netinfo
//   (*#555#==>4==>6==>2)
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_net_info_show
// 工程模式--menu--netinfo--nwcap
//		==>ENGNetinfoShowWinHandleMsg
//		====>case^ID_ENG_NW_CAP  (未走)
//		======>MMIENG_NW_CAP_SHOW_WIN_TAB
//		========>ENGNWCAPShowWinHandleMsg
//		====>MMIAPICONNECTION_OpenMenuWin
app:eng/c/mmieng_win.c   case^ID_ENG_OUTFIELD_NETWORK_INFORMATION
// 工程模式--apptest
app:eng\c\mmieng_menutable.c  GUIMENU_ITEM_T^menu_app_set
// 工程模式--apptest--usb
app:eng/c/mmieng_main.c  case^ID_ENG_USB_TEST_SET
// 工程模式--gpstest
app:eng/c/mmieng_main.c  case^ID_ENG_GPS


// 老化测试
app:eng/c/mmieng_uitestwin.c  SPD_ENGINEER_SUPPORT_MONKEY_SET

// PC tool
app:eng/c/mmieng_uitestwin.c  s_pceng_test_win_ptr_tab


// torch
Save:node\C\project\Macro_cfg_8910.h  __torch__


### test
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __test__



[1.6] file
// --enter
app:fmm\c\mmifmm_app.c  MMIFMM_OpenExplorerWin
// --dir
app:fmm\c\mmifmm_app.c  MMIAPIFMM_InitFolders


// child
//		==>HandleUdiskChildWindow
//		====>case^MSG_FULL_PAINT
//		======>title:
//		========>label_ctrl_ptr->theme.font.font
//		======>list:
//		========>
app:fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleUdiskChildWindow
app:fmm/c/mmifmm_mainwin.c  1528

// --name
app:fmm/c/mmifmm_mainwin.c  MMIFMM_CombineFullFileName
// dev list
app:fmm/c/mmifmm_mainwin.c  HandleFmmListWinMsg

// opt
//		==>HandleUdiskChildWindow
//		====>MENU:
//		====>HandleCreatePopMenuOpt
//		======>MMIFMM_OpenMeunPubWin
//		========>MENU_FMM_NORMAL_LIST_OPT
//		==========>.menu_fmm_normal_list_opt
app:fmm\h\mmifmm_menutable.def  MENU_FMM_NORMAL_LIST_OPT
// opt--memory
//		========>MENU_FMM_MEMORY_OPT
//		==========>.menu_fmm_memory_opt

// opt--format
app:fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleFmmMainDetailMenuMsg

// --init
source:mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE
source:mmi_service\source\mmisrvcommon\c\mmi_common.c s_file_default_path
app:udisk\c\mmi_sd.c  MMISD_CreateDefaultFold

//record
UpdateRecordFilePath(record_win_data_ptr);


// 选最合适的U盘
app:camera\c\mmidc_flow.c  MMIAPIFMM_GetSuitableFileDev
// 计算空间
app:fm\c\mmifm_app.c   MMIAPIFMM_IsEnoughSpace
// 获取设置列表
app:ebook\c\mmiebook_file.c  MMIEBOOK_GetDevInfo
// record 默认SD卡 (依次从SD卡向UDISK查找设备)
app:record\c\mmirecord_setting.c  MMIAPIFMM_GetValidateDevice
// 默认最后一个盘
app:bt\c\mmibt_func.c  MMIAPIFMM_GetDefaultDisk

//
app:fmm\c\mmifmm_mainwin.c HandleFmmMainWinMsg
app:fmm\c\mmifmm_mainwin.c HandleMenuOption
// record
app:fmm\c\mmifmm_mainwin.c HandleRecordListWinMsg

// U盘名称
//		==>APP_Init
//		====>MMIAPI_InitUdiskRenameFlag
//		====>MMIAPIFMM_SetDeviceLabel
//		==>MMISET_CleanUserData
//		====>MMIAPI_SetUdiskRenameFlag
//		==>sd:
//		====>MMIAPISD_Init
//		======>MMIAPI_SetUdiskRenameFlag
//		========>set:UDISK, name2
//		==>udisk:
//		====>MMIAPISD_Init
//		======>MMIAPI_SetUdiskRenameFlag
//		========>set:UDISK, name2


// FILE
MMIFMM_HandleOpenFileWin
// 不进U盘 __UsbMode__
app:udisk\c\mmiudisk_wintab.c  USB_CONNECT_DEFAULT_CHARGE
app:udisk\c\mmiudisk_wintab.c  MMI_WATCH_NEW_STYLE
// 默认进U盘 
app:udisk\c\mmiudisk_wintab.c  is_SetOn!=USB_SERVICE_MAX
//	add:
//		is_SetOn = USB_SERVICE_UDISK;

// usb
app:udisk\c\mmiudisk_wintab.c  MMI_RESULT_E^^HandleUsbOperSelectWindow

// --udisk--test
//		==>DefaultShortKey
//		====>WIN32:
//		==>HandlePsAndRefMsg
//		====>PLUGIN:
//		====>MMIAPIUdisk_HandleUsbCablePlugIn
//		======>MMIAPIUdisk_OpenUsbOperWindow
//		========>GetValidUSBServiceCount               # win32:1
//		==========>MMIUDISK_USB_OPER_SELECT_WIN_TAB
//		============>SetUSBServiceList
//		==============>USB_GetServiceCount             # win32:1
//		==============>USB_GetNextService              # win32:+(num=1, type=UDISK, support=TRUE)
//		==>web:
//		====>VALIDATE:
//		======>MMIUDISK_StartUdisk
//		========>MMK_ReturnIdleWin
//		==========>UpdateAppletSystem
//		============>MMK_ZorderSystemUpdate
//		==============>MMK_SendMsg( MSG_GET_FOCUS );
app:udisk\c\mmiudisk_wintab.c  MMI_RESULT_E^^HandleUsbOperSelectWindow


### file
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __file__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __file__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __file__


[1.7] Setting

// sec--pin (edit)
app:phone\c\mmiphone_wintab.c  MMI_RESULT_E^HandlePinInputExceptPhone


### set
// ==>app
Save:node\C\study\Macro_app_8910set.h  __phone__
Save:node\C\study\Macro_app_8910set.h  __callset__
Save:node\C\study\Macro_app_8910set.h  __connect__
Save:node\C\study\Macro_app_8910set.h  __reset__
Save:node\C\study\Macro_app_8910set.h  __shortcut__
Save:node\C\study\Macro_app_8910set.h  __startup__     # 开关机
Save:node\C\study\Macro_app_8910set.h  __charge__      # 充电
Save:node\C\study\Macro_app_8910set.h  __privacy__
Save:node\C\study\Macro_app_8910set.h  __display__
Save:node\C\study\Macro_app_8910set.h  
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __set_display__
Save:node\C\study\Macro_pos_8910.h  __set_pin__


[1.8] sms
// list--enter
//		==>MMISMS_EnterSMSMainMenuWin
//		====>MMISMS_MENUWIN_TAB
//		======>InitPdaSmsMainListCtrl
app:sms\c\mmisms_mainmenuwin.c  HandleSmsMainMenuWinMsg

// --sms--option
app:sms\c\mmisms_editsmswin.c  HandleEditMenuWinMsg
// --sms--option--save  APP_MN_SMS_MEM_FULL_IND
app:sms\c\mmisms_editsmswin.c  EditSMSWin_SaveSMS


//2.edit, 写短信
// edit--enter
//		==>MMISMS_OpenWriteWin
//		====>MMISMS_WriteNewMessage
//		======>MMISMS_WriteNewMessageEx
//		========>MMISMS_EnterSmsEditWin
//		==========>MMISMS_EDIT_SMS_WIN_TAB
app:sms\c\mmisms_editsmswin.c  HandleEditSmsWinMsg
// edit--input pbNum
//		==>

//2.sms--list
app:sms\c\mmisms_mainmenuwin.c  HandleMsgBoxMainWindow
// sms--list--mt
//		==>FOCUS:
//		====>MMISMS_LoadSmsListFromOrder
//		======>MMISMS_ListSmsFromOrder
//		========>MMISMS_BOX_MT:
//		==========>FormListFromLinkhead    # format
//		==>DATA:
//		====>MMISMS_SetListItemData
//		======>MMISMS_GetSmsInfoFromOrder
//		======>FormListBoxItem             # time
app:sms\c\mmisms_messageboxwin.c  HandleMtBoxChildWinMsg
// sms--list--fail
//		==>FOCUS:
//		====>MMISMS_LoadSmsListFromOrder
//		======>MMISMS_AppendEmptyStr2List
app:sms\c\mmisms_messageboxwin.c  HandleSendFailBoxChildWinMsg
// sms--list--unread
app:sms\c\mmismsapp_order.c  MMISMS_ListSmsFromOrder


//3.detail


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



### sms
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __sms__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __sms__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __sms__
// ==>im
Save:node\C\study\Macro_im_8910.h  __input__


### MMS
//
Save:node\C\project\Macro_cfg_8910.h  __MMS__


### CB
// mk
Save:node\C\project\Macro_cfg_8910.h  __CB__
//
Save:node\C\study\Macro_doc_cb8910.h





[1.9] call
### call
// ==>app
Save:node\C\study\Macro_app_8910call.h  __init__
Save:node\C\study\Macro_app_8910call.h  __MT__           # 来电
Save:node\C\study\Macro_app_8910call.h  __MO__           # 去电
Save:node\C\study\Macro_app_8910call.h  __DIS__          # 挂断
Save:node\C\study\Macro_app_8910call.h  __Ans__          # 接听
Save:node\C\study\Macro_app_8910call.h  __112__          # 112
Save:node\C\study\Macro_app_8910call.h  __Multi__        # 多卡通话
Save:node\C\study\Macro_app_8910call.h  __opt__          # opt
Save:node\C\study\Macro_app_8910call.h  __vib__          # vib
Save:node\C\study\Macro_app_8910call.h  __record__       # record
Save:node\C\study\Macro_app_8910call.h  __speaker__      # speaker
Save:node\C\study\Macro_app_8910call.h  __other__
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __call__
Save:node\C\study\Macro_pos_8910.h  __WaCall__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __call__
Save:node\C\study\Macro_res_image_wa8910.h __WaCall__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __call__
// ==>键
Save:node\C\study\Macro_doc_8910.h  __keyKbd__


[1.10] pb, cl
// enter--8910
//		==>MMIMAINMENU_StartPB/EnterPBMainMenuWin
//		====>MMIPB_OpenPbWin
//		======>MMIPB_OPEN_MAIN_LIST   # type
//		======>MMIPB_OpenMainWin
//		========>SPRD_PB_APPLET_ID
//		========>MMK_StartApplet
//		==>MMIPB_RegAppletInfo
//		====>Applet_HandleEvent
//		======>instance.entry_func
//		========>MMIPB_OpenPbWin      # func
//		==========>MMIPB_ENTRY_LIST_WITH_SEARCH_WIN_TAB   # style-2
//		============>HandleEntryListWithSearchWinMsg
app:pb\c\mmipb_view.c  MMIPB_ENTRY_LIST_WITH_SEARCH_WIN_TAB  # style-2 (8910)
app:pb\c\mmipb_view.c  MMIPB_GROUP_ENTRYL_LIST_WIN_TAB
app:pb\c\Mmipb_view.c  MMIPB_MAIN_WIN_ID

// enter--107
//		==>EnterPBMainMenuWin
//		====>MMIAPIPB_OpenListAllGroupWin
//		======>MMIPB_OpenListAllGroupWin
//		========>MMIPB_OpenMainWin  (list style)
//		==========>MMIPB_StartApplet
//		==>MMIPB_RegAppletInfo
//		====>Applet_HandleEvent
//		======>instance.entry_func
//		========>MMIPB_OpenPbWin      # func
//		==========>MMK_CreateWinByApplet
//		==========>PbCreateChildWin
//		============>MMIPB_CreateAllContactTabWin
app:pb\c\mmipb_view.c  MMIPB_ENTRY_LIST_TAB_WIN_TAB          # style-1 (107)


### pb
// ==>app
Save:node\C\study\Macro_app_8910pb.h  __init__
Save:node\C\study\Macro_app_8910pb.h  __detail__     #
Save:node\C\study\Macro_app_8910pb.h  __memory__     # option
Save:node\C\study\Macro_app_8910pb.h  __add__
Save:node\C\study\Macro_app_8910pb.h  __pbBak__
Save:node\C\study\Macro_app_8910pb.h  __pbNumMax__   # PB和SMS条数修改
Save:node\C\study\Macro_app_8910pb.h  __blacklist__  # 黑名单/白名单
Save:node\C\study\Macro_app_8910pb.h  __pbName__
Save:node\C\study\Macro_app_8910pb.h  
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __pb__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __pb__



### cl
// ==>app
Save:node\C\study\Macro_app_8910pb.h  __clMain__
Save:node\C\study\Macro_app_8910pb.h  __clInit__    #50条记录
Save:node\C\study\Macro_app_8910pb.h  __clDeltail__
Save:node\C\study\Macro_app_8910pb.h  __clTab__
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __cl__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __cl__




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
// cam--Show
//		==>MMIDC_FlowStart
//		====>ShowAllOSD
//		======>softkey:
//		========>MMIDC_DisplaySoftKey
//		==========>ShowSoftKey                   # sfk rect
//		============>MMIDC_GetLayoutStyle
//		============>MMIDC_DisplayString         # sfk style
//		==============>MMIDC_GetOSDFontState     # sfk bold
//		======>Tip:
//		========>MMIDC_DisplaySettingTip         (no use)
//		==========>MMIDC_DisplayString
//		======>Desk:
//		========>MMIDC_OpenIconDesktop
//		==========>DisplayIconDesktop
//		============>DisplayIconBrightness        (左上)
//		============>DisplayIconMode              (no use)
//		============>DisplayIconSensor            (下1)
//		============>DisplayIconNight             (下2)
//		============>DisplayIconWhiteBalance      (下3)
//		============>DisplayIconDelay             (下4)
//		============>DisplayIconMultiShot         (下5)
//		====>sizelist:
//		======>DisplayIconString
//		========>DisplayIconSize
app:camera\c\mmidc_full_osd_display.c  MMIDC_DisplaySettingTip
app:camera\c\mmidc_full_osd_display.c  void^MMIDC_DisplayString


### camera
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __camera__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __idle__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __camera__
// ==>驱动
Save:node\C\study\Macro_doc_cam8910.h

// --cam--switch 
//		==>OpenDC
//		====>MMIDC_SetDCameraSensorID, 0：后摄，1：前摄
//		==>MMIENG_ForEngWinMsg
//		====>GetSensorNumber
//		======>ENG_DC_Preview

// --cam--option 
//		==>MMIDC_OpenPhotoOption
//		====>add(txt, fun)
//		====>MMIDC_OpenMoreOption
//		======>MMIDC_OpenDesktopTipOSD
//		========>add(ic, focus, fun)
//		========>MMIDC_SetShowState
//		==========>OpenDCModeMenu (1)
//		============>SetVideoMode
//		============>SetPhotoMode
// --cam--option--show
//		==>KeyFunction
//		====>MMIDC_ShowAllOSD
//		======>ShowAllOSD
//		========>.MenuDisplay
//		==========>MenuDisplayAndTP
//		============>MMIDC_DisplayBMPMask    #条纹背景
//		============>_focused_item_index     #rect--item, rect3--bg/str, rect2--RADIO
//		============>MMIDC_DisplayTitleBackground   #title
app:camera\c\Mmidc_osd_option.c  MMIDC_OpenPhotoOption
app:camera\c\Mmidc_osd_option.c  MMIDC_OpenVideoOption
// --cam--option--set
//		==>MMIDC_OpenSettingWin
app:camera\c\mmidc_window_option.c  HandleDCSettingWinMsg

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

// --cam--default--107
//		==>MMIAPIDC_Setting_SetFactoryValue
//		====>.photo_size = PHOTO_SIZE_240X320; 
//		==>MMIDC_InitSwitchSensorParameter
//		====>.photo_size = PHOTO_SIZE_240X320; 
app:camera\c\mmidc_setting.c  MMIAPIDC_Setting_SetFactoryValue
app:camera\c\mmidc_setting.c  MMIDC_InitSwitchSensorParameter
// --cam--default--8910
//		====>.photo_size = PHOTO_SIZE_320X240
app:camera\c\mmidc_setting.c  MMIDC_Setting_GetNVDefaultValue
//		====>.video_size = VIDEO_SIZE_320X240
app:camera\c\mmidc_setting.c  CheckVideoSize
//		====>MMIAPIDC_SetPhotoSize
app:camera\c\mmidc_setting.c  MMIDC_InitScreenMode




//Camera分辨率:
Camera闪光灯:




[1.12] pic
// mk
prj:{cfg}.cfg   PIC_VIEWER_SUPPORT = TRUE

// pic--enter
//		==>MMIAPIPICVIEW_OpenPicViewer
//		====>MMIPICVIEW_OpenPicViewerWin
//		======>MMIPICVIEW_LIST_WIN_TAB
//		======>HandlePicListWinMsg
//		========>OPEN:
//		========>OpenPicListWin               # ==>RELOAD
//		==========>CreatePicListCtrl
//		============>MMIPICVIEW_VIEW_ICONLIST     # 240*320
//		==============>SetIconListParam           # --margin
//		================>.MMIPICPREVIEW_LIST_ICON_SIZE
app:pic_viewer\c\mmipicview_list.c MMI_RESULT_E^HandlePicListWinMsg
app:pic_viewer\c\mmipicview_list.c void^SetIconListParam
//		========>RELOAD:
//		==========>OpenAlertWin
//		============>StartLoadPic             # 
//		==============>MMIAPIFMM_SearchFileInPathAndSort
//		======>MMK_HandleMmiSig
//		========>APP_FIND_FILES_END_IND:
//		==========>MMIAPIFMM_SearchFileCallBack  # ==>LOAD_FINISH
//		======>HandleLoadPicWinMsg
//		========>MSG_PICVIEWER_LOAD_FINISH:
//		==========>FinishLoadPic              # ==>UPDATE
//		========>UPDATE:
//		==========>UpdatePicList              # 图片总数
//		==========>OpenAlertWin
//		======>IconlistCtrlHandleMsg
//		========>PAINT:
//		==========>DisplayIconList            # 重复
//		========>APPEND_TEXT:
//		==========>CTRLICONLIST_AppendText    # 更新名称, 实际未使用
//		======>HandleLoadPicListWinMsg        # Alert
//		========>LOAD_START:
//		==========>SetlistOrderInTime         # 分组--107
//		========>LOAD_END:
//		==========>
//		======>IconlistCtrlHandleMsg
//		========>DISPLAY_IND:
//		==========>NotifyLoadNextIcon         # 下一个, APPEND_ICON
//		========>APPEND_ICON:
//		==========>AppendPicIconListIcon      # 更新icon path
//		============>CTRLICONLIST_AppendIcon
//		==============>InsertIcon               # DISPLAY_IND
//		================>ICONLIST_GetIconRect     # size
//		==================>ICONLIST_GetRect       # list
//		==================>ICONLIST_GetItemWidth  # item 分行
//		====================>iconlist_ctrl_ptr->theme.icon_item.width  #128*160
//		========>MSG_NOTIFY_UPDATE            # 完了

// pic--opt
app:pic_viewer\c\mmipicview_wintab.c  HandlePiclistOptWinMsg
app:pic_viewer\c\mmipicview_wintab.c  HandlePreviewOptWinMsg
// zoom
app:pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
//  显示分隔符
ctrl:IconList\c\ctrliconlist.c  void^DisplayDelimiter
app:pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR
// pic--view
app:pic_viewer\c\mmipicview_preview.c  MMI_RESULT_E^HandlePicPreviewWinMsg
// pic--item--details
app:pic_viewer\c\mmipicview_wintab.c  HandlePicDetailWinMsg
// pic--item--rename
app:pic_viewer\c\mmipicview_wintab.c  HandlePicRenameWinMsg

// pic--view
//		==>SetPreviewTitleOsd
//		====>DrawItemText (title)
//		======>MMITHEME_GetSetlistStyle
//		==>AnimCtrlHandleMsg
//		====>PAINT:
//		====>GUIANIM_Display
//		======>GIF:
//		========>DisplayGifImg
//		======>JPG:
//		========>DisplayImgExceptGif
//		==========>GUIIMG_DisplayBmp
ctrl:Setlist\c\ctrlsetlist.c  void^DrawSetlistItem


### pic
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __pic__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __pic__


[1.13] record
// enter
//		==>MMIAPIRECORD_OpenMainWin             # 8910
//		====>SPRD_RECORD_APPLET_ID
//		====>MMK_StartApplet
//		======>MMIRECORD_RegAppletInfo
//		========>SPRD_RECORD_APPLET_ID
//		==========>RecordApplet_HandleEvent
//		============>MMIRECORD_OpenRecordMainWin
//		==>MMIRECORD_MAINPLAY_WIN_TAB
//		====>HandleRecordMainPlayWinMsg   ## appMsg
//		======>MMIRECORD_HandleRecordMainPlayWinMsg
//		==>MMIRECORD_OpenMainWin                # 107
app:record\c\mmirecord_common_wintab.c  MMI_RESULT_E^HandleRecordMainPlayWinMsg
//		========>MMK_CreateCtrlByWinTabEx
//		==========>MMIRECORD_MAINPLAY_WIN_CTRL_TAB
app:record\c\mmirecord_barphone_wintab.c  MMIRECORD_HandleRecordMainPlayWinMsg

// record--start
//		==>HandleWebKeyMsg
//		====>MSG_START_RECORD
//		======>StartRecord
//		========>MMIRECORD_StartRecordNormal
//		==========>MMIRECORD_CheckSpace(file_dev,MMIRECORD_MIN_NEED_SPACE);
// record--time
//		==>HandleTimerMsg
//		====>MMIRECORD_UpdateScreen
//		======>DisplayRecordAllBG
//		======>DisplayRecordOwnerDrawAnim
//		==>HandleRecordCallbackMsg
//		====>MMIRECORD_UpdateScreen


### record
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __record__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __record__


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
//		==>s_fm_main_opt_item
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
app:fm\c\mmifm_wintab.c  void^HandleFMAction
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
// fm--所有set channel
app:fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel
app:fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
// fm--set edit
// file: Music/FM Radio clips/Radio___J-001.wav
// fm--Headset
//		==>MMIFM_Init
//		====>
//		==>opt-mode:
//		====>MMIFM_SwitchAudioDevice
//		==>main-auto switch: (no use)
//		====>MMIFM_SwitchAudioDevice
//		======>

//		==>DefaultHeadsetDetect
//		====>MMIAPIFM_HeadsetInd  (no use)
//		======>MMIFM_HandleHeadsetAction
//		========>MMIFM_CheckAndSwitchFmAnt  (外放)
//		==========>
//		============>
//		==>DefaultHeadsetKey  (BUTTON)
//		====>
//		==>DefaultEarphoneKey  (BUTTON)
//		====>
//		==>MMK_HandlePublicKey
//		====>BUTTON:
//		======>MMK_HandleHeadSetKeyProcess
//		====>KEYDOWN:
//		======>
//		==>gpio_cfg:
//		====>GPIO_HeadsetDetectIntHandler
//		======>
//		========>
app:fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
app:fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction
// fm--play
//		==>HandleFmMainMsg
//		====>WEB:
//		====>SetFMStartSuspendButtonStatus
//		======>MMIAPIFM_Pause
//		========>MMIFM_Pause
//		==========>FM_PlayStop
//		======>MMIAPIFM_Resume
//		========>MMIFM_Play(FALSE)
//		==========>FM_Open
//		==========>MMIFM_CheckAndSwitchFmAnt
//		======>MMIFM_Play(TRUE)


### fm
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __fm__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __fm__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __mainmenu__




[1.15] ebook, memo
// ebook
prj:{cfg}.cfg   EBOOK_SUPPORT

// ebook
app:fmm\c\mmifmm_mainwin.c  HandleFmmListWinMsg
app:fmm\c\mmifmm_mainwin.c  HandleUdiskChildWindow
//		==>web:
//		==>HandleListItem
//		====>case MMIFMM_FILE_TYPE_EBOOK:
//		====>MMIFMM_ShowTxtContent
//		======>MMIAPIEBOOK_ManagerWinMsg_4Fmm
//		========>MMIEBOOK_ENTER_TXT_CONTENT_WIN_TAB
//		==========>EnterTxtContent
//		==========>MMIEBOOK_TXT_SHOW_WIN_TAB
//		============>
//		==============>
app:ebook\c\mmiebook_wintab.c  MMIEBOOK_TXT_SHOW_WIN_TAB
// ebook--opt
//		==>OpenEbookShowOptMenu
//		====>MMIEBOOK_TXT_SHOW_OPT_WIN_TAB
//		======>show set:
//		========>HandleDisplaySettingWinMsg
//		========>font:
//		========>MMIEBOOK_ConvertFontSize
app:ebook\c\mmiebook_wintab.c  HandleTxtShowOptWinMsg


// meno
prj:{cfg}.cfg   MMI_MEMO_SUPPORT


// meno--list
app:memo\c\mmimemo_wintable.c  HandleMemoListWinMsg
// meno--view
app:memo\c\mmimemo_wintable.c  HandleMemoReadWinMsg
// meno--edit
app:memo\c\mmimemo_wintable.c  HandleMemoSaveWaitingWin
app:memo\c\mmimemo_wintable.c  HandleMemoEditWinMsg




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
app:videoplayer/c/mmivp_wintable.c  MMIVP_MAIN_PLAY_WIN_TAB_V
app:videoplayer/c/mmivp_wintable.c  MMIVP_MAIN_PLAY_WIN_TAB_H
//		==>SetFormParam      #竖屏可切换
//		====>SetFormParamV
//		======>.owndraw.v_space   #播放画面离标题间距/5
//		======>.process.v_space   #进度条离播放画面间距/5
//		====>SetFormParamH
//		==>SetVPLayoutParam  #横屏不可切换
app:videoplayer/c/mmivp_wintable.c  MMI_RESULT_E^HandleVPWinMsg
app:videoplayer/c/mmivp_wintable.c  void^SetFormParamH
// vp--play
//		==>PlayOrPause
//		====>VideoPlayerResume
//		==>BEGIN_PLAY:
//		====>VideoPlayerPlay
//		======>NotifyFsmPlay
//		========>.is_bt_support                  # 增加bt, 无效
//		========>MMIAPIVP_FSMPlay                # fsm
//		==========>FsmDispatch
//		==========>CreatMsg
//		========>MMIAPIVP_FSMSwitchPlayDevice    # 实测无效
//		==>FsmReady
//		====>UpdateFsmInfo
//		======>.is_bt_support
//		====>PlayLocalFile
//		======>DPLAYER_Open
//		========>...
//		==========>SetRouteWithEq
//		============>DRVAUD_SetRoute
//		======>MMISRVAUD_Play
//		====>FsmStateTrans
//		======>FsmDispatch     # 不跟了
source:mmi_service\source\mmisrvaud\c\Mmisrvaud_drv.c  DRVAUD_SetRoute

// Short
app:videoplayer/c/mmivp_wintable.c  HandleShortCutMsg
// Opt
app:videoplayer/c/mmivp_wintable.c  HandleOptMenuWinMsg
// softkey
app:videoplayer/c/mmivp_wintable.c  DisplayVPWinSoftkey


### vp
// ==>image
Save:node\C\study\Macro_res_image_8910.h __vp__
// vp--pos
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
//		======>HandleMainDefaultOpenWinMsg     # open
//		========>HandleMainWinOpenMsg
//		==========>MMIAP_DisplayBackgroudImg   # bg
//		==>HandleMp3OpenWaitingWin
//		====>LOAD_LISTS:
//		======>MMIMP3_LoadLists
//		========>CreateRandFile
//		==========>MMIMULTIM_DIR_FILEARRAY   # "filearray"
//		==========>APLAYER_RES_FOLDER_NAME   # "Mp3_res/listinfo.data"
//		==========>APLAYER_ALL_LIST_INFO_FILE_NAME
//		========>LoadAllListInfoFile         # 缓存
//		======>GetFileFullPathForRead
//		====>OPEN_PLAYER:
//		======>MMIMP3_SearchAudioFilesInDefaultFolder
//		========>MMIMULTIM_DIR_MUSIC         # "my muisc"
//		========>MMIFMM_SearchFileInPathNoSort
//		====>LIST_FINISH:
//		======>MMIMULTIM_DIR_MUSIC      # path
//		====>MUSIC_FINISH:
//		======>MMIMP3_SaveFilesToMyMusicList
//		========>MMIMP3_GetCurFileContent
//		==========>.s_cur_audioplayer_list_info
//		====>INIT_FINISH:
//		======>MMIAPlayer_GetAudioFileFullPath
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
//		==>btn play/pause
//		====>MMIMP3_DisplayButton
//		====>MMIAPIMP3_ResumeMp3
// mp3--fileInfo
// mp3--process
//		==>OwnerDrawHandleMsg
//		====>MMIAP_DrawProgressOwnerDrawCtrl
//		======>MMIMP3_DisplayProgress

// mp3--play
Save:node\C\study\Macro_fun_8910.h  __mp3Play__

// file--app--init
//		==>APP_Init
//		====>MMIMULTIM_DIR_FILEARRAY
//		====>MMIENVSET_MORE_RING_DIR
//		====>MMIMULTIM_DIR_EBOOK
//		====>s_cstar_udb_dir
//		====>MMIDC_GetPhotoDefaultPathName
//		====>MMIOTA_UCS2_DIR
//		====>
//		====>
//		====>



// 
app:audioplayer\c\mmiapwin_main.c  HandleMainWinOpenMsg
// pos (只跑一次)
app:audioplayer\c\mmiapwin_main_mini.c  435



### mp3
// ==>pos/font
Save:node\C\study\Macro_pos_8910.h  __Mp3__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __Mp3__



[1.18] alarm
// Enter
//		==>MMIAPIALM_OpenMainWin
//		====>ALARM_MAINWIN_TAB               # style1
//		======>HandleAlarmMainWinMsg
//		========>ALARM_EDITWIN_TAB
//		========>.GUIFORM_STYLE_UNIT
//		====>ALARM_LIST_MAINWIN_TAB          # style2 (def)
//		======>HandleCustomAlarmMainWinMsg
//		========>ALARM_CUSTOM_EDITWIN_TAB
//		========>.GUIEDIT_STYLE_MULTI_DYN_DOWN
// alarm--edit
//		==>ALARM_EDITWIN_TAB
//		====>HandleAlarmEditWinMsg          # style1
//		==>ALARM_CUSTOM_EDITWIN_TAB
//		====>HandleCustomAlarmEditWinMsg    # style2 (def)
//		======>SetCustomEditTimeWin         # --label color
//		======>SetCustomEditNameWin
app:accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
// set--powerOnOff
//		==>AUTOPOWER_MAINWIN_TAB
//		====>HandleAutoPowerOnOffWinMsg
// set--powerOnOff--edit (共用)
//		==>POWERONOFF_EDIT_WIN_TAB
//		====>HandleAlarmEditWinMsg
//		======>EVENT_AUTO_POWERON
// alarm--powerOnOff
//		==>HandleAutoPowerOffExpired
app:accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg


### alarm
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __alarm__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __alarm__
// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __form__


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


// alarm--add
//		==>MMIALM_AddOneEvent
//		====>IncreaseDateByOne                  # 过时加一天
//		====>CMP_FIRST_SMALL                    # 当天
//		==>MMIALM_UpdateEvents
// alarm--start
//		==>MMIAPIALM_StartAlarm                 # 收到闹铃消息
//		====>MMIALM_GetArrivedEvent             # 获得和当时日期时间相匹配的事件，删除或更新事件
//		======>MMIALM_GeEvent                   # --原表
//		======>MMIAPIALM_FormInteEventInfo      # --新表
//		========>1.cur_event
//		==========>.s_event_fast_table
//		========>2.cur_contemt
//		==========>.MMINV_ACC_SMART_EVENT_ALM_1_CONTENT (NV)
//		======>MMIAPIALM_GetRingInfo
//		========>3.cur_ring
//		==========>ReadRingInfoFileName
//		==========>."c/alarm/1"
//		======>ModifyEvent                      # --用备份表？
//		========>SetNextAlarmTimeByCurrent      # ----下一次发生的时间 (单次禁止修改)
//		==========>MMIAPIALM_CompareDateAndTime
//		========>SCI_MEMCPY                     # ----用备份表写回原表, NV
//		========>SetAlarmService
//		==========>.s_alarm_service_list
//		========>FindLatestEventToSet           # ----未使用, 只更新status
//		==========>.latest_event
//		====>GetSameTimeSchEvent                # 同时闹铃 (不包括当前)
//		======>.entry_id
//		======>1.s_bypast_list                  # --记录同时事件 (副表, 非闹铃, 8910未使用)
//		========>.s_poweroff_event
//		======>2.bypast_list                    # --取消同时事件 (副表)
//		========>ModifyEvent                    # --关闭一次的闹钟
//		====>OpenAlarmExpiredWin
//		======>OpenAlarmAliveWin
//		========>MMIDEFAULT_TurnOnBackLight     # --背光延迟 (非闹铃)
//		========>MMIPUB_OpenWaitWin             # ----开关机
//		==========>HandleAutoPowerOffExpired    # ----off
//		============>CANCEL:
//		============>OpenPastSchEventWin
//		==============>MMIPUB_OpenWaitWin
//		==========>HandleAutoPowerOnExpired     # ----on
//		========>MMIPUB_OpenAlarmDialogWin      # ----正常闹铃
//		==========>HandleEventAliveWinMsg
//		============>CANCEL:
//		============>CloseDelayAlarm            # ----原闹钟也关闭, NV
//		==============>FindLatestEventToSet     # ----只更新status
//		============>CheckandStartExpiredEvent  # --stop


// 修改匹配--不判断触发
app:accessory\c\mmialarm.c  BOOLEAN^MMIALM_GetArrivedEvent
//        if (cur_event_ptr->is_valid &&
//            cur_event_ptr->is_on &&
//            TRUE ) // IsMatchEvent(cur_date, cur_time, cur_event_ptr) )


//
app:accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg

//
source:mmi_app\common\c\mmi_pubwin.c  5352



### 秒表/STOPWATCH
prj:project_{cur}.mk  STOPWATCH_SUPPORT = TRUE
//		==>HandleSecMenuStaticMsg
//		====>ID_CLOCK:
//		======>MMIAPI_OpenTimerWin
//		========>HandleStopWatchWinMsg

### 秒表/STOPWATCH
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __stopwatch__


### 倒计时/countedtime
prj:project_{cur}.mk  COUNTEDTIME_SUPPORT = TRUE
//		==>FLIP:
//		====>MMIDEFAULT_HandleFlipKey
//		======>
app:accessory\c\mmicountedtime_main.c  MMIAPICT_HandleCountedTimeArriveWin

### WORLD_CLOCK
prj:project_{cur}.mk  WORLD_CLOCK_SUPPORT = TRUE


[1.19] calc
// mk
prj:{cfg}.cfg  CALCULATOR_SUPPORT = TRUE 

// enter
//		==>MMIAPICALC_OpenMainWin
//		====>CALC_WIN_TAB            # win
//		======>CALC_CTRL_TAB_H         # tab
app:accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg
app:accessory\c\mmicalc_main.c  CALC_WIN_TAB
app:accessory\c\mmicalc_main.c  CALC_CTRL_TAB_H
//		==>HandleCalcWinMsg
//		====>InitFormWin
//		======>InitButtonWidthandHeight   # 设置单元间距
//		========>height.add_data          # --btn.H
//		======>InitButtonFont             # font/color
//		====>DisplayCalcBackground
//		====>DisplayCalcFormulaEx         # 单行/双行
//		====>init:
//		======>LcdSwitch
//		==========>.start   = s_CALC_LINE_START_Y
//		==========>         = 1
//		==========>.height  = s_CALC_LINE_HEIGHT
//		==========>         = 58
//		====>input:
//		======>FormatFormula
//		========>DisplayCalcFormulaEx
//		==========>.top     = CALC_LINE_NUM_STARTY(1)
//		==========>.bottom  = CALC_LINE_NUM_ENDY(1);
//		========>SetCalcTextStyle
//		==========>.font    = M_height 
//		==========>         = CALC_LINE_M_ENDY - CALC_LINE_M_STARTY + 1;
app:accessory\h\mmicalc_export.h     CALC_LINE_M_STARTX

// draw
//		====>line1:符号
//		======>ACC_CALC_DISPLAY_M_SYMBOL
//		====>line2:data1
//		======>ACC_CALC_DISPLAY_FIRST_OPERAND
//		====>line3:data2
//		======>ACC_CALC_DISPLAY_MEMORY_DATA/ACC_CALC_DISPLAY_RESULT
app:accessory\c\mmicalc_main.c  void^CalcRefreshContent
app:accessory\c\mmicalc_main.c  void^InitButtonFont

// draw--color



### calc
// ==>image
Save:node\C\study\Macro_res_image_8910.h __calc__
// ==>font/color
//Save:node\C\study\Macro_res_color_8910.h  __calc__



[1.20] calendar
// mk
prj:{cfg}.cfg  CALENDAR_SUPPORT = TRUE 

// draw
app:accessory/c/mmicalendar_main.c  MMI_CALENDAR_CHINESE_JIEQI
// pos
app:accessory/h/mmiacc_position.h 128X128

// main
//		==>DrawMonthCalendar
//		====>DrawMonthTitle  #title 1
//		====>DrawYearTitle   #title 2
//		====>DrawLunarDate   #title 3, font15
//		====>DrawSchdule
//		====>DrawWeeks
//		====>DrawMonthDates
//		======>DrawBackgroundByRect   #bg
//		======>DrawMonthDate
//		======>DrawGrayMonthDate
//		======>DrawMonthDateRectLine
app:accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
// opt
app:accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
// opt--go to
//		==>CALENDAR_QUERY_WIN_TAB
//		====>HandleCalendarQueryWinMsg
app:accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
// list-opt
//MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);



// calen--sch
//		==>AppendUserListBoxItem
//		==>AppendUserListBoxItemData
app:accessory\c\mmischedule.c  MMI_RESULT_E^HandleSchViewListWinMsg



### calen
// ==>app
Save:node\C\study\Macro_app_8910other.h  __jewish__   #犹太日历
// ==>pos/font/color
Save:node\C\study\Macro_pos_8910.h  __calen__
// ==>image
Save:node\C\study\Macro_res_image_8910.h __calen__


[1.21] unitconversion
// mk 107
prj:project_{cur}.mk  MMI_UNITCONVERSION_SUPPORT = TRUE
// mk 8910
prj:{cfg}.cfg  MMI_UNITCONVERSION_SUPPORT = TRUE


[1.22] game
// mk
prj:project_{cur}.mk  GAME_SUPPORT = TRUE
//
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
// mk
//		==>BT_PHONE_INDEX_CONTACT
prj:project_{cur}.mk  BT_PBAP_SUPPORT  同步联系人 功能注释了


.mk
// --bt--enter
//		==>MMIAPIBT_OpenMainMenuWin
//		====>MMIBT_OpenMainMenuWin
// --bt--open--init once (popup)
//		==>HandleMainMenuWinMsg (bt)
//		====>MMIBT_UpdateMainMenu
//		======>DoOperation
//		========>HIDE:
//		========>SetBtVisibility
//		==========>MMIPUB_OpenWaitWin
app:bt\c\mmibt_mainwin.c  MMI_RESULT_E^^^HandleMainMenuWinMsg
// --bt--search (popup)
//		==>PAIRES:
//		====>OpenInquireDeviceListWin
//		======>MMIBT_INQUIRED_DEV_LIST_WIN_TAB
//		========>HandleInquiredDevListWinMsg
//		==========>DoOperation
//		============>MMIPUB_OpenWaitWin
// --bt--search stop
//		==>CANCEL:
//		====>BT_CancelSearch()
//		==>PAIRES: 配对
//		====>MMIBT_SetOpertor(MMIBT_OPC_NOT_CHANGE, MMIBT_OPC_PAIR);  
//		==>PAIRES: option--配对的代码少，好看点
//		====>BT_PairDevice(&s_pin_request_info.addr);
app:bt\c\mmibt_inquireddevice.c  HandleInquiryOptMenuWinMsg
//		==>PAIRES ok:
//		====>MMIBT_GetPairComCnf()
//		====>WatchBtMain_ProcessBtPsMsg()
//		==>确认密码:
//		====>Display_NumericPasskeyInfo()
//		==>输入密码:
//		====>OpenPinInputWin()
//		====>HandlePinInputWinMsg()


// --bt--popwin
//		==>OpenPinInputWin         # 连接密码
//		====>STR_BT_ENTER_CODE
// --bt--rec ok
//		==>MMIBT_OpenNewReceivedFileWin

// --bt--play--handle
app:audioplayer\c\mmiap_play.c  MMIMP3_ReqPlayHandle
// --bt--play--calen--ring
//		==>MMIAPISET_PlayRingByIdEx
//		====>PlayFixedRing
//


### bt
// ==>image
Save:node\C\study\Macro_res_image_8910.h __bt__
// ==>nv/SDcard
Save:node\C\study\Macro_nv_8910.h  __bt_nv__
// ==>statusbar
Save:node\C\study\Macro_gui_8910.h  __bt_bar__


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
app:bt\c\mmibt_app.c  MMIBT_A2DPCallBackFunc
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

// bt--set--name
app:bt\c\mmibt_editwin.c  HandleEditDeviceNameMsg

// bt--nv
MMIBT_GetBtStatusForIcon
//    is_poweron = BT_GetState();

// 分享
// --url--通过短信
//		==>ID_POPUP_MENU_SEND_URL
//		====>MMIBROWSER_SendUrlContentBySms
// --pb--通过email/bt
//		==>MMIPB_OPERATE_TYPE_MULTI_SHARE
//		====>SendMultiVcard
//		======>MMIAPIBT_SendMultiFile




[1.24] env
### idle switch
//		==>IdleWin_HandleMsg
//		====>MSG_KEYLONG_HASH:
//		==>APP_Init
//		====>MMIAPISET_AllInit
//		======>MMISET_EnvSetInit
//		========>s_mmienvset_pre_active_mode  # 没有读NV


### env
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


### env
// ==>app
Save:node\C\study\Macro_app_8910set.h  __envSet__
Save:node\C\study\Macro_app_8910set.h  __envPlay__
Save:node\C\study\Macro_app_8910set.h  
// ==>nv/SDcard
Save:node\C\study\Macro_nv_8910.h  __env_nv__



[1.25] other
### other
Save:node\C\study\Macro_app_8910other.h  __TASK__



[1.26] wifi

//		==>WifiHandleListWinMsg
//		====>WEB:
//		====>WifiSettingHandleOn
//		======>MMIWIFI_OpenOnWaitWin
//		========>MMIWIFI_OPEN_WAIT_WIN_ID
//		==>MMIWIFI_HandleMsg
//		====>CNF:
//		====>WifiHandleManagerMsg
//		======>MMIWIFI_OpenOnWaitWin
//		========>MMIWIFI_OPEN_WAIT_WIN_ID
//		==========>MMK_CloseWin(MMIBT_WAIT_WIN_ID)



[1.27] Browser 网络参数
// enter
//		==>MMIBROWSER_Enter
//		====>MAINMENU:
//		====>MMIBROWSER_OpenStartPageWin
//		======>DEFAULT:
//		======>MMIBROWSER_START_PAGE_WIN_TAB
app:browser\c\mmibrowser_func.c  MMIBROWSER_Enter
//		==>InitBrwStartPageWin
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

// browser--set--mainpage
app:browser\c\mmibrowser_wintable_setting.c  MMI_RESULT_E^BrwHandleSettingHomepageWinMsg

// browser--page
//		==>HandleQueryExitBrowserWin
//		====>MMIBROWSER_Exit
//		======>MMIBROWSER_TidyExistedWin


### browser
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __browser__



[1.28] sos, speed
## sos
// mk
prj:project_{cur}.mk  MMI_INDIAN_SOS_SUPPORT


// sos--enter
//		==>HandleMainMenuWinMsg
//		====>type:
//		======>HandleSOSTypeSettingsWin
app:setting\c\mmiset_sos.c  MMIAPISET_EnterSOSSettingWin
// sos--list
// sos--sms--edit
app:setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg

// 紧急号码--好像未使用
//    "112", "911"
app:cc\c\mmicc_app.c  s_emergency_call
// 112
Save:node\C\study\Macro_im_8910.h  __Emergency__


## SPEED
// mk
prj:project_{cur}.mk   MMI_SPEEDDIAL_SUPPORT

// 亲情号码
app:cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// 亲情号码--编辑
//		==>MMIAPICC_OpenSetSpeedDial
//		====>GetSpeedDialOffset
//		======>speed_dial_offset = 2


app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// 亲情号码--编辑--num
app:cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg




[1.29] 



[1.30] 
	





