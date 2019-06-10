LOCAL MMI_RESULT_E HandleEditSchWinMsg( 
                                       MMI_WIN_ID_T	    win_id, 
                                       MMI_MESSAGE_ID_E	msg_id, 
                                       DPARAM           param
                                       )
{
	MMI_RESULT_E	            recode          = MMI_RESULT_TRUE;
	MMISCH_DETAIL_WIN_PARAM_T   *win_param      = NULL;
	MMIACC_SMART_EVENT_T        *event          = NULL;
	SCI_DATE_T                  cur_date        = {0};
	SCI_TIME_T                  cur_time        = {0};
	SCI_DATE_T                  second_date     = {0};
	SCI_TIME_T                  second_time     = {0};
	SCI_DATE_T					deadline        = {0};
	GUI_LCD_DEV_INFO			lcd_dev_info    = {GUI_MAIN_LCD_ID, GUI_BLOCK_MAIN};
// 	GUI_RECT_T                  bk_rect         = MMITHEME_GetClientRect();
	MMI_CTRL_ID_T               ctrl_id         = 0;
	//static GUI_POINT_T          s_last_point = {0};  
	SCI_DATE_T                  start_date        = {0};
	SCI_TIME_T                  start_time        = {0};
	SCI_DATE_T                  min_date        = {0};
	SCI_TIME_T                  min_time        = {0};
//#ifdef MMI_PDA_SUPPORT
    uint16                      img_width  = 0;
    uint16                      img_height = 0;
    GUIFORM_CHILD_WIDTH_T       button_width = {0};
    GUIFORM_CHILD_HEIGHT_T      button_height = {0};
//#endif
#ifndef MMI_GUI_STYLE_MINISCREEN
    GUI_BG_T bg={0};
#endif

	min_date.year =MMICOM_DATE_MIN_YEAR;
	min_date.mon = 1;
	min_date.mday = 1;

	lcd_dev_info.lcd_id = GUI_MAIN_LCD_ID;
	lcd_dev_info.block_id = GUI_BLOCK_MAIN;	

	win_param = (MMISCH_DETAIL_WIN_PARAM_T *) MMK_GetWinAddDataPtr(win_id);
	//SCI_ASSERT(NULL != win_param);/*assert verified*/
    if(PNULL == win_param)
    {
        return recode;
    }
	event = &win_param->event;
    
	switch(msg_id)
	{
	case MSG_OPEN_WINDOW:	
//#ifdef MMI_PDA_SUPPORT
#ifndef MMI_PDA_SUPPORT
		GUIFORM_SetCircularHandleUpDown(MMISCH_EDIT_WIN_FORM_CTRL_ID,TRUE);
#endif
        GUIFORM_SetType(MMISCH_EDIT_WIN_FORM_CTRL_ID,GUIFORM_TYPE_TP);
        //GUIEDIT_SetAlign(MMISCH_DATE_EDIT_CTRL_ID,ALIGN_LVMIDDLE);
        //GUIEDIT_SetAlign(MMISCH_TIME_EDIT_CTRL_ID,ALIGN_LVMIDDLE);
        //GUIEDIT_SetAlign(MMISCH_DEADLINE_EDIT_CTRL_ID,ALIGN_LVMIDDLE);
        GUISETLIST_SetFontAlign(MMISCH_FREQ_SETLIST_CTRL_ID,ALIGN_LVMIDDLE);
//#endif
		event->event_fast_info.year = event->event_fast_info.start_year;
		event->event_fast_info.mon  = event->event_fast_info.start_mon;
		event->event_fast_info.day = event->event_fast_info.start_day;
		SetFreqSetList(event);
//#ifdef MMI_PDA_SUPPORT
        GUIFORM_SetStyle(MMISCH_RECORD_RING_FORM_CTRL_ID, GUIFORM_STYLE_UNIT);
        GUIAPICTRL_SetState( MMISCH_RECORD_RING_FORM_CTRL_ID, GUICTRL_STATE_DISABLE_TP,TRUE );
#ifdef MMI_GUI_STYLE_MINISCREEN
        GUIRES_GetImgWidthHeight(&img_width, &img_height, IMAGE_DROPDOWNLIST_ARROW_PR, win_id);
#else
        GUIRES_GetImgWidthHeight(&img_width, &img_height, IMG_SCH_RECORD_ICON, win_id);
#endif
        button_width.add_data = img_width;
        button_width.type = GUIFORM_CHILD_WIDTH_FIXED;
        button_height.add_data = img_height;
        button_height.type = GUIFORM_CHILD_HEIGHT_FIXED;
#ifdef MMI_GUI_STYLE_MINISCREEN
        GUIFORM_SetChildWidth(MMISCH_FREQ_FORM_CTRL_ID, MMISCH_FREQ_TYPE_BUTTON_CTRL_ID, &button_width);
        GUIFORM_SetChildHeight(MMISCH_FREQ_FORM_CTRL_ID, MMISCH_FREQ_TYPE_BUTTON_CTRL_ID, &button_height);
#else
        GUIFORM_SetChildWidth(MMISCH_RING_FORM_CTRL_ID, MMISCH_RECORD_RING_BUTTON_CTRL_ID, &button_width);
        GUIFORM_SetChildHeight(MMISCH_RING_FORM_CTRL_ID, MMISCH_RECORD_RING_BUTTON_CTRL_ID, &button_height);

        GUIBUTTON_SetCallBackFunc(MMISCH_RECORD_RING_BUTTON_CTRL_ID, RecordCalendarRingCallBack);
        GUIBUTTON_SetRunSheen(MMISCH_RECORD_RING_BUTTON_CTRL_ID,FALSE);
        bg.bg_type=GUI_BG_IMG;
        bg.img_id=IMG_SCH_RECORD_ICON;
        GUIBUTTON_SetPressedBg(MMISCH_RECORD_RING_BUTTON_CTRL_ID,&bg);
#endif
#ifndef MMI_PDA_SUPPORT
		SetSchEditWinNameParam(event);
		SetSchEditWinDateParam(event);
		SetSchEditWinTimeParam(event);
		SetSchEditWinDeadlineParam(event);
        GUIEDIT_SetAlign(MMISCH_DATE_EDIT_CTRL_ID,ALIGN_LVMIDDLE);
        GUIEDIT_SetAlign(MMISCH_TIME_EDIT_CTRL_ID,ALIGN_LVMIDDLE);
        GUIEDIT_SetAlign(MMISCH_DEADLINE_EDIT_CTRL_ID,ALIGN_LVMIDDLE);
#endif
        SetSchEditWinFreqTypeParam();
		SetSchEditWinRingParam(event);
		SetSchEditWinWeeklistParam(event, win_id);
		SetSchEditWinDeadlineDisplay();
		SetSchEditWinWeeklistDisplay();
		MMK_SetAtvCtrl(win_id, MMISCH_NAME_FORM_CTRL_ID);
		break;
	    
	case MSG_FULL_PAINT:
#ifdef MMI_PDA_SUPPORT
        SetSchEditWinNameParam(event);
		SetSchEditWinDateParam(event);
		SetSchEditWinTimeParam(event);
		SetSchEditWinDeadlineParam(event);
         if(ALM_MODE_EVERYWEEK==GUISETLIST_GetCurIndex(MMISCH_FREQ_SETLIST_CTRL_ID))
         {
            wchar buff[GUILIST_STRING_MAX_NUM + 1] = {0};
            MMI_STRING_T str={0};
            str.wstr_len=MMIAPIALARM_GetFreModeString(ALM_MODE_EVERYWEEK,event->event_fast_info.fre,buff,GUILIST_STRING_MAX_NUM+1);
            str.wstr_ptr=buff;
            GUISETLIST_SetDispText(MMISCH_FREQ_SETLIST_CTRL_ID,&str,FALSE);
         }
#endif
		break;
	case MSG_GET_FOCUS:
		SetSchEditWinRingParam(event);
		break;
	    
	case MSG_KEYDOWN_CANCEL:
	case MSG_CTL_CANCEL:
		MMK_CloseWin(MMICALENDAR_OPTION_WIN_ID);
		MMK_CloseWin(MMISCH_LIST_OPTION_WIN_ID);
		MMK_CloseWin(MMISCH_ALL_LIST_OPTION_WIN_ID);
		MMK_CloseWin(MMISCH_OPTION_WIN_ID);
		MMK_CloseWin(win_id);
	    	break;
			
		
	case MSG_NOTIFY_FORM_SWITCH_ACTIVE:
		ctrl_id = MMK_GetActiveCtrlId(win_id);
		HandleSchEditFormSwitchActiveMsg(win_id,ctrl_id);
		break;
    
	case MSG_CTL_OK:    
	case MSG_APP_OK:
    #if defined( SBD_KBD_NO_WEB_KEY )
        if( DisplaySCHEditOption(win_id ))
        {
            break;
        }
    case MSG_APP_S:
    #endif
#ifndef MMI_PDA_SUPPORT
		if(!SaveSchEditWinName(event))
		{
			break;
		}
		if(!SaveSchEditWinDate(event))
		{
			break;
		}
		if(!SaveSchEditWinTime(event))
		{
			break;
		}
#endif	
		SaveSchEditWinFreqMode(event);
		
		if(event->event_fast_info.fre_mode == ALM_MODE_EVERYWEEK)
		{
			if(!SCHSaveFreEditWin(event))
			{
				break;
			}
		}
		
		if(ALM_MODE_ONCE != event->event_fast_info.fre_mode && ALM_MODE_NO != event->event_fast_info.fre_mode)
		{
#ifndef MMI_PDA_SUPPORT
			if(!SaveSchEditWinDeadlineDate(event))
			{
				break;
			}
#endif
		}
		else
		{
			event->event_fast_info.end_year = event->event_fast_info.year;
			event->event_fast_info.end_mon = event->event_fast_info.mon;
			event->event_fast_info.end_day = event->event_fast_info.day;
		}
		
		event->event_fast_info.start_year = event->event_fast_info.year;
		event->event_fast_info.start_mon  = event->event_fast_info.mon;
		event->event_fast_info.start_day = event->event_fast_info.day;		
		TM_GetSysDate(&cur_date);
		TM_GetSysTime(&cur_time);
		event->event_content_info.image_id = IMAGE_SCHEDULE_ARRANGE_01;
		second_date.year = event->event_fast_info.year;
		second_date.mon  = event->event_fast_info.mon;
		second_date.mday = event->event_fast_info.day;
		second_time.hour = event->event_fast_info.hour;
		second_time.min = event->event_fast_info.minute;
		second_time.sec = 0;
		start_date.year = event->event_fast_info.start_year;
		start_date.mon = event->event_fast_info.start_mon;
		start_date.mday = event->event_fast_info.start_day;

		if(CMP_FIRST_SMALL == MMIAPIALM_CompareDateAndTime(start_date,start_time,min_date,min_time))
		{
			MMIPUB_OpenAlertWarningWin(TXT_DATE_IS_PAST);
			break;
		}
		if(ALM_MODE_ONCE == event->event_fast_info.fre_mode)
		{
			// 判断时间是否过期
			if (MMIAPIALM_CompareDateAndTime(cur_date, cur_time, second_date, second_time) == CMP_FIRST_SMALL)
			{
				deadline.year = event->event_fast_info.end_year;
				deadline.mon= event->event_fast_info.end_mon;
				deadline.mday= event->event_fast_info.end_day;
				second_date.year = event->event_fast_info.year;
				second_date.mon  = event->event_fast_info.mon;
				second_date.mday = event->event_fast_info.day;			
				if (IsValidDeadline(deadline, second_date))
				{			
					MMK_PostMsg(win_param->win_id, MSG_SCH_EVENT_EDIT_FINISH, PNULL, 0);
					MMK_PostMsg(MMISCH_VIEW_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
					MMK_PostMsg(MMISCH_VIEW_ALL_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
#ifdef SCH_ASSISTANT_WIDGET
                    if(!MMIAPIWIDGET_GetScheduleWidgetFlag())
                    {   
#ifdef MMI_GRID_IDLE_SUPPORT
                        if(MMISET_IDLE_STYLE_GRID==MMIAPISET_GetIdleStyle())
                        {
                            MMIPUB_OpenAlertWarningWin(TXT_SCH_ADD_SCH_ASSIITANT);
                            MMIAPIGRID_AddNewWidget(MMIWIDGET_SCHEDULE_ID);
                        }
#endif
#ifdef QBTHEME_SUPPORT
                        //if(MMISET_IDLE_QBTHEME==MMIAPISET_GetIdleStyle())
                        //{
                        //    MMIPUB_OpenAlertWarningWin(TXT_SCH_ADD_SCH_ASSIITANT);
                        //    MMIQBIDLE_AddNewWidget(MMIWIDGET_SCHEDULE_ID);
                        //}
#endif


                        MMIAPIWIDGET_SetScheduleWidgetFlag(TRUE);
                    }
#endif
					MMK_CloseWin(win_id);
				}
				else
				{
					MMIPUB_OpenAlertWarningWin(TXT_SCH_INVALID_DEADLINE);
				}
			}
			else
			{
				MMIPUB_OpenAlertWarningWin(TXT_DATE_IS_PAST);
			}
		}
		else if (ALM_MODE_EVERYWEEK == event->event_fast_info.fre_mode)
		{
			uint8  i = 0;
			uint8  offset_day = 0;
// 			uint16 sel_count = 0;

			if (ALM_MODE_EVERYWEEK == event->event_fast_info.fre_mode)
			{
				if (0 == event->event_fast_info.fre)
				{
					MMIPUB_OpenAlertWarningWin(TXT_ALARM_SELECT_ONE_DAY);
					return recode;
				}
			}
            second_date.wday=MMICALENDAR_GetWeekday(second_date.year,second_date.mon,second_date.mday);
			if (MMIAPIALM_CompareDateAndTime(second_date, cur_time, second_date, second_time) <= CMP_FIRST_SMALL)
			{
				offset_day = MMIAPIALM_RoundWeek(second_date.wday, event->event_fast_info.fre, CMP_FIRST_SMALL);
			}
			else
			{
				offset_day = MMIAPIALM_RoundWeek(second_date.wday, event->event_fast_info.fre, CMP_SECOND_SMALL);
			}

			for (i=0; i <offset_day; i++)
			{
				if ((QUERY_YEAR_TOP == second_date.year) && (SCH_DECEMBER == second_date.mon) && (BIG_MONTH_DAY == second_date.mday))
				{
					break;
				}
				MMIAPIALM_IncreaseDateByOne(&second_date);
			}
			// 计算后的日期
			event->event_fast_info.day = second_date.mday;
			event->event_fast_info.year = second_date.year;
			event->event_fast_info.mon = second_date.mon;
			
			event->event_fast_info.start_year = event->event_fast_info.year;
			event->event_fast_info.start_mon  = event->event_fast_info.mon;
			event->event_fast_info.start_day = event->event_fast_info.day;
			// 比较的日期
			second_date.year = event->event_fast_info.year;
			second_date.mon  = event->event_fast_info.mon;
			second_date.mday = event->event_fast_info.day;
			second_time.hour = event->event_fast_info.hour;
			second_time.min = event->event_fast_info.minute;
			// 判断时间是否过期
			TM_GetSysDate(&cur_date); 
			if (MMIAPIALM_CompareDateAndTime(cur_date, cur_time, second_date, second_time) == CMP_FIRST_SMALL)
			{
				deadline.year = event->event_fast_info.end_year;
				deadline.mon= event->event_fast_info.end_mon;
				deadline.mday= event->event_fast_info.end_day;
				second_date.year = event->event_fast_info.year;
				second_date.mon  = event->event_fast_info.mon;
				second_date.mday = event->event_fast_info.day;			
				if (IsValidDeadline(deadline, second_date))
				{			
					MMK_PostMsg(win_param->win_id, MSG_SCH_EVENT_EDIT_FINISH, PNULL, 0);
					MMK_PostMsg(MMISCH_VIEW_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0); 
					MMK_PostMsg(MMISCH_VIEW_ALL_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
#ifdef SCH_ASSISTANT_WIDGET
                    if(!MMIAPIWIDGET_GetScheduleWidgetFlag())
                    {   

#ifdef MMI_GRID_IDLE_SUPPORT
                        if(MMISET_IDLE_STYLE_GRID==MMIAPISET_GetIdleStyle())
                        {
                            MMIPUB_OpenAlertWarningWin(TXT_SCH_ADD_SCH_ASSIITANT);
                            MMIAPIGRID_AddNewWidget(MMIWIDGET_SCHEDULE_ID);
                        }
#endif
#ifdef QBTHEME_SUPPORT
                        //if(MMISET_IDLE_QBTHEME==MMIAPISET_GetIdleStyle())
                        //{
                        //    MMIPUB_OpenAlertWarningWin(TXT_SCH_ADD_SCH_ASSIITANT);
                        //    MMIQBIDLE_AddNewWidget(MMIWIDGET_SCHEDULE_ID);
                        //}
#endif
                        MMIAPIWIDGET_SetScheduleWidgetFlag(TRUE);
                    }
#endif

					MMK_CloseWin(win_id);
				}
				else
				{
					MMIPUB_OpenAlertWarningWin(TXT_SCH_INVALID_DEADLINE);
				}
			}
			else
			{
				MMIPUB_OpenAlertWarningWin(TXT_DATE_IS_PAST);
			}
		}
		else
		{
			deadline.year = event->event_fast_info.end_year;
			deadline.mon= event->event_fast_info.end_mon;
			deadline.mday= event->event_fast_info.end_day;
			second_date.year = event->event_fast_info.year;
			second_date.mon  = event->event_fast_info.mon;
			second_date.mday = event->event_fast_info.day;			
			if (CMP_SECOND_SMALL == CompareDate(deadline, second_date))
			{	
				MMK_PostMsg(win_param->win_id, MSG_SCH_EVENT_EDIT_FINISH, PNULL, 0);
				MMK_PostMsg(MMISCH_VIEW_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
				MMK_PostMsg(MMISCH_VIEW_ALL_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
				MMK_CloseWin(win_id);
			}
			else if (CMP_EQUAL == CompareDate(deadline, second_date))
			{
    			if(MMIAPIALM_CompareDateAndTime(cur_date, cur_time, second_date, second_time) == CMP_FIRST_SMALL)
    			{
    				MMK_PostMsg(win_param->win_id, MSG_SCH_EVENT_EDIT_FINISH, PNULL, 0);
    				MMK_PostMsg(MMISCH_VIEW_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
    				MMK_PostMsg(MMISCH_VIEW_ALL_WIN_ID, MSG_SCH_LIST_UPDATE, PNULL, 0);
#ifdef SCH_ASSISTANT_WIDGET
                    if(!MMIAPIWIDGET_GetScheduleWidgetFlag())
                    {   
#ifdef MMIWIDGET_SUPPORT                      
                     // MMIAPIWIDGET_AddDynamicItem(MMMIWIDGET_CTRL_IDLE_ID,
                      //                  MMIWIDGET_SCHEDULE_ID,FALSE,FALSE);
#endif
#ifdef MMI_GRID_IDLE_SUPPORT
                        if(MMISET_IDLE_STYLE_GRID==MMIAPISET_GetIdleStyle())
                        {
                            MMIPUB_OpenAlertWarningWin(TXT_SCH_ADD_SCH_ASSIITANT);
                            MMIAPIGRID_AddNewWidget(MMIWIDGET_SCHEDULE_ID);
                        }
#endif
#ifdef QBTHEME_SUPPORT
                        //if(MMISET_IDLE_QBTHEME==MMIAPISET_GetIdleStyle())
                        //{
                        //    MMIPUB_OpenAlertWarningWin(TXT_SCH_ADD_SCH_ASSIITANT);
                        //    MMIQBIDLE_AddNewWidget(MMIWIDGET_SCHEDULE_ID);
                        //}
#endif

                        MMIAPIWIDGET_SetScheduleWidgetFlag(TRUE);
                    }
#endif

    				MMK_CloseWin(win_id);
    			}                
    			else
    			{
    				MMIPUB_OpenAlertWarningWin(TXT_DATE_IS_PAST);
    			}
			}
			else
			{
				MMIPUB_OpenAlertWarningWin(TXT_SCH_INVALID_DEADLINE);
			}
		}
#if (defined FM_SUPPORT) && (defined MMI_FM_NEED_HEADSET)//cr132759
		if(ALM_FM_RING == event->event_content_info.ring_type)
		{
			MMIPUB_OpenAlertWarningWin(TXT_ALARM_FM_SAVE_PROMPT);
        }
#endif
		break;

	case MSG_CTL_MIDSK:          
	case MSG_APP_WEB:
		//HandleSchEditWinWebKeyMsg(win_id, win_param);+
        ctrl_id= MMK_GetActiveCtrlId(win_id);
        HandleSCHEditPENOKMsg(win_id,ctrl_id,win_param);
		break;
		
#ifdef TOUCH_PANEL_SUPPORT //IGNORE9527
	case MSG_CTL_PENOK:
		ctrl_id= ((MMI_NOTIFY_T*) param)->src_id;
		HandleSCHEditPENOKMsg(win_id,ctrl_id,win_param);
		break;
#endif //TOUCH_PANEL_SUPPORT //IGNORE9527

	case MMI_MSG_RECORDTORING:
        {
			MMI_CTRL_ID_T       label_ctrl_id = MMISCH_RING_LABEL_CTRL_ID;
			MMI_STRING_T        ring_name = {0};
			if(PNULL != param)
			{       
                ring_name.wstr_ptr = (wchar*)param;
                ring_name.wstr_len = MMIAPICOM_Wstrlen(ring_name.wstr_ptr);
                SCI_MEMSET(event->event_ring_info.dring_name_arr,0,(MMIFILE_FULL_PATH_MAX_LEN+1)*sizeof(wchar));
                event->event_ring_info.dring_name_len = ring_name.wstr_len;
                MMIAPICOM_Wstrncpy(event->event_ring_info.dring_name_arr, ring_name.wstr_ptr, ring_name.wstr_len);
                SCI_MEMSET(ring_name.wstr_ptr,0,ring_name.wstr_len * sizeof(wchar));
                
                MMIAPIFMM_SplitFullPath(event->event_ring_info.dring_name_arr, event->event_ring_info.dring_name_len, PNULL, PNULL, PNULL, PNULL, ring_name.wstr_ptr, &ring_name.wstr_len);

                GUILABEL_SetText(label_ctrl_id, &ring_name, FALSE);                
                event->event_content_info.ring_type = ALM_RECORD_RING;
			}
            MMK_CloseWin(MMISCH_RINGLIST_WIN_ID);
		}
	    break;
	    
	case MSG_CLOSE_WINDOW:
#ifndef MMI_GUI_STYLE_MINISCREEN
		if(MMK_IsOpenWin(MMISCH_VIEW_DETAIL_WIN_ID))
		{
        	MMK_CloseWin(MMISCH_VIEW_DETAIL_WIN_ID);
		}
#endif
        break;


	default:
		recode = MMI_RESULT_FALSE;
		break;
    }
    
    return recode;
}
