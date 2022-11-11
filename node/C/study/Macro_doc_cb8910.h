
### ������
// --cb--rev
//		==>MMIAPISMSCB_HandleETWSVibrateTimer
//		====>MMISMS_ShowNewETWSPrompt
//		==>MMIAPISMSCB_RedisplayETWSMsg
//		====>...
//		==>MMIAPISMSCB_HandleCBMsgInd
//		====>...
//		==>MMIAPISMSCB_HandleMarcoCBMsgInd
//		====>...
//		==>MMIAPISMSCB_ShowNewETWSPrompt
//		====>...


### Ԥ��
//PWSӍϢ�a:
//911/���� 919/Ӣ�� ��Ӎ֪ͨ Alert Message �A�O����
//4370/���� 4383/Ӣ�� ���Ҽ����� Presidential Alert �A�O����
//4371/���� 4384/Ӣ�� �o������ Emergency Alert �A�O����
//4372/���� 4385/Ӣ�� �o������ Emergency Alert �A�O����
//4373/���� 4386/Ӣ�� �o������ Emergency Alert �A�O����
//4374/���� 4387/Ӣ�� �o������ Emergency Alert �A�O����
//4375/���� 4388/Ӣ�� �o������ Emergency Alert �A�O����
//4376/���� 4389/Ӣ�� �o������ Emergency Alert �A�O����
//4377/���� 4390/Ӣ�� �o������ Emergency Alert �A�O����
//4378/���� 4391/Ӣ�� �o������ Emergency Alert �A�O����
//4379/���� 4392/Ӣ�� �o������ Emergency Alert �A�O����
//4380/���� 4393/Ӣ�� ÿ�yԇ��ӍϢ Required Monthly Test �A�O�P�]

//
���Եģ��� s_cmas_pws_channel_info ����CMAS_CHANNEL_INFO_T�����������
�밴���������ü��ɣ�ԭ��ƽ̨���н�����ʾ���أ�����ģ����ȥ�ο������

// �����
app:sms\c\mmismscb_control.c  s_cmas_pws_channel_info

typedef struct
{
    uint16 channel_id;
    uint16 primary_channel;
    uint16 secondary_channel;
    wchar title_id[MMI_CB_ETWS_TITLE_NAME_MAX_LEN]; //30
    wchar popup_string[MMI_CB_ETWS_TITLE_NAME_MAX_LEN];
    MMI_TEXT_ID_T string_id;
    uint16 is_default_enabled;  //��Ƶ��Ԥ���
    uint16 can_be_disabled;     //�ǿɿ��ƿ���Ƶ��
    uint16 can_be_visible;      //���Ƿ���ʾƵ��
    uint16 alert_level;
    uint16 alert_tone_type;
    uint16 vibrate_type;
    uint16 is_continued;
    uint16 alert_period;
} CMAS_CHANNEL_INFO_T;

//
//		==>.s_cmas_pws_channel_info
//		====>.s_cmas_spec_list
//		======>GetCMASChannelTable
//		========>GetCMASChannelInfo
//		========>InitCB_ETWSChannel
//		========>AppendCBMsgListItem  # from mcc
//		========>HandleSmsCBReadWindow

//
//InitCBChannelList

### enter
//#ifdef WIN32
//            #ifndef MMI_GUI_STYLE_TYPICAL
//            MMIAPISMSCB_OpenCBList();
//            #else
//            MMIAPISMSCB_OpenMainMenu();
//            #endif
//#endif

### �˵�
// enter
app:sms\c\mmismscb_wintab.c  MMI_RESULT_E^HandleSmsCBMsgListWindow
// opt
//		==>MENU_SMS_BROADCAST_MENU_OPT       # pda
//		====>menu_sms_broadcast_menu_opt
//		==>MENU_SMS_BROADCAST_LIST_OPT
//		====>menu_sms_broadcast_list_opt
//		======>HandleSmsCBListOptWindowOk
app:sms\c\mmismscb_wintab.c  HandleSmsCBListOptWindowOk

### opt--set--����
//		==>MMISMSCB_OpenSettingWin      
//		====>MMISMSCB_SwitchSmsCBStatus
//		==>init
//		====>InitPdaCbSmsSettingsListCtrl
//		======>MMISMS_GetSmsCBEnabledFlag
//		========>466 Ĭ�Ͽ�
app:sms\c\mmismscb_wintab.c  HandleSmsCBSettingWindow     # set enter

### opt--set--����ѡ��
//		==>NV_LoadSmsCBLanguageList
//		====>MMISMSCB_Reset
app:sms\c\mmismscb_wintab.c  MMI_RESULT_E^HandleSmsCBLanguageListWindow


### opt--set--Channel
//		==>init
//		====>MMISMS_NV_LoadSmsCBChannelList
//		======>32/10 ��
//		==>opt
//		====>menu_sms_cb_channel_list_opt_a  # ������
//		====>menu_sms_cb_channel_list_opt_b
//		======>add
//		========>HandleSMSCBChannelEditWindow
//		==========>EditCBChannel
//		==========>AddCBChannel
//		============>AddCBChannelListItem
//		==============>MMISMSCB_Reset
app:sms\c\mmismscb_wintab.c  MMI_RESULT_E^HandleSmsCBChannelListWindow




// ���ܣ��Զ�����/��һ���б�

### ģ����
// msg id=0x03ee/0x1000/0x1080/0xA000
// msg id=1006/4096/4224/40960
// period=5/30/20/10




