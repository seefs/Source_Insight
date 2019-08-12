LOCAL MMI_RESULT_E  HandleSearchValidFreqWinMsg(
                                           MMI_WIN_ID_T win_id, 
                                           MMI_MESSAGE_ID_E msg_id, 
                                           DPARAM param 
                                           )
{
    MMI_RESULT_E  result = MMI_RESULT_TRUE; 
    static uint8  s_ani_timer_id = 0;
    static uint16 s_search_ret  = 0;
    static int32 direct = FM_SCAN_UP;
    
    switch (msg_id)
    {
    case MSG_OPEN_WINDOW:        
        MMIFM_EnableMute();
#ifdef MMI_PDA_SUPPORT
        MMIPUB_SetWinSoftkey(win_id,  TXT_NULL,  STXT_CANCEL, FALSE);
#else
        GUIWIN_SetSoftkeyTextId(win_id,  TXT_NULL, TXT_NULL, STXT_RETURN, FALSE);
#endif
        s_ani_timer_id = MMK_CreateTimer(MMIFM_ANI_TIME, FALSE);
        break;
        
    case MSG_APP_FM_GETSEARCH_PARAM:
        direct = (int)param;
        break;
        
    case MSG_TIMER:
        //ËÑÌ¨¹¦ÄÜ        
        if (s_ani_timer_id == *((uint8 *) param))
        {
            s_search_ret = MMIFM_SearchValidFreq(direct);
            
            if(MMIFM_AUTOSEARCH_END == s_search_ret)
            { 
                MMK_CloseWin(win_id);
            }
            else if(MMIFM_AUTOSEARCH_FAIL == s_search_ret)
            {
                //search fail                
                MMK_SendMsg(win_id, MSG_APP_FM_FAIL, PNULL);
            } 
            else 
            {  
               // search not complete, just start a timer to serch it
               s_ani_timer_id = MMK_CreateTimer(MMIFM_ANI_TIME, FALSE);
               
            }
        }        
        break;

    case MSG_KEYDOWN_UPSIDE:
    case MSG_KEYDOWN_DOWNSIDE:
        break;
        
    case MSG_APP_CANCEL:
        //SCI_TRACE_LOW:"HandleSearchValidFreqWinMsg  MSG_APP_CANCEL"
        SCI_TRACE_ID(TRACE_TOOL_CONVERT,MMIFM_WINTAB_4210_112_2_18_2_19_36_78,(uint8*)"");
        MMK_CloseWin(win_id);
        break;
    case MSG_APP_FM_FAIL:
        //search fail
        MMIPUB_OpenAlertWarningWin(TXT_FM_NO_CHANNEL);
        MMK_CloseWin(win_id);
        break;
		
    case MSG_CLOSE_WINDOW:
        MMK_StopTimer(s_ani_timer_id);                          
        //SCI_TRACE_LOW:"[MMIFM]HandleSearchValidFreqWinMsg s_search_ret %d"
        SCI_TRACE_ID(TRACE_TOOL_CONVERT,MMIFM_WINTAB_4220_112_2_18_2_19_36_79,(uint8*)"d",s_search_ret);
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
        result = MMIPUB_HandleWaitWinMsg(win_id, msg_id, param);
        s_ani_timer_id = 0;
        s_search_ret  = 0;
		#ifdef MMIFM_SUPPORT_FM_RECORD
    	#if defined(SBD_FM_OPEN_WITH_RECORD)
		RecordAfterSearch();
		#endif
		#endif
        break;
		
    default:
        result = MMIPUB_HandleWaitWinMsg(win_id, msg_id, param);;
        break;
    }
    
    return result;        
}
