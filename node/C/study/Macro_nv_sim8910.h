
//Ŀ¼:
Save:node\C\study\Macro_nv_sim8910.h \[1.1\] IMEI
Save:node\C\study\Macro_nv_sim8910.h \[1.2\] ECC, nv copy
Save:node\C\study\Macro_nv_sim8910.h \[1.3\] precondition
Save:node\C\study\Macro_nv_sim8910.h \[1.4\] BAND
Save:node\C\study\Macro_nv_sim8910.h \[1.5\] REG
Save:node\C\study\Macro_nv_sim8910.h \[1.6\] 4G
Save:node\C\study\Macro_nv_sim8910.h \[1.7\] comData  ��·
Save:node\C\study\Macro_nv_sim8910.h \[1.8\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.9\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.10\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.11\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.12\] 




[1.1] __IMEI__
### 8910
// nv id-imei
common\export\inc\nv_item_id.h  NV_IMEI   5
common\export\inc\nv_item_id.h  NV_IMEI1  377
common\export\inc\nv_item_id.h  NV_IMEI2  390
common\export\inc\nv_item_id.h  NV_IMEI3
// �޸�IMEI1~IMEI4
common\nv_parameters\nv_type\nv_type_uix8910.nvm
build\..\nv\nvitem\nv_type_uix8910.nvm
// 3A25720371833604
//
// A352273017386340


### 107
//
rdnv:\
rdnv:NV_IMEI.xml  MN_IMEI
//
common\nv_parameters\refbase\
common\nv_parameters\refbase\NV_IMEI.xml  MN_IMEI id="5"


[1.2] __ECC__
### 107
### ECC
//
source:mmi_app\custom\h\ms_config_nv.h  SETTINGS_NV_DEFAULT_SIM_ECC
// nv id
common\export\inc\nv_item_id.h  NV_CUS_CONFIG_BASE  = 600
//
nv:ProductionParam_uix8910.nvm  production_param_T
//
MS_Customize\export\inc\nv_productionparam_type.h  PROD_PARAM_tag
//  96bytes === 48 id

//
rdnv:\
rdnv:DEFAULT_SIM_ECC.xml  DEFAULT_SIM_ECC
// 10��
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\DEFAULT_SIM_ECC.xml  DEFAULT_SIM_ECC  id="600"
// 10��
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\DEFAULT_NOSIM_ECC.xml  DEFAULT_NOSIM_ECC  id="601"
//
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\DEFAULT_FAKE_ECC.xml  DEFAULT_FAKE_ECC  id="601"


### CC0
// ͬ���ܶ��
// LTE_Download_DSP_Compensation_CC0_optimize.xml
//
PS\stack\las\build\lte_adx.mk  CC0_optimize
//
// LTE_RF_TYPE = NemoL_T117_3595D
Save:node\C\cfg\Macro_c_path_sprd.h  __107NV__
//
PS/nv/export/rf_{lte}/optimize/lte_optimize/LTE_CC0_optimize/
//
nv:LTE_Download_DSP_Compensation_CC0_optimize.xml


### NAS
//
PS\nv\export\ps\nas\
PS\nv\export\ps\nas\NV_PARAM_TYPE_EXPORT_NAS_CUSTOMER_SETTINGS.xml
//
nv:NV_PARAM_TYPE_EXPORT_NAS_CUSTOMER_SETTINGS.xml


### FDD
//
PS\nv\internal\ps\was\NV_PARAM_TYPE_PREV_UMTS_FDD_RA_CAPABILITY.xml
//
rdnv:NV_PARAM_TYPE_PREV_UMTS_FDD_RA_CAPABILITY.xml  268
//
PS\nv\config_nv\ps\was.nv  dpcch_dtx_supported

// 
prj:project_{cur}.mk   WCDMA_2M_72M_SUPPORT


### RFGPIO
//
PS/nv/export/rf_{lte}/logic\gsm_logic/
PS/nv/export/rf_{lte}/logic\gsm_logic/gsm_Antenna_switch_RFGPIO_config_logic.xml
//
nv:gsm_Antenna_switch_RFGPIO_config_logic.xml


//### gsm_mipi
////
//PS/nv/export/rf_{lte}/logic\gsm_logic/
//PS/nv/export/rf_{lte}/logic\gsm_logic/gsm_mipi_config_logic.xml
////
//nv:gsm_mipi_config_logic.xml


### IMS
// ʵ��һ�£�ֻ�Ǽ���0x
PS\nv\export\ps\ims\/
PS\nv\export\ps\ims\/NV_PARAM_TYPE_EXPORT_IMS_CUSTOMER_SETTINGS.xml
//
nv:NV_PARAM_TYPE_EXPORT_IMS_CUSTOMER_SETTINGS.xml  140


