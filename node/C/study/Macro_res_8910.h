
//目录
Save:node\C\study\Macro_res_8910.h \[1.1\] project
Save:node\C\study\Macro_res_8910.h \[1.2\] mk, version
Save:node\C\study\Macro_res_8910.h \[1.3\] str
Save:node\C\study\Macro_res_8910.h \[1.4\] res/excel
Save:node\C\study\Macro_res_8910.h \[1.5\] image-----------------
Save:node\C\study\Macro_res_8910.h \[1.6\] ring, audio-----------
Save:node\C\study\Macro_res_8910.h \[1.7\] add app
Save:node\C\study\Macro_res_8910.h \[1.8\] add res
Save:node\C\study\Macro_res_8910.h \[1.9\] color
Save:node\C\study\Macro_res_8910.h \[1.10\] //test
Save:node\C\study\Macro_res_8910.h \[1.11\] OLD_PRELOAD
Save:node\C\study\Macro_res_8910.h \[1.12\] xx_mdu_def.h
Save:node\C\study\Macro_res_8910.h \[1.13\] lang/rule------------字库语言
Save:node\C\study\Macro_res_8910.h \[1.14\] pos------------------
Save:node\C\study\Macro_res_8910.h \[1.15\] load res...
Save:node\C\study\Macro_res_8910.h \[1.16\] apn
Save:node\C\study\Macro_res_8910.h \[1.17\] 
Save:node\C\study\Macro_res_8910.h \[1.18\] 
Save:node\C\study\Macro_res_8910.h \[1.19\] 
Save:node\C\study\Macro_res_8910.h \[1.20\] 



[1.1] project

### 设置当前项目
Save:set\
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey


### 其他设置
Save:node\C\cfg\
Save:node\C\cfg\Macro_c_path_sprd.h  _sprd_cur_


###
// keyPro是短名, key0是共用名, key1/key2是长名
patch:node\info\
patch:node\info\Macro_info_{1}.h


[1.2] mk
//
prj:\\
prj:project_{cur}.mk   HERO_ENGINE_SUPPORT
// 107
prj:{version}.c        s_version_info
// 8910
prj:version_software_mocor.h     s_version_info



[1.3] str

//
build\{cur}_builddir\tmp\mmi_res_240X320_text.txt  SUCCESS
build\{cur}_builddir\tmp\mmi_res_128x128_text.txt TXT_EXTRA_SETTINGS


//字符整理:
// ----excel

// 常用 softkey:
//	STXT_CANCEL, STXT_STOP, STXT_RETURN, STXT_SAVE, STXT_OPTION, STXT_SELECT, 
//	TXT_DELETE, TXT_EDIT, STXT_OK, TXT_COMMON_CLEAR, 

###
// ID 对应
Save:node\C\study\Macro_doc_apn8910.h  __strApn__


[1.4] res/excel
### resgen
//
make\resource_main\resource_main.mk  resgen.pl

// modules
//		==>resource_main
UIX8910.modules  resource

//
make/perl_script/resgen.pl


### color_table
// 8910
make\resource_main\resource_main.mk  color_table
// copy:
//	color_table_black_bg
//	color_table_white_bg

// 107
make\resource_main\
make\resource_main\resource_target.mk  color_table

// cust
// --ResView.exe
make\perl_script\ResGen\
make\perl_script\ResGen\ResView.ini  cust_str_table
//	;1=cust_color_table.xls
//
make\perl_script\perl_pm\



[1.5] image
// --path
Save:set\Macro_Set_Path_sprd_{pro}.h  images
// image
images:\


// ==>image
Save:node\C\study\Macro_res_image_8910.h
// ==>image watch
Save:node\C\study\Macro_res_image_wa8910.h


// RES_ADD_IMG()
//    背景使用整图，缩放的背景带花纹或重叠
//  IMG_CMP_PNG_ARGB                   -------正常
//  IMG_CMP_PNG_ARGB |SABM_HOR_STRETCH -------重叠
//  IMG_CMP_PNG_SABM_RLE |SABM_HOR_STRETCH ---带花纹


###
//	图片资源大小:
build\{cur}_builddir\tmp\mmi_res_{size}_imag.txt



