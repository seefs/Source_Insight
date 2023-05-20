
//目录
Save:node\C\study\Macro_nv_8910.h \[1.1\] charge---------充电相关
Save:node\C\study\Macro_nv_8910.h \[1.2\] sim------------sim相关
Save:node\C\study\Macro_nv_8910.h \[1.3\] audio----------audio相关
Save:node\C\study\Macro_nv_8910.h \[1.4\] mmi------------common相关
Save:node\C\study\Macro_nv_8910.h \[1.5\] nv define------tool/app相关
Save:node\C\study\Macro_nv_8910.h \[1.6\] nvTool
Save:node\C\study\Macro_nv_8910.h \[1.7\] apn
Save:node\C\study\Macro_nv_8910.h \[1.8\] hw_ver00-------单软多硬
Save:node\C\study\Macro_nv_8910.h \[1.9\] test
Save:node\C\study\Macro_nv_8910.h \[1.10\] Card-----------电子保卡
Save:node\C\study\Macro_nv_8910.h \[1.11\] thir_nv,107
Save:node\C\study\Macro_nv_8910.h \[1.12\] nv copy--8910
Save:node\C\study\Macro_nv_8910.h \[1.13\] 
Save:node\C\study\Macro_nv_8910.h \[1.14\] nand/nor
Save:node\C\study\Macro_nv_8910.h \[1.15\] 
Save:node\C\study\Macro_nv_8910.h \[1.16\] 
Save:node\C\study\Macro_nv_8910.h \[1.17\] 
Save:node\C\study\Macro_nv_8910.h \[1.18\] 
Save:node\C\study\Macro_nv_8910.h \[1.19\] 
Save:node\C\study\Macro_nv_8910.h \[1.20\] simulator
Save:node\C\study\Macro_nv_8910.h \[1.21\] 
Save:node\C\study\Macro_nv_8910.h \[1.22\] 



[1.1] 充电
// 充电相关
Save:node\C\study\Macro_nv_charge8910.h


[1.2] sim
// sim相关--107
Save:node\C\study\Macro_nv_sim107.h  __IMEI__
Save:node\C\study\Macro_nv_sim107.h  __ECC__      # copy sim nv
Save:node\C\study\Macro_nv_sim107.h  __BAND__
Save:node\C\study\Macro_nv_sim107.h  __REG__      # sim CQ list
Save:node\C\study\Macro_nv_sim107.h  __custom__
Save:node\C\study\Macro_nv_sim107.h  
// sim相关--8910
Save:node\C\study\Macro_nv_sim8910.h  __IMEI__
Save:node\C\study\Macro_nv_sim8910.h  __4G__
Save:node\C\study\Macro_nv_sim8910.h  __slot__  # 链路
Save:node\C\study\Macro_nv_sim8910.h  
Save:node\C\study\Macro_nv_sim8910.h  


### sim lock
// sim lock
common\export\inc\nv_item_id.h  NV_SIMLOCK_CFG_ID   5
// cfg
Save:node\C\study\Macro_nv_simlock107.h



[1.3] audio
// audio相关
Save:node\C\study\Macro_nv_audio8910.h
// PA,3IN1,2IN1
//  8910
Save:node\C\study\Macro_nv_audio8910.h  __PA8910__
Save:node\C\study\Macro_nv_audio8910.h  __CLASSAB__
//  107
Save:node\C\study\Macro_nv_audio8910.h  __PA107__
Save:node\C\study\Macro_nv_audio8910.h  __Copy107__  # copy audio nv


[1.4] mmi
// common--IMSI
source:mmi_app\common\h\mmi_nv.h MMINV_PHONE_IMSI
// IMSI--指令
//		==>HandleSimReadyInd
//		====>StoreSimReadyStatus  # 只是保存，没其他地方用
app:phone\c\mmiphone.c  MMINV_PHONE_IMSI
// 显示 IMSI--未使用
//		==>SpdeShowServingCellInfo
//		====>ShowServingUECapInfo / ShowServingCellInfo
app:eng\c\mmieng_win.c  pNetInfo.nwCapabilityLte


