

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_doc_MTK.h \[1.1\] //Message 切换
Save:node\C\study\Macro_doc_MTK.h \[1.2\] FUN 入口-------------
Save:node\C\study\Macro_doc_MTK.h \[1.3\] lang
Save:node\C\study\Macro_doc_MTK.h \[1.4\] //移配置
Save:node\C\study\Macro_doc_MTK.h \[1.5\] //说明文档
Save:node\C\study\Macro_doc_MTK.h \[1.6\] //Win数据
Save:node\C\study\Macro_doc_MTK.h \[1.7\] //touch
Save:node\C\study\Macro_doc_MTK.h \[1.8\] 
Save:node\C\study\Macro_doc_MTK.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_MTK.h \[1.10\] //ImageNote
Save:node\C\study\Macro_doc_MTK.h \[1.11\] //TextNote
Save:node\C\study\Macro_doc_MTK.h \[1.12\] FontTool
Save:node\C\study\Macro_doc_MTK.h \[1.13\] build time-------------
Save:node\C\study\Macro_doc_MTK.h \[1.14\] 
//
Save:node\C\study\Macro_doc_MTK.h \[2.1\] build error
Save:node\C\study\Macro_doc_MTK.h \[2.2\] moids error
Save:node\C\study\Macro_doc_MTK.h \[2.3\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Message 切换



[1.2] FUN 入口
//
vendor\search_engine\GUOBI\winguo\adapter\winguo_platform\platform_src\GB_SMDSysPort.c  ORGANIZER_CALENDER_MENU
vendor\search_engine\GUOBI\winguo_v2\src\model\platform\src\GB_SMD_PlatformElementApp.c  ORGANIZER_CALENDER_MENU
//
plutommi\Framework\EventHandling\EventsInc\mmi_menu_handlers.h  ORGANIZER_CALENDER_MENU



[1.3] lang
//
mre\sdkinc\vmchset_sdk.h PUNJABI



[1.4] 移配置




[1.5] 说明文档




[1.6] Win数据
//
//搜索菜单ID 如 MAIN_MENU_ENTERTAINMENT_MENU_ID
//搜索字符串ID如 MAIN_MENU_MENU_TEXT
//搜索图片ID 如MAIN_MENU_PHONEBOOK_ICON


[1.7] 触摸屏
//
// 触屏相关 wgui_touch_screen.c
//wgui_general_pen_down_hdlr // 触摸屏按下函数
//wgui_general_pen_move_hdlr // 触摸屏移动函数
//wgui_general_pen_down_hdlr // 触摸屏松开函数
//wgui_general_pen_repeat_hdlr // 重复
//wgui_general_pen_abort_hdlr // 放弃操作




[1.8] 


[1.9] test code
//
codePath = plutommi\AppCore\SSC\
code:\

// code
plutommi/AppCore/SSC/SSCPassEngine.c SSCHandleIMEI
plutommi\AppCore\SSC\SSCStringTable.h SSC_MANUAL_SET_IMEI
// ELECTRIC-2
plutommi/AppCore/SSC/SSCPassEngine.c  mmi_entry_dzbk_info_scr


// Phone--工程模式
code:SSCStringTable.h  SSC_ENGINEERING_MODE
code:SSCStringTable.h  SSC_ENGINEERING_MODE1
"#*8378#0#", "*#15963#", "####1111#",
"*#2151118*#"  "*#555#"
// UI
"*#87#", "*#666#",
// Item--原厂设定
code:SSCPassEngine.c SSC_FACTORY_MODE_4
 "*#79*#", 
"*#66*#", "*#2266#", "*#777#", "*#*#6666#*#"
// Product
"#*8378#3#",
// PhoneInfo -- bg
"#*8378#4#",
// SN
"####2222#",
// Net--mcc,mnc
"####1040#",
// Engineer
"#*8378#1#", "*#555#",--mcc,mnc
// Version--Out -- bg
"#*8378#2#", "####0000#", 
"*#8375#" "*#0000#"
// Version--3
"*#888#",
// Chip
"#*8378#5#",
// NV
"#*786646468#",
// Monkey
"#*8378#8#",
// TFload
"#*8378#9#",
// ALLSVN -- bg
"#*786837#",
// HW
code:SSCStringTable.h  SSC_LCD_IC_SHOW
"*#999#", "*#523#",
"*#888999#"
// IMEI
code:SSCStringTable.h  454 SSC_MANUAL_SET_IMEI
"*#06#",
"*#5353#"
// Reset
"*#119*#", "*#70#",
// ELECTRIC/SALE
code:SSCStringTable.h  __PHONE_SALE_SERVERS_NEW__
1-"*#2010#"; 
2-"*#0808#"; 
3-"*#0809#", 
1-"*#8214#" ,"*#1616#", "*#8888*#", "*#888#"
2-"*#4128#", "*#161617#", "*#27688#", "*#*#0808*#*#"
// SALE-New
code:SSCPassEngine.c   __XLS_SALE_CUSTOM_TIME__
"*#0808#"; 


[1.10] ImageNote





[1.11] TextNote





[1.12] FontTool
### 如何修改字体？
//	1、使用mtk提供的range 生成一个range文件，使用工具FontEdit.exe 生成相应的bdf文件。
//	2、使用mtk工具MCT 来转换bdf文件到C，h文件。
//	3、复制头文件到相应的目录下；如
//	vendor/font/MTK/official/project/plutommi/content/inc/MainLcd176X220
//	4、复制C文件中的相关信息到Fontres.c 
//	vendor/font/MTK/official/project/plutommi/content/src/MainLcd176X220/】
//	      const RangeData ××××_RangeData[####]={
//	         const RangeDetails ××××_RangeInfo={
//	         sCustFontData Pluto_×××× =
//	   注意
//	   {FONTATTRIB_NORMAL|FONTATTRIB_BOLD|FONTATTRIB_ITALIC|FONTATTRIB_OBLIQUE|FONTATTRIB_UNDERLINE
//	   	|FONTATTRIB_STRIKETHROUGH,FONTATTRIB_NORMAL|FONTATTRIB_BOLD|FONTATTRIB_ITALIC|FONTATTRIB_OBLIQUE
//	   	|FONTATTRIB_UNDERLINE|FONTATTRIB_STRIKETHROUGH},
//	         设置；
//	5、在 FontRes.c 中增加 此种字体的头文件包含；
//	6、检查 FontFamily 部分，查看前面设置是否正确 （）：
//	    pluto_××_standardFamily  

### 怎么样增加字体库？
//	1、制作字库中计划包含的所有字符的unicode的range段；参见fontres.c
//	2、使用fontEdit工具生成bdf文件；这一步要求使用正确的字库，如Pmingliu.ttf 华文中宋.ttf，
//	并设置正确的charset；
//	3、使用mct工具转换bdf文件到c文件。
//	4、移植到fontres.c 并把头文件复制到相应inc目录。
//	5、编译 r mmiresource，上机验证。
//	还有如果找不到合适的ttf等字库的情况：
//	可以自己画bmp位图字体，使用mct工具加到bdf文件中；
//	关于字体字库是一个专门的学问，有兴趣查查
//	http://www.microsoft.com/typography/otspec/default.htm



[1.13] phone time
// powon time
custom\drv\misc_drv\_Default_BB\MT6261\custom_hw_default.c  DEFAULT_HARDWARE_DAY
custom\drv\misc_drv\_Default_BB\MT6261\custom_hw_default.c  __NEW_DEFAULT_TIME_20211030_STYLE__
//
plutommi\mmi\Setting\SettingSrc\Restore.c  mmi_restore_reset_date_time
plutommi\mmi\Setting\SettingSrc\Restore.c  __NEW_DEFAULT_TIME_20211030_STYLE__




[1.14] 




[1.15] 




[2.1] build error

# 1.Error: 超空间:
AAPMC Error: Error[-2-] Calculating correct VIVA memory value...Failed.
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
Please check link error or check 
build\M107_XYZN_S2_4A_WESTERN_F2\log\vivaConfig.log Error:
	

# 2.Error: zimage_check 
make[-1-]: *** [zimage_check] Error 1
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make[-1-]: Entering directory 'F:/11CW1352MP_MT6261DM'
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make: *** [POSTBUILD ] Error 1
perl tools\ChkDepMod.pl --step 2 M107_XYZN_S2_4A_WESTERN_F2 gprs MT6261

//可能要删这个文件
custom\system\FARSIGHTED61M_CN_11C_BB


# 3.Error:  vivaConfig.log
vivaConfig.log:
Checking VIVA configuration reason
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
原因未知, 重新new正常


# 4.Error: mmiresource.lib
make[-1-]: *** [mmiresource.lib] Error 1
make[-1-]: *** Waiting for unfinished jobs....
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1


# 5.Error:  资源出错
更换语言后 资源出错 开关机动画/状态图标不显示 --> NV中修改语言


# 6.Error:  MMI Feature Check Error
soft\tst\database_classb下面的临时文件删除


# 7.Error:  XX.bin does not exist.
XX.bin does not exist. Please check it.


# 8.Error:  并行编译出错->Disable
make: *** [xgc_all_libs_2] Error 1


# 9.Error:  CreateProcess 拒绝访问
process_begin: CreateProcess(C:\Users\ADMINI~1\AppData\Local\Temp\make6688-1.bat, 
make (e=5): 拒绝访问


# 10.Error:  msys-1.0.dll
Tools\MSYS\bin\sh.exe: *** Couldn't reserve space for cygwin's heap (0x715B0000 <0x1FE0000>)
旧:
tools\MSYS\bin\msys-1.0.dll
新:
Save:SI\z-other-patch\mtk-tools\msys-1.0.dll [openDir]
换了后还是报错:
make[-1-]: *** [fluency.lib] Error 2
最后解决: 重启一次可以了。


# 11.Error: obigo03cstkadp
make[-1-]: *** [obigo03cstkadp.lib] Error 2
make[-1-]: *** [peripheral.lib] Error 2
make[-1-]: *** [postproc.lib] Error 2
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
new


# 12.Error:  文件名长度超过256
F:\11CW1352MP_KM2\build\M105_JX_..\M105_JX_._20181217.bin\M105_JX_.._20181217.bin
文件名长度超过256，不会生成bin文件


# 13.Error: 丢失 BOOTLOADER 文件，原因同上(6.12)
M105_..._BOOTLOADER_V005_MT6261_..._ext.bin


# 14.convert.ext 弹窗
// 改为: 兼容xp-service3



[2.2] moids error

# 1.KM模拟器编不过, 缺文件
// F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h
// F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h
cp->
cp F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h


// copy这2个文件
// F:\6261D_KM\tst\database_classb\pstrace_db\wap_trc_gen.h
// F:\6261D_KM\tst\database_classb\pstrace_db\wps_trc_gen.h

// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc.h
// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wap_trc_gen.h vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h

// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc.h
// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wps_trc_gen.h vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h

	
err->
// f:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\custom_config.c sys_mem_size_modis.h
// F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
cp custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
// 或
cp F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h


# 2.模拟器改NV后, 运行报错, 删除文件:
MoDIS_VC9\WIN32FS\DRIVE_C


# 3.模拟器Error: mte_data.h 少}
plutommi\framework\mte\mteinc\mte.h
plutommi\framework\mte\mteinc\mte_data.h 少一个}编不过


# 4.模拟器Error:   'shortname' 文件名超长
Run-time check Failure #2 - ... 'shortname' was corrupted
MoDIS_VC9\filesystem\FileSystemInc\FSSim_def.h FSSIM_SFN_LEN  ->19 最长18


# 5.模拟器Error:    vs_cfg:
 Stack around the variable XX was corrupted
 项目-属性-配置属性-C/C++-代码生成中”，将基本运行时检查设置成默认值
 code->basic runtime checks


# 6.模拟器Error:   exist not modis.exe 
 MoDIS_VC9 删除重拉代码


# 7.模拟器Error:    cannot update program database:
modis_vc9\mmi_service\debug\vc90.pdb
项目设置（打开项目设置ALT F7，以英文版为例）:
	C\C | General | Debug Information format | C7 Compatible (/Z7)
	C\C | Code Generation | Enable String Pooling | Yes (/GF)
	Linker |Debuging |General Debug Info | Yes (/DEBUG)
网上被互相转载的都是这三项，不过经过实验，只修改第一项即可。
修改保存后，再次编译会出现真正的错误点位置，修改该错误，
然后将各个设置恢复为修改前的值，再[重编]就不会出现cannot update program database错误了


# 8.模拟器Error: 空定义	
vendor\framework\obigo_Q03C\v1_official\msf\msf_lib\export\msf_log.h #define^MSF_LOG_MSG_ARGS
空定义
//	#ifdef WIN32
//	#undef  MSF_LOG_MSG_ARGS_(type, modId, msgId, format, s, ...)      
//	#undef MSF_LOG_MSG_NOARG_(type, modId, msgId, format, s)          
//	#undef MSF_LOG_MSG_NOARG(x)                                       
//	#undef MSF_LOG_MSG_ARGS(x)                                        
//	#endif


# 9.Run-Time Check Failure
// Run-Time Check Failure #3 - The variable 'ix' is being used without being initialized.
plutommi\Framework\GUI\GUI_SRC\gui_buttons.c  gui_icontext_button_get_display_area_ex
//同(5.xx)


# 10.未处理的异常
//修改VS设置（Debug -> Exceptions -> Win32 Exceptions ,将这些异常都抛出），重新运行程序。
//VS能给了出更明确的提示：访问冲突，并定位到了冲突的代码。
#ifdef WIN32
	return;
#endif


# 11.lcd
//_set_lcd_driving_current 已经在 drv_sim.lib(w32_dummy_drv.obj) 
// 中定义	modis_lcd.lib	MoDIS
MoDIS_VC9\drv_sim\src\w32_dummy_drv.c  set_lcd_driving_current



# 12.61d-modis
//
media\audio\src\aud_player_modis.c  kal_int32^_aud_player_modis_get
//#ifndef WIN32
//	                w32_Audio_GetCurrentPosition(self_p->aud_handle, &position);
//#endif



[2.3] 
# 1.断点
//菜单Run->Add Breakpoint->Source Breakpoint，
//在Condition中输入条件，在Pass count中输入要忽略的次数。




