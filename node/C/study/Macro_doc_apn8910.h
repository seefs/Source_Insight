
//Ŀ¼:
Save:node\C\study\Macro_doc_apn8910.h \[1.1\] 425
Save:node\C\study\Macro_doc_apn8910.h \[1.2\] 460
Save:node\C\study\Macro_doc_apn8910.h \[1.3\] 466
Save:node\C\study\Macro_doc_apn8910.h \[1.4\] 204
Save:node\C\study\Macro_doc_apn8910.h \[1.5\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.6\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.7\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.8\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.9\] 
Save:node\C\study\Macro_doc_apn8910.h \[1.10\] apn��Сд
Save:node\C\study\Macro_doc_apn8910.h \[1.11\] AutoAdapting
Save:node\C\study\Macro_doc_apn8910.h \[1.12\] MVNO
Save:node\C\study\Macro_doc_apn8910.h \[1.13\] strApn-----ID ��Ӧ
Save:node\C\study\Macro_doc_apn8910.h \[1.14\] 



### ������Ӫ��delta nv
// --SIM(HPLMN)���NV��
// "����������д_��Ӫ������_S.nv"
//
// --PLMN(VPLMN)���NV��
// "����������д_��Ӫ������_P.nv"
common\nv_parameters\delta_nv\Index.xml


### nv build
common\nv_parameters\delta_nv\
common\nv_parameters\delta_nv\_DeltaNV���˵��.txt

//PS\nv\internal\ps\common\h\
//PS\nv\internal\ps\common\h\COMMON_LIST.h
//
//build\[project_name]_builddir\imgĿ¼����[projectname]_deltanv.bin

// delta
//PS\nv\export\ps\common\

// �������пɶ�̬���ز�����Ĭ��ֵ
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

// �ƶ�148�Ŷ�
// ȱ�� PLMN_460_13
app:phone\h\plmn_ts25_database_enum.h  PLMN_460_11
//    PLMN_460_11,
app:phone\h\plmn_ts25_database_table.h  PLMN_460_11
//    460,11,STR_OPERATOR_CHN_CT,PLMN_460_11,


### SPCSS01079131
//		�ƶ�148�Ŷ�
//
//		APN������2G��
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
//		�ƶ�148�Ŷ�
//		APN������4G��
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
//		�������£�
//		460    13    8    cmiot
//		460    13    8    cmmtm



//���ã��ҵ���˼�ǵ�2��APN�ᱻ���ԣ���μ��ݣ�
//�������£�
//460    13    8    cmiot        ����1��Account TypeΪ8��
//460    13    8    cmmtm     ����2���ᱻ���ԣ�


//	���,
//	 
//	����MVNO APN�˻���Ӧ��PHONE_PLMN_NAME_Eö��ֵ��
//	�ر�ע�⣺
//	1.MVNO APN�˻���Ҫ������ntac����ǰ��;
//	2.������Ҫ��ntac����һһ��Ӧ��˳��Ҳ���뱣��һ��;
//
//	��Щ��Ҫ���.



[1.3] 466
common\nv_parameters\delta_nv\Index.xml  mcc="466"



[1.4] 204
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





[1.5] 





[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] apn��Сд
// CQ:
//	sim ���е� spn/pnn �ִ������ net_comparetable �е� pnn_or_spn �����õ�һ����
//	���ִ�Сд��
//	��Ӫ����apn ��Ϣ����Ҫ�� ntac �ļ�����ӣ����ұ��� Setting Name ����һ�£�
//	Ҳ���ִ�Сд


[1.11] AutoAdapting
//		==>ZMAEE_INetMgr_ActiveDataLink
//		====>.apn_idx_arr           # apn����
//		====>.setting_item_ptr      # apn������
//		====>.setting_item_ptr.apn  # apn
app:connection\c\mmiconn_manager_wintab.c  MMICONNECTION_SaveNetworkAccount



[1.12] __MVNO__

### MVNO
//����MVNO APN�˻���Ӧ��PHONE_PLMN_NAME_Eö��ֵ��
//�ر�ע�⣺
//1.MVNO APN�˻���Ҫ������ntac����ǰ��;
//2.������Ҫ��ntac����һһ��Ӧ��˳��Ҳ���뱣��һ��;
//
//��Щ��Ҫ���.


//
������Ӫ����Ҫ�ṩ��
 1.MVNO Type��������Ӫ�����͡�
 2.MVNO Value��������Ӫ������ɸѡֵ��
 3.42515��apn��name��
�磺
 ����MVNO����ɸѡ����
 ���� spn��spn��ɸѡֵ
 ���� gid��gid��ɸѡֵ
 ���� pnn��pnn��ɸѡֵ
 ���� imsi��imsi��ɸѡֵ
 ���� imsir��imsi��ɸѡ��Χ��425150000000000~425159999999999



[1.13] __strApn__
### 
// str--apn
source:mmi_app\common\h\
source:mmi_app\common\h\common_mdu_def.h   plmn_extra_database_str
// str--apn--watch--�滻Ϊnull
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



