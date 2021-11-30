

// 目录:
//   1. 功能点
Save:node\C\study\Macro_gui_MTK.h  \[1.1\] display str
Save:node\C\study\Macro_gui_MTK.h  \[1.2\] softkey
Save:node\C\study\Macro_gui_MTK.h  \[1.3\] draw ---------------画图
Save:node\C\study\Macro_gui_MTK.h  \[1.4\] statusbar, change----
Save:node\C\study\Macro_gui_MTK.h  \[1.5\] theme-----------------主题
Save:node\C\study\Macro_gui_MTK.h  \[1.6\] pubWin, Alert
Save:node\C\study\Macro_gui_MTK.h  \[1.7\] form, point
Save:node\C\study\Macro_gui_MTK.h  \[1.8\] rect, coordinates
Save:node\C\study\Macro_gui_MTK.h  \[1.9\] //timer
Save:node\C\study\Macro_gui_MTK.h  \[1.10\] option
Save:node\C\study\Macro_gui_MTK.h  \[1.11\] //onoff
Save:node\C\study\Macro_gui_MTK.h  \[1.12\] title
Save:node\C\study\Macro_gui_MTK.h  \[1.13\] //anim --------------所有Construct
Save:node\C\study\Macro_gui_MTK.h  \[1.14\] //tmp ---------------
Save:node\C\study\Macro_gui_MTK.h  \[1.15\] //layer
Save:node\C\study\Macro_gui_MTK.h  \[1.16\] //simulator----------
Save:node\C\study\Macro_gui_MTK.h  \[1.17\] //key
Save:node\C\study\Macro_gui_MTK.h  \[1.18\] //Lcd
Save:node\C\study\Macro_gui_MTK.h  \[1.19\] //sublcd
Save:node\C\study\Macro_gui_MTK.h  \[1.20\] //font
Save:node\C\study\Macro_gui_MTK.h  \[1.21\] list
Save:node\C\study\Macro_gui_MTK.h  \[1.22\] //height-------------滚动条
Save:node\C\study\Macro_gui_MTK.h  \[1.23\] edit, im, pen
Save:node\C\study\Macro_gui_MTK.h  \[1.24\] //color--------------属性
Save:node\C\study\Macro_gui_MTK.h  \[1.25\] //label--------------
Save:node\C\study\Macro_gui_MTK.h  \[1.26\] text---------------
Save:node\C\study\Macro_gui_MTK.h  \[1.27\] //prgbox-------------进度条
Save:node\C\study\Macro_gui_MTK.h  \[1.28\] menu
Save:node\C\study\Macro_gui_MTK.h  \[1.29\] //owndraw------------
Save:node\C\study\Macro_gui_MTK.h  \[1.30\] slide
Save:node\C\study\Macro_gui_MTK.h  \[1.31\] 
Save:node\C\study\Macro_gui_MTK.h  \[1.32\] 




[1.1] display
// --txt
// gui_move_text_cursor();
// gui_set_text_border_color();
// UI_print_text();

// --txt
// gui_set_text_color(gui_color(255, 0, 0));
// gui_set_font(&MMI_large_font);
// gui_move_text_cursor((LCD_WIDTH-string_w)/2, y+num_height);
// gui_print_text((UI_string_type)GetString(STR_ID_CLNDR_WEEK_SUN + nWeek));  
            


//字符方向：
gui_get_multi_line_text_language_type



[1.2] softkey
// 1) height
plutommi\Framework\GUI\GUI_INC\gui_switch.h  CFG_UI_SOFTKEY_BAR_HEIGHT
// 2) width
plutommi\Customer\CustResource\CustCoordinates.c coordinate_set33

plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  dm_setup_and_draw_button_bar
// show
plutommi\Framework\GUI\GUI_SRC\wgui_softkeys.c  void^show_softkey
// reset
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  dm_reset_lsk_coordinates


// 3) softkey 字体颜色
gui_show_icontext_button  softkey 字体颜色
dm_setup_and_draw_button_bar
// 4) key
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


[1.3] draw

// --image
// gdi_image_draw_id(x, y, (U16)(IMG_TECHNO_DIGITAL_CLOCK_0 + num1));
// gui_measure_image(icon, &width, &height);	
// gui_show_image(x1, y1, icon);
// --image--画图找这个
plutommi\Framework\GUI\GUI_SRC\wgui_categories_util.c get_image
 

// draw area
plutommi\Framework\GUI\GUI_SRC\gui.c void^gui_draw_filled_area
//	if(y1<242 && y1>238 && y2<242 && y2>238 )
//	{
//		rx1 = rx1;
//	}


// draw bg
//   --cursor
plutommi\Framework\GDI\GDISrc\gdi_primitive.c void^gdi_draw_solid_rect( )
//	if(y2>20 && y2<320 && y2 != 292)
//	{
//		int a = 1;
//		a = 1;
//	}

