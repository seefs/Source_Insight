
//目录
Save:node\C\study\Macro_fun_8910.h \[1.1\] resource_main
Save:node\C\study\Macro_fun_8910.h \[1.2\] str, wstr
Save:node\C\study\Macro_fun_8910.h \[1.3\] draw str wchar
Save:node\C\study\Macro_fun_8910.h \[1.4\] MSG
Save:node\C\study\Macro_fun_8910.h \[1.5\] 
Save:node\C\study\Macro_fun_8910.h \[1.6\] Win, Param, id---ID转换
Save:node\C\study\Macro_fun_8910.h \[1.7\] #define----------宏套宏
Save:node\C\study\Macro_fun_8910.h \[1.8\] Sleep
Save:node\C\study\Macro_fun_8910.h \[1.9\] 
Save:node\C\study\Macro_fun_8910.h \[1.10\] //popup
Save:node\C\study\Macro_fun_8910.h \[1.11\] make------------
Save:node\C\study\Macro_fun_8910.h \[1.12\] 
Save:node\C\study\Macro_fun_8910.h \[1.13\] 
Save:node\C\study\Macro_fun_8910.h \[1.14\] select_sim
Save:node\C\study\Macro_fun_8910.h \[1.15\] sim--显示单卡
Save:node\C\study\Macro_fun_8910.h \[1.16\] timer----
Save:node\C\study\Macro_fun_8910.h \[1.17\] time------------时间
Save:node\C\study\Macro_fun_8910.h \[1.18\] cursor
Save:node\C\study\Macro_fun_8910.h \[1.19\] Rect
Save:node\C\study\Macro_fun_8910.h \[1.20\]
Save:node\C\study\Macro_fun_8910.h \[1.21\] lock
Save:node\C\study\Macro_fun_8910.h \[1.22\] light
Save:node\C\study\Macro_fun_8910.h \[1.23\] 
Save:node\C\study\Macro_fun_8910.h \[1.24\] 
Save:node\C\study\Macro_fun_8910.h \[1.25\] 





[1.1] resource_main
// /res/*.txt
// --8910
make\resource_main\resource_main.mk  450
// --t701
make\resource_main\resource_target.mk 42
//	lib/ap_lib/ums9117_  改为 lib/ums9117_



[1.2] str, wstr
#str, wstr
//	MMI_STRNTOWSTR
//	//
//	MMIAPICOM_WstrToStr
//	//
//	MMIAPICOM_StrToWstr(pb_num.number, pb_num_str.wstr_ptr);
//		pb_num_str.wstr_len = pb_num.number_len;
//	//
//	MMIAPICOM_Wstrcat
//	//
//	MMIAPICOM_Wstrlen( const wchar* str )

//
//static uint8  utf8_name[] = {0x55, 0x53, 0x42, 0x20, 0x0};	

//MMIAPICOM_CustomGenerateReplaceStr


#GUIEDIT
// MMK_SendMsg
//		MMI_WIN_ID_T win_id = MMK_GetFocusChildWinId();
//		MMK_SendMsg(win_id, MSG_LONG0_DIAL_EDIT, PNULL);

// GUIEDIT_InsertString
//{
//		wchar char_plus[]={'+', 'P', 'W', '0'};
//	    MMK_SendMsg(edit_ctrl_id, MSG_KEYDOWN_CANCEL, PNULL);
//		GUIEDIT_InsertString(edit_ctrl_id, &char_plus[g_keylong0_char_index], 1);
//		g_keylong0_char_index = (g_keylong0_char_index+1)%4;
//		MMK_SendMsg(edit_ctrl_id, MSG_CTL_PAINT, PNULL);
//}


#Strcat
//	MMIAPICOM_StrcatFromSTRINGToUCS2(uint16_str, &uint16_str_len, &cr_s);//换行
//	MMIAPICOM_StrcatFromSTRINGToUCS2(uint16_str, &uint16_str_len, &cr_s);//换行
//	deviceVersion = adups_get_device_version();
//  MMIAPICOM_StrcatFromStrToUCS2(uint16_str, &uint16_str_len, (uint8*)deviceVersion, SCI_STRLEN((char*)deviceVersion));
//  MMIAPICOM_StrcatFromSTRINGToUCS2(uint16_str, &uint16_str_len, &cr_s);//换行
//	MMIAPICOM_StrcatFromTextIDToUCS2(uint16_str, &uint16_str_len, TXT_ADUPS_FOTA_STR);

#GB Wstr
//	GUI_GBToWstr
//	GUI_WstrToGB
//	GUI_GBKToUTF8 (no exist)

#GB UTF8
//	GUI_UTF8ToWstr
//	GUI_WstrToUTF8

