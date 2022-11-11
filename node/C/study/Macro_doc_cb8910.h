
### 来短信
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


### 预置
//PWS訊息碼:
//911/中文 919/英文 警訊通知 Alert Message 預設接收
//4370/中文 4383/英文 國家級警報 Presidential Alert 預設接收
//4371/中文 4384/英文 緊急警報 Emergency Alert 預設接收
//4372/中文 4385/英文 緊急警報 Emergency Alert 預設接收
//4373/中文 4386/英文 緊急警報 Emergency Alert 預設接收
//4374/中文 4387/英文 緊急警報 Emergency Alert 預設接收
//4375/中文 4388/英文 緊急警報 Emergency Alert 預設接收
//4376/中文 4389/英文 緊急警報 Emergency Alert 預設接收
//4377/中文 4390/英文 緊急警報 Emergency Alert 預設接收
//4378/中文 4391/英文 緊急警報 Emergency Alert 預設接收
//4379/中文 4392/英文 緊急警報 Emergency Alert 預設接收
//4380/中文 4393/英文 每月測試用訊息 Required Monthly Test 預設關閉

//
可以的，在 s_cmas_pws_channel_info 配置CMAS_CHANNEL_INFO_T的下面参数，
请按照所需设置即可，原生平台已有介面显示开关，可用模拟器去参考其设计

// 标题和
app:sms\c\mmismscb_control.c  s_cmas_pws_channel_info

typedef struct
{
    uint16 channel_id;
    uint16 primary_channel;
    uint16 secondary_channel;
    wchar title_id[MMI_CB_ETWS_TITLE_NAME_MAX_LEN]; //30
    wchar popup_string[MMI_CB_ETWS_TITLE_NAME_MAX_LEN];
    MMI_TEXT_ID_T string_id;
    uint16 is_default_enabled;  //是频道预设打开
    uint16 can_be_disabled;     //是可控制开关频道
    uint16 can_be_visible;      //是是否显示频道
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

### 菜单
// enter
app:sms\c\mmismscb_wintab.c  MMI_RESULT_E^HandleSmsCBMsgListWindow
// opt
//		==>MENU_SMS_BROADCAST_MENU_OPT       # pda
//		====>menu_sms_broadcast_menu_opt
//		==>MENU_SMS_BROADCAST_LIST_OPT
//		====>menu_sms_broadcast_list_opt
//		======>HandleSmsCBListOptWindowOk
app:sms\c\mmismscb_wintab.c  HandleSmsCBListOptWindowOk

### opt--set--开关
//		==>MMISMSCB_OpenSettingWin      
//		====>MMISMSCB_SwitchSmsCBStatus
//		==>init
//		====>InitPdaCbSmsSettingsListCtrl
//		======>MMISMS_GetSmsCBEnabledFlag
//		========>466 默认开
app:sms\c\mmismscb_wintab.c  HandleSmsCBSettingWindow     # set enter

### opt--set--语言选择
//		==>NV_LoadSmsCBLanguageList
//		====>MMISMSCB_Reset
app:sms\c\mmismscb_wintab.c  MMI_RESULT_E^HandleSmsCBLanguageListWindow


### opt--set--Channel
//		==>init
//		====>MMISMS_NV_LoadSmsCBChannelList
//		======>32/10 条
//		==>opt
//		====>menu_sms_cb_channel_list_opt_a  # 条数完
//		====>menu_sms_cb_channel_list_opt_b
//		======>add
//		========>HandleSMSCBChannelEditWindow
//		==========>EditCBChannel
//		==========>AddCBChannel
//		============>AddCBChannelListItem
//		==============>MMISMSCB_Reset
app:sms\c\mmismscb_wintab.c  MMI_RESULT_E^HandleSmsCBChannelListWindow




// 功能：自动保存/加一层列表

### 模拟器
// msg id=0x03ee/0x1000/0x1080/0xA000
// msg id=1006/4096/4224/40960
// period=5/30/20/10




