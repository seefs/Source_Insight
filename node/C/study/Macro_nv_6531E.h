
//Ŀ¼
Save:node\C\study\Macro_nv_6531E.h \[1.1\] ���------------����
Save:node\C\study\Macro_nv_6531E.h \[1.2\] ���/�ŵ�-------��ѹ(�޸ķŵ�n%)
Save:node\C\study\Macro_nv_6531E.h \[1.3\] �͵��ѹ
Save:node\C\study\Macro_nv_6531E.h \[1.4\] charge_end_voltage ��ѹ���
Save:node\C\study\Macro_nv_6531E.h \[1.5\] PA
Save:node\C\study\Macro_nv_6531E.h \[1.6\] 2IN1,3IN1
Save:node\C\study\Macro_nv_6531E.h \[1.7\] ���/�ŵ�-------107
Save:node\C\study\Macro_nv_6531E.h \[1.8\] nv define
Save:node\C\study\Macro_nv_6531E.h \[1.9\] nv test
Save:node\C\study\Macro_nv_6531E.h \[1.10\] IMEI
Save:node\C\study\Macro_nv_6531E.h \[1.11\] bat_capacity
Save:node\C\study\Macro_nv_6531E.h \[1.12\] custom---------��·
Save:node\C\study\Macro_nv_6531E.h \[1.13\] nv_build
Save:node\C\study\Macro_nv_6531E.h \[1.14\] nand/nor
Save:node\C\study\Macro_nv_6531E.h \[1.15\] test
Save:node\C\study\Macro_nv_6531E.h \[1.16\] audio_calib_VQE---
Save:node\C\study\Macro_nv_6531E.h \[1.17\] hv_nv
Save:node\C\study\Macro_nv_6531E.h \[1.18\] bt_nv
Save:node\C\study\Macro_nv_6531E.h \[1.19\] env_nv
Save:node\C\study\Macro_nv_6531E.h \[1.20\] simulator
Save:node\C\study\Macro_nv_6531E.h \[1.21\] replace_nv--------
Save:node\C\study\Macro_nv_6531E.h \[1.22\] apn
Save:node\C\study\Macro_nv_6531E.h \[1.23\] 
Save:node\C\study\Macro_nv_6531E.h \[1.24\] 
Save:node\C\study\Macro_nv_6531E.h \[1.25\] 

Save:Help\\DefaultFile\\Macro_Node_Num.h



[1.1] ���--����
// ��׼����
nv:ProductionParam_uix6531E.nvm  standard_current_type
//    ITEM_CONTENT = 0x1F4   // 500

// �Ǳ�׼����
nv:ProductionParam_uix6531E.nvm  nonstandard_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// usb�ڵ���
nv:ProductionParam_uix6531E.nvm  usb_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// num:
//	450	1C2
//	500	1F4
//	600	258
//	700	2BC
//	630	276



[1.2] ���/�ŵ��ѹ
// ����ֹ��ѹ
nv:ProductionParam_uix6531E.nvm  charge_end_voltage
//    ITEM_CONTENT = 0x1112   // 4.37V

// recharge���
nv:ProductionParam_uix6531E.nvm  recharge_voltage
//    ITEM_CONTENT = 0x10CC   // 4.30V

// ���safe��ѹ
nv:ProductionParam_uix6531E.nvm  bat_safety_vol
//    ITEM_CONTENT = 0x1112   // 4.37V


//# ���ʱ ���%�Ļ��� ������chg_bat_tab
//#   6531Eû���õ�chg_bat_tab
//nv:ProductionParam_uix6531E.nvm  ^chg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V

// �ŵ�ʱ ���%�Ļ��� ������dischg_bat_tab
nv:ProductionParam_uix6531E.nvm  dischg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V






[1.3] �͵��ѹ
// warn
nv:ProductionParam_uix6531E.nvm  voltage_warning
//    ITEM_CONTENT = 0xE2D   // 3629

// shutdown
nv:ProductionParam_uix6531E.nvm  voltage_shutdown
//    ITEM_CONTENT = 0xCE4   // 3300

//
// 0%
nv:ProductionParam_uix6531E.nvm  dischg_bat_tab\[11\]
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
//4���޸�NVM����audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[3]\reserved=2���ò����ǹ�˾���������ͻ��ı�־��������Ϊ2����˾6531E���в�Ʒ��ֻҪʹ���ⲿPA������Ҫ��Ϊ2��



[1.6] 2IN1,3IN1
// select prj--6531E
nv1Path = SPDE_PRJ\K220U_HYBL_H661A\nvitem
nv2Path = SPDE_PRJ\K220U_HYBL_H660A_HTX_LTC\nvitem
nv3Path = SPDE_PRJ\K220U_HYBL_H660A\nvitem
nv:\\

