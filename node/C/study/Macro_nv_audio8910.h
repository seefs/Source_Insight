
//Ŀ¼:
Save:node\C\study\Macro_nv_audio8910.h \[1.1\] audio_calib_VQE
Save:node\C\study\Macro_nv_audio8910.h \[1.2\] PA,2IN1,3IN1
Save:node\C\study\Macro_nv_audio8910.h \[1.3\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.4\] 
Save:node\C\study\Macro_nv_audio8910.h \[1.5\] 
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




[1.3] 




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



