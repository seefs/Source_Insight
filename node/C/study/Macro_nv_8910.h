
//Ŀ¼
Save:node\C\study\Macro_nv_8910.h \[1.1\] charge---------������
Save:node\C\study\Macro_nv_8910.h \[1.2\] sim------------sim���
Save:node\C\study\Macro_nv_8910.h \[1.3\] audio----------audio���
Save:node\C\study\Macro_nv_8910.h \[1.4\] mmi------------common���
Save:node\C\study\Macro_nv_8910.h \[1.5\] PA
Save:node\C\study\Macro_nv_8910.h \[1.6\] 
Save:node\C\study\Macro_nv_8910.h \[1.7\] 
Save:node\C\study\Macro_nv_8910.h \[1.8\] nv define
Save:node\C\study\Macro_nv_8910.h \[1.9\] nv test
Save:node\C\study\Macro_nv_8910.h \[1.10\] 
Save:node\C\study\Macro_nv_8910.h \[1.11\] 
Save:node\C\study\Macro_nv_8910.h \[1.12\] custom---------��·
Save:node\C\study\Macro_nv_8910.h \[1.13\] nv_build
Save:node\C\study\Macro_nv_8910.h \[1.14\] nand/nor
Save:node\C\study\Macro_nv_8910.h \[1.15\] test
Save:node\C\study\Macro_nv_8910.h \[1.16\] 
Save:node\C\study\Macro_nv_8910.h \[1.17\] hv_nv
Save:node\C\study\Macro_nv_8910.h \[1.18\] bt_nv
Save:node\C\study\Macro_nv_8910.h \[1.19\] env_nv
Save:node\C\study\Macro_nv_8910.h \[1.20\] simulator
Save:node\C\study\Macro_nv_8910.h \[1.21\] replace_nv--------
Save:node\C\study\Macro_nv_8910.h \[1.22\] apn
Save:node\C\study\Macro_nv_8910.h \[1.23\] _readme
Save:node\C\study\Macro_nv_8910.h \[1.24\] thir_nv
Save:node\C\study\Macro_nv_8910.h \[1.25\] 
Save:node\C\study\Macro_nv_8910.h \[1.26\] 

Save:Help\\DefaultFile\\Macro_Node_Num.h



[1.1] ���
// ������
Save:node\C\study\Macro_nv_charge8910.h


[1.2] sim
// sim���
Save:node\C\study\Macro_nv_sim8910.h  __IMEI__
Save:node\C\study\Macro_nv_sim8910.h  __ECC__


### sim lock
// sim lock
common\export\inc\nv_item_id.h  NV_SIMLOCK_CFG_ID   5
// cfg
Save:node\C\study\Macro_nv_simlock107.h


[1.3] audio
// audio���
Save:node\C\study\Macro_nv_audio8910.h


[1.4] mmi
// common--IMSI
source:mmi_app\common\h\mmi_nv.h MMINV_PHONE_IMSI
// IMSI--ָ��
//		==>HandleSimReadyInd
//		====>StoreSimReadyStatus  # ֻ�Ǳ��棬û�����ط���
app:phone\c\mmiphone.c  MMINV_PHONE_IMSI
// ��ʾ IMSI--δʹ��
//		==>SpdeShowServingCellInfo
//		====>ShowServingUECapInfo / ShowServingCellInfo
app:eng\c\mmieng_win.c  pNetInfo.nwCapabilityLte


### IMSI
// û�ҵ� id=3200 ��nv
PS\nv\internal\ps\common\NV_PARAM_TYPE_IMSI[1].xml  NV_PARAM_TYPE_IMSI1 id="2004"

### ���� MMI_MODULE_COMMON
//		==>MACRO_RES_PRJ_TYPE
//		====>MACRO_RES_PRJ_MODULE    # �����궨��
//		======>RES_ADD_MODULE        # id=0
source:mmi_app\kernel\h\mmi_module.h  MMI_MODULE_COMMON

