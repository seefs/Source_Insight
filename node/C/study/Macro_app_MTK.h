
featuresPath = plutommi\Customer\CustResource\K220_Z97_MGUO_MMI\
features:\\

// Ŀ¼:
//	 2. ����
Save:node\C\study\Macro_app_MTK.h  \[1.1\] win fun.
Save:node\C\study\Macro_app_MTK.h  \[1.2\] idle, lock
Save:node\C\study\Macro_app_MTK.h  \[1.3\] menu, second
Save:node\C\study\Macro_app_MTK.h  \[1.4\] dial
Save:node\C\study\Macro_app_MTK.h  \[1.5\] test, version
Save:node\C\study\Macro_app_MTK.h  \[1.6\] file
Save:node\C\study\Macro_app_MTK.h  \[1.7\] setting
Save:node\C\study\Macro_app_MTK.h  \[1.8\] sms -----------------
Save:node\C\study\Macro_app_MTK.h  \[1.9\] call
Save:node\C\study\Macro_app_MTK.h  \[1.10\] pb, cl
Save:node\C\study\Macro_app_MTK.h  \[1.11\] camera -------------
Save:node\C\study\Macro_app_MTK.h  \[1.12\] pic
Save:node\C\study\Macro_app_MTK.h  \[1.13\] record
Save:node\C\study\Macro_app_MTK.h  \[1.14\] fm
Save:node\C\study\Macro_app_MTK.h  \[1.15\] //fmm
Save:node\C\study\Macro_app_MTK.h  \[1.16\] //vp
Save:node\C\study\Macro_app_MTK.h  \[1.17\] mp3
Save:node\C\study\Macro_app_MTK.h  \[1.18\] alarm --------------
Save:node\C\study\Macro_app_MTK.h  \[1.19\] calc
Save:node\C\study\Macro_app_MTK.h  \[1.20\] calendar
Save:node\C\study\Macro_app_MTK.h  \[1.21\] ��λת��
Save:node\C\study\Macro_app_MTK.h  \[1.22\] ��Ϸ ħ��
Save:node\C\study\Macro_app_MTK.h  \[1.23\] bt
Save:node\C\study\Macro_app_MTK.h  \[1.24\] env, Profile
Save:node\C\study\Macro_app_MTK.h  \[1.25\] 
Save:node\C\study\Macro_app_MTK.h  \[1.26\] 
Save:node\C\study\Macro_app_MTK.h  \[1.27\] Browser �������
Save:node\C\study\Macro_app_MTK.h  \[1.28\] sos
Save:node\C\study\Macro_app_MTK.h  \[1.29\] //startup
Save:node\C\study\Macro_app_MTK.h  \[1.30\]
	



[1.1] win fun.
//�¼�:
mmi_frm_post_event
mmi_frm_send_event  ����

#
// 1) ������ڣ�
mmi_frm_scrn_enter
node_exec_entry_proc
// 2) show
wgui_cat1031_show
// 3) ����λ��:
plutommi\Customer\CustResource\CustCoordinates.c dm_category_id_control_set_map_struct^g_categories_controls_map
// 4) redraw
dm_redraw_category_screen
// 5) size:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c configure_fixed_matrix(ixsize, iysize


// option
cui_menu_create



[1.2] idle, lock
# idle
// 1) enter:
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_enter
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c ShowCategory33Screen_int( )
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c ShowCategory33Screen_ext_int( )
// ��ʾ:
//plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_show_details( )

// 2) λ���޸�:
plutommi\Customer\CustResource\CustCoordinates.c g_categories_controls_map[]

// 3) network mp3 fm
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_update_service_indication
// idle:network
//plutommi\Framework\GUI\GUI_INC\gui_switch.h CFG_UI_IDLE_NETWORK_NAME_Y
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c MMI_BOOL^wgui_cat033_show_network_name( )
// --mp3
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_get_extra_text


// 4) week:
//plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^km_idle_clock_week( )
//plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_main_LCD_date_time( )
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_idle_day_display( )

// 5) date:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c wgui_clock_create(&wgui_clock_mainlcd_clock2
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c  show_idle_lunar( )

// 6) time:
// --init
//   1.time, 2.date
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c wgui_clock_move
// --Seperator
plutommi\mmi\Setting\SettingSrc\DateAndTime.c  PhnsetGetDateSeperatorFormat


