
基础路径设置:
//basePath = 
//nvPath = SPDE_PRJ\WA08U_X6C\nvitem
//nvPath = SPDE_PRJ\WA03U_T2_V2\nvitem
//nvPath = SPDE_PRJ\WA07U_F30Z\nvitem
nvPath = common\nv_parameters\ProductionParam
nv:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_nv_MTK.h \[1.1\] //充电------------电流
Save:node\C\study\Macro_nv_MTK.h \[1.2\] 充电/放电-------电压(修改放电n%)
Save:node\C\study\Macro_nv_MTK.h \[1.3\] //低电电压
Save:node\C\study\Macro_nv_MTK.h \[1.4\] //charge_end_voltage 高压电池
Save:node\C\study\Macro_nv_MTK.h \[1.5\] //PA
Save:node\C\study\Macro_nv_MTK.h \[1.6\] //2IN1,3IN1
Save:node\C\study\Macro_nv_MTK.h \[1.7\] //production_param
Save:node\C\study\Macro_nv_MTK.h \[1.8\] //nv define
Save:node\C\study\Macro_nv_MTK.h \[1.9\] //nv test
Save:node\C\study\Macro_nv_MTK.h \[1.10\] //IMEI
Save:node\C\study\Macro_nv_MTK.h \[1.11\] //bat_capacity
Save:node\C\study\Macro_nv_MTK.h \[1.12\] //custom
Save:node\C\study\Macro_nv_MTK.h \[1.13\] HOMEPAGE
Save:node\C\study\Macro_nv_MTK.h \[1.14\] nv_set
Save:node\C\study\Macro_nv_MTK.h \[1.15\] nv_sim
Save:node\C\study\Macro_nv_MTK.h \[1.16\] nv_audio
Save:node\C\study\Macro_nv_MTK.h \[1.17\] nv_audio_other
Save:node\C\study\Macro_nv_MTK.h \[1.18\] nv_bat
Save:node\C\study\Macro_nv_MTK.h \[1.19\] nv_tarce
Save:node\C\study\Macro_nv_MTK.h \[1.20\] 
Save:node\C\study\Macro_nv_MTK.h \[1.21\] 
Save:node\C\study\Macro_nv_MTK.h \[1.22\] 
Save:node\C\study\Macro_nv_MTK.h \[1.23\] 
Save:node\C\study\Macro_nv_MTK.h \[1.24\] 
Save:node\C\study\Macro_nv_MTK.h \[1.25\] 
Save:node\C\study\Macro_nv_MTK.h \[1.26\] 




[1.1] 




[1.2] 充电/放电
//
custom\app\{board}\
custom\app\{board}\nvram_user_config.c  __MORE_BATTERY_LEVEL__
//

// (1).tmp nv
// cur
custom\app\{board}\
custom\app\{board}\nvram_user_config.c  __MORE_BATTERY_LEVEL__

// bak
Save:set\Macro_Set_Path_mtk.h  tmpKey
// board
make/{tmp}_GSM.mak  BOARD_VER
Save:set\Macro_Set_Path_mtk.h  tmpBoardKey
//
custom\app\{tmpBoard}\
custom\app\{tmpBoard}\nvram_user_config.c  __MORE_BATTERY_LEVEL__





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




[1.13] HOMEPAGE
//NV
NVRAM_BRW_SETTINGS_HOMEPAGE



[1.14] nv_set
//
plutommi\mmi\gpio\gpiores\PhnsetGpio.res  NVRAM_SETTING_KEY_BACKLITE_SWITCH



[1.15] nv_sim

// 格式化不删除短信时间
custom/common/PLUTO_MMI/nvram_common_config.c NVRAM_EF_SRV_SMS_SIM_CUST_DATA_LID

// 小区广播默认频道+订阅
custom\common\hal\nvram\nvram_data_items.c  COMMON_NVRAM_EF_CB_CH_INFO_DEFAULT
interface\middleware\nvram_editor_data_item.h  NVRAM_EF_CB_CH_INFO_TOTAL
// ??
custom/common/PLUTO_MMI/nvram_common_config.c NVRAM_EF_CB_CONFIG_LID

