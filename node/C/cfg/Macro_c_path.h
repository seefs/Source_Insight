
//目录[Num][Ca]:
// 1. 模板
Save:node\C\cfg\Macro_c_path.h \[1.1\] mtk_cur--------
Save:node\C\cfg\Macro_c_path.h \[1.2\] mtk_copy
Save:node\C\cfg\Macro_c_path.h \[1.3\] mtk_cfg--------nv, board
Save:node\C\cfg\Macro_c_path.h \[1.4\] mtk_other------rf
Save:node\C\cfg\Macro_c_path.h \[1.5\] mtk_bat
Save:node\C\cfg\Macro_c_path.h \[1.6\] //mtk_sbd------
Save:node\C\cfg\Macro_c_path.h \[1.7\] other
Save:node\C\cfg\Macro_c_path.h \[1.8\] 
Save:node\C\cfg\Macro_c_path.h \[1.9\] 
Save:node\C\cfg\Macro_c_path.h \[1.10\] 
Save:node\C\cfg\Macro_c_path.h \[1.11\] 
Save:node\C\cfg\Macro_c_path.h \[1.12\] 




[1.1] _mtk_cur_
// (1).curKey
// --images / audio / features / build
Save:set\
Save:set\Macro_Set_Path_mtk_{pro}.h  curKey
Save:set\Macro_Set_Path_mtk_.h  curKey
// --每个项目一个配置
Save:set\Macro_Set_Base.h  80 / 82 / 84
// --cam path 用
make/{cur}_{GSM}.mak PRJ_NAME = F209_KW_S77





[1.2] _mtk_copy_

### 从旧项目复制新项目
// copy: 
//   mk, bld, features, nv, image, audio
Save:set\Macro_Set_Path_mtk_{pro}.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD

===================copy_start===================
// (1).mk/bld
// --mk
cp make/{old}_{GSM}.mak make/{new}_{GSM}.mak
// --bld
cp make/Verno_{old}.bld make/Verno_{new}.bld
// --mk name
make/{new}_{GSM}.mak    PRJ_NAME
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
// (1).nv
Save:set\Macro_Set_Path_mtk_{pro}.h  nvKey
// 未设置用默认 BOARD_VER
make/{cur}_{GSM}.mak  BOARD_VER_CUST_AUDIO
make/{cur}_{GSM}.mak  BOARD_VER
//	BOARD_VER_CUST_AUDIO = K220_Z97_AUDIO_BB
// 
//make\custom\custom.mak BOARD_VER_CUST_AUDIO
//custom\drv\audio\{nv}\
// --nv
custom\audio\{nv}\
// 
//custom\common\PLUTO_MMI



// (2).board
Save:set\Macro_Set_Path_mtk_{pro}.h  boardKey
//
make/{cur}_{GSM}.mak  BOARD_VER
//	BOARD_VER = K220M_BH_BB
//
custom\app\{board}\
custom\app\{board}\nvram_user_config.c  __MORE_BATTERY_LEVEL__

// --dws
custom\codegen\{board}\
custom\codegen\{board}\codegen.dws
custom\codegen\{board}\codegen_H660.dws

// --dws
custom\drv\bluetooth\{board}\

custom\drv\camera\{board}\

custom\drv\misc_drv\{board}\
custom\drv\misc_drv\{board}\alerterdrv.c

custom\meta\{board}\
custom\meta\{board}\ft_customize.c

custom\ps\{board}\
custom\ps\{board}\Customer_sim_voltage_support.c

// --MemoryDevice
custom\system\{board}\
custom\system\{board}\custom_FeatureConfig.h
custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NAND_FS_SIZE



// (3).lcd
Save:set\Macro_Set_Path_mtk_{pro}.h  lcdKey
//
make/{cur}_{GSM}.mak  LCD_MODULE
//	LCD_MODULE = K220D_QQVGA_LCM


custom\drv\LCD\{lcd}\
custom\drv\LCD\{lcd}\combo_lcm_ST7735S.c

custom\drv\color\{lcd}\
custom\drv\color\{lcd}\color_custom.c

// 配置id
Save:node\C\project\Macro_Note_MTK.h  __LCD__


// (4).cam
// --
custom\drv\YUV_sensor\{board}\{cur}\
custom\drv\YUV_sensor\{board}\{cur}\GC032A_SERIAL\


// (5).system
//
custom\system\K2M_BB\
custom\system\{board}\
custom\system\{board}\scatBL_MT6261.txt
custom\system\{board}\scatBL_MT6261_ext.txt
custom\system\K220M_YGW_BB\scatBL_MT6261_ext.txt



[1.4] _mtk_other_

// (3).rf
make/{cur}_{GSM}.mak  RF_MODULE
//	RF_MODULE = MT6261RF_HS8235L_CUSTOM


// (4).consistent
make/{cur}_{GSM}.mak  COM_DEFS_FOR
//	COM_DEFS_FOR_MT6261RF_HS8235L_CUSTOM
//	COM_DEFS_FOR_K220D_QQVGA_LCM


// (5).config_account
custom\common\custom_config_account.c  g_config_account_gprs
//custom\common\
//custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h


// (6).userprofile
custom\common\userprofile_nvram_def.h
//custom\common\
//custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h



[1.5] _mtk_bat_
// (1).curKey
Save:set\Macro_Set_Path_mtk_{pro}.h  curKey
//	set proP1={cur}

// (2).bak
Save:set\Macro_Set_Path_mtk_{pro}.h  boardKey
make/{cur}_{GSM}.mak  BOARD_VER
//	set proC1={board}



[1.6] mtk_sbd
// auto set
//Save:set\Macro_Set_Path_mtk_{pro}.h 10
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