// draw border+bg
plutommi\Framework\GDI\GDISrc\gdi_primitive.c void^gdi_draw_frame_rect( )
// draw border
plutommi\Framework\GDI\GDISrc\gdi_primitive.c void^gdi_draw_rect( )


// draw line
plutommi\Framework\GUI\OEM_SRC\gui_tab_bars_oem.c gdi_draw_line




[1.4] statusbar, change
// 状态条
// 1) 状态条
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_initialize( ) 
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c dm_setup_and_draw_status_icons( ).   开始函数
plutommi\Framework\GUI\OEM_SRC\wgui_status_icon_bar.c void^wgui_status_icon_bar_update( )
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_arrange_oem( ).  坐标位置
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_oem( ).     画图标
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_hide_oem
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_icon_oem( ).画其他图标，例如数字时钟
// 2) draw:
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c gui_status_icon_bar_show_info_oem

// 添加位置
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c 1508
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c 1836

// 画图标
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c 2723



//时间状态条
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c show_main_LCD_date_time
plutommi\Framework\GUI\GUI_SRC\gui_clock.c gui_clock_show_digital_small_image
	


//	时间状态条:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_UI_CLOCK_SMAILL_DIGITAL_IMAGE_CLOCK
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_WGUI_STATUS_ICON_SHOW_TIME_IN_RIGHT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\Techno\SmallClock\0030.bmp
	

# 电量
// 5络电池
//BATTERY_FIVE_LEVEL
//	电量:
plutommi/Framework/GUI/GUI_Res/Status_icon_bar.res IMG_SI_BATTERY_STRENGTH 电量
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c STATUS_ICON_BATTERY_STRENGTH
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_icon_blink_and_animate_timer_callback
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c g_charbat_context.chargerLevel 电量等级
//	电量更新:
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c void^BatteryStatusIndication
//	添加电量百分比:
plutommi\mmi\km\SDK\Src\KM_Util.c km_charbat_get_persent
//	电池充满条件:
custom\drv\misc_drv\_Default_BB\MT6261\chr_parameter.c chr_usb_detect_volt = 1400000;	
//	电池充满后继续充半个小时(多处定义):
hal\peripheral\src\bmt.c STOPTIMER_TIMEOUT_TICK  (KAL_TICKS_1_MIN*30)
//	电压数组:
custom\app\FARSIGHTED61M_CN_11C_BB\nvram_user_config.c NVRAM_EF_CUST_HW_LEVEL_TBL_DEFAULT

# 充电完成
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c  STR_CHARGING_DONE


# statusbar:sim
//
plutommi\mmi\NwInfo\NwInfoSrc\NwInfoSignal.c  mmi_nw_info_signal_set_image





[1.5] theme
// init
plutommi\Framework\GUI\GUI_SRC\wgui.c  wgui_init( )
// --color--cursor
// ----pin--PIN_singleline_inputbox_theme
plutommi\Framework\GUI\GUI_SRC\gui_themes.c set_MMI_PIN_inputbox_theme( )
// ----pb---cat200_singleline_inputbox_theme
// ----calendar---
plutommi\Framework\GUI\GUI_SRC\gui_themes.c set_MMI_calendar_theme( )


// theme
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\ThemeRes.c  theme_defaultTheme
plutommi\Customer\CustResource\K220_L12_MGUO_MMI\Themecomponents.h  title_text_color_defaultTheme
plutommi\Customer\CustResource\ThemeRes.c  theme_defaultTheme
plutommi\Customer\CustResource\Themecomponents.h  title_text_color_defaultTheme

// --color--edit--border
//		==>.single_line_input_box
//		==>.normal_filler
//		==>.f
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  gui_draw_single_line_background
//		==>current_single_line_input_box_theme
//		==>.single_line_input_box
//		==>.MMI_inline_singleline_inputbox
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  gui_set_single_line_input_box_current_theme
//		==>wgui_inline_singleline_inputbox_focussed_theme
//		==>current_single_line_input_box_theme
plutommi\Framework\GUI\GUI_SRC\wgui_inline_edit.c  show_inline_singleline_inputbox
//		==>date_time_input_theme
//		==>current_single_line_input_box_theme
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c create_time_input

// --color--txt
//		==record
plutommi\Customer\CustResource\Themecomponents.h  datetime_bar_duration_text_color


// --image--num
plutommi\Customer\CustResource\Themecomponents.h  img_list_menuitem_auto_number_img1_defaultTheme

// --time--data
//		==>date_time_input_theme
//		==>.selection_color
plutommi\Framework\GUI\GUI_SRC\wgui_inline_edit.c  wgui_set_date_time_input_focussed_theme

// --title--ime
//		==>current_information_bar_theme
//		==>information_bar_theme
//		==>information_bar_color
plutommi\Customer\CustResource\Themecomponents.h  information_bar_color
ime_focused_border_color