//plutommi\Framework\GUI\GUI_SRC\gui_clock.c   gui_clock_show( )
//plutommi\Framework\GUI\GUI_SRC\gui_clock.c   gui_clock_show_digital_image( )
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c  update_mainlcd_dt_display
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c  wgui_clock_update_main_lcd
plutommi\Framework\GUI\GUI_SRC\Wgui_clock.c   gui_clock_update( )
plutommi\Framework\GUI\GUI_SRC\gui_clock.c   gui_clock_show_digital( )
plutommi\Framework\GUI\GUI_SRC\gui_clock.c   2916

// 8) soft-icon:
plutommi/Framework/GUI/GUI_SRC/gui_buttons.c void^gui_show_icontext_button
//	  //iy = y1 + b->icon_y;  ==>
//	  iy = y1 + (b->icon_y * 2 + 1);

// WALL/Softkey
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  void^dm_redraw_category_screen
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  case^DM_WALL_PAPER
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  case^DM_BUTTON_BAR1

// 9) Idle:ShortCut
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list ��ʱ�ļ�(ģ����������ļ�)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_SHORTCUTS_TOTAL
//	short ID:
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c mmi_shct_candidate_menu

//	Idle:ShortCut
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
//	statusBar
//gui_status_icon_bar_show_oem

// 10) page
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_redraw( )
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c show_idle_page_ind_img( )


# lock
//	Lock
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c
//	Ĭ��ʱ��
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerSetting.c MMI_SLK_SET_SELECTION_DEFAULT
// --show
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  mmi_idle_lock_show_new_style
// lock--turnon/off
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c mmi_slk_handle_pre_key_routing
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c mmi_slk_handle_post_key_routing
// lock--bl
plutommi\mmi\Idle\IdleSrc\IdleCommon.c  mmi_idle_closebacklight_and_lock
plutommi\mmi\Idle\IdleSrc\IdleCommon.c  __IDLE_LOCK_CLOSE_BACKLIGHT__



[1.3] menu, second

//	���˵�
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M107_2403_VGOTEL__
//	���˵� ˳��:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="IDLE_SCREEN_MENU_ID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M107_V2408_VGOTEL__
//	�¼����˵�:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <SCREEN > ...
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
	 
//	 �˵�ͼ��:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <IMAGE^id="MAIN_MENU_MATRIX_FMRDO_ICON"
//	 �����˵��ַ�:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <STRING^id="MAIN_MENU_SETTINGS_TEXT"
//plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM^id="MAIN_MENU_ FMRDO_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_MULTIMEDIA_MENUID"
//plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_ORGANIZER_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_TOOLS_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID"
//	����--ͨ������:
plutommi\mmi\CallSetting\CallSettingRes\CallSet.res  <MENU^id="MENU_ID_CALLSET_CALL_CENTER"
//	����--ͨ������--ͨ������:
plutommi\mmi\CallSetting\CallSettingRes\CallSet.res  <MENU^id="MENU_ID_CALLSET_CALL_SETTING"
//	����--ͨ������--ͨ������--�߼�����:
plutommi\mmi\CallSetting\CallSettingRes\CallSet.res  <MENU^id="MENU_ID_CALLSET_MORE"

//	����--�ֻ�����:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU9102_INITIAL_SETUP"
//	����--�ֻ�����--ʱ��:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU9141_TIME_AND_DATE"
//	����--�ֻ�����--����:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU_IDLE_SCR_DISP"
//	����--�ֻ�����--����:
plutommi\mmi\gpio\gpiores\PhnsetGpio.res <MENU^id^=^"MENU_ID_PHNSET_GPIO_SETTING"
//	����--˽������:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res <MENU^id="MENU_ID_SECSET_MAIN_MENU"
//	����--��ʾ����:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU_IDLE_SCR_DISP"
//	����--����:
plutommi\MtkApp\Connectivity\ConnectivityRes\ConnectivityMainmenu.res <MENU^id^=^"MENU_ID_CONNECTIVITY"
//	�龰ģʽ:
plutommi\mmi\PROFILES\Profiles_Res\Profiles.res <MENU^id^=^"MAIN_MENU_PROFILES_MENUID"

//	�ļ�����:
plutommi\MtkApp\FileMgr\FileMgrRes\000_FileMgr.res <MENUITEM^id="MENU_ID_FMGR_DRIVE_FORMAT"
//	����:
plutommi\mmi\Messages\MessagesRes\SmsAppRes.res <MENU^id="MAIN_MENU_MESSAGES_MENUID"
	