### nv list
//		==>MMI_RegModuleNv
//		====>.s_mmi_nv_len
MS_MMI_Main\source\mmi_app\kernel\c\mmi_modu_main.c  MMI_RegModuleNv
//		==>MMI_WriteNVItem
//		====>.true_item_id           # item_top��
//		======>MMI_UINV_USER_BASE    # 1��
// ����� 500+2400=2900?
common\export\inc\nv_item_id.h  MN_NV_TD_USER_BASE   3200 ~ 3200+2800  # 107
common\export\inc\nv_item_id.h  MN_NV_USER_BASE      500  ~            # 8910


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



[1.6] 



[1.7] 


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



[1.10] 





[1.11] 



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
//   0x0: ��·�����ͷ�
//   0x1: Ĭ��
//
//�޸���·����ʱ�� (8910_��վ����ʱ��
//1��������ʱ����·��Ҫ����10�룬��Э���Ҫ���ƶ�Ҳһֱ�ڲ鲻����Э��������
//2������ʽ�ķ�������С��·����������nvֵ���������ٹ��ġ�
//����1��ͨ��ATָ���޸�  at+rrcrel=���֣�0-20��  ������0.5��
//����2��ͨ���޸�Ĭ��nvֵ����С������modem_nv_cat1bis_uix8910_static.nvm�����һ��ֵ����Ϊ0-20ĳ����
//3������ԣ����ܻ�Ӱ�쵽��ͨ�ʣ��ر��Ƕ�̬�����£�����·�����֡�


### __Card__  ���ӱ���
// 8910 �����ɱ���
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 560
make/perl_script/UIX8910_128MBIT.xml  0x230
HW:{project}\ProductionParam_uix8910.nvm  guarantee  # 560

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
// 107��nand��8910��nor ����flash



[1.15] test
// usb--ʵ��û������ʹ��
app:eng\c\mmieng_main.c  MMIENG_NV_USB_TEST_SET_SETTING



[1.16] 



[1.17] hv_nv
//
nv:nv_type_uix8910.nvm  4938
����ͨ���鿴
nv_type_uix8910.nvm����4938�У�
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
//		========>ǰģʽ: ��ͨ����                           # ȫ��env
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
//		==>switch:
//		====>GetEnvSetOptValue
//		======>GetModeValue
//		====>HandleEnvSetMainMenuWindow
//		======>MMIENVSET_SetCurModeId((uint8)real_id);
//		======>envset_mode = MMIENVSET_GetCurModeId();
//		========>MMIAPIENVSET_ActiveMode(envset_mode);
//		========>MMIENVSET_SetPreActiveMode(active_mode_id);   
//		==========>SetActiveModeId
//		==>bt:
//		====>MMIBT_OpenHeadsetCnf
//		======>MMIAPIENVSET_SetBluetoothMode();
//		====>MMIBT_CloseHeadsetCnf
//		======>MMIAPIENVSET_UnSetBluetoothMode();

// NV���������
rdnv:\
rdnv:NV_PARAM_TYPE_SIM_CFG[1].xml  profile_download_bytes



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
// apn
Save:node\C\study\
Save:node\C\study\Macro_res_8910.h  __8910_apn__
Save:node\C\study\Macro_res_8910.h  __107_apn__
Save:node\C\study\Macro_doc_apn107.h
Save:node\C\study\Macro_doc_apn8910.h
// t6b
//1. �������٣�T6-B�ڵ��Ѿ������
//2. ̨�������W���o���ϾWʹ�ã�APN:twm.iot�� 


[1.23] _readme
// UMS9117
_readme.txt  UMS9117_NEW


[1.24] thir_nv
// ֧����
make\\perl_script\\UMS9117.xml  Ali_DATA
common\export\inc\nv_item_id.h  Ali_DATA


[1.25] 


[1.26] 