### IMSI
// 没找到 id=3200 的nv
PS\nv\internal\ps\common\NV_PARAM_TYPE_IMSI[1].xml  NV_PARAM_TYPE_IMSI1 id="2004"

### 定义 MMI_MODULE_COMMON
//		==>MACRO_RES_PRJ_TYPE
//		====>MACRO_RES_PRJ_MODULE    # 保留宏定义
//		======>RES_ADD_MODULE        # id=0
source:mmi_app\kernel\h\mmi_module.h  MMI_MODULE_COMMON


### nv list
//		==>MMI_RegModuleNv
//		====>.s_mmi_nv_len
MS_MMI_Main\source\mmi_app\kernel\c\mmi_modu_main.c  MMI_RegModuleNv
//		==>MMI_WriteNVItem
//		====>.true_item_id           # item_top项
//		======>MMI_UINV_USER_BASE    # 1个
// 最大项 500+2400=2900?
common\export\inc\nv_item_id.h  MN_NV_TD_USER_BASE   3200 ~ 3200+2800  # 107
common\export\inc\nv_item_id.h  MN_NV_USER_BASE      500  ~            # 8910
//		==>.MMI_NV_MAX_NUM                   # 3200+2800-end
//		====>.MMI_NV_USER_BASE               # 3200-start
//		======>.MN_NV_TD_USER_BASE           # 3200
//		====>.MAX_MMI_NV_USER_ITEM_NUM       # 2800



[1.5] nv define

// 1.nv id
common\export\inc\nv_item_id.h  NV_PROD_PARAM
//  NV_PROD_PARAM                     = 400,
nv:ProductionParam_uix8910.nvm  production_param_T
//
MS_Customize\export\inc\nv_productionparam_type.h  PROD_PARAM_tag
//  96bytes === 48 id


// tool/app相关
Save:node\C\study\Macro_nv_tool8910.h  __init__
// bt
Save:node\C\study\Macro_nv_tool8910.h  __bt__
Save:node\C\study\Macro_nv_tool8910.h  __bt_nv__
// gps
Save:node\C\study\Macro_nv_tool8910.h  __gps__
// env
Save:node\C\study\Macro_nv_tool8910.h  __env_nv__





[1.6] __nvTool__
### nvTool从手机导入NV
// MobileTester 进校准模式
// 1.打开 MobileTester，点connect
// 2.手机关机, 连接usb，等success后，点disconnect
// 3.打开 NVTool, set port 为 SPRD DIAL, 打开nv.xprj, 点导入




[1.7] apn
// apn-edit
Save:node\C\study\Macro_res_8910.h  __8910_apn__   # apn str
Save:node\C\study\Macro_res_8910.h  __107_apn__
//Save:node\C\study\Macro_doc_volte8910.h
// apn-list
Save:node\C\study\Macro_doc_apn107.h
Save:node\C\study\Macro_doc_apn107.h  __apnStr__
Save:node\C\study\Macro_doc_apn8910.h
//Save:node\C\study\Macro_doc_volte107.h
// t6b
// 台灣大物聯網卡無法上網使用（APN:twm.iot） 

//
虚拟运营商需要提供：
 1.MVNO Type。虚拟运营商类型。
 2.MVNO Value。虚拟运营商类型筛选值。
 3.42515的apn、name。
如：
 不填MVNO，无筛选条件
 类型 spn和spn的筛选值
 类型 gid和gid的筛选值
 类型 pnn和pnn的筛选值
 类型 imsi和imsi的筛选值
 类型 imsir和imsi的筛选范围，425150000000000~425159999999999

// mcc有排序
https://docs.routee.net/docs/list-of-mccmnc-codes
https://mcc-mnc-list.com/list
// 只有3个425
https://apn.how/israel/pelephone
// 官网+电话
https://wiki.droam.com/Israel#Annatel
// 设置apn 425-16
https://www.setapn.com/category/israel/
// 只有常用的--很卡
https://www.prepaidisraelisim.com/APN_Settings


