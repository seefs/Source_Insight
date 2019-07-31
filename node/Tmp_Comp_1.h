LOCAL void SetWeeksParamEditWin(MMI_WIN_ID_T      win_id)
{
    uint8 day_num=0;
    uint8   week_day =0;
//  MMI_STRING_T string={0};
    uint32 ctrl_id[]={  MMI_EDITWIN_BUTTON0_CTRL_ID,
                        MMI_EDITWIN_BUTTON1_CTRL_ID,
                        MMI_EDITWIN_BUTTON2_CTRL_ID,
                        MMI_EDITWIN_BUTTON3_CTRL_ID,
                        MMI_EDITWIN_BUTTON4_CTRL_ID,
                        MMI_EDITWIN_BUTTON5_CTRL_ID,
                        MMI_EDITWIN_BUTTON6_CTRL_ID,
                    };
    GUIFORM_CHILD_WIDTH_T  width={0}; 
    GUI_BG_T  bg={0};
    GUI_FONT_ALL_T  enabled_font={0};    
    GUI_FONT_ALL_T  disabled_font={0};
    uint16 hor_space = 0;
    uint16 image_width = 0;
    uint16 image_height = 0;
    GUI_BORDER_T border = {0};
   
    bg.bg_type=GUI_BG_IMG;
    enabled_font.color=MMI_WHITE_COLOR;
#ifdef MAINLCD_SIZE_320X480
    enabled_font.font=SONG_FONT_20;
#elif defined MAINLCD_SIZE_128X160
    enabled_font.font=SONG_FONT_14;
#else
    enabled_font.font=SONG_FONT_16;
#endif
    disabled_font.color=MMI_GRAY_COLOR;
#ifdef MAINLCD_SIZE_320X480
    disabled_font.font=SONG_FONT_20;
#elif defined MAINLCD_SIZE_128X160
    disabled_font.font=SONG_FONT_14;
#else
    disabled_font.font=SONG_FONT_16;
#endif
#ifdef SBD_CHANGE_ALARM_WEEK_TEXT
	disabled_font.font=SONG_FONT_10;
	enabled_font.font=SONG_FONT_10;
#elif defined(SBD_ALARM_WEEK_TEXT_FONT_12)//wangfayang alarm week text font12 20180124
	enabled_font.font=SONG_FONT_12;
	disabled_font.font=SONG_FONT_12;
#elif defined(SBD_H9_KLS_ALARM)
    enabled_font.color = ~MMITHEME_GetCurThemeFontColor(MMI_THEME_LABEL_FONT);
	enabled_font.font=SONG_FONT_9;
    disabled_font.color = MMITHEME_GetCurThemeFontColor(MMI_THEME_LABEL_FONT);
	disabled_font.font=SONG_FONT_9;
#endif
    GUIRES_GetImgWidthHeight(&image_width, &image_height, IMAGE_CLOCK_ALARM_WEEK_ENABLED, win_id);

#if defined(SBD_TOOLS_ALARM_WEEK_WIDTH_TYPE_AUTO)//wangfayang alarm week child width auto 20180124
    width.type=GUIFORM_CHILD_WIDTH_AUTO;
#else
    width.type=GUIFORM_CHILD_WIDTH_FIXED;
#endif
    width.add_data = image_width;
#if defined(SBD_H9_KLS_ALARM) 
	//设置周模式默认为当前天
	UpdateModeWeeksParam();
	hor_space = 3;
#endif
    GUIFORM_SetSpace(MMI_EDITWIN_CHILD_FORM_CTRL_ID, &hor_space, PNULL);    
    GUIFORM_SetMargin(MMI_EDITWIN_CHILD_FORM_CTRL_ID,0);  
    GUIFORM_PermitChildFont(MMI_EDITWIN_CHILD_FORM_CTRL_ID, FALSE);    
    border.type = GUI_BORDER_NONE;
    IGUICTRL_SetBorder(MMK_GetCtrlPtr(MMI_EDITWIN_CHILD_FORM_CTRL_ID), &border);
    
    for(day_num = 0; day_num < ALM_WEEK_DAY_NUM; day_num++)   
    {
        week_day = MMIAPISET_GetWeekDayByOffset(day_num );
#ifdef MAINLCD_DEV_SIZE_128X160
#if defined(SBD_ALARM_EDIT_WIN_BUTTON_TEXT_ALIGN_BOTTOM)//wangfayang alarm week text align bottom 20180124
        GUIBUTTON_SetTextAlign(ctrl_id[day_num],ALIGN_BOTTOM);
#elif defined(SBD_ALARM_EDIT_WIN_BUTTON_TEXT_ALIGN_HVMIDDLE)||defined(SBD_H9_KLS_ALARM)//wangfayang alarm week text align h&v middle 20180124
        GUIBUTTON_SetTextAlign(ctrl_id[day_num],ALIGN_HVMIDDLE);
#else
        GUIBUTTON_SetTextAlign(ctrl_id[day_num],ALIGN_TOP);
#endif
#else
        GUIBUTTON_SetTextAlign(ctrl_id[day_num],ALIGN_HVMIDDLE);
#endif
        GUIBUTTON_SetTextId(ctrl_id[day_num],s_alm_week_text_id[ week_day ]);
#ifdef SBD_H9_KLS_ALARM
        if(s_week_is_active)
        {          
            GUIBUTTON_SetFont(ctrl_id[day_num], &enabled_font);
        }
        else
        {         
            GUIBUTTON_SetFont(ctrl_id[day_num], &disabled_font);
        }
        if(0!=(s_current_event_info.event.event_fast_info.fre & s_week_mask[week_day]) ) 
        {
	        s_weeks_button_is_selected[day_num]=TRUE;   
	        if(s_week_is_active)
	        {
	            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_ENABLED;        
	        }
	        else
	        {
	            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_DISABLED;        
	        }
        	GUIBUTTON_SetBg(ctrl_id[day_num],&bg);
        }
        else
        {         
	        s_weeks_button_is_selected[day_num]=FALSE;    
        }
        GUIBUTTON_PermitBorder(ctrl_id[day_num],FALSE);
        //GUIBUTTON_SetOwnerDraw(ctrl_id[day_num],ButtonOwnerDrawFun); //不画标记图标
#else
        if(0!=(s_current_event_info.event.event_fast_info.fre & s_week_mask[week_day]) ) 
        {
            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_ENABLED;
            s_weeks_button_is_selected[day_num]=TRUE;            
            GUIBUTTON_SetFont(ctrl_id[day_num], &enabled_font);
        }
        else
        {
            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_DISABLED;
            s_weeks_button_is_selected[day_num]=FALSE;            
            GUIBUTTON_SetFont(ctrl_id[day_num], &disabled_font);
        }
        GUIBUTTON_SetBg(ctrl_id[day_num],&bg);
        GUIBUTTON_PermitBorder(ctrl_id[day_num],FALSE);
        GUIBUTTON_SetOwnerDraw(ctrl_id[day_num],ButtonOwnerDrawFun);
        bg.img_id=IMAGE_CLOCK_ALARM_WEEK_PRESSED;
        GUIBUTTON_SetRunSheen(ctrl_id[day_num],FALSE);
        GUIBUTTON_SetPressedBg(ctrl_id[day_num],&bg);        
#endif /* SBD_H9_KLS_ALARM */
        GUIFORM_SetChildWidth(MMI_EDITWIN_CHILD_FORM_CTRL_ID,ctrl_id[day_num],&width);
    }
}
