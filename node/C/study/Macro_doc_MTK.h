

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\C\study\Macro_doc_MTK.h \[1.1\] //Message �л�
Save:node\C\study\Macro_doc_MTK.h \[1.2\] FUN ���-------------
Save:node\C\study\Macro_doc_MTK.h \[1.3\] lang
Save:node\C\study\Macro_doc_MTK.h \[1.4\] //������
Save:node\C\study\Macro_doc_MTK.h \[1.5\] //˵���ĵ�
Save:node\C\study\Macro_doc_MTK.h \[1.6\] //Win����
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
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Message �л�



[1.2] FUN ���
//
vendor\search_engine\GUOBI\winguo\adapter\winguo_platform\platform_src\GB_SMDSysPort.c  ORGANIZER_CALENDER_MENU
vendor\search_engine\GUOBI\winguo_v2\src\model\platform\src\GB_SMD_PlatformElementApp.c  ORGANIZER_CALENDER_MENU
//
plutommi\Framework\EventHandling\EventsInc\mmi_menu_handlers.h  ORGANIZER_CALENDER_MENU



[1.3] lang
//
mre\sdkinc\vmchset_sdk.h PUNJABI



[1.4] ������




[1.5] ˵���ĵ�




[1.6] Win����
//
//�����˵�ID �� MAIN_MENU_ENTERTAINMENT_MENU_ID
//�����ַ���ID�� MAIN_MENU_MENU_TEXT
//����ͼƬID ��MAIN_MENU_PHONEBOOK_ICON


[1.7] ������
//
// ������� wgui_touch_screen.c
//wgui_general_pen_down_hdlr // ���������º���
//wgui_general_pen_move_hdlr // �������ƶ�����
//wgui_general_pen_down_hdlr // �������ɿ�����
//wgui_general_pen_repeat_hdlr // �ظ�
//wgui_general_pen_abort_hdlr // ��������




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


// Phone--����ģʽ
code:SSCStringTable.h  SSC_ENGINEERING_MODE
code:SSCStringTable.h  SSC_ENGINEERING_MODE1
"#*8378#0#", "*#15963#", "####1111#",
"*#2151118*#"  "*#555#"
// UI
"*#87#", "*#666#",
// Item--ԭ���趨
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
### ����޸����壿
//	1��ʹ��mtk�ṩ��range ����һ��range�ļ���ʹ�ù���FontEdit.exe ������Ӧ��bdf�ļ���
//	2��ʹ��mtk����MCT ��ת��bdf�ļ���C��h�ļ���
//	3������ͷ�ļ�����Ӧ��Ŀ¼�£���
//	vendor/font/MTK/official/project/plutommi/content/inc/MainLcd176X220
//	4������C�ļ��е������Ϣ��Fontres.c 
//	vendor/font/MTK/official/project/plutommi/content/src/MainLcd176X220/��
//	      const RangeData ��������_RangeData[####]={
//	         const RangeDetails ��������_RangeInfo={
//	         sCustFontData Pluto_�������� =
//	   ע��
//	   {FONTATTRIB_NORMAL|FONTATTRIB_BOLD|FONTATTRIB_ITALIC|FONTATTRIB_OBLIQUE|FONTATTRIB_UNDERLINE
//	   	|FONTATTRIB_STRIKETHROUGH,FONTATTRIB_NORMAL|FONTATTRIB_BOLD|FONTATTRIB_ITALIC|FONTATTRIB_OBLIQUE
//	   	|FONTATTRIB_UNDERLINE|FONTATTRIB_STRIKETHROUGH},
//	         ���ã�
//	5���� FontRes.c ������ ���������ͷ�ļ�������
//	6����� FontFamily ���֣��鿴ǰ�������Ƿ���ȷ ������
//	    pluto_����_standardFamily  

### ��ô����������⣿
//	1�������ֿ��мƻ������������ַ���unicode��range�Σ��μ�fontres.c
//	2��ʹ��fontEdit��������bdf�ļ�����һ��Ҫ��ʹ����ȷ���ֿ⣬��Pmingliu.ttf ��������.ttf��
//	��������ȷ��charset��
//	3��ʹ��mct����ת��bdf�ļ���c�ļ���
//	4����ֲ��fontres.c ����ͷ�ļ����Ƶ���ӦincĿ¼��
//	5������ r mmiresource���ϻ���֤��
//	��������Ҳ������ʵ�ttf���ֿ�������
//	�����Լ���bmpλͼ���壬ʹ��mct���߼ӵ�bdf�ļ��У�
//	���������ֿ���һ��ר�ŵ�ѧ�ʣ�����Ȥ���
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

# 1.Error: ���ռ�:
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

//����Ҫɾ����ļ�
custom\system\FARSIGHTED61M_CN_11C_BB


# 3.Error:  vivaConfig.log
vivaConfig.log:
Checking VIVA configuration reason
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
ԭ��δ֪, ����new����


# 4.Error: mmiresource.lib
make[-1-]: *** [mmiresource.lib] Error 1
make[-1-]: *** Waiting for unfinished jobs....
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1


# 5.Error:  ��Դ����
�������Ժ� ��Դ���� ���ػ�����/״̬ͼ�겻��ʾ --> NV���޸�����


# 6.Error:  MMI Feature Check Error
soft\tst\database_classb�������ʱ�ļ�ɾ��


