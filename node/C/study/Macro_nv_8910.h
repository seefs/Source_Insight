

//Ŀ¼:
// 1. 
Save:node\C\study\Macro_nv_8910.h \[1.1\] ���------------����
Save:node\C\study\Macro_nv_8910.h \[1.2\] ���/�ŵ�-------��ѹ(�޸ķŵ�n%)
Save:node\C\study\Macro_nv_8910.h \[1.3\] �͵��ѹ
Save:node\C\study\Macro_nv_8910.h \[1.4\] charge_end_voltage ��ѹ���
Save:node\C\study\Macro_nv_8910.h \[1.5\] PA
Save:node\C\study\Macro_nv_8910.h \[1.6\] 2IN1,3IN1
Save:node\C\study\Macro_nv_8910.h \[1.7\] ���/�ŵ�-------107
Save:node\C\study\Macro_nv_8910.h \[1.8\] nv define
Save:node\C\study\Macro_nv_8910.h \[1.9\] nv test
Save:node\C\study\Macro_nv_8910.h \[1.10\] IMEI
Save:node\C\study\Macro_nv_8910.h \[1.11\] bat_capacity
Save:node\C\study\Macro_nv_8910.h \[1.12\] custom
Save:node\C\study\Macro_nv_8910.h \[1.13\] 
Save:node\C\study\Macro_nv_8910.h \[1.14\] 
Save:node\C\study\Macro_nv_8910.h \[1.15\] 




[1.1] ���--����
// ��׼����
nv:ProductionParam_uix8910.nvm  standard_current_type
//    ITEM_CONTENT = 0x1F4   // 500

// �Ǳ�׼����
nv:ProductionParam_uix8910.nvm  nonstandard_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// usb�ڵ���
nv:ProductionParam_uix8910.nvm  usb_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// num:
//	450	1C2
//	500	1F4
//	600	258
//	700	2BC
//	630	276



[1.2] ���/�ŵ��ѹ
// ����ֹ��ѹ
nv:ProductionParam_uix8910.nvm  charge_end_voltage
//    ITEM_CONTENT = 0x1112   // 4.37V

// recharge���
nv:ProductionParam_uix8910.nvm  recharge_voltage
//    ITEM_CONTENT = 0x10CC   // 4.30V

// recharge���
nv:ProductionParam_uix8910.nvm  bat_safety_vol
//    ITEM_CONTENT = 0x1112   // 4.37V


//# ���ʱ ���%�Ļ��� ������chg_bat_tab
//#   8910û���õ�chg_bat_tab
//nv:ProductionParam_uix8910.nvm  ^chg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V

// �ŵ�ʱ ���%�Ļ��� ������dischg_bat_tab
nv:ProductionParam_uix8910.nvm  dischg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V






[1.3] �͵��ѹ
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



[1.4] charge_end_voltage ��ѹ���
//
//	������3���汾
//	charge_end_voltage����4.29,  ʵ��������ѹ�ܵ�4.20
//	charge_end_voltage����4.37,  ʵ��������ѹ�ܵ�4.28
//	charge_end_voltage����4.434, ʵ��������ѹ�ܵ�4.342



[1.5] PA
//
audio_calib_VQE.nvm�е�audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved
//
nv:audio_calib_VQE.nvm  audio_calib

//
//	reservedΪ0��ʾԭʼ�ӷ���û��ʹ���ⲿPA��û����Ͳ���ȶ���һ������һ
//	reservedΪ1��ʾʹ���ⲿPA���ⲿPA����HP_R�ϣ�û����Ͳ���ȶ���һ������һ
//	reservedΪ2��ʾʹ���ڲ�PA������Ͳ���ȶ���һ������һ
//	reservedΪ3��ʾʹ���ⲿPA���ⲿPA����HP_R�ϣ�����Ͳ���ȶ���һ������һ
//
//	AUDIO_AMP_CLASSK_SUPPORT  = TRUE
//	AUDIO_AMP_CLASSK_3IN1_SUPPORT  = TRUE


//
//���ⲿPA�ָ���CP�˿���
//�������а汾�����Ͻ����������ã�
//1������˾��������ʽpatch��modem�滻��˾���õ�modem
//2��ע�͵�AP�����й����ⲿPA�Ĵ��룬Ҳ���ǹر�USE_EXT_PA��
//3���޸�NVM����audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved=1����3������Ƕ���һ��������һ��Ϊ3�����Ƕ���һ��������һ��Ϊ1��
//4���޸�NVM����audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[3]\reserved=2���ò����ǹ�˾���������ͻ��ı�־��������Ϊ2����˾8910���в�Ʒ��ֻҪʹ���ⲿPA������Ҫ��Ϊ2��



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


// ������Ͳ
SPDE_PRJ/K220U_HYBL_H661A/project_UIS8910_240x320BAR_16MB_DS_USER.mk


// ������Ͳ����һ
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS8910_ROM_16MB_DS_USER.mk 3IN1

//
nv1:audio_calib_VQE.nvm  65
nv1:audio_calib_VQE.nvm  65
nv3:audio_calib_VQE.nvm  65
// 2IN1,3IN1
//    ITEM_CONTENT = 0x2
// ����
//    ITEM_CONTENT = 0x0



[1.7] ���/�ŵ�-------107
//  production_param
prj:RDNV\production_param_T.xml
// OCV 

// ����ֹ��ѹ
prj:RDNV\
prj:RDNV\production_param_T.xml  charge_end_current
// �ŵ�ʱ
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
// �޸�IMEI
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

// electronic guarantee card
make/perl_script/UIX8910_128MBIT.xml  0x230

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


[1.13] 




[1.14] 




[1.15] 


