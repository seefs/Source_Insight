
//目录
Save:node\C\study\Macro_nv_8910.h \[1.1\] 充电------------电流
Save:node\C\study\Macro_nv_8910.h \[1.2\] 充电/放电-------电压(修改放电n%)
Save:node\C\study\Macro_nv_8910.h \[1.3\] 低电电压
Save:node\C\study\Macro_nv_8910.h \[1.4\] charge_end_voltage 高压电池
Save:node\C\study\Macro_nv_8910.h \[1.5\] PA
Save:node\C\study\Macro_nv_8910.h \[1.6\] 2IN1,3IN1
Save:node\C\study\Macro_nv_8910.h \[1.7\] 充电/放电-------107
Save:node\C\study\Macro_nv_8910.h \[1.8\] nv define
Save:node\C\study\Macro_nv_8910.h \[1.9\] nv test
Save:node\C\study\Macro_nv_8910.h \[1.10\] IMEI
Save:node\C\study\Macro_nv_8910.h \[1.11\] bat_capacity
Save:node\C\study\Macro_nv_8910.h \[1.12\] custom
Save:node\C\study\Macro_nv_8910.h \[1.13\] nv_build
Save:node\C\study\Macro_nv_8910.h \[1.14\] nand/nor
Save:node\C\study\Macro_nv_8910.h \[1.15\] test
Save:node\C\study\Macro_nv_8910.h \[1.16\] audio_calib_VQE
Save:node\C\study\Macro_nv_8910.h \[1.17\] 
Save:node\C\study\Macro_nv_8910.h \[1.18\] 
Save:node\C\study\Macro_nv_8910.h \[1.19\] 
Save:node\C\study\Macro_nv_8910.h \[1.20\] 
Save:node\C\study\Macro_nv_8910.h \[1.21\] 
Save:node\C\study\Macro_nv_8910.h \[1.22\] 

Save:Help\\DefaultFile\\Macro_Node_Num.h



[1.1] 充电--电流
// 标准电流
nv:ProductionParam_uix8910.nvm  standard_current_type
//    ITEM_CONTENT = 0x1F4   // 500

// 非标准电流
nv:ProductionParam_uix8910.nvm  nonstandard_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// usb口电流
nv:ProductionParam_uix8910.nvm  usb_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// num:
//	450	1C2
//	500	1F4
//	600	258
//	700	2BC
//	630	276



[1.2] 充电/放电电压
// 充电截止电压
nv:ProductionParam_uix8910.nvm  charge_end_voltage
//    ITEM_CONTENT = 0x1112   // 4.37V

// recharge充电
nv:ProductionParam_uix8910.nvm  recharge_voltage
//    ITEM_CONTENT = 0x10CC   // 4.30V

// recharge充电
nv:ProductionParam_uix8910.nvm  bat_safety_vol
//    ITEM_CONTENT = 0x1112   // 4.37V


//# 充电时 电池%的换算 是依据chg_bat_tab
//#   8910没有用到chg_bat_tab
//nv:ProductionParam_uix8910.nvm  ^chg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V

// 放电时 电池%的换算 是依据dischg_bat_tab
nv:ProductionParam_uix8910.nvm  dischg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V






[1.3] 低电电压
// warn
nv:ProductionParam_uix8910.nvm  voltage_warning
//    ITEM_CONTENT = 0xE2D   // 3629

// shutdown
nv:ProductionParam_uix8910.nvm  voltage_shutdown
//    ITEM_CONTENT = 0xCE4   // 3300

//
// 0%
nv:ProductionParam_uix8910.nvm  dischg_bat_tab\[11\]
//    ITEM_CONTENT = 0xD3E



[1.4] charge_end_voltage 高压电池
//
//	测试了3个版本
//	charge_end_voltage设置4.29,  实际最大充电电压能到4.20
//	charge_end_voltage设置4.37,  实际最大充电电压能到4.28
//	charge_end_voltage设置4.434, 实际最大充电电压能到4.342



[1.5] PA
//
audio_calib_VQE.nvm中的audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved
//
nv:audio_calib_VQE.nvm  audio_calib

