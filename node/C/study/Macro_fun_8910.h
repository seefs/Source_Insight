
基础路径设置:
patchPath = Save:\..\patch\UIS8910_git
patch:\\

//目录:
// 1. constant
Save:node\C\study\Macro_fun_8910.h \[1.1\] resource_main
Save:node\C\study\Macro_fun_8910.h \[1.2\] str, wstr
Save:node\C\study\Macro_fun_8910.h \[1.3\] timer, LONG_0----
Save:node\C\study\Macro_fun_8910.h \[1.4\] MSG
Save:node\C\study\Macro_fun_8910.h \[1.5\] NV, init
Save:node\C\study\Macro_fun_8910.h \[1.6\] Win, Param, id---ID转换
Save:node\C\study\Macro_fun_8910.h \[1.7\] #define----------宏套宏
Save:node\C\study\Macro_fun_8910.h \[1.8\] RED
Save:node\C\study\Macro_fun_8910.h \[1.9\] sms_member
Save:node\C\study\Macro_fun_8910.h \[1.10\] 
Save:node\C\study\Macro_fun_8910.h \[1.11\] make------------
Save:node\C\study\Macro_fun_8910.h \[1.12\] debug, trace
Save:node\C\study\Macro_fun_8910.h \[1.13\] 
Save:node\C\study\Macro_fun_8910.h \[1.14\] mp3-------------刷新
Save:node\C\study\Macro_fun_8910.h \[1.15\] tts
Save:node\C\study\Macro_fun_8910.h \[1.16\] draw str wchar
Save:node\C\study\Macro_fun_8910.h \[1.17\] time
Save:node\C\study\Macro_fun_8910.h \[1.18\] press key
Save:node\C\study\Macro_fun_8910.h \[1.19\] Rect
Save:node\C\study\Macro_fun_8910.h \[1.20\]
// 2.func
Save:node\C\study\Macro_fun_8910.h \[2.1\] lock
Save:node\C\study\Macro_fun_8910.h \[2.2\] light
Save:node\C\study\Macro_fun_8910.h \[2.3\] ADN FDN SDN
Save:node\C\study\Macro_fun_8910.h \[2.4\] Dtmf
Save:node\C\study\Macro_fun_8910.h \[2.5\] CC--msg
Save:node\C\study\Macro_fun_8910.h \[2.6\] SMS--tp input
Save:node\C\study\Macro_fun_8910.h \[2.7\] cursor
Save:node\C\study\Macro_fun_8910.h \[2.8\] file
Save:node\C\study\Macro_fun_8910.h \[2.9\] select_sim
Save:node\C\study\Macro_fun_8910.h \[2.10\] Sleep
Save:node\C\study\Macro_fun_8910.h \[2.11\] reset----------重启
Save:node\C\study\Macro_fun_8910.h \[2.12\] 小图标
Save:node\C\study\Macro_fun_8910.h \[2.13\] Browser--------默认PIC
Save:node\C\study\Macro_fun_8910.h \[2.14\] BT-------------msg
Save:node\C\study\Macro_fun_8910.h \[2.15\] Test-----------key id
Save:node\C\study\Macro_fun_8910.h \[2.16\] sim--显示单卡
Save:node\C\study\Macro_fun_8910.h \[2.17\] usb
Save:node\C\study\Macro_fun_8910.h \[2.18\] 
Save:node\C\study\Macro_fun_8910.h \[2.19\] 
Save:node\C\study\Macro_fun_8910.h \[2.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h





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




[1.3] timer, LONG_0
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


// 背光, 上锁
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_func.c  MMIAPISET_GetAutoBoardKeyMS
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  void^MMIDEFAULT_StartAutoKeylockTimer


## LONG_0 
// 	 MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseflex.c
// (7)LONG 处理
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseflex.c MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_ctrl\source\Im\c\ctrlim.c 
MS_MMI_Main\source\mmi_ctrl\include\ctrlim_base.h 
// switch
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlphonenumedit.c MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlphonenumedit.c 
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlphonenumedit.c 
MS_MMI_Main\source\mmi_app\app\idle\c\mainapp.c MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_app\app\idle\c\mainapp.c 
MS_MMI_Main\source\mmi_app\app\idle\c\mainapp.c 
MS_MMI_Main\source\mmi_app\app\idle\c\mainapp.c 
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_dial.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_app\app\idle\h\mmiidle_export.h 
MS_MMI_Main\source\mmi_app\app\im\c\mmiim_sp_multitap.c 
MS_MMI_Main\source\mmi_app\app\im\c\mmiim_sp_multitap.c 
// (6)LONG 前
MS_MMI_Main\source\mmi_app\app\im\c\mmiim_sp_multitap.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
// (3)timer R
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c 
// (1)timer S
// (4)timer R
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_kernel\include\mmk_msg.h 
// (2)timer
MS_MMI_Main\source\mmi_kernel\source\c\mmk_timer.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
MS_MMI_Main\source\mmi_kernel\include\mmk_timer.h 




[1.4] MSG
// MSG
MS_MMI_Main\source\mmi_app\common\h\mmi_appmsg.h  MSG_SET_RESET_NEED_WAIT_IND
//
MMK_SendMsg(VIRTUAL_WIN_ID, MSG_ALM_ALERTING_END, PNULL);





[1.5] NV
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
MS_MMI_Main\source\mmi_kernel_sys\source\c\mmk_window.c  ^CreateWin( )
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




[1.8] RED
// down
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c  BOOLEAN^SaveKeyDownStatus
//          if(KEY_RED == key_code) 
//			{
//	            StartSOSLongEventTimer();
//			}


[1.9] sms_member
// sms_member
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_editsmswin.c
//        uint8 i = 0;
//        uint8 aaaaa = 0;
//		SMS_HANDLE_T sms_ret = PNULL;
//		for(i=0;i<48;i++)
//		{
//			sms_ret = MMISMSAPP_SaveSms(op_data,PNULL,PNULL,PNULL);
//			if(i>40)
//			{
//				aaaaa = 0;
//			}
//			else if(i>10)
//			{
//				aaaaa = 0;
//			}
//			if(PNULL==sms_ret)
//				break;
//		}







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



[1.12] debug, trace
//
//	SCI_TRACE_LOW("[ccapp]is_handfree = %d", dev);




[1.13] 



[1.14] mp3--show
// HandlePDADefaultWinMsg
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main_pda.c  470
//
//	#ifdef WIN32
//		    case MSG_APP_5:
//		        SetMp3CtrlParam(win_id);
//		        break;
//	#endif



[1.15] tts
//tts
//	PlayTellTime()
//	//
//	MMIAPISET_IsPlayingRingType
//	//Handle
//	MMIAPISET_PlayRing
//	PlayRing
//	PlayFixedRing
//	MMISRVAUD_GetHandleByName
//	//STOP
//	MMITTS_STOP_CALLBACK
//	MMIAPISET_StopRing
//	MMIAPISET_StopAppRing
//	MMIAPISET_StopAllRing
//	MMISRVAUD_Stop(MMIAPIALARM_GetPlayHandle());
//	// type
//	MMIENVSET_SET_OPT_E
//	MMISET_ALL_RING_TYPE_E
//	MMIENVSET_SETTING_T

//tts
//	playAutoTellTimeTTS()----time
//	playTellTimeTTS()--------time
//	TTSPlayPBNumber()--------pb
//  TTSPlayInCallNumber()----cc
//	playkeypadtoneTTS()------key
//  PlayFixedRing()----------
//
//cc
//	MMICC_ConstructAudioHandle ()
//	MMICC_DestroyAudioHandle ()
//	AP_AudioSrvCallBack()
//  APRequestVirtualAudioHandle()


[1.16] draw str wchar
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



[1.17] time
//
//    SCI_DATE_T     ate       = {0};
//    SCI_TIME_T     time      = {0};
//    SCI_TIMEX_T    timeX      = {0};
//    TM_GetSysDate(&date);
//    TM_GetSysTime(&time);
//    TM_GetSysTimeEx(&timeX);


[1.18] press key
//dial edit--press
//
//	HandleMSGKbd--MMK_DispMsgToWin
//	ImHandleMsg--AppHandle
//	CommitData--MSG_NOTIFY_IM_COMMIT
//	playkeypadtoneTTS
//	//dial edit--set
//	GUIIM_SetNotify
//	MMIAPISET_PlayRing


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




[2.1] lock
//
MS_MMI_Main\source\mmi_app\app\keylock\c\mmikl_keylock.c  MMIAPIKL_LockPhone
MS_MMI_Main\source\mmi_app\app\keylock\c\mmikl_keylock.c  MMIAPIKL_UnlockPhone
//
MS_MMI_Main\source\mmi_app\app\keylock\c\mmikl_keylock.c  1912
MS_MMI_Main\source\mmi_app\app\keylock\c\mmikl_keylock.c  3523

//	MMIKL_SetWinStatus
//
//	MMIPUB_OpenAlertWinByTextId
//
//	MMIKL_OpenTimeScreenSaverWin

// KeyLock
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_security.c  MMI_RESULT_E^^HandleSetAutoKeyLockWindow



[2.2] light
//
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  KEYLOCK_PRESS_ANY_KEY_BACKLIGHT
//
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_IsBacklightOn
//
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  StartSettingLCDBackLightTimer


### base msg
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c  BOOLEAN^HandleMSGKbd
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  MSG_KEYDOWN_FLIP
// 1490
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  MSG_KEYUP_FLIP
//		MMK_HandlePublicKey: MSG_KEYUP_FLIP!

### record msg
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c  CheckFlipKeyMsgNumber
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c  MMI_FlipKeyHandle

### flip msg
// kbd msg
MS_MMI_Main\source\mmi_kernel\source\c\mmk_kbd.c  MMIDEFAULT_HandleFlipKey
// app msg
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  MMIDEFAULT_HandleFlipKey

### gpio msg
// 1360
MS_Customize\source\product\driver\gpio\gpio_prod.c  GPIO_SetLcdBackLight
//		GPIO_SetLcdBackLight: 1 
// 1458 1504
MS_Customize\source\product\driver\gpio\gpio_prod.c  void^GPIO_Set_SubLcd_BackLight
//		[GPIO LCD] :: Set_SubLcd_BackLight (1)


### 亮灭屏
// 参考动画流程
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  MMI_TURNON_BACKLIGHT_EFFECT_SUPPORT
//
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOnBackLight
//MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOffBackLight
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  CloseAllLight




[2.3] ADN FDN SDN
//
//	ADN Abbreviated dialing number
//	FDN Fixed dialer number
//	BDN Barred dialing numbers
//	LND Last number dialed
//	SDN Service dialing number

//	ADN(SIM 电话簿) 缩位拨号。数字 + #，然后按SNED键。
//	FDN(SIM 固定拨号) 固定拨号。当启用后，只能拨打所设置的号码，来电不受影响。需要输入PIN2码
//	能否使用固定拨号功能取决于SIM卡类型以及网络商是否提供此功能
//	MSISDN(SIM 保护号码)
//	EN(SIM 紧急号码)
//	LND(合成 ME 和 SIM 最后拨号)
//	MSD(SIM 未接听号码)
//	ME(ME 电话簿)
//	MT(合成 ME 和 SIM 电话簿)
//	LIC(ME 接听号码)
//	SDN (系统拨叫号码) 网络服务拨号。固化的用户不能编辑。

//SIM卡中最多能存放的电话号码数量等于:AND+FDN+SDN


[2.4] Dtmf
//	DefaultDtmf



[2.5] CC--msg
//	3529 [dial_tts] play result = 1   
//	// MMICC_HandlePsMsg                                                                             	                                                                	0:02:16.475  	
//	5212 ccapp.c:enter function CC_HandlePsMsg(), msg_id = 41365      
//	8700 [dial_tts] is_incoming_call_ring = 0 
//	10996 [dial_tts] play handle = 18677760
//	11700 [dial_tts] play result = 1 
//	// 41317--APP_MN_SETUP_IND
//	12194 ccapp: CC_HandlePsMsg->APP_MN_SETUP_IND  
//	12199 CC_CallSetupIndEx  calling_num_present = 1 




[2.6] SMS--tp input
// 1
//DispatchMSGTpUp
// 2
//TpDownCtrlHandleTpMsg
//TextEditCtrlHandleMsg
//BaseEditCtrlHandleMsg
// 4
//CTRLIM_SetInput
// 5
//SetParameter



[2.7] cursor
//
MS_MMI_Main/source/mmi_ctrl/source/editbox/c/ctrlbaseflex_cursor.c  void^FillCursorColor
//
//	#ifndef WIN32
//        GUI_FillRect ();
//	#endif



[2.8] file
//
LoadFileToImage


[2.9] select_sim
// select_sim
//	MMIAPISET_GetFlyMode()



[2.10] Sleep
//
//	SCI_Sleep(50);



[2.11] reset
//
//	MMISET_CleanUserData
//
//	MMISET_ResetFactorySetting();


[2.12] 小图标
//
//	bt-search
//	bt-list
//	www-mark
//	mp3--list
//	select-sim
// 不改
//	pb-edit



[2.13] Browser--------
//
MS_MMI_Main/source/mmi_app/app/browser/control/src/brw_control_PIC.c uint32^Brw_InitImageListInfo
//#if 1//
//	    {
//	    	BRW_IMAGE_INFO_LIST_T img_add = {0};
//			
//			img_add.image_info.url_ptr = "aaaaa";
//			img_add.image_info.url_len = strlen(img_add.image_info.url_ptr);
//			img_add.image_info.mime_type = BRW_MIME_IMG_PNG;
//			img_add.image_data_ptr = "aaaaa";
//			img_add.image_data_len = strlen(img_add.image_data_ptr);
//			img_add.next = PNULL;
//	        BrwInsertImageItem(&img_add);
//			
//	    }
//#endif


[2.14] BT-msg
//
MS_MMI_Main/source/mmi_app/app/bt/c/mmibt_app.c MMIBT_CallBackFunc
MS_MMI_Main/source/mmi_app/app/bt/c/mmibt_app.c MMIBT_A2DPCallBackFunc
//	PUBLIC void MMIBT_A2DPCallBackFunc_Test(uint16 mode)
//	{
//	    BT_MSG_T dg_msg;
//	    if(mode==1)
//	    {
//		    dg_msg.msg_id     = ID_STATUS_AVRCP_CONNECT_COMPLETE;//0x100A0008
//		    dg_msg.status     = BT_SUCCESS;
//		    dg_msg.body_size  = 0;
//		    dg_msg.body_ptr   = NULL;
//		    MMIBT_A2DPCallBackFunc( &dg_msg );
//			
//		    dg_msg.msg_id     = ID_STATUS_HFAG_HFU_CLCC;//0x10010001
//		    MMIBT_CallBackFunc( &dg_msg );
//		}
//		else
//		{
//		    dg_msg.msg_id     = ID_STATUS_A2DP_DISCONNECTED;//0x100A0008
//		    dg_msg.status     = BT_SUCCESS;
//		    dg_msg.body_size  = 0;
//		    dg_msg.body_ptr   = NULL;
//		    MMIBT_A2DPCallBackFunc( &dg_msg );
//			
//		    dg_msg.msg_id     = ID_STATUS_CM_VISIBLE_RES;//0x10010001
//		    MMIBT_CallBackFunc( &dg_msg );
//		}
//		
//	}



[2.15] Test----key id
//
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  TestKeyboard
//#if 1//def WIN32
//	{
//    	wchar               disp_text[20] = {0};
//	    char 		        key_text[20] ={0};
//		MMI_STRING_T        string = {0};
//	    GUISTR_STYLE_T      text_style = {0};
//	    GUISTR_STATE_T      state = GUISTR_STATE_ALIGN|GUISTR_STATE_WORDBREAK|GUISTR_STATE_SINGLE_LINE;
//		
//        draw_rect.left = 6;
//        draw_rect.top = 270;
//        draw_rect.right = 240;
//        draw_rect.bottom = 300;
//        LCD_FillRect(&lcd_dev_info, draw_rect, MMI_WHITE_COLOR);
//		
//        sprintf((char*)key_text, "key:%d", key_msg_id);
//        string.wstr_len = strlen(key_text);
//        MMI_STRNTOWSTR(disp_text, 20, (uint8*)key_text,string.wstr_len,string.wstr_len);
//        string.wstr_ptr = disp_text;
//        
//        // display
//        text_style.align = ALIGN_HVMIDDLE;
//        text_style.font = MMI_DEFAULT_TEXT_FONT;
//        text_style.font_color = MMI_BLACK_COLOR;
//
//        GUISTR_DrawTextToLCDInRect( 
//            (const GUI_LCD_DEV_INFO *)&lcd_dev_info,
//            (const GUI_RECT_T      *)&draw_rect,       //the fixed display area
//            (const GUI_RECT_T      *)&draw_rect,       //ó??§òa???Dμ?êμ?ê??óò
//            (const MMI_STRING_T    *)&string,
//            &text_style,
//            state,
//            GUISTR_TEXT_DIR_AUTO
//            ); 
//    }
//#endif


//
ATEST_SUPPORT


[2.16] sim--显示单卡
//
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone.c  MMIAPIPHONE_GetSimExistedStatus
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
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone.c  MMIAPIPHONE_GetSimExistedNum
//#if 0//defined IDLE_NETWORK_ONE_SIM_SHOW_EXIST_STYLE
//    return 1;
//#else
//    return num;
//#endif


[2.17] usb
//
MS_MMI_Main/source/mmi_app/app/udisk/c/mmiudisk_wintab.c  MMIAPIUdisk_OpenUsbOperWindow



[2.18] 


[2.19] 


[2.20] 


[2.21] 


[2.22] 


[2.23] 


[2.24] 


[2.25] 


