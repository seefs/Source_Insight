
//目录:
Save:node\C\study\Macro_app_8910other.h \[1.1\] TASK
Save:node\C\study\Macro_app_8910other.h \[1.2\] jewish
Save:node\C\study\Macro_app_8910other.h \[1.3\] browser
Save:node\C\study\Macro_app_8910other.h \[1.4\] TORCH
Save:node\C\study\Macro_app_8910other.h \[1.5\] keyModis
Save:node\C\study\Macro_app_8910other.h \[1.6\] 
Save:node\C\study\Macro_app_8910other.h \[1.7\] 
Save:node\C\study\Macro_app_8910other.h \[1.8\] 
Save:node\C\study\Macro_app_8910other.h \[1.9\] 
Save:node\C\study\Macro_app_8910other.h \[1.10\] 
Save:node\C\study\Macro_app_8910other.h \[1.11\] 
Save:node\C\study\Macro_app_8910other.h \[1.12\] 




[1.1] __TASK__
//
prj:project_{cur}.mk  MMI_TASK_MANAGER    = TRUE
// .task_option_menu

//		==>MMI_OpenAppletManager
//		====>.s_applet_list_ptr
//		======>MMK_CreateAppletInfoList
//		====>.s_applet_list_ptr
//		======>关闭应用
//		======>SetAppletClose


[1.2] __jewish__
// jewish 犹太日历
app:accessory\c
app:accessory\c\mmicalendar_jewish_main.c  HandleJewishCalendarMainWinMsg

//		==>IMAGE_DLS_SUMMER 夏
//		==>IMAGE_DLS_WINTER 冬
images:clock\MMI_RES_DEFAULT\IMAG\JEWISH_CALENDAR\


// jewish show--节日
//		==>DrawJewishCalendarDetail
//		====>
// jewish show--月份
//		==>DrawMonthCalendar
//		====>DrawMonthTitle
//		======>MMICALENDAR_IsHebrewLeapYear
//		====>DrawMonthDates
//		======>MMICALENDAR_Number2Gematria


//		==>日历转换为犹太日历
//		====>MMICALENDAR_Gregorian2Jewish
//		==>犹太日历转换为格里高利历日历(罗马儒略历上增加闰年)
//		====>MMICALENDAR_Gregorian2Jewish

// bug fix:
//		==>MainJewishCalendar_Init
//		====>max,min
//		======>1980-1-1 => 5740-10-12
//		======>2099-1-1 => 5859-10-9
//		====>switch year--,注意月份增加方式   
//		======>2023-2-22 => 5783-12-1 => 2023-2-22
//		======>2023-3-22 => 5783-12-29=> 2023-2-22 (月份增加注意，正好28天遇到29天)
//		======>2023-3-23 => 5783-1-1  => 2023-2-22
//		======>2023-4-23 => 5783-2-2  => 2023-2-22
//		======>2024-4-9  => 5784-1-1  => 2024-4-9
//		====>switch year--
//		======>2023-8-18 => 5783-6-1  => 2023-8-18
//		======>2023-9-15 => 5783-6-29 => 2023-9-15 
//		======>2023-9-16 => 5784-7-1  => 2023-9-16 
//		======>2023-8-16 => 5783-5-29 => 2023-8-18 (月份减出错)
//		====>pre,next
//		======>2022-2-3 => 5782-12-2  => 2022-2-3
//		======>2024-2-3 => 5784-11-24 => 2024-2-3
https://cn.calcuworld.com/%e7%8a%b9%e5%a4%aa%e6%97%a5%e5%8e%86

// jewish select
//		==>left:
//		====>HandleJewishCalKeyLeft
//		==>right:
//		====>HandleJewishCalKeyRight
//		==>choose:
//		====>HandleSelectDateWinMsg


//先不考虑部分天超范围 如 5740-10-11 以前

// jewish enter
app:accessory\c\mmicalendar_main.c  MMIAPICALENDAR_OpenJewishCalMainWin




[1.3] __browser__

### BROWSER, DL
// mk--true
prj:project_{cur}.mk  BROWSER_SUPPORT = TRUE
prj:project_{cur}.mk  BROWSER_SUPPORT_DORADO = TRUE    # 浏览器1 同时开OPERA会有2个浏览器
prj:project_{cur}.mk  OPERA_MINI_SUPPORT     = VER6    # 浏览器2
prj:project_{cur}.mk  OPERA_MINI_SUPPORT     = VER42   # 浏览器3
prj:project_{cur}.mk  BROWSER_ALL_RUNNING_SUPPORT = TRUE   # 107
prj:{cfg}.cfg         BROWSER_ALL_RUNNING_SUPPORT = TRUE   # 8910
// mk--false
prj:project_{cur}.mk  BROWSER_OPERA_START_PAGE = FALSE
prj:project_{cur}.mk  BROWSER_OPERA_FAVORITE_WITH_DEFAULT = FALSE

// 8910      
prj:project_{cur}.mk  BROWSER_OPERA_START_PAGE = TRUE
prj:project_{cur}.mk  BROWSER_SEARCH_SUPPORT = FALSE
//
prj:project_{cur}.mk  OPERA_MINI_SUPPORT = VER42



// browser UI
prj:project_{cur}.mk  BROWSER_INPUT_BIG_FONT_BG_STYLE  = TRUE
prj:project_{cur}.mk  BROWSER_DL_DEFAULT_TCARD         = TRUE
prj:project_{cur}.mk  BROWSER_IN_TOOLMENU              = TRUE # 整理编译报错 107


