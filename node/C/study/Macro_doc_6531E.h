
//Ŀ¼
Save:node\C\study\Macro_doc_6531E.h \[1.1\] Message, keyStatus
Save:node\C\study\Macro_doc_6531E.h \[1.2\] FUN ���-------------
Save:node\C\study\Macro_doc_6531E.h \[1.3\] //lang
Save:node\C\study\Macro_doc_6531E.h \[1.4\] ����
Save:node\C\study\Macro_doc_6531E.h \[1.5\] ˵���ĵ�
Save:node\C\study\Macro_doc_6531E.h \[1.6\] Win����
Save:node\C\study\Macro_doc_6531E.h \[1.7\] tool
Save:node\C\study\Macro_doc_6531E.h \[1.8\] //File-----------------
Save:node\C\study\Macro_doc_6531E.h \[1.9\] test code-------------
Save:node\C\study\Macro_doc_6531E.h \[1.10\] ImageNote
Save:node\C\study\Macro_doc_6531E.h \[1.11\] arm log
Save:node\C\study\Macro_doc_6531E.h \[1.12\] //FontTool
Save:node\C\study\Macro_doc_6531E.h \[1.13\] build time----------
Save:node\C\study\Macro_doc_6531E.h \[1.14\] 
Save:node\C\study\Macro_doc_6531E.h \[1.15\] ATEST_SUPPORT
Save:node\C\study\Macro_doc_6531E.h \[1.16\] fota----------adups
Save:node\C\study\Macro_doc_6531E.h \[1.17\] fota----------rs
Save:node\C\study\Macro_doc_6531E.h \[1.18\] 




[1.1] Message, keyStatus

//	Message �л�
Save:node\C\study\Macro_Spr_MsgId.h
//
// MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);


### __keyKbd__
// --����ֵתʵ��ֵ
Save:node\C\study\Macro_im_8910.h   __keySignal__
//		==>MMK_DispatchMSGKbd
//		====>MMIDEFAULT_ConvertKeyCode
//		======>signal_keycode:w/66/0x42/SCI_VK_W
//		======>key_code:      w/41/0x29/KEY_W
//		====>KPD_DOWN:
//		====>HandleMSGKbd
//		======>MMK_DefaultMSGKbd                    # ����/������/������/handset
//		========>other:
//		==========>green:
//		==========>MMIAPICC_SendMsgToApplet(KEY_PRESSED + keycode, PNULL);
//		==========>end:
//		==========>MMIAPICC_ReleaseCallByRedkey();
//		========>DefaultIsRespond
//		======>GetMultiKeyTPParam
//		========>cur_key_num:      0
//		======>MMK_DispMsgToWin                     # ���ڴ���
//		========>MMK_DispMsgToFocusWin
//		==========>MMK_DispatchToHandle             # --WINDOW
//		============>WINDOW:
//		============>MMK_DefaultProcessWinMsg
//		==============>MMK_RunWinHookProc
//		================>.MMK_RunCtrlProc

//		============>MMK_RunWinProc                 # --win_handle
//		==============>.ProcessMsg
//		==============>CC_HandleCcWinMsg            # --key--kbd--call
//		============>MMK_ProcSpecialWinMsg          # --win_handle
//		======>MMK_DefaultMSGKbdLater               # ϵͳĬ�ϴ���
//		========>���/earphone/earphone/CAM/ScreenPhoto
//		======>MMK_HandlePublicKey                  # 
//		================>
//		==================>
//		====================>
//		======================>
//		========================>
//		==========================>

### __keySig__
// --
//		==>DispatchSysSig
//		====>MMICC_HandlePsMsg
//		======>APP_MN_CALL_DISCONNECTED_IND
//		========>MmiDestroySignal
//		============>MmiSendSignal
//		==============>
//		================>
//		==================>
//		====================>
//		======================>
//		========================>
//		==========================>
//		============================>
//		==============================>
//		================================>



### --key--dial--down
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # KPDSVR
//		======>MMK_DispatchMSGKbd                   # KPD_DOWN/KPD_UP
//		========>HandleMSGKbd
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_RunWinProc             # win_handle
app:idle\c\mmiidle_dial.c  MMI_RESULT_E^HandleDialWinMsg


