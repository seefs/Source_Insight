
// nv备份
Desktop:\SPRD_T107\X332\sim_lock_nv\
// imsi备份:
//  -:-----=====-----
//  1:460012348652788 联通
//  1:460077958813372 移动


### 3.1 配置总开关及锁类型
rdnv:\
rdnv:NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only
// 网络锁 改成 运营商锁
//  0x0f ==> 0x35
// 网络锁 改成 用户锁+运营商锁+网络锁
//  0x0f ==> 0xAB
// 只开联通网络锁--test_ok
//  0x0f ==> 0xB
// 只开联通用户锁_or_移动网络锁--test
//  0x0f ==> 0x8B

//
PS\nv\internal\ps\common\
PS\nv\internal\ps\common\NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only



### 3.2 配置锁类型 simlock_status
nv:\
//   锁1~锁4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status
//   锁5
nv:NV_SIM_LOCK_USER_DATA_ID.xml  sim_lock_status
// 网络锁 改成 运营商锁
//  0x0 ==> 0x4
// 网络锁 改成 用户锁+运营商锁+网络锁
//  0x0 ==> 0x15
// 只开联通网络锁--test
//  0x0 ==> 0x1
// 只开联通用户锁_or_移动网络锁--test
//  0x0 ==> 0x8

//
PS\nv\export\ps\mn\
PS\nv\export\ps\mn\NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status



### 3.3 配置白名单
//   锁1~锁4
//    白名单的总个数
//    XML 配置白名单时，MCC 配置非零的数据。如果某类型锁没开启，XML 该类型锁白名单项不要填写内
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_locks            ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_subset_locks     ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sp_locks , sp_locks->sp  ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  corporate_locks          ->numLocks
// 锁1改成 1个
//  0x0 ==> 0x1
// 锁1改成 12个
//  0x0 ==> 0xC
// 只开联通网络锁--test
//  0x0 ==> 0x1
// 只开联通用户锁_or_移动网络锁--test
//  0x0 ==> 0x1

// 修改mcc mnc
//			<ITEM name="locks[0]" type="STRUCT" type_name="PLMN_T" varname="locks0" desc="item of of network lock list">
//				<ITEM name="mcc" type="uint16" varname="mcc" value="0x1A9" desc="mcc"/>
//				<ITEM name="mnc" type="uint16" varname="mnc" value="0x02" desc="mnc"/>
//				<ITEM name="mnc_digit_num" type="uint16" varname="mnc_digit_num" value="0x0" desc="mnc digit number"/>
//			</ITEM>


// 黑名单不用配
//nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_blacklist_locks


//   锁5
nv:NV_SIM_LOCK_USER_DATA_ID.xml  user_locks
//nv:NV_SIM_LOCK_USER_DATA_ID.xml  encrypted_crc0
//PS\nv\export\ps\mn\NV_SIM_LOCK_USER_DATA_ID.xml  user_locks
//  修改
// numLocks 0x0 ==> 0x3
// imsi_len 0x0 ==> 0x8


// 配置两卡白名单独立控
//   ==> “sim1_locks”配置说明参考 3.8 


### 3.4 配置密码类型
// “control_key_type”用来定义解锁密码的算法。
nv:NV_SIM_LOCK_NV_CONTROL_KEY_ID.xml  control_key_type
//  control_key_type=4 是安全方案，是部署时自动生成的。 表示使用随机密码。相关取得解锁码的方法请参考下列文档
//    https://unisupport.unisoc.com/file/index?fileid=29656
// 0x0 ==> 0x4
//
//  control_key_type=3 密码无需存储。密码长度为8位。
//   密码由IMEI1根据如下算法生成：
//   IMEI每相邻两位相加取个位，前14位IMEI可算出7位的密码，第8位取IMEI的第1位。
//   例如：IMEI:352273017386340，该算法的密码为：84010473
// 0x0 ==> 0x3


### 3.5 配置解锁功能关闭
// 不改
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit2  1(bit7,…,bit0)
// 置 4 表示关闭解锁功能
// 0x0 ==> 0x4
// 不要同时修改：非 SIMLOCK+关闭解锁 会导致所有卡都不能用。
// SIMLOCK 0x0f ==> 0x00;  dummy3 0x0 ==> 0x4


### 3.6 配置最大解锁次数限制
// 默认最大解锁次数为 10 次，输错至最大解锁次数后会进入永久锁卡状态
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  max_num_trials
// 不限制解锁次数
// 0xA ==> 0x7FFFFFFF



### 3.7 配置五种锁的关系
//   锁1~锁4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit3  1(bit7,…,bit0)
// 与 改 或
// 0x0 ==> 0x8

//   锁5--文档没说最好也改
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy3



// 有点复杂，看文档...



### 3.8 配置两卡白名单独立控制
// 待定, 太复杂不改
//   锁1~锁4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit4  1(bit7,…,bit0)
//  共用 改 独立
// 0x0 ==> 0x10
//  不支持解锁，卡 1 卡 2 白名单相互独立配置
// 0x0 ==> 0x14

//   锁5--文档没说最好也改
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy3 .bit4


// 白名单独立时
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  numLocks
//  卡 2 名单数目--numLocks--不需要配置
//  该功能与卡槽依赖


// 独立设置同一种锁
//  参考文档--前N为sim1, 后面的为sim2


