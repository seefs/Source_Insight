
基础路径设置:
//basePath = 
// bat
Save:..\patch\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_patch_8910.h \[1.1\] app
Save:node\C\study\Macro_patch_8910.h \[1.2\] common
Save:node\C\study\Macro_patch_8910.h \[1.3\] Trace_Log_Buf_Print
Save:node\C\study\Macro_patch_8910.h \[1.4\] SALES_TRACKER
Save:node\C\study\Macro_patch_8910.h \[1.5\] 
Save:node\C\study\Macro_patch_8910.h \[1.6\] 
Save:node\C\study\Macro_patch_8910.h \[1.7\] 
Save:node\C\study\Macro_patch_8910.h \[1.8\] 
Save:node\C\study\Macro_patch_8910.h \[1.9\] 
Save:node\C\study\Macro_patch_8910.h \[1.10\] 
Save:node\C\study\Macro_patch_8910.h \[1.11\] 
Save:node\C\study\Macro_patch_8910.h \[1.12\] 




[1.1] app

// 107--audioplayer--full
app:audioplayer\c\mmiapwin_main_pda.c

// 107--browser--PIC
app:browser\c\mmibrowser_wintable.c
app:browser\control\src\brw_control.c


// 107--bt--MSG_TEST
app:bt\c\mmibt_app.c

// 107--test--key
app:eng\c\mmieng_uitestwin.c

// 107--bt--test
app:idle\c\mainapp.c  IdleWin_HandleMsg

// 107--idle--bt_id
app:idle\c\mmiidle_cstyle.c

// 107--idle--tf_show
app:idle\c\mmiidle_dial.c


// 107--sim1
app:phone\c\mmiphone.c

// 107--charge--msg
app:phone\c\mmiphone_charge.c

// 107--tts--time
app:setting\c\mmiset_tts.c


// 107/git
// --udisk--test
//		==>MMIAPIUdisk_HandleUsbCablePlugIn
//		====>MMIAPIUdisk_OpenUsbOperWindow
app:udisk\c\mmiudisk_wintab.c


### __charge__
// 8910--idle--charge state
app:idle\c\mmiidle_mstyle.c
// 107--idle--charge--test
app:idle\c\mainapp.c  IdleWin_HandleMsg
app:idle\c\mainapp.c  MMIPHONE_ChargeHandlePsAndRefMsg




[1.2] common
// 107--res--_WAIT
MS_MMI_Main\source\mmi_app\common\h\common_mdu_def.h


// 107--res--tts
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c





[1.3] Trace_Log_Buf_Print
// 8910
chip_drv/chip_module/charge/uix8910/charge_uix8910.c  Trace_Log_Buf_Print
MS_MMI_Main/source/mmi_app/app/fmm/c/mmi_filemgr.c
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone.c
MS_MMI_Main/source/mmi_app/common/h/mmi_appmsg.h

// 107
app:bt\c\mmibt_app.c  Trace_Log_Buf_Print
MS_MMI_Main/source/mmi_app/app/fmm/c/mmi_filemgr.c  FILE_LOG_SUPPORT
MS_MMI_Main/source/mmi_app/app/phone/c/mmiphone.c  FILE_LOG_SUPPORT
MS_MMI_Main/source/mmi_app/common/h/mmi_appmsg.h  FILE_LOG_SUPPORT

//
//	Trace_Log_Buf_Print("MMIBT_A2DPCallBackFunc msg_id=%x",  pMsg->msg_id);

// watch--usb mode
Save:node\C\study\Macro_app_8910.h  __UsbMode__


[1.4] SALES_TRACKER
//
app:cc\c\mmicc_wintab.c  SPDE_SALES_TRACKER_SUPPORT
app:eng\c\mmieng_main.c  SPDE_SALES_TRACKER_SUPPORT
app:eng\c\mmieng_win.c  SPDE_SALES_TRACKER_SUPPORT
app:phone\c\mmiphone_onoff.c  SPDE_SALES_TRACKER_SUPPORT
app:setting\c\mmiset_func.c  SPDE_SALES_TRACKER_SUPPORT
app:sms\c\mmismsapp_main.c  SPDE_SALES_TRACKER_SUPPORT
app:sms\h\mmisms_export.h  SPDE_SALES_TRACKER_SUPPORT
app:sms\h\mmisms_id.def  SPDE_SALES_TRACKER_SUPPORT
app:sms\h\mmisms_id.h  SPDE_SALES_TRACKER_SUPPORT
source:mmi_app\kernel\c\mmi_default.c  SPDE_SALES_TRACKER_SUPPORT
source:mmi_kernel\include\mmi_default.h  SPDE_SALES_TRACKER_SUPPORT
source:mmi_kernel\source\c\mmk_timer.c  SPDE_SALES_TRACKER_SUPPORT
source:mmi_kernel\include\mmk_timer.h  SPDE_SALES_TRACKER_SUPPORT
common\export\inc\nv_item_id.h  SPDE_SALES_TRACKER_SUPPORT




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



[2.1] 


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