#font type
//	GUI_GetCodeType

#4bit to 8bit
//MMIAPICOM_BcdToStr


[1.3] draw str wchar
//{
//    GUI_LCD_DEV_INFO  lcd_dev_info = {0, 0};
//    GUI_RECT_T        test_rect   = {0, 0, 239, 25};
//    MMI_STRING_T      text_str = {0};
//    wchar             temp_wstr[8 + 1] = {0};
//    uint8             num_str[8 + 1]  = {0};
//    GUISTR_STYLE_T   text_style = {0};/*lint !e64*/
//    GUISTR_STATE_T   text_state = GUISTR_STATE_BOLD;
//	
//    //MMK_GetWinLcdDevInfo(win_id, &lcd_dev_info);
//    sprintf((char*)num_str, "x %02d", (int)num);
//	MMI_STRNTOWSTR( temp_wstr, 8, (char*)num_str, strlen(num_str),  strlen(num_str) );
//	text_str.wstr_ptr = temp_wstr;
//	text_str.wstr_len = strlen(num_str);
//	
//    text_style.font = SONG_FONT_16;
//    text_style.font_color = MMI_BLACK_COLOR;
//
//	GUISTR_DrawTextToLCDInRect( 
//		(const GUI_LCD_DEV_INFO *)&lcd_dev_info,
//		&test_rect,
//		&test_rect,
//	    (const MMI_STRING_T     *)&text_str,
//	    &text_style,
//	    text_state,
//	    GUISTR_TEXT_DIR_AUTO);
//}


//	PUBLIC void str_test(void)
//	{
//	    uint8 test_name[1000];
//	    wchar   file_name[MMIBROWSER_DL_FILE_FULL_PATH_MAX_LEN + 1] = {0};
//
//	    MMIAPICOM_WstrToStr(file_name, (uint8*)test_name);
//
//	}


[1.4] MSG
// MSG
source:mmi_app\common\h\mmi_appmsg.h  MSG_SET_RESET_NEED_WAIT_IND
//
MMK_SendMsg(VIRTUAL_WIN_ID, MSG_ALM_ALERTING_END, PNULL);

//
CAF\Template\include\caf.h  MSG_USER_START


### Focus
// 估计用于窗口属性
//   MMK_GetFocusWinHandle
// 
//   MMK_GetFocusWinId()
//   MMK_GetActiveCtrlId(MMK_GetFocusWinId());

// Parent
//  MMK_CloseParentWin(MMISMS_CB_SETTING_WIN_ID);
//  MMK_GetParentWinHandle(win_id);


[1.5] 


[1.6] Win Param
// Param
//	MMK_CreateWin((uint32 *)WIN_TAB, (ADD_DATA)win_param);
//	MMIFM  start_way = (uint32)MMK_GetWinAddDataPtr(win_id);
//
//	MMK_CreateWin((uint32*)WIN_TAB, &s_info);
//	s_win_param = (PARAM_T *) MMK_GetWinAddDataPtr(win_id); 


// send
//	MMK_SendMsg(WIN_ID, MSG_APP, (DPARAM)MMIFM);
//	MMK_SendMsg(WIN_ID, MSG_APP, &str_t);
//	s_win_param = (PARAM_T*)param;
//
//	MMK_PostMsg (WIN_ID, MSG_APP, &result, sizeof (result));
//	s_win_param = *((uint32*)result);


// win_id
//	MMI_WIN_ID_T win_id1 		= MMK_GetFocusChildWinId();
//	MMI_WIN_ID_T WIN_ID_SUB 	= MMK_GetWinId(win_id1);
//	MMI_WIN_ID_T WIN_ID_MAIN    = MMIPB_MAIN_WIN_ID;
//	MMI_WIN_ID_T WIN_ID_SUB		= MMIPB_ENTRY_LIST_TAB_WIN_ID;
//	MMI_WIN_ID_T win_id5 		= MMK_GetFocusWinId();
//  MMI_WIN_ID_T WIN_ID_MAIN	= MMK_GetWinId(win_id5);

//	MMI_WIN_ID_T win_id1 		= MMK_ConvertIdToHandle(WIN_ID_SUB);
//
//	MMI_WIN_ID_T wid_chld = MMK_GetWinId(win_handle);
//	MMI_WIN_ID_T wid_prnt = MMK_GetWinId(MMK_GetParentWinHandle(win_handle));

// fun
//	MMK_IsFocusWin()
//	MMK_IsOpenWin()
//	MMK_CloseWin()

// 静态创建
//	MMK_CreateWin()
// 动态创建
//	MMK_CreateWindow()