// 3IN1
SPDE_PRJ\K220U_HYBL_H660A\project_UIS6531E_ROM_16MB_DS_USER.mk 3IN1
// 
SPDE_PRJ\K220U_SHY_517T\project_UIS6531E_ROM_16MB_DS_USER.mk 3IN1




### ������Ͳ
SPDE_PRJ/K220U_HYBL_H661A/project_UIS6531E_240x320BAR_16MB_DS_USER.mk  3IN1
//
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_3IN1_SUPPORT = FALSE  #��
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_SUPPORT = TRUE
// ��Ͳ����̫С
prj:project_{cur}.mk   ENG_EX_MIC_TEST_SUPPORT = TRUE # �������Դ����ȳ���
// ��Ͳ��������һ�㲻��
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_SUPPORT  = TRUE
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_CALL_MODE_SUPPORT = TRUE
prj:project_{cur}.mk   AUDIO_AMP_EXT_PULL_2_TIME = TRUE


### ������Ͳ����һ
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS6531E_ROM_16MB_DS_USER.mk 3IN1
//
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_3IN1_SUPPORT = TRUE
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_SUPPORT = TRUE

//
hw:
nv:audio_calib_VQE.nvm  65
HW:{project}\audio_calib_VQE.nvm  65
//
nv1:audio_calib_VQE.nvm  65
nv2:audio_calib_VQE.nvm  65
nv3:audio_calib_VQE.nvm  65
nv:audio_calib_VQE.nvm  65
// 2IN1,3IN1
//    ITEM_CONTENT = 0x2
// ����
//    ITEM_CONTENT = 0x0
//
//reservedΪ0��ʾʹ���ڲ�PA���ⲿPA����SPK��RCV�ϣ�û����Ͳ���ȶ���һ������һ
//
//�볢���޸�audio_calib_VQE.nvm�е�
//  audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved��ֵ������
//reservedΪ0��ʾԭʼ�ӷ���û��ʹ���ⲿPA��û����Ͳ���ȶ���һ������һ
//reservedΪ1��ʾʹ���ⲿPA���ⲿPA����HP_R�ϣ�û����Ͳ���ȶ���һ������һ
//reservedΪ2��ʾʹ���ڲ�PA������Ͳ���ȶ���һ������һ
//reservedΪ3��ʾʹ���ⲿPA���ⲿPA����HP_R�ϣ�����Ͳ���ȶ���һ������һ



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
nv:ProductionParam_uix6531E.nvm  production_param_T
//
MS_Customize\export\inc\nv_productionparam_type.h  PROD_PARAM_tag
//  96bytes === 48 id


// 2.bt_config--401
nv:ProductionParam_uix6531E.nvm  bt_config
//
MS_Customize\export\inc\bt_cfg.h  BT_SPRD_NV_PARAM

// bt_sprd
nv:ProductionParam_uix6531E.nvm  3651
// 362->361->340


// 3.
// gps_config--403
nv:ProductionParam_uix6531E.nvm  gps_config
// tv_rssi_comp--404
nv:ProductionParam_uix6531E.nvm  tv_rssi_comp
// multi_langue_cfg--405
nv:ProductionParam_uix6531E.nvm  multi_langue_cfg
// wifi_config--409
nv:ProductionParam_uix6531E.nvm  wifi_config
// engine_test_result--431
nv:ProductionParam_uix6531E.nvm  engine_test_result
// bt_sprd--442
nv:ProductionParam_uix6531E.nvm  bt_sprd
// fm_config--451
nv:ProductionParam_uix6531E.nvm  fm_config
// e_guarantee_card--560
nv:ProductionParam_uix6531E.nvm  e_guarantee_card





[1.9] nv test
// MMI_GetAllModuleSumNvSize(void)



[1.10] IMEI
// nv id-imei
common\export\inc\nv_item_id.h  NV_IMEI   5
common\export\inc\nv_item_id.h  NV_IMEI1  377
common\export\inc\nv_item_id.h  NV_IMEI2  390
common\export\inc\nv_item_id.h  NV_IMEI3
// �޸�IMEI1~IMEI4
common\nv_parameters\nv_type\nv_type_uix6531E.nvm
build\..\nv\nvitem\nv_type_uix6531E.nvm
// 3A25720371833604
//
// A352273017386340




[1.11] bat_capacity
// bat
chip_drv\chip_module\charge\uix6531E\charge_uix6531E.c  _CHGMNG_VoltagetoPercentum



[1.12] custom 
### 107
make/perl_script/


// NV_ALIPAY_ID
make/perl_script/UIX6531E_128MBITX64MBIT_new.xml  0x1B4


### 6531E
nv:\\
HW:\
// sim
HW:{project}\nv_type_uix6531E.nvm  sim_card_number
//	0x1

