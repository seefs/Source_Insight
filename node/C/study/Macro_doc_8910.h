
//Ŀ¼
Save:node\C\study\Macro_doc_8910.h \[1.1\] Message, keyStatus
Save:node\C\study\Macro_doc_8910.h \[1.2\] FUN ���-------------
Save:node\C\study\Macro_doc_8910.h \[1.3\] 
Save:node\C\study\Macro_doc_8910.h \[1.4\] 
Save:node\C\study\Macro_doc_8910.h \[1.5\] ˵���ĵ�
Save:node\C\study\Macro_doc_8910.h \[1.6\] Win����
Save:node\C\study\Macro_doc_8910.h \[1.7\] tool
Save:node\C\study\Macro_doc_8910.h \[1.8\] 
Save:node\C\study\Macro_doc_8910.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_8910.h \[1.10\] ImageNote
Save:node\C\study\Macro_doc_8910.h \[1.11\] arm log
Save:node\C\study\Macro_doc_8910.h \[1.12\] //FontTool
Save:node\C\study\Macro_doc_8910.h \[1.13\] build/time----------
Save:node\C\study\Macro_doc_8910.h \[1.14\] 
Save:node\C\study\Macro_doc_8910.h \[1.15\] ATEST_SUPPORT
Save:node\C\study\Macro_doc_8910.h \[1.16\] fota----------adups
Save:node\C\study\Macro_doc_8910.h \[1.17\] fota----------rs
Save:node\C\study\Macro_doc_8910.h \[1.18\] T������
Save:node\C\study\Macro_doc_8910.h \[1.19\] 
Save:node\C\study\Macro_doc_8910.h \[1.20\] 




[1.1] Message, keyStatus

//	Message �л�
Save:node\C\study\Macro_Spr_MsgId.h
//
// MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);




[1.2] FUN ���
//	FUN ���
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 



[1.4] 






[1.5] ˵���ĵ�
SC6530ƽ̨_application_notes.doc				  ###  ��˵��			   
Universe�ֻ�ʹ��˵��.docx 					   ###	�ֻ�ʹ��˵��
Build_Environment_Manual.doc ###  ���뻷��




[1.6] Win����
//
VIRTUAL_WIN_ID
//
MMI_BASE_NODE_T    # ����ת WINDOW_NODE
MMI_HANDLE_NODE_T
MMI_TREE_NODE_T    HANDLE
MMI_HANDLE_T		HANDLE_NODE + APPLET_NODE	 #Ӧ��

MMI_WINDOW_T		
MMI_WINDOW_NODE_T		 NODE + WINDOW + HANDLE
MMI_WINDOW_TABLE_CREATE_T	 ����
MMI_WINDOW_CREATE_T 	   ����
MMI_APPLET_NODE_T		 
MMI_ZORDER_SYSTEM_T
MMI_ZORDER_NODE_T		 WINDOW_NODE + ����

MMI_APPLET_SYSTEM_T

MMI_CTRL_NODE_T
MMI_CONTROL_CREATE_T	����

MMI_MESSAGE_PTR_T 
CAF_GUID_T			 module_manager
GUIMENU_GROUP_T

GUI_POINT_T
GUI_RECT_T
MMI_WIN_ID_T
MMI_IMAGE_ID_T
GUI_LCD_DEV_INFO
IMG_RES_SRC_T		 ��ʾͼƬ
CAF_GUID_T	  
MMI_MODINFO_NODE_T	  kernelģ�����Ϣ
CAF_RES_T
CAF_HANDLE_T
RES_NODE_DATA_T

IMG_RES_DST_T	 ��ʾ
IMG_RES_SRC_T


//		==>CTRLBASE_OBJ_T
//		====>win_handle
//		====>handle
//		====>ctrl_id
//		======>
//		========>



