
//目录:
Save:node\C\study\Macro_app_8910set.h \[1.1\] phone
Save:node\C\study\Macro_app_8910set.h \[1.2\] display
Save:node\C\study\Macro_app_8910set.h \[1.3\] callset
Save:node\C\study\Macro_app_8910set.h \[1.4\] connect
Save:node\C\study\Macro_app_8910set.h \[1.5\] shortcut
Save:node\C\study\Macro_app_8910set.h \[1.6\] startup
Save:node\C\study\Macro_app_8910set.h \[1.7\] charge
Save:node\C\study\Macro_app_8910set.h \[1.8\] envSet
Save:node\C\study\Macro_app_8910set.h \[1.9\] envPlay
Save:node\C\study\Macro_app_8910set.h \[1.10\] privacy
Save:node\C\study\Macro_app_8910set.h \[1.11\] reset
Save:node\C\study\Macro_app_8910set.h \[1.12\] psw
Save:node\C\study\Macro_app_8910set.h \[1.13\] 
Save:node\C\study\Macro_app_8910set.h \[1.14\] 




[1.1] __phone__

### phone
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


### phone--time
// __timeFormat__
app:setting\c\mmiset_datetime.c  HandleSetTimeDateWindow

// 时间显示格式 12/24
app:setting\c\mmiset_func.c  MMIAPISET_SetTimeDisplayType
// 日期显示格式 
app:setting\c\mmiset_func.c  MMIAPISET_SetDateDisplayType
//		==>MMISET_InitDateDisplayType
//		====>.s_date_display_type
source:mmi_service\export\inc\mmi_custom_define.h  MMISET_DEFAULT_DATE_YMD


### phone--lang
// set--lang
app:setting\c\mmiset_phonewin.c  HandleSetLanguageContentWindow
// 输入语言
app:setting\c\mmiset_phonewin.c  HandleSetLanguageInputContentWindow


[1.2] __display__
### set--display (form)
//		==>
//		====>
app:setting\c\mmiset_displaywin.c  MMI_RESULT_E^^HandleSetDisplayWindow



### set--display--idle
app:setting\c\mmiset_displaywin.c  MMI_RESULT_E^^HandleSetIdleDisplayWindow


### set--display--wallpaper
//		==>SetWallPaperParam               # form--init
//		==>MMIAPISET_SetWallpaper          # form--ok
//		====>HandleSetWallpaperWindow      #  选静态或文件
app:setting\c\mmiset_wallpaper.c  HandleSetStaticWallpaperWinMsg





[1.3] __callset__

// callset
//		==>MMIAPISET_OpenCallSettingsWindow
//		====>HandleCallSettingsWindow
//		======>init:
//		========>InitPdaCallSettingsCtrl
//		==========>
//		============>
//		==============>

// callset--dual sim
app:setting\c\mmiset_callwin.c  HandleMultiSimSettingWindow

// callset--other
app:setting\c\mmiset_callwin.c  InitPdaCallOtherSettingsCtrl
// callset--set Name
app:setting\c\mmiset_callwin.c  MMI_RESULT_E^HandleEditSimNameWindow
// callset--set time
app:setting\c\mmiset_callwin.c  MMI_RESULT_E^HandleSetMinuteReminderEditWindow
// fly--open
//  单卡fly在callset;
//  双卡fly在multiSim
app:setting\c\mmiset_callwin.c  HandleFlyModeOpenPhoneWindow


//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>


[1.4] __connect__

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




[1.5] __shortcut__
// 
app:setting/c/mmiset_shortcut.c  ->direction_shortcut

// fun 4
app:setting\c\mmiset_shortcut.c  OpenSelectedShortcutWin
// key 4
app:setting\c\mmiset_shortcut.c  GetDirectionKey
// key 2
app:setting\c\mmiset_shortcut.c  GetFunctionKey
// key web
app:idle\c\mmiidle_cstyle.c  case^MSG_APP_WEB


### 捷径菜单(不包括捷径edit)对齐 # 107
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
// key--func_arr
app:setting\c\mmiset_shortcut.c  OpenSelectedShortcutWin
// smart--idle--short   # 8910
app:setting\c\mmiset_shortcut.c  OpenShortcutFunWin


