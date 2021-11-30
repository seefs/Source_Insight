
//目录[Num][Ca]:
// 1. 模板
Save:node\C\project\Macro_c_path.h \[1.1\] mtk_copy
Save:node\C\project\Macro_c_path.h \[1.2\] mtk_xxx
Save:node\C\project\Macro_c_path.h \[1.3\] mtk_bak
Save:node\C\project\Macro_c_path.h \[1.4\] 
Save:node\C\project\Macro_c_path.h \[1.5\] Macro_Set
Save:node\C\project\Macro_c_path.h \[1.6\] //mtk_sbd
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




[1.1] _mtk_copy_
// auto set
Save:set\Macro_Set_Path_mtk.h  oldKey
//	oldKey = K220_V18_WD
//	newKey = K220_V35_WD

// test
cp make/{old}_GSM.mak make/{new}_GSM.mak
cp make/Verno_{old}.bld make/Verno_{new}.bld



[1.2] _mtk_xxx_
// auto set
Save:set\Macro_Set_Path_mtk.h  images

// --mk
make/{cur}.mak
make/Verno_{cur}.bld
//imagesPath = plutommi\Customer\Images\K220_L12_MGUO\
images:\
audioPath = plutommi\Customer\AUDIO\K220_L12_MGUO\
audio:\
//featuresPath = plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
features:\

//
images:\
audio:\
features:\






[1.3] _mtk_bak_
// auto set
Save:set\Macro_Set_Path_mtk.h  curKey

// Y01A
curKey = K220_Y01A_MGUO

// Y22
curKey = K220_Y22_MGUO

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

// other
curKey = K220_V97A_WD
curKey = K220_V88_WD
curKey = K220_V35_WD


// 61D
curKey = K220_H660_TX




[1.4] 




[1.5] Macro_Set

//当前项目
// 查看--选择历史项目列表: 
Save:set\
Save:set\Macro_Set.h  87



[1.6] mtk_sbd
// auto set
Save:set\Macro_Set_Path_mtk.h 10

// new
imagesPath = projects\M107\K220_L12_MGUO\Images\
images:\
audioPath = projects\M107\K220_L12_MGUO\AUDIO\PLUTO\
audio:\
resourcePath = projects\M107\K220_L12_MGUO\Resource\
resource:\
//featuresPath = plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
features:\


// old
imagesPath = plutommi\Customer\Images\M107\K220_L12_MGUO
images:\
audioPath = plutommi\Customer\Audio\M107\K220_L12_MGUO
audio:\
resourcePath = plutommi\Customer\CustResource\M107_MMI\K220_L12_MGUO
resource:\
//featuresPath = plutommi\Customer\CustResource\K220_L12_MGUO_MMI\
features:\



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


