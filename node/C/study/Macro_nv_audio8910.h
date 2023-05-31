
//目录:
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
prj:project_{cur}.mk   AUDIO_EXT_RCV_PA                 = TRUE # 
prj:project_{cur}.mk   AUDIO_EXT_PA                     = TRUE # 外K
prj:project_{cur}.mk   AUDIO_AMP_EXT_CLASSK_SUPPORT     = TRUE # 外K
prj:project_{cur}.mk   AUDIO_AMP_EXT_CLASSK_SUPPORT_NEW = TRUE # 外K
prj:project_{cur}.mk                                           # 内置D类
// 

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




[1.3] __Copy107__


nv_build

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


###  __107_2N1__
// mk
prj:project_{cur}.mk   PLATFORM = UMS9117
prj:project_{cur}.mk   AUDIO_COMMON_EXCHANGE = TRUE
//
prj:project_{cur}.mk   RCV_THROUGH_SPK = TRUE    #二合一
prj:project_{cur}.mk   RCV_THROUGH_SPK = FALSE   #独立
prj:project_{cur}.mk   SPK_THROUGH_HPR = FALSE
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


###  __8910_2N1__
// 独立听筒
prj:project_{cur}.mk  AUDIO_EXT_PA= TRUE
prj:project_{cur}.mk  RCV_THROUGH_SPK= FALSE
// 听筒二合一
prj:project_{cur}.mk  AUDIO_EXT_PA= FALSE
prj:project_{cur}.mk  SPK_THROUGH_HPR= FALSE
prj:project_{cur}.mk  RCV_THROUGH_SPK= TRUE
prj:{cfg}.cfg  AUDIO_EXT_PA= FALSE
prj:{cfg}.cfg  SPK_THROUGH_HPR= FALSE
prj:{cfg}.cfg  RCV_THROUGH_SPK= TRUE


###  __8910_3N1__
// 三合一：
prj:project_{cur}.mk CUS_ADD_SHAKE= TRUE  三合一喇叭宏        
prj:project_{cur}.mk VIRTUAL_VIBRATE_FUNC
prj:project_{cur}.mk __SPEAKER_VIB_INTENSITY_WEAK__
prj:project_{cur}.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE 三合一同时开
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
//CLASSD改为CLASSAB方法如下：
//把armvb_as.c中的AUD_SPKPA_TYPE_T g_spkpatype = AUD_INPUT_TYPE_CLASSD;
//（大约在346行）修改为AUD_SPKPA_TYPE_T g_spkpatype = AUD_SPKPA_TYPE_CLASSAB;即可。

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
// ExtPa patch--展讯-未使用
MS_Ref\source\aud_dev\src\audio_cp.c  USE_EXT_PA

//
MS_Customize\source\product\driver\gpio\gpio_prod.c  AUDIO_AMP_EXT_PULL_2_TIME



[1.5] SAR
//Kitty:
//播放最大音量超Rs1时候，要满足三个条件才可以:第一说明书中有指示性安全防护，
//第二就是要有警示语，第三就是重启和恢复出厂设置不能超RS1。
//这个手机最高音量时是Rs2，所以需要满足后三个条件。

//Kitty:
//可以。最大音量时候降到RS1以下，直接过




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



