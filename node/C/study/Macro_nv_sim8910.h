
//目录:
Save:node\C\study\Macro_nv_sim8910.h \[1.1\] IMEI
Save:node\C\study\Macro_nv_sim8910.h \[1.2\] ECC
Save:node\C\study\Macro_nv_sim8910.h \[1.3\] precondition
Save:node\C\study\Macro_nv_sim8910.h \[1.4\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.5\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.6\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.7\] 
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
// 修改IMEI1~IMEI4
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


[1.3] precondition
//
ims表格中有 precondition框架，填好表格给展讯配volteNV


[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



