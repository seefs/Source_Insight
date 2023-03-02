
### MVNO
//配置MVNO APN账户对应的PHONE_PLMN_NAME_E枚举值。
//特别注意：
//1.MVNO APN账户需要配置在ntac中最前面;
//2.这里需要和ntac配置一一对应，顺序也必须保持一致;
//
//这些都要检查.


### ID 对应
// ID 对应
Save:node\C\study\Macro_res_8910.h  __strApn__


### 425
//
app:phone\h\
app:phone\h\plmn_ts25_database_enum.h  PLMN_425_09
app:phone\h\plmn_ts25_database_enum.h  PLMN_425_19
app:phone\h\plmn_ts25_database_table.h  PLMN_425_09
app:phone\h\plmn_ts25_database_table.h  PLMN_425_19
source:mmi_app\common\h\plmn_ts25_database_str.h  TXT_NET_891A
source:mmi_app\common\h\plmn_ts25_database_str.h  TXT_NET_894A


### 460
// 移动148号段
// 缺少 PLMN_460_13
app:phone\h\plmn_ts25_database_enum.h  PLMN_460_11
//    PLMN_460_11,
app:phone\h\plmn_ts25_database_table.h  PLMN_460_11
//    460,11,STR_OPERATOR_CHN_CT,PLMN_460_11,


### 204
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


