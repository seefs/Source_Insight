
//目录:
Save:node\C\study\Macro_app_8910file.h \[1.1\] 
Save:node\C\study\Macro_app_8910file.h \[1.2\] 
Save:node\C\study\Macro_app_8910file.h \[1.3\] 
Save:node\C\study\Macro_app_8910file.h \[1.4\] 
Save:node\C\study\Macro_app_8910file.h \[1.5\] 
Save:node\C\study\Macro_app_8910file.h \[1.6\] 
Save:node\C\study\Macro_app_8910file.h \[1.7\] 
Save:node\C\study\Macro_app_8910file.h \[1.8\] 
Save:node\C\study\Macro_app_8910file.h \[1.9\] 
Save:node\C\study\Macro_app_8910file.h \[1.10\] 
Save:node\C\study\Macro_app_8910file.h \[1.11\] 
Save:node\C\study\Macro_app_8910file.h \[1.12\] 




[1.1] __udiskMain__
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



[1.2] __udiskOpt__

// --name
app:fmm/c/mmifmm_mainwin.c  MMIFMM_CombineFullFileName
// dev list
app:fmm/c/mmifmm_mainwin.c  HandleFmmListWinMsg


// opt
//		==>HandleUdiskChildWindow
//		====>MENU:
//		====>HandleCreatePopMenuOpt    # 选择menu
//		======>MMIFMM_OpenMeunPubWin
//		========>MENU_FMM_NORMAL_LIST_OPT
//		==========>.menu_fmm_normal_list_opt
//		==========>.menu_fmm_music_list_opt
app:fmm\h\mmifmm_menutable.def  MENU_FMM_NORMAL_LIST_OPT
// opt--memory
//		========>MENU_FMM_MEMORY_OPT
//		==========>.menu_fmm_memory_opt

// opt--format
app:fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleFmmMainDetailMenuMsg


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






[1.3] __udiskName__


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


[1.4] __udiskPath__

### 初始化目录

// --init
source:mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE
source:mmi_service\source\mmisrvcommon\c\mmi_common.c s_file_default_path
app:udisk\c\mmi_sd.c  MMISD_CreateDefaultFold

### 文件类型
//		==>.s_fmm_all_suffix
//		====>22--{"lib",     MMIFMM_FONT,        TRUE}
//		====>.MMIFMM_FONT
//		====>.MMIFMM_FILE_TYPE_FONT
app:fmm\c\mmifmm_app.c  s_fmm_all_suffix

// 打开font.lib
//		==>.MMIFMM_FILE_TYPE_FONT
app:fmm\c\mmifmm_mainwin.c HandleListItem

// 
//		==>.MMIFMM_FILE_TYPE_FONT
app:fmm\c\mmifmm_mainwin.c HandleCreatePopMenuOpt

// 选择font.lib
//		==>.MMIFMM_FILE_TYPE_FONT
//		====>.MMIAPIFMM_OpenSelectFontWin
app:fmm\c\mmifmm.c HandleSelectFontWinMsg




[1.5] __UsbMode__

// FILE
MMIFMM_HandleOpenFileWin
// 不进U盘 
app:udisk\c\mmiudisk_wintab.c  USB_CONNECT_DEFAULT_CHARGE
app:udisk\c\mmiudisk_wintab.c  MMI_WATCH_NEW_STYLE
// 默认进U盘 
app:udisk\c\mmiudisk_wintab.c  is_SetOn!=USB_SERVICE_MAX
//	add:
//		is_SetOn = USB_SERVICE_UDISK;

// usb
app:udisk\c\mmiudisk_wintab.c  MMI_RESULT_E^^HandleUsbOperSelectWindow



[1.6] __udiskTest__

// --udiskTest
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



[1.7] file
//
LoadFileToImage




[1.8] usb
// 107
// --udisk--test
//		==>MMIAPIUdisk_HandleUsbCablePlugIn
//		====>MMIAPIUdisk_OpenUsbOperWindow
//		==>MMIUDISK_USB_OPER_SELECT_WIN_TAB
//		====>HandleUsbOperSelectWindow
//		======>USB_SERVICE_CHARGE
app:udisk/c/mmiudisk_wintab.c  MMIAPIUdisk_OpenUsbOperWindow




[1.9] 




[1.10] 



[1.11] 




[1.12] 