//	���˵���ʽ:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res MM_ST
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_RES_TYPE_MAINMENU_MATRIX_SEL

//
// 1) �˵�ID1 ��� �Ӳ˵�ID2: 
//		<MENU ID2/>
//		<MENU ID1>
//			<MENUITEM_ID ID2/>
//		<MENU/>

// 2) �˵��л���
MMI_menu_highlight_handler

// 3) �˵����ýӿڣ�(����ģ��������)
cui_menu_set_item_hidden
	
// 4) ��ʱ�ļ����˵����
plutommi\Framework\EventHandling\EventsInc\mmi_menu_handlers.h MENU_SETTING_DEDICATED_KEYS

// 5) ��ʱ�ļ����˵���
MCT_TOOL\Resource\OutTreeStructure.txt MAIN_MENU
	
// 6) screen ID
plutommi\Customer\CustomerInc\screen_enum.h SCR_ID_IDLE_SIM_SPACE_SETTING



//���˵����:
EntryMainMenuFromIdleScreen
//draw - txt
plutommi\Framework\GUI\GUI_SRC\gui_fixed_menuitems.c 4889 gui_print_truncated_text
//draw - scroll txt
plutommi\Framework\GUI\GUI_SRC\gui_fixed_menuitems.c 7230 gui_list_show_text
plutommi\Framework\GUI\GUI_SRC\gui_fixed_menuitems.c 7121 gui_list_show_text
//draw - icon
plutommi\Framework\GUI\GUI_SRC\gui_fixed_menuitems.c 6690 gdi_image_draw_animation_single_frame
//draw - highlight bg
plutommi\Framework\GUI\GUI_SRC\gui_fixed_menuitems.c 6500 gui_show_animation_with_background_image



[1.4] dial
//	enter: 
//cui_dialer_classic_on_enter
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c void^ShowCategory16ScreenInternal

// ���Ű���:
//ExecuteCurrKeyHandler
plutommi\Framework\GUI\GUI_SRC\wgui.c void^MMI_key_input_handler
plutommi\Framework\GUI\GUI_SRC\wgui_inputs_dialer.c void^wgui_inputs_dialer_handle_key_down

//	����ͼ��:
plutommi\Framework\GUI\GUI_Res\Gui.res #define^IMG_IDLE_DIGI_SUB_DIR
//	��������������:
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_dialer_input_box_prev_line
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_dialer_input_box_next_line
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_show_dialer_input_box_ext1
//	����ͼƬ����ɾ��:
plutommi/Framework/GUI/GUI_SRC/wgui_inputs.c wgui_inputs_fast_del_nav_get_op_handler
//	����#��:
plutommi\CUI\DialerCui\DialerCuiCommon.c void^mmi_do_toggle_meeting_profile(void)

//	�޸�dialer search���Ž���������ɫ����
plutommi\Framework\GUI\GUI_SRC\wgui_categories_idlescreen_op.c void^wgui_cat203_set_editor_focus_state
//	����+����0�ϣ�+�ż��ڡ�*���ż���		 ֻҪ����OFF����
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_MULTITAP_KEY_0 (__OFF__)

//	 ͨ������:
plutommi/Service/Gsm3gCallSrv/GCallSrvStructMgmt.c IMG_ID_GCALL_CALL_INCOMEING
// dial--���
inline_edit_cursor_color_defaultTheme
// dial--pos init--margin
plutommi\Framework\GUI\GUI_SRC\wgui_inputs_multiline.c  wgui_inputs_ml_create_set_buffer
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_create_multi_line_input_box_set_buffer
// dial--pos--rect
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c  MMI_CAT16_DIALING_INPUT_BOX_OFFSET_Y


[1.5] test
// testMode
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMain.c  void^EntryFMMenu
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMain.c  g_fm_test_item_tab
//
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c __K220_Z97__