//
HW:{project}\nv_type_uix6531E.nvm  com_data
//	0xFF

// static
HW:{project}\modem_nv_cat1bis_uix6531E_static.nvm  9166
//   0x0: ��·�����ͷ�
//   0x1: Ĭ��
//
//�޸���·����ʱ�� (6531E_��վ����ʱ��
//1��������ʱ����·��Ҫ����10�룬��Э���Ҫ���ƶ�Ҳһֱ�ڲ鲻����Э��������
//2������ʽ�ķ�������С��·����������nvֵ���������ٹ��ġ�
//����1��ͨ��ATָ���޸�  at+rrcrel=���֣�0-20��  ������0.5��
//����2��ͨ���޸�Ĭ��nvֵ����С������modem_nv_cat1bis_uix6531E_static.nvm�����һ��ֵ����Ϊ0-20ĳ����
//3������ԣ����ܻ�Ӱ�쵽��ͨ�ʣ��ر��Ƕ�̬�����£�����·�����֡�


### __Card__  ���ӱ���
// 6531E �����ɱ���
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 560
make/perl_script/UIX6531E_128MBIT.xml  0x230
HW:{project}\ProductionParam_uix6531E.nvm  guarantee  # 560

// 107--���ɲ���
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_ID  # 610
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_LEN # 8
make\nv_cus_config\nv_cus_config_MAIN\nv_cus_config_xml.mk   customer_card_id.xml
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\customer_card_id.xml  # 610
HW:{project}\CustNV\customer_card_id.xml
//SPDE_PRJ\F76T_SUOAI_MID\CustNV\customer_card_id.xml  #Ĭ�ϲ��ü�
// backup==>0
make\perl_script\
make\perl_script\UMS9117.xml  customer_card_id  # 0x262/610
make\perl_script\pac.pl       UMS9117.xml

// 107--���������, ��ʽ�������
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 2851
make\app_main\app_main.mk  eleGuaranteeCard.xml
HW:{project}\RDNV\eleGuaranteeCard.xml  # 2851


[1.13] nv_build



// 107�ֶ���ԭ
PS\nv\export\
common\nv_parameters\
//project\config_nv\ums9117\
//make\nv_cus_config\nv_cus_config_MAIN\
PS\nv\export\ps\ims\   #batδ��

// ������build�����ļ�
CustNV/NV_PARAM_TYPE_EXPORT_IMS_CUSTOMER_SETTINGS.xml
RDNV\bt_rf_config.xml               # δ��ԭ common\nv_parameters\wcn
RDNV\multi_langue_cfg.xml
RDNV\eleGuaranteeCard.xml  #delete
RDNV\W_download_params_optimize.xml   # �Ȳ���
RDNV\rd_nvitem.xprj


###
// mk
prj:project_{cur}.mk   PLATFORM = UMS9117
prj:project_{cur}.mk   AUDIO_COMMON_EXCHANGE = TRUE
prj:project_{cur}.mk   RCV_THROUGH_SPK = TRUE    #����һ
prj:project_{cur}.mk   RCV_THROUGH_SPK = FALSE   #����
//
make\voice\voice.mk  RCV_THROUGH_SPK   #����һ��NV
PS\build\make\csm.mk  CUST_XML

// ����һ��NV
prj:CustNV/
prj:CustNV/audio_arm_rcv_through_spk.xml
prj:CustNV/audio_dsp_rcv_through_spk.xml
prj:CustNV/audio_dsp_ex_rcv_through_spk.xml
prj:CustNV/dsp_codec_config_rcv_through_spk.xml
// ������NV
prj:CustNV/audio_arm.xml
prj:CustNV/audio_dsp.xml
prj:CustNV/audio_dsp_ex.xml
prj:CustNV/dsp_codec_config.xml
// �滻����һĬ��NV
common\nv_parameters\audio\UMS9117\
common\nv_parameters\audio\UMS9117\audio_arm_rcv_through_spk.xml
//
HW:{project}\



[1.14] nand/nor
// 
// 107��nand��6531E��nor ����flash



[1.15] test
// usb--ʵ��û������ʹ��
app:eng\c\mmieng_main.c  MMIENG_NV_USB_TEST_SET_SETTING



[1.16] audio_calib_VQE
//
nv:\


### 1. 6531E ʵ�������
// Headset ����
nv:audio_sc6531efm_AEC.nvm  32

// Handset ��Ͳ
nv:audio_sc6531efm_AEC.nvm  3967

// Handsfree ����
nv:audio_sc6531efm_AEC.nvm  7902

### 2.
// Headset ����
nv:audio_arm_6531efm.nvm  32

// Handset ��Ͳ
nv:audio_arm_6531efm.nvm  4333

// Handsfree ����
nv:audio_arm_6531efm.nvm  6476