### --key--dial--red
//		========>HandleMSGKbd
//		============>BaseFlexCtrlHandleMsg
//		===============>RED:
//		================>.is_handle_red_key
//		========>GUIEDIT_SetHandleRedKey(FALSE, _CTRL_ID);  # ����


### --key--dial--long--log
//	64023 MSG_KEYDOWN_CANCEL
//	57397 MSG_NOTIFY_EDITBOX_IMSYNC_CURSOR //1~3
//	e030  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM //1~3
//	fd17  MSG_KEYPRESSUP_CANCEL

### --key--dial--longCancel
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # KPDSVR
//		======>MMK_DispatchMSGKbd                   # 
//		========>HandleMSGKbd                       # status:65024, code:23
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_DefaultProcessWinMsg   # ctrl_handle
//		==================>MMK_RunCtrlProc
//		====================>PhoneNumEditCtrlHandleMsg  # IGUICTRL_HandleEvent
//		======================>BaseFlexCtrlHandleMsg  # MSG_KEYREPEAT_CANCEL
//		========================>HandleTextCancelKey
//		==========================>BASEFLEX_DelString
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # P_APP
//		======>MMK_DispatchMSGTimer                 # APP_TIMER_EXPIRY
//		========>MMK_HandleKeyLongPressTimer        # KBD_TIMER
//		==========>SaveKeyLongDownStatus
//		============>is_long_press = TRUE
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # 
//		================>MMK_DefaultProcessWinMsg   # ctrl_handle
//		==================>MMK_RunCtrlProc
//		====================>PhoneNumEditCtrlHandleMsg  # IGUICTRL_HandleEvent
//		======================>BaseFlexCtrlHandleMsg  # MSG_KEYLONG_CANCEL
//		========================>HandleTextCancelLong
//		========>MMK_HandleKeyRepeatPressTimer      # KEY_REPEATED
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_RunWinProc             # win_handle
ctrl:editbox\c\ctrlbaseflex.c  MMI_RESULT_E^BaseFlexCtrlHandleMsg
//		==========================>AppHandle            # CURSOR


### __keyStatus__
### --key--timer
//		========>TimerCallBack
//		==========>MmiCreateSignal
//		============>
//		==============>
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # 
//		======>MMK_DispatchMSGKbd                   # ����ת��һЩ����ֵ
//		========>MMIDEFAULT_ConvertKeyCode
//		==========>[SHIFT]: 
//		============>96 = 0x60 => {SCI_VK_SHIFT, 0x47} => 0x47 = 71 => KEY_SHIFT
//		========>SaveKeyDownStatus                  # KPD_DOWN, �ఴ����֪��֧��֧��
//		==========>MMK_StartWinTimer                # 1.5s (long) 0.3s (repeat)
//		============>StartAppTimer
//		========>HandleMSGKbd
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # P_APP
//		======>MMK_DispatchMSGTimer                 # APP_TIMER_EXPIRY
//		========>MMK_HandleKeyLongPressTimer        # KBD_TIMER
//		==========>SaveKeyLongDownStatus
//		============>is_long_press = TRUE           # ==>longUp msg
//		==========>HandleMSGKbd
//		========>MMK_HandleKeyRepeatPressTimer      # KEY_REPEATED
//		==========>SaveKeyRepeatStatus
//		==========>MMK_StartWinTimer
//		==========>HandleMSGKbd
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # 
//		======>MMK_DispatchMSGKbd                   # 
//		========>SaveKeyUpStatus                    # KPD_UP
//		==========>MMK_StopTimer
//		========>HandleMSGKbd


