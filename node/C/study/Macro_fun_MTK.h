
基础路径设置:
patchPath = Save:\..\patch\UIS8910_git
patch:\\

//目录:
// 1. constant
Save:node\C\study\Macro_fun_MTK.h \[1.1\] resource_main
Save:node\C\study\Macro_fun_MTK.h \[1.2\] str, wstr
Save:node\C\study\Macro_fun_MTK.h \[1.3\] //timer, LONG_0----
Save:node\C\study\Macro_fun_MTK.h \[1.4\] //MSG
Save:node\C\study\Macro_fun_MTK.h \[1.5\] //NV, init
Save:node\C\study\Macro_fun_MTK.h \[1.6\] Win, Param, id---ID转换
Save:node\C\study\Macro_fun_MTK.h \[1.7\] //#define----------宏套宏
Save:node\C\study\Macro_fun_MTK.h \[1.8\] //RED
Save:node\C\study\Macro_fun_MTK.h \[1.9\] //sms_member
Save:node\C\study\Macro_fun_MTK.h \[1.10\] 
Save:node\C\study\Macro_fun_MTK.h \[1.11\] //make------------
Save:node\C\study\Macro_fun_MTK.h \[1.12\] debug, trace
Save:node\C\study\Macro_fun_MTK.h \[1.13\] 
Save:node\C\study\Macro_fun_MTK.h \[1.14\] //mp3-------------刷新
Save:node\C\study\Macro_fun_MTK.h \[1.15\] tts
Save:node\C\study\Macro_fun_MTK.h \[1.16\] //draw str wchar
Save:node\C\study\Macro_fun_MTK.h \[1.17\] time
Save:node\C\study\Macro_fun_MTK.h \[1.18\] //press key
Save:node\C\study\Macro_fun_MTK.h \[1.19\] //Rect
Save:node\C\study\Macro_fun_MTK.h \[1.20\]
// 2.func
Save:node\C\study\Macro_fun_MTK.h \[2.1\] //lock
Save:node\C\study\Macro_fun_MTK.h \[2.2\] //light
Save:node\C\study\Macro_fun_MTK.h \[2.3\] //ADN FDN SDN
Save:node\C\study\Macro_fun_MTK.h \[2.4\] //Dtmf
Save:node\C\study\Macro_fun_MTK.h \[2.5\] //CC--msg
Save:node\C\study\Macro_fun_MTK.h \[2.6\] //SMS--tp input
Save:node\C\study\Macro_fun_MTK.h \[2.7\] //cursor
Save:node\C\study\Macro_fun_MTK.h \[2.8\] //file
Save:node\C\study\Macro_fun_MTK.h \[2.9\] //select_sim
Save:node\C\study\Macro_fun_MTK.h \[2.10\] //Sleep
Save:node\C\study\Macro_fun_MTK.h \[2.11\] //reset----------重启
Save:node\C\study\Macro_fun_MTK.h \[2.12\] //小图标
Save:node\C\study\Macro_fun_MTK.h \[2.13\] //Browser--------默认PIC
Save:node\C\study\Macro_fun_MTK.h \[2.14\] //BT-------------msg
Save:node\C\study\Macro_fun_MTK.h \[2.15\] //Test-----------key id
Save:node\C\study\Macro_fun_MTK.h \[2.16\] //sim--显示单卡
Save:node\C\study\Macro_fun_MTK.h \[2.17\] //usb
Save:node\C\study\Macro_fun_MTK.h \[2.18\] 
Save:node\C\study\Macro_fun_MTK.h \[2.19\] 
Save:node\C\study\Macro_fun_MTK.h \[2.20\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 
//image
plutommi\mmi\Resource\readres.c S8^*GetImage( )
//	int a =1 ;
//
//	if(ImageId ==IMG_ID_PHNSET_WP_START-10)
//	{
//		a = 1;
//	}
GetImageData
gdi_image_get_dimension_id



[1.2] str, wstr
转格式：
app_ucs2_wtoi
	
mmi_asc_to_ucs2  转换
mmi_asc_to_ucs2
mmi_ucs2ncpy

# GetString()
// GetString(STR_USB_CHARGER_CONNECTED)
// get_string
// STR_GLOBAL_OFF
// STR_GLOBAL_ON

// STR_GLOBAL_PLEASE_WAIT


gui_print_truncated_borderd_text


[1.3] 




[1.4] 




[1.5] 




[1.6] Win, Param, id
// GetActiveScreenId() = IDLE_SCREEN_ID
// 搜:
//	mmi_rp_*_def.h
//	27[8-9][0-9][0-9]

#gid
mmi_frm_group_enter
MMI_ID mmi_popup_display_ext( 
	MMI_STR_ID title, 
	mmi_event_notify_enum event_type, 
	mmi_popup_property_struct *arg)


[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] debug, trace
//
MMI_SLK_LOG((TRC_MMI_SLK_TURN_ON_BACKLIGHT, 200));


[1.13] 




[1.14] 




[1.15] tts
// lock
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_close
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerMain.c  mmi_scr_locker_launch
// menu




[1.16] 




[1.17] 
IDLE 模拟入口
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_enter
//	#ifdef WIN32
//		SetKeyHandler(idle_extra_handle1,KEY_VOL_UP,KEY_EVENT_DOWN);  
//		SetKeyHandler(idle_extra_handle2,KEY_VOL_DOWN,KEY_EVENT_DOWN);  
//	#endif

// 更新时间:
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^PhnsetSetDT( )
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^PhnsetSendSetTimeReqMessage( )
//    mmi_dt_set_dt(&time, NULL, NULL);



[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



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


[2.16] 


[2.17] 


[2.18] 


[2.19] 


[2.20] 


