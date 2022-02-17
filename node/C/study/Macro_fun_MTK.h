

//目录:
// 1. constant
Save:node\C\study\Macro_fun_MTK.h \[1.1\] resource_main
Save:node\C\study\Macro_fun_MTK.h \[1.2\] str, wstr
Save:node\C\study\Macro_fun_MTK.h \[1.3\] //timer, LONG_0----
Save:node\C\study\Macro_fun_MTK.h \[1.4\] //MSG
Save:node\C\study\Macro_fun_MTK.h \[1.5\] //NV, init
Save:node\C\study\Macro_fun_MTK.h \[1.6\] Win, Param, id---ID转换
Save:node\C\study\Macro_fun_MTK.h \[1.7\] //#define----------宏套宏
Save:node\C\study\Macro_fun_MTK.h \[1.8\] //RED
Save:node\C\study\Macro_fun_MTK.h \[1.9\] //sms_member
Save:node\C\study\Macro_fun_MTK.h \[1.10\] popup
Save:node\C\study\Macro_fun_MTK.h \[1.11\] //make------------
Save:node\C\study\Macro_fun_MTK.h \[1.12\] debug, trace
Save:node\C\study\Macro_fun_MTK.h \[1.13\] 
Save:node\C\study\Macro_fun_MTK.h \[1.14\] //mp3-------------刷新
Save:node\C\study\Macro_fun_MTK.h \[1.15\] tts
Save:node\C\study\Macro_fun_MTK.h \[1.16\] //draw str wchar
Save:node\C\study\Macro_fun_MTK.h \[1.17\] time
Save:node\C\study\Macro_fun_MTK.h \[1.18\] key, handle
Save:node\C\study\Macro_fun_MTK.h \[1.19\] //Rect
Save:node\C\study\Macro_fun_MTK.h \[1.20\]
// 2.func
Save:node\C\study\Macro_fun_MTK.h \[2.1\] lock
Save:node\C\study\Macro_fun_MTK.h \[2.2\] light
Save:node\C\study\Macro_fun_MTK.h \[2.3\] //ADN FDN SDN
Save:node\C\study\Macro_fun_MTK.h \[2.4\] //Dtmf
Save:node\C\study\Macro_fun_MTK.h \[2.5\] //CC--msg
Save:node\C\study\Macro_fun_MTK.h \[2.6\] //SMS--tp input
Save:node\C\study\Macro_fun_MTK.h \[2.7\] cursor
Save:node\C\study\Macro_fun_MTK.h \[2.8\] //file
Save:node\C\study\Macro_fun_MTK.h \[2.9\] select_sim
Save:node\C\study\Macro_fun_MTK.h \[2.10\] //Sleep
Save:node\C\study\Macro_fun_MTK.h \[2.11\] //reset----------重启
Save:node\C\study\Macro_fun_MTK.h \[2.12\] //小图标
Save:node\C\study\Macro_fun_MTK.h \[2.13\] //Browser--------默认PIC
Save:node\C\study\Macro_fun_MTK.h \[2.14\] //BT-------------msg
Save:node\C\study\Macro_fun_MTK.h \[2.15\] //Test-----------key id
Save:node\C\study\Macro_fun_MTK.h \[2.16\] //sim--显示单卡
Save:node\C\study\Macro_fun_MTK.h \[2.17\] //usb
Save:node\C\study\Macro_fun_MTK.h \[2.18\] bat
Save:node\C\study\Macro_fun_MTK.h \[2.19\] 
Save:node\C\study\Macro_fun_MTK.h \[2.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 
//image
plutommi\mmi\Resource\readres.c S8^*GetImage( )
//	int a =1 ;
//
//	if(ImageId ==IMG_ID_PHNSET_WP_START-10)
//	{
//		a = 1;
//	}
GetImageData
gdi_image_get_dimension_id



[1.2] str, wstr
转格式：
app_ucs2_wtoi
	
mmi_asc_to_ucs2  转换
mmi_asc_to_ucs2
mmi_ucs2ncpy

# GetString()
// GetString(STR_USB_CHARGER_CONNECTED)
// get_string
// STR_GLOBAL_OFF
// STR_GLOBAL_ON

// STR_GLOBAL_PLEASE_WAIT

# w,h
UI_measure_string

gui_print_truncated_borderd_text


[1.3] 




[1.4] 




[1.5] 




[1.6] Win, Param, id
// GetActiveScreenId() = IDLE_SCREEN_ID
// 搜:
//	mmi_rp_*_def.h
//	27[8-9][0-9][0-9]

#gid
mmi_frm_group_enter
MMI_ID mmi_popup_display_ext( 
	MMI_STR_ID title, 
	mmi_event_notify_enum event_type, 
	mmi_popup_property_struct *arg)


//
plutommi\Framework\GUI\GUI_SRC\wgui_categories_idlescreen.c  4810
//	#if defined(__IDLE_LOCK_SHOW_TIME_NEW_STYLE__)
//		//#include "IdleAppResDef.h"
//	#include "CommonScreensResDef.h"
//		/* static */ MMI_BOOL wgui_is_idle_win_and_no_pop(void)
//		{
//			MMI_BOOL xa = mmi_scr_locker_is_locked();
//			MMI_BOOL xb = mmi_idle_is_active();
//	
//			MMI_ID g0 = SCR_ID_ALERT_0;
//			MMI_ID g9 = SCR_ID_ALERT_9;
//	
//			MMI_ID g3 = GetActiveScreenId();
//					
//			MMI_ID grp_id;
//			MMI_ID scrn_id;
//	
//			mmi_frm_get_active_scrn_id(&grp_id, &scrn_id);
//				
//	#if defined(__IDLE_LOCK_SHOW_TIME_NEW_STYLE__)
//			#if 0
//				if (GetActiveScreenId() == IDLE_SCREEN_ID)
//				{
//				}
//			#else
//				if (GetActiveScreenId() != SCR_ID_IDLE_MAIN)
//				{
//					int xc = 1;
//				}
//			#endif
//	#endif 
//	
//	
//		}
//	#endif 



[1.7] 




[1.8] 




[1.9] 




[1.10] popup
//
//	mmi_confirm_property_struct property;
//
//	if(s_sos_ring_cycle_state)
//	{
//		mmi_confirm_property_init(&property, CNFM_TYPE_USER_DEFINE);
//		property.parent_id = GRP_ID_ROOT;
//		property.callback	= SOSRingCallback;
//	    property.f_auto_map_empty_softkey = MMI_TRUE;
//	    property.f_msg_icon = MMI_FALSE;
//	    property.softkey[2].str = get_string(STR_GLOBAL_STOP);
//
//		if(string)
//		{
//			mmi_confirm_display((UI_string_type)string, MMI_EVENT_QUERY, &property);
//		}
//		else
//		{
//			mmi_confirm_display((UI_string_type)GetString(STR_ID_SOS_RING_POPUP), MMI_EVENT_QUERY, &property);
//		}
//		ClearKeyHandler(KEY_END, KEY_LONG_PRESS);
//	}



[1.11] 




[1.12] debug, trace
//
MMI_SLK_LOG((TRC_MMI_SLK_TURN_ON_BACKLIGHT, 200));
//
MMI_TRACE(MMI_TRACE_INFO, MMI_A2DP_STATE_CURRENT, g_mmi_a2dp_cntx.state);
//
kal_prompt_trace(MOD_VIDEO,"xiaoyu 45du ,huan yuan zhou qi 3min");
kal_prompt_trace(MOD_VIDEO,"jgh mmi_sale_track2_get_sms_data sim=%d", sim);


[1.13] 




[1.14] 




[1.15] tts
// lock
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_close
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_launch
// menu




[1.16] 




[1.17] 
IDLE 模拟入口
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_enter
//	#ifdef WIN32
//		SetKeyHandler(idle_extra_handle1,KEY_VOL_UP,KEY_EVENT_DOWN);  
//		SetKeyHandler(idle_extra_handle2,KEY_VOL_DOWN,KEY_EVENT_DOWN);  
//	#endif

// 更新时间:
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^PhnsetSetDT( )
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^PhnsetSendSetTimeReqMessage( )
//    mmi_dt_set_dt(&time, NULL, NULL);



[1.18] key, handle
// cb
//		==>static_table[i]
plutommi\Framework\CallbackManager\mmi_cb_mgr.c  execute_evt_cb
// lock
//		==>mmi_slk_handle_pre_key_routing
//		==>obj->on_key(obj, evt)
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_slk_main_evt_hdlr


// key
//		==>dev_key_handle
//		==>process_key_event_routing
//		==>mmi_key_hdlr_proc
//		==>(*curr_func_ptr)()
//			==>cui_dialer_classic_on_run
//			==>mmi_idle_entry_dialer_by_key
//			==>mmi_idle_handle_wrapped_lsk   #lsk-up
//			==>left_softkey_down             #lsk-down
//			==>mmi_idle_handle_wrapped_rsk   #rsk-up
//			==>right_softkey_down            #rsk-down
//			==>center_softkey_down
//			==>softkey_up
//			====>EntryMainMenuFromIdleScreen
//			==>set_idle_pre_index_down       #left
//			==>set_idle_next_index_down      #right
//			==>ShctExecuteDownKey            #up/down
//			==>ShctExecuteUpKey              #up/-
//			==>mmi_clog_sendkey_launch
//			==>mmi_idle_closebacklight_and_lock
//			==>SetKeyPadVolDown
//			==>SetKeyPadVolUp
plutommi\Framework\EventHandling\EventsSrc\KeyBrd.c  void^mmi_frm_key_handle
// menu
plutommi\Framework\GUI\GUI_SRC\wgui_fixed_menus.c  fixed_list_goto_next_item
// key--back


// dial
//		==>mmi_ucm_accept_act_rsp
//		==>mmi_ucm_enter_in_call
//		==>mmi_ucm_entry_in_call
plutommi\mmi\Ucm\UcmSrc\UcmEventHdlr.c  mmi_ucm_act_notify_hdlr




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



[2.1] lock
// 
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  mmi_slk_classic_on_key
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  1543

// lock
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_launch
//plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_stop_timer
// unlock
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_close
//plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_start_timer

// --popup--str--end
//		==>STR_ID_END_KBD_UNLOCK_DONE
//		==>STR_ID_SLK_LOCK_PAD_MSG
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  1570

// --popup--tts--lock/unlock
//		==>STR_ID_SECSET_LOCKED
//		==>STR_ID_SECSET_UNLOCKED
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  tiho_tts_one_key_lock


// lock
// --锁屏不关lcd
plutommi\mmi\Idle\IdleSrc\IdleCommon.c  mmi_idle_closebacklight_and_lock


// 上锁
// lock--left + #
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c  __LOCK_BY_LSK_POUND__
// lock--left + *
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c  __LOCK_BY_LSK_STAR_OR_LSK_CENTER_KEY_
// lock--left + right
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c  __UNLOCK_BY_LSK_RSK__
// --long
plutommi\mmi\Idle\IdleSrc\IdleCommon.c  __STAR_LONGPRESS_UNLOCK__
plutommi\mmi\Idle\IdleSrc\IdleCommon.c  __LSK_LONGPRESS_LOCK__


// 解锁
// unlock--left + right
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  __UNLOCK_BY_LSK_RSK__
// --unlock--1Key--ok
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  1565
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  void^mmi_slk_classic_popup_unlock_me
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  840
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  867  mmi_popup_display
// --unlock--1Key--err
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  1564 ??
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  void^mmi_slk_classic_popup_help_msg
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  980  mmi_popup_display
// --unlock--2Key--ok
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  1361
// --long
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  __LSK_LONGPRESS_UNLOCK__



[2.2] light
// light--3键点亮
//		==>pre_key
//		====>mmi_scr_locker_turn_on_backlight
//		==>post_key
//		====>mmi_scr_locker_turn_on_backlight
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_ret^mmi_slk_handle_pre_key_routing
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_ret^mmi_slk_handle_post_key_routing

// light--删半亮
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  void^mmi_scr_locker_turn_on_backlight

// light--灭屏长按
//		==>pre_key
//		====>key_code====不拦截
//		====>turn_on=====不亮
//		====>obj->on_key(obj, evt);=====长按
//		======>mmi_slk_classic_on_key
//		==>post_key
//		====>is_on=======拦截
//		====>is_off======拦截
//		====>turn_on=====处理不到
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  mmi_slk_classic_on_key



[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] cursor
//
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  UI_inputbox_blink_cursor
//#ifdef WIN32
//	        return;
//#endif



[2.8] 


[2.9] 
//
plutommi\mmi\Ucm\UcmSrc\UcmUi.c  void^mmi_ucm_entry_call_type
// cancel
plutommi\mmi\Ucm\UcmSrc\UcmUi.c  void^mmi_ucm_cancel_call_type_select



[2.10] 


[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 


[2.16] 


[2.17] 


[2.18] __bat__

// --bat, 低电量提醒
//		==>BATTERY_LOW_WARNING
//		==>EVT_ID_SRV_CHARBAT_REMIND_LOW_POWER
plutommi\Service\CharBatSrv\CharBatSrv.c   srv_charbat_low_battery_common_action
//		==>tiho_tts_charbat_start_low_battery_waring
//		==>TIHO_TTS_LOW_BATTERY_LOOP_BROADCAST
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c  mmi_charbat_other_evt_hdlr




[2.19] 


[2.20] 