// short--menu--main
//		==>HandleSetShortcutWindow
//		====>SetShortcutSetlistParam
//		======>.s_shortcut_list_text_id
//		========>MMISETLIST_CreateWin
//		====>SaveAllShortcutSettings
//		======>SetShortcutInfo
app:setting\c\mmiset_shortcut.c  HandleSetShortcutWindow
//


### short
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __short__


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




[1.6] __startup__
// Start
//		==>HandleNormalStartupWindow
//		====>.PHONE_STARTUP_DURING_TIME     # time1
//		==>HandleStartupOperatorLogoWindow
//		====>.display_info                  # 8910 logo bg
//		==>HandlePowerOffWindow
//		====>.PHONE_POWER_OFF_DURING_TIME   # time2
//		==>PlayDefaultPowerOnOffAnimation
//		====>.data_info                     # 8910 logo bg
app:phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow
// ring
app:phone\c\mmiphone_onoff.c  PHONE_STARTUP_DURING_TIME
app:phone\c\mmiphone_onoff.c  PHONE_POWER_OFF_DURING_TIME
// ring
Save:node\C\study\Macro_res_ring_8910.h  __power__


// power
// --8910 要加 RED-close
//		==>HandleChargeStartupWindow
//		====>DisplayDayTimeEffert
//		======>ChargeDisplayDateAndDay
// --8910 charge msg
//		==>HandleChargeStartInd
app:phone\c\mmiphone_charge.c  PHONE_STARTUP_CHARGE_WIN_TAB
app:phone\c\mmiphone_charge.c  PHONE_STARTUP_CHARGE_OK_WIN_TAB



[1.7] __charge__

// 
// --充电测试信息:
// ----state:high
// ----type:usb
// ----charging:225 ma
// ----voltage:3755 mv
// --添加xx%:
// ----percent:50 %
app:eng/c/mmieng_uitestwin.c  BOOLEAN^ENGUITestChargingWinHandleMsg
// --chip bat:
// ----连线开机:
chip_drv\chip_module\charge\uix8910\charge_uix8910.c  _CHGMNG_VoltagetoPercentum
chip_drv\chip_module\charge\charge.c  _CHGMNG_VoltagetoPercentum
// --sublcd bat:
//		==>MMIAPIPHONE_GetBatCapacity
app:idle\c\mmi_subwintab.c  uint8^MMISUB_GetBatteryLevel
// --zmaee bat:
//		==>ZMAEE_IWatch_GetBatteryPercent
app:zmaee_128X128\c\zmaee_watch.c  ZMAEE_IWatch_GetBatteryPercent


### power--patch
Save:node\C\study\Macro_patch_8910.h  __charge__


###
//
app:phone\c\mmiphone_charge.c  DisplayDayTimeEffert
app:phone\c\mmiphone_charge.c  Charge_TIME_UP_MARGIN


### power
// ==>pos
Save:node\C\study\Macro_pos_8910.h  __idle__
// ==>image
Save:node\C\study\Macro_res_image_8910.h  __charge__
// ==>nv 充电条件
Save:node\C\study\Macro_nv_8910.h  __charge__
// ==>patch 模拟器power界面
Save:node\C\study\Macro_patch_8910.h  __charge__



[1.8] __envSet__

### env--rename


### env--setRing
// env--option--set--setRing
//		==>HandleOperationMenu
//		====>MMISET_EnterRingSettingMenu
//		======>EnterRingSettingMenu
//		========>HandleRingMainMenuWindow
//		==>.ring
//		====>MMISET_AppendFixedCallRingItem
app:setting\c\mmiset_wintab.c  MMISET_ICON_RING_MENU_WIN_TAB
// env--option--set--setRing--callRing
//		==>EnvSetRingParam
app:setting\c\mmiset_wintab.c  MMISET_RING_SELECT_CALL_WIN_TAB


