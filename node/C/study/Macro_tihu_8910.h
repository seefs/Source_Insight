

//目录:
// 1. 
Save:node\C\study\Macro_tihu_8910.h \[1.1\] version, IMEI
Save:node\C\study\Macro_tihu_8910.h \[1.2\] menu
Save:node\C\study\Macro_tihu_8910.h \[1.3\] data
Save:node\C\study\Macro_tihu_8910.h \[1.4\] app init--------通知
Save:node\C\study\Macro_tihu_8910.h \[1.5\] login-----------离线
Save:node\C\study\Macro_tihu_8910.h \[1.6\] tcp-------------active
Save:node\C\study\Macro_tihu_8910.h \[1.7\] 
Save:node\C\study\Macro_tihu_8910.h \[1.8\] receive
Save:node\C\study\Macro_tihu_8910.h \[1.9\] send------------get
Save:node\C\study\Macro_tihu_8910.h \[1.10\] --sms
Save:node\C\study\Macro_tihu_8910.h \[1.11\] --heart、sos
Save:node\C\study\Macro_tihu_8910.h \[1.12\] --loc
Save:node\C\study\Macro_tihu_8910.h \[1.13\] 
Save:node\C\study\Macro_tihu_8910.h \[1.14\] 
Save:node\C\study\Macro_tihu_8910.h \[1.15\] 
Save:node\C\study\Macro_tihu_8910.h \[1.16\] api------------接口
Save:node\C\study\Macro_tihu_8910.h \[1.17\] 
Save:node\C\study\Macro_tihu_8910.h \[1.18\] test-----
Save:node\C\study\Macro_tihu_8910.h \[1.19\] log
Save:node\C\study\Macro_tihu_8910.h \[1.20\] 



[1.1] version, IMEI
// IMEI 和 厂商机型
app:bmiotcard\h\bmiotcardadapter.h  14

//
//公众号：校贝通
//绑定小朋友的邀请码 ：448565
//绑定小朋友的邀请码 ：075051


//WA03U_T6A 手表的IMEI号
//	864200088000006
//	864200088000014
//	864200088000022
//	864200088000030
//	864200088000048
//	864200088000055
//	864200088000063(cur)
//	864200088000071
//	864200088000089
//	864200088000097

//后台之前发过  后台账号：
https://pc.xiaobeitong.com/HomePage
// 密码是手机的后6位
// 18858524195, 524195, 管理员
// 15986825892, 825892, 家长账号无法登录
// 17279766205, 766205, 家长账号无法登录

https://www.bjkjjyc.com/
// 18718677854, 677854, 管理员


[1.2] menu
// res--menu
res:zdt\MMI_RES_DEFAULT\IMAG\mainmenu

// enter
app:mainmenu\c\mainmenu_win.c  MMIAPIMENU_CreatMainMenu
app:zdt\c\zdt_wintable.c  HandleZDT_WatchMainMenuWinMsg

// (menu item)
// --id
app:zdt\c\zdt_wintable.c  ZDT_MAINMENU_STAT_E;
// --icon+txt
app:zdt\c\zdt_wintable.c  ZDTMenuDlgEventHandlers
// func
app:zdt\c\zdt_wintable.c  watch_mainmenu_key_enter_hdlr






[1.3] data

//1.msg id
DAPS\export\inc\in_message.h  BM_IOT_CARD_SUPPORT


//2.domain / port
app:bmiotcard\c\bmiotcardcfg.c  bm_iot_card_get_server_domain
app:bmiotcard\c\bmiotcardcfg.c  bm_iot_card_get_server_port

//3.心跳
// 5 min
app:bmiotcard\c\bmiotcardcfg.c  BM_IOT_CARD_HEART_BEAT_DEFAULT_TIME_OUT



[1.4] app init
// 初始化:log, db, sim, imei, 2vm, net init, timer

