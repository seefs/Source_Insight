
//目录:
Save:node\C\study\Macro_nv_tool8910.h \[1.1\] init
Save:node\C\study\Macro_nv_tool8910.h \[1.2\] bt
Save:node\C\study\Macro_nv_tool8910.h \[1.3\] gps
Save:node\C\study\Macro_nv_tool8910.h \[1.4\] env_nv
Save:node\C\study\Macro_nv_tool8910.h \[1.5\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.6\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.7\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.8\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.9\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.10\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.11\] 
Save:node\C\study\Macro_nv_tool8910.h \[1.12\] 




[1.1] __init__

// SMS
//	MMINV_MAX_SMS_RECORDS
//	 PB
//	NV_PHONE_BOOK_MAIN
//	NV_PHONE_BOOK_LND_LAST_ENTRY

//
//	MMISET_ResetFactorySetting()
//	MMISET_CleanUserData()

//
//	MMIAPIENG_RegNv


// init
//	MMIAPISET_AllInit

// usernv
s_mmi_usernv_len




[1.2] __bt__

// 2.bt_config--401
nv:ProductionParam_uix8910.nvm  bt_config
//
MS_Customize\export\inc\bt_cfg.h  BT_SPRD_NV_PARAM

// bt_sprd
nv:ProductionParam_uix8910.nvm  3651
// 362->361->340

### __bt_nv__
// bt
// --默认Tcard, 自动向udisk查找
//		==>MMIBT_OpenIncomingFileWin()
app:bt\c\mmibt_func.c  MMINV_BT_FILE_LOCATION
//		==>MMISET_ResetFactorySetting            # set
//		====>MMIAPIBT_Reset
//		======>MMIBT_Reset
//		========>MMIAPIFMM_GetDefaultDisk        # 默认最后一个盘
//		==>MMIBT_OpenIncomingFileWin             # bt 接收
//		====>
//		==>MMIAPISD_HandleSDPlugWaiting          # SD 插入msg
//		====>SDPLUG_IN:
//		====>MMIAPIBT_SaveFileLocation
//		==>APP_Init
//		====>MMIAPIBT_AppInit
//		======>MMIBT_SetFileSaveLocation         # init, SD, file path
//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>

[1.3] __gps__

// 3.
// gps_config--403
nv:ProductionParam_uix8910.nvm  gps_config
// tv_rssi_comp--404
nv:ProductionParam_uix8910.nvm  tv_rssi_comp
// multi_langue_cfg--405
nv:ProductionParam_uix8910.nvm  multi_langue_cfg
// wifi_config--409
nv:ProductionParam_uix8910.nvm  wifi_config
// engine_test_result--431
nv:ProductionParam_uix8910.nvm  engine_test_result
// bt_sprd--442
nv:ProductionParam_uix8910.nvm  bt_sprd
// fm_config--451
nv:ProductionParam_uix8910.nvm  fm_config
// e_guarantee_card--560
nv:ProductionParam_uix8910.nvm  e_guarantee_card




[1.4] __env_nv__

//		==>val
//		====>mmienvset_default_setting
//		====>mmienvset_default_setting_ex
//		====>diff:
//		======>MMISET_RING_DEFAULT_ID_EX
//		==>bak:
//		====>MMK_HandlePublicKey
//		======>HEADSET_DETECT:(down)
//		========>MMIAPIENVSET_ReSetAllVolmue
//		==========>MMIAPIENVSET_SetModeValue         # vol 5
//		==========>MMIAPIMP3_SetVolume               # vol 5 mp3
//		==========>MMIFM_AdjustVolumeTP              # vol 5 fm
//		==========>MMIAPIVP_FSMUpdateCurrentVolNoHandle
//		============>备份在缓存NV中
//		======>HEADSET_DETECT:(up)
//		==========>MMIAPIENVSET_UnReSetAllVolmue()
//		============>还原NV
//		==>sys:
//		====>MMIAPISET_AllInit
//		======>MMISET_EnvSetInit
//		========>前模式: 普通环境                           # 全局env
//		========>活动模式: 普通环境
//		========>当前模式: 前模式 或 活动模式
//		========>静音状态: 否
//		========>更多铃声: 
//		========>上次NV: s_mmienvset_setting_info      # 缓存
//		========>Enhance: 
//		======>OtherInit
//		========>PRODUCT_CODE_Read                   # 部分国家码？
//		====>MMISET_ResetFactorySetting
//		======>MMIENVSET_ResetEnvSetSetting          # 用v1, 特殊码用v2
//		==>set:
//		====>addMode:
//		======>HandleEnvOptMenuWindow
//		========>GetEnvAddIndex
//		==========>MMIAPIENVSET_GetModeValue
//		==========>MMIENVSET_InitUserIndexItem       # 用v1
//		====>MMIENVSET_EnvName_WriteInNV
//		====>MMIENVSET_GetEnvRealIndex
//		====>MMIENVSET_CreateMoreRingFile
//		====>MMIAPIENVSET_ResetActModeOtherRingSet   # 恢复部分默认值
//		==>switch:
//		====>GetEnvSetOptValue
//		======>GetModeValue
//		====>HandleEnvSetMainMenuWindow
//		======>MMIENVSET_SetCurModeId((uint8)real_id);
//		======>envset_mode = MMIENVSET_GetCurModeId();
//		========>MMIAPIENVSET_ActiveMode(envset_mode);
//		========>MMIENVSET_SetPreActiveMode(active_mode_id);   
//		==========>SetActiveModeId
//		==>bt:
//		====>MMIBT_OpenHeadsetCnf
//		======>MMIAPIENVSET_SetBluetoothMode();
//		====>MMIBT_CloseHeadsetCnf
//		======>MMIAPIENVSET_UnSetBluetoothMode();

// NV可能是这个
rdnv:\
rdnv:NV_PARAM_TYPE_SIM_CFG[1].xml  profile_download_bytes



[1.5] 




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