### env--RingVol
// env--option--set--RingVol
//		==>HandleOperationMenu
//		====>case^ID_ENVSET_RING_VOL:
//		====>HandleAllRingVolumeWindow
//		======>WEB:
//		========>MMIAPICOM_OpenPanelChildWin
//		==========>HandlePanelWindow
//		============>AdjustValue
//		========>SetRingVolumeCB
//		==========>MMIENVSET_SetCurModeOptValue   # set nv
//		==========>SetAllRingVolParam        # vol str
//		============>GetEnvSetOptValue
//		====>MMIAPICC_SetCallVolume          # call
app:envset\c\mmienvset_wintab.c  MMIENVSET_ALL_RING_VOL_WIN_TAB


### env--RingType
// env--option--set--RingType
//		==>HandleOperationMenu
//		====>case^ID_ENVSET_RING_TYPE:
//		====>HandleRingTypeSetWindow
//		======>WEB:
//		========>HandleCallRingTypeWindow
//		========>HandleMsgRingTypeWindow
//		========>HandleAlarmRingTypeWindow
//		==========>HandleAllRingTypeWindow
//		============>MMIAPISET_SetCurRingType
//		============>MMIENVSET_PlayRingByListItem
//		============>MMIENVSET_PlayMsgAlarmRingByListItem
//		============>MMIAPISET_PlayCallRingByVol
app:envset\c\mmienvset_wintab.c  MMIENVSET_RING_TYPE_WIN_TAB


### env--OtherRing
// env--option--set--OtherRing
//		==>MMIAPISET_SetCurRingType
app:envset\c\mmienvset_wintab.c  MMIENVSET_OTHER_RING_SET_WIN_TAB


[1.9] __envPlay__

// env--option--set--setRing--PlayRing
//		==>PlayRing
//		====>MMIAPISET_PreviewRing
//		======>PlayFixedRing                      # fun
//		==>vib
//		==>timer
//		==>Tcard:
//		====>HandleSelectMusicWinMsg (OTHER)
//		======>MMIAPIFMM_PlayMusicFile
//		========>MMIAPISET_PlayMusicFile          # fun
//		==========>MMISRVMGR_Request
//		==>xx:
//		========>MMIAPISET_PlayRingByPtr          # fun
app:setting\c\mmiset_ring.c PlayRing


// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request


[1.10] __privacy__
//
app:setting\c\mmiset_security.c  HandleSelectPrivacyProtectWindow




[1.11] __reset__
// init
//		==>MMIAPISET_AllInit

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
//		====>MMIAPISET_FuncFinishedInd        # 为什么2次
//		======>MSG_SET_RESET_FACTORY_OVER_IND
//		==>MMIAPIPHONE_PowerReset             # 重启, 参考alarm关record
//		==>MMIAPIPHONE_PowerOffEx             # 重启, 优先用这个
//		==>MMIAPIPHONE_PowerOff               # 重启
// Reset--userNV
//		==>UserNV_MarkReset
//		==>MMI_ReadNVItem
//		====>
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD     #id
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_ID           #id  610
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_LEN          #len 8
// Reset--env
app:setting\c\mmiset_func.c  MMIENVSET_ResetEnvSetSetting

//
app:setting/c/mmiset_phonewin.c  MMISET_INPUT_RESET_FACTORY_PWD_WIN_TAB

### phone psw
//		==>InitPhonePwd
//		====>.MMISET_PRIVACY_PROTECT_INIT_PWD  1234
app:setting\c\mmiset_security.c  MMISET_IsCorrectPrivacyProtectPwd



[1.12] __psw__
// sec
//		==>HandleSecuritySetWindow
//		====>MMISMS_PDA_SECURITY_SETTINGS_PHONE_LOCK:
//		======>MMK_CreatePubEditWin

// sec--lock
//		==>HandleInputPwdWindow
//		====>check:
//		====>PHONE_CODE_LEN_IS_IN_RANGE
//		====>MMISET_IsCorrectPowerOnPwd
//		==>start:
//		====>MMIAPIPHONE_NormalInit
//		======>MMIAPISET_OpenPowerOnPwdWin



// sec--pin (edit)
app:phone\c\mmiphone_wintab.c  MMI_RESULT_E^HandlePinInputExceptPhone



[1.13] 




[1.14] 




[1.15] 





