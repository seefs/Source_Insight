
基础路径设置:
//basePath = 
resPath = MS_MMI_Main/source/resource/mmi_res_240x240
res:\\
appPath = MS_MMI_Main\source\mmi_app\app
app:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_zdt_8910.h \[1.1\] 
Save:node\C\study\Macro_zdt_8910.h \[1.2\] menu
Save:node\C\study\Macro_zdt_8910.h \[1.3\] 
Save:node\C\study\Macro_zdt_8910.h \[1.4\] app init
Save:node\C\study\Macro_zdt_8910.h \[1.5\] net
Save:node\C\study\Macro_zdt_8910.h \[1.6\] active
Save:node\C\study\Macro_zdt_8910.h \[1.7\] tcp---------ip,url
Save:node\C\study\Macro_zdt_8910.h \[1.8\] receive
Save:node\C\study\Macro_zdt_8910.h \[1.9\] send
Save:node\C\study\Macro_zdt_8910.h \[1.10\] sms------
Save:node\C\study\Macro_zdt_8910.h \[1.11\] heart、sos
Save:node\C\study\Macro_zdt_8910.h \[1.12\] loc
Save:node\C\study\Macro_zdt_8910.h \[1.13\] time-----轮询
Save:node\C\study\Macro_zdt_8910.h \[1.14\] eme------重连2次
Save:node\C\study\Macro_zdt_8910.h \[1.15\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 




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






[1.3] 


[1.4] app init
// 初始化:log, db, sim, imei, 2vm, net init, timer

//app, net, 激活+TCP
//1.app->sim->imei->db->timer
//2.net->open->Active
//2.net->open->gps->loc->wait
//2.net->open->tcp->open  (no use)
//3.active->gps->send


//1.app
// app
MS_MMI_Main\source\mmi_app\kernel\c\mmimain.c  APP_Init
MS_MMI_Main\source\mmi_app\kernel\c\mmimain.c  MMIZDT_AppInit
// app-user
app:zdt\c\zdt_app.c  MMIZDT_AppInit
// app-user-net
app:zdt\c\zdt_net.c  MMIZDT_Net_APP_Init
// app-user-net-tcp
app:zdt\c\zdt_tcp.c  ZdtTCP_AppInit
// app-user-net-tcp...(APP)
app:zdt\c\zdt_yx.c  YX_AppInit
// app-user-net-tcp-db
app:zdt\c\zdt_yx_db.c  YX_DB_Init
app:zdt\c\zdt_yx_db.c  YX_DB_SET_ListInit
// app-user-net-tcp-db...(IP)
app:zdt\c\zdt_yx_db.c  YX_DB_SET_Default


//2.gps
app:zdt\c\zdt_app.c  ZDT_GPS_Init
// task--send/rec/loc
MS_Customize\source\product\driver\zdt_gps\zdt_gps.c  ZDTGPS_TaskCreate


//3.timer
// ...后略



[1.5] net
//1.sys
// sys
app:phone\c\mmiphone.c  MMIZDT_Net_StatusInd
// sys-msg
app:zdt\c\zdt_net.c  MMIZDT_Net_StatusInd
app:zdt\c\zdt_net.c  MMIZDT_Net_StatusChange
// sys-msg-init...一次
app:zdt\c\zdt_net.c  MMIZDT_Net_Init
// sys-msg-init-msg
app:zdt\c\zdt_net.c  case^ZDT_APP_SIGNAL_NET_INIT
// sys-msg-init-msg-init...一次
app:zdt\c\zdt_net.c  ZDT_Net_Init
// sys-msg-init-msg-init-user...(Init)...(TCP)
app:zdt\c\zdt_tcp.c  ZdtTCP_NetInit
app:zdt\c\zdt_yx_net.c  YX_Net_Init
app:zdt\c\zdt_tcp.c  ZdtTCP_NetOpen
//
// sys-msg-init-msg-init-open
app:zdt\c\zdt_net.c  MMIZDT_Net_Open
app:zdt\c\zdt_net.c  case^ZDT_APP_SIGNAL_NET_OPEN
app:zdt\c\zdt_net.c  BOOLEAN^ZDT_Net_Open
app:zdt\c\zdt_net.c  ZDT_Net_PdpActive
// sys-msg-init-msg-init-open-...后略[TCP]


//2.gps
// sys-msg-init-msg-init-gps
app:zdt\c\zdt_net.c  UBX_AGPS_TCP_Send
app:zdt\c\zdt_tcp.c  ZDT_API_TCP_Reg
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_REG
app:zdt\c\zdt_tcp.c  ZdtTCP_HandleReg
// IP->TCP_Reg->Send


//3.station
app:zdt\c\zdt_yx_api.c  YX_API_LBS_Change_Post
// msg1-msg2-msg3
app:zdt\c\zdt_app.c  MMIZDT_Net_Handle_AppMsg
app:zdt\c\zdt_net.c  YX_Handle_AppMsg
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_LBS_CHANGE





[1.6] tcp
//1.open
// ...前略[net/receive]
app:zdt\c\zdt_net.c  ZDT_Net_PdpActive
app:zdt\c\zdt_net.c  ZDT_Net_PDPTry(s_zdt_net_cur_sys)
app:zdt\c\zdt_net.c  MMIAPIPDP_Active
// PDP
app:zdt\c\zdt_net.c  =^ZDT_Net_HandlePdpMsg
app:zdt\c\zdt_net.c  MMIPDP_ACTIVE_CNF


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


//4.active
// PDP-msg
app:zdt\c\zdt_net.c  case^ZDT_APP_SIGNAL_NET_ACTIVE_SUCCESS
// PDP-msg-net
app:zdt\c\zdt_net.c  MMIZDT_Net_Handle_PDPActiveOK
// PDP-msg-net-tcp-Active
app:zdt\c\zdt_tcp.c  MMIZDT_TCP_Handle_PDPActiveOK
app:zdt\c\zdt_tcp.c  MMIZDT_TCP_PdpStateUpdate
// PDP-msg-net-tcp-Active-Reg...处理等待事件
app:zdt\c\zdt_tcp.c  MMI_ZDT_TCP_PdpStateActive
app:zdt\c\zdt_tcp.c  ZdtTCP_RegStart
// ...后略[Reg]


//2.conn (no use)
// conn
app:zdt\c\zdt_tcp.c  ZDT_TCP_SocConnected
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_CONNECT_SUCCESS


//3.send
app:zdt\c\zdt_net.c  zdt_net_tcp_test_callback
//
app:zdt\c\zdt_tcp.c  ZDT_API_TCP_SendData




[1.7] tcp------ip,url
//1.active reg
// ...前略[active/wait]
app:zdt\c\zdt_tcp.c ZdtTCP_RegStart


//2.1.yx reg
// ...前略[rec]
app:zdt\c\zdt_yx_net.c  YX_Net_Open
// parse-setip-reset-req
app:zdt\c\zdt_yx_net.c  YX_Net_Land_CallBack
app:zdt\c\zdt_yx_net.c  TCP_CB_REG
// 5s重新reg
app:zdt\c\zdt_yx_net.c  YX_Land_TimeStart


//2.2.gps reg
app:zdt\c\zdt_net.c  UBX_AGPS_TCP_Callback
app:zdt\c\zdt_net.c  TCP_CB_REG
//
app:zdt\c\zdt_net.c  TD_AGPS_TCP_Callback
app:zdt\c\zdt_net.c  TCP_CB_REG


//2.3.test reg
app:zdt\c\zdt_net.c  zdt_net_tcp_test_callback
app:zdt\c\zdt_net.c  TCP_CB_REG


//3.send
app:zdt\c\zdt_net.c  UBX_AGPS_TCP_SendExt
app:zdt\c\zdt_tcp.c  ZDT_API_TCP_SendData
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_WRITE_START
// ...后略[send]


[1.8] receive
//1.receive
// (no use)
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_RCV_DATA
app:zdt\c\zdt_tcp.c  ZdtTCP_HandleRcvData
// (cb)
app:zdt\c\zdt_yx_net.c  YX_Net_Land_CallBack
app:zdt\c\zdt_yx_net.c  TCP_CB_RCV
//
app:zdt\c\zdt_yx_net.c  YX_Net_Receive( )
app:zdt\c\zdt_yx_net.c  YX_Net_ReceiveHandle

//2.receive time set
// parse-settime
app:zdt\c\zdt_yx_net.c  "UPLOAD"
app:zdt\c\zdt_yx_net.c  YX_Net_Receive_UPLOAD
// parse-settime-updata-...后略[loc]
app:zdt\c\zdt_yx.c  case^ZDT_APP_SIGNAL_YX_LOCREPORT
// parse-settime-Respond-md5
app:zdt\c\zdt_yx_net.c  YX_Net_TCPRespond(g_zdt_phone_imei,"UPLOAD"
// parse-settime-Respond-md5-Me-Node(+)
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_WRITE_ADD
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_WRITE_START
// ...后略[send]



//3.receive ip set
// "IP"->reg yx
// net/"IP"->open net
// parse-setip
app:zdt\c\zdt_yx_net.c  "IP"
app:zdt\c\zdt_yx_net.c  YX_Net_Receive_IP
// parse-setip-reset
app:zdt\c\zdt_yx_net.c  YX_Net_Reset
app:zdt\c\zdt_yx_net.c  YX_Net_Open
// parse-setip-reset-req
app:zdt\c\zdt_yx_net.c  YX_Net_Reg( )
app:zdt\c\zdt_yx_net.c  ZDT_API_TCP_Reg
app:zdt\c\zdt_yx_net.c  YX_Net_Land_CallBack
// parse-setip-reset-req
app:zdt\c\zdt_tcp.c ZDT_APP_SIGNAL_TCP_REG
// parse-setip-reset-req-open-(1)...后略[open]
app:zdt\c\zdt_tcp.c MMIZDT_Net_Open
// parse-setip-reset-req-reg-(2)...后略[reg]
app:zdt\c\zdt_tcp.c ZdtTCP_RegStart




[1.9] send
//1.send
// ...前略[gps/Respond]
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_WRITE_START
// md5-Me-Node(-)
app:zdt\c\zdt_tcp.c  ZdtTCP_Start
// md5-Me-Node-pre-wrt
app:zdt\c\zdt_tcp.c  ZdtTCP_ConnWrite
app:zdt\c\zdt_tcp.c  ZdtTcp_Write
//
app:zdt\c\zdt_tcp.c  case^SIG_ZDT_TCP_WRITE
// ...后略[未写完]


//2.Conncet (no use)
app:zdt\c\zdt_tcp.c  TCP_Task_HandleSig_Conncet
// conn->pre->host->addr
app:zdt\c\zdt_tcp.c  ZDT_TCP_SocConnectStart
app:zdt\c\zdt_tcp.c  ZDT_TCP_SocConnect( )
// 50s-disConn
app:zdt\c\zdt_tcp.c  ZDT_TCP_StartConnectTimer
// conn->ok
app:zdt\c\zdt_tcp.c  ZDT_TCP_SocConnected( )
// conn->ok->free
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_CONNECT_SUCCESS
// conn->ok->write
app:zdt\c\zdt_tcp.c  ZDT_TCP_SocWrite( )
//    sci_sock_send( )
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_WRITE_SUCCESS
// conn->ok->write->ok->end
app:zdt\c\zdt_tcp.c  int^ZdtTCP_End( )
app:zdt\c\zdt_yx_net.c  case^TCP_CB_SEND
app:zdt\c\zdt_yx_net.c  YX_Net_HandleSendSuccess
// conn->ok->write->ok->end->send other
app:zdt\c\zdt_yx_net.c  YX_Net_TCPSend( )
// conn->ok->write->ok->end->next...后略
app:zdt\c\zdt_tcp.c  case^ZDT_APP_SIGNAL_TCP_WRITE_START


// record
// ...前略
app:zdt\c\zdt_yx.c   case^ZDT_APP_SIGNAL_YX_RECORD_SEND




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




// 1.sos
// [rec/send]
// net-sms-sos (no use)
app:zdt\c\zdt_yx_net.c  YX_API_SMS_SendSOS
// rec-sos
app:zdt\c\zdt_yx_net.c  YX_Net_ReceiveHandle
app:zdt\c\zdt_yx_net.c  "SOS"
app:zdt\c\zdt_yx_net.c  YX_Net_Receive_SOSSMS


// 2.bat
app:zdt\c\zdt_yx_net.c  YX_Net_ReceiveHandle
// net-set-bat
app:zdt\c\zdt_yx_net.c  YX_Net_Receive_LOWBAT



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




[1.13] time--轮询
// app-user-time
app:zdt\c\zdt_app.c  MMIZDT_CheckTimerStart()
// app-user-time-msg
app:zdt\c\zdt_app.c  case^ZDT_APP_SIGNAL_CHECK_TIME
//  周期1分钟: am, pm, jp,
app:zdt\c\zdt_app.c  MMIZDT_HandleCheckTimer
app:zdt\c\zdt_yx_net.c  YX_Net_TimerCheck( )
//
app:zdt\c\zdt_yx_net.c  MMIZDT_Net_Reset



[1.14] eme-----重连2次
//
oemPath = DAPS\source\email\engine\email\impl\qeetm\impl\src\oem
oem:\\

//E_Connect->GetHost->GetHost->Connect->Connect

//
oem:eme_socket.c  EME_Socket_Connection
//   pstSock->iRetryTimes--;
//
oem:eme_socket.c  WE_VOID^Socket_GetHostCB
//--60s
//   else if (pstSock->stDnsResult.nResult == OEM_SOC_NOTCONN && pstSock->iRetryTimes > 0)
//      OEM_GetHostByName();
//
oem:eme_socket.c  WE_VOID^Socket_ConnectCB
//--120s
//      if (iError == OEM_SOC_ERROR && pstSock->iRetryTimes > 0 && pstSock->phOEMSocketHdl != NULL)
//         iReturn =  OEM_Connect();


[1.15] 







