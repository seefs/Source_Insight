
//Ŀ¼:
Save:node\C\study\Macro_app_8910sms.h \[1.1\] enter
Save:node\C\study\Macro_app_8910sms.h \[1.2\] edit       # д����
Save:node\C\study\Macro_app_8910sms.h \[1.3\] list
Save:node\C\study\Macro_app_8910sms.h \[1.4\] detail
Save:node\C\study\Macro_app_8910sms.h \[1.5\] mst
Save:node\C\study\Macro_app_8910sms.h \[1.6\] sales
Save:node\C\study\Macro_app_8910sms.h \[1.7\] voicemail
Save:node\C\study\Macro_app_8910sms.h \[1.8\] MMS
Save:node\C\study\Macro_app_8910sms.h \[1.9\] CB
Save:node\C\study\Macro_app_8910sms.h \[1.10\] SmsNum
Save:node\C\study\Macro_app_8910sms.h \[1.11\] SmsModis
Save:node\C\study\Macro_app_8910sms.h \[1.12\] AoledaCard
Save:node\C\study\Macro_app_8910sms.h \[1.13\] SpdeCard
Save:node\C\study\Macro_app_8910sms.h \[1.14\] SmsTpInput
Save:node\C\study\Macro_app_8910sms.h \[1.15\] 
Save:node\C\study\Macro_app_8910sms.h \[1.16\] 
Save:node\C\study\Macro_app_8910sms.h \[1.17\] 




[1.1] __enter__

// list--enter
//		==>MMISMS_EnterSMSMainMenuWin
//		====>MMISMS_MENUWIN_TAB
//		======>InitPdaSmsMainListCtrl
app:sms\c\mmisms_mainmenuwin.c  HandleSmsMainMenuWinMsg

// --sms--option
app:sms\c\mmisms_editsmswin.c  HandleEditMenuWinMsg
// --sms--option--save  APP_MN_SMS_MEM_FULL_IND
app:sms\c\mmisms_editsmswin.c  EditSMSWin_SaveSMS



[1.2] __edit__     # д����

//2.edit, д����
// edit--enter
//		==>MMISMS_OpenWriteWin
//		====>MMISMS_WriteNewMessage
//		======>MMISMS_WriteNewMessageEx
//		========>MMISMS_EnterSmsEditWin
//		==========>MMISMS_EDIT_SMS_WIN_TAB
app:sms\c\mmisms_editsmswin.c  HandleEditSmsWinMsg
// edit--input pbNum
//		==>



[1.3] __list__

//2.sms--list
app:sms\c\mmisms_mainmenuwin.c  HandleMsgBoxMainWindow
// sms--list--mt
//		==>FOCUS:
//		====>MMISMS_LoadSmsListFromOrder
//		======>MMISMS_ListSmsFromOrder
//		========>MMISMS_BOX_MT:
//		==========>FormListFromLinkhead    # format
//		==>DATA:
//		====>MMISMS_SetListItemData
//		======>MMISMS_GetSmsInfoFromOrder
//		======>FormListBoxItem             # time
app:sms\c\mmisms_messageboxwin.c  HandleMtBoxChildWinMsg
// sms--list--fail
//		==>FOCUS:
//		====>MMISMS_LoadSmsListFromOrder
//		======>MMISMS_AppendEmptyStr2List
app:sms\c\mmisms_messageboxwin.c  HandleSendFailBoxChildWinMsg
// sms--list--unread
app:sms\c\mmismsapp_order.c  MMISMS_ListSmsFromOrder



[1.4] __detail__


//3.detail


### ������
//		==>SMSAPPNewEventCallback
app:sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
app:sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND
//		==>MMISMS_ShowNewMsgPrompt
//		====>ShowNewMsgPrompt
//		======>MMIPUB_OpenAlertWinByTextPtr
app:sms\c\mmisms_commonui.c  MMISMS_HandleNewMsgWin

### δ������
// mainmenu--sms--num
//		==>MatrixMenuDraw
//		====>MatrixMenuDrawItem
//		======>MMITHEME_DrawMainmenuItem
app:sms\c\mmisms_api.c MMIAPISMS_GetAllUnreadMsgCount



[1.5] __mst__

//4.mst--107
//		==>
app:sms\c\mmismsapp_main.c  Handle_MST_1_MainMenuWindow
app:sms\h\mmisms_app_mst.h  MMI_SMS_MST_APP_MENU_NODE_0
app:sms\h\mmisms_id.h  MMI_SMS_MST_APP_0_CTRL_ID