[1.7] tool
//
down:\\
// �Զ�����
down:\UpgradeDownload_R25.21.1401\Bin\
down:\UpgradeDownload_R25.21.1401\Bin\UpgradeDownload.exe
// ��ʽ������
down:\ResearchDownload_R25.21.1401_\ResearchDownload_R25.21.1401\Bin\
down:\ResearchDownload_R25.21.1401_\ResearchDownload_R25.21.1401\Bin\\UpgradeDownload.exe




[1.8] 




[1.9] test code
### __code__

// SAR
//app:eng\c\mmieng_base.c  SAR

// BUILD
app:eng\c\mmieng_base.c  BUILD



// Phone
"#*8378#0#", "*#222#", "*#15963#", "####1111#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_UI_TEST1

// UI
"####1111#", "*#87#", "*#666#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_FULL_TEST

// Item
app:eng\c\mmieng_main.c  MMIENG_IDLE_ITEM_TEST
 "*#777#", "*#66*#", "*#79*#",
 
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


//--v--mk--sw--hide
//app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SW_VERSION

// Version--Out -- bg
"#*8378#2#", "####0000#", 
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1

// Version--2
"*#888#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2

// Version--3--wa01u, mk,//��ʾ����汾��Ϣ
//"*#888#",
//app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION3


// Chip
"#*8378#5#",

// NV
"#*786646468#",

// Monkey--no use
"#*8378#8#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_MONKEY_TEST_AUTOSET

// TFload
"#*8378#9#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_TFLOAD_ENTER

// ALLSVN -- bg
"#*786837#",

// HW
"*#999#", "*#523#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_HW_VERSION

// IMEI
"*#333#", "*#0066#", "*#3184#"; "*#06#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SET_SIM_IMEI_ALL

// Reset
"*#119*#", "*#70#",

// __ELECTRIC__
"*#2010#"; "*#0808#"; "*#0809#", 
app:eng\c\mmieng_main.c  MMIENG_ELECTRIC_GUARNTEE_CARD_RESET

// SALES_TRACKER
app:eng\c\mmieng_main.c  MMIENG_IDLE_SALES_TRACKER_SETTING
"*#55555#"

// test code
app:eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
//    {
//         "#1#",
//         MMIENG_IDLE_DIAL_NUM_UI_TEST2, //func id
//         PARS_MANUFACTURE_TEST,         //��ʹ��
//         MMIAPIENG_StartUITest
//    }

// imsi:
SpdeShow3GIMSIInfo


### 
//--v--time,data,vol
//MMIENG_IDLE_DIAL_NUM_PHONE_INFO


//--t--nv error
//MMIENG_IDLE_DIAL_NUM_NV_COUNTING,

//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUDIO_DEMO,
//MMIENG_IDLE_DIAL_NUM_VIDEO_DEMO,
//MMIENG_IDLE_DIAL_NUM_MEDIA_DEMO,

//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUTO_LOG,
//MMIENG_IDLE_DIAL_NUM_LOG_OFF,



### ����鿴
// ����6~8λ
//		==>####8888#������, simlock
//		==>�����л�
app:parse\c\mmiparse_dial.c  MMIAPISET_ParseSIMLockSwitchString
//		==>IMEI; "*#06#",
app:parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr

### reset
Save:node\C\study\Macro_app_8910set.h  __reset__


[1.10] ImageNote

//�鿴ͼ���Ƿ����
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_QUERY
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_SUCCESS  
//
images:common\MMI_RES_DEFAULT\IMAG\Pubwin\PDA

images:clock\MMI_RES_DEFAULT\IMAG\Alarm\IMAGE_CLOCK_ALARM_ALERT.png
images:clock\MMI_RES_DEFAULT\IMAG\Alarm



//�鿴ͼ���Ƿ����
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_PUBWIN_QUERY




