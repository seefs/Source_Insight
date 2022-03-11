
基础路径设置:
//basePath = 
resPath = MS_MMI_Main/source/resource/mmi_res_240x240
res:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. common
Save:node\C\study\Macro_res_8910.h \[1.1\] 项目配置
Save:node\C\study\Macro_res_8910.h \[1.2\] mk
Save:node\C\study\Macro_res_8910.h \[1.3\] str
Save:node\C\study\Macro_res_8910.h \[1.4\] res
Save:node\C\study\Macro_res_8910.h \[1.5\] icon, anim
Save:node\C\study\Macro_res_8910.h \[1.6\] ring
Save:node\C\study\Macro_res_8910.h \[1.7\] add app
Save:node\C\study\Macro_res_8910.h \[1.8\] add res
Save:node\C\study\Macro_res_8910.h \[1.9\] font
Save:node\C\study\Macro_res_8910.h \[1.10\] test
Save:node\C\study\Macro_res_8910.h \[1.11\] OLD_PRELOAD
Save:node\C\study\Macro_res_8910.h \[1.12\] xx_mdu_def.h
Save:node\C\study\Macro_res_8910.h \[1.13\] 
Save:node\C\study\Macro_res_8910.h \[1.14\] 
Save:node\C\study\Macro_res_8910.h \[1.15\] 
Save:node\C\study\Macro_res_8910.h \[1.16\] 
Save:node\C\study\Macro_res_8910.h \[1.17\] 
Save:node\C\study\Macro_res_8910.h \[1.18\] 
Save:node\C\study\Macro_res_8910.h \[1.19\] 
Save:node\C\study\Macro_res_8910.h \[1.20\] 




[1.1] 项目配置

### 设置当前项目
// --images / audio / features / build
Save:node\C\cfg\

Save:node\C\cfg\Macro_c_path_sprd.h  _mtk_cur_

// --nv / board / lcd
Save:node\C\cfg\Macro_c_path_sprd.h  _mtk_cfg_

// set cur project other -- no use
//Save:node\C\cfg\Macro_c_path_sprd.h  _mtk_other_

### 新项目
// create new project
Save:node\C\cfg\Macro_c_path_sprd.h  _mtk_copy_




[1.2] 



[1.3] 

//
//IMG_DC_ICON_PHOTO



[1.4] res
//
//head:res,mmi_res_prj_def.h
//item:res,mmi_res_prj_def.h



[1.5] icon, anim
// RES_ADD_IMG()
//    背景使用整图，缩放的背景带花纹或重叠
//  IMG_CMP_PNG_ARGB                   -------正常
//  IMG_CMP_PNG_ARGB |SABM_HOR_STRETCH -------重叠
//  IMG_CMP_PNG_SABM_RLE |SABM_HOR_STRETCH ---带花纹


// anim
MS_MMI_Main\source\mmi_app\common\h\common_mdu_def.h  ANIM_PUBWIN_WAIT_PDA


[1.6] ring
// TONE_425HZ
//MMISRVAUD_Play_BusyTone




[1.7] add app
MS_MMI_Main\source\mmi_app\kernel\h\mmk_regapp.def  SPDEHTTP_SUPPORT
//	REG_APP(HTTP_SIGNAL_BEG,	HTTP_SIGNAL_END, &g_spdehttp_app)
MS_MMI_Main\source\mmi_app\kernel\h\mmk_ext_app.h  SPDEHTTP_SUPPORT
//  extern MMI_APPLICATION_T   g_spdehttp_app;
make\app_main\app_main.mk  SPDEHTTP_SUPPORT
//	MSRCPATH += $(MMI_DIR)/source/mmi_app/app/spdehttp/c
//	MINCPATH += $(MMI_DIR)/source/mmi_app/app/spdehttp/h
//	SOURCES += spdehttp.c
MS_MMI_Main\source\mmi_app\kernel\c\mmimain.c  SPDEHTTP_SUPPORT
//    MMIAPISPDEHTTP_InitModule();
MS_MMI_Main\source\mmi_app\kernel\h\mmi_applet_table.h   SPDEHTTP_SUPPORT
//	#define SPRD_SPDEHTTP_APPLET_ID    (SPRD_MMI_GUID_START + 22)
MS_MMI_Main\source\mmi_app\common\h\mmi_appmsg.h   SPDEHTTP_SUPPORT
//	#define     MSG_SPDEHTTP_TASK_START                     0x1450
//	#define     MSG_SPDEHTTP_EXCEED_TASK_NUMT               (MSG_SPDEHTTP_TASK_START + 1)






