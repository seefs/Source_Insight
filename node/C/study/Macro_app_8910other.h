
//目录:
Save:node\C\study\Macro_app_8910other.h \[1.1\] TASK
Save:node\C\study\Macro_app_8910other.h \[1.2\] 
Save:node\C\study\Macro_app_8910other.h \[1.3\] 
Save:node\C\study\Macro_app_8910other.h \[1.4\] 
Save:node\C\study\Macro_app_8910other.h \[1.5\] 
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

// jewish show
//		==>DrawJewishCalendarDetail
//		====>

//		==>日历转换为犹太日历
//		====>MMICALENDAR_Gregorian2Jewish
//		======>2023-3-4, 5783-12-11

//		==>犹太日历转换为格里高利历日历(罗马儒略历上增加闰年)
//		====>MMICALENDAR_Gregorian2Jewish
//		======>5783-12-11, 2023-3-4

// jewish select
//		==>left:
//		====>HandleJewishCalKeyLeft
//		==>right:
//		====>HandleJewishCalKeyRight
//		==>choose:
//		====>HandleSelectDateWinMsg

//	5783-11-1, 2023-1-23
//	5783-12-1, 2023-2-22
//	5784-1-1,  2024-4-9 ,计算错

//先不考虑部分天超范围 如 5740-10-11 以前

// jewish enter
app:accessory\c\mmicalendar_main.c  MMIAPICALENDAR_OpenJewishCalMainWin




[1.3] 




[1.4] 




[1.5] 




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




