
//目录:
Save:node\C\study\Macro_app_8910set.h \[1.1\] phone
Save:node\C\study\Macro_app_8910set.h \[1.2\] callset
Save:node\C\study\Macro_app_8910set.h \[1.3\] connect
Save:node\C\study\Macro_app_8910set.h \[1.4\] reset
Save:node\C\study\Macro_app_8910set.h \[1.5\] shortcut
Save:node\C\study\Macro_app_8910set.h \[1.6\] 
Save:node\C\study\Macro_app_8910set.h \[1.7\] 
Save:node\C\study\Macro_app_8910set.h \[1.8\] 
Save:node\C\study\Macro_app_8910set.h \[1.9\] 
Save:node\C\study\Macro_app_8910set.h \[1.10\] 
Save:node\C\study\Macro_app_8910set.h \[1.11\] 
Save:node\C\study\Macro_app_8910set.h \[1.12\] 




[1.1] __phone__

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


[1.2] __callset__

//		==>MMIAPISET_OpenCallSettingsWindow
//		====>HandleCallSettingsWindow
//		======>
//		========>
//		==========>
//		============>
//		==============>


// callset--other
app:setting\c\mmiset_callwin.c  InitPdaCallOtherSettingsCtrl
// callset--set Name
app:setting\c\mmiset_callwin.c  MMI_RESULT_E^HandleEditSimNameWindow
// callset--set time
app:setting\c\mmiset_callwin.c  MMI_RESULT_E^HandleSetMinuteReminderEditWindow
// fly--open
app:setting\c\mmiset_callwin.c  HandleFlyModeOpenPhoneWindow


//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>


[1.3] __connect__

// set--connect
//		==>HandleConnectionMenuWinMsg
//		====>InitPdaConnectionMainListCtrl
//		======>.s_network_type_select  # 3, 不要2g单模
//		======>TXT_COMMON_WWW_ACCOUNT  # sim卡接入点
//		======>TXT_GPRS_SERVICE        # 数据业务
//		==>MMIAPISET_OpenNetWorkTypeWin
//		====>HandleNetworkTypeWindow
//		==>InitVodafoneApnList
//app:connection\c\mmiconn_manager_wintab.c  MMIAPICONNECTION_OpenMenuWin
app:connection\c\mmiconn_manager_wintab.c  InitPdaConnectionMainListCtrl
// ==>apn
Save:node\C\study\Macro_doc_apn8910.h
Save:node\C\study\Macro_doc_apn107.h



[1.4] __reset__

// Reset
//		==>MMIAPISET_OpenInputResetPwdWin
//		====>HandleInputResetFactoryPwd
//		======>MSG_PROMPTWIN_OK
//		========>MSG_SET_CLEAN_DATE_IND
app:setting/c/mmiset_phonewin.c  case^ID_SET_RESET_FACTORY
app:setting/c/mmiset_phonewin.c  case^MSG_SET_CLEAN_DATE_IND
//		==>MMISET_CleanUserData
//		====>MSG_SET_CLEAN_USER_DATA_OVER_IND
//		======>HandleResetOrCleanDataWaitWin
//		==>MMISET_ResetFactorySetting
//		====>MMIAPISET_SetWaitFlag
//		======>MSG_SET_RESET_NEED_WAIT_IND
//		====>MMIAPISET_FuncFinishedInd  # 为什么2次
//		======>MSG_SET_RESET_FACTORY_OVER_IND
//		==>MMIAPIPHONE_PowerReset
// Reset--userNV
//		==>UserNV_MarkReset
//		==>MMI_ReadNVItem
//		====>
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD     #id
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_ID           #id  610
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_LEN          #len 8
// Reset--env
app:setting\c\mmiset_func.c  MMIENVSET_ResetEnvSetSetting



[1.5] __shortcut__
// 
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_shortcut.c  ->direction_shortcut

// fun 4
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  OpenSelectedShortcutWin
// key 4
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  GetDirectionKey
// key 2
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  GetFunctionKey
// key web
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_cstyle.c  case^MSG_APP_WEB


### 设置捷径对齐 # 107
// id
MMISET_SHORTCUT_MAX / MMISET_SHORTCUT_TYPE_E
// txt
s_shortcut_menu_list_text_id
// func
mmiset_shortcut_menu_func_arr


### 快捷方向键软键对齐 # 107 /8910
// id
MMISET_SHORTCUT_MAX / MMISET_SHORTCUT_TYPE_E
// key--txt
s_shortcut_list_text_id
// key--func
OpenSelectedShortcutWin--func_arr
// smart--idle--short
app:setting\c\mmiset_shortcut.c  OpenShortcutFunWin

// short--menu
//		==>HandleSetShortcutWindow
//		====>SetShortcutSetlistParam
//		======>.s_shortcut_list_text_id
//		========>MMISETLIST_CreateWin
//		====>SaveAllShortcutSettings
//		======>SetShortcutInfo


### mini对齐 (未使用)
// key--pic/txt    # idle (2个, mini的应该对齐)
s_shortcut_id
// key--pic        # short (107前面没对齐)
s_shortcut_list_img_id


### 默认值/显示 (不用对齐)
// default list
s_shortcut_menu_show_list_text_id


### 编辑 # 107 (不用对齐)
// all list
s_shortcut_menu_edit_list_text_id


// edit-menu
//		==>MMIAPISET_EnterShortCutMenuWin
//		====>HandleShortCutSetMenuWindow
app:setting\c\mmiset_phonewin.c  MMI_RESULT_E^HandleShortCutSetMenuWindow




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 





