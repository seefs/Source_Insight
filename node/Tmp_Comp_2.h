LOCAL MMI_RESULT_E HandleAlarmEditWinOptionMsg( 
                                        MMI_WIN_ID_T        win_id, 
                                        MMI_MESSAGE_ID_E    msg_id, 
                                        DPARAM              param
                                        )
{
	MMI_RESULT_E						recode = MMI_RESULT_TRUE;
//	MMI_CTRL_ID_T						ctrl_id = MENU_POPUP_CTRL_ID;
	MMI_MENU_ID_T						menu_id  = 0;
	
	switch(msg_id)
	{
	case MSG_OPEN_WINDOW:
		AddSchListMarkOptMenuItem(MENU_POPUP_CTRL_ID,
					MMIAPISCH_IsOneDateHasSche(calendar_ctrl_ptr->solar_year,
						calendar_ctrl_ptr->solar_month,
						calendar_ctrl_ptr->solar_date));
		MMK_SetAtvCtrl( win_id,  MENU_POPUP_CTRL_ID);
		break;
		
	case MSG_CTL_OK:
	case MSG_APP_OK:
	case MSG_APP_WEB:
	case MSG_CTL_MIDSK:
		menu_id = GUIMENU_GetCurNodeId(MENU_POPUP_CTRL_ID); 	
        switch (menu_id)
        {
        case ID_ALM_SELECT:
            MMK_SendMsg(MMIALM_EDIT_WIN_ID, MSG_APP_WEB, PNULL);  
            MMK_CloseWin(win_id);
            break;
            
        case ID_ALM_SAVE:
            MMK_SendMsg(MMIALM_EDIT_WIN_ID, MSG_CTL_OK, PNULL);  
            MMK_CloseWin(win_id);
            break;

        default:
            break;
        }
        break;
		
	case MSG_APP_CANCEL:
	case MSG_CTL_CANCEL:
		MMK_CloseWin(win_id);
		break;
		
	default:
		recode = MMI_RESULT_FALSE;
		break;
	}
	
	return recode;
}
