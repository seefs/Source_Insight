
//目录[Num][Ca]:
// 1. 模板
Save:node\C\cfg\Macro_c_path_sprd.h \[1.1\] sprd_cur--------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.2\] mtk_copy
Save:node\C\cfg\Macro_c_path_sprd.h \[1.3\] //mtk_cfg--------nv, board
Save:node\C\cfg\Macro_c_path_sprd.h \[1.4\] //mtk_other------rf
Save:node\C\cfg\Macro_c_path_sprd.h \[1.5\] //mtk_bat
Save:node\C\cfg\Macro_c_path_sprd.h \[1.6\] //mtk_sbd------
Save:node\C\cfg\Macro_c_path_sprd.h \[1.7\] other
Save:node\C\cfg\Macro_c_path_sprd.h \[1.8\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.9\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.10\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.11\] 
Save:node\C\cfg\Macro_c_path_sprd.h \[1.12\] 




[1.1] _sprd_cur_
// (1).curKey
// --images / audio / features / build
Save:set\
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
Save:set\Macro_Set_Path_sprd_.h  curKey

// (2).bak
// A86===>自动配置
curKey = K220_A86

// 从build 中自动配置;从bat默认修改prj(非服务器编译)
build\


// V35
make K220_V97A_WD GSM new
//make K220_V88_WD GSM new
make K220_V35_WD GSM new


// 61D
curKey = K220_H660_TX




[1.2] //_mtk_copy_

### 从旧项目复制新项目
// copy: 
//   mk, bld, features, nv, image, audio
Save:set\Macro_Set_Path_sprd_{pro}.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD

===================copy_start===================
// (1).mk/bld
// --mk
cp make/{old}_GSM.mak make/{new}_GSM.mak
// --bld
cp make/Verno_{old}.bld make/Verno_{new}.bld
// --mk name
make/{new}_GSM.mak    PRJ_NAME
make/Verno_{new}.bld  VERNO


// (2).images/audio/features
// --images--[xcopy用"\"]
cmd_f: md plutommi\Customer\Images\{new}
cmd_f: xcopy plutommi\Customer\Images\{old}  plutommi\Customer\Images\{new}  /e /i /y
// --images
plutommi\Customer\Images\{old}\
plutommi\Customer\Images\{new}\
images:\\
// --audio--[xcopy用"\"]
cmd_f: md plutommi\Customer\AUDIO\{new}
cmd_f: xcopy plutommi\Customer\AUDIO\{old}  plutommi\Customer\AUDIO\{new}  /e /i /y
// --audio
plutommi\Customer\AUDIO\{old}\
plutommi\Customer\AUDIO\{new}\
audio:\\

// --features--dir
// 手动创建文件夹
//cmd_w: md plutommi\Customer\CustResource\K220_D33D_MMI
// 自动创建文件夹
cmd_f: md plutommi\Customer\CustResource\{new}_MMI
cmd_f: xcopy plutommi\Customer\CustResource\{old}_MMI plutommi\Customer\CustResource\{new}_MMI /e /i /y
// --features
plutommi\Customer\CustResource\{old}_MMI\
plutommi\Customer\CustResource\{new}_MMI\
features:\\

// --features--rename
cmd_f: ren plutommi\Customer\CustResource\{new}_MMI\MMI_features_switch{old}.h  MMI_features_switch{new}.h
// --features--path
plutommi\Customer\CustResource\{new}_MMI\CustResDef.h  CUST_IMG_PATH


// (3).nv
// --nv--dir--NV目录可能不是这个
cmd_f: md custom\audio\{new}_AUDIO_BB\
cmd_f: xcopy custom\audio\{old}_AUDIO_BB\*  custom\audio\{new}_AUDIO_BB\  /e /i /y
// --nv
custom\audio\{old}_AUDIO_BB\
custom\audio\{new}_AUDIO_BB\
custom\audio\{nv}\


===================copy_end===================


[1.3] _mtk_cfg_






[1.4] _mtk_other_




[1.5] _mtk_bat_
// (1).curKey
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
//	set proP1={cur}

// (2).bak
Save:set\Macro_Set_Path_sprd_{pro}.h  boardKey
make/{cur}_{GSM}.mak  BOARD_VER
//	set proC1={board}



[1.6] mtk_sbd
// auto set
//Save:set\Macro_Set_Path_sprd_{pro}.h 10
//
// new
//imagesPath = projects\M107\K220_L12_MGUO\Images\
//images:\
//audioPath = projects\M107\K220_L12_MGUO\AUDIO\PLUTO\
//audio:\
//resourcePath = projects\M107\K220_L12_MGUO\Resource\
//resource:\
////featuresPath = plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
//features:\
//
//
// old
//imagesPath = plutommi\Customer\Images\M107\K220_L12_MGUO
//images:\
//audioPath = plutommi\Customer\Audio\M107\K220_L12_MGUO
//audio:\
//resourcePath = plutommi\Customer\CustResource\M107_MMI\K220_L12_MGUO
//resource:\
////featuresPath = plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
//features:\



[1.7] other

// bcmp
//cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h




[1.8] 




[1.9] 




[1.10] 




[1.11] 




[1.12] 




