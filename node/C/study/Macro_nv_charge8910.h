
//目录:
Save:node\C\study\Macro_nv_charge8910.h \[1.1\] 充电------------电流
Save:node\C\study\Macro_nv_charge8910.h \[1.2\] 充电/放电-------电压(修改放电n%)
Save:node\C\study\Macro_nv_charge8910.h \[1.3\] 低电电压
Save:node\C\study\Macro_nv_charge8910.h \[1.4\] charge_end_voltage 高压电池
Save:node\C\study\Macro_nv_charge8910.h \[1.5\] 
Save:node\C\study\Macro_nv_charge8910.h \[1.6\] 充电/放电-------107
Save:node\C\study\Macro_nv_charge8910.h \[1.7\] bat_capacity
Save:node\C\study\Macro_nv_charge8910.h \[1.8\] 
Save:node\C\study\Macro_nv_charge8910.h \[1.9\] 
Save:node\C\study\Macro_nv_charge8910.h \[1.10\] 
Save:node\C\study\Macro_nv_charge8910.h \[1.11\] 
Save:node\C\study\Macro_nv_charge8910.h \[1.12\] 




[1.1] 充电--电流
// 标准电流
nv:ProductionParam_uix8910.nvm  standard_current_type
//    ITEM_CONTENT = 0x1F4   // 500

// 非标准电流
nv:ProductionParam_uix8910.nvm  nonstandard_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// usb口电流
nv:ProductionParam_uix8910.nvm  usb_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// num:
//	450	1C2
//	500	1F4
//	600	258
//	700	2BC
//	630	276



[1.2] 充电/放电电压
// 充电截止电压
nv:ProductionParam_uix8910.nvm  charge_end_voltage
//    ITEM_CONTENT = 0x1112   // 4.37V

// recharge充电
nv:ProductionParam_uix8910.nvm  recharge_voltage
//    ITEM_CONTENT = 0x10CC   // 4.30V

// 充电safe电压
nv:ProductionParam_uix8910.nvm  bat_safety_vol
//    ITEM_CONTENT = 0x1112   // 4.37V


//# 充电时 电池%的换算 是依据chg_bat_tab
//#   8910没有用到chg_bat_tab
//nv:ProductionParam_uix8910.nvm  ^chg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V

// 放电时 电池%的换算 是依据dischg_bat_tab
nv:ProductionParam_uix8910.nvm  dischg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V






[1.3] 低电电压
// warn
nv:ProductionParam_uix8910.nvm  voltage_warning
//    ITEM_CONTENT = 0xE2D   // 3629

// shutdown
nv:ProductionParam_uix8910.nvm  voltage_shutdown
//    ITEM_CONTENT = 0xCE4   // 3300

//
// 0%
nv:ProductionParam_uix8910.nvm  dischg_bat_tab\[11\]
//    ITEM_CONTENT = 0xD3E



[1.4] charge_end_voltage 高压电池
//
//	测试了3个版本
//	charge_end_voltage设置4.29,  实际最大充电电压能到4.20
//	charge_end_voltage设置4.37,  实际最大充电电压能到4.28
//	charge_end_voltage设置4.434, 实际最大充电电压能到4.342

// ovp 6.5V
nv:ProductionParam_uix8910.nvm  ovp


[1.5] 




[1.6] 充电/放电-------107
//  production_param
prj:RDNV\production_param_T.xml
// OCV 

// 充电截止电压
prj:RDNV\
prj:RDNV\production_param_T.xml  charge_end_current
// 放电时
prj:RDNV\production_param_T.xml  dischg_bat_tab


### __charge__
// 107
// 充电满条件:
// Vbat>-VChargeEnd and Current<IChargeEnd
//		==>CHGMNG_CHARGING:
//		====>.module_state.bat_statistic_vol  //
//		====>.module_state.charging_current   //85mA
//		==>init
//		====>CHG_PHY_SetChargeEndVolt         //范围4.2V~4.5V
chip_drv\chip_module\charge\charge.c  _CHGMNG_VoltagetoPercentum
//   CHGMNG_STOP_VPROG  //85mA退出


// 8910
//ovp
chip_drv\chip_module\charge\uix8910\charge_uix8910.c  1732
//		====>.PULSE_PERIOD  //10次X(10秒~50秒)充电结束




[1.7] bat_capacity
// bat
chip_drv\chip_module\charge\uix8910\charge_uix8910.c  _CHGMNG_VoltagetoPercentum




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