### simlock
rdnv:\
rdnv:NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only
//
PS\nv\internal\ps\common\
PS\nv\internal\ps\common\NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only

// 
nv:NV_SIM_LOCK_USER_DATA_ID.xml  user_locks    ->locks[0]
//
PS\nv\export\ps\mn\NV_SIM_LOCK_USER_DATA_ID.xml  user_locks

//
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status
//
PS\nv\export\ps\mn\NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status



[1.3] precondition
//
ims������� precondition��ܣ���ñ���չѶ��volteNV


[1.4] __BAND__
// ͨ��nv�ĵĻ�  , band�ĺ�  �Ͳ�Ҫ����
nv:\
rdnv:\

### TDD FDD (las 4G���)
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  eutraTDDBandList
//	value="0x28"
//	value="0x29"
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  eutraFDDBandList
//	value="0x1"
//	value="0x3"
//	value="0x5"
//	value="0x8"
// ����
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  numOfEUTRATDDBand  -> 0x2
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  numOfEUTRAFDDBand  -> 0x4

// -4G
// GSM:850/900/1800/1900
// WCDMA:850.900.2100MHZ
// 4G:B1/3/5/8/40/41


### gsm (gas 2G���)
nv:NV_PARAM_TYPE_EXPORT_GAS_CUSTOMER_SETTINGS.xml  gsm_band_select  -> 0xc
//		0x0:EGSM900;
//		0x1:DCS1800;
//		0x2:EGSM_DCS;
//		0x3:PCS1900;
//		0x4:GSM850;
//		0x5:EGSM_PCS;
//		0x6:GSM850_DCS;
//		0x7:GSM850_PCS;
//		0x8:GSM850_EGSM;
//		0x9:GSM850_EGSM_PCS;
//		0xa:GSM850_EGSM_DCS;
//		0xb:EGSM_DCS_PCS;
//		0xc:GSM850_EGSM_DCS_PCS;
//		0xd:DCS_PCS;
//		0xe:GSM850_DCS_PCS

### was ���ø� (was 3G���)
nv:NV_PARAM_TYPE_EXPORT_WAS_CUSTOMER_SETTINGS.xml
//	value="0x1"
//	value="0x2"
//	value="0x8"



[1.5] __REG__
### [FAQ111795]�ͻ�����NV����ע��VOLTE�Բ鷽����
//	NV��汾��ƥ���������
//	CP Log���ն˷��������IMSע����ϢREGISTER��Security-Clientͷ��Ķ˿�port-c��port-s����0��������ʾ��
//	[IMS]:msg -> REGISTER
//	[IMS]:Security-Client: ...;port-c=0;port-s=0,...



[1.6] __4G__
//	value="0x0"
//	value="0x04"  ��Ϊ4G only
lib/modem/MODEM_USER/nvitem/modem_nv_cat1bis_uix8910_static.nvm   defaultRat
//
lib/modem/MODEM_USER/nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   defaultRat


[1.7] __comData__
custom 
### 107
make/perl_script/




### 8910
nv:\\
HW:\
// sim
HW:{project}\nv_type_uix8910.nvm  sim_card_number
//	0x1

//
HW:{project}\nv_type_uix8910.nvm  com_data
//	0xFF

// static
//HW:{project}\modem_nv_cat1bis_uix8910_static.nvm  9166
lib/modem/MODEM_USER/nvitem/modem_nv_cat1bis_uix8910_static.nvm   9166
//   0x0: ��·�����ͷ�
//   0x1: Ĭ��
//
//�޸���·����ʱ�� (8910_��վ����ʱ��
//1��������ʱ����·��Ҫ����10�룬��Э���Ҫ���ƶ�Ҳһֱ�ڲ鲻����Э��������
//2������ʽ�ķ�������С��·����������nvֵ���������ٹ��ġ�
//����1��ͨ��ATָ���޸�  at+rrcrel=���֣�0-20��  ������0.5��
//����2��ͨ���޸�Ĭ��nvֵ����С������modem_nv_cat1bis_uix8910_static.nvm�����һ��ֵ����Ϊ0-20ĳ����
//3������ԣ����ܻ�Ӱ�쵽��ͨ�ʣ��ر��Ƕ�̬�����£�����·�����֡�

//
lib/modem/UIS8910_ROM_16MB_DS_DEBUG/nvitem/modem_nv_cat1bis_uix8910_static.nvm   9166
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/modem_nv_cat1bis_uix8910_static.nvm   9166



[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