[1.8] 单软多硬

### hw_nv 版本
//
nv:nv_type_uix8910.nvm  4938
可以通过查看
nv_type_uix8910.nvm里面4938行，
是否有    ITEM_NAME    = nv_ver_flag；如果没有的话，
可以先用老版本的，然后编译出一个版本后，把build下nv目录的复制回来，
覆盖一下所有文件，这样能确保是新版本nv工程。


### 8910单软多硬 (row = newV /oldV)
// prdt
prj:nvitem/ProductionParam_uix8910.nvm  1393 = 0x5 /0x0
prj:nvitem/ProductionParam_uix8910.nvm  1403 = 0x7 /0x0
// rf
prj:nvitem/RF_nv.nvm  42069 = 0xD013B / 0xD0199
prj:nvitem/RF_nv.nvm  42130 = 0xD013B / 0xD0199
// rename
prj:nvitem/audio_sc6531efm.nvm
prj:nvitem/audio_sc6531efm_AEC.nvm
prj:nvitem/
// ver
Custom_Copy.bat  project\config_nv
prj:nvitem/hw_ver00.nv
prj:nvitem/hw_ver01.nv
// ver--checkout
project\config_nv\8910FF\
// mk
prj:uis8910_phone_base_config.cfg  FORCECHANGE_SUPPORT  = TRUE
prj:uis8910_phone_user_base_config.cfg  FORCECHANGE_SUPPORT  = TRUE
//	FORCECHANGE_SUPPORT  = TRUE         # 单软多硬时开
//	DELTA_NV_CONFIG_PATH = delta_nv     # 默认开
//	DELTA_NV_BIN_SUPPORT = TRUE         # 默认开
//	DELTA_NV_PATITION_SUPPORT = TRUE    # 单软多硬时开

//
config:nv_adaptive_cfg.c  SCI_Get_PA_VERSION
//
//		==>NV_Force_Change_Enter
//		====>REFPARAM_SetFileVersion
//		==>NV_Force_Change_Enter
//		====>REFPARAM_GetFileVersion
MS_Customize\source\common\nv_hwversion_adpter.c  REFPARAM_GetFileVersion



### 107单软多硬
//
prj:project_{cur}.mk   HW_VERSION_ADAPTIVE_V2    = TRUE
prj:project_{cur}.mk   FORCECHANGE_SUPPORT       = TRUE #
prj:project_{cur}.mk   DELTA_NV_PATITION_SUPPORT = TRUE
prj:project_{cur}.mk   DELTA_NV_CONFIG_PATH      = ums9117
prj:project_{cur}.mk   DELTA_NV_BIN_SUPPORT      = TRUE
prj:project_{cur}.mk   DELTA_NV_OPERATOR         = TRUE
//prj:project_{cur}.mk   CONFIG_BOARD_ID

//
https://unisupport.unisoc.com/faq/getFaqDetialView?id=75469
//
// 1.deltaNV--base NV, 配置最多的band配置，选择为base NV
// 2.deltaNV命名依次为hw_ver00、hw_ver01~hw_ver07 
//   软件默认最多支持8种配置
// 3.差分配置，为hw_ver01
// 4.NV_calibration/校准参数，不允许导入到deltaNV; 将calibration项全部删除
// 5.nv_ver_flag=0,1
prj:ConfigNV/
prj:ConfigNV/hw_ver00.nv  nv_type\REF_PARAMETER\nv_ver_flag=0
prj:ConfigNV/hw_ver01.nv  nv_type\REF_PARAMETER\nv_ver_flag=1
prj:ConfigNV/hw_ver02.nv  nv_type\REF_PARAMETER\nv_ver_flag=1
...
// 6.单软多硬 deltaNV.bin制作
// 用NV tool或者NV editor, merge deltaNV, 路径 ConfigNV/

// copy
project\config_nv\ums9117\



[1.9] nv test
// MMI_GetAllModuleSumNvSize(void)

// usb--实际没有其他使用
app:eng\c\mmieng_main.c  MMIENG_NV_USB_TEST_SET_SETTING