[1.6] ring
// --path
Save:set\Macro_Set_Path_sprd_{pro}.h  ring
// ring
ring:\


// ==>ring
Save:node\C\study\Macro_res_ring_8910.h
// ==>goto跳转
Save:node\C\study\Macro_res_ring_8910.h  __VIB__
Save:node\C\study\Macro_res_ring_8910.h  __RING__






[1.7] add app
//
source:mmi_app\kernel\h\mmk_regapp.def  SPDEHTTP_SUPPORT
//	REG_APP(HTTP_SIGNAL_BEG,	HTTP_SIGNAL_END, &g_spdehttp_app)

source:mmi_app\kernel\h\mmk_ext_app.h  SPDEHTTP_SUPPORT
//  extern MMI_APPLICATION_T   g_spdehttp_app;

make\app_main\app_main.mk  SPDEHTTP_SUPPORT
//	MSRCPATH += $(MMI_DIR)/source/mmi_app/app/spdehttp/c
//	MINCPATH += $(MMI_DIR)/source/mmi_app/app/spdehttp/h
//	SOURCES += spdehttp.c

source:mmi_app\kernel\c\mmimain.c  SPDEHTTP_SUPPORT
//    MMIAPISPDEHTTP_InitModule();

source:mmi_app\kernel\h\mmi_applet_table.h   SPDEHTTP_SUPPORT
//	#define SPRD_SPDEHTTP_APPLET_ID    (SPRD_MMI_GUID_START + 22)

source:mmi_app\common\h\mmi_appmsg.h   SPDEHTTP_SUPPORT
//	#define     MSG_SPDEHTTP_TASK_START                     0x1450
//	#define     MSG_SPDEHTTP_EXCEED_TASK_NUMT               (MSG_SPDEHTTP_TASK_START + 1)






[1.8] add res
# SPDEHTTP
make\resource_main\resource_main.mk  SPDEHTTP_SUPPORT
make\resource_main\resource_header.mk  SPDEHTTP_SUPPORT
//	SRCPATH	+= $(MMI_DIR)/source/mmi_app/app/spdehttp/h
//	SOURCES	 += spdehttp_mdu_def.h

source:resource\mmi_res_prj_def.h  SPDEHTTP_SUPPORT
//	RES_ADD_MODULE(MMI_MODULE_SPDEHTTP,"\\spdehttp\\spdehttp_mdu_def.h")


# memo
make\resource_main\
make\resource_main\resource_main.mk  memo     #8910
make\resource_main\resource_header.mk  memo   #107
//	SRCPATH	+=  $(MMI_DIR)/source/mmi_app/app/memo/h\
//	SOURCES	 += memo_mdu_def.h

source:resource\mmi_res_prj_def.h  memo_mdu
//  RES_ADD_MODULE(MMI_MODULE_MEMO,"\\memo\\memo_mdu_def.h")


# pic
make\app_watch_main\app_watch_main.mk  watch_gallery_main
//
app:pic_viewer\h\pic_viewer_mdu_def.h  PIC_VIEWER_SUPPORT



[1.9] color

//
// RGB8882RGB565(rgb888)

// ==>font/color
Save:node\C\study\Macro_res_color_8910.h  __idle__



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
source:mmi_app\app\camera\h\camera_mdu_def.h  IMG_DC_ICON_PHOTO
// cc
//	cc_mdu_def.h
//	clock_mdu_def.h	clock
//	common_mdu_def.h	common
source:mmi_app\common\h\common_mdu_def.h  TXT_AUDIO
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




[1.13] lang/rule

### __lang__
// 开宏
Save:node\C\study\Macro_res_8910lang.h  __def__      #默认语言
Save:node\C\study\Macro_res_8910lang.h  __search__   #--语言
Save:node\C\study\Macro_res_8910lang.h  __FONT__     #--lib
// 1个语言需要开多个宏
Save:node\C\study\Macro_res_8910lang.h  __CN__       # 简体/繁体
Save:node\C\study\Macro_res_8910lang.h  __SPAN__     # 西班牙
// 修改字库
Save:node\C\study\Macro_res_8910lang.h  __tool__     # 修改字库


