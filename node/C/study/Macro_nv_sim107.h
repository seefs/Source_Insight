
//目录:
Save:node\C\study\Macro_nv_sim107.h \[1.1\] IMEI
Save:node\C\study\Macro_nv_sim107.h \[1.2\] ECC, nv copy
Save:node\C\study\Macro_nv_sim107.h \[1.3\] precondition
Save:node\C\study\Macro_nv_sim107.h \[1.4\] BAND, nv copy
Save:node\C\study\Macro_nv_sim107.h \[1.5\] REG
Save:node\C\study\Macro_nv_sim107.h \[1.6\] //4G
Save:node\C\study\Macro_nv_sim107.h \[1.7\] custom
Save:node\C\study\Macro_nv_sim107.h \[1.8\] plmn_while_list
Save:node\C\study\Macro_nv_sim107.h \[1.9\] SIM_HOT_PLUG
Save:node\C\study\Macro_nv_sim107.h \[1.10\] other nv copy
Save:node\C\study\Macro_nv_sim107.h \[1.11\] 
Save:node\C\study\Macro_nv_sim107.h \[1.12\] 




[1.1] __IMEI__
//
rdnv:\
rdnv:NV_IMEI.xml  MN_IMEI
//
common\nv_parameters\refbase\
common\nv_parameters\refbase\NV_IMEI.xml  MN_IMEI id="5"


[1.2] __ECC__
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
// 10个
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\DEFAULT_SIM_ECC.xml  DEFAULT_SIM_ECC  id="600"
// 10个
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\DEFAULT_NOSIM_ECC.xml  DEFAULT_NOSIM_ECC  id="601"
//
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\DEFAULT_FAKE_ECC.xml  DEFAULT_FAKE_ECC  id="601"


### CC0
// 同名很多个
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
// 编的时候被覆盖
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
// 实际一致，只是加了0x
PS\nv\export\ps\ims\
PS\nv\export\ps\ims\NV_PARAM_TYPE_EXPORT_IMS_CUSTOMER_SETTINGS.xml
//
nv:NV_PARAM_TYPE_EXPORT_IMS_CUSTOMER_SETTINGS.xml  140


### 3-NV_PARAM
//
PS\nv\export\ps\mn\NV_PARAM_TYPE_EXPORT_MN_CUSTOMER_SETTINGS.xml
//
nv:NV_PARAM_TYPE_EXPORT_MN_CUSTOMER_SETTINGS.xml
PS\nv\export\ps\mn\
// 编的时候被覆盖
PS\nv\config_nv\ps\MN.nv   multi_rat_mode



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
ims表格中有 precondition框架，填好表格给展讯配volteNV


[1.4] __BAND__
// 通过nv改的话  , band的  就不要加宏了
prj:project_{cur}.mk  WCDMA_BANDS_SUPPORT = BAND_1_5_8
prj:project_{cur}.mk  TDD_BANDS_SUPPORT = BAND_38_39_40_41   #LTE TDD band
prj:project_{cur}.mk  FDD_BANDS_SUPPORT = BAND_1_3_5_8  # LTE FDD Band

nv:\
rdnv:\

### TDD FDD (las 4G相关)
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  eutraTDDBandList
//	value="0x28"
//	value="0x29"
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  eutraFDDBandList
//	value="0x1"
//	value="0x3"
//	value="0x5"
//	value="0x8"
// 数量
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  numOfEUTRATDDBand  -> 0x2
nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  numOfEUTRAFDDBand  -> 0x4

// -4G
// GSM:850/900/1800/1900
// WCDMA:850.900.2100MHZ
// 4G:B1/3/5/8/40/41

PS\nv\config_nv\ps\LAS.nv  _BANDS_


### 1-gsm (gas 2G相关)
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

### 2-was 不用改 (was 3G相关)
nv:NV_PARAM_TYPE_EXPORT_WAS_CUSTOMER_SETTINGS.xml
//	value="0x1"
//	value="0x2"
//	value="0x8"



[1.5] __REG__

### CQ list
// sim CQ list
Save:node\C\study\Macro_nv_sim107CQ.h  __Volte__
Save:node\C\study\Macro_nv_sim107CQ.h  __Call__
Save:node\C\study\Macro_nv_sim107CQ.h  __DTMF__





[1.6] 


[1.7] __custom__
custom 
### 107
make/perl_script/






[1.8] __plmn_while_list__
//
rdnv:\

PS\nv\operator_delta\NV_PARAM_TYPE_IMS_ISIM_SETTINGS.xml

// 改成默认关
//		====>MMIAPIENG_IsWhitelistEnable


[1.9] SIM_HOT_PLUG

### SIM_HOT_PLUG
//
chip_drv\chip_module\sim\SIM_HOT_PLUG_CFG.xml
//
nv:SIM_HOT_PLUG_CFG.xml


[1.10] other nv copy
### __otherNvCopy__













[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



