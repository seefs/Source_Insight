
//目录:
Save:node\C\study\Macro_doc_apn8910.h \[1.1\] 425
Save:node\C\study\Macro_doc_apn8910.h \[1.2\] 460
Save:node\C\study\Macro_doc_apn8910.h \[1.3\] 466
Save:node\C\study\Macro_doc_apn8910.h \[1.4\] 204
Save:node\C\study\Macro_doc_apn8910.h \[1.5\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.6\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.7\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.8\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.9\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.10\] apn大小写
Save:node\C\study\Macro_doc_apn8910.h \[1.11\] AutoAdapting
Save:node\C\study\Macro_doc_apn8910.h \[1.12\] MVNO
Save:node\C\study\Macro_doc_apn8910.h \[1.13\] strApn-----ID 对应
Save:node\C\study\Macro_doc_apn8910.h \[1.14\] 



### 新增运营商delta nv
// --SIM(HPLMN)相关NV项
// "国家名称缩写_运营商名称_S.nv"
//
// --PLMN(VPLMN)相关NV项
// "国家名称缩写_运营商名称_P.nv"
common\nv_parameters\delta_nv\Index.xml


### nv build
common\nv_parameters\delta_nv\
common\nv_parameters\delta_nv\_DeltaNV添加说明.txt

//PS\nv\internal\ps\common\h\
//PS\nv\internal\ps\common\h\COMMON_LIST.h
//
//build\[project_name]_builddir\img目录生成[projectname]_deltanv.bin

// delta
//PS\nv\export\ps\common\

// 包含所有可动态加载参数的默认值
common\nv_parameters\delta_nv\Default_P.nv
common\nv_parameters\delta_nv\Default_S.nv





[1.1] 425
common\nv_parameters\delta_nv\Index.xml  mcc="425"
//
app:phone\h\
app:phone\h\plmn_ts25_database_enum.h  PLMN_425_09
app:phone\h\plmn_ts25_database_enum.h  PLMN_425_19
app:phone\h\plmn_ts25_database_table.h  PLMN_425_09
app:phone\h\plmn_ts25_database_table.h  PLMN_425_19
source:mmi_app\common\h\plmn_ts25_database_str.h  TXT_NET_891A
source:mmi_app\common\h\plmn_ts25_database_str.h  TXT_NET_894A


[1.2] 460
common\nv_parameters\delta_nv\Index.xml  mcc="460"

// 移动148号段
// 缺少 PLMN_460_13
app:phone\h\plmn_ts25_database_enum.h  PLMN_460_11
//    PLMN_460_11,
app:phone\h\plmn_ts25_database_table.h  PLMN_460_11
//    460,11,STR_OPERATOR_CHN_CT,PLMN_460_11,


### SPCSS01079131
//		移动148号段
//
//		APN参数（2G）
//		<apn carrier="CMMTM"
//
//		        mcc="460"
//
//		        mnc="13"
//
//		        apn="cmmtm"
//
//		        type="default,xcap,hipri,supl"
//
//
//		移动148号段
//		APN参数（4G）
//		<apn carrier="CMIOT"
//
//		        mcc="460"
//
//		        mnc="13"
//
//		        apn="cmiot"
//
//		        type="default,xcap,hipri,supl"
//		--------------------------------
//		设置如下：
//		460    13    8    cmiot
//		460    13    8    cmmtm



//您好，我的意思是第2条APN会被忽略，如何兼容？
//设置如下：
//460    13    8    cmiot        （第1条Account Type为8）
//460    13    8    cmmtm     （第2条会被忽略）


//	你好,
//	 
//	配置MVNO APN账户对应的PHONE_PLMN_NAME_E枚举值。
//	特别注意：
//	1.MVNO APN账户需要配置在ntac中最前面;
//	2.这里需要和ntac配置一一对应，顺序也必须保持一致;
//
//	这些都要检查.



[1.3] 466
common\nv_parameters\delta_nv\Index.xml  mcc="466"