// Download
prj:project_{cur}.mk  DL_SUPPORT    = TRUE   # 107 FALSE
prj:project_{cur}.mk  OMADL_SUPPORT = TRUE   # 107 FALSE
//
prj:project_{cur}.mk  AUTO_DOWNLOAD_SUPPORT = TRUE   # 107 TRUE


//
prj:project_{cur}.mk  DATACOUNTER_SUPPORT = TRUE  # 8910才有


### __browserImgModis__
//
app:browser/control/src/brw_control_PIC.c uint32^Brw_InitImageListInfo
//#if 1//
//	    {
//	    	BRW_IMAGE_INFO_LIST_T img_add = {0};
//			
//			img_add.image_info.url_ptr = "aaaaa";
//			img_add.image_info.url_len = strlen(img_add.image_info.url_ptr);
//			img_add.image_info.mime_type = BRW_MIME_IMG_PNG;
//			img_add.image_data_ptr = "aaaaa";
//			img_add.image_data_len = strlen(img_add.image_data_ptr);
//			img_add.next = PNULL;
//	        BrwInsertImageItem(&img_add);
//			
//	    }
//#endif

// 关DORADO: CSS_SUPPORT 没开不用管
Makefile.verify  CSS_SUPPORT -> BROWSER_SUPPORT_DORADO

// 关于内存提示 SPCSS00992465
//	因T117项目内存受限，所以给dorado游览器划分的内存为4MB，另外可处理的网页最大size为1MB，
//	当收到的网页数据大小超过1MB，在处理网页解析SSL的时候内存申请buffer失败，提示网页太大，
//	当4MB内存用完后就会提示内存不足。

// SPCSS01103989
//Dorado浏览器在产品规格中配置最大可使用内存为1.5M，不支持js解析

###
patch:node\bug\Macro_bug_107.h  __BROWSER__



[1.4] __TORCH__

// 1.ENG_MANU_TORCH, ENG_MANU_TORCH_PATCH  (软开)
//		==>ID_ENG_TEST_MANU_TORCH
//		====>旧
//		======>(1)上键点亮，下键关闭 (no use)
//		======>(2)侧边开关
//		========>ENG_MANU_TORCH_HELP_STR1
//		====>107新, ENG_MANU_TORCH_107_STYLE
//		======>(1)上键点亮，下键关闭
//		========>TORCH_SUPPORT                #软开
//		======>(2)侧边开关
//		========>ENG_MANU_TORCH_HELP_STR1     #硬开
app:eng\c\mmieng_uitestwin.c  case^ID_ENG_TEST_MANU_TORCH
//		====>8910
//		========>TXT_ENG_TORCHNOTE_HELP_STR1   #硬开
//		========>TXT_ENG_TORCHNOTE             #软开 1line
//		========>TXT_ENG_TORCH_TEST            #软开 2line
//		====>107
//		========>TXT_ENG_TORCHNOTE_HELP_STR1   #硬开
//		========>TXT_ENG_TORCHNOTE             #软开

// 2.MMI_TORCH_LED_SUPPORT (手机默认开, 手表默认关)
//		==>"*#555#"
//		====>ID_ENG_TORCH_LED_TEST
//		======>上键点亮，下键关闭
//		==>单项测试style2 (默认未开)
//		====>ID_ENG_TEST_TORCH_LED
//		======>上键点亮，下键关闭
app:eng\c\mmieng_main.c   case^ID_ENG_TORCH_LED_TEST
//		==>"*#222#"
//		====>UITestTorchLedTestWinHandleMsg
app:eng\c\mmieng_uitestwin.c  case^ID_ENG_TEST_TORCH_LED

// 3.TORCH_SUPPORT (手机默认开, 手表默认关)
//		==>状态条显示
//		==>shortcut

// 4.mainmenu
//		==>MMIMAINMENU_StartTorch
//		==>shortcut



[1.5] __keyModis__

// Test----key id
app:eng/c/mmieng_uitestwin.c  TestKeyboard
//#if 1//def WIN32
//	{
//    	wchar               disp_text[20] = {0};
//	    char 		        key_text[20] ={0};
//		MMI_STRING_T        string = {0};
//	    GUISTR_STYLE_T      text_style = {0};
//	    GUISTR_STATE_T      state = GUISTR_STATE_ALIGN|GUISTR_STATE_WORDBREAK|GUISTR_STATE_SINGLE_LINE;
//		
//        draw_rect.left = 6;
//        draw_rect.top = 270;
//        draw_rect.right = 240;
//        draw_rect.bottom = 300;
//        LCD_FillRect(&lcd_dev_info, draw_rect, MMI_WHITE_COLOR);
//		
//        sprintf((char*)key_text, "key:%d", key_msg_id);
//        string.wstr_len = strlen(key_text);
//        MMI_STRNTOWSTR(disp_text, 20, (uint8*)key_text,string.wstr_len,string.wstr_len);
//        string.wstr_ptr = disp_text;
//        
//        // display
//        text_style.align = ALIGN_HVMIDDLE;
//        text_style.font = MMI_DEFAULT_TEXT_FONT;
//        text_style.font_color = MMI_BLACK_COLOR;
//
//        GUISTR_DrawTextToLCDInRect( 
//            (const GUI_LCD_DEV_INFO *)&lcd_dev_info,
//            (const GUI_RECT_T      *)&draw_rect,       //the fixed display area
//            (const GUI_RECT_T      *)&draw_rect,       //ó??§òa???Dμ?êμ?ê??óò
//            (const MMI_STRING_T    *)&string,
//            &text_style,
//            state,
//            GUISTR_TEXT_DIR_AUTO
//            ); 
//    }
//#endif



[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 