//
//	reserved为0表示原始接法，没有使用外部PA，没有听筒喇叭二合一或三合一
//	reserved为1表示使用外部PA，外部PA接在HP_R上，没有听筒喇叭二合一或三合一
//	reserved为2表示使用内部PA，有听筒喇叭二合一或三合一
//	reserved为3表示使用外部PA，外部PA接在HP_R上，有听筒喇叭二合一或三合一
//
//	AUDIO_AMP_CLASSK_SUPPORT  = TRUE
//	AUDIO_AMP_CLASSK_3IN1_SUPPORT  = TRUE


//
//把外部PA恢复到CP端控制
//请在现有版本基础上进行如下配置：
//1、用我司发布的正式patch的modem替换贵司所用的modem
//2、注释掉AP端所有关于外部PA的代码，也就是关闭USE_EXT_PA宏
//3、修改NVM参数audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved=1或者3（如果是二合一或者三合一设为3，不是二合一或者三合一设为1）
//4、修改NVM参数audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[3]\reserved=2（该参数是贵司区分其他客户的标志，必须设为2，贵司8910所有产品，只要使用外部PA，都需要设为2）



[1.6] 2IN1,3IN1
// select prj--8910
nv1Path = SPDE_PRJ\K220U_HYBL_H661A\nvitem
nv2Path = SPDE_PRJ\K220U_HYBL_H660A_HTX_LTC\nvitem
nv3Path = SPDE_PRJ\K220U_HYBL_H660A\nvitem
nv:\\

// 3IN1
SPDE_PRJ\K220U_HYBL_H660A\project_UIS8910_ROM_16MB_DS_USER.mk 3IN1
// 
SPDE_PRJ\K220U_SHY_517T\project_UIS8910_ROM_16MB_DS_USER.mk 3IN1


// 单独听筒
SPDE_PRJ/K220U_HYBL_H661A/project_UIS8910_240x320BAR_16MB_DS_USER.mk


// 喇叭听筒二合一
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS8910_ROM_16MB_DS_USER.mk 3IN1

//
nv1:audio_calib_VQE.nvm  65
nv1:audio_calib_VQE.nvm  65
nv3:audio_calib_VQE.nvm  65
nv:audio_calib_VQE.nvm  65
// 2IN1,3IN1
//    ITEM_CONTENT = 0x2
// 独立
//    ITEM_CONTENT = 0x0



[1.7] 充电/放电-------107
//  production_param
prj:RDNV\production_param_T.xml
// OCV 

// 充电截止电压
prj:RDNV\
prj:RDNV\production_param_T.xml  charge_end_current
// 放电时
prj:RDNV\production_param_T.xml  dischg_bat_tab



[1.8] nv define
// 1.nv id
common\export\inc\nv_item_id.h  NV_PROD_PARAM
//  NV_PROD_PARAM                     = 400,
//
nv:ProductionParam_uix8910.nvm  production_param_T
//
MS_Customize\export\inc\nv_productionparam_type.h  PROD_PARAM_tag
//  96bytes === 48 id


// 2.bt_config--401
nv:ProductionParam_uix8910.nvm  bt_config
//
MS_Customize\export\inc\bt_cfg.h  BT_SPRD_NV_PARAM

// bt_sprd
nv:ProductionParam_uix8910.nvm  3651
// 362->361->340


// 3.
// gps_config--403
nv:ProductionParam_uix8910.nvm  gps_config
// tv_rssi_comp--404
nv:ProductionParam_uix8910.nvm  tv_rssi_comp
// multi_langue_cfg--405
nv:ProductionParam_uix8910.nvm  multi_langue_cfg
// wifi_config--409
nv:ProductionParam_uix8910.nvm  wifi_config
// engine_test_result--431
nv:ProductionParam_uix8910.nvm  engine_test_result
// bt_sprd--442
nv:ProductionParam_uix8910.nvm  bt_sprd
// fm_config--451
nv:ProductionParam_uix8910.nvm  fm_config
// e_guarantee_card--560
nv:ProductionParam_uix8910.nvm  e_guarantee_card





[1.9] nv test
// MMI_GetAllModuleSumNvSize(void)



[1.10] IMEI
// nv id-imei
common\export\inc\nv_item_id.h  NV_IMEI   5
common\export\inc\nv_item_id.h  NV_IMEI1  377
common\export\inc\nv_item_id.h  NV_IMEI2  390
common\export\inc\nv_item_id.h  NV_IMEI3
// 修改IMEI
common\nv_parameters\nv_type\nv_type_uix8910.nvm
build\..\nv\nvitem\nv_type_uix8910.nvm
// 3A25720371833604
//
// A352273017386340




