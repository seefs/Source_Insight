
//Ŀ¼:
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
//		======>�ر�Ӧ��
//		======>SetAppletClose


[1.2] __jewish__
// jewish ��̫����
app:accessory\c
app:accessory\c\mmicalendar_jewish_main.c  HandleJewishCalendarMainWinMsg

// jewish show
//		==>DrawJewishCalendarDetail
//		====>

//		==>����ת��Ϊ��̫����
//		====>MMICALENDAR_Gregorian2Jewish
//		==>��̫����ת��Ϊ�������������(��������������������)
//		====>MMICALENDAR_Gregorian2Jewish

// bug fix:
//		==>MainJewishCalendar_Init
//		====>max,min
//		======>1980-1-1 => 5740-10-12
//		======>2099-1-1 => 5859-10-9
//		====>switch year--,ע���·����ӷ�ʽ   
//		======>2023-2-22 => 5783-12-1 => 2023-2-22
//		======>2023-3-22 => 5783-12-29=> 2023-2-22 (�·�����ע�⣬����28������29��)
//		======>2023-3-23 => 5783-1-1  => 2023-2-22
//		======>2023-4-23 => 5783-2-2  => 2023-2-22
//		======>2024-4-9  => 5784-1-1  => 2024-4-9
//		====>switch year--
//		======>2023-8-18 => 5783-6-1  => 2023-8-18
//		======>2023-9-15 => 5783-6-29 => 2023-9-15 
//		======>2023-9-16 => 5784-7-1  => 2023-9-16 
//		======>2023-8-16 => 5783-5-29 => 2023-8-18 (�·ݼ�����)
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


//�Ȳ����ǲ����쳬��Χ �� 5740-10-11 ��ǰ

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