### mst
// mst--enter
source:mmi_app/common/h/common_mdu_def.h  VIET_MST
source:mmi_app/app/mainmenu/c/mmi_mainmenu_data_240X320.c  VIET_MST
source:mmi_app/common/h/mmi_menu_id.def  VIET_MST
// mst--str
source:mmi_app/app/sms/h/sms_mdu_def.h  VIET_MST
// mst--winId
source:mmi_app/common/h/mmi_id.def  VIET_MST
// mst--ctrlId
source:mmi_app/app/sms/h/mmisms_id.h  VIET_MST
// mst--nodeId
source:mmi_app/app/sms/h/
source:mmi_app/app/sms/h/mmisms_app.h  VIET_MST
source:mmi_app/app/sms/h/mmisms_app_mst.h
// mst--menu
source:mmi_app/app/sms/c/mmismsapp_main.c  VIET_MST



[1.6] __sales__
//
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SUPPORT 				= TRUE
prj:project_{cur}.mk   SPDE_SALES_TRACKER_FOR_T5_W53			= TRUE ###ʱ�䣬���պ������ĺ���
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SETTING_SUPPORT		= TRUE ###���ò˵�
prj:project_{cur}.mk   SPDE_SALES_TRACKER_RESEND_SMS_IF_FAILED 	= TRUE	###����׷�ٷ�����Ϣʧ�ܺ�(�ڲ������������)��������
prj:project_{cur}.mk   SPDE_SALES_TRACKER_CODE_XJ123XJ			= TRUE	###��ѯָ��*#4695#
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SAVE_SEND_STATUS_AFTER_CLEAR_DATA = TRUE
prj:project_{cur}.mk   SPDE_SALES_SIM1_FAILE_USE_TO_SIM2		= TRUE ##��1  ʧ�ܾ��ÿ�2
// other
prj:project_{cur}.mk   SPDE_SALES_TRACKER_OTHER_NUMBER_SUPPORT
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SETTING_ADD_SMS_SHOW
prj:project_{cur}.mk   SPDE_SALES_TRACKER_CONFIRM_WINDOW
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SHOW_SUCCESS_NOTIFY
prj:project_{cur}.mk   SPDE_SALES_TRACKER_DEFAULT_OFF
prj:project_{cur}.mk   SPDE_SALES_TRACKER_SEND_BY_CONFIRM



### (���ڷ�������)
// sale--mk
Save:node\C\project\Macro_cfg_8910.h __sale__
// sale--str
source:mmi_app\common\h\common_mdu_def.h  SPDE_SALES_TRACKER_SUPPORT
// sale--nv, ��ʱʱ��/��1/��2; ����
app:eng\c\mmieng_nv.c  SPDE_SALES_TRACKER_SUPPORT
app:eng\h\mmieng_nv.h  SPDE_SALES_TRACKER_SUPPORT
app:setting\c\mmiset_nv.c  SPDE_SALES_TRACKER_SUPPORT
app:setting\h\mmiset_nv.h   SPDE_SALES_TRACKER_SUPPORT
app:setting\c\mmiset_func.c  SPDE_SALES_TRACKER_SUPPORT
// sale--timer
source:mmi_kernel\include\mmk_timer.h  SPDE_SALES_TRACKER_SUPPORT
source:mmi_kernel\source\c\mmk_timer.c  SPDE_SALES_TRACKER_SUPPORT
source:mmi_kernel\include\mmi_default.h  SPDE_SALES_TRACKER_SUPPORT
//source:mmi_app\kernel\c\mmi_default.c  SPDE_SALES_TRACKER_SUPPORT
// mst--winId, ѯ��&�ɹ�
app:sms\h\mmisms_id.h  SPDE_SALES_TRACKER_SUPPORT
app:sms\h\mmisms_id.def  SPDE_SALES_TRACKER_SUPPORT
app:eng\h\mmieng_id.h  SPDE_SALES_TRACKER_SUPPORT
app:eng\h\mmieng_id.def  SPDE_SALES_TRACKER_SUPPORT
// sale--set
app:eng\c\mmieng_win.c  SPDE_SALES_TRACKER_SUPPORT
app:eng\c\mmieng_main.c  SPDE_SALES_TRACKER_SUPPORT
app:eng\h\mmieng_export.h  SPDE_SALES_TRACKER_SUPPORT
// sale--sms
app:sms\h\mmisms_export.h  SPDE_SALES_TRACKER_SUPPORT
app:sms/c/mmismsapp_main.c  SPDE_SALES_TRACKER_SUPPORT
// sale--call
//		==>MMISET_SetSalesTrackerCallTime
app:cc/c/mmicc_wintab.c  SPDE_SALES_TRACKER_SUPPORT
// sale--boot
//		==>HandleNormalStartupWindow
//		====>MMIDEFAULT_StartAutoSendSMSTimer
//		======>MMIDEFAULT_HandleAutoSendSMSTimer
//		==>Enter_SMS_APP_AutoSend(MN_DUAL_SYS_1)
//		====>SMS_APP_AutoSendMsg_str
//		======>MMISMS_AppSendSms()
//		==>SMS_APP_SMSSendCnfCallback()
//		====>MMIDEFAULT_StartAutoReSendSMSTimer
//		======>MMIDEFAULT_HandleAutoSendSMSTimer
app:phone\c\mmiphone_onoff.c  SPDE_SALES_TRACKER_SUPPORT





