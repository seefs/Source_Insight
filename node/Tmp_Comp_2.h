LOCAL MMI_RESULT_E HandleChannelListWinMsg(
                                           MMI_WIN_ID_T        win_id,  
                                         MMI_MESSAGE_ID_E    msg_id, 
                                         DPARAM              param
                                         )
{
    MMI_STRING_T                str_t= {0};
    const GUILIST_ITEM_T        *list_item_ptr = PNULL;
    static uint16               s_cur_list_index = 0;
    MMI_RESULT_E                result = MMI_RESULT_TRUE;
    static uint32               ch_type = MMIFM_OPERATION_LIST;
    uint16                      i = 0;
    switch (msg_id)
    {
    case MSG_OPEN_WINDOW:
        ch_type = MMK_GetWinAddDataPtr(win_id);/*lint !e64*/
        if(MMIFM_OPERATION_LIST == ch_type)/*lint !e64*/
        {
            s_cur_list_index = 0;//high light first item
            MMI_GetLabelTextByLang(TXT_COMM_CHANNEL_LIST, &str_t);//TXT_FM_CUSTOM_ALL_STATIONS
        }
        else
        {
            //high light first empty channel
            s_cur_list_index = MMIFM_GetValidChannelCount();
            if(s_cur_list_index >= MMIFM_MAX_CHANNEL_NUM)
            {
                //not empty channel, high light first channle
                s_cur_list_index = 0;
            }
            MMI_GetLabelTextByLang(TXT_COMM_SAVE_TO, &str_t);
        }
        ReadChannelsToListBox(win_id, MMI_FM_CHANNEL_LIST_CTRL_ID, ch_type);/*lint !e64*/
        GUILIST_SetCurItemIndex(MMI_FM_CHANNEL_LIST_CTRL_ID, s_cur_list_index);
        //MMK_SendMsg(win_id, MSG_APP_FM_EDIT_UPDATE, PNULL);
        MMK_SetAtvCtrl(win_id, MMI_FM_CHANNEL_LIST_CTRL_ID);
        GUIWIN_SetTitleText(win_id, str_t.wstr_ptr, str_t.wstr_len, FALSE);
#ifdef MMI_PDA_SUPPORT
        if(MMIFM_OPERATION_LIST == ch_type)
        {
            GUIWIN_SetTitleButtonState(win_id, GUITITLE_BUTTON_RIGHT, TITLE_BUTTON_NORMAL, FALSE);
        }
#endif
        break;
    case MSG_APP_FM_EDIT_UPDATE:
        //update current list
        ch_type =MMK_GetWinAddDataPtr(win_id);/*lint !e64*/
        MMI_GetLabelTextByLang(TXT_COMM_CHANNEL_LIST, &str_t);
        GUIWIN_SetTitleText(win_id, str_t.wstr_ptr, str_t.wstr_len, FALSE);
        ReadChannelsToListBox(win_id, MMI_FM_CHANNEL_LIST_CTRL_ID, ch_type);/*lint !e64*/
        for(i = 0; i < GUILIST_GetTotalItemNum(MMI_FM_CHANNEL_LIST_CTRL_ID); i++)
        {
            list_item_ptr = GUILIST_GetItemPtrByIndex(MMI_FM_CHANNEL_LIST_CTRL_ID, i); 
            //SCI_ASSERT(PNULL != list_item_ptr);/*assert verified*/
            if(PNULL == list_item_ptr)
            {
                break;
            }
            
            if(GetCurrentSelChannel() == (uint16)list_item_ptr->user_data)
            {
                s_cur_list_index = i;
                break;
            }
        }
        GUILIST_SetCurItemIndex(MMI_FM_CHANNEL_LIST_CTRL_ID, s_cur_list_index);
        MMK_SetAtvCtrl(win_id, MMI_FM_CHANNEL_LIST_CTRL_ID);
        break;
        
    case MSG_CTL_OK:
    case MSG_APP_OK:
    case MSG_APP_MENU:
        s_cur_list_index = GUILIST_GetCurItemIndex(MMI_FM_CHANNEL_LIST_CTRL_ID);       
        list_item_ptr = GUILIST_GetItemPtrByIndex(MMI_FM_CHANNEL_LIST_CTRL_ID, s_cur_list_index);    
        //SCI_ASSERT(PNULL != list_item_ptr);/*assert verified*/
        if(PNULL == list_item_ptr)
        {
            break;
        }
        //ch_type = MMK_GetWinAddDataPtr(win_id);
        SetCurrentSelChannel((uint16)list_item_ptr->user_data);
        //SCI_TRACE_LOW:"[MMIFM] HandleChannelListWinMsg MSG_APP_OK s_current_sel_channel %d"
        SCI_TRACE_ID(TRACE_TOOL_CONVERT,MMIFM_WINTAB_2642_112_2_18_2_19_33_68,(uint8*)"d", GetCurrentSelChannel());
        if(MMIFM_OPERATION_LIST == ch_type)
        {
        	#ifdef SBD_FM_DIRECT_BROADCAST_DELETE
		#else
		{
       #ifdef SBD_FM_PRELOAD_CHANNEL_LIST_SUPPORT
            if (s_cur_list_index < FM_PRELOAD_CHANNEL_NUM)
            {
                //play this channel
                if(MMIFM_IsChannelExist(GetCurrentSelChannel()))
                {
                    MMIFM_PlayChannel(GetCurrentSelChannel());
			#if defined(MMI_FM_MINI_SUPPORT) || defined( MMI_MINI_QVGA_UI_SUPPORT)
                    /* fixed by langhua.yang for NEWMS00207297*/ 
                   		MMIFM_SetCurrrentChannel(GetCurrentSelChannel());
			#endif
                    SetButtonBgWhenResume();
                }
                MMK_CloseWin(win_id); 
                break;
            }
        #endif
	    }
	#endif
            //option
            MMK_CreateWin((uint32 *)FM_CHANNEL_OPTION_WIN_TAB,PNULL);

            //creat dynamic menu
            GUIMENU_CreatDynamic(PNULL,FM_CHANNEL_OPTION_WIN_ID,MENU_POPUP_CTRL_ID,GUIMENU_STYLE_POPUP);
        }
        else
        {
            //select
            if(MSG_APP_MENU!=msg_id)
            {
                HandleSaveCurrentFreq(GetCurrentSelChannel());
            }
        }
        break;
        
    case MSG_CTL_MIDSK:
    case MSG_APP_WEB:
#ifdef TOUCH_PANEL_SUPPORT //IGNORE9527
    case MSG_CTL_PENOK:
#endif //TOUCH_PANEL_SUPPORT //IGNORE9527
        s_cur_list_index = GUILIST_GetCurItemIndex(MMI_FM_CHANNEL_LIST_CTRL_ID);       
        list_item_ptr = GUILIST_GetItemPtrByIndex(MMI_FM_CHANNEL_LIST_CTRL_ID, s_cur_list_index); 
        //SCI_ASSERT(PNULL != list_item_ptr);/*assert verified*/
        if(PNULL == list_item_ptr)
        {
            break;
        }
        SetCurrentSelChannel((uint16)list_item_ptr->user_data);
        //SCI_TRACE_LOW:"[MMIFM] HandleChannelListWinMsg MSG_APP_WEB s_current_sel_channel %d"
        SCI_TRACE_ID(TRACE_TOOL_CONVERT,MMIFM_WINTAB_2672_112_2_18_2_19_33_69,(uint8*)"d", GetCurrentSelChannel());
        
        if(MMIFM_OPERATION_LIST == ch_type)
        {
            //play this channel
            if(MMIFM_IsChannelExist(GetCurrentSelChannel()))
            {
                MMIFM_PlayChannel(GetCurrentSelChannel());
#if defined(MMI_FM_MINI_SUPPORT) || defined( MMI_MINI_QVGA_UI_SUPPORT)
                /* fixed by langhua.yang for NEWMS00207297 */
                MMIFM_SetCurrrentChannel(GetCurrentSelChannel());
#endif
                SetButtonBgWhenResume();
            }
            MMK_CloseWin(win_id);            
        }
        else
        {
            //select
            s_cur_list_index = GUILIST_GetCurItemIndex(MMI_FM_CHANNEL_LIST_CTRL_ID);       
            //list_item_ptr = GUILIST_GetItemPtrByIndex(MMI_FM_CHANNEL_LIST_CTRL_ID, s_cur_list_index);
            HandleSaveCurrentFreq(GetCurrentSelChannel());
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
