

### VoLTE
//VoLTE 白名单对应文件
app:phone\h\ims_toggle_mnc_table.h   242  // mcc 460
app:phone\h\ims_toggle_mnc_table.h   250  // mcc 466
app:phone\h\ims_toggle_mnc_table.h   222  // mcc 425
app:phone\h\ims_toggle_mnc_table.h   95   // mcc 310
app:phone\h\ims_toggle_mnc_table.h   76   // mcc 259
app:phone\h\ims_toggle_mnc_table.h   33   // mcc 222
app:phone\h\ims_toggle_mnc_table.h   xxx  // 
app:phone\h\ims_toggle_mnc_table.h   xxx  // 
app:phone\h\ims_toggle_mnc_table.h   xxx  // 
app:phone\h\ims_toggle_mnc_table.h   xxx  // 










// --SPCSS01115780
// VoLTE白名单配置方法：
//   如需支持某一运营商的VoLTE功能，
//   需要modem侧配置该运营商的相关运营商参数，------------------P/S NV
//   并且在MMI侧VoLTE白名单中添加该运营商对应的MCC及MNC---------table
//   以及该运营商对应的ims类型预置APN。-------------------------APN


// VoLTE白名单
//T117平台默认开启VoLTE白名单功能，用户可通过如下方式对白名单功能进行开启或关闭：
//    #*8378#1# -> Telephony -> IMS White List Set -> Close/Open
//若白名单功能关闭，则默认所有运营商支持VoLTE功能并可显示VoLTE图标及菜单。
//
//	用户可根据运营商的对应MCC及MNC在ims_toggle_mnc_table.h自定义配置如下信息：
//	1. 是否默认开启VoLTE
//	2. 状态栏是否显示VoLTE图标
//	3. UI界面是否显示VoLTE菜单


// 如：
//     460,3   ,0,1,1,0,

//	各字段解释说明如下：
//	typedef struct
//	{
//	    uint16 mcc;             //指定运营商对应的 MCC
//	    uint16 mnc;             //指定运营商对应的 MCC
//	    char ims_call_icon;     /*
//	                              状态栏VoLTE图标显示控制:
//	                              0: VoLTE 图标
//	                  1: HD 图标
//	                            */
//	    char ims_icon_status;   //状态栏是否显示 VoLTE 图标
//	    char ims_toggle_status; /*
//	                              是否显示 VoLTE 菜单以及是否默认开启VoLTE功能
//	                              0: 默认 VoLTE 功能关闭，VoLTE 菜单不显示
//	                             -1: 默认 VoLTE 功能开启，VoLTE 菜单显示
//	                              2: 默认 VoLTE 功能开启，VoLTE 菜单不显示
//	                              3: 默认 VoLTE 功能关闭，VoLTE 菜单显示
//	                            */
//	    char reserved;          //保留位
//	}MMI_IMS_TOGGLE_MNC_T;