[1.10] __Card__


### __Card__  电子保卡
// 8910 升级可保留
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 560
make/perl_script/UIX8910_128MBIT.xml  0x230
HW:{project}\ProductionParam_uix8910.nvm  guarantee  # 560

// 107--不可擦除
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_ID  # 610
common\export\inc\nv_item_id.h  NV_CUS_FIXNV_DATA_LEN # 8
make\nv_cus_config\nv_cus_config_MAIN\nv_cus_config_xml.mk   customer_card_id.xml
make\nv_cus_config\nv_cus_config_MAIN\NV_CUS_CONFIG_SETTINGS\customer_card_id.xml  # 610
HW:{project}\CustNV\customer_card_id.xml
//SPDE_PRJ\F76T_SUOAI_MID\CustNV\customer_card_id.xml  #默认不用加
// backup==>0
make\perl_script\
make\perl_script\UMS9117.xml  customer_card_id  # 0x262/610
make\perl_script\pac.pl       UMS9117.xml

// 107--升级会擦除, 格式化会擦除
common\export\inc\nv_item_id.h  NV_ELECTRIC_GUARANTEE_CARD  # 2851
make\app_main\app_main.mk  eleGuaranteeCard.xml
HW:{project}\RDNV\eleGuaranteeCard.xml  # 2851



[1.11] thir_nv
// 支付宝
make\\perl_script\\UMS9117.xml  Ali_DATA
common\export\inc\nv_item_id.h  Ali_DATA

// NV_ALIPAY_ID
make/perl_script/UIX8910_128MBITX64MBIT_new.xml  0x1B4

### _readme
// UMS9117
_readme.txt  UMS9117_NEW



[1.12] nv copy--8910
w22Path = E:\8910_w22base

### nvitem
// 常用NV
lib\modem\UIS8910_ROM_16MB_DS_USER\nvitem\
lib\modem\UIS8910_ROM_16MB_DS_USER\nvitem\RF_nv.nvm


### nv_parameters
// 缺少copy, 不用copy, 默认就是最新的
// --暂时不用批量加上 nv_ver_flag
w22:common\nv_parameters\nv_type\
w22:common\nv_parameters\nv_type\nv_type_uix8910.nvm
//
w22:common\nv_parameters\ProductionParam\
w22:common\nv_parameters\ProductionParam\ProductionParam_uix8910.nvm
// 缺少copy, 5个NV
w22:common\nv_parameters\nv_variant\
w22:common\nv_parameters\nv_variant\NV_VARIANT_CONFIG_APP.nvm

// 缺少copy
w22:common\nv_parameters\ProductionParam\
w22:common\nv_parameters\ProductionParam\license.nvm


### hw_ver00
// 默认flag:0-1-1-1-1-1-1-1
w22:project\config_nv\8910FF\
w22:project\config_nv\8910FF\hw_ver00.nv


### base_nv
// 缺少copy, 未合并
w22:BASE\base_nv\BaseParam\
w22:BASE\base_nv\BaseParam\BaseParam.nvm

// 缺少copy
w22:BASE\base_nv\CalibrationParam\
w22:BASE\base_nv\CalibrationParam\Calibrationparam_sc6531efm_AB_7182.nvm

// 缺少copy
w22:BASE\base_nv\DownloadParam\
w22:BASE\base_nv\DownloadParam\DownloadParam_sc6531efm_AB_7182.nvm

// 缺少copy, 未合并
w22:BASE\base_nv\Classmark\
w22:BASE\base_nv\Classmark\nv_classmark.nvm





[1.13] 




[1.14] nand/nor
// 
// 107是nand，8910是nor 两种flash



[1.15] 



[1.16] 



[1.17] 



[1.18] 



[1.19] 



[1.20] simulator
//
source:winsimulator_tp/win_platform/SIM_Set_Files/
source:winsimulator_tp/win_platform/SIM_Set_Files/SIM1/EF_LOCI.inf


[1.21] 


[1.22] 


[1.23] 


[1.24] 


[1.25] 


[1.26] 