// User Lock 不支持独立配置。



### 3.9 配置 IMEI 选择性保护控制
//   锁1~锁4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy4

// V5.0
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 0，IMEI1 参与保护
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 1，IMEI2 参与保护
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 2，IMEI3 参与保护
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 3，IMEI4 参与保护
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 4，IMEI1 和 IMEI2 参与保护
//（仅 CP 版本 FM_BASE_17C_W21.11.2 及以前版本）


// V5.1 和 V5.2
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy4
// IMEI 保护改在 Simba 工具上配置
// 改 V5.2
// 0x0 ==> 0xc0000000

//   锁5--文档没说最好也改
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy4



### 3.10 配置一次性解锁多重锁
//
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy1
// 逐层解锁 改 一次性解锁
// 0x0 ==> 0x1

//   锁5--文档没说最好也改
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy1




### 测试
### 4.1 防窜改测试
//? 窜改以下 16 条数据的任一处，将出现开机驻网失败。
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> max_num_trials
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> network_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> network_subset_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> sp_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> corporate_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA ->dummy1～dummy4
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> sim_lock_status
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> user_locks
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> nck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> nsck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> spck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> cck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> pck_trials
//? PS_NV_PARAMS -> SIM_LOCK_CONTROL_KEY -> control_key_type
//? PS_NV_PARAMS -> NV_PARAM_TYPE_SIM_CFG[1] -> is_support_gsm_only
//? TD_TIANJI2_NV_TYPE -> NV_PARAM_TYPE_MN_CFG -> sim_slot_cfg

//? 测试 SIMLOCK 版本清零以下两项 NV 值后能正常锁卡。
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> sim_lock_status
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> sim_lock_status

// 不知道什么用，好像是sim信息
PS\nv\internal\ps\mn\NV_PARAM_TYPE_MN_CFG.xml  id="2140"


### 暗码查看
// 密码6~8位
//		==>####8888#，暗码
app:parse\c\mmiparse_dial.c  MMIAPISET_ParseSIMLockSwitchString
//		====>OpenSIMLockSwitchWin
//		======>HandleSIMLockMenuWindow
//		========>锁状态:
//		==========>MMIAPIPHONE_GetSIMUnlockConfigDataPtr
//		========>5种锁:
//		========>MMIAPIPHONE_HandleSIMLockSettingMenuFlow
//		==========>HandleSIMUnlockingInputingString
//		============>解锁密码:
//		==============>MNPHONE_SIMUnlockEx
//		============>上锁密码:
//		==============>MNPHONE_SIMLockEx
app:phone\c\mmiphone_wintab.c  SIM_UNLOCK_LEN_IS_IN_RANGE



### SimLock生产流程介绍 V1.1.
//
https://item.taobao.com/item.htm?spm=2013.1.20141003.10.pFAw9w&scm=1007.10011.31620.100200300000001&id=520397211495&pvid=d017ed7f-9f58-4952-97ba-4bcaec94ef1d

//
SimLockDataGen配置



### QuerySIMLockKey


### ResearchDownload 下载注意项
//
make\perl_script\UMS9117.xml  IMEI                       0xFFFFFFFF
make\perl_script\UMS9117.xml  SIMLOCK_SIGN               0x91C  2332  SIMLOCK_SIGN.xml
make\perl_script\UMS9117.xml  SIMLOCK_PK                 0x91E  2334  SIMLOCK_RSA.xml
//make\perl_script\UMS9117.xml  SIMLOCK_CUSTOMIZE_DATA   0x1F0  496
//make\perl_script\UMS9117.xml  SIMLOCK_USER_DATA        0x1F1  497
//make\perl_script\UMS9117.xml  SIMLOCK_NVCONTROL_KEY    0x1F2  498
make\perl_script\UMS9117.xml  SIMLOCK_KEY                0x1F4  500   NV_SIM_LOCK_STORAGE_KEY.xml
//make\perl_script\UMS9117.xml  SIMLOCK_CFG              0x7E4  2020  NV_PARAM_TYPE_SIM_CFG[1].xml

// 自定义
SPDE_PRJ\{cur}\PerlNV\UMS9117_NEW.xml


### SIMLOCKKEYGEN
// SIMLOCKKEYGEN
tools\Common\SIMLOCKKEYGEN\Bin\

//
//testPath = tools\Common\SIMLOCKKEYGEN\Bin\
//test:\\
//
//test:keras\Keras_text_type.py
//python_w test:keras\Keras_text_type.py
//test:keras\Keras_text_type.py
//cmd_s tools\Common\SIMLOCKKEYGEN\Bin\

// 
SimLockKeyGen -f imei_list_file dummy1 dummy2 dummy3 OutputCsvFile [-keylen n]
SimLockKeyGen -f imei_list_file.txt 1 0 0 output_1_0_0.csv -keylen 8
SimLockKeyGen -f imei_list_file.txt 1 0 8 output_1_0_8.csv -keylen 8


### WriteIMEI
在FactoryDownload工具、WriteIMEI工具和CheckX工具的PhaseCheck.ini配置文件增加：STATION 8 = 
SIMLOCK。

// WriteIMEI
file_down:_tool\WriteIMEI_R19.0.0001\
// FactoryDownload
//
// CheckX
//

// _apn-doc
SPRD_T107:_apn\