### __rule__
// 翻译lang
Save:node\C\rule\Macro_Rule_Han_file.h  70
Save:node\C\rule\Macro_Rule_Han_file.h  AMHARIC
// str--LangSetName
app:setting\c\mmiset_func.c  HEBREW
// str--LangSetName--部分未转码
Save:node\C\rule\
Save:node\C\rule\Macro_Rule_Lang_NAME.h  IM_ARABIC_SUPPORT
Save:node\C\rule\Macro_Rule_Lang_NAME.h  IM_RUSSIAN_SUPPORT 
Save:node\C\rule\Macro_Rule_Lang_NAME.h  IM_FRENCH_SUPPORT
Save:node\C\rule\Macro_Rule_Lang_NAME.h  IM_HEBREW_SUPPORT
Save:node\C\rule\Macro_Rule_Lang_NAME.h  IM_AMHARIC_SUPPORT
// str--columnName(用普通格式, unicode乱码)(AB一样)
Save:node\C\rule\Macro_Rule_Lang_COLUMN_TABLE1.h  Hebrew     // str_table.xls
Save:node\C\rule\Macro_Rule_Lang_COLUMN_TABLE2.h  AMHARIC    // str_table1.xls
// str-excel--命名规则
make\perl_script\ResGen\ReadMe.txt  str_table
make\perl_script\ResGen\ResView.ini  cust_str_table
//
prj:project_{cur}.mk   HEBREW
prj:{cfg}.cfg          POLISH = TRUE



[1.14] pos

// ==>pos
Save:node\C\study\Macro_pos_8910.h  __idle__



[1.15] load
### 107
// --__load__
//		==>APP_Task
//		====>MMK_LoadStaticModInfo
//		====>MMIRES_ResourceInit
//		====>MMIRES_LoadAllStaticComResource
//		======>MMIRES_LoadComResource
//		========>GetComCafResInfo        # init if null
//		==========>.node_ptr->mod_id=1
//		========>LoadResourceData
//		==========>.res_info_ptr->res_data_offset=332
//		==========>GetComResHeadInfo
//		==========>LoadTextRes
//		============>.pRes->res_module_total=45
//		============>.i.data_offset=96
//		============>.i.offset=1716153
//		============>.i.count=0
//		==============>
//		==>ResMalloc
//		====>MMIRES_FreeAllNodeRes        # 分配为空释放报错
//		======>

//改法:
//  SCI_MPALLOC--SCI_MemPoolMalloc, 改成 malloc
//  SCI_MPFREE---SCI_MemPoolFree, --改成 free



[1.16] apn
// ntac整理
tool_mini:6_res_str\
tool_mini:6_res_str\res_ntac.xlsx


### __8910_apn__
//
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey

// tools
{8910}\tools\DEBUG_TOOL\ResBOCA\ResBOCA_R1.19.0501\Bin\
// data
resource:Common\DATA\
{8910wa21}\source:resource\Common\DATA\
{8910wa_git}\source:resource\Common\DATA\
//	excel
patch:code\UIS8910_git\_ex_w22\
// 8910 apn str-list
Save:node\C\study\Macro_doc_apn8910.h
Save:node\C\study\Macro_doc_apn8910.h   __MVNO__
// 8910 volte/白名单
Save:node\C\study\Macro_doc_volte8910.h


### __107_apn__
// 分段加载
prj:project_{cur}.mk  DATA_ACCOUNT_USE_SPLIT_FILE = TRUE
// tools
tools\Common\ResBOCA\Bin\
// data
resource:Common\DATA\
//	excel
patch:code\t107\_ex_w22P5\
// 107 apn-list
Save:node\C\study\Macro_doc_apn107.h
// 资料/搜索
Save:node\C\study\Macro_doc_apn107.h  __search__
Save:node\C\study\Macro_doc_apn107.h  __apnStr__
Save:node\C\study\Macro_doc_apn107.h  __err__
// 107 volte/白名单
Save:node\C\study\Macro_doc_volte107.h


### 8910 variant
// R_NETWORK_ACCOUNT
common:h\common_mdu_def.h R_NETWORK_ACCOUNT

// R_MULIT_VARIANT
common:h\common_mdu_def.h R_MULIT_VARIANT






[1.17] 






[1.18] 






[1.19] 






[1.20] 