[1.8] add res
make\resource_main\resource_main.mk  SPDEHTTP_SUPPORT
make\resource_main\resource_header.mk  SPDEHTTP_SUPPORT
//	SRCPATH	+= $(MMI_DIR)/source/mmi_app/app/spdehttp/h
//	SOURCES	 += spdehttp_mdu_def.h
MS_MMI_Main\source\resource\mmi_res_prj_def.h  SPDEHTTP_SUPPORT
//	RES_ADD_MODULE(MMI_MODULE_SPDEHTTP,"\\spdehttp\\spdehttp_mdu_def.h")



[1.9] font
//	字库：
MS_MMI_Main\source\resource\mmi_res_prj_def.h
MS_MMI_Main\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


MS_MMI_Main\source\resource\Common\FONT\LANG_FONT_LATIN_12_14_29.lib
MS_MMI_Main\source\resource\Common\FONT\


// VIB
key:VIB,file:mmi_res_prj_def.h

// FONT
key:FONT,file:mmi_res_prj_def.h


// RING
key:RING,file:mmi_res_prj_def.h


// LANG
key:LANG,file:mmi_res_prj_def.h

// IM
key:IM,file:mmi_res_prj_def.h



[1.10] test



[1.11] OLD_PRELOAD
// MMI_Main->MS_MMI_Main
make\preload_app\preload_app.mk  21
make\preload_app\preload_app.mk  51
//    "$(ROOT_DIR)/MS_MMI_Main/source/resource/$(MMI_RES_DIR)" 
//    MS_MMI_Main/source/resource/preload_def.h




[1.12] xx_mdu_def.h
// audioplayer
//	audioplayer_mdu_def.h
//	browser_manager_mdu_def.h	browser
//	browser_mdu_def.h	browser
// camera
MS_MMI_Main\source\mmi_app\app\camera\h\camera_mdu_def.h  IMG_DC_ICON_PHOTO
// cc
//	cc_mdu_def.h
//	clock_mdu_def.h	clock
//	common_mdu_def.h	common
MS_MMI_Main\source\mmi_app\common\h\common_mdu_def.h  TXT_AUDIO
//	connection_mdu_def.h	connection
//	datacounter_mdu_def.h	dataCounter
//	dl_mdu_def.h	dl
//	drm_mdu_def.h	drm
//	ebook_mdu_def.h	ebook
//	email_mdu_def.h	email
//	files_manager_mdu_def.h	files_manager
//	fm_mdu_def.h	fm
//	game_snake_mdu_def.h	game_snake
//	im_mdu_def.h	im
//	mms_mdu_def.h	mms
//	multim_mdu_def.h	multim
//	pb_mdu_def.h	pb
//	pic_crop_mdu_def.h	pic
//	pic_mdu_def.h	pic_crop
//	pic_viewer_mdu_def.h	pic_viewer
//	push_mail_mdu_def.h	preload
//	record_mdu_def.h	record
//	sample_mdu_def.h	rect_table.xls
//	search_mdu_def.h	ring_default.mid
//	set_mdu_def.h	set
//	sms_mdu_def.h	sms
//	tencentmcarev31_mdu_def.h	
//	tools_mdu_def.h	tools
//	videoplayer_mdu_def.h	videoplayer
//	wallpaper_mdu_def.h	wallpaper
//	wifi_mdu_def.h	wifi




[1.13] 




[1.14] 




[1.15] 


