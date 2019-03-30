/***********************************************************************/
/******************************** Mtk modis ****************************/
/***********************************************************************/
[Num][a][Ca]
[1.1] 拨号按键:
ExecuteCurrKeyHandler
plutommi\Framework\GUI\GUI_SRC\wgui.c void^MMI_key_input_handler
plutommi\Framework\GUI\GUI_SRC\wgui_inputs_dialer.c void^wgui_inputs_dialer_handle_key_down





wgui_cat1031_show


EntryMainMenuFromIdleScreen

[7.1] gid
mmi_frm_group_enter
MMI_ID mmi_popup_display_ext( 
	MMI_STR_ID title, 
	mmi_event_notify_enum event_type, 
	mmi_popup_property_struct *arg)
	
[7.2] GetString(STR_USB_CHARGER_CONNECTED)


[1.2] SetKeyHandler(, KEY_1, KEY_EVENT_UP);
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


[1.3] bg color
plutommi\Framework\GDI\GDISrc\gdi_primitive.c void^gdi_draw_solid_rect( )
//	if(y2>20 && y2<320 && y2 != 292)
//	{
//		int a = 1;
//		a = 1;
//	}

[1.4] image
plutommi\mmi\Resource\readres.c S8^*GetImage( )
//	int a =1 ;
//
//	if(ImageId ==IMG_ID_PHNSET_WP_START-10)
//	{
//		a = 1;
//	}

[1.5] win id
// GetActiveScreenId() = IDLE_SCREEN_ID
// 搜:
//	mmi_rp_*_def.h
//	27[8-9][0-9][0-9]

[1.5] win func
ShowCategory53Screen(): 列表


/***********************************************************************/
/***********************************************************************/
/***********************************************************************/


[2.1] 联系人 高亮：
mmi_clog_lt_item_hlt_hdlr


显示：
mmi_clog_lt_get_log_item


联系人 高亮：
srv_phb_get_number
mmi_phb_list_get_hint_ext
	
联系人 显示：
mmi_phb_contact_get_item_image


cui_dialer_classic_on_enter


保存pb-img：
mmi_clog_act_make_call
mmi_clog_act_create_phb_udata(&log);

更新pb-img：
srv_phb_get_image
srv_phb_oplib_get_contact_info

mmi_clog_act_create_phb_udata


srv_gcall_cntxt_set_ptr
	
	

/***********************************************************************/
/***********************************************************************/
/***********************************************************************/





[3.1] MTK常用断点:

[3.2] 事件:
mmi_frm_post_event
mmi_frm_send_event  按键


字符方向：
gui_get_multi_line_text_language_type


[3.3] str:
get_string
STR_GLOBAL_OFF
STR_GLOBAL_ON


转格式：
app_ucs2_wtoi
	
mmi_asc_to_ucs2  转换
mmi_asc_to_ucs2
mmi_ucs2ncpy

[3.4] img:
GetImageData
gdi_image_get_dimension_id


[3.5] gui:
gui_draw_filled_area


[3.6] 界面入口：
mmi_frm_scrn_enter
	node_exec_entry_proc

菜单切换：
MMI_menu_highlight_handler






plutommi/CUI/SmsCui/SmsSenderCui.c SBD_SMS_SEND_4SIM_SELECT_FIX

cui_sms_recipient_opt_send_by_sim


-------------------------------------------- 

[4.1] SIM弹窗:
__MMI_POPUP_NO_SHOW_ICON__

ShowCategory165Screen_int
ShowCategory366Screen
ShowCategory66Screen
ShowCategory208Screen_int

---- STR_GLOBAL_PLEASE_WAIT		Please wait

-------------------------------------------- 

[5.1] 空间问题:
//@wanc 彻底关闭MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif	




/***********************************************************************/
/***********************************************************************/
/***********************************************************************/





/***********************************************************************/
/***********************************************************************/
/***********************************************************************/
[6.1] KM模拟器编不过, 缺文件[g][Cg]
// F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h
// F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h
cp->
cp F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h


// copy这2个文件
// F:\6261D_KM\tst\database_classb\pstrace_db\wap_trc_gen.h
// F:\6261D_KM\tst\database_classb\pstrace_db\wps_trc_gen.h

// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc.h
// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wap_trc_gen.h vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h

// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc.h
// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wps_trc_gen.h vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h

	
err->
// f:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\custom_config.c sys_mem_size_modis.h
// F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
cp custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
// 或
cp F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h



