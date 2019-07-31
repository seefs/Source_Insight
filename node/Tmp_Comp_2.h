LOCAL void SetEditWinButtonBg(MMI_HANDLE_T    win_id,uint32 ctrl_id)
{
    uint32 i=0;
    GUI_BG_T  bg={0};
    GUI_FONT_ALL_T  enabled_font={0};    
    GUI_FONT_ALL_T  disabled_font={0};

    enabled_font.color=MMI_WHITE_COLOR;
#ifdef SBD_ALARM_EDIT_WIN_BUTTON_FONT12
    enabled_font.font=SONG_FONT_12;
#else
#ifdef MAINLCD_SIZE_320X480
    enabled_font.font=SONG_FONT_20;
#elif defined MAINLCD_SIZE_128X160
    enabled_font.font=SONG_FONT_14;
#else
    enabled_font.font=SONG_FONT_16;
#endif
#endif
    disabled_font.color=MMI_GRAY_COLOR;
#ifdef SBD_ALARM_EDIT_WIN_BUTTON_FONT12
    disabled_font.font=SONG_FONT_12;
#else
#ifdef MAINLCD_SIZE_320X480
    disabled_font.font=SONG_FONT_20;
#elif defined MAINLCD_SIZE_128X160
    disabled_font.font=SONG_FONT_14;
#else
    disabled_font.font=SONG_FONT_16;
#endif
#endif
#ifdef SBD_CHANGE_ALARM_WEEK_TEXT
	enabled_font.font=SONG_FONT_10;
	disabled_font.font=SONG_FONT_10;
#elif defined(SBD_ALARM_WEEK_TEXT_FONT_12)//wangfayang alarm week text font12 20180124
	enabled_font.font=SONG_FONT_12;
	disabled_font.font=SONG_FONT_12;
#elif defined(SBD_H9_KLS_ALARM)
    enabled_font.color = ~MMITHEME_GetCurThemeFontColor(MMI_THEME_LABEL_FONT);
	enabled_font.font=SONG_FONT_9;
    disabled_font.color = MMITHEME_GetCurThemeFontColor(MMI_THEME_LABEL_FONT);
	disabled_font.font=SONG_FONT_9;
#endif
    bg.bg_type=GUI_BG_IMG;
    for(i=0;i<ALM_WEEK_DAY_NUM;i++)
    {
#ifdef SBD_H9_KLS_ALARM
		//只有部分week显示背景, 和字体分开设置
        if(s_week_is_active)
        {          
            GUIBUTTON_SetFont(MMI_EDITWIN_BUTTON0_CTRL_ID+i, &enabled_font);
        }
        else
        {        
            GUIBUTTON_SetFont(MMI_EDITWIN_BUTTON0_CTRL_ID+i, &disabled_font);
        }
		//部分week显示背景
        if(s_weeks_button_is_selected[i])
        {
	        if(s_week_is_active)
	        {
	            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_ENABLED;            
	        }
	        else
	        {
	            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_DISABLED;            
	        }
        	GUIBUTTON_SetBg(MMI_EDITWIN_BUTTON0_CTRL_ID+i, &bg);
        }
#else
        if(s_weeks_button_is_selected[i])
        {
            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_ENABLED;            
            GUIBUTTON_SetFont(MMI_EDITWIN_BUTTON0_CTRL_ID+i, &enabled_font);
        }
        else
        {
            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_DISABLED;            
            GUIBUTTON_SetFont(MMI_EDITWIN_BUTTON0_CTRL_ID+i, &disabled_font);
        }
#ifndef MMI_PDA_SUPPORT
        if(ctrl_id==MMI_EDITWIN_BUTTON0_CTRL_ID+i)
        {
            bg.img_id=IMAGE_CLOCK_ALARM_WEEK_PRESSED;
        }
#endif
        GUIBUTTON_SetBg(MMI_EDITWIN_BUTTON0_CTRL_ID+i, &bg);
#endif /* SBD_H9_KLS_ALARM */
#if defined(SBD_ALARM_EDIT_WIN_BUTTON_TEXT_ALIGN_VMIDDLE) || defined(SBD_H9_KLS_ALARM)
        GUIBUTTON_SetTextAlign(MMI_EDITWIN_BUTTON0_CTRL_ID+i, ALIGN_VMIDDLE);
#elif defined(SBD_ALARM_EDIT_WIN_BUTTON_TEXT_ALIGN_BOTTOM)//wangfayang alarm week text align bottom 20180124
        GUIBUTTON_SetTextAlign(MMI_EDITWIN_BUTTON0_CTRL_ID+i, ALIGN_BOTTOM);
#endif
        GUIBUTTON_Update(MMI_EDITWIN_BUTTON0_CTRL_ID+i);
    }
    
}
