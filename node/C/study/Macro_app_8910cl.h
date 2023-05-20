
//目录:
Save:node\C\study\Macro_app_8910cl.h \[1.1\] clMain
Save:node\C\study\Macro_app_8910cl.h \[1.2\] clInit    #50记录
Save:node\C\study\Macro_app_8910cl.h \[1.3\] clDeltail
Save:node\C\study\Macro_app_8910cl.h \[1.4\] 
Save:node\C\study\Macro_app_8910cl.h \[1.5\] 
Save:node\C\study\Macro_app_8910cl.h \[1.6\] 
Save:node\C\study\Macro_app_8910cl.h \[1.7\] 
Save:node\C\study\Macro_app_8910cl.h \[1.8\] 
Save:node\C\study\Macro_app_8910cl.h \[1.9\] 
Save:node\C\study\Macro_app_8910cl.h \[1.10\] 
Save:node\C\study\Macro_app_8910cl.h \[1.11\] 
Save:node\C\study\Macro_app_8910cl.h \[1.12\] 


[1.1] __clMain__
//
//1.cl-menu
app:cl\c\Mmicl_{wintab}.c   MMICL_ICON_MAIN_MENU_WIN_TAB
// cl--menu(240)
app:cc\c\mmicc_menutable.c GUIMENU_ITEM_T^menu_cl


//2.cl-list
// cl--title
app:cl\c\Mmicl_{wintab}.c   HandleLogListWindow
### __clNum__

// str
InitPdaCallLogListCtrl        CallLog




[1.2] __clInit__

// cl list--(107)
app:cl\c\Mmicl_{wintab}.c   AppendLogListItem

// cl--read
//		==>MMICL_ReadNV
//		====>MMICL_ReadAllNV
//		====>MMICL_RECORD_TOTAL_NUM     # 80+20=100
//		======>80 40, 看起来uint8最大数只能256-20
source:mmi_service\export\inc\mmi_custom_define.h  MMICL_RECORD_MAX_NUM
// cl--write 实际NV
//		==>MMICL_WriteNV
//		====>.header
//		====>.record
//		======>50000+28~38
//		========>EFS_NvitemWrite
//		========>应该用的是RAM: 107 不好算
source:mmi_app\kernel\h\mmi_modu_main.h  MMIUSERNV_CL_CALL_ALL_CONTENT_BEGIN 2
//		======>0~9
source:mmi_app\app\cl\h\mmicl_internal.h  MMICL_RECORD_NVITEM_COUNT
//		==>CC_DisconnectedCallByIndex
//		====>MMIAPICL_RecordCallInfo(, calllog_type, cl_info )   # 模拟时调用这个
//		======>AddNewCallInfo
//		========>AddNewDetailCallInfo
//		========>MMICL_WriteNV(MMICL_CALL_ALL, arraycall_info)
app:cc\c\mmicc_app.c   CC_DisconnectedCall(msg_id, )


// cl--Init
//		==>SetLogListItem
//		====>.arraycall_info
//		======>MMICL_GetRecordInfo
//		====>AppendLogListItem
//		======>.sim_name_str
//		======>.name_number_str
//		======>.time_str
//		======>...
//		=======>GUILIST_AppendItem
//		======>
//		========>
//		==========>
//		============>
app:cl\c\Mmicl_{wintab}.c   HandleCallLogChildWindow


//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>




### __CL__
// 条数 80+20 (107)
app:cl\h\mmicl_internal.h  MMICL_RECORD_TOTAL_NUM




[1.3] __clDeltail__

//3.cl-deltail
//		==>从号码获取姓名
app:cl\c\Mmicl_{wintab}.c   InitLogListDetailContactItem
// cl deltail--调显示位置
app:cl/c/Mmicl_{wintab}.c   AppendLogListDetailItem
// cl list--(107)
app:cl\c\Mmicl_{wintab}.c   AppendLogListItem





[1.4] __clTab__




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





