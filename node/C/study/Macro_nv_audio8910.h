
//Ŀ¼:
Save:node\C\study\Macro_nv_audio8910.h \[1.1\] audio_calib_VQE
Save:node\C\study\Macro_nv_audio8910.h \[1.2\] PA,2IN1,3IN1
Save:node\C\study\Macro_nv_audio8910.h \[1.3\] Copy107
Save:node\C\study\Macro_nv_audio8910.h \[1.4\] CLASSAB
Save:node\C\study\Macro_nv_audio8910.h \[1.5\] SAR
Save:node\C\study\Macro_nv_audio8910.h \[1.6\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.7\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.8\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.9\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.10\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.11\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.12\] 




[1.1] audio_calib_VQE
//
nv:\


### 1. 8910 ʵ�������
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





[1.2] PA,2IN1,3IN1
### __PA8910__
// select prj--8910
nv1Path = SPDE_PRJ\K220U_HYBL_H661A\nvitem
nv2Path = SPDE_PRJ\K220U_HYBL_H660A_HTX_LTC\nvitem
nv3Path = SPDE_PRJ\K220U_HYBL_H660A\nvitem
nv:\\

// 3IN1
SPDE_PRJ\K220U_HYBL_H660A\project_UIS8910_ROM_16MB_DS_USER.mk 3IN1
// 
SPDE_PRJ\K220U_SHY_517T\project_UIS8910_ROM_16MB_DS_USER.mk 3IN1




### ������Ͳ
SPDE_PRJ/K220U_HYBL_H661A/project_UIS8910_240x320BAR_16MB_DS_USER.mk  3IN1
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
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS8910_ROM_16MB_DS_USER.mk 3IN1
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


### __PA107__
// 
prj:project_{cur}.mk   AUDIO_EXT_RCV_PA                 = TRUE # 
prj:project_{cur}.mk   AUDIO_EXT_PA                     = TRUE # ��K
prj:project_{cur}.mk   AUDIO_AMP_EXT_CLASSK_SUPPORT     = TRUE # ��K
prj:project_{cur}.mk   AUDIO_AMP_EXT_CLASSK_SUPPORT_NEW = TRUE # ��K
prj:project_{cur}.mk                                           # ����D��
// 

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




[1.3] __Copy107__


nv_build

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


###  __107_2N1__
// mk
prj:project_{cur}.mk   PLATFORM = UMS9117
prj:project_{cur}.mk   AUDIO_COMMON_EXCHANGE = TRUE
//
prj:project_{cur}.mk   RCV_THROUGH_SPK = TRUE    #����һ
prj:project_{cur}.mk   RCV_THROUGH_SPK = FALSE   #����
prj:project_{cur}.mk   SPK_THROUGH_HPR = FALSE
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


###  __8910_2N1__
// ������Ͳ
prj:project_{cur}.mk  AUDIO_EXT_PA= TRUE
prj:project_{cur}.mk  RCV_THROUGH_SPK= FALSE
// ��Ͳ����һ
prj:project_{cur}.mk  AUDIO_EXT_PA= FALSE
prj:project_{cur}.mk  SPK_THROUGH_HPR= FALSE
prj:project_{cur}.mk  RCV_THROUGH_SPK= TRUE
prj:{cfg}.cfg  AUDIO_EXT_PA= FALSE
prj:{cfg}.cfg  SPK_THROUGH_HPR= FALSE
prj:{cfg}.cfg  RCV_THROUGH_SPK= TRUE


###  __8910_3N1__
// ����һ��
prj:project_{cur}.mk CUS_ADD_SHAKE= TRUE  ����һ���Ⱥ�        
prj:project_{cur}.mk VIRTUAL_VIBRATE_FUNC
prj:project_{cur}.mk __SPEAKER_VIB_INTENSITY_WEAK__
prj:project_{cur}.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE ����һͬʱ��
//
prj:{cfg}.cfg  CUS_ADD_SHAKE = UNISOC 

###
prj:CustNV/cvs_param_info.xml


###
prj:CustNV/NV_REF_PARAMETER.xml
//
make\refbase\refbase.mk  NV_REF_PARAMETER
//
common/nv_parameters/refbase/NV_REF_PARAMETER.xml

###
PS\nv\export\rf_NemoL_T117_3595D\common\Common_AFC_MIPI\AFC_cali_config.xml


### LTE

nv:LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml  numOfEUTRATDDBand  -> 0x2

PS\nv\export\ps\las\LTE_NV_EUTRA_CUSTOMER_SETTINGS.xml







[1.4] __CLASSAB__
//CLASSD��ΪCLASSAB�������£�
//��armvb_as.c�е�AUD_SPKPA_TYPE_T g_spkpatype = AUD_INPUT_TYPE_CLASSD;
//����Լ��346�У��޸�ΪAUD_SPKPA_TYPE_T g_spkpatype = AUD_SPKPA_TYPE_CLASSAB;���ɡ�

//  AUDIO_AMP_EXT_INTERNAL_AB
MS_Ref\source\aud_dev\src\armvb_as.c  346

//
AUDIO_AMP_CLASSK_3IN1_SUPPORT= TRUE
AUDIO_AMP_CLASSK_SUPPORT  = TRUE
AUDIO_AMP_CLASSK_CALL_MODE_SUPPORT = TRUE
AUDIO_AMP_EXT_PULL_2_TIME = TRUE
AUDIO_AMP_EXT_INTERNAL_AB = TRUE

//
MS_Ref\source\aud_dev\src\audio_cp.c  AUDIO_CP_bbatPcmPlayStart

###
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_SUPPORT = TRUE
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_3IN1_SUPPORT = TRUE


// ExtPa patch
MS_Ref\source\aud_dev\src\audio_cp.c  AUDIO_AMP_CLASSK_SUPPORT
// ExtPa patch--չѶ-δʹ��
MS_Ref\source\aud_dev\src\audio_cp.c  USE_EXT_PA

//
MS_Customize\source\product\driver\gpio\gpio_prod.c  AUDIO_AMP_EXT_PULL_2_TIME



[1.5] SAR
//Kitty:
//�������������Rs1ʱ��Ҫ�������������ſ���:��һ˵��������ָʾ�԰�ȫ������
//�ڶ�����Ҫ�о�ʾ��������������ͻָ��������ò��ܳ�RS1��
//����ֻ��������ʱ��Rs2��������Ҫ���������������

//Kitty:
//���ԡ��������ʱ�򽵵�RS1���£�ֱ�ӹ�




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



