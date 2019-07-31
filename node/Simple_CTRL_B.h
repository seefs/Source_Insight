
Save文件列表：
Save:SI\node\Macro_File.h

// 常用的编辑文件:
//	6531E
Save:SI\node\note\Macro_modis_6531E.h
Save:SI\node\note\Macro_Note_6531E.h

//模拟器：
vc: build\H9_KLS_F4_builddir\win\simulator.dsw
//6531E
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.1\] ImageNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.2\] TextNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.4\] GuiNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[2.2\] WinNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[3.1\] ToolNote





project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_H9_KLS_FM
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM





/***********************************************************************/
/********************************临时文件*******************************/
/***********************************************************************/
// FM: 不保存, 是否真的不保存
// MMIAPIENVSET_ResetActModeKeyRingSet  MMIAPIENVSET_CloseActModeKeyRingSet
// file_name_ptr  //有特殊符号, 后面要改
// T卡播放没做 
//隐藏IM icon/num无效
// fm list->num 1-9->MMIDEFAULT_getHLVolIconId

//fm name 超长
//fm time 时间重复，或过时

//FM:
//TXT_FM_CUSTOM_START_AUTO_SCAN, 

HandleSetTimeDateWindow
	GUIEDIT_ConfigImDefaultKey
	
	

//play
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  7900 ++ SetFMStartSuspendButtonStatus


//FmTimer
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  8530  ++


//Display:
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  2387  play
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^^DisplayMainWindow
//Record
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordActionTest


//opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	
// 所有set channel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel



//set
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  13485
//set
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  13522
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  13730





























MMK_CreateWin

MMIAPISET_StopRing



//
MMK_CreateWin


font:
13:窄8
14:宽8
15:宽9
16:窄10 MMI_DEFAULT_SMALL_FONT
17:宽10 MMI_DEFAULT_NORMAL_FONT