[1.4] 204
app:phone\h\plmn_ts25_database_enum.h  PLMN_204_04


###
// --init
//		==>MMIAPICONNECTION_GetGPRSSwitchStatus
//		==>HandleNetworkStatusInd
//		====>MMIAPICONNECTION_AutoAdapting
// --clean (第1次)
//		==>AutoAdapting
//		====>.is_need_clean                  # 
//		====>LoadNetworkAccountInfo
//		======>.s_plmn_config_table          # 预置apn, 为空
//		======>.R_NETWORK_ACCOUNT            # 加载apn, 所有apn
//		====>MMICONNECTION_SaveNetworkAccount
//		======>.settinglink_num              # 最多14个, 保存一次
//		======>SetDefaultNetworkAccount
//		========>.s_connection_setting_info  # apn数组(未分组)
// --apn数组 (第2次不clean)
//		==>HandleSimReadyInd
//		====>MMIAPICONNECTION_GetApnTypeIndex
//		======>.s_apntype_index                # apn数组(分组)
//		======>MMICONNECTION_AdaptingAccount
//		========>.carrier_hplmn                # apn条数
//		========>AutoAdapting
//		==========>MMICONNECTION_MatchByAccountType
//		============>.s_apntype_index          # apn数组(分组) load
//		============>.is_account_appointed     # 只取第1个
//		====>MMIAPICONNECTION_GetLinkSettingItemByIndex
// --zmaee (第3次)


### 首选sim卡
//  if (dual_sys != MMIAPISET_GetDataSimFromNV())





[1.5] 





[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] apn大小写
// CQ:
//	sim 卡中的 spn/pnn 字串必须和 net_comparetable 中的 pnn_or_spn 中设置的一样，
//	区分大小写。
//	运营商中apn 信息，需要在 ntac 文件中添加，并且表中 Setting Name 保持一致，
//	也区分大小写


[1.11] AutoAdapting
//		==>ZMAEE_INetMgr_ActiveDataLink
//		====>.apn_idx_arr           # apn数组
//		====>.setting_item_ptr      # apn上网项
//		====>.setting_item_ptr.apn  # apn
app:connection\c\mmiconn_manager_wintab.c  MMICONNECTION_SaveNetworkAccount



[1.12] __MVNO__

### MVNO
//配置MVNO APN账户对应的PHONE_PLMN_NAME_E枚举值。
//特别注意：
//1.MVNO APN账户需要配置在ntac中最前面;
//2.这里需要和ntac配置一一对应，顺序也必须保持一致;
//
//这些都要检查.


//
虚拟运营商需要提供：
 1.MVNO Type。虚拟运营商类型。
 2.MVNO Value。虚拟运营商类型筛选值。
 3.42515的apn、name。
如：
 不填MVNO，无筛选条件
 类型 spn和spn的筛选值
 类型 gid和gid的筛选值
 类型 pnn和pnn的筛选值
 类型 imsi和imsi的筛选值
 类型 imsir和imsi的筛选范围，425150000000000~425159999999999



[1.13] __strApn__
### 
// str--apn
source:mmi_app\common\h\
source:mmi_app\common\h\common_mdu_def.h   plmn_extra_database_str
// str--apn--watch--替换为null
source:mmi_app\common\h\plmn_ts25_database_str_watch_cn.h
source:mmi_app\common\h\plmn_ts25_database_str_watch_cn.h  STR_OPERATOR_CHINA_MOBILE
// str--apn
source:mmi_app\common\h\plmn_ts25_database_str.h  TXT_NET_886
source:mmi_app\common\h\plmn_ts25_database_str.h  STR_OPERATOR_CHINA_MOBILE
// str--apn ex
source:mmi_app\common\h\plmn_extra_database_str.h
// id
app:phone\h\
app:phone\h\plmn_ts25_database_enum.h  PLMN_460_
app:phone\h\plmn_ts25_database_table.h  PLMN_460_



[1.14] 




[1.15] 



