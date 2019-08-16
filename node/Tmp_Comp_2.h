LOCAL MMI_RESULT_E  HandleGetOneValidWinMsg(
										  MMI_WIN_ID_T win_id, 
										  MMI_MESSAGE_ID_E msg_id, 
										  DPARAM param 
										  )
{
    MMI_RESULT_E  result = MMI_RESULT_TRUE; 
	static uint16 s_search_ret  = 0;
	static int32 direct = FM_SCAN_UP;
   
    switch (msg_id)
    {
    case MSG_OPEN_WINDOW:        
        MMIFM_EnableMute();
        s_search_ani_timer_id = MMK_CreateTimer(MMIFM_ANI_TIME, FALSE);
        //chg.
        s_is_start_search = TRUE;
        break;
        
    case MSG_APP_FM_GETSEARCH_PARAM:
        direct = (int)param;
        break;
        
    case MSG_TIMER:
        //ËÑÌ¨¹¦ÄÜ        
        //if (s_search_ani_timer_id == *((uint8 *) param))
        {
            s_search_ret = MMIFM_SearchValidFreq(direct);
            
            if(MMIFM_AUTOSEARCH_END == s_search_ret)
            { 
				//chg.
				HandleGetOneValidWinMsg(win_id, MSG_CLOSE_WINDOW, PNULL);
            }
            else if(MMIFM_AUTOSEARCH_FAIL == s_search_ret)
            {
                //search fail                
				HandleGetOneValidWinMsg(win_id, MSG_APP_FM_FAIL, PNULL);
            } 
            else 
            {  
				// search not complete, just start a timer to serch it
				s_search_ani_timer_id = MMK_CreateTimer(MMIFM_ANI_TIME, FALSE);
            }
        }        
        break;
		
    case MSG_APP_FM_FAIL:
        //search fail
        MMIPUB_OpenAlertWarningWin(TXT_FM_NO_CHANNEL);
		//chg.
		HandleGetOneValidWinMsg(win_id, MSG_CLOSE_WINDOW, PNULL);
		//chg.
		//MMK_SendMsg(win_id, MSG_FULL_PAINT, PNULL);
        break;
	
	case MSG_CLOSE_WINDOW:
	    MMK_StopTimer(s_search_ani_timer_id);						   
        // need re-open FM to stop serching job in FM chip
        if(MMIFM_AUTOSEARCH_NOT_COMPLETE == s_search_ret )            
        {             
            FM_Close();            
            FM_Init();
        }
        //search end
        //MMIFM_DisableMute(); 
        
        // after seek, play it no matter it is valid or not
        MMIFM_Play(FALSE);
        MMIFM_DisableMute();
        s_search_ani_timer_id = 0;
		//chg.
		s_is_start_search = FALSE;
		//chg.
        if(MMIFM_AUTOSEARCH_END == s_search_ret)
        { 
			MMK_SendMsg(win_id, MSG_FULL_PAINT, PNULL);
        }
        s_search_ret  = 0;
        break;
		
    default:
        break;
    }
    
    return result;        
}