[1.11] arm log
//
//	�ͻ����ã�
//
//	���æ���ṩһ��log����Ҫ�޸�һ��nv: AUDIO\AUDIO_ARM\Handsfree\AudioStructure\reserve\reserve[63]=0x131D
//	����ǰ���跢��ATָ�
//	DSP��dump���أ�
//	����
//	AT+SPDSPOP=2
//	AT+SPDSP=65535,0,0,4096
//	nv�޸ĺ�at�ǿ���arm �� dsp��ͨ������dump���������ݻᷢ�͵�log�logץ����ط�һ��log��
//	Ȼ��ֱ��� Tool -> audio Arm Transfer -> Transfer �� Tool -> audio DSP Transfer -> Transfer 
//	�����������*.pcm�ļ��� ˵��logץȡ�ɹ���
//	лл��




[1.12] 
	





[1.13] build/time

// Ĭ�ϳ�������
prj:project_{cur}.mk   DEFAULT_FACTORY_YEAR_MONTH_DAY

// DisplaySystemDate
app:setting\c\mmiset_datetime.c DEFAULT_FACTORY_YEAR_MONTH_DAY
// DisplaySystemDate
app:setting\c\mmiset_display.c DEFAULT_FACTORY_YEAR_MONTH_DAY
// DisplaySystemDate
app:setting\c\mmiset_func.c DEFAULT_FACTORY_YEAR_MONTH_DAY
MMIAPISET_GetCurrentDateStr
RestoreDataTimeFactorySetting
MMIAPISET_IsNeedResetDateTime


### Jenkins������
//	Jenkins�������ϣ������Լ�git���̱�����������������Ҳ�����˽��£�
//	1��jenkins�ĶԴ���ĸ��´���
//	2���������Ӽ��� git clean ����
//	3���������Ӹ��� HW_NV_PARA�Ĳ�����HW_NV_PARA���ڷ�����������һ��Ŀ¼
//	4��copy HW_NV_PARA���Ŀ¼������ļ���SPDE_PRJ��Ӧ��Ŀ��nvĿ¼��
//	5�������ʱ���������Ŀ��bat�ļ������SPDE_PRJ��nv�ļ�����Դ�ļ����Ƶ�������������Ŀ¼
//	6����ʼ�����ı���


### bat
// ���ر������û��copy RDNV����������������copy RDNV


### make
//		==>
//		====>
make.bat
make\make_cmd\


### ����ʱ��
//gettime.pl


### ʡ�ռ�
//
Save:node\C\study\Macro_Spr_mem.h


### build time
// build time
Save:node\ToolsMsg\Macro_win10.h  __Buildtime__


### ��ʾlog
//.PHONY:all
//all: 
//ifneq ($(strip $(NVITEM_DIR)), )
//	@echo ____CWR:$(strip $(NVITEM_DIR))____
//endif
//ifneq ($(strip $(CWR)), )
//	@echo ____CWR:$(strip $(CWR))____
//endif


### ����win7
//	ifeq ($(strip $(CUR_SYS)), WIN7)
//		# �޷���copy #$(COPY_FILE)
//	else
//		MSRCPATH +=  build/$(PROJECT)_builddir/tmp
//	endif
make\app_main\app_main.mk  _ui_special_effect_table
//
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\Custom_set_env.bat


[1.14] 


[1.15] ATEST_SUPPORT
// ATEST Ĭ�ϲ���, û����Ŀ��
make\app_main\app_main.mk  ATEST_SUPPORT



[1.16] fota----------adups
// mk
prj:project_{cur}.mk  ABUP_FOTA_SUPPORT_TCARD = FALSE


### fota--adups--107
//
//		==>BLOCK  128
SPDE_PRJ\S98T_FLP_E535_31\adups_define.h
//
fdl_bootloader/fota_bootloader/src/tf_display.c
//		==>adups_net_start_get_new_version()
//		==>ADUPS_get_download_percent()  # ���ؽ���
//		==>adups_patch_ratio             # ��������
//		==>GetMainStates                 # state//�汾��
Third-party\adups\hal\src\adups_device.c  adups_get_device_version()