//app, net, 激活+TCP
//1.app->sim->imei->db->timer
//2.net->open->Active
//2.net->open->gps->loc->wait
//2.net->open->tcp->open  (no use)
//3.active->gps->send


//1.notice
//		==>APP_Init
//		====>WatchNet_Init
//		======>WatchNotice_test
//		========>WatchNotice_start
//		==========>check
//		============>process/cancel
//		==============>WatchNet_Destroy
//		==>NONE:
//		====>check(NONE), i=1/2/3
//		======>1秒
//		==>SELECT:
//		====>check(SELECT), i=2
//		======>1秒后下一个
//		==>ACTIVE:
//		========>process()
//		==========>NONE
//		==>NONE:
//		========>iRetryTimes--
//		==>EXPIRED:失败
//		========>无操作
//		==========>删除
//		==>无node销毁
source:mmi_app\kernel\c\mmimain.c  WatchNet_Init


//2.local data
//		==>APP_Init
//		====>WatchTest_Init
//		======>
source:mmi_app\kernel\c\mmimain.c  WatchTest_Init


//3.app
// app
//		==>APP_Init
//		====>MMIBmIotCard_initApp
//		======>
source:mmi_app\kernel\c\mmimain.c  MMIBmIotCard_initApp




[1.5] login
// login
//		==>test:
//		====>09:26 改imei开机，
//		====>09:25 pb3
//		====>09:35 pb menu
//		====>09:45 恢复出厂设置

// 异常初始化
// 18659598986 G/18959313622 M/18959197988 B/13705051318
// 18659598986 /18959313622 /18959197988 /13705051318






[1.6] tcp---------active
//1.login
//		==>MAIN_HandleSysMsg
//		====>RTC_MIN:
//		====>bm_iot_card_init
//		======>bm_iot_card_get_init_data
//		======>bm_iot_card_init_timer_cb
//		========>start:
//		========>bm_iot_card_service_start
//		==========>bm_iot_card_gprs_dial      # PDP
//		========>login:
//		========>bm_iot_card_cmd_start_login
//		==========>bm_iot_card_login_callback
app:idle\c\mainapp.c  BM_IOT_CARD_SUPPORT


//2.open
//		==>bm_iot_card_gprs_dial
//		====>bm_iot_card_init_sim_card
//		======>bm_iot_card_gprs_dial_init_sim_callback
//		========>nwk:
//		========>bm_iot_card_init_nwk_account
//		==========>MMIAPIPDP_Active
//		========>callback:
//		==========>bm_iot_card_gprs_dial_init_nwk_callback
//		============>tempCallback: NULL
//		==>.handler / NULL
//		====>.eventHandle
//		======>.tempCallback
//		==>.nwk_callback
//		====>.networkInitCallback
//		======>.CNF
app:bmiotcard\c\bmiotcardconnect.c  bm_iot_card_gprs_dial


//3.active
//		==>nwk:
//		==>bm_iot_card_nwk_handlePsMsg
//		====>MMIPDP_ACTIVE_CNF:
//		======>nwk: / NULL
//		==>.bm_iot_card_nwk_handlePsMsg
//		====>.handlePsMsg
app:bmiotcard\c\bmiotcardadapter.c  handle_msg_callback


//--socket callback
//		==>bm_iot_card_service_start
//		====>bm_iot_card_server_start_imp
//		======>Handle:
//		======>bm_iot_card_socket
//		========>.Node.recvBuf                          # 2048
//		========>.Node.callback
//		==========>bm_iot_card_connect_event_callback   # 见后
//		========>.magicCode
//		==========> MAGIC_NUM


