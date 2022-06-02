
基础路径设置:
//basePath = 

//目录:
// 1. 
Save:node\C\study\Macro_sch_8910.h \[1.1\] img
Save:node\C\study\Macro_sch_8910.h \[1.2\] menu
Save:node\C\study\Macro_sch_8910.h \[1.3\] QR
Save:node\C\study\Macro_sch_8910.h \[1.4\] 
Save:node\C\study\Macro_sch_8910.h \[1.5\] 
Save:node\C\study\Macro_sch_8910.h \[1.6\] 
Save:node\C\study\Macro_sch_8910.h \[1.7\] 
Save:node\C\study\Macro_sch_8910.h \[1.8\] 
Save:node\C\study\Macro_sch_8910.h \[1.9\] 
Save:node\C\study\Macro_sch_8910.h \[1.10\] 
Save:node\C\study\Macro_sch_8910.h \[1.11\] 
Save:node\C\study\Macro_sch_8910.h \[1.12\] 
// func
Save:node\C\study\Macro_sch_8910.h \[2.1\] mqtt
Save:node\C\study\Macro_sch_8910.h \[2.2\] 
Save:node\C\study\Macro_sch_8910.h \[2.3\] 
Save:node\C\study\Macro_sch_8910.h \[2.4\] 
Save:node\C\study\Macro_sch_8910.h \[2.5\] 
Save:node\C\study\Macro_sch_8910.h \[2.6\] 
Save:node\C\study\Macro_sch_8910.h \[2.7\] 
Save:node\C\study\Macro_sch_8910.h \[2.8\] 
Save:node\C\study\Macro_sch_8910.h \[2.9\] 
Save:node\C\study\Macro_sch_8910.h \[2.10\] 
Save:node\C\study\Macro_sch_8910.h \[2.11\] 
Save:node\C\study\Macro_sch_8910.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] img
//
images:common\MMI_RES_DEFAULT\IMAG\jkm\
// 
source:mmi_app\common\h\common_mdu_def.h   jkm

// pubwin


[1.2] menu
// menu


// KEY_CANCEL  2
// KEY_RIGHT   3
// KEY_DOWN    4
// KEY_RED     0

// KEY_LEFT    1
// KEY_RIGHT   2

// KEY_SOS     S

// 修改指令
//		==>"1234"
//		==>"1313"
source:mmi_app\kernel\c\mmi_default.c  ENTER_ORIGIN_MAINMENU_CODE


### msg
//		==>Sca_App_Public_Key_Handle
//		====>Sca_App_Public_Key_Add_Seq
//		======>Sca_App_Public_Key_Seq_Dispatch_Event
source:mmi_app\kernel\c\mmi_default.c  Sca_App_Public_Key_Handle
//		==>"1313"
//		====>MMIAPIMENU_CreatMainMenu
//		======>ID_MAINMENU_SCCARD_QQ
//		======>MMIMANMENU_EnterScQq
//		========>sca_mainmenu_itemdata  #id
app:mainmenu\c\mmi_mainmenu_data_128x160.c  s_mainmenu_item_data
app:scapp\c\scapp_wintab.c  MMI_RESULT_E^^HandleScappMainmenuWindow



[1.3] tool--qr
//
//		==>ID_SCA_MENU_ID_TOOL
//		==>MMIAPIMENU_EnterScappToolMenuWin
//		====>sca_tool_itemdata
//		====>HandleScappToolMenuWindow
//		======>SCAPP_Open_JKcode_Win
app:scapp\c\scapp_wintab.c  MMISCAPP_JKCODE_WIN_TAB

//
app:scapp\h\scapp_QR_Encode.h  MAX_MODULESIZE


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



[2.1] mqtt
//
mqtt/mqtt_main.c  SCI_TraceLow


[2.2] 



[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