[1.7] __voicemail__

//5.voicemail
//		==>460    ,11
app:sms\h\sms_voicemailnoromaing.h  100




[1.8] __MMS__
, CB, CL
### __MMS__
//--107
prj:project_{cur}.mk  MMS_SMS_IN_1_SUPPORT = TRUE
prj:project_{cur}.mk  MMS_SUPPORT = DORADO
//--8910
prj:{cfg}.cfg  MMS_SMS_IN_1_SUPPORT = TRUE
prj:project_{cur}.mk  MMS_SUPPORT = DORADO

// �رղ��Ź��ܿ���͸������patch����Ҫ����˾���룩, �ر�MMS_SUPPORT�꣬����֮�������汾���Լ���



[1.9] __CB__

### __CB__
//4.pws
// ̨����Ԥ��ϵͳ
prj:project_{cur}.mk  REMOVE_CB_FEATURE = FALSE
prj:project_{cur}.mk  MMI_ETWS_SUPPORT = TRUE
// 107Ĭ�J�_
make\app_main\release_app_macro.mk  MMI_ETWS_SUPPORT

### CB
//
Save:node\C\study\Macro_doc_cb8910.h



[1.10] __SmsNum__

### 107
//
MSL\l4\inc\mn_type.h  MN_SMS_IN_NV_MAX_NUM  200
// ��ʱ�Ӳ��ˣ�NV ID�̶�
common\export\inc\nv_item_id.h  MN_SMS_IN_NV_MAX_NUM  200

// sim
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  define^MMISMS_MAX_SYS_SIM_SMS_NUM
// phone
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  define^MMINV_MAX_SMS_RECORDS
// 2000����
MS_MMI_Main\source\mmi_app\kernel\h\mmi_modu_main.h  MMIUSERNV_SMS_NV_FIRST_ENTRY



### 8910
## ��ε�������Ϣ����
// 1.�޸Ŀ��ƶ��Ÿ����ĺ꣺
BASE\l4\export\inc\mn_type.h  MN_SMS_IN_NV_MAX_NUM
//		#define MN_SMS_IN_NV_MAX_NUM        200      // the max SMS num in NV 

MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMINV_MAX_SMS_RECORDS
//		#define MMINV_MAX_SMS_RECORDS    200

// (CQû˵�����Ҳ����)
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  define^MMISMS_MAX_SYS_SIM_SMS_NUM
//		#define MMISMS_MAX_SYS_SIM_SMS_NUM    200

// 2.����RUNNINT NV��С����Ҫ��Ӧ��flash cfg����������running nv��sector��Ŀ
// ����ϢRUNNINT NV���Ӵ�С�ļ��㷽ʽΪ�� ��������Ŀ* sizeof(MN_SMS_MESSAGE_ITEM_T)
//  100*230/1024 =  22.46
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  FLASH_SIZE_128MBIT
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  559
//		#define  RUNNIN_NV_SECTOR_NUM       11

// 3.����RAM�Ĵ�С
chip_drv\source\prj_win\mem_cfg_win32.c  MAX_STATIC_HEAP_SIZE
// ���� MAX_STATIC_HEAP_SIZE �Ĵ�С��
// ����Ϣ MAX_STATIC_HEAP_SIZE ���Ӵ�С�ļ��㷽ʽΪ����������Ŀ*sizeof(MMISMS_LINKED_ORDER_UNIT_T)
//  100*188/1024 =  18.3

// 4.RAM����(����һ������)
//  100�� Լ  12K
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252
//		MAX_STATIC_SPACE_SIZE��С + 12K
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  259
//		MAX_SYSTEM_SPACE_SIZE��С - 12K