// addr
Third-party\rsfota\rsupdate\src\rs_ua_porting.c  rs_fota_addr
// 1.���ƽ̨ > ������Ŀ
// 2.����汾 v01 v02
// 3.������ְ����Զ�����
//		==>BLOCK  128 (���ܸ�)
//		==>Ŀ��    v2
//		==>ǰ��    v1
//		==>RAM    3072 (���ܸ�)
// 4.�豸imei����

// copy NV
make\perl_script\adups.pl  img_deltanv_src


// 1.������������ʾ����������
// 107��nand
fdl_bootloader\tf_fdl\src\tf_main_nand.c  TF_PM_Init
// 2.��ʾ������
//		==>main ()
//		====>.test()
//		====>AUDPSProcedure
//		======>adups_patch_ratio(0)   # ʵ�ʲ���0%
//		======>adups_patch_ratio(100)
//		========>
//		==========>
//		============>
//		==============>
Third-party\adups\hal\src\adups_bl_main.c  adups_patch_ratio
//	TF_ShowProgress(ratio,100);//zgq add
fdl_bootloader\bootloader\src\boot1_main.c  TF_SetLcdBackLight
//	TF_SetLcdBackLight (FALSE, 0x0);
//	TF_LedParamInit();



### fota
// ==>����
patch:ssh\Macro_user_psw.h  __abup__


[1.17] fota----------rs
// mk
// --8910
prj:{cfg}.cfg  FOTA_SUPPORT = REDSTONE
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_NAME_T6B = TRUE
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_FLASH_B = TRUE      # ���ڴ�
// --107
prj:project_{cur}.mk  FOTA_SUPPORT = REDSTONE
prj:project_{cur}.mk  FOTA_SUPPORT = NONE      # ��


### fota
// ==>����
patch:ssh\Macro_user_psw.h  __redstone__
// fota_file
Save:node\C\study\Macro_patch_third.h  __fota_file__


### fota--8910
// ��ȡ�ͺ�
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  get_OEMDevice

// 1�����ؼ�⣺
// --����һ�ְ�
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_first_check_cycle()
//	return (90*1000);//���������׶����ò���

// --24Сʱ����
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_auto_check_cycle()
//	return (24*60*60*1000);//���������׶����ò���


// 2����װ��⣺2-5�㣬30�������ڣ��������У����������
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_bool^rs_sys_localtime_fit_for_install
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  INSTALL_TIME_END_CLOCK
//	#define INSTALL_TIME_START_CLOCK  22 // 2
//	#define INSTALL_TIME_END_CLOCK  1823  //5
//	#define INSTALL_AUTO_CYCLE_TIME  (30*60*1000) //(2*60*60*1000) //2Сʱ


// 3����װʱ�䣺����а��󣬻���2-5�㣬���һ��ʱ��


### fota--lcd����
// --lcd
MS_Customize/source/product/config/uis8910ff_refphone/lcm_cfg_info.c  LCD_DRV_ID_NV3030B
fdl_bootloader/fota_bootloader/src/tf_lcd/src/tf_lcmcfg.c  LCD_DRV_ID_NV3030B
Third-party/rsfota/rsdl/porting/UIS8910/src/rs_param.c  INSTALL_TIME_START_CLOCK
fdl_bootloader/nor_bootloader/src/fdl_main.c  flash_size
make/fota_bootloader/fota_bootloader.mk  tft_NV3030B
// --NVδ������������
make/perl_script/UIX8910_128MBIT.xml  FOTA_BOOTLOADER
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  FOTA_BOOTLOADER


### ��ʾ
// ����ʱ��ʾ����
prj:project_{cur}.mk  BM_FOTA_SHOW_PROGRESS = FALSE