### --key--idle--long--ok
//		======>case MSG_APP_OK      //0
//		======>case MSG_CTL_OK      //0
//		======>case MSG_APP_OK      //1
//		======>case MSG_KEYUP_OK    //1
//		======>case MSG_KEYLONG_OK  //1
//		======>case MSG_TIMER       //+ ����û��
app:idle\c\mainapp.c  IdleWin_HandleMsg
//		======>case MSG_APP_OK      //0
//		======>case MSG_CTL_OK      //0
//		======>case MSG_KEYUP_OK    //1
app:idle\c\mmiidle_cstyle.c   MMIIDLE_CommonHandleMsg
//		======>case MSG_KEYUP_OK    //1
app:keylock\c\mmikl_keylock.c  MMIKL_HandleKLDispWinMsg
//		======>case MSG_KEYUP_OK    //1 û��
source:mmi_app\common\c\mmi_pubwin.c  MMIPUBHandleWinMsg

### --key--idle--long--cancel
//		======>case MSG_APP_CANCEL
//		======>case MSG_CTL_CANCEL
//		======>case MSG_KEYUP_CANCEL
//		======>case MSG_KEYLONG_CANCEL
app:idle\c\mainapp.c  IdleWin_HandleMsg


### __keySlide__
//		==>HandleMSGKbd
//		====>MMK_DefaultMSGKbd        # ����/������/������/handset
//		====>MMK_DispMsgToWin         # ����
//		====>MMK_DefaultMSGKbdLater   # ����
//		====>MMK_HandlePublicKey      # ��������
//		====>MMIBT_HandleBTKey        # BT
### --������/vol
//		==>MMK_DefaultMSGKbd
//		====>DefaultBackLight   # ���⴦��
//		======>KEY_PRESSED:
//		========>.is_halt       # ����
//		========>.halt_back     # Ԥ����
//		========>MMIDEFAULT_TurnOnBackLight
//		==========>MMIDEFAULT_TurnOnLCDBackLight
//		====>DefaultIsRespond   # �Ƿ���Ӧ
//		======>.s_is_down_keystatus_backlight_on
//		==>MMK_DefaultMSGKbdLater
//		====>DefaultSideKey     # �������/vol
//		========>.!is_key_lock  # ���ǲ�����
//		========>MMIDEFAULT_TurnOnBackLight
//		========>.is_halt       # ��������
### --����
//		==>APP_Task
//		====>MMK_DispatchExtSig
//		======>MMK_DispatchMSGTimer
//		========>MMIDEFAULT_HandleBackLightOver
### --����
//		==>CloseAllLight
//		========>MMIDEFAULT_TurnOffBackLight
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOnBackLight
### --fm
//		==>HandleMSGKbd
//		====>MMK_HandlePublicKey
//		======>GPIO_SIG1:
//		========>MMIAPI_FM_ONOFF
### --flip
//		==>MMK_DefaultMSGKbd
//		====>DefaultFlip          # 
//		======>
//		==>MMK_HandlePublicKey
//		====>MSG_KEYDOWN_FLIP:    # �ϸ�
//		======>HandleFlipDown     # ����idle
//		====>MSG_KEYDOWN_FLIP:    # �ϸ�
//		======>recode = FALSE     # ����FALSE ��bg mp3
//		========>MMIDEFAULT_HandleFlipKey
//		======>do()               # ������ MSG_APP_CANCEL
//		======>MMK_PostMsg(MSG_APP_CANCEL)
//		========>play mp3         #
//		==>MSG_KEYUP_FLIP:        # ����FALSE �������ʱ���ǲ����� (���ǵ�ʲôԭ��)
app:accessory\c\mmicountedtime_main.c  MMIAPICT_HandleCountedTimeArriveWin



[1.2] FUN ���
//	FUN ���
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 
//
Save:node\C\study\Macro_res_8910.h __lang__



[1.4] ����
### 6531D������
common\nv_parameters\S036_MB
MS_Customize\source\product\config\S036_MB
MS_Customize\SC6530_S036_MB_vm
version\SC6530_S036_MB_version.c


//
CUSTOMER = SE828_2IN1_ZYM
PRODUCT_CONFIG = SE828_MB
PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB
//
make\version\version.mk  PRODUCT_CONFIG