//	��˵��������"+ Y" "- Y"ֻ�Ǳ��ص��޸ķ�����ʵ��ϵͳ���ܻ������࣬
//	MAX_SYSTEM_SPACE_SIZE���ܵ����Ĵ�С��СһЩ�������ʵ�΢��(��50KΪ��λ)��ֻҪ���벻��RAM�����ɡ�
//	��ˣ�������ӵ������󣬻ᵼ��ϵͳ�ռ��С��Ӱ��browser/camera�ȴ��ڴ�Ӧ�ã����գ�������



## �رն���
//	�뽫 APP_RegisterPsService@mmimain.c ��sms ��smscb ����ע��
//	{
//	    //Register sms event
//	    SCI_RegisterMsg( MN_APP_SMS_SERVICE,
//	        (uint8)(EV_MN_APP_SMS_READY_IND_F & 0xff), /*lint !e778*/
//	        (uint8)((MAX_MN_APP_SMS_EVENTS_NUM - 1) & 0xff),
//	        SCI_NULL);
//	   
//	    //Register smscb event
//	    SCI_RegisterMsg( MN_APP_SMSCB_SERVICE,
//	        (uint8)(EV_MN_APP_SMSCB_MSG_IND_F & 0xff), /*lint !e778*/
//	        (uint8)((MAX_MN_APP_SMSCB_EVENTS_NUM - 1) & 0xff),
//	        SCI_NULL);
//	}
//	Ȼ���ٽ����˵��ж������ε����ɡ�
//	Ҫע�����������Ӧ����ʹ�ö��ŵ�ѡ��Ҳ��Ҫ���ε��������ڲ��Ž����������ȥ�����ţ�Ҳ��Ӹò˵����ε���


// SECURITYBOX
make\app_main\app_macro.mk  MMI_SMS_SECURITYBOX_SUPPORT


[1.11] __SmsModis__
sms_member
// sms_member
app:sms\c\mmisms_editsmswin.c
//        uint8 i = 0;
//        uint8 aaaaa = 0;
//		SMS_HANDLE_T sms_ret = PNULL;
//		for(i=0;i<48;i++)
//		{
//			sms_ret = MMISMSAPP_SaveSms(op_data,PNULL,PNULL,PNULL);
//			if(i>40)
//			{
//				aaaaa = 0;
//			}
//			else if(i>10)
//			{
//				aaaaa = 0;
//			}
//			if(PNULL==sms_ret)
//				break;
//		}



[1.12] __AoledaCard__

### (107���ɲ���/8910�����ɱ���)
// nv  8910/107
Save:node\C\study\Macro_nv_8910.h __Card__

// card--timer
//		==>IdleWin_HandleMsg
//		====>MSG_OPEN_WINDOW
//		======>checkStartEleGuarCardTimer
//		      8910:�Ѽ������;8Сʱ�п�����;5���Ӳ��Լ���
//		      107: 6Сʱδ����; wait sms/call
app:idle\c\mainapp.c  case^MSG_OPEN_WINDOW
app:idle\c\mainapp.c  case^MSG_TIMER
// card--view
//		==>EngShowGuaranteeCardString
//		====>NV_ELECTRIC_GUARANTEE_CARD
//		==>MMIAPIENG_ViewElectircGuanateeCard  # 107
//		====>getEleGuaranteeCard
// card--reset
//		==>HandleResetElectircQueryWinMsg
//		====>resetTimerInfo
//		====>checkStartEleGuarCardTimer
// card--test
//		==>testEleGuarCard      # 5���Ӳ��Լ���
//		====>HandleEleGuarCard  # (��һ��ָ����Ч)
app:eng\c\mmieng_win.c  MMIENG_VIEW_GUANATEECARD_TAB
// card--sms/call  # 107
//		==>AOLEDA_call_connected_handle
//		==>setEleGuaranteeCard
//		==>setEleCardCreatedInfo
app:eng\c\mmieng_win.c  void^AOLEDA_call_connected_handle



[1.13] __SpdeCard__

###  (���ɲ���)
//		==>initSpdeEleGuaranteeCard
app:eng\c\mmieng_win.c  void^SEGC_call_connected_handle
// card--timer
//		==>IdleWin_HandleMsg
//		====>MSG_OPEN_WINDOW
//		======>StartSpdeEleGuarCardTimer
app:idle\c\mainapp.c  case^MSG_OPEN_WINDOW



[1.14] __SmsTpInput__

SMS--tp input
// 1
//DispatchMSGTpUp
// 2
//TpDownCtrlHandleTpMsg
//TextEditCtrlHandleMsg
//BaseEditCtrlHandleMsg
// 4
//CTRLIM_SetInput
// 5
//SetParameter


[1.15] 




[1.16] 



[1.17] 



[1.18] 