//
source:mmi_kernel_sys\source\c\mmk_window.c  ^CreateWin( )
// create
//   win_id ->create_ptr->applet_handle->add_data_ptr->create_ptr2->node_ptr  ->create_ptr3->node_ptr2
//   1769499->0x1bb9fa18->16711680     ->0x0758bebc  ->0x1bb9f994 ->0x0758c16c->0x0758c1ac ->0x0758c28c
// get--MMIPUB_GetWinAddDataPtr
//   win_id ->node_ptr2 ->handle  ->win_ptr3  ->adddata_ex_ptr
//   1769499->0x0758c28c->22347790->0x0758c1ac->0x00
//
// ptr
//      win_create.add_data_ptr
//      win_create.add_data_ex_ptr
//


[1.7] #define
//宏套宏
//	#define Handle_WinMsg(_ID1_, _ID2_) \
//		LOCAL MMI_RESULT_E Handle_QMOBILE_##_ID1_##_##_ID2_##_WinMsg () \
//		... \




[1.8] Sleep
//
//	SCI_Sleep(50);




[1.9] 







[1.10] 






[1.11] make
//make
custom_drv chip_drv version aud_dev aud_config refbase dv_cfg bt_pal 
ucom usbservice ubot scp scm lcd dc caf_templete utility utility_performance cdrom 
app_main mmk_main gui_main mmk_sys_main !resource_main ctrl mmi_service 
!dmdsp !cm4 !fdl1 !fdl2 !bootloader !tf_fdl midisoundbank autotest_device

// app_main
//	ifeq       #ifdef
//	ifneq      #ifndef
//	else       #else
//	endif      #endif

//
app_macro.mk
//LOW_MEMORY_SUPPORT 32X32
//LOW_MEMORY_SUPPORT NONE
//Common
app_main.macro
app_main.mk



[1.12] 


[1.13] 



[1.14] select_sim
// select_sim
//	MMIAPISET_GetFlyMode()

### rxlevel_step
//		==>HandleNetworkStatusInd
//		====>MAIN_SetIdleRxLevel
//		======>0
//		==>HandleScellRssiInd
//		====>.srri_ind.rxlev       
//		======>.g_service_rxlev_map  # 107
//		======>MMIPHONE_GetRSSIMap   # 8910
app:phone\c\mmiphone.c  HandleScellRssiInd



[1.15] sim--显示单卡
// code
Save:node\C\study\Macro_doc_8910.h  __ELECTRIC__

### 显示单卡
app:phone/c/mmiphone.c  MMIAPIPHONE_GetSimExistedStatus
//#if 0//defined IDLE_NETWORK_ONE_SIM_SHOW_EXIST_STYLE
//	if(dual_sys==MN_DUAL_SYS_1)
//		return FALSE;
//	else if(dual_sys==MN_DUAL_SYS_2)
//		return TRUE;
//#else
//    if (dual_sys >= MMI_DUAL_SYS_MAX)
//    {
//        return FALSE;
//    }
//    
//    return(s_sim_existed_status[dual_sys]);
//#endif

//
app:phone/c/mmiphone.c  MMIAPIPHONE_GetSimExistedNum
//#if 0//defined IDLE_NETWORK_ONE_SIM_SHOW_EXIST_STYLE
//    return 1;
//#else
//    return num;
//#endif



[1.16] timer
//	LOCAL uint8 g_test_timer  = 0;
//	LOCAL void Test_Callback(uint8 timer_id, uint32 param)
//	{
//	    MMK_StopTimer(0);
//	}
//	PUBLIC void MMIMANMENU_EnterSetting(uint32 param1, uint32 param2)
//	{
//		g_test_timer = MMK_CreateTimerCallback(5*1000, Test_Callback, PNULL, FALSE);
//	    MMIAPIMENU_EnterSetting();
//	}


//
SCI_CreatePeriodTimer
//
SCI_CreateTimer();
SCI_DeactiveTimer(ptr);
SCI_IsTimerActive(ptr);
SCI_DeleteTimer(ptr);
//
SCI_ChangeTimer(ptr);
SCI_ActiveTimer(ptr);

// 背光, 上锁
app:setting/c/mmiset_func.c  MMIAPISET_GetAutoBoardKeyMS
source:mmi_app\kernel\c\mmi_default.c  void^MMIDEFAULT_StartAutoKeylockTimer

// timer中无法关闭win:
//	MMK_DelayUpdateScreen
//	MMITHEME_SetUpdateDelayCount
//	MMITHEME_GET_MUTEX