//4.connect
//		==>send:
//		==>bm_iot_card_connect
//		====>bm_iot_card_check_dial_timer_callback    # 反复check
//		======>connect:
//		========>bm_iot_card_start_connect
//		======>err:
//		========>check...
//		==>.socketId
//		====>bm_iot_card_create_thread
//		======>thread:
//		========>bm_iot_card_thread_callback
//		==>.socketThreadId                              # 见后
app:bmiotcard\c\bmiotcardsocket.c  bm_iot_card_start_connect
//		==>connect: hostname          # step 1
//		====>bm_iot_card_start_hostname
//		======>bm_iot_card_socket_hostname_callback
//		========>signal->thread:      # 2种返回
//		==========>.sig_connect
//		==>connect: ip                # step 2
//		====>bm_iot_card_socket_connect
//		======>.so_cb:                # ok
//		========>bm_iot_card_connect_callback
//		==========>.Node.callback
//		==============>...            # 见后
//		==========>write_loop:
//		============>bm_iot_card_connect_event_callback
//		==============>
//		==>connect: event             # step 3
//		====>bm_iot_card_socket_event_notify   # 通知
//		======>.Node.callback
//		========>bm_iot_card_connect_event_callback
//		==========>.ev_connect
//		============>.heartbeat
//		============>.location
//		============>...
//		==========>.data_ind:
//		============>bm_iot_card_connect_on_server_data
app:bmiotcard\c\bmiotcardsocket.c  bm_iot_card_connect_imp


//5.connect--Thread
//		==>.socketThreadId
//		====>bm_iot_card_socket_thread_callback
//		======>connect:
//		======>send:
//		======>recv:
//		========>bm_iot_card_recv_signal_from_thread
//		==========>sig_connect:
//		============>bm_iot_card_connect_imp
//		==========>send:
//		============>bm_iot_card_send_imp
//		==========>read:
//		============>bm_iot_card_socket_read_imp
app:bmiotcard\c\bmiotcardsocket.c  bm_iot_card_socket_thread_callback


//2.faild
// PDP...重新尝试连接pdp，换卡连接
app:zdt\c\zdt_net.c  case^ZDT_APP_SIGNAL_NET_ACTIVE_FAIL
app:zdt\c\zdt_net.c  MMIZDT_TCP_Handle_PDPActiveFail
app:zdt\c\zdt_tcp.c  MMI_ZDT_TCP_PdpStateChange
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_UNREG
app:zdt\c\zdt_yx_net.c  TCP_CB_UNREG
// PDP-msg-faild-reset...[TCP]
app:zdt\c\zdt_tcp.c  ZdtTCP_Reset
// ...删除临时数据+IP


//3.Retry (no use)
app:zdt\c\zdt_net.c  ZDT_Net_HandlePdpRetryTimer




[1.7] 



[1.8] receive

//--receive
//		==>bm_iot_card_socket_read_imp                  # Thread
//		====>bm_iot_card_socket_recv
//		======>.recv_len
//		====>.data_ind:                                 # notify
//		======>bm_iot_card_connect_on_server_data
//		========>bm_iot_card_decode_recv_pkg            # 解析
//		==========>cmd3:
//		============>bm_iot_card_global_cmd_notify
//		==============>bm_iot_find_notify_by_cmdtype
//		================>.gBmIotCmdNotifyMap            # 结点
app:bmiotcard\c\bmiotcardconnect.c  void^bm_iot_card_decode_recv_pkg
//--unpack
//		==>unpack:
//		====>bm_iot_card_pkg_unpack
//		======>pkg: [ZJ*864200088000063*72a9*0034*PHB,0001,2,1-鐖风埛-15976547611|2-鐖哥埜-15678887766]
//		========>manufactory: "ZJ"      # 厂商标识
//		========>deviceid: "864200088000063"
//		========>transSerialid: "72a9"  # 流水号
//		========>bodysizebuf: "0034"    # 内容长度
//		========>cmdtype: "PHB"         # 指令类型

