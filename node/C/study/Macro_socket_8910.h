
基础路径设置:
resPath = MS_MMI_Main/source/resource/mmi_res_240x240
res:\\
appPath = MS_MMI_Main\source\mmi_app\app
app:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_socket_8910.h \[1.1\] 防走丢
Save:node\C\study\Macro_socket_8910.h \[1.2\] socket
Save:node\C\study\Macro_socket_8910.h \[1.3\] 平台
Save:node\C\study\Macro_socket_8910.h \[1.4\] API param
Save:node\C\study\Macro_socket_8910.h \[1.5\] ipurl
Save:node\C\study\Macro_socket_8910.h \[1.6\] command, IMEI
Save:node\C\study\Macro_socket_8910.h \[1.7\] code----------fzd
Save:node\C\study\Macro_socket_8910.h \[1.8\] 
Save:node\C\study\Macro_socket_8910.h \[1.9\] 
Save:node\C\study\Macro_socket_8910.h \[1.10\] tool
Save:node\C\study\Macro_socket_8910.h \[1.11\] 
Save:node\C\study\Macro_socket_8910.h \[1.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 防走丢
//
http://fzd.xcloudtech.com:6868/DeviceManagement/
账号： BMTX
密码： BMTX
//
对接流程：
请先登陆硬件管理网站，修改网站密码---->在网站上创建设备型号
---->新建测试设备id
---->然后开始按照接口文档对接心跳接口，对接成功后，可在防走丢app上添加绑定该测试设备
---->成功绑定后，可看到在网站上新建设备型号所勾选的所有功能
---->下一步就是按接口文档实现这些功能的对接
---->对接过程中可在app上直接测试对接是否ok
---->完全调通后，可寄一两样机给防走丢团队帮忙联调

批量生产的时候，可以把要导入的号放excel的第一列给我们
（确保是第一列，其他列将会导致导入失败），我们将会批量写到后台库里，并且生成对应的二维码发给你们

//厂商
BMTX

//设备型号
CWA01


[1.2] socket

//
//	 client_sock = sci_sock_socket(AF_INET, SOCK_STREAM, 0, pdp_net_id);
//	    SCI_TraceLow("VIEFONG >>>>> Create socket INVALID e = %d", sci_sock_errno((long)client_sock));
//
//	    if (client_sock == -1) { // socket 创建失败，错误处理（略）
//	        wchar f1[] = L"create socket failed - 6";
//	        if(pdp_net_id > 0) {
//	            UpdateLabel(f1);
//	        } else {
//	            UpdateLabel(s1);
//	        }
//	        return;
//	    }



[1.3] 平台
//
sccard 是协议 scapp是UI

// 手表及硬件关爱平台
http://fzd.xcloudtech.com:4000/
测试账号： xcloud
密码： 123456

//八件套
测试账号： bjt
密码： 123456   


//测试网址
http://fzd.xcloudtech.com/
测试端口 9000 


//Android App
//

//
//	如果没响，那应该是您还没对接好，对接尽量使用lab.xcloudtech.com:9000
//	测试服测通了再转正式服




[1.4] API param
//1.imei--15位
352273017386340
//


//2.这是签名的私钥
fJcZar4toZrCOfT9VDguc6h23Q4BMTXD





[1.5] ipurl
//test
#define FZD_SOCKET_URL          "test.xcloudtech.com"
#define FZD_SOCKET_IPURL        "203.195.151.158"
//
#define FZD_SOCKET_URL          "api.xcloudtech.com" 9000
#define FZD_SOCKET_IPURL        "203.195.151.158"



[1.6] command, IMEI
[MD5加密（+）BMTX（厂商）*手机的IMEI号*后面输出的长度*内容]

//1.链路保持
[81127881ccb370ff20604dcc8525bf1fBMTX*867400020316612*0002*LK]
[BMTX*867400020316612*0002*LK]


//2.询问是否绑定：
[3665e8898b66b9a85374bb173357fc5bBMTX*867400020316612*0004*PING]

###[BMTX*YYYYYYYYYYYYYYY*LEN*KA,日期，步数,翻滚次数,电量百分数]
例:[4761f0430cd7aa848638f70f4ce3c9d4BMTX*867400020316612*0014*KA,210714,50,100,100]

[a0af9258c1f0fd1bff726292ce73ce10BMTX*867400020316612*00CD*UD,210715,141330,A,22.570733,N,113.8626083,E,0.00,249.5,0.0,6,100,60,0,0,00000010,7,255,460,1,9529,21809,158,9529,63555,133,9529,63554,129,9529,21405,126,9529,21242,124,9529,21151,120,9529,63556,119,0]


//3.SOS：
[b80023a759454ff4e6918329bda949e1BMTX*867400020316612*0003*SOS] 


//4.生成绑定所需的二维码
[BMTX*352273017386340*0003*CID]
fJcZar4toZrCOfT9VDguc6h23Q4BMTXD
BMTX*352273017386340*0003*CIDfJcZar4toZrCOfT9VDguc6h23Q4BMTXD
10ed7e6705dbd8a937415f45e93205e2
[10ed7e6705dbd8a937415f45e93205e2BMTX*352273017386340*0003*CID]
//
https://api.xcloudtech.com/d?IMEI=352273017386340
https://api.xcloudtech.com/d?IMEI=352273017386342
https://api.xcloudtech.com/d?IMEI=352273017386344


//5.md5
// 传输数据--私钥--组合--md5--最终数据
[XT*33453345880000001566*000D*LK,50,100,100]
VMg3oCnND6NzhfA6dmNfSnBWZuKyLdeY
XT*33453345880000001566*000D*LKVMg3oCnND6NzhfA6dmNfSnBWZuKyLdeY
46f4941ba094aad0e483030946745e47
[46f4941ba094aad0e483030946745e47XT*33453345880000001566*000D*LK,50,100,100]





[1.7] code
// 1.app init (0s)
// --Subscribe
app:fzd\c\mmifzd_app.c  MMIAPIFZD_InitModule
app:fzd\c\mmifzd_app.c  FZDAPP_Init


// 2.idle open applet (3s)
// --applet
app:idle\c\mmiidle_mstyle.c  FZDAPP_Open
app:fzd\c\mmifzd_app.c  FZDAPP_Open
app:fzd\c\mmifzd_app.c  MMK_StartApplet
app:fzd\c\mmifzd_app.c  FZDAppletHandleEvent
//    case MSG_APPLET_START:
//    case MSG_APPLET_STOP: 


// 3.active (10s)
// --app msg
app:fzd\c\mmifzd_app.c  FzdApp_HandlePdpEvent
//    MMIPDP_NOTIFY_EVENT_ACTIVED:
//    MMIPDP_NOTIFY_EVENT_DEACTIVED:
//
app:fzd\c\mmifzd_app.c  HandleFzdMsg
app:fzd\c\mmifzd_app.c  case^FZD_APP_ACTIVE_PDP_REQ
app:fzd\c\mmifzd_app.c  FzdApp_ActivePdp
app:fzd\c\mmifzd_app.c  pdp_callback
app:fzd\c\mmifzd_app.c  FzdApp_SendSignal2MMI(FZD_APP_PDP_ACTIVE_IND)


// 4.Heartbeat (5min)
// --SOS不能等5min回调 [bug]
app:fzd\c\mmifzd_app.c  case^FZD_APP_PDP_ACTIVE_IND
app:fzd\c\mmifzd_app.c  FzdApp_StartWork
app:fzd\c\mmifzd_app.c  ActiveHeartbeat
app:fzd\c\mmifzd_app.c  HeartbeatTimerFun
app:fzd\c\mmifzd_app.c  case^FZD_APP_START_A_NOTICE_REQ
// --fzd-task
app:fzd\c\mmifzd_heartbeat.c  FzdApp_ReportHeartBeat
// --fzd-task-entry
app:fzd\c\mmifzd_heartbeat.c  Fzd_HeartBeat_socket_async_entry


// 5.host
// --reset timer 未exit [bug]
// --不必连接就心跳 [bug]
app:fzd\c\mmifzd_heartbeat.c  socket_async_gethostbyName
app:fzd\c\mmifzd_heartbeat.c  case^SOCKET_ASYNC_GETHOSTBYNAME_CNF
app:fzd\c\mmifzd_heartbeat.c  open( )
app:fzd\c\mmifzd_heartbeat.c  connect( )
app:fzd\c\mmifzd_heartbeat.c  case^SOCKET_CONNECT_EVENT_IND
// --45s 心跳
app:fzd\c\mmifzd_heartbeat.c  send( )


// 5.send
// --没有超长连发
app:fzd\c\mmifzd_heartbeat.c  case^SOCKET_WRITE_EVENT_IND
app:fzd\c\mmifzd_heartbeat.c  case^SOCKET_CONNECTION_CLOSE_EVENT_IND


// 5.read (自动读)
app:fzd\c\mmifzd_heartbeat.c  case^SOCKET_READ_EVENT_IND


// 6.GetHost
// task->GetHost->delay->GetHostCB->delay->exit
// task->GetHost->Connect->delay->ConnectCB->delay->exit
// task->GetHost->open->ConnectOk->sendCB
// sendCB->readCB->

// applet->PdpREQ->Active->Heartbeat->task
// Heartbeat->isTaskClose->taskOpen->ReTimer->Heartbeat
// Heartbeat->SendCb->Check->Active->isTaskClose->taskOpen->ReTimer->Heartbeat
// Heartbeat->SendCb->Check->Active->isTaskOpen->...
// LK->SendCb->Check->Active->isTaskClose->taskOpen->ReTimer->GetHost

// SOS->SendCb->Check->ReActive->fail->delay->ReActive
// SOS->SendCb->Check->ReActive->ok->task
// SOS->SendCb->Check->Active->isTaskClose->taskOpen->ReTimer
// SOS->SendCb->Check->Active->isTaskOpen->...



[1.8] 




[1.9] 




[1.10] tool
// md5
http://md5.chahuo.com/

// qrcode




[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 