[1.11] bat_capacity
// bat
chip_drv\chip_module\charge\uix8910\charge_uix8910.c  _CHGMNG_VoltagetoPercentum



[1.12] custom 
### 107
make/perl_script/


// NV_ALIPAY_ID
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  0x1B4


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
HW:{project}\modem_nv_cat1bis_uix8910_static.nvm  9166
//   0x0: 链路快速释放
//   0x1: 默认


### __Card__  电子保卡
// 8910 升级可保留
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 560
make/perl_script/UIX8910_128MBIT.xml  0x230
HW:{project}\ProductionParam_uix8910.nvm  guarantee  # 560

// 107--不可擦除
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_ID  # 610
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_LEN # 8
make\nv_cus_config\nv_cus_config_MAIN\nv_cus_config_xml.mk   customer_card_id.xml
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\customer_card_id.xml  # 610
HW:{project}\CustNV\customer_card_id.xml
//SPDE_PRJ\F76T_SUOAI_MID\CustNV\customer_card_id.xml  #默认不用加
// backup==>0
make\perl_script\
make\perl_script\UMS9117.xml  customer_card_id  # 0x262/610
make\perl_script\pac.pl       UMS9117.xml

// 107--升级会擦除, 格式化会擦除
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 2851
make\app_main\app_main.mk  eleGuaranteeCard.xml
HW:{project}\RDNV\eleGuaranteeCard.xml  # 2851


[1.13] nv_build



// 107手动还原
PS\nv\export\
common\nv_parameters\
//project\config_nv\ums9117\
//make\nv_cus_config\nv_cus_config_MAIN\
PS\nv\export\ps\ims\   #bat未加

// 服务器build差异文件
CustNV/NV_PARAM_TYPE_EXPORT_IMS_CUSTOMER_SETTINGS.xml
RDNV\bt_rf_config.xml               # 未还原 common\nv_parameters\wcn
RDNV\multi_langue_cfg.xml
RDNV\eleGuaranteeCard.xml  #delete
RDNV\W_download_params_optimize.xml   # 先不管
RDNV\rd_nvitem.xprj


###
// mk
prj:project_{cur}.mk   PLATFORM = UMS9117
prj:project_{cur}.mk   AUDIO_COMMON_EXCHANGE = TRUE
prj:project_{cur}.mk   RCV_THROUGH_SPK = TRUE    #二合一
prj:project_{cur}.mk   RCV_THROUGH_SPK = FALSE   #独立
//
make\voice\voice.mk  RCV_THROUGH_SPK   #二合一的NV
PS\build\make\csm.mk  CUST_XML

// 二合一的NV
prj:CustNV/
prj:CustNV/audio_arm_rcv_through_spk.xml
prj:CustNV/audio_dsp_rcv_through_spk.xml
prj:CustNV/audio_dsp_ex_rcv_through_spk.xml
prj:CustNV/dsp_codec_config_rcv_through_spk.xml
// 独立的NV
prj:CustNV/audio_arm.xml
prj:CustNV/audio_dsp.xml
prj:CustNV/audio_dsp_ex.xml
prj:CustNV/dsp_codec_config.xml
// 替换二合一默认NV
common\nv_parameters\audio\UMS9117\
common\nv_parameters\audio\UMS9117\audio_arm_rcv_through_spk.xml
//
HW:{project}\



[1.14] nand/nor
// 
// 107是nand，8910是nor 两种flash



[1.15] test
// usb--实际没有其他使用
app:eng\c\mmieng_main.c  MMIENG_NV_USB_TEST_SET_SETTING



[1.16] audio_calib_VQE
//
nv:\


### 1.实测是这个
// Headset 耳机
nv:audio_sc6531efm_AEC.nvm  32

// Handset 听筒
nv:audio_sc6531efm_AEC.nvm  3967

// Handsfree 免提
nv:audio_sc6531efm_AEC.nvm  7902

### 2.
// Headset 耳机
nv:audio_arm_6531efm.nvm  32

// Handset 听筒
nv:audio_arm_6531efm.nvm  4333

// Handsfree 免提
nv:audio_arm_6531efm.nvm  6476




[1.17] 




[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 