[1.17] hv_nv
//
nv:nv_type_uix6531E.nvm  4938
����ͨ���鿴
nv_type_uix6531E.nvm����4938�У�
�Ƿ���    ITEM_NAME    = nv_ver_flag�����û�еĻ���
���������ϰ汾�ģ�Ȼ������һ���汾�󣬰�build��nvĿ¼�ĸ��ƻ�����
����һ�������ļ���������ȷ�����°汾nv���̡�



[1.18] __bt_nv__
// bt
// --Ĭ��Tcard, �Զ���udisk����
//		==>MMIBT_OpenIncomingFileWin()
app:bt\c\mmibt_func.c  MMINV_BT_FILE_LOCATION
//		==>MMISET_ResetFactorySetting            # set
//		====>MMIAPIBT_Reset
//		======>MMIBT_Reset
//		========>MMIAPIFMM_GetDefaultDisk        # Ĭ�����һ����
//		==>MMIBT_OpenIncomingFileWin             # bt ����
//		====>
//		==>MMIAPISD_HandleSDPlugWaiting          # SD ����msg
//		====>SDPLUG_IN:
//		====>MMIAPIBT_SaveFileLocation
//		==>APP_Init
//		====>MMIAPIBT_AppInit
//		======>MMIBT_SetFileSaveLocation         # init, SD, file path
//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>



[1.19] __env_nv__
//		==>val
//		====>mmienvset_default_setting
//		====>mmienvset_default_setting_ex
//		====>diff:
//		======>MMISET_RING_DEFAULT_ID_EX
//		==>bak:
//		====>MMK_HandlePublicKey
//		======>HEADSET_DETECT:(down)
//		========>MMIAPIENVSET_ReSetAllVolmue
//		==========>MMIAPIENVSET_SetModeValue         # vol 5
//		==========>MMIAPIMP3_SetVolume               # vol 5 mp3
//		==========>MMIFM_AdjustVolumeTP              # vol 5 fm
//		==========>MMIAPIVP_FSMUpdateCurrentVolNoHandle
//		============>�����ڻ���NV��
//		======>HEADSET_DETECT:(up)
//		==========>MMIAPIENVSET_UnReSetAllVolmue()
//		============>��ԭNV
//		==>sys:
//		====>MMIAPISET_AllInit
//		======>MMISET_EnvSetInit
//		========>ǰģʽ: ��ͨ����
//		========>�ģʽ: ��ͨ����
//		========>��ǰģʽ: ǰģʽ �� �ģʽ
//		========>����״̬: ��
//		========>��������: 
//		========>�ϴ�NV: s_mmienvset_setting_info      # ����
//		========>Enhance: 
//		======>OtherInit
//		========>PRODUCT_CODE_Read                   # ���ֹ����룿
//		====>MMISET_ResetFactorySetting
//		======>MMIENVSET_ResetEnvSetSetting          # ��v1, ��������v2
//		==>set:
//		====>addMode:
//		======>HandleEnvOptMenuWindow
//		========>GetEnvAddIndex
//		==========>MMIAPIENVSET_GetModeValue
//		==========>MMIENVSET_InitUserIndexItem       # ��v1
//		====>MMIENVSET_EnvName_WriteInNV
//		====>MMIENVSET_GetEnvRealIndex
//		====>MMIENVSET_CreateMoreRingFile
//		====>MMIAPIENVSET_ResetActModeOtherRingSet   # �ָ�����Ĭ��ֵ
//		==>bt:
//		====>MMIBT_OpenHeadsetCnf
//		======>MMIAPIENVSET_SetBluetoothMode();
//		====>MMIBT_CloseHeadsetCnf
//		======>MMIAPIENVSET_UnSetBluetoothMode();



[1.20] simulator
//
source:winsimulator_tp/win_platform/SIM_Set_Files/
source:winsimulator_tp/win_platform/SIM_Set_Files/SIM1/EF_LOCI.inf


[1.21] replace_nv

// �����滻
Save:Help\Other\
// �滻�������
Save:Help\Other\Macro_Help_replace.h
// �滻����һNV
Save:Help\Other\Macro_Help_replace_2n1.h
Save:Help\Other\Macro_Help_replace_2n1_path.h

// tool
tool_mini:4_�����ֿ�\
tool_mini:4_�����ֿ�\sprd_nv_exist.xlsm

// path
HW:{project}\
HWNV:\


[1.22] apn
//
Save:node\C\study\Macro_doc_6531E.h  __6531E_apn__
Save:node\C\study\Macro_doc_6531E.h  __107_apn__
// 107 apn
Save:node\C\study\Macro_doc_apn107.h
// t6b
//1. �������٣�T6-B�ڵ��Ѿ������
//2. ̨�������W���o���ϾWʹ�ã�APN:twm.iot�� 


[1.23] 


[1.24] 


[1.25] 