[1.6] pubWin  Alert
//
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c  mmi_popup_display


// pubWin
plutommi\Framework\CommonScreens\CommonScreensSrc\AlertScreen.c  mmi_ret^popup_entry
plutommi\Framework\GUI\GUI_SRC\wgui_categories_popup.c  ShowCategory63Screen_ex
// pubWin--bg
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  case^DM_POPUP_BACKGROUND
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  MMI_POP_UP_DIALOG_X
// pubWin--rect
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  case^DM_ALIGNED_AREA_START
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  dm_popupbg_set_clip
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  dm_setup_and_draw_aligned_area
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  case^DM_ALIGNED_AREA_END
// pubWin--rect--id
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  dm_search_control_set
//	category_id=34
//	--MMI_CATEGORY30_ID = 23;
//	--MMI_CATEGORY39_ID = 28;
//	--MMI_CATEGORY63_ID = 34;
//	--MMI_CATEGORY52_ID = ;
plutommi\Framework\GUI\GUI_INC\wgui_categories_enum.h  MMI_CATEGORY39_ID
plutommi\Customer\CustResource\CustCoordinates.c  MMI_CATEGORY63_ID


// pubWin--IMAGE
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c  case^DM_IMAGE


// 1) SIM弹窗
__MMI_POPUP_NO_SHOW_ICON__
ShowCategory165Screen_int
ShowCategory366Screen
ShowCategory66Screen
ShowCategory208Screen_int
// 2) 弹窗图标:
custom\common\PLUTO_MMI\custom_events_notify.c mmi_events_notify_tbl

//



[1.7] form, point
// point--idle--sim
plutommi\Framework\GUI\GUI_INC\gui_switch.h  __K220_Z97__
plutommi\Framework\GUI\GUI_INC\gui_switch.h  CFG_UI_IDLE_NETWORK_NAME_Y
// point--gui--softkey
plutommi\Framework\GUI\GUI_INC\gui_switch.h  CFG_UI_SOFTKEY_WIDTH
// point--gui--pop
plutommi\Framework\GUI\GUI_INC\gui_switch.h  CFG_UI_POP_UP_DIALOG_WIDTH
// point--list--pb
plutommi\Framework\GUI\GUI_INC\gui_switch.h  CFG_UI_ICONTEXT_MENUITEM_TEXT_X
//
plutommi\Framework\GUI\GUI_INC\gui_switch.h  __K220_L12__

//
// point--list--pb
plutommi\Framework\GUI\GUI_INC\wgui.h  __K220_Z97__
plutommi\Framework\GUI\GUI_INC\wgui.h  __K220_L12__
plutommi\Framework\GUI\GUI_INC\wgui.h  MMI_ICONTEXT_MENUITEM_HEIGHT
// point--input--pin
plutommi\Framework\GUI\GUI_INC\wgui.h  MMI_SINGLELINE_INPUTBOX_HEIGHT
// point--input--im
plutommi\Framework\GUI\GUI_INC\wgui.h  INFORMATION_BAR_HEIGHT



[1.8] rect--------------Coordinates
// --win
plutommi\Framework\GUI\GUI_SRC\wgui_categories.c  MMI_CATEGORY88_1ITEM_ID
// --table
plutommi\Customer\CustResource\CustCoordinates.c  MMI_CATEGORY88_1ITEM_ID
//    {MMI_CATEGORY88_1ITEM_ID, (U8 *) category88, (S16 *) coordinate_set88_1_item, NULL},
// --id
plutommi\Framework\GUI\GUI_INC\wgui_categories_enum.h  MMI_CATEGORY88_1ITEM_ID


[1.9] 




[1.10] option
//
//  cui_menu_set_item_hidden(menu_gid, );


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
//	List:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2
plutommi\mmi\Setting\SettingRes\Wallpaper.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 壁纸位置不是这里
//	list 标号:
plutommi\Customer\Images\M107\M107_S2401_GRAVITY_ULTRA_F1\MainLCD\SubMenu\ListMenuIcon\L_NB30.bmp

//
ShowCategory53Screen(): 列表

// list--
plutommi\Framework\GUI\GUI_SRC\wgui_categories_list.c  ShowCategory52Screen_int
// list--menu
plutommi\Framework\GUI\GUI_SRC\wgui_fixed_menus.c  wgui_fixed_list_create_icontext_menu


// list--menu--height
//		==>MMI_MENUITEM_HEIGHT
//		==>gui_set_fixed_icontext_menuitem_current_theme
plutommi\Framework\GUI\GUI_SRC\wgui_fixed_menus.c  create_fixed_icontext_menuitems
//		==>MMI_fixed_icontext_menuitem/color
plutommi\Framework\GUI\GUI_SRC\wgui_fixed_menus.c  associate_fixed_icontext_list
// list--menu--show
plutommi\Framework\GUI\GUI_SRC\wgui_fixed_menus.c  show_fixed_list
//	--MMI_CATEGORY52_ID = ;
//		==>