//--1.pb num (删除时不下发)
//		==>PHB:
//		====>bm_iot_card_cmd_set_love_number
//		======>pkgbuf: 
//		======>[0001,2,1-鐖风埛-15976547611|2-鐖哥埜-15678887766]
//		======>clear:
//		======>setserial: "0001"        # 流水号
//		======>strcount: "2"            # 亲情号码数量
//		======>list-strindex: "1"
//		======>list-name: "xxx"
//		======>list-number: "15976547611"
//		========>bm_iot_card_set_love_number
//		==>test:
//		====>15:30 2233 0000 5577
//		====>15:35 2233      5566
//		====>15:49 上课禁用时间段
//		====>15:59           5566
//		====>16:14           7788
//		====>16:26 无
app:bmiotcard\c\bmiotservercontrol.c  int^bm_iot_card_cmd_set_love_number( )

//--2.in_class_time (8小时批量下发)
//		==>SETDND:
//		====>bm_iot_card_cmd_forbid_in_class
//		======>.pkgbuf:
//		======>[09:28-09:38|1234567;09:45-09:50|1234567;10:00-10:20|1234567]
//		====>set:
//		======>.starttime
//		======>.endtime
//		======>week
//		======>.date
//		==>bm_iot_card_get_invisible_in_class_time
//		==>禁用
//		====>watch_func_note_is_in_class_time
//		======>
//		========>
//		==>user_notice_check_class_time
//		====>bm_iot_card_get_next_class_time
//		======>.datetime
//		========>.wday: 0
//		========>.hour: 0
//		========>.minute: 0
//		======>.pHourDate
//		========>.date: 0
app:launcher\c\watch_comm_net.c  user_notice_check_class_time
WatchNotice_is_run

//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>





[1.9] send


//1.student_info
//		==>bm_iot_card_cmd_get_student_info
//		====>callback: 
//		======>bm_iot_card_cmd_get_student_info_callback
//		====>body: 
//		======>bm_iot_card_cmd_get_student_info_body
//		====>req: "CLASS"
//		====>bm_iot_card_cmd_req      (好像没有reset)
//		======>bm_iot_card_send_pkg
//		========>bm_iot_card_pkg_pack
//		========>bm_iot_card_send
//		========>bm_iot_list_append

//2.Respond

//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>


[1.10] sms
//1.sms
// sms-rec
app:sms\c\mmisms_receive.c  MMISMS_HandleSMSMTInd
app:sms\c\mmisms_receive.c  OperateMtIndForZDT
app:sms\c\mmisms_receive.c  MMIZDT_SMS_Rcv_IsValid


//2.onoff
// sms-format-HEAD
app:zdt\c\zdt_yx_sms.c  YX_SMS_IsValid
// sms-format-HEAD-onoff
app:zdt\c\zdt_yx_sms.c  YX_SMS_ServerValid
// sms-format-HEAD-onoff
app:zdt\c\zdt_yx_net.c  YX_API_SeNetOpen
app:zdt\c\zdt_yx_net.c  MMIZDT_Net_Reset
// sms-format-HEAD-onoff-open
app:zdt\c\zdt_net.c  case^ZDT_APP_SIGNAL_NET_RESET
app:zdt\c\zdt_net.c  MMIZDT_Net_Open
// ...后略[active]


//3."DW"
app:zdt\c\zdt_yx_sms.c  YX_SMS_IsValid
app:zdt\c\zdt_yx_sms.c  YX_SMS_SOS_ContentValid
// sms-rec-app-...后略[loc]
app:zdt\c\zdt_yx_api.c  YX_LOCTION_Start


//4."SETIP:"
// 更换IP+port
app:zdt\c\zdt_yx_sms.c  YX_SMS_Receive_IP
app:zdt\c\zdt_yx_net.c  YX_API_Net_Reset



[1.11] heart、sos
// reg-heart
app:zdt\c\zdt_yx_net.c  YX_Heart_TimeStop


//
Save:node\C\study\Macro_slide_8910.h  __sos__

// sos弹窗
//		==>bm_iot_card_call_sos_number
//		====>watch_func_note_insert_sim




