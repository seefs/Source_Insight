
### MVNO
//����MVNO APN�˻���Ӧ��PHONE_PLMN_NAME_Eö��ֵ��
//�ر�ע�⣺
//1.MVNO APN�˻���Ҫ������ntac����ǰ��;
//2.������Ҫ��ntac����һһ��Ӧ��˳��Ҳ���뱣��һ��;
//
//��Щ��Ҫ���.


### ID ��Ӧ
// ID ��Ӧ
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
// �ƶ�148�Ŷ�
// ȱ�� PLMN_460_13
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
// --clean (��1��)
//		==>AutoAdapting
//		====>.is_need_clean                  # 
//		====>LoadNetworkAccountInfo
//		======>.s_plmn_config_table          # Ԥ��apn, Ϊ��
//		======>.R_NETWORK_ACCOUNT            # ����apn, ����apn
//		====>MMICONNECTION_SaveNetworkAccount
//		======>.settinglink_num              # ���14��, ����һ��
//		======>SetDefaultNetworkAccount
//		========>.s_connection_setting_info  # apn����(δ����)
// --apn���� (��2�β�clean)
//		==>HandleSimReadyInd
//		====>MMIAPICONNECTION_GetApnTypeIndex
//		======>.s_apntype_index                # apn����(����)
//		======>MMICONNECTION_AdaptingAccount
//		========>.carrier_hplmn                # apn����
//		========>AutoAdapting
//		==========>MMICONNECTION_MatchByAccountType
//		============>.s_apntype_index          # apn����(����) load
//		============>.is_account_appointed     # ֻȡ��1��
//		====>MMIAPICONNECTION_GetLinkSettingItemByIndex
// --zmaee (��3��)


### ��ѡsim��
//  if (dual_sys != MMIAPISET_GetDataSimFromNV())