### 8910�����Ӳ (row = newV /oldV)
// prdt
prj:nvitem/ProductionParam_uix8910.nvm  1393 = 0x5 /0x0
prj:nvitem/ProductionParam_uix8910.nvm  1403 = 0x7 /0x0
// rf
prj:nvitem/RF_nv.nvm  42069 = 0xD013B / 0xD0199
prj:nvitem/RF_nv.nvm  42130 = 0xD013B / 0xD0199
// rename
prj:nvitem/audio_sc6531efm.nvm
prj:nvitem/audio_sc6531efm_AEC.nvm
prj:nvitem/
// ver
Custom_Copy.bat  project\config_nv
prj:nvitem/hw_ver00.nv
prj:nvitem/hw_ver01.nv
// mk
prj:uis8910_phone_base_config.cfg  FORCECHANGE_SUPPORT  = TRUE
prj:uis8910_phone_user_base_config.cfg  FORCECHANGE_SUPPORT  = TRUE




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

// Version--Out -- bg
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1
"#*8378#2#", "####0000#", 
// Version--3
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2
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
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_HW_VERSION
"*#999#", "*#523#",

// IMEI
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SET_SIM_IMEI_ALL
"*#333#", "*#0066#", "*#3184#"; "*#06#",

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

### 
//--v--time,data,vol
//MMIENG_IDLE_DIAL_NUM_PHONE_INFO
//--v--mk--sw--hide
//MMIENG_IDLE_DIAL_NUM_SW_VERSION
//--v--8910--outV, HW closed
//MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1,
//--v--8910--outV, HW closed
//MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2,
//--l--no use
//MMIENG_IDLE_DIAL_NUM_MONKEY_TEST_AUTOSET,
//--t--nv error
//MMIENG_IDLE_DIAL_NUM_NV_COUNTING,
//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUDIO_DEMO,
//MMIENG_IDLE_DIAL_NUM_VIDEO_DEMO,
//MMIENG_IDLE_DIAL_NUM_MEDIA_DEMO,
//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUTO_LOG,
//MMIENG_IDLE_DIAL_NUM_LOG_OFF,
//--wa01u, mk,
//MMIENG_IDLE_DIAL_NUM_SHOW_VERSION3, //��ʾ����汾��Ϣ



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
	





[1.13] build time

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


### fota
// ==>����
patch:ssh\Macro_user_psw.h  __abup__


[1.17] fota----------rs
// mk--8910
prj:{cfg}.cfg  FOTA_SUPPORT = REDSTONE
// mk--8910--���ڴ�
prj:{cfg}.cfg  FOTA_SUPPORT_REDSTONE_FLASH_B = TRUE
// mk--107
prj:project_{cur}.mk  FOTA_SUPPORT = REDSTONE
prj:project_{cur}.mk  FOTA_SUPPORT_REDSTONE_NAME_T6B = TRUE
// mk
prj:project_{cur}.mk  FOTA_SUPPORT = NONE


### fota
// ==>����
patch:ssh\Macro_user_psw.h  __redstone__


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


### fota--lcd
//
MS_Customize/source/product/config/uis8910ff_refphone/lcm_cfg_info.c  LCD_DRV_ID_NV3030B
fdl_bootloader/fota_bootloader/src/tf_lcd/src/tf_lcmcfg.c  LCD_DRV_ID_NV3030B
Third-party/rsfota/rsdl/porting/UIS8910/src/rs_param.c  INSTALL_TIME_START_CLOCK
fdl_bootloader/nor_bootloader/src/fdl_main.c  flash_size
make/fota_bootloader/fota_bootloader.mk  tft_NV3030B
make/perl_script/UIX8910_128MBIT.xml  FOTA_BOOTLOADER
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  FOTA_BOOTLOADER


###
// ����ʱ��ʾ����
prj:project_{cur}.mk  BM_FOTA_SHOW_PROGRESS = FALSE

// 
prj:project_{cur}.mk  SPDE_FOTA_TIP = TRUE
// �Ƴ�������
prj:project_{cur}.mk  SPDE_FOTA_REMOVE_PROGRESS = TRUE
// ��������ͼƬ
prj:project_{cur}.mk  SPDE_FOTA_TIP_USE_GRAY_IMG = TRUE


### ����
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




[1.18] 