[1.17] time
//
//    SCI_DATE_T     ate       = {0};
//    SCI_TIME_T     time      = {0};
//    SCI_TIMEX_T    timeX      = {0};
//    TM_GetSysDate(&date);
//    TM_GetSysTime(&time);
//    TM_GetSysTimeEx(&timeX);


[1.18] __cursor__
// 不显示 cursor
MS_MMI_Main/source/mmi_ctrl/source/editbox/c/ctrlbaseflex_cursor.c  void^FillCursorColor
//	#ifdef WIN32
//	#endif


// 不显示 cursor timer
//		==>TextEditCtrlHandleMsg
//		====>BASEFLEX_HandleCursorTimer
//		======>BASEFLEX_DisplayCursor
//		========>BASEFLEX_StartCursorTimer
ctrl:editbox\c\ctrlbaseflex_display.c   BaseFlexCtrlDisplayAll


// cursor--draw
ctrl:editbox\c\ctrlbaseflex_cursor.c  void^FillCursorColor
//#ifdef WIN32
//	{
//    	static uint16  test_disable_cursor = 0;
//		if(test_disable_cursor>0)
//			return;
//    }
//#endif

// cursor--关定时器--没有timer消息
ctrl:editbox\c\ctrlbaseflex_cursor.c   BASEFLEX_StartCursorTimer
//#ifdef WIN32
//	{
//    	static uint16  test_disable_cursor = 0;
//		if(test_disable_cursor>0)
//			return;
//    }
//#endif


[1.19] Rect
//LCD_FillRect

//	GUI_RECT_T form_rect = {0};   
//	GUI_RECT_T rect = {10,0,128,20};
////	FormCtrlGetRect(MMK_GetCtrlPtr(MMIALM_DAYS_FORM_CTRL_ID), &rect);
////	form_rect.left = rect.left;
////	form_rect.top = rect.top + 2;
////	form_rect.right = rect.right;
////	form_rect.bottom = form_rect.top + 20;
//	GUIFORM_SetRect(MMI_EDITWIN_CHILD_FORM_CTRL_ID, &rect);


[1.20] 




[1.21] __lock__
//
app:keylock\c\mmikl_keylock.c  MMIAPIKL_LockPhone
app:keylock\c\mmikl_keylock.c  MMIAPIKL_UnlockPhone

//	MMIKL_SetWinStatus
//	MMIPUB_OpenAlertWinByTextId
//	MMIKL_OpenTimeScreenSaverWin

// KeyLock
app:setting\c\mmiset_security.c  MMI_RESULT_E^^HandleSetAutoKeyLockWindow

//
app:keylock\c\mmikl_keylock.c  KEYLOCK_PRESS_LSK_UNLOCK


[1.22] light
//
source:mmi_app\kernel\c\mmi_default.c  KEYLOCK_PRESS_ANY_KEY_BACKLIGHT
//
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_IsBacklightOn
//
source:mmi_app\kernel\c\mmi_default.c  StartSettingLCDBackLightTimer


### base msg
source:mmi_kernel\source\c\mmk_kbd.c  BOOLEAN^HandleMSGKbd
source:mmi_app\kernel\c\mmi_default.c  MSG_KEYDOWN_FLIP
// 1490
source:mmi_app\kernel\c\mmi_default.c  MSG_KEYUP_FLIP
//		MMK_HandlePublicKey: MSG_KEYUP_FLIP!

### record msg
source:mmi_kernel\source\c\mmk_kbd.c  CheckFlipKeyMsgNumber
source:mmi_kernel\source\c\mmk_kbd.c  MMI_FlipKeyHandle

### flip msg
// kbd msg
source:mmi_kernel\source\c\mmk_kbd.c  MMIDEFAULT_HandleFlipKey
// app msg
app:accessory\c\mmialarm.c  MMIDEFAULT_HandleFlipKey

### gpio msg
// 1360
MS_Customize\source\product\driver\gpio\gpio_prod.c  GPIO_SetLcdBackLight
//		GPIO_SetLcdBackLight: 1 
// 1458 1504
MS_Customize\source\product\driver\gpio\gpio_prod.c  void^GPIO_Set_SubLcd_BackLight
//		[GPIO LCD] :: Set_SubLcd_BackLight (1)


### 亮灭屏
// 参考动画流程
source:mmi_app\kernel\c\mmi_default.c  MMI_TURNON_BACKLIGHT_EFFECT_SUPPORT
//
//		==>DefaultBackLight
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOnBackLight
//source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOffBackLight
source:mmi_app\kernel\c\mmi_default.c  CloseAllLight


// 按RED键锁屏进屏保
app:idle\c\mainapp.c  MMI_KEYLOCK_SCREENSAVER_D11Y_STYLE




[1.23] 


[1.24] 


[1.25] 



