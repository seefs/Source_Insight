
//Ä¿Â¼[Num][Ca]:
// 1. Ä£°å
Save:node\C\project\Macro_c_path.h \[1.1\] mtk_bak--------
Save:node\C\project\Macro_c_path.h \[1.2\] mtk_copy
Save:node\C\project\Macro_c_path.h \[1.3\] mtk_cfg--------nv, board
Save:node\C\project\Macro_c_path.h \[1.4\] mtk_other------rf
Save:node\C\project\Macro_c_path.h \[1.5\] 
Save:node\C\project\Macro_c_path.h \[1.6\] //mtk_sbd------
Save:node\C\project\Macro_c_path.h \[1.7\] 
Save:node\C\project\Macro_c_path.h \[1.8\] 
Save:node\C\project\Macro_c_path.h \[1.9\] 
Save:node\C\project\Macro_c_path.h \[1.10\] 
Save:node\C\project\Macro_c_path.h \[1.11\] 
Save:node\C\project\Macro_c_path.h \[1.12\] 
// 2. build cmd
Save:node\C\project\Macro_c_path.h \[2.1\] F55M_H639D_WELCOME
Save:node\C\project\Macro_c_path.h \[2.2\] K220_H660_TX_GSM
Save:node\C\project\Macro_c_path.h \[2.3\] K220_V35_WD
Save:node\C\project\Macro_c_path.h \[2.4\] 
Save:node\C\project\Macro_c_path.h \[2.5\] 
Save:node\C\project\Macro_c_path.h \[2.6\] 
Save:node\C\project\Macro_c_path.h \[2.7\] 
Save:node\C\project\Macro_c_path.h \[2.8\] 
Save:node\C\project\Macro_c_path.h \[2.9\] 
Save:node\C\project\Macro_c_path.h \[2.10\] 
Save:node\C\project\Macro_c_path.h \[2.11\] 
Save:node\C\project\Macro_c_path.h \[2.12\] 




[1.1] _mtk_bak_
// (1).curKey
// --images/audio/features/build
Save:set\Macro_Set_Path_mtk.h  curKey

// (2).bak
// A86
curKey = K220_A86

// Y01A
curKey = K220_Y01A_MGUO

// Y22
curKey = K220_Y22_MGUO
curKey = K220_Y22_JMZ
curKey = K220_Y22_JSZ
curKey = K220_Y22_MLL
curKey = K220_Y22_MOLOO

// Y22
//make K220_Y22_MGUO GSM new
//make K220_Y22_JMZ GSM new
//make K220_Y22_JSZ GSM new
//make K220_Y22_MLL GSM new
//make K220_Y22_MOLOO GSM new

// L12
curKey = K220_L12_MGUO
curKey = K220_L12_JMZ
curKey = K220_L12_JSZ
curKey = K220_L12_MLL
curKey = K220_L12_MOLOO

// Z97
curKey = K220_Z97_MGUO
curKey = K220_Z97_JMZ
curKey = K220_Z97_JSZ
curKey = K220_Z97_MLL
curKey = K220_Z97_MOLOO

// V35
curKey = K220_V97A_WD
curKey = K220_V88_WD
curKey = K220_V35_WD

// V35
make K220_V97A_WD GSM new
//make K220_V88_WD GSM new
make K220_V35_WD GSM new


// 61D
curKey = K220_H660_TX




[1.2] _mtk_copy_
// (1).mk/bld
Save:set\Macro_Set_Path_mtk.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD

// --mk
cp make/{old}_GSM.mak make/{new}_GSM.mak
// --bld
cp make/Verno_{old}.bld make/Verno_{new}.bld
//
cp make/K220_D183A_GSM.mak make/K220_A86_GSM.mak
cp make/Verno_K220_D183A.bld make/Verno_K220_A86.bld


// (2).images/audio/features
Save:set\Macro_Set_Path_mtk.h  images
plutommi\Customer\Images\{old}\
plutommi\Customer\Images\{new}\
images:\\

Save:set\Macro_Set_Path_mtk.h  audio
plutommi\Customer\AUDIO\{old}\
plutommi\Customer\AUDIO\{new}\
audio:\\

Save:set\Macro_Set_Path_mtk.h  features
plutommi\Customer\CustResource\{old}_MMI\
plutommi\Customer\CustResource\{new}_MMI\
features:\\



[1.3] _mtk_cfg_
// (1).nv
Save:set\Macro_Set_Path_mtk.h  nvKey
//
make/{cur}_GSM.mak  BOARD_VER_CUST_AUDIO
//	BOARD_VER_CUST_AUDIO = K220_Z97_AUDIO_BB
// 
//make\custom\custom.mak BOARD_VER_CUST_AUDIO
//custom\drv\audio\{nv}\
custom\audio\{nv}\
// 
//custom\common\PLUTO_MMI
//custom\meta\K220M_YGW_BB
// 


// (2).board
Save:set\Macro_Set_Path_mtk.h  boardKey
//
make/{cur}_GSM.mak  BOARD_VER
//	BOARD_VER = K220M_BH_BB
//
// --dws
//custom\codegen\{board}\
//custom\codegen\{board}\codegen_H660.dws
// --MemoryDevice
//custom\system\{board}\
//custom\system\{board}\custom_MemoryDevice.h  NOR_BOOTING_NAND_FS_SIZE




[1.4] _mtk_other_

// (3).rf
make/{cur}_GSM.mak  RF_MODULE
//	RF_MODULE = MT6261RF_HS8235L_CUSTOM



// (4).consistent
make/{cur}_GSM.mak  COM_DEFS_FOR
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





[1.5] 



[1.6] mtk_sbd
// auto set
//Save:set\Macro_Set_Path_mtk.h 10
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



[1.7] 





[1.8] 




[1.9] 




[1.10] 




[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 


[2.1] F55M_H639D_WELCOME

//
plutommi/Customer/Images/F55M_H639D_WELCOME/
//
make/F55M_H639D_WELCOME_GSM.mak
make F55M_H639D_WELCOME
make F55M_H639D_WELCOME GSM gen_modis
make F55M_H639D_WELCOME GSM remake plutommi
//
make/Verno_F55M_H639D_WELCOME.bld  VERNO



[2.2] K220_H660_TX_GSM

//
make/K220_H660_TX_GSM.mak  BOARD_VER
//
make K220_H660_TX
make K220_H660_TX GSM gen_modis



[2.3] K220_V35_WD
//
make/K220_V35_WD_GSM.mak  BOARD_VER


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


