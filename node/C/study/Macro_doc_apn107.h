
//目录:
Save:node\C\study\Macro_doc_apn107.h \[1.1\] 460
Save:node\C\study\Macro_doc_apn107.h \[1.2\] 466
Save:node\C\study\Macro_doc_apn107.h \[1.3\] 425 以色列/巴勒斯坦
Save:node\C\study\Macro_doc_apn107.h \[1.4\] 259 摩尔多瓦
Save:node\C\study\Macro_doc_apn107.h \[1.5\] 404 印度
Save:node\C\study\Macro_doc_apn107.h \[1.6\] 220
Save:node\C\study\Macro_doc_apn107.h \[1.7\] 
Save:node\C\study\Macro_doc_apn107.h \[1.8\] 
Save:node\C\study\Macro_doc_apn107.h \[1.9\] 
Save:node\C\study\Macro_doc_apn107.h \[1.10\] 
Save:node\C\study\Macro_doc_apn107.h \[1.11\] 
Save:node\C\study\Macro_doc_apn107.h \[1.12\] 


### 新增运营商delta nv
// --SIM(HPLMN)相关NV项
// "国家名称缩写_运营商名称_S.nv"
//
// --PLMN(VPLMN)相关NV项
// "国家名称缩写_运营商名称_P.nv"


### nv build
PS\nv\operator_delta\operator_config_all\
PS\nv\operator_delta\operator_config_all\_DeltaNV添加说明.txt

PS\nv\internal\ps\common\h\
PS\nv\internal\ps\common\h\COMMON_LIST.h
//
build\[project_name]_builddir\img目录生成[projectname]_deltanv.bin

// delta
PS\nv\export\ps\common\

// 包含所有可动态加载参数的默认值
PS\nv\operator_delta\operator_config_all\Default_P.nv
PS\nv\operator_delta\operator_config_all\Default_S.nv



[1.1] 460

// CN_CMCC
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="460"
// CMNET
//        <Item mcc="460" mnc="0"/>
//        <Item mcc="460" mnc="2"/>
//        <Item mcc="460" mnc="4"/>
//        <Item mcc="460" mnc="7"/>
//        <Item mcc="460" mnc="8"/>
// 沃宽带用户连接互联网
//        <Item mcc="460" mnc="1"/>
//        <Item mcc="460" mnc="6"/>
//        <Item mcc="460" mnc="9"/>
// CTWAP
//        <Item mcc="460" mnc="3"/>
//        <Item mcc="460" mnc="12"/>
// CTNET
//        <Item mcc="460" mnc="11"/>
// CMIOT/CMMTM
//        <Item mcc="460" mnc="13"/>

// 8910少5、15
PS\nv\operator_delta\operator_config_all\CN_CMCC_S.nv
PS\nv\operator_delta\operator_config_all\CN_CMCC_P.nv




[1.2] 466
// TW_TWM
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="466"
// 名字映射的文件
PS\nv\operator_delta\operator_config_all\TW_TWM_S.nv
PS\nv\operator_delta\operator_config_all\TW_TWM_P.nv

//
关于这个回落问题，实际上是牵涉到volte或ims参数的问题。
一般改法是去修改指定运营商的ims参数的nv。

//
S89T目前是我昨天发的三个问题。其中一个EVS问题是不支持，
但是展讯也给了改动方法，也是改nv。
这个不是强制要求，可以先不管；
另一个 不回落3G的问题，改了之后，我编了版本，台湾反馈没有效果，提的cq是SPCSS01070420，
可以关注下状态，如果有要配合的，就配合弄一下。等下我把改的nv提交一下 
//
SPCSS01072982 ：跟XCAP问题
SPCSS01072886 ：跟SMS over IMS问题
相关CQ：SPCSS01070420

###
//
F76T外单客户，新报了一个运营商的老问题，美国的tmobile，
有的时候开机注册不上volte，所以打电话失败。
客户刚配合抓了log，在让展讯分析中。cq号是SPCSS01071425。
问题视频和log也都上传了。
把你们拉进客户的群了“彭总展意丰索爱服务群”

 
### log--apn
// apn
mmipdp info MMIAPIPDP_Active: priority:3, app_handler:0x27, apn:Internet, dual_sys:0
mmipdp info MMIAPIPDP_Active: priority:3, app_handler:0x27, apn:hos, dual_sys:0
// mcc--mcc
roaming status: 0, net isroaming: 0, net mcc: 466, sim mcc: 466
// hostbyname
tcpip: sci_async_gethostbyname - url(xcap.ims.taiwanmobile.com), timeout(4000 ms), netid(81c8070c)



[1.3] 425 以色列/巴勒斯坦
// IL_Partner
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="425"
// 名字映射的文件
PS\nv\operator_delta\operator_config_all\
PS\nv\operator_delta\operator_config_all\IL_Cellcom_P.nv
PS\nv\operator_delta\operator_config_all\IL_Cellcom_S.nv
PS\nv\operator_delta\operator_config_all\IL_Partner_P.nv
PS\nv\operator_delta\operator_config_all\IL_Partner_S.nv



### 以色列
// 
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="515"   # 错了，记得还原
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="260"   # 错了，记得还原
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="310"
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="222"

// cp
apnPath = PS\nv\operator_delta\operator_config_all\
apn:test\

cp apn:test\test_P.nv apn:test\IL_GolanTelecom_P.nv
cp apn:test\test_S.nv apn:test\IL_GolanTelecom_S.nv
cp apn:test\test_P.nv apn:test\IL_RamiLevi_P.nv
cp apn:test\test_S.nv apn:test\IL_RamiLevi_S.nv
cp apn:test\test_P.nv apn:test\IL_Widely_P.nv
cp apn:test\test_S.nv apn:test\IL_Widely_S.nv
cp apn:test\test_P.nv apn:test\IL_019_P.nv
cp apn:test\test_S.nv apn:test\IL_019_S.nv
cp apn:test\test_P.nv apn:test\IL_K_SIM_P.nv
cp apn:test\test_S.nv apn:test\IL_K_SIM_S.nv
cp apn:test\test_P.nv apn:test\IL_Annatel_P.nv
cp apn:test\test_S.nv apn:test\IL_Annatel_S.nv


// apnStr
app:phone\h\
app:phone\h\plmn_ts25_database_enum.h  PLMN_425_
app:phone\h\plmn_ts25_database_table.h  PLMN_425_
source:mmi_app\common\h\plmn_ts25_database_str.h  TXT_NET_887


[1.4] 259 摩尔多瓦
// 259/15
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="259"
// L4默认配置满足需求，无需更新
PS\nv\operator_delta\operator_config_all\
PS\nv\operator_delta\operator_config_all\MD_IDC_P.nv
PS\nv\operator_delta\operator_config_all\MD_IDC_S.nv

// precondition? 
// sip_PreconditionEnabledOnActive? 
// resourceAlwaysReady? 
// ConfPreconditionEnabled? 
// heldToneEnable? 
PS_NV_PARAMS\NV_PARAM_TYPE_PLMN_DELTA_NV\ims_plmn_nvinfo\sip_preconditionEnabled=0


###
https://www.cnblogs.com/neo-java/p/6830319.html



[1.5] 404 印度
//404 10
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="404"
//
PS\nv\operator_delta\operator_config_all\IN_Airtel_P.nv
PS\nv\operator_delta\operator_config_all\IN_Airtel_S.nv




[1.6] 220
// 22005 有个3G补丁



[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 







