
//appPath = MS_MMI_Main/source/mmi_app/app
appPath = MS_MMI/source/mmi_app/app
app:\\
//ctrlPath = MS_MMI_Main\source\mmi_ctrl\source
ctrlPath = MS_MMI\source\mmi_ctrl\source
ctrl:\\
//guiPath = MS_MMI_Main\source\mmi_gui\source
guiPath = MS_MMI\source\mmi_gui\source
gui:\\


// Ŀ¼:
//   1. ���ܵ�
Save:node\C\study\Macro_gui_MTK.h  \[1.1\] display
Save:node\C\study\Macro_gui_MTK.h  \[1.2\] softkey
Save:node\C\study\Macro_gui_MTK.h  \[1.3\] draw ---------------��ͼ
Save:node\C\study\Macro_gui_MTK.h  \[1.4\] statusbar, change----
Save:node\C\study\Macro_gui_MTK.h  \[1.5\] theme
Save:node\C\study\Macro_gui_MTK.h  \[1.6\] pubWin  Alert
Save:node\C\study\Macro_gui_MTK.h  \[1.7\] form
Save:node\C\study\Macro_gui_MTK.h  \[1.8\] rect
Save:node\C\study\Macro_gui_MTK.h  \[1.9\] timer
Save:node\C\study\Macro_gui_MTK.h  \[1.10\] option
Save:node\C\study\Macro_gui_MTK.h  \[1.11\] onoff
Save:node\C\study\Macro_gui_MTK.h  \[1.12\] title
Save:node\C\study\Macro_gui_MTK.h  \[1.13\] anim --------------����Construct
Save:node\C\study\Macro_gui_MTK.h  \[1.14\] tmp ---------------
Save:node\C\study\Macro_gui_MTK.h  \[1.15\] layer
Save:node\C\study\Macro_gui_MTK.h  \[1.16\] simulator----------
Save:node\C\study\Macro_gui_MTK.h  \[1.17\] key
Save:node\C\study\Macro_gui_MTK.h  \[1.18\] Lcd
Save:node\C\study\Macro_gui_MTK.h  \[1.19\] sublcd
Save:node\C\study\Macro_gui_MTK.h  \[1.20\] font
Save:node\C\study\Macro_gui_MTK.h  \[1.21\] list
Save:node\C\study\Macro_gui_MTK.h  \[1.22\] height-------------������
Save:node\C\study\Macro_gui_MTK.h  \[1.23\] edit, im, pen
Save:node\C\study\Macro_gui_MTK.h  \[1.24\] color--------------����
Save:node\C\study\Macro_gui_MTK.h  \[1.25\] label--------------
Save:node\C\study\Macro_gui_MTK.h  \[1.26\] text---------------
Save:node\C\study\Macro_gui_MTK.h  \[1.27\] prgbox-------------������
Save:node\C\study\Macro_gui_MTK.h  \[1.28\] menu
Save:node\C\study\Macro_gui_MTK.h  \[1.29\] owndraw------------
Save:node\C\study\Macro_gui_MTK.h  \[1.30\]




[1.1] display
gui draw��
plutommi\Framework\GUI\GUI_SRC\gui.c void^gui_draw_filled_area
//	if(y1<242 && y1>238 && y2<242 && y2>238 )
//	{
//		rx1 = rx1;
//	}

//bg color
plutommi\Framework\GDI\GDISrc\gdi_primitive.c void^gdi_draw_solid_rect( )
//	if(y2>20 && y2<320 && y2 != 292)
//	{
//		int a = 1;
//		a = 1;
//	}


//�ַ�����
gui_get_multi_line_text_language_type


[1.2] softkey
// 1) softkey ������ɫ
gui_show_icontext_button  softkey ������ɫ

//
SetKeyHandler(, , );
// SetKeyHandler(, KEY_1, KEY_EVENT_UP);
plutommi\Framework\EventHandling\EventsSrc\KeyBrd.c
//void SetKeyHandler(FuncPtr funcPtr, U16 keyCode, U16 keyType)
//{
//	{
//		if(KEY_RSK == keyCode)
//		{
//			int a = 2;
//		}
//	}
//}


[1.3] 




[1.4] statusbar, change
// ״̬��
// 1) ״̬��
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_initialize( ) 
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c dm_setup_and_draw_status_icons( ).   ��ʼ����
plutommi\Framework\GUI\OEM_SRC\wgui_status_icon_bar.c void^wgui_status_icon_bar_update( )
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_arrange_oem( ).  ����λ��
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_oem( ).     ��ͼ��
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_hide_oem
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_icon_oem( ).������ͼ�꣬��������ʱ��
// 2) draw:
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c gui_status_icon_bar_show_info_oem

// ���λ��
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c 1508
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c 1836

// ��ͼ��
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c 2723



//ʱ��״̬��
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c show_main_LCD_date_time
plutommi\Framework\GUI\GUI_SRC\gui_clock.c gui_clock_show_digital_small_image
	
//	modis: ����
Save:node\C\study\Macro_modis_MTK.h	 \[4.1\] ����

//	modis: title
Save:node\C\study\Macro_modis_MTK.h	 \[4.2\] title

//	modis: ����
Save:node\C\study\Macro_modis_MTK.h	 \[4.3\] ����

//	modis: ״̬��
Save:node\C\study\Macro_modis_MTK.h	 \[4.4\] ״̬��

//	modis: ʱ��״̬��
Save:node\C\study\Macro_modis_MTK.h	 \[4.5\] ʱ��״̬��
	ʱ��״̬��:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_UI_CLOCK_SMAILL_DIGITAL_IMAGE_CLOCK
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_WGUI_STATUS_ICON_SHOW_TIME_IN_RIGHT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\Techno\SmallClock\0030.bmp
	
//	modis: softkey
Save:node\C\study\Macro_modis_MTK.h	 \[4.6\] softkey

//	modis: ����
Save:node\C\study\Macro_modis_MTK.h	 \[4.7\] ����

# ����
//	����:
plutommi/Framework/GUI/GUI_Res/Status_icon_bar.res IMG_SI_BATTERY_STRENGTH ����
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c STATUS_ICON_BATTERY_STRENGTH
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_icon_blink_and_animate_timer_callback
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c g_charbat_context.chargerLevel �����ȼ�
//	��������:
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c void^BatteryStatusIndication
//	��ӵ����ٷֱ�:
plutommi\mmi\km\SDK\Src\KM_Util.c km_charbat_get_persent
//	��س�������:
custom\drv\misc_drv\_Default_BB\MT6261\chr_parameter.c chr_usb_detect_volt = 1400000;	
//	��س������������Сʱ(�ദ����):
hal\peripheral\src\bmt.c STOPTIMER_TIMEOUT_TICK  (KAL_TICKS_1_MIN*30)
//	��ѹ����:
custom\app\FARSIGHTED61M_CN_11C_BB\nvram_user_config.c NVRAM_EF_CUST_HW_LEVEL_TBL_DEFAULT


[1.5] 




[1.6] pubWin  Alert
����:
// 1) SIM����
__MMI_POPUP_NO_SHOW_ICON__
ShowCategory165Screen_int
ShowCategory366Screen
ShowCategory66Screen
ShowCategory208Screen_int
// 2) ����ͼ��:
custom\common\PLUTO_MMI\custom_events_notify.c mmi_events_notify_tbl



[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] title
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c matrix_title_theme.active_filler
plutommi\Framework\GUI\GUI_SRC\gui_buttons.c gui_show_icontext_button
plutommi\Framework\GUI\GUI_SRC\wgui_categories_cm.c MMI_multiline_inputbox.normal_text_color
//	title:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c matrix_title_theme.active_filler




[1.13] 




[1.14] 




[1.15] 



[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 




[1.21] list
	List:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2
plutommi\mmi\Setting\SettingRes\Wallpaper.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 ��ֽλ�ò�������
	list ���:
plutommi\Customer\Images\M107\M107_S2401_GRAVITY_ULTRA_F1\MainLCD\SubMenu\ListMenuIcon\L_NB30.bmp

//
ShowCategory53Screen(): �б�



[1.22] 




[1.23] edit, im, pen
# im
plutommi\mmi\Setting\SettingSrc\PreferedInputMethodSetting.c void^^mmi_imesettings_enter_screen_prefered_inputmethod_sg
//		gnInputMethods,
//		(U8 **) inputMethodList,

plutommi\Framework\InputMethod\Engine\Engine_Src\Imm.c S32^mmi_imm_get_prefer_input_mode_string_list(U8 **strarray, S32 max)
//	strarray[j] = (U8*)GetString(gIMEModeArray[i].menuitem_string_id);

plutommi\mmi\Resource\StandaloneRes.c void^InitializeResourceVariables(void)
//		gIMEModeArray = (sIMEModeDetails*) (langpack2ndJumpTbl[3]);
plutommi\mmi\Resource\StandaloneRes.c langpack2ndJumpTbl\[3\]
	
//	void* langpack2ndJumpTbl[] = {
//		(void*) mtk_gLanguageArray				  //[0]
//		, (void*) &mtk_gMaxDeployedLangs		  //[1]
//		, (void*) mtk_gStringList				  //[2]
//		, (void*) mtk_gIMEModeArray 			  //[3]
//		, (void*) mtk_gIMEQSearchModeArray		  //[4]
//		, (void*) mtk_gIMELDBArray				  //[5]
//		, (void*) &mtk_gIMEModule				  //[6]

plutommi\Customer\CustResource\IMERes.c IMM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ABC
//		IMM_INPUT_MODE_MULTITAP_UPPERCASE_ABC
//		IMM_INPUT_MODE_MULTITAP_LOWERCASE_ABC
//		IMM_INPUT_MODE_MULTITAP_FIRST_UPPERCASE_ABC
//		IMM_INPUT_MODE_MULTITAP_URDU
//		IMM_INPUT_MODE_123_SYMBOLS




[1.24] 




[1.25] 




[1.26] 


