
//目录
Save:node\C\study\Macro_nv_8910.h \[1.1\] charge---------充电相关
Save:node\C\study\Macro_nv_8910.h \[1.2\] sim------------sim相关
Save:node\C\study\Macro_nv_8910.h \[1.3\] audio----------audio相关
Save:node\C\study\Macro_nv_8910.h \[1.4\] mmi------------common相关
Save:node\C\study\Macro_nv_8910.h \[1.5\] nv define
Save:node\C\study\Macro_nv_8910.h \[1.6\] nvTool
Save:node\C\study\Macro_nv_8910.h \[1.7\] apn
Save:node\C\study\Macro_nv_8910.h \[1.8\] 
Save:node\C\study\Macro_nv_8910.h \[1.9\] nv test
Save:node\C\study\Macro_nv_8910.h \[1.10\] Card-----------电子保卡
Save:node\C\study\Macro_nv_8910.h \[1.11\] thir_nv
Save:node\C\study\Macro_nv_8910.h \[1.12\] 
Save:node\C\study\Macro_nv_8910.h \[1.13\] 
Save:node\C\study\Macro_nv_8910.h \[1.14\] nand/nor
Save:node\C\study\Macro_nv_8910.h \[1.15\] test
Save:node\C\study\Macro_nv_8910.h \[1.16\] replace_nv--------
Save:node\C\study\Macro_nv_8910.h \[1.17\] hv_nv
Save:node\C\study\Macro_nv_8910.h \[1.18\] 
Save:node\C\study\Macro_nv_8910.h \[1.19\] 
Save:node\C\study\Macro_nv_8910.h \[1.20\] simulator
Save:node\C\study\Macro_nv_8910.h \[1.21\] 
Save:node\C\study\Macro_nv_8910.h \[1.22\] 

Save:Help\\DefaultFile\\Macro_Node_Num.h



[1.1] 充电
// 充电相关
Save:node\C\study\Macro_nv_charge8910.h


[1.2] sim
// sim相关
Save:node\C\study\Macro_nv_sim8910.h  __IMEI__
Save:node\C\study\Macro_nv_sim8910.h  __ECC__      # copy sim nv
Save:node\C\study\Macro_nv_sim8910.h  __BAND__
Save:node\C\study\Macro_nv_sim8910.h  __REG__
Save:node\C\study\Macro_nv_sim8910.h  __4G__
Save:node\C\study\Macro_nv_sim8910.h  __comData__  # 链路
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
Save:node\C\study\Macro_nv_audio8910.h  __PA8910__
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
// apn
Save:node\C\study\
Save:node\C\study\Macro_res_8910.h  __8910_apn__   # apn str
Save:node\C\study\Macro_res_8910.h  __107_apn__
Save:node\C\study\Macro_doc_apn107.h
Save:node\C\study\Macro_doc_apn8910.h
// t6b
//1. 滑动卡顿（T6-B内单已经解决）
//2. 台灣大物聯網卡無法上網使用（APN:twm.iot） 

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











[1.8] 











[1.9] nv test
// MMI_GetAllModuleSumNvSize(void)



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



[1.12] 



[1.13] 




[1.14] nand/nor
// 
// 107是nand，8910是nor 两种flash



[1.15] test
// usb--实际没有其他使用
app:eng\c\mmieng_main.c  MMIENG_NV_USB_TEST_SET_SETTING



[1.16] replace_nv

// 批量替换
Save:Help\Other\
// 替换电池曲线
Save:Help\Other\Macro_Help_replace.h
// 替换二合一NV
Save:Help\Other\Macro_Help_replace_2n1.h
Save:Help\Other\Macro_Help_replace_2n1_path.h

// tool
tool_mini:4_翻译字库\
tool_mini:4_翻译字库\sprd_nv_exist.xlsm

// path
HW:{project}\
HWNV:\



[1.17] hv_nv
//
nv:nv_type_uix8910.nvm  4938
可以通过查看
nv_type_uix8910.nvm里面4938行，
是否有    ITEM_NAME    = nv_ver_flag；如果没有的话，
可以先用老版本的，然后编译出一个版本后，把build下nv目录的复制回来，
覆盖一下所有文件，这样能确保是新版本nv工程。



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


