LOCAL MMI_RESULT_E HandleAlarmEditWinOptionMsg( 
                                        MMI_WIN_ID_T        win_id, 
                                        MMI_MESSAGE_ID_E    msg_id, 
                                        DPARAM              param
                                        )
{
    MMI_MENU_GROUP_ID_T     group_id = 0;
    MMI_MENU_ID_T           menu_id = 0;
    
    switch (msg_id)
    {
    case MSG_OPEN_WINDOW:        
        MMK_SetAtvCtrl(win_id, MMIALM_EDIT_WIN_OPTION_MENU_CTRL_ID);
        break;
        
    case MSG_FULL_PAINT:
        break;

    case MSG_CTL_OK:
    case MSG_APP_OK:
        GUIMENU_GetId(MMIALM_EDIT_WIN_OPTION_MENU_CTRL_ID,&group_id,&menu_id);
        
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
        break;
    }
}