[1.12] loc
//1.sms "DW"
app:zdt\c\zdt_yx_sms.c  YX_SMS_SOS_ContentValid
app:zdt\c\zdt_yx_sms.c  "DW"
app:zdt\c\zdt_yx_api.c  YX_LOCTION_Start


//2.net "UPLOAD"
// net-rec-...前略[receive]
app:zdt\c\zdt_yx_net.c  YX_Net_ReceiveHandle
app:zdt\c\zdt_yx_net.c  "UPLOAD"
app:zdt\c\zdt_yx.c  ZDT_APP_SIGNAL_YX_LOCREPORT
app:zdt\c\zdt_yx_api.c  YX_LOCTION_Start
// net-rec-...后略[loc]


//3.net "CR"
// net-rec-getLoc
app:zdt\c\zdt_yx_net.c  YX_Net_ReceiveHandle
app:zdt\c\zdt_yx_net.c  "CR"
// net-rec-getLoc-loc...后略[loc]
app:zdt\c\zdt_yx_net.c  YX_Net_Receive_CR
app:zdt\c\zdt_yx_api.c  YX_LOCTION_Start


//4.loc
// ...前略[sms/net1/net2/sos]
app:zdt\c\zdt_yx_api.c  MMIZDTGPS_API_LocStart
// loc-callback
app:zdt\c\zdt_yx_api.c  YX_LOCTION_CR_CallBack
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_LOCTION_END
// loc-callback
app:zdt\c\zdt_yx_net.c  YX_Net_Send_UD
app:zdt\c\zdt_yx_net.c  YX_Net_TCPSend
// loc-callback-send-md5-Me-Node(-)...后略[tcp]
app:zdt\c\zdt_tcp.c  ZdtTCP_Start


//5.sos
// sos-bat
app:phone\c\mmiphone_charge.c  ZDT_SetIsBatLow(low_l)
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_BATSTAUTS
// sos-bat-sms send
app:zdt\c\zdt_yx_sms.c  YX_API_SMS_SendLowBattery
// sos-bat-loc
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_ALERT

// lose-loc (no use)
app:zdt\c\zdt_yx_api.c  YX_API_Lose_Post


//6.jp
// gsensor-jp
app:zdt\c\zdt_yx_api.c  YX_API_JP_Change_Post
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_JP_CHANGE
app:zdt\c\zdt_yx.c  YX_LocReport_Judge

// gsensor-move
app:zdt\c\zdt_yx_api.c  YX_API_Move_Post
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_MOVE


//7.lbs
app:zdt\c\zdt_net.c  MMIZDT_Net_StatusInd
// net-lbs
app:zdt\c\zdt_yx_api.c  YX_API_LBS_Change_Post
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_LBS_CHANGE




[1.13] 



[1.14] 



[1.15] 




[1.16] api------接口
// 可以主动获取的接口
app:bmiotcard\h\bmiotcardadapter.h  bm_iot_card_cmd_start_login

//

[1.17] 




[1.18] test-----
// charge
开机--76%, 关机--87%, 

// pb
bm_iot_card_set_love_number
你可以看下这个函数，有没有进行设置电话本


[1.19] log
//
### __log__
//
app:udisk/c/mmiudisk_wintab.c  USB_CONNECT_DEFAULT_CHARGE
//
app:launcher\c\watch_comm_test.c  WATCH_ALL_LOG_SUPPORT
// log--总开关
app:launcher\h\watch_comm_test.h  WATCH_WINID_LOG_SUPPORT
// log--单项开关
app:bmiotcard/h/bmiotcardadapter.h  WATCH_ALL_LOG_SUPPORT
app:launcher\c\watch_comm_net.c  WATCH_ALL_LOG_SUPPORT


### 其他
// slide
Save:node\C\study\Macro_slide_8910.h  __log__
// trace
Save:node\C\study\Macro_fun_8910.h  __debug__



[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 