// 1) �汾��:
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c void^mmi_fm_select_version_summary_menu
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMain.c MMI_RET^mmi_fm_enter_main_menu_proc
plutommi\MtkApp\FactoryMode\FactoryModeRes\FactoryMode.res <MENUITEM^id="MENU_ID_FM_FLASH"
// 2) У׼����:	����ģʽ->�汾��->SERIAL#: 10��ʾ��У׼
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c ReadRecordSlim(NVRAM_EF_BARCODE_NUM_LID, 
// 3) �˵�
plutommi/MtkApp/FactoryMode/FactoryModeRes/FactoryMode.res 403


// IMEI
plutommi/AppCore/SSC/SSCPassEngine.c SSCHandleIMEI
plutommi\AppCore\SSC\SSCStringTable.h SSC_MANUAL_SET_IMEI



[1.6] file
//	�ļ����� ����:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_SLIM_FILE_MANAGER
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_ULTRA_SLIM_FILE_MANAGER
//	�ļ����� ����opt:
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c MENU_ID_FMGR_CARD_DETAIL SRV_FMGR_DRV_CARD_TYPE
//	�ļ����� ��ʽ��:
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c fmgr_main_drive_action_hdlr(void)
plutommi\Service\FileMgrSrv\FileMgrSrvStorage.c srv_fmgr_drv_init(void)




[1.7] setting

// 1) setting:torch �ֵ�Ͳ
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_electric_torch_switch 	�������ֵ�Ͳ

// 2) setting:charging ��籦
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_charging_switch			�����򿪳�籦
hal\peripheral\src\bmt_task_main.c bmt_chr_indication
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c mmi_popup_msg_charger_1
// 3) ��ӳ�籦״̬ͼ��
plutommi\Framework\GUI\GUI_Res\Status_icon_bar.res IMG_SI_CHARGING
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c IMG_SI_CHARGING	˳��һ�� ����ΪNO_GROUP
plutommi\Framework\GUI\GUI_INC\gui_typedef.h STATUS_ICON_CHARGING		˳��һ��
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c wgui_status_icon_bar_show_icon
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c STATUS_ICON_CHARGING
//	��ӷ���:
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res STR_CHARGER_BANK_REMOVED
//	������ѹ:
4��~4.1V   3��~3.91   2��~3.83   1��~3.75   ��~3.62   ��~3.52

// 4) setting:lcd
custom\common\hal_public\lcd_sw_rnd.h DRV_MAINLCD_INIT_COLOR
plutommi\Framework\GUI\GUI_INC\gui_config.h
// 5) ���������
plutommi\Framework\GUI\GUI_INC\gui_switch.h #define^CFG_UI_SOFTKEY_WIDTH
plutommi\Framework\GUI\GUI_INC\gui_switch.h #define^CFG_UI_SCROLLBAR_WIDTH
// 6) audio vol
custom\common\PLUTO_MMI\custom_mmi_default_value.h	--audio vol
// 7) �¼��龰ģʽ:
plutommi\Service\ProfilesSrv\ProfilesSrvConfig.h SRV_PROF_PROFILES_TOTAL_NUM
custom\common\userprofile_nvram_def.h NVRAM_SRV_PROF_PROFILES_TOTAL_NUM
custom\common\PLUTO_MMI\Common_nvram_editor_data_item.h nvram_meta_profile_struct # ����û�м�
	
// 8) setting:datetime ��������ʱ��:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_datetime_input
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^mmi_phnset_entry_set_date_and_time
plutommi\CUI\InlineCui\InlineCui_Slim.c void^cui_inline_set_item_date ��ʾ����
plutommi\CUI\InlineCui\InlineCui_Slim.c void^cui_inline_set_item_time ��ʾ����
plutommi\CUI/InlineCui/InlineCui_Slim.c cui_inline_get_value ��������
// ����ʱ��:
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^PhnsetSetDT( )
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^PhnsetSendSetTimeReqMessage( )

//	��ʾ����:
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c void^gui_show_multi_line_input_box_ext_internal
//	������Ч��:
plutommi\Framework/GUI/GUI_SRC/wgui_datetime.c default_inline_date_validation


// 9) setting:Restore �ָ���������:
plutommi\mmi\Setting\SettingSrc\Restore.c mmi_restore_app_table[]
plutommi\mmi\Setting\SettingSrc\Restore.c mmi_restore_app_reboot(void)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_ATTR_FACTORY_RESET


// --set--phone--endlock
plutommi\mmi\Setting\SettingSrc\PhnsetDisplay.c  mmi_phnset_disp_setup_sub_menu_select_handler



[1.8] sms

//	����-����-����:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_SMS_TEMPLATE_SPANISH
	

//	����-list:
plutommi/mmi/UnifiedMessage/UnifiedMessageSrc/UMScrHdlr.c mmi_um_ui_sh_general_folder_entry
plutommi/mmi/UnifiedMessage/UnifiedMessageSrc/UMScrHdlr.c mmi_um_ui_sh_general_folder_hilite_hdlr
//	����-view:
plutommi/mmi/Messages/MessagesSrc/SmsAppMainUI.c mmi_sms_entry_viewer
//	����-save:
plutommi/mmi/Messages/MessagesSrc/SmsAppEditor.c mmi_sms_editor_opt_select_hdlr
//	����-edit:
plutommi/mmi/Messages/MessagesSrc/SmsAppEditor.c mmi_sms_entry_editor
plutommi/Framework/InputMethod/Engine/Engine_Src/Imc_key.c mmi_imc_key_set_softkey
//	����-send:
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_send_proc
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_entry_add_recipient
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_dm_pre_send_msg





[1.9] call
//	Show: 
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowMOMTCallScreen

//	����
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowMOMTCallScreen
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c 7020
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowCategory17Screen_int
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c 5032
//	����--��ͨ
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowCategory403Screen_int
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c 10370
//	����--��ͨ--״̬str
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowCategory4031Screen_int
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c 10203
//	����--��ͨ--time
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c show_main_LCD_date_time

//	--status
wgui_status_icon_bar_set_display


//	����
plutommi\mmi\Ucm\UcmSrc\UcmUi.c  mmi_ucm_enter_outgoing_call




[1.10] pb, cl
# pb
//	��ϵ���л���tab+icon
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_UI_IN_TABS
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_CALLER_GROUP
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_TAB_BARS_SUPPORT
//	Ⱥ�鹦��:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_UI_IN_TABS
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_CALLER_GROUP
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_CONTACT_SLIM
//	��ѡ---������:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_MULTI_OPERATION
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_GENERIC_MULTI_SELECT
//	��ϵ������:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PHB_PHONE_ENTRY
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PHB_SIM_ENTRY
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PHB_LN_ENTRY # 10 20 50

# pb
plutommi\mmi\PhoneBook\PhoneBookSrc\PhoneBookSetting.c
//	��ϵ��-Ԥ��:
plutommi/mmi/PhoneBook/PhoneBookSrc/PhoneBookEditor.c mmi_phb_entry_view_contact_entry_inline_tab_0
//	��ϵ�� ������
mmi_clog_lt_item_hlt_hdlr
//	��ʾ��
mmi_clog_lt_get_log_item
//	��ϵ�� ������
srv_phb_get_number
mmi_phb_list_get_hint_ext
//	��ϵ�� ��ʾ��
mmi_phb_contact_get_item_image
//	����pb-img��
mmi_clog_act_make_call
mmi_clog_act_create_phb_udata(&log);
//	����pb-img��
srv_phb_get_image
srv_phb_oplib_get_contact_info
//	data
mmi_clog_act_create_phb_udata
srv_gcall_cntxt_set_ptr
// option
mmi_phb_entry_op_option
mmi_phb_op_mark_several_delete_coinfirm
mmi_phb_op_mark_several_copy_coinfirm
mmi_phb_op_mark_several_copy_pre_req
// option
plutommi\mmi\PhoneBook\PhoneBookRes\phonebook.res  MITEM101_PBOOK_VIEW_OPTIONS


# cl
//	show:
plutommi\mmi\CallLog\CallLogSrc\callloglayout.c void^mmi_clog_lt_show_list( )
//	ѡ��:
plutommi\mmi\CallLog\CallLogSrc\callloglayout.c mmi_clog_key_tbl_struct^g_mmi_clog_lt_key_tbl
plutommi\mmi\CallLog\CallLogSrc\CallLogAction.c MMI_CLOG_OP_MID_SAVE_TO_PHB


[1.11] camera
//	Camera:
plutommi\MtkApp\Camera\CameraSrc\CameraApp.c
plutommi\MtkApp\Camera\CameraSrc\CameraApp.c mmi_camera_preview_set_key_hdlr

	Camera�ֱ���:
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^__CAMERA_FEATURE_IMAGE_SIZE_M__ //320X240
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^__CAMERA_FEATURE_IMAGE_SIZE_S__ //160X128
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^__CAMERA_FEATURE_IMAGE_SIZE_SS__ //240X320
plutommi\mmi\Inc\MMI_features_camera.h ��ʱ�ļ�, �����û��
	Camera�����:
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^CAMERA_DEFAULT_SETTING_FLASH






[1.12] pic
//	Image:
plutommi\MtkApp\ImageView\ImageViewRes\imgview.res
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h USE_SW_PNG_DECODER
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PNG_DECODE	���˻ᱨ��������, PNG�򲻿�

//
plutommi\MtkApp\Camera\CameraSrc\ImageViewer.c  ShowCategory222Screen
plutommi\Framework\GUI\GUI_SRC\wgui_categories_multimedia.c  ShowCategory222Screen_int
// --title
plutommi\Framework\GUI\GUI_SRC\wgui_categories_multimedia.c  Cat222DrawTitle



[1.13] record
//	Image:
plutommi\MtkApp\Sndrec\SndrecRes\Sndrec.res


// enter
plutommi\MtkApp\Sndrec\SndrecSrc\SndrecUI.c  mmi_sndrec_entry_main_screen_active
plutommi\MtkApp\Sndrec\SndrecSrc\SndrecUI.c  mmi_sndrec_show_record_screen
plutommi\MtkApp\Sndrec\SndrecSrc\SndrecUI.c  ShowCategory223Screen_ext
//
plutommi\Framework\GUI\GUI_SRC\wgui_categories_multimedia.c  ShowCategory223Screen_ext

// --time
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c  set_time_display
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c  datetime_bar_duration_text_color

// --option
plutommi\MtkApp\Sndrec\SndrecSrc\SndrecUI.c  mmi_sndrec_entry_option_screen
plutommi\MtkApp\Sndrec\SndrecRes\Sndrec.res  MENU_ID_SNDREC_OPTION
//
features:MMI_features_switchK220_Z97_MGUO.h  CFG_MMI_SNDREC_SLIM
features:MMI_features_switchK220_Z97_MGUO.h  CFG_MMI_SNDREC_SLIM_SETTINGS
// --option--editname
plutommi\MtkApp\Sndrec\SndrecSrc\SndrecUI.c  mmi_sndrec_entry_edit_name
// --title--��SLIM, SLIMĬ���б���
plutommi\Framework\GUI\GUI_SRC\wgui_categories_multimedia.c  __NOTITLE_SOUND_REC_STRING_SHOW__
// --softkey--mid
plutommi\MtkApp\Sndrec\SndrecSrc\SndrecUI.c  EVT_ID_ON_KEY



[1.14] fm
//	FM:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak FM_RADIO_RECORD
//	EZFM:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_EZFM_SUPPORT EASY_FM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_FM_RADIO_BIND_EARPHONE
//	FM ����:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak INTERNAL_ANTENNAL_SUPPORT


//	FM-������:
plutommi\MtkApp\FMRadio\FMRadioSrc\FMRadioMainScreen.c void^mmi_fmrdo_show_main
//	FM-channel����:
plutommi\MtkApp\FMRadio\FMRadioSrc\FMRadioMainScreen.c void^mmi_fmrdo_redraw_main_freq_label
//	FM-������ɫ:
plutommi\Customer\CustResource\M107_MMI\resource_fmradio_skins.c g_fmrdo_skins



[1.15] 



[1.16] 




[1.17] mp3
//	Mp3�Զ�ˢ���б�:(��Ч�����˻���ֺ�̨ռ������)
plutommi/MtkApp/AudioPlayer/AudioPlayerSrc/AudioPlayerSrc.c void^mmi_audply_entry_player_screen(void)
//	if (!g_mmi_audply_init_done)
//	{
//	}
//	else
//	{
//		g_mmi_audply_init_done = MMI_FALSE;
//	}

# ����mp3--��1
// name
plutommi\MtkApp\AudioPlayer\AudioPlayerSrc\AudioPlayerMainScreen.c  g_audio_test_name


# ����mp3--��2
// name
plutommi\MtkApp\AudioPlayer\AudioPlayerSrc\AudioPlayerPlayList.c  



[1.18] alarm

//	���� ������
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CALC CFG_MMI_ALARM_SLIM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_AZAAN_ALARM
	����������: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\UserProfiles\Ring\Allah.O.Akber.mp3 û��
	��������Դ�ر�SLIM: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_ALARM_SLIM
	������AMPM: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_AZAAN_ALARM_ADD_AMPM__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_TIME_SETTING_AM_PM_SUPPORT

	
// 5) tool:Alarm:
//	������: 
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM_ID>@OID:MENU_ID_AZAAN_ALARM
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarSrc\AzaanAlarm.c



[1.19] calc
// calc--enter
plutommi\mmi\Extra\ExtraSrc\Calculator.c  mmi_calc_main_scrn_proc
plutommi\mmi\Extra\ExtraSrc\Calculator.c  calc_register_input_hdlr


//	tool:������: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CALC CFG_MMI_CALCULATOR CFG_MMI_CAL_SLIM



[1.20] calendar
# ��������: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_CALENDAR
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h __MMI_CALENDAR_EVENT__ (����)
plutommi\Framework\GUI\GUI_INC\gui_calendar.h __MMI_CALENDAR_TITLE__
//	Ĭ��������ʼ��Ϊ��һ: 
plutommi\mmi\Organizer\OrganizerRes\calendar.res NVRAM_CLNDR_FIRST_DAY_OF_WEEK

// calendar--init
plutommi\Framework\GUI\GUI_SRC\gui_calendar.c  gui_calendar_create
// calendar--theme
plutommi\Framework\GUI\GUI_SRC\gui_calendar.c  gui_calendar_set_theme


// calendar--draw
plutommi\Framework\GUI\GUI_SRC\gui_calendar.c gui_calendar_init_layout
plutommi\Framework\GUI\GUI_SRC\wgui_categories_calendar.c SBD_HIJRI_CALENDAR_AFGHAN
plutommi\Framework\GUI\GUI_INC\gui_typedef.h GUI_CALENDAR_FRAME_HEIGHT
// calendar--draw--title
plutommi\Framework\GUI\GUI_SRC\gui_calendar.c  highlight_change_callback
plutommi\Framework\GUI\GUI_SRC\wgui_categories_calendar.c wgui_cat83_draw_horizontal_select
plutommi\Framework\GUI\GUI_SRC\wgui_categories_calendar.c calendar_horizontal_text_color



# ��˹������: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_HIJRI_CALENDAR
//	��˹������:
plutommi\mmi\Inc\MMI_features.h __MMI_HIJRI_CALENDAR__
plutommi\mmi\Organizer\OrganizerRes\calendar.res __MMI_HIJRI_CALENDAR__
make\plutommi\mmi_app\mmi_app.mak HijriCalendar 				���c(δ�޸�)
plutommi\mmi\Inc\mmi_pluto_res_range_def.h APP_HIJRI_CALENDAR	���Res(δ�޸�)
//	��˹������ת��:
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c mmi_clndr_lunar_data_constructor
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c mmi_hijri_get_date_str
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarSrc\HijriCalendar.c mmi_hijri_greg_to_hijri(MYTIME
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarInc\HijriCalendarDef.h base_hijri_date 	��������
//	���Str
plutommi\mmi\Organizer\HijriCalendar\HijriCalendar_res\HijriCalendar.res STR_AFGHAN_JANUARY



[1.21] ��λת��

//	tool:��λת��:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __MMI_CURRENCY_CONVERTER__


// 1) tool:cconv:
plutommi\mmi\Extra\ExtraRes\currencyconvertor.res EXTRA_MENU_CURRENCYCONVERTOR_STRINGID
plutommi\Customer\CustResource\CustMenuTree_Out.c EXTRA_CURRENCYCONVERTOR_MENU
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c mmi_cconv_entry_app
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c mmi_cconv_pre_entry_exchange
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c SetCategory57RightSoftkeyFunctions(mmi_cconv_pre_entry_exchange ����Ҫ�ص�







[1.22] ��Ϸ ħ��
// 2) tool:games:
plutommi/mmi/FunAndGames/FunAndGamesSrc/FunAndGamesSrc.c
//	��Ϸ: 
plutommi\mmi\Inc\MMI_features.h #define^__MMI_GAME_SNAKE__
//	��Ϸ��Դ: 
plutommi\mmi\FunAndGames\FunAndGamesRes\Game.res __MMI_GAME_SNAKE__
plutommi\mmi\FunAndGames\FunAndGamesSrc\Game.c GAME_SWITCH(game_snake


//	tool:ħ��:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak VOICE_CHANGER_SUPPORT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_CUSTOMER_NLIVE_ADD_MAGIC_VOICE



[1.23] bt
//	tool:����:
Save:node\C\study\Macro_modis_MTK.h tool:bluetooth
//	�ر�����:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BLUETOOTH_SUPPORT = NONE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_HFG_PROFILE = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_OPP_PROFILE = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_AUDIO_VIA_SCO = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_FM_RADIO_VIA_SCO = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BLUETOOTH_VERSION = NONE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_DISABLE_SSP_SUPPORT = FALSE

	
// 4) tool:bluetooth:
plutommi/MtkApp/Connectivity/ConnectivityRes/Bluetooth/Bluetooth.res S1716
plutommi/MtkApp/Connectivity/ConnectivitySrc/BtCommon/BTMMIScr.c S1716



[1.24] env, Profile
// select
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c mmi_prof_customize_scrn_csk_hdlr
// select type--1--2
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c cui_tone_selector_listscr_entry
// select menu
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c mmi_prof_menu_item_select
// select menu list
plutommi\CUI\MenuCui\MenuCui.c cui_menu_run


// env--vol
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c EntryScrSetKeyPadVolumeLevel




[1.25] 




[1.26] 



[1.27] Browser �������

//	modis: Browser
Save:node\C\study\Macro_modis_MTK.h	 \[2.7\] Browser
//	���������:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BROWSER_SUPPORT = OBIGO_Q03C_SLIM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak OBIGO_FEATURE = WAP2_SEC_HTTP_ONLY
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak XYSSL_SUPPORT = TRUE
//	������ҳΪ�ٶ�:
custom\common\PLUTO_MMI\nvram_common_custpack.c nvram_wap_bookmark_list_struct
//	�������:
custom\common\custom_config_account.c CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 ����
custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h

//show acc:
plutommi\CUI\DataAccountCui\DataAccountCui.c cui_dtcnt_show_acct_list_scrn
//sim list:
plutommi\CUI\DataAccountCui\DataAccountCui.c cui_dtcnt_sim_list_scrn_proc
//set sim
plutommi\Service\DtcntSrv\DtcntSrvApi.c srv_dtcnt_set_sim_preference
//set nv
plutommi\Service\DtcntSrv\DtcntSrvDb.c srv_dtcnt_db_fileio_write_store_info_file
//default_acc_idx
plutommi\Service\DtcntSrv\DtcntSrvDb.c srv_dtcnt_db_store_info_file_open
//wap menu
plutommi\mmi\BrowserApp\Browser\BrowserSrc\BrowserAppMain.c mmi_brw_app_get_menu_cui_proc_func
//open page
plutommi\mmi\BrowserApp\Browser\BrowserSrc\BrowserAppDmgr.c mmi_brw_app_dmgr_open_homepage

//net sim (step 1: pre boot)
plutommi\mmi\DataAccount\DataAccountSrc\DataAccountApp.c mmi_dtcnt_get_defined_prof(void)
//net sim (step 2: pre boot)
plutommi\Service\BrowserSrv\BrowserSrvMsgHdlr.c void^srv_brw_bam_ready_ind(void *msg)
//net sim (step 3: switch)
plutommi\Service\BrowserSrv\BrowserSrvinterface.c srv_brw_convert_dtcnt_sim_id_to_sim_setting
//net sim (step 4: switch) (set,save)
plutommi\Service\BrowserSrv\BrowserSrvinterface.c srv_brw_convert_sim_setting_to_profile_sim_id
//net sim (step 5: enter net menu)
plutommi\mmi\BrowserApp\Browser\BrowserSrc\BrowserAppInterface.c mmi_brw_app_common_gateway

//other set--setSIM
mmi_dtcnt_pre_entry_main
mmi_dtcnt_cui_event_proc
mmi_dtcnt_main_scrn_proc
srv_dtcnt_get_default_account
//other net--setSIM
cui_dtcnt_show_acct_list_scrn
cui_dtcnt_prepare_list_info
//other net--sel
cui_dtcnt_get_first_entry_highlight_item




[1.28] sos
// sos
//MENU_SOS_SETUP


// SPEED
plutommi\mmi\Setting\SettingRes\PhoneSetting.res  MENU_NEW_SPEED_DAIL_MENU_SETTING
//
plutommi\mmi\Setting\SettingSrc\PhoneSetup.c  MENU_NEW_SPEED_DAIL_MENU_SETTING





[1.29] 