# 7.Error:  XX.bin does not exist.
XX.bin does not exist. Please check it.


# 8.Error:  ���б������->Disable
make: *** [xgc_all_libs_2] Error 1


# 9.Error:  CreateProcess �ܾ�����
process_begin: CreateProcess(C:\Users\ADMINI~1\AppData\Local\Temp\make6688-1.bat, 
make (e=5): �ܾ�����


# 10.Error:  msys-1.0.dll
Tools\MSYS\bin\sh.exe: *** Couldn't reserve space for cygwin's heap (0x715B0000 <0x1FE0000>)
��:
tools\MSYS\bin\msys-1.0.dll
��:
Save:SI\z-other-patch\mtk-tools\msys-1.0.dll [openDir]
���˺��Ǳ���:
make[-1-]: *** [fluency.lib] Error 2
�����: ����һ�ο����ˡ�


# 11.Error: obigo03cstkadp
make[-1-]: *** [obigo03cstkadp.lib] Error 2
make[-1-]: *** [peripheral.lib] Error 2
make[-1-]: *** [postproc.lib] Error 2
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
new


# 12.Error:  �ļ������ȳ���256
F:\11CW1352MP_KM2\build\M105_JX_..\M105_JX_._20181217.bin\M105_JX_.._20181217.bin
�ļ������ȳ���256����������bin�ļ�


# 13.Error: ��ʧ BOOTLOADER �ļ���ԭ��ͬ��(6.12)
M105_..._BOOTLOADER_V005_MT6261_..._ext.bin


# 14.convert.ext ����
// ��Ϊ: ����xp-service3



[2.2] moids error

# 1.KMģ�����಻��, ȱ�ļ�
// F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h
// F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h
cp->
cp F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h


// copy��2���ļ�
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
// ��
cp F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h


# 2.ģ������NV��, ���б���, ɾ���ļ�:
MoDIS_VC9\WIN32FS\DRIVE_C


# 3.ģ����Error: mte_data.h ��}
plutommi\framework\mte\mteinc\mte.h
plutommi\framework\mte\mteinc\mte_data.h ��һ��}�಻��


# 4.ģ����Error:   'shortname' �ļ�������
Run-time check Failure #2 - ... 'shortname' was corrupted
MoDIS_VC9\filesystem\FileSystemInc\FSSim_def.h FSSIM_SFN_LEN  ->19 �18


# 5.ģ����Error:    vs_cfg:
 Stack around the variable XX was corrupted
 ��Ŀ-����-��������-C/C++-���������С�������������ʱ������ó�Ĭ��ֵ
 code->basic runtime checks


# 6.ģ����Error:   exist not modis.exe 
 MoDIS_VC9 ɾ����������


# 7.ģ����Error:    cannot update program database:
modis_vc9\mmi_service\debug\vc90.pdb
��Ŀ���ã�����Ŀ����ALT F7����Ӣ�İ�Ϊ����:
	C\C | General | Debug Information format | C7 Compatible (/Z7)
	C\C | Code Generation | Enable String Pooling | Yes (/GF)
	Linker |Debuging |General Debug Info | Yes (/DEBUG)
���ϱ�����ת�صĶ����������������ʵ�飬ֻ�޸ĵ�һ��ɡ�
�޸ı�����ٴα������������Ĵ����λ�ã��޸ĸô���
Ȼ�󽫸������ûָ�Ϊ�޸�ǰ��ֵ����[�ر�]�Ͳ������cannot update program database������


# 8.ģ����Error: �ն���	
vendor\framework\obigo_Q03C\v1_official\msf\msf_lib\export\msf_log.h #define^MSF_LOG_MSG_ARGS
�ն���
//	#ifdef WIN32
//	#undef  MSF_LOG_MSG_ARGS_(type, modId, msgId, format, s, ...)      
//	#undef MSF_LOG_MSG_NOARG_(type, modId, msgId, format, s)          
//	#undef MSF_LOG_MSG_NOARG(x)                                       
//	#undef MSF_LOG_MSG_ARGS(x)                                        
//	#endif


# 9.Run-Time Check Failure
// Run-Time Check Failure #3 - The variable 'ix' is being used without being initialized.
plutommi\Framework\GUI\GUI_SRC\gui_buttons.c  gui_icontext_button_get_display_area_ex
//ͬ(5.xx)


# 10.δ������쳣
//�޸�VS���ã�Debug -> Exceptions -> Win32 Exceptions ,����Щ�쳣���׳������������г���
//VS�ܸ��˳�����ȷ����ʾ�����ʳ�ͻ������λ���˳�ͻ�Ĵ��롣
#ifdef WIN32
	return;
#endif


# 11.lcd
//_set_lcd_driving_current �Ѿ��� drv_sim.lib(w32_dummy_drv.obj) 
// �ж���	modis_lcd.lib	MoDIS
MoDIS_VC9\drv_sim\src\w32_dummy_drv.c  set_lcd_driving_current



# 12.61d-modis
//
media\audio\src\aud_player_modis.c  kal_int32^_aud_player_modis_get
//#ifndef WIN32
//	                w32_Audio_GetCurrentPosition(self_p->aud_handle, &position);
//#endif



[2.3] 
# 1.�ϵ�
//�˵�Run->Add Breakpoint->Source Breakpoint��
//��Condition��������������Pass count������Ҫ���ԵĴ�����




