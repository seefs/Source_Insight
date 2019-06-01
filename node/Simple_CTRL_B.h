
Save文件列表：
Save:SI\node\Macro_File.h

// 常用的编辑文件:
//	6531E
Save:SI\node\note\Macro_modis_6531E.h
Save:SI\node\note\Macro_Note_6531E.h
//	tmp
Save:SI\bak\Macro_tmp.h TmpNote
Save:SI\bak\Macro_code_tmp.h

//模拟器：
vc: build\H9_KLS_F4_builddir\win\simulator.dsw
//Image：
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h ImageNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h TextNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h MsgIdNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h BugNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h GuiNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h ToolNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h WinNote


/***********************************************************************/
/********************************临时文件*******************************/
/***********************************************************************/
// 所有set channel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel
//msg:Saved.
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  13150


MMI_WIN_ID_T query_win_id = FM_QUERY_WIN_ID; 
SetCurrentOperator(MMIFM_DELETE_ALL_CHANNEL);
MMIPUB_OpenQueryWinByTextId(TXT_FM_DELETE_ALL_CHA_QUERY, IMAGE_PUBWIN_QUERY, &query_win_id, HandleQuerywin);;


// 弹窗不要

//本机功能测试:
//1.耳机:长按暂停 ok.
//     bug:短按.录音过程中不要耳机暂停.拔耳机保存录音.
//2.btn:play ok.
//     bug:left-right
//     bug:播放过程中, 只切换界面频道未换.
//3.opt:
//     bug:每天好像会默认搜首次.
//4.opt-list:
//     bug:play不刷新.  ---选择列表错位
//6.rec:
//     bug:退出提示录音保存. status图标. 30min自动保存,
//     bug:录音时音量刷新太快
//7.other:
//     bug:第1次播放，进入搜索界面.音量大提示
//     bug:默认T卡--status图标;无T卡设置禁用.
//
//
//样机功能测试:
//1.status图标恢复出厂设置，也不能还原






//opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	








//set
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav




//Display:
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^^DisplayMainWindow
//Record
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  case^MSG_APP_9
	

	
//新功能:
//struct
//MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  case^MMIFM_CUSTOM_ONOFF
//MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  uint32^s_fm_custom_channel_play_opt_item
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelListWinMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^ReadCustomOpenChannelsListBox
//channel list sel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelSelectListWinMsg
//channel opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmCustomChannelOptionMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^CreateCustomChannelOptionMenu
//channel Action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMCustomAction
	

//旧功能:
//option
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction







//alarm
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h
//新功能:
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg









