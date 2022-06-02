
基础路径设置:
//
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
//
//zmaeePath = prj:zmaee
//zmaeePath = prj:zmaee_128X128
zmaeePath = app:zmaee_128X128
zmaee:\\

//目录:
// 1. 
Save:node\C\study\Macro_zmaee_8910.h \[1.1\] menu----------删菜单
Save:node\C\study\Macro_zmaee_8910.h \[1.2\] SENSOR
Save:node\C\study\Macro_zmaee_8910.h \[1.3\] powerOff
Save:node\C\study\Macro_zmaee_8910.h \[1.4\] set---led
Save:node\C\study\Macro_zmaee_8910.h \[1.5\] make--res
Save:node\C\study\Macro_zmaee_8910.h \[1.6\] mulit
Save:node\C\study\Macro_zmaee_8910.h \[1.7\] 热插拨功能
Save:node\C\study\Macro_zmaee_8910.h \[1.8\] 耗电
Save:node\C\study\Macro_zmaee_8910.h \[1.9\] Torch
Save:node\C\study\Macro_zmaee_8910.h \[1.10\] 客户
Save:node\C\study\Macro_zmaee_8910.h \[1.11\] 表盘----------入口
Save:node\C\study\Macro_zmaee_8910.h \[1.12\] charge
Save:node\C\study\Macro_zmaee_8910.h \[1.13\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.14\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.15\] 
// 2. path
Save:node\C\study\Macro_zmaee_8910.h \[2.1\] patch
Save:node\C\study\Macro_zmaee_8910.h \[2.2\] fota
Save:node\C\study\Macro_zmaee_8910.h \[2.3\] fota url
Save:node\C\study\Macro_zmaee_8910.h \[2.4\] 
Save:node\C\study\Macro_zmaee_8910.h \[2.5\] 
Save:node\C\study\Macro_zmaee_8910.h \[2.6\] 
Save:node\C\study\Macro_zmaee_8910.h \[2.7\] 
Save:node\C\study\Macro_zmaee_8910.h \[2.8\] 



[1.1] menu
// xx.h
zmaee:c\zmaee_fixedapp.c  25
//#include "zmaee_6660.h" //心电


// app
zmaee:c\zmaee_fixedapp.c  ZMAEE_FIXEDRES^g_zmaee_fixedres
//	{6660, (const char*)sg_zmaee_6660_rom, sizeof(sg_zmaee_6660_rom)},//心电


// menu(enter)
zmaee:h\zmaee_watchos_menu.h  sg_zmaee_fwatch_shortcuts_ui



[1.2] SENSOR
// 心率
zmaee:h\zmaee_watchos_capabilities.h  HEART_RATE

// 体温
zmaee:h\zmaee_watchos_capabilities.h  TEMPERATURE

// 计步器
zmaee:h\zmaee_watchos_capabilities.h  PEDOMETER


// WIFI
zmaee:h\zmaee_watchos_capabilities.h  WIFI

// LED
zmaee:h\zmaee_watchos_capabilities.h  CAP_LED



[1.3] powerOff
//
app:zmaee\c\zmaee_porting.c  MMI_ZMAEE_MAIN_WIN_ID

//
app:zmaee\c\zmaee_watch.c  ZMAEE_IWatch_PowerOff


### 开机时按4秒12次，恢复出厂设置
//		==>HandleMSGKbd
source:mmi_kernel\source\c\mmk_kbd.c  BM_RED_KEY_RESET



[1.4] set--led
//
zmaee:c\zmaee_watch.c  int^ZMAEE_IWatch_EntrySystemEx
//		case ZMAEE_SYSTEM_EV_GET_LED_ON_OFF:  //获取LED开关(返回 1:开启0:关闭)
//			result = MMIAPISET_GetLedSwitchType()?1:0;
//			break;
//		case ZMAEE_SYSTEM_EV_SET_LED_ON_OFF: //设置LED开关(wParam:1:开启0:关闭)
//			SetLedSwitchType((wParam==1)?TRUE:FALSE);
//			break;


[1.5] make--res
//
make\resource_main\resource_main.mk  __ZMAEE_APP__
//	SOURCES += zmaee_128X128_mdu_def.h

source:resource\mmi_res_prj_def.h  __ZMAEE_APP__
//	RES_ADD_MODULE(MMI_MODULE_ZMAEE,"\\zmaee_128X128\\zmaee_128X128_mdu_def.h")

//
app:zmaee_128X128/h/zmaee_128X128_mdu_def.h

tools_mdu_def.h clock_mdu_def.h bt_mdu_def.h camera_mdu_def.h


[1.6] mulit
//
//	if(MMIAP_IsInZyVideoTalkMenu()){
//	  	MMIAP_ExitVideoTalking();
//	 } 



[1.7] 热插拨功能
//
SIM_PLUG_IN_SUPPORT



[1.8] 耗电
//
关于耗电目前是这么几步来排查：
1、不插卡的功情况，排除驱动干扰
2、去掌盟的功耗情况
3、加掌盟的，单2g/单4g网络情况



[1.9] Torch
//
zmaee:c/zmaee_watch.c  ZMAEETorchWinHandleMsg


zmaee:\\
zmaee:c/zmaee_watch.c  ZMAEETorchWinHandleMsg


[1.10] 客户
//
SPDE_PRJ\WA01U_Q3\               ----
SPDE_PRJ\WA01U_Q3M\              ----
SPDE_PRJ\WA01U_Q3Z\              ----
SPDE_PRJ\WA01U_Q8\               ----
// 
SPDE_PRJ\WA03U\                  ----
SPDE_PRJ\WA03U_H3\               ----
SPDE_PRJ\WA03U_T2\               ----
SPDE_PRJ\WA03U_T2_TICWATCH\      ----
SPDE_PRJ\WA03U_T2_TW\            ----
SPDE_PRJ\WA03U_T2_V2\            ----阿拉町
//
SPDE_PRJ\WA06U\                  ----
//
SPDE_PRJ\WA07U_F3Z\              ----华米
// 电池:630mA->400mA,TP,单摄,喇叭
SPDE_PRJ\WA07U_F3X\              ----华米
// 电池:400mA,TP,单摄,喇叭
SPDE_PRJ\WA07U_F8Z_QQVGA\        ----华米
// 电池待定:400mA
SPDE_PRJ\WA07U_F30Z\             ----华米
SPDE_PRJ\WA07U_F30ZL\            ----华米
// 电池:400mA->630mA,双摄
SPDE_PRJ\WA07U_F30ZL_AMT\        ----华米
// 电池:630mA,双摄
//
SPDE_PRJ\WA08U\                  ----华米--
// 电池:默认4.15v
SPDE_PRJ\WA08U_F20_QQVGA\        ----华米--F20
// 电池:默认4.15v
SPDE_PRJ\WA08U_X6C\              ----众智--X6C
// 电池:500mA
SPDE_PRJ\WA08U_ZZ_QQVGA\         ----众智--X6
// 电池:500mA?
// 
SPDE_PRJ\WA11U\                  ----华米
SPDE_PRJ\WA11U_C36W_QQVGA\       ----华米
// 电池:350mA,TP,摄像头
SPDE_PRJ\WA11U_F31W_QQVGA\       ----华米
// 电池:400mA,TP,摄像头


[1.11] 表盘
// style 3
Save:node\C\study\Macro_slide_8910.h  __style__

# zmaee--enter
//		==>HandleNormalStartupWindow
//		====>s_phone_startup_timer_id
//		====>PlayPowerOnOffMP4CallBack
//		======>MMIAPIIDLE_OpenIdleWin
//		========>ZMAEE_Start_Timer         # 1.ZMAEE
//		==========ZMAEE_Idel
//		========>IdleWin_HandleMsg         # 2.idle
app:idle\c\mainapp.c  MMIAPIIDLE_OpenIdleWin
//		========>ZMAEE_Create_Wnd

# zmaee--enter
//		==>ZMAEE_Create_Wnd
//		====>ZMAEE_WinMsgHandle
//		======>
//		========>ZMAEE_Create_Wnd
zmaee:c\zmaee_porting.c  ZMAEE_Create_Wnd

### --key--idle--long--cancel
//		======>case MSG_APP_CANCEL
//		======>case MSG_CTL_CANCEL
//		======>case MSG_KEYUP_CANCEL
//		======>case MSG_KEYLONG_CANCEL
zmaee:c\zmaee_porting.c  MMI_RESULT_E^ZMAEE_WinMsgHandle



[1.12] charge
//
zmaee:c\zmaee_watch.c  ZmaeeDrawChargingInfo
zmaee:c\zmaee_watch.c  3786
//	case MSG_FULL_PAINT:
//		ZmaeeDrawChargingInfo();
//
//
app:phone\c\mmiphone_charge.c  ZMAEE_Watch_OpenChargingWin



[1.13] 




[1.14] 




[1.15] 



[2.1] patch
// 90拍照
MS_Ref/source/isp_service/src/isp_service_uix8910.c
lib/UIS8910_240x320BAR_16MB_SS_DEBUG/img_proc.a
lib/UIS8910_240x320BAR_16MB_SS_USER/img_proc.a
lib/UIS8910_ROM_16MB_SS_DEBUG/img_proc.a
lib/UIS8910_ROM_16MB_SS_USER/img_proc.a

// 视频

// 支付宝

// 快速释放链路补丁



[2.2] fota
// addr
Third-party\rsfota\rsupdate\src\rs_ua_porting.c  rs_fota_addr

## fota--adups
//
SPDE_PRJ\S98T_FLP_E535_31\adups_define.h
//
fdl_bootloader/fota_bootloader/src/tf_display.c
//
//adups_net_start_get_new_version()
//// 下载进度
//ADUPS_get_download_percent()
//// 升级进度
//adups_patch_ratio
//// state//版本号
//GetMainStates
//// 
Third-party\adups\hal\src\adups_device.c  adups_get_device_version()


## fota--rs
// 1、下载检测：开机一分半，24小时周期
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_first_check_cycle()
//	return (90*1000);//量产出货阶段配置参数

Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_u32^rs_cb_get_auto_check_cycle()
//	return (24*60*60*1000);//量产出货阶段配置参数


// 2、安装检测：2-5点，30分钟周期，如果检测有，不继续检测
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  rs_bool^rs_sys_localtime_fit_for_install
Third-party\rsfota\rsdl\porting\UIS8910\src\rs_param.c  INSTALL_TIME_END_CLOCK
//	#define INSTALL_TIME_START_CLOCK  22 // 2
//	#define INSTALL_TIME_END_CLOCK  1823  //5
//	#define INSTALL_AUTO_CYCLE_TIME  (30*60*1000) //(2*60*60*1000) //2小时


// 3、安装时间：检测有包后，会在2-5点，随机一个时间



[2.3] fota url
// OTA后台
https://fota.redstone.net.cn/
//	用户名 bomengAdmin
//	密码 bomeng@2020w


//差分后台
http://diff.livedevice.com.cn/diffservice/atool/bomeng.html
//	用户名 bomengAdmin
//	密码 bomeng@2020w



[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 




