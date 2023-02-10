
//目录:
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


### 1. 8910 实测是这个
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




### 单独听筒
SPDE_PRJ/K220U_HYBL_H661A/project_UIS8910_240x320BAR_16MB_DS_USER.mk  3IN1
//
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_3IN1_SUPPORT = FALSE  #关
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_SUPPORT = TRUE
// 听筒声音太小
prj:project_{cur}.mk   ENG_EX_MIC_TEST_SUPPORT = TRUE # 回声测试从喇叭出来
// 听筒调音量，一般不开
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_SUPPORT  = TRUE
prj:project_{cur}.mk   AUDIO_AMP_CLASSK_CALL_MODE_SUPPORT = TRUE
prj:project_{cur}.mk   AUDIO_AMP_EXT_PULL_2_TIME = TRUE


### 喇叭听筒二合一
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
// 独立
//    ITEM_CONTENT = 0x0
//
//reserved为0表示使用内部PA或外部PA接在SPK或RCV上，没有听筒喇叭二合一或三合一
//
//请尝试修改audio_calib_VQE.nvm中的
//  audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved的值来控制
//reserved为0表示原始接法，没有使用外部PA，没有听筒喇叭二合一或三合一
//reserved为1表示使用外部PA，外部PA接在HP_R上，没有听筒喇叭二合一或三合一
//reserved为2表示使用内部PA，有听筒喇叭二合一或三合一
//reserved为3表示使用外部PA，外部PA接在HP_R上，有听筒喇叭二合一或三合一


### __PA107__
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



