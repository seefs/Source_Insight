
//目录:
Save:node\C\study\Macro_nv_sim8910.h \[1.1\] IMEI
Save:node\C\study\Macro_nv_sim8910.h \[1.2\] //ECC, nv copy
Save:node\C\study\Macro_nv_sim8910.h \[1.3\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.4\] //BAND
Save:node\C\study\Macro_nv_sim8910.h \[1.5\] //REG
Save:node\C\study\Macro_nv_sim8910.h \[1.6\] 4G
Save:node\C\study\Macro_nv_sim8910.h \[1.7\] comData
Save:node\C\study\Macro_nv_sim8910.h \[1.8\] slot  链路
Save:node\C\study\Macro_nv_sim8910.h \[1.9\] sim
Save:node\C\study\Macro_nv_sim8910.h \[1.10\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.11\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.12\] 


// --设置项目
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
nv:\\


[1.1] __IMEI__
// nv id-imei
common\export\inc\nv_item_id.h  NV_IMEI   5
common\export\inc\nv_item_id.h  NV_IMEI1  377
common\export\inc\nv_item_id.h  NV_IMEI2  390
common\export\inc\nv_item_id.h  NV_IMEI3
// 修改IMEI1~IMEI4
common\nv_parameters\nv_type\nv_type_uix8910.nvm  NV_IMEI
build\{cur}_builddir\..\nv\nvitem\nv_type_uix8910.nvm

// imei-3A25720371833604
// nv---A352273017386340


// nv覆盖
make\nv_parameter\config_info.nv  com_debug


[1.2] 
### *.nvm
//
lib\modem\{ROM}\nvitem\


### ProductionParam_uix8910.nvm
//
batNv:\\




[1.3] 


[1.4] 




[1.5] 



[1.6] __4G__
//	value="0x0"
//	value="0x04"  即为4G only
lib\modem\{ROM}\nvitem\
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   defaultRat
lib\modem\{ROM1}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   defaultRat
//
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   defaultRat


//
nv:modem_nv_cat1bis_uix8910_static.nvm   defaultRat
nv:modem_nv_cat1bis_uix8910_card2_static.nvm   defaultRat


// SPCSS01123748/SPCSS00883216
//同时贵司需要关注MMI/AT中可能存在的修改配置的菜单/命令
// SPCSS01134008

[1.7] 
nv:\\
HW:\
// sim
HW:{project}\nv_type_uix8910.nvm  sim_card_number
HW:WA22U_W48E\nv_type_uix8910.nvm  sim_card_number
//	0x1

//
HW:{project}\nv_type_uix8910.nvm  com_data
//	0xFF


nv:nv_type_uix8910.nvm  3651



[1.8] __slot__

// static-->sim_slot_switch-->reserved[0]
//  0x0 ==> 0x1

### w21
//HW:{project}\modem_nv_cat1bis_uix8910_static.nvm  9166
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   9166

### w22
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   9186
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   sim_slot_switch,reserved[0]
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   9186
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   sim_slot_switch,reserved[0]

//   0x0: 链路快速释放
//   0x1: 默认
//
//修改链路保持时间 (8910_基站交互时间
//1、长连接时，链路需要保持10秒，是协议的要求。移动也一直在查不满足协议的情况；
//2、非正式的方法，改小链路保持秒数的nv值，用来减少功耗。
//方法1：通过AT指令修改  at+rrcrel=数字（0-20）  步距是0.5秒
//方法2：通过修改默认nv值来改小秒数，modem_nv_cat1bis_uix8910_static.nvm里面的一个值，改为0-20某个数
//3、多测试，可能会影响到呼通率，特别是动态环境下，比如路测这种。




[1.9] __sim__

### sim反--8910
nv:\\
nv:nv_type_uix8910.nvm  sim_slot_cfg
build\{cur}_builddir\img\nvitem\
build\{cur}_builddir\img\nvitem\nv_type_uix8910.nvm  sim_slot_cfg
// 0x10203, 0x1000302
common\nv_parameters\nv_type\nv_type_uix8910.nvm  sim_slot_cfg

// 8910的CP侧有个配置文件 target.def。里面有个宏用来控制卡序，正常的卡序是1 2，如果要对调卡序，就改成2 1。
// 原来这个配置是开放给客户的，客户可调的，由于现在CP只开放bin，这个控制看不到。如果生成BIN后，这个配置就不可变了。
target.def


### sim反--107
nv:\\
PS/NV/config/mn.nv  sim_slot_cfg
// 0x10203, 0x1000203
PS\nv\export\ps\mn\NV_PARAM_TYPE_EXPORT_MN_CUSTOMER_SETTINGS.xml  sim_slot_cfg


### sim反--6531
//
nv:nv_type_4band.nvm  sim_slot_cfg
// 0x10203, 0x1000203
common\nv_parameters\nv_type\nv_type_4band.nvm  sim_slot_cfg



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