// --list--line--color
//		==>.list_grid_line_color
plutommi\Framework\GUI\GUI_SRC\gui_dynamic_menus.c  gui_show_dynamic_list_menu_draw_bg
plutommi\Framework\GUI\GUI_SRC\gui_dynamic_menus.c  1598
// --list--line--pb
plutommi\mmi\PhoneBook\PhoneBookSrc\PhoneBookList.c  mmi_phb_quick_search_list_seperate_line
// --list--line--menu...
// --list--line--file...
// --list--line--set--call
plutommi\Framework\GUI\GUI_SRC\wgui_fixed_menus.c  gui_draw_list_menuitem_separator_line
plutommi\Framework\GUI\GUI_SRC\gui_fixed_menus.c  4515
plutommi\Framework\GUI\GUI_SRC\wgui_categories_list.c  void^ShowCategory353Screen_ext_int




[1.22] 
// width
get_number_image_width



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


# input
// input--pin
plutommi\Framework\GUI\GUI_SRC\wgui_categories_inputs.c  ShowCategory111Screen_ext_int
// --theme--set--PIN_singleline_inputbox_theme
plutommi\Framework\GUI\GUI_SRC\wgui_categories_inputs.c  gui_set_single_line_input_box_theme
// --height--setup_UI_wrappers()
plutommi\Framework\GUI\GUI_SRC\wingui.c  MMI_singleline_inputbox_height
plutommi\Framework\GUI\GUI_SRC\gui_themes.c set_MMI_PIN_inputbox_theme( )


# im
//
plutommi/Customer/CustResource/CustCoordinates.c
//
plutommi/Framework/GUI/GUI_INC/gui_inputs_internal.h
//
plutommi/Framework/InputMethod/UI/UI_Src/Imui.c  MMI_IMUI_SELECTION_AREA_VER_GAP
// im--abc
plutommi/Framework/InputMethod/UI/UI_Src/Imui.c  mmi_imui_get_string_extent
plutommi/Framework/InputMethod/UI/UI_Src/Imui.c  19003
// im--abc--color
plutommi\Customer\CustResource\Themecomponents.h  input_method_text_color
// im--title---bar--file
plutommi/Framework/InputMethod/UI/UI_Src/Imui.c  11499
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  void^gui_multi_line_input_box_register_infobar_callback
//    if(height == 0)   height = INFORMATION_BAR_HEIGHT;
// im--title---bar--sos
plutommi/Framework/InputMethod/UI/UI_Src/Imui.c  11310


# cursor
// cursor--init--color
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  UI_inputbox_show_cursor
// cursor--timer
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  UI_inputbox_blink_cursor

// cursor--color
//		==>.single_line_input_box
//		==>.cursor_color
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  gui_single_line_input_box_show_cursor
//		==>current_single_line_input_box_theme
//		==>.single_line_input_box
//		==>.MMI_inline_singleline_inputbox
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  gui_set_single_line_input_box_current_theme
//		==>wgui_inline_singleline_inputbox_focussed_theme
//		==>current_single_line_input_box_theme
plutommi\Framework\GUI\GUI_SRC\wgui_inline_edit.c  11598
//		==>.inline_edit_cursor_color
//		==>wgui_inline_singleline_inputbox_focussed_theme
plutommi\Framework\GUI\GUI_SRC\gui_themes.c  inline_edit_cursor_color




[1.24] 




[1.25] 




[1.26] text
//
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  void^gui_show_single_line_input_box_ext
// --text--border
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c  void^gui_create_multi_line_input_box_set_buffer
// --text--cursor--text_y
plutommi\Framework\GUI\GUI_SRC\gui_single_line_inputs.c  gui_draw_single_line_one_line
plutommi\Framework\GUI\GUI_SRC\gui_single_line_inputs.c  1815



[1.27] 




[1.28] menu
// menu--switch--key
plutommi\mmi\Setting\SettingSrc\PhnsetGPIO.c  mmi_phnset_gpio_key_backlite_time_quantum_entry

// menu--switch--env
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c  onoff_item_struct

## arrow
// margin
plutommi\Framework\GUI\GUI_SRC\gui_horizontal_selector.c  gui_horizontal_select_show_arrow
// GUI_HORIZONTAL_SELECT_ICON_X_GAP





[1.29] 




[1.30] slide
## slide
// set--key
plutommi\Framework\GUI\GUI_SRC\gui_slide_bar.c  gui_slide_bar_create
// set--timeformat
plutommi\mmi\Setting\SettingSrc\DateAndTime.c  EntryPhnsetSetFormat



[1.31] 




[1.32] 




