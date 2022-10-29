
### 新增运营商delta nv
// --SIM(HPLMN)相关NV项
// "国家名称缩写_运营商名称_S.nv"
//
// --PLMN(VPLMN)相关NV项
// "国家名称缩写_运营商名称_P.nv"


### nv build
//  _DeltaNV添加说明.txt
// 
PS\nv\internal\ps\common\h\
PS\nv\internal\ps\common\h\COMMON_LIST.h
//
build\[project_name]_builddir\img目录生成[projectname]_deltanv.bin

// delta
PS\nv\export\ps\common\

// 包含所有可动态加载参数的默认值
Default_P.nv
Default_S.nv


### 460
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


### 466
// TW_TWM
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="466"
// 名字映射的文件
PS\nv\operator_delta\operator_config_all\TW_TWM_P.nv
PS\nv\operator_delta\operator_config_all\TW_TWM_S.nv

//
关于这个回落问题，实际上是牵涉到volte或ims参数的问题。
一般改法是去修改指定运营商的ims参数的nv。

//
S89T目前是我昨天发的三个问题。其中一个EVS问题是不支持，
但是展讯也给了改动方法，也是改nv。
这个不是强制要求，可以先不管；
另一个 不回落3G的问题，改了之后，我编了版本，台湾反馈没有效果，提的cq是SPCSS01070420，
可以关注下状态，如果有要配合的，就配合弄一下。等下我把改的nv提交一下 

###
//
F76T外单客户，新报了一个运营商的老问题，美国的tmobile，
有的时候开机注册不上volte，所以打电话失败。
客户刚配合抓了log，在让展讯分析中。cq号是SPCSS01071425。
问题视频和log也都上传了。
把你们拉进客户的群了“彭总展意丰索爱服务群”