// 第一个字节表示小区广播是否开，第二个字节表示小区广播是否支持所有语言
custom\common\hal\nvram\nvram_cust_pack.c  COMMON_NVRAM_EF_SMSAL_COMMON_PARAM_DEFAULT
interface\middleware\nvram_editor_data_item.h  NVRAM_EF_SMSAL_COMMON_PARAM_TOTAL
//    0x00, 0x01,         /* CB setting */


[1.16] nv_audio
// nv
custom\audio\{nv}\nvram_default_audio.c
//custom\audio\{nv}\nvram_default_audio_{cur}.h

// 来电铃声
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_MED_VOL6
#define GAIN_NOR_MED_VOL6     58

// mp3_max
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_MED_VOL_MAX
#define GAIN_NOR_MED_VOL_MAX      58

// 免提--通话--音
custom\audio\{nv}\nvram_default_audio.c  GAIN_HND_SPH_VOL0
// 正常--通话--音
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_SPH_VOL0
// 耳机--通话--音
custom\audio\{nv}\nvram_default_audio.c  GAIN_HED_SPH_VOL0


###
// Call Tone
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_CTN_VOL0,
media\audio\include\aud_defs.h  AUD_VOLUME_CTN
// Keypad Tone
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_KEY_VOL0,
// Microphone
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_MIC_VOL0,
// GMI Tone
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_GMI_VOL0,
media\audio\include\aud_defs.h  AUD_VOLUME_FMR
// Speech Tone--通话
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_SPH_VOL0,
// Side Tone--sound loop back
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_SID_VOL0,
media\audio\include\aud_defs.h  AUD_VOLUME_SID
// media--来电铃声与mp3--16N
custom\audio\{nv}\nvram_default_audio.c  GAIN_NOR_MED_VOL0,
media\audio\include\aud_defs.h  AUD_VOLUME_MEDIA


//
//https://max.book118.com/html/2019/0712/7035052136002040.shtm
//http://cache.baiducontent.com/c?m=PNS-Fj_8ZcDQOLFLJAf5tfkSHLacLZXo-hYtEstNe4infIeZpFV3_8nzFCfapsk5D9GmWmyjehYL66gPktKFpSw5tqEboLgHuU6Lx2__3HIXk2fcATgavJre_tQGZJrTOtlSCn0rVKUc3HGKddVrnVVapKt5ETw5YaEI4uHDJhW&p=c0769a478b8611a05bec97314e49a5&newp=882a9644d59c1df01e81c7710f5283231610db2151d7d5156b82c825d7331b001c3bbfb422201101d6cf766d02ab485feef13471370923a3dda5c91d9fb4c57479d77b6b3670&s=45c48cce2e2d7fbd&user=baidu&fm=sc&query=GAIN%5FNOR%5FSPH&qid=c2dac0c800000289&p1=2





[1.17] nv_audio_other
// 模式4
custom\audio\{nv}\afe.c  void^AFE_SwitchExtAmplifier

// 通道
custom\audio\{nv}\audcoeff.c  L1SP_MICROPHONE1
custom\audio\{nv}\audcoeff.c  L1SP_SPEAKER1
//
// 听筒 !SPH_MODE_LOUDSPK
// 免提 SPH_MODE_LOUDSPK
// MP3  mmi_audply_is_playing()
custom\audio\{nv}\afe.c  void^AFE_SwitchExtAmplifier





[1.18] nv_bat
//
custom\app\{board}\
custom\app\{board}\nvram_user_config.c  __MORE_BATTERY_LEVEL__
// bat
interface\middleware\nvram_editor_data_item.h  custom_hw_level_struct



[1.19] nv_tarce
//
// 为99时，关闭此打印，为4时，是USB打印
custom\common\hal\nvram\nvram_data_items.c  NVRAM_EF_PORT_SETTING_DEFAULT



[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 