// 
prj:project_{cur}.mk  SPDE_FOTA_TIP = TRUE
// �Ƴ�������
prj:project_{cur}.mk  SPDE_FOTA_REMOVE_PROGRESS = TRUE
// ��������ͼƬ
prj:project_{cur}.mk  SPDE_FOTA_TIP_USE_GRAY_IMG = TRUE


### ������fota��̨, ͬһ��������������Թ���
// --rs_fota_size, ������ͷ��
//flash_size=0x01000000
//sect_size=0x00010000
//ps_addr=0x60020000
//rs_fota_addr=0x60630000
//rs_fota_size=0x00100000
//fota_bootloader_addr=0x60730000
//cp_addr=0x60B30000
//cp_size=0x00300000
//mmi_res=0x60760000
//mmi_res_size=0x003D0000




[1.18] T������
### 8910
prj:{cfg}.cfg  TF_LOAD_SUPPORT = TRUE  
prj:{cfg}.cfg  F_LOAD_PROTECT = FALSE  

### UMS9117--FAQ202172534
prj:project_{cur}.mk  TF_LOAD_SUPPORT   # ���뿪���ú�
prj:project_{cur}.mk  F_LOAD_PROTECT    #
// TRUE: ���TF BOOTLOADER����������һ��SECTOR������֧��ǿ������,��T���ϲ��÷�tfboot.bin��Ĭ��֧�����ַ�ʽ
// FALSE: ֻ֧�ֹ���ģʽ��T������,��T���ϱ������.pac��T��������tfboot.bin��Ĭ�ϲ�֧�����ַ�ʽ��

// ��������
//�� ��T�����½�Ŀ¼ bl_update ���ڸ�Ŀ¼�·���tfload.pac(����Ҫ������PAC�ļ�����Ϊtfload.pac)
//�� ������ʽ:

// A. ǿ������--��ϼ���
// ǿ��������ָ���ֻ�����������������BOOTû���𻵵�����£�ʹ����ϼ���һ���ǳ���2S���ң�ֱ��������
// ������벻��ǿ���������棬��˵��BOOT�ļ���,����ʹ��PC���߲����������س���
// ǿ���������̣�����ͨ���ֻ������û���Ϣ��

// ����ǿ��������ʽΪ�����ڹػ�״̬�°�: KEYIN_0_KEYOUT_0 �� KEYIN_1_KEYOUT_1 �� POWER ����ϼ���
// ����ǿ��������ʽҪ�󣨳�BOOT�����ƻ�����������⣩�����������г��ֶϵ���쳣����£�
// Ҳ����ͨ��ǿ��������ʽ��������(��ͷ���ز��Ƕϵ�����)�����κ�����¶������ƻ�У׼������

//ע�� KEYIN_0_KEYOUT_0 �� KEYIN_1_KEYOUT_1 ��Ӧ�İ�����ο� keymap_cfg.c (UMS9117 ƽ̨�ο��ֻ���Ӧ����KEY3��OK��)��
// ����ʹ��������ϼ�������ݾ���оƬ��SPEC�޸�tf_load.c�е� TF_EnterVerify()��

//B. �Զ�����
// �Զ�������ָ�ֻ����ܹ�����������£�ͨ����IDLE������������ϼ�: #*8378#9# ���빤��ģʽ���������水��ʾ����������

###
driver:tf_load\src\tf_load.c  TF_EnterVerify
//		==>ok+CALL,ʵ��ok+CALL+�����+Red
config:keymap_cfg.c  KEYMAP_CONFIG
//  keyRawIntSts, ����İ��������ֵ����
//  0~15���Լ�����ƿ��԰�ֵ�Գ���

###
//		==>HandleTFLoadWinMsg
//		====>TF_LoadInit
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_TFLOAD_ENTER


###
// --key--����
Save:node\C\study\Macro_doc_8910key.h  __keyPhy__
// error
patch:node\bug\Macro_bug_other.h  __tf_load__


[1.19] 




[1.20] 



