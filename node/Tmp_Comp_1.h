LOCAL MMI_RESULT_E   HandleEditSchWinMsg(
                                             MMI_WIN_ID_T win_id, 
                                             MMI_MESSAGE_ID_E msg_id, 
                                             DPARAM param 
                                             )
{
    MMI_RESULT_E             result = MMI_RESULT_TRUE;
    MMI_CTRL_ID_T            ctrl_id = MMISCH_NAME_EDIT_CTRL_ID;
    MMIACC_SMART_EVENT_T*	event_ptr = (MMIACC_SMART_EVENT_T *) MMK_GetWinAddDataPtr(win_id);

    switch(msg_id) 
    {
    case MSG_OPEN_WINDOW:
         {
        	MMI_STRING_T    name_str  = {0};
            //wchar           forbid_char_value[]= {0x0d, 0x0a};		//NEWMS00214305 [6530][64X64_240X400PDA2]搜狗输入法，点击日历-创建新日程-点击主题，任意输入法，输入多行键码点击回车键无效
        	name_str.wstr_ptr = event_ptr->event_content_info.w_content;
        	name_str.wstr_len = event_ptr->event_content_info.w_length;
        	//GUIEDIT_SetStyle(MMISCH_NAME_EDIT_CTRL_ID,GUIEDIT_STYLE_SINGLE);
        	GUIEDIT_SetString(ctrl_id, name_str.wstr_ptr, name_str.wstr_len );
            //GUIEDIT_ConfigDisableChar(MMISCH_NAME_EDIT_CTRL_ID, forbid_char_value, sizeof(forbid_char_value)/sizeof(wchar));
            MMK_SetAtvCtrl(win_id,ctrl_id);
        }
        break;
        
    case MSG_APP_OK:
    case MSG_CTL_OK:
    case MSG_CTL_MIDSK:
#ifdef TOUCH_PANEL_SUPPORT //IGNORE9527
    case MSG_CTL_PENOK:
#endif //TOUCH_PANEL_SUPPORT //IGNORE9527
	case MSG_APP_WEB:
        if(SaveSchEditWinName(event_ptr))
		{
			MMK_CloseWin(win_id);
		}
        break;
    
    case MSG_APP_CANCEL:
    case MSG_CTL_CANCEL:
        MMK_CloseWin(win_id);
        break;
        
    default:
        result = MMI_RESULT_FALSE;
        break;
    }
    return result;
}
