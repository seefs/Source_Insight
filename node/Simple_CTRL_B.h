
Save文件列表：
Save:SI\node\Macro_File.h

// 常用的编辑文件:
//	6531E
Save:SI\node\note\Macro_modis_6531E.h
Save:SI\node\note\Macro_Note_6531E.h
//	tmp
Save:SI\bak\Macro_tmp.h TmpNote
Save:SI\bak\Macro_code_tmp.h

//模拟器：
vc: build\H9_KLS_F4_builddir\win\simulator.dsw
//6531E
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.1\] ImageNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.2\] TextNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.4\] GuiNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[2.2\] WinNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[3.1\] ToolNote


/***********************************************************************/
/********************************临时文件*******************************/
/***********************************************************************/


	  MMK_CreateWin

	  MMIALM_GeEvent




//main
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
//opt
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
	MMK_CreateWin((uint32 *)CALENDAR_OPTION_WIN_TAB, (ADD_DATA)is_weekly);
//go to
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
//list-opt
MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);

//draw:
//DrawMonthCalendar
	//DrawLunarDateOrWeek
	DrawFocusDates
		DrawMonthDate //画当天, 或一月30天
	DrawMonthTitle( calendar_ctrl_ptr );
		DrawTitleBtn
	DrawMonthDates( calendar_ctrl_ptr );
		DrawGrayMonthDate( calendar_ctrl_ptr ); //两边不画
	DrawWeeks
	DrawBackground
		DrawWeekBg

	GetDateRect
		DrawSchdule

//	LOCAL void AddMemoTex(
//								MMI_CTRL_ID_T		ctrl_id
//								)
//	{
//		uint32	list_total_num = GUILIST_GetTotalItemNum(ctrl_id);
//	
//		if (list_total_num >= MMIMEMO_LIST_MAX_NUM)
//		{
//			MMIPUB_OpenAlertWarningWin(TXT_SMS_FULL_LIST);
//			return;
//		}
//		
//		MMK_CreateWin((uint32*)MMIMEMO_EDIT_WIN_TAB, (ADD_DATA)TRUE);
//	}

	
//	if(0 < GUILIST_GetTotalItemNum(ctrl_id))
//	{
//		MMK_CreateWin((uint32*)MMIMEMO_READ_WIN_TAB, PNULL);
//	}

	PUBLIC void MMIAPICL_OpenCLWindow(void)
{
}
	
	MMK_CreateWin((uint32 *)CALENDAR_DAILY_WIN_TAB,PNULL);


//create
    MMK_CreateWin((uint32 *)SCH_EDIT_WIN_TAB, win_param);
//view
    MMK_CreateWin((uint32 *)SCH_VIEW_WIN_TAB, s_list_param);
//go to
 	MMK_CreateWin((uint32 *)CALENDAR_QUERY_WIN_TAB, add_data_ptr);


//week day
	MMK_CreateWin((uint32 *)CALENDAR_WEEKLY_WIN_TAB, PNULL);
	MMK_CreateWin((uint32 *)CALENDAR_DAILY_WIN_TAB,PNULL);

//clear
MMIPUB_OpenQueryWinByTextId(TXT_CALENDAR_CLEAR_TODAY,IMAGE_PUBWIN_QUERY,PNULL,PNULL);
MMIPUB_OpenQueryWinByTextId(TXT_DELETE,IMAGE_PUBWIN_QUERY,PNULL,HandleListDelQueryWin);
//edit
MMK_CreateWin((uint32 *)SCH_EDIT_WIN_TAB, (ADD_DATA)win_param);







