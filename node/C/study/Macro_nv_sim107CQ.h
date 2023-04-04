
//目录:
Save:node\C\study\Macro_nv_sim107CQ.h \[1.1\] Volte
Save:node\C\study\Macro_nv_sim107CQ.h \[1.2\] Call
Save:node\C\study\Macro_nv_sim107CQ.h \[1.3\] DTMF
Save:node\C\study\Macro_nv_sim107CQ.h \[1.4\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.5\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.6\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.7\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.8\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.9\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.10\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.11\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.12\] 




[1.1] __Volte__

### [FAQ124077] 为什么终端在一个新的网络下驻不上VoLTE？
//	在一个新的网络下，终端开启VoLTE功能后只能驻上4G而驻不上VoLTE，可能是以下原因：
//
//	1. 网络不支持VoLTE
//	该运营商网络还不支持VoLTE，可使用相同SIM卡插入对比机进行排查。
//
//	2. SIM卡没有开通VoLTE业务
//	如果SIM卡没有开通VoLTE业务，终端驻网VoLTE会失败，可使用相同SIM卡插入对比机进行排查。
//
//	3. 运营商网络没有加入终端VoLTE白名单
//	如果运营商网络没有加入终端VoLTE白名单，则终端不会发起VoLTE注册。由于目前并不是所有运营商的VoLTE业务支持都很完善。
//	为避免用户在VOLTE功能不完善的网络中使用VOLTE产生问题，在陌生网络或我们已知VOLTE支持不完善的网络中，终端默认关闭VOLTE功能。
//	只有对于我们已经测试过并已知网络支持VOLTE功能已经很完善的网络（如中国移动），VOLTE功能默认打开。可参考FAQ119972，检查VoLTE白名单的配置情况。
//	如排除以上几点后，终端仍无法驻网VoLTE，则应是终端在该网络下需要进行特殊的VoLTE参数配置。请提供包含测试机和对比机驻网过程的log以进行具体分析。
//	如有该运营商的VoLTE参数配置文件，也请一并提供以作参考。


### [FAQ111795] 客户更新NV后不能注册VOLTE自查方法？
//	NV与版本不匹配的特征：
//	CP Log中终端发给网络的IMS注册消息REGISTER的Security-Client头域的端口port-c和port-s都是0，如下所示：
//	[IMS]:msg -> REGISTER
//	[IMS]:Security-Client: ...;port-c=0;port-s=0,...


### [FAQ202173044] 如何从log中确认VoLTE图标是否显示？
//  1. 确认一下当前VoLTE白名单功能是否关闭，确认方法如下：
//      #*8378#1# -> Telephony -> IMS White List Set -> Close/Open
//  2. 如果VoLTE功能是开启的状态，可以在接口MMIAPIPHONE_volte_icon_display_set中增加打印信息打印s_volte_icon_display_set[dual_sys]的值查看是否正确。
//	3. 刷新VoLTE图标的接口：StatusAreaSetVolteInfo 


### [FAQ115342] 如何理解双Volte的注册机制？
// So, two SIM cards support the VOLTE function should show two "Volte" icons.


### [FAQ123107]终端拨打VoLTE电话，什么情况下通话界面会显示HD图标？
//	终端通话界面的HD图标标识的是终端通话过程使用的语音编码方式是宽带编码。
//
//	终端拨打VoLTE电话时，电话发起INVITE消息一般会默认携带AMR-WB、AMR两种编码方式，支持EVS的终端还会携带EVS编码方式。
//
//	在VoLTE电话建立过程中，终端与网络协商决定VoLTE电话过程中使用的语音编码方式。如果协商结果为AMR-WB或EVS，则通话过程使用宽带编码，
//通话界面显示HD图标；如果协商结果为仅支持AMR，则通话过程使用窄带编码，通话界面不显示HD图标（如果显示4G，是VoLTE；否则，是非VoLTE）。
//
//	因此，终端拨打VoLTE电话时，通话界面是否显示HD图标，取决于终端和网络的媒体协商结果，与对端手机是否支持VoLTE没有直接关系。










[1.2] __Call__

### 呼入失败问题，请参考[FAQ202172533] 提供log




[1.3] __DTMF__


### [FAQ119642] 展锐终端Volte电话DTMF的两种形式
//	目前展讯终端Volte电话过程中的DTMF有两种形式：
//	1. 电话建立过程中经过telephone-event协商，电话建立后通过特定的RTP数据发送，对应NV:support_named_televt设置为1
//	2. 不经过协商，电话建立后将对应的Tone音混入上行数据中发送（同CS电话），对应NV:support_named_televt设置为0


### [FAQ202173392]通话应用UI定制后如何解决DTMF失效
//	什么情况可以发送DTMF
//	需要关注的以下三点进行自查：
//	1. 通话中什么情况可以发送DTMF，判断接口使用MMICC_IsAllowSendDtmf，遵循协议不建议修改。
//
//	2. 发送DTMF的应用接口是SendDtmfByChar
//
//	  此接口主要实现：
//	  - 本地tone音播放
//	  - 根据当前通话状态发送START/STOP成对指令，发送间隔可根据变量 is_stop_immediately 客制化。
//
//	3. 界面相关问题可关注MMIAPICC_SendDtmf中对当前界面的判断，如新建UI界面请添加，保证可以调用到MMICC_SendSingleDtmf。








[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 





