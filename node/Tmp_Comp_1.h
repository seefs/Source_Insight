LOCAL MMI_RESULT_E HandleCustomChannelListWinMsg(
                                           MMI_WIN_ID_T        win_id,  
                                         MMI_MESSAGE_ID_E    msg_id, 
                                         DPARAM              param
                                         )
{
    MMI_STRING_T                str_t= {0};
    const GUILIST_ITEM_T        *list_item_ptr = PNULL;
    static uint16               s_cur_list_index = 0;
    MMI_RESULT_E                result = MMI_RESULT_TRUE;
    static uint32               ch_type = MMIFM_OPERATION_LIST; 		 //1.列表界面,
//  static uint32               ch_type = MMIFM_ADD_FAVOURITES_LIST; 	 //3.添加键界面, 选项功能与1不同
	uint32                      ctrl_id = MMI_FM_CUSTOM_CHANNEL_LIST_CTRL_ID;
    uint16                      i = 0;
    switch (msg_id)
    {
    case MSG_OPEN_WINDOW:
		ch_type =MMK_GetWinAddDataPtr(win_id);
		if(ch_type == MMIFM_OPERATION_LIST)
		{
	        s_cur_list_index = 0;//high light first item
		}
		else //(ch_type == MMIFM_ADD_FAVOURITES_LIST)
		{
	        s_cur_list_index = MMIFM_GetCustomEmptyChannelIndex();
		}
		ReadCustomOpenChannelsListBox(win_id, ctrl_id, ch_type);/*lint !e64*/		
		GUILIST_SetCurItemIndex(ctrl_id, s_cur_list_index);
        MMK_SetAtvCtrl(win_id, ctrl_id);
        break;
		
    case MSG_APP_FM_EDIT_UPDATE:
        //update current list
		ch_type =MMK_GetWinAddDataPtr(win_id);
        ReadCustomOpenChannelsListBox(win_id, ctrl_id, ch_type);/*lint !e64*/
        for(i = 0; i < GUILIST_GetTotalItemNum(ctrl_id); i++)
        {
            list_item_ptr = GUILIST_GetItemPtrByIndex(ctrl_id, i); 
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
        GUILIST_SetCurItemIndex(ctrl_id, s_cur_list_index);
        MMK_SetAtvCtrl(win_id, ctrl_id);
        break;
        
    case MSG_CTL_OK:
    case MSG_APP_OK:
    case MSG_APP_MENU:
    case MSG_CTL_MIDSK:
    case MSG_APP_WEB:
        s_cur_list_index = GUILIST_GetCurItemIndex(ctrl_id);       
        list_item_ptr = GUILIST_GetItemPtrByIndex(ctrl_id, s_cur_list_index);    
        //SCI_ASSERT(PNULL != list_item_ptr);/*assert verified*/
        if(PNULL == list_item_ptr)
        {
            break;
        }
        //ch_type = MMK_GetWinAddDataPtr(win_id);
        SetCurrentSelChannel((uint16)list_item_ptr->user_data);
		if(ch_type == MMIFM_OPERATION_LIST)
		{
	        if(MSG_APP_WEB != msg_id && MSG_CTL_MIDSK != msg_id)
	        {
		        //option
		        MMK_CreateWin((uint32 *)MMIFM_CUSTOM_CHANNEL_OPTION_WIN_TAB,PNULL);
		        //creat dynamic menu
		        GUIMENU_CreatDynamic(PNULL,MMIFM_CUSTOM_CHANNEL_OPTION_WIN_ID,MENU_POPUP_CTRL_ID,GUIMENU_STYLE_POPUP);
	        }
	        else
	        {
				uint16		 cur_freq;		 //current freq
				cur_freq = MMIFM_GetFMCurrentInfo()->cur_freq;
			    if(MMIFM_IsCustomChannelExist(GetCurrentSelChannel()))
			    {
		           //play this channel
		        	HandleFMCustomAction(win_id, MMIFM_CUSTOM_CHANNEL_PLAY, PNULL);
			    }
				else if(MMIFM_IsCustomChannelExistChannel(cur_freq, PNULL))
				{
		           //show exist channel
		        	HandleFMCustomAction(win_id, MMIFM_CUSTOM_ADD_EXIST_CHANNEL, PNULL);
				}
				else 
				{
		           //add new channel
		        	HandleFMCustomAction(win_id, MMIFM_CUSTOM_ADD_ONE_CHANNEL, PNULL);
				}
	        }
		}
		else //(ch_type == MMIFM_ADD_FAVOURITES_LIST)
		{
			uint16		 cur_freq;		 //current freq
			cur_freq = MMIFM_GetFMCurrentInfo()->cur_freq;
		    if(MMIFM_IsCustomChannelExistChannel(cur_freq, PNULL))
			{
	           //show exist channel
	        	HandleFMCustomAction(win_id, MMIFM_CUSTOM_ADD_EXIST_CHANNEL, PNULL);
			}
			else if(MMIFM_IsCustomChannelExist(GetCurrentSelChannel()))
		    {
	           //replace this channel
	        	HandleFMCustomAction(win_id, MMIFM_CUSTOM_REPLACE_CHANNEL_QUERY, PNULL);
		    }
			else 
			{
	           //add new channel
	        	HandleFMCustomAction(win_id, MMIFM_CUSTOM_ADD_ONE_CHANNEL, PNULL);
			}
		}
        break;
        

    case MSG_APP_CANCEL:
    case MSG_CTL_CANCEL:
        if(MMIFM_OPERATION_LIST == ch_type)
        {
        	MMK_CloseWin(win_id);
        }
        else
        {
        	MMK_CloseWin(win_id);
        }  
        break;
    default:
        result = MMI_RESULT_FALSE;
        break;
    }
    
    return result;
}
