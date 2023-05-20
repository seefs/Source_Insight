
//目录
// 项目选择 编译
Save:node\C\project\Macro_Note_8910.h \[1.1\] 编译指令
Save:node\C\project\Macro_Note_8910.h \[1.2\] gpio_cfg
Save:node\C\project\Macro_Note_8910.h \[1.3\] KEY
Save:node\C\project\Macro_Note_8910.h \[1.4\] LCD
Save:node\C\project\Macro_Note_8910.h \[1.5\] CAM
Save:node\C\project\Macro_Note_8910.h \[1.6\] TP
Save:node\C\project\Macro_Note_8910.h \[1.7\] ECG
Save:node\C\project\Macro_Note_8910.h \[1.8\] hr
Save:node\C\project\Macro_Note_8910.h \[1.9\] breathled
Save:node\C\project\Macro_Note_8910.h \[1.10\] motionsensor
Save:node\C\project\Macro_Note_8910.h \[1.11\] 
Save:node\C\project\Macro_Note_8910.h \[1.12\] 
// 设置
Save:node\C\project\Macro_Note_8910.h \[2.1\] 
Save:node\C\project\Macro_Note_8910.h \[2.2\] 颜色---------common_mdu_def.h
Save:node\C\project\Macro_Note_8910.h \[2.3\] 配置
Save:node\C\project\Macro_Note_8910.h \[2.4\] fm
Save:node\C\project\Macro_Note_8910.h \[2.5\] 语言, 字体----mmi_custom_define.h
Save:node\C\project\Macro_Note_8910.h \[2.6\] 情景模式 音频参数:
Save:node\C\project\Macro_Note_8910.h \[2.7\] 手电筒
Save:node\C\project\Macro_Note_8910.h \[2.8\] U盘-----------mmisrvfmm_export.h 
Save:node\C\project\Macro_Note_8910.h \[2.9\] 版本号--------version_software_mocor.h
Save:node\C\project\Macro_Note_8910.h \[2.10\] 型号---------bt_cfg.h
Save:node\C\project\Macro_Note_8910.h \[2.11\] 屏幕，时间---mmidisplay_data.h
Save:node\C\project\Macro_Note_8910.h \[2.12\] 指令---------mmiset_security.h
Save:node\C\project\Macro_Note_8910.h \[2.13\] 音量---------mmienvset_internal.h
Save:node\C\project\Macro_Note_8910.h \[2.14\] 电池---------
Save:node\C\project\Macro_Note_8910.h \[2.15\] trace
Save:node\C\project\Macro_Note_8910.h \[2.16\] 扩展项目:
Save:node\C\project\Macro_Note_8910.h \[2.17\] Build问题
Save:node\C\project\Macro_Note_8910.h \[2.18\] 
Save:node\C\project\Macro_Note_8910.h \[2.19\] 
Save:node\C\project\Macro_Note_8910.h \[2.20\] 
 



[1.1] 编译指令:
//
Save:node\C\cfg\
Save:node\C\cfg\Macro_c_build.h  __8910__


// --set
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey


[1.2] gpio_cfg
// mk
prj:project_{cur}.mk   DRIVER_CONFIG_

// --config=wa03u_v2
Save:set\
Save:set\Macro_Set_Path_sprd_{pro}.h  configKey
// --config
make\custom_drv\custom_drv.mk  DRIVER_CONFIG_

// 8910
config:\
config:pinmap_cfg_{config}.c
config:gpio_cfg_{config}.c
// 107
config:pinmap_{config}_cfg.c
config:gpio_{config}_cfg.c


### 双摄像头
// gpio +
// {114, 0, PM_OUTPUT, PM_INVALID_INT},// DUAL CAM
//  {GPIO_PROD_SENSOR_PWDN_FRONT_ID, GPIO_PROD_TYPE_BB0, GPIO_PROD_HIGH_LEVEL,114,     PNULL },

### 抓串口log
//  ==>mk:
prj:project_{cur}.mk   UART_LOG_NOT_SUPPORT = 关
prj:project_{cur}.mk   UBLOX_GPS_SUPPORT = 关
//  ==>pinmap:
//  ====>默认是GPIO，改成跟上面一样uart2模式
config:pinmap_cfg_{config}.c   PIN_GPIO_20_CFG_REG
config:pinmap_cfg_{config}.c   PIN_GPIO_21_CFG_REG
//  ====>pm_gpio_default_map
//   {21  //这两个注释掉
//   {20  //这两个注释掉
//  ====>默认uart2给GPS用了，也得还原
config:pinmap_cfg_{config}.c   PIN_GPIO_4_CFG_REG
config:pinmap_cfg_{config}.c   PIN_GPIO_5_CFG_REG
//  ==>gpio:
//  ====>改成:GPIO_PROD_NUM_INVALID
//   GPIO_PROD_HEART_LED_ID
//   GPIO_PROD_TEMP_INT_ID
config:gpio_cfg_{config}.c  GPIO_PROD_HEART_LED_ID
//  ==>波特率默认是921600，如果不行就改成115200，115200丢log有点多
MS_Ref\source\base\src\init.c   BAUD_921600



[1.3] KEY
// mk
prj:project_{cur}.mk   X225U_KEYMAP_STYLE
prj:project_{cur}.mk   MMI_MULTI_GREEN_KEY =DUAL 绿键


// --key--按键丝印
//  ==>SCI_VK_HOME
config:keymap_cfg.c  keymap\[\]
config:keymap_cfg.c  X225U_KEYMAP_STYLE
config:keymap_cfg.c  SCI_VK_CALENDER


### key (im)
// 详细键值
Save:node\C\study\Macro_im_8910.h  __keymap__
// --sms/im/input
Save:node\C\study\Macro_im_8910.h  __LONG_0__
Save:node\C\study\Macro_im_8910.h  __simulator__
Save:node\C\study\Macro_im_8910.h  __menuInput__
// --abc输入法
app:im\c\mmiim_sp_ml9key_data.c  s_key_table_spanish_lower

// --key--虚拟值转实际值
Save:node\C\study\Macro_doc_8910key.h  __keyKbd__
// --key--发送信号
Save:node\C\study\Macro_doc_8910key.h  __keySig__
// --key--保存状态
Save:node\C\study\Macro_doc_8910key.h  __keyStatus__
// --key--点亮屏/侧键
Save:node\C\study\Macro_doc_8910key.h  __keySlide__
// --key--SOS
Save:node\C\study\Macro_doc_8910key.h  __keySOS__




[1.4] LCD
// 8910
prj:{cfg}.cfg   SUBLCD_DEV_SIZE  = 128X160
prj:{cfg}.cfg   SUBLCD_SIZE      = 128X160
prj:{cfg}.cfg   MAINLCD_LOGIC_ANGLE = 90
// 107
//prj:project_{cur}.mk   ST7789
//prj:project_{cur}.mk   ST7735S
//prj:project_{cur}.mk   _USE_3_LINE_2_DATD_ = FALSE  #no use
prj:project_{cur}.mk   MAINLCM_INTERFACE = SPI    # LCM or SPI
prj:project_{cur}.mk   SUBLCM_INTERFACE  = SPI    # LCM or SPI
prj:project_{cur}.mk   LCD_FMARK_NOT_SUPPORT      # te
prj:project_{cur}.mk   MAINLCD_LOGIC_ANGLE = 90   # 90度


// 三线一通道
prj:{cfg}.cfg   LCD_SPI = 3WIRE_9BIT_1DATA
config:lcm_cfg_info.c  USE_3_LINE_LCD
driver:lcd\tft_ST7735S.c  USE_3_LINE_LCD
// 三线二通道
prj:{cfg}.cfg   LCD_SPI = 3WIRE_9BIT_2DATA
prj:{cfg}.cfg   SPI_DATA2_SEL = CD
config:lcm_cfg_info.c  TWO_DATA_LINE_LCD
driver:lcd\tft_ST7735S.c  TWO_DATA_LINE_LCD
// 四线一通道
prj:{cfg}.cfg   LCD_SPI = 4WIRE_8BIT_1DATA
config:lcm_cfg_info.c  ONE_DATA_LINE_LCD
driver:lcd\tft_ST7735S.c  TWO_DATA_LINE_LCD
// 四线二通道
prj:{cfg}.cfg   LCD_SPI = 4WIRE_8BIT_2DATA
config:lcm_cfg_info.c  TWO_DATA_LINE_LCD
driver:lcd\tft_ST7735S.c  ONE_DATA_LINE_LCD

//
driver:lcd/
driver:lcd/tft_ST7789.c
driver:lcd/tft_st7789v2.c
driver:lcd/tft_GC9106.c
driver:lcd/tft_ILI9342.c
driver:lcd/tft_GC9307.c
driver:lcd/tft_GC9308.c
driver:lcd/tft_GC9107.c


// 新屏
//  ==>修改画屏方向: (0x36)0xC8->0xD8
make\custom_drv\custom_drv.mk  tft_ST7735S.c

// te
MS_Customize\source\product\config\
MS_Customize\source\product\config\ums9117_barphone\lcm_cfg_info.c LCD_DRV_ID_ST7735S
MS_Customize\source\product\config\uis8910ff_refphone\lcm_cfg_info.c LCD_DRV_ID_ST7735S
// lcd-id
MS_Customize\export\inc\lcm_cfg.h  LCD_DRV_ID_ST7735S
// (107)
MS_Customize/source/common/lcm_prod.c  ST7735S
//
driver:lcd/tft_ST7735S.c


### 其他调试
// 修改按键黑点：
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
driver:lcd\tft_GC9300.c GC9300_Ex(void)

// 屏亮度/背光电流:
// --set
Save:node\C\cfg\Macro_c_path_sprd.h  __ANALOG__
chip_drv\chip_module\analog\
chip_drv\chip_module\analog\{analog}\{analog_phy}.c  s_ana_bln_sw_tab     # 背光亮度
chip_drv\chip_module\analog\{analog}\{analog_phy}.c  BLTC_LCM_CURRENT_V
chip_drv\chip_module\analog\{analog}\{analog_phy}.c  s_ana_dev_tab
// 背景电流 = BLTC_LCM_CURRENT_V
chip_drv\chip_module\analog\analog_phy.h  LCM_V_SW


// --刷新帧率
//  ==>
//  ====>divider =8, spi就变成24M了
//  ======>spi_clk=200M/8=25M, 200M/8=25M, 200M/6=33M, 200M/5=40M
chip_drv\chip_module\lcdc\uix8910\hal_gouda.c  uint32^hal_GoudaUpdateSerialTiming
// --双帧率
prj:project_{cur}.mk   LCD_DUAL_SPI_FREQ_SUPPORT
//  ==>
MS_Ref\source\lcd\src\lcd_uix8910.c  LCD_DUAL_SPI_FREQ_SUPPORT

//复位
hal_GoudatResetLcdPin


// lcd_id
//  ==>_LCM_DevIdIdentify
//  ====>LCM_GetCfgInfo             # 注释掉if打印ID
//  ======>.s_main_lcm_cfg_tab
//  ====>.lcm_dev_id
//  ======>LCD_DRV_ID_ST7789V2
//  ========>.lcm_driver_IC         # test str
//  ====>注释掉if打印ID
//  ==>EngShowHWVersionWinHandleMsg
//  ====>LCD_GetDriverIC
//  ======>LCM_IC_GetInfo           # 增加 default-sprintf



[1.5] CAM
// 8910
prj:{cfg}.cfg  CAMERA_SUPPORT     = TRUE
prj:{cfg}.cfg  DC_FLASH_SUPPORT   = TRUE
// 107
prj:project_{cur}.mk CAMERA_SUPPORT   = TRUE
prj:project_{cur}.mk DC_FLASH_SUPPORT = TRUE
prj:{cfg}.cfg  DC_FLASH_SUPPORT   = TRUE
// 7701
prj:project_{cur}.mk SENSOR_CHIP


### 双摄像头(默认单)：
//prj:project_{cur}.mk SBD_DUAL_CAMERA_SUPPORT
prj:project_{cur}.mk _CAMER


### 新CAM
// 1.mk
make\custom_drv\custom_drv.mk  sensor_gc032A.c
// 2.arr (要加 extern引用)
config:sensor_cfg.c  main_sensor_infor_tab
config:sensor_cfg.c  sub_sensor_infor_tab
// 3.c文件
//  ==>方向
//  ==>修改亮度: {0x92, 0x50}
driver:dc/
driver:dc/sensor_gc032A.c
driver:dc/sensor_gc6153.c
driver:dc/sensor_gc6133.c  Set_GC6133_Preview_Mode
driver:dc/sensor_bf30a2.c  BF30A2_set_preview_mode
driver:dc/sensor_bf20a6.c
//  ==>ID
driver:dc/sensor_gc6133.c  _Identify


### 其他调试
// ==>通过ID区分8W/30w
Save:node\C\study\Macro_doc_cam8910.h   __Ref__
// ==>配置分辨统治
//Save:node\C\study\Macro_doc_cam8910.h   __init__
Save:node\C\study\Macro_doc_cam8910.h   __cfg__
// ==>预览 保存
//Save:node\C\study\Macro_doc_cam8910.h   __Preview__
//Save:node\C\study\Macro_doc_cam8910.h   __snapshot__
//Save:node\C\study\Macro_doc_cam8910.h   __video__


// 输出的接口，
dvp spi mipi这种。


// 5.闪光灯电流
// 60mA
chip_drv\chip_plf\uix8910\uix8910_reg_analog.h  ANA_FLASH_VALUE



[1.6] TP
// BL6133  CST816S
project_UIS8910_ROM_16MB_SS_WA07U_USER.mk  CAP_TP_SUPPORT
uis8910_phone_user_base_config.cfg  CAP_TP_SUPPORT
//
SPDE_PRJ\WA07U\project_UIS8910_ROM_16MB_SS_WA07U_USER.mk  CAP_TP_SUPPORT
SPDE_PRJ\WA07U\uis8910_phone_user_base_config.cfg  CAP_TP_SUPPORT
//
// tp--cst816s
driver:tp\src\capacitive_hynitron_cst816s_update.h  TOUCH_KEYPAD_NOT_SUPPORT
driver:tp\src\tp_cst816s.c  capacitive_hynitron
// tp--bl6133
driver:tp\src\tp_bl6133.c  TOUCH_KEYPAD_NOT_SUPPORT
driver:tp\src\tp_bl6133.c  tp_bl6133_fw

// tp--cancel
driver:tp\src\
driver:tp\src\tp_cst816s.c  TOUCH_KEYPAD_NOT_SUPPORT
driver:tp\src\tp_bl6133.c  TOUCH_KEYPAD_NOT_SUPPORT

// tp
make\custom_drv\custom_drv.mk  CAP_TP_SUPPORT

// tp--init
//  ==>BL6133_Initial
//  ====>bl_get_chip_id
//  ======>
//  ======>bl_update_fw
//  ========>bl_update_fw_for_self_ctp
//  ==========>bl_download_fw
//  ============>bl_write_flash
//  ======>bl_i2c_transfer:i2c transfer error___
//  ========>btl fw update start bl_download_fw error retry=2

// 强制升级
driver:tp\src\tp_bl6133.c  isBlank^=^1
// 升级OK log: 前后值都是0xXXXX
//0101-000013-00924: [BL6133] btl fw update end,fw checksum = 0x76f2,fw_bin_checksum =0x76f2


[1.7] ECG
// 

 
[1.8] HEART_RATE
// hr
make\custom_drv\custom_drv.mk  HEART_RATE_SENSOR_SUPPORT
//
sensors:bd1662\
sensors:dummy_hr\


[1.9] breathled
sensors:breathled\led_et6037y.c
sensors:breathled\led_AW2013.c


[1.10] motionsensor
// 计步
// --w03型号: QMA7981，只要CA7的 都是7981
// --w48型号: QMA6100-TR，RP1 RP2 是6100P，RB1 RB2 是6100
prj:{cfg}.cfg         MOTION_SENSOR_TYPE = QMA7981
// 
driver:motionsensor\
driver:motionsensor\accelerometer\msensor_qmaX981.c

//
make\custom_drv\custom_drv.mk  QMA7981


[1.11] 


[1.12] 



[2.1] 






[2.2] 颜色---------common_mdu_def.h
// 新加 COLOR_RES_CUSTOM_BG
ms_mmi_main/source/mmi_app/common/h/common_mdu_def.h       COLOR_RES_PUBWIN_BG
app:theme\c\mmi_theme.c     COLOR_RES_PUBWIN_BG
app:theme\c\mmi_theme.c MMI_THEME_PUBWIN_BG

//
source:resource\Common\RING\




[2.3] 配置

// 频段-用mk/nv
Save:node\C\study\Macro_nv_sim8910.h  __IMEI__
Save:node\C\study\Macro_nv_sim107.h   __BAND__

// 不带马达：
//prj:project_{cur}.mk __HHT_REMOVE_VIBRA__ =TRUE
prj:project_{cur}.mk  ELT_NO_VIBRATOR
prj:project_{cur}.mk  VIRTUAL_VIBRATE_FUNC
prj:project_{cur}.mk  REMOVE_VIBRA_AND_RING  # tts
prj:project_{cur}.mk  VIBRATE_DRIVER_VOLT_3_0V
// 107
prj:project_{cur}.mk


// 双卡：
prj:project_{cur}.mk MMI_MULTI_SIM_SYS = DUAL   //单卡只改这个
prj:project_{cur}.mk MULTI_SIM_SYS = DUAL
// nv_type_4band.nvm 0x10203, 0x1000203,    卡反
// 单卡翻译：
//TXT_SIM_SEL_SIM1--pb --  SIM1
//SIM1 network account


// 双听筒
prj:project_{cur}.mk  DUAL_RECEIVER_SWITCH_SUPPORT



[2.4] __fm__
// FM：
//prj:project_{cur}.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
//prj:project_{cur}.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
//prj:project_{cur}.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
//prj:project_{cur}.mk SBD_FM_THRESHOLD_TYPE1=TRUE     #带上搜的台多一点
//prj:project_{cur}.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE  #外放时打开

// 107
prj:project_{cur}.mk  FM_SUPPORT = TRUE
prj:project_{cur}.mk  FM_S_ANT_SUPPORT = TRUE
prj:project_{cur}.mk  FM_VBC   = TRUE    # 不用关
// 107 插入耳机走长天线，拔出耳机 走短天线
prj:project_{cur}.mk  MMI_FM_HEADSET_USE_SHORT_ANT
// 8910
prj:{cfg}.cfg         FM_SUPPORT       = SPRD_V0    /  NONE
prj:{cfg}.cfg         FM_VBC_EQ        = TRUE
prj:{cfg}.cfg         FM_VBC           = TRUE
prj:project_{cur}.mk  FM_S_ANT_SUPPORT = TRUE

// fm--ui
prj:project_{cur}.mk  MMI_FM_NEW_STYLE  = TRUE
prj:project_{cur}.mk  MMI_FM_MENU_SLIM_STYLE  = TRUE

// 8910 未开
make\app_main\app_macro.mk  MMI_FM_NEED_HEADSET


 
[2.5] 语言, 字体---mmi_custom_define.h 
// font-8910/107
source:mmi_service\export\inc\mmi_custom_define.h  MMI_DEFAULT_BIG_FONT
// font-6531
MS_MMI\source\mmi_app\custom\h\mmi_custom_define.h MMI_DEFAULT_BIG_FONT
//  ==>
prj:project_{pjk1}.mk  SPRDEPHONE_PROJECT_ID  = SC6531_RX5106
prj:project_{pjk1}.mk  FLASH_SIZE             = 32MBIT
//  ====>
MS_MMI\source\mmi_kernel\include\MMI_features.h  SPRDEPHONE_PROJECT_ID_SC6531_RX5106
//  ====>
MS_MMI\source\mmi_kernel\include\mmi_features_rx5106.h  _FONT_


// 默认语言:
source:mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_LANGUAGE
// sms--sim--num
source:mmi_service\export\inc\mmi_custom_define.h  MMISMS_MAX_SYS_SIM_SMS_NUM

// MULTIM
key:MULTIM,file:mmiset_export.h

// KEYTABLE
key:KEYTABLE,file:mmiim_sp_ml9key_data.c

// 亮度
source:mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_CONTRAST

###
//
Save:node\C\study\Macro_res_8910.h __lang__




[2.6] 音频

// 二合一/三合一
Save:node\C\study\Macro_nv_audio8910.h  __107_2N1__
Save:node\C\study\Macro_nv_audio8910.h  __8910_2N1__
Save:node\C\study\Macro_nv_audio8910.h  __8910_3N1__
Save:node\C\study\Macro_nv_audio6531E.h  __6531_K__




[2.7] 手电筒
// 手电筒
prj:project_{cur}.mk  TORCH_SUPPORT = TRUE
prj:project_{cur}.mk  MMI_MENU_TORCH_SUPPORT = TRUE
prj:project_{cur}.mk  ENG_MANU_TORCH = TRUE

// 闪光灯
prj:project_{cur}.mk  DC_FLASH_SUPPORT = TRUE
prj:project_{cur}.mk  CAMERA_FLASH_AS_TORCH = TRUE


[2.8] 
// U盘
prj:project_{cur}.mk UMEM_PRTITION _MICRO
// path 
//  MMIMULTIM_DIR_MUSIC
source:mmi_service\export\inc\mmisrvfmm_export.h 




[2.9] 



[2.10] 型号---------bt_cfg.h

 型号--MSD, 翻译：
prj:project_{cur}.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

// USB
driver:ubot\ubot_cfg_info.c  s_UBOT_StrProduct

// UDISK
app:udisk\h\mmisd_export.h  CUST_CFG_UDISK_DEFAULT_NAME

// UA
//key:UA,file:mmibrowser_wintable.c

// FMM
//key:FMM,file:mmisd_export.h

// DEVICE
//key:DEVICE,file:bt_cfg.h

// BT
MS_Customize\export\inc\bt_cfg.h  BT_DEFAULT_LOCAL_NAME
MS_Customize\export\inc\bt_cfg.h  BLUETOOTH_NAME_FLP_E535



[2.11] 屏幕，时间---------mmidisplay_data.h

// TITLE
app:theme\h\mmidisplay_data.h  MMI_TITLE_TEXT_FONT

// softkey
app:theme\h\mmidisplay_data.h  MMI_FULLSCREEN_SOFTKEY_TEXT_FONT

// 背光亮度
chip_drv/chip_module/analog/sr1131/analog_phy_sr1131.c

// time--背光灯
source:mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_BACKLIGHT_TIME
// time--按键灯
source:mmi_service\export\inc\mmi_custom_define.h  MMISET_EDEFAULT_KEYBOARD_LIGHT_TIME

// time--KEYLOCK
app:setting\h\mmiset_func.h  DEFAULT_KEYLOCK_TIME_15S_SETTING
// 解锁提示框
MS_MMI_Main/source/mmi_app/app/idle/c/mainapp.c  iTimeOut  KEYLOCK_LSK_TIME


// time--ALERT
source:mmi_service\export\inc\mmi_custom_define.h  xx  SBD_ALERT_WIN_TIME_PERIOD_1S
// time--format-12
Save:node\C\study\Macro_app_8910set.h  __timeFormat__

// 系统时间
MS_Ref/source/base/src/sys_time.c  s_sys_default_date
app:setting/c/mmiset_func.c  MMISET_DEFAULT_SYS_DATE  #8910实际不需要改这个
// 编译时间
source:mmi_service\export\inc\mmi_custom_define.h  MMISET_DEFAULT_SYS_DATE
build\{cur}_builddir\tmp\buildtime.h  PROJECT_BUILD_YEAR

// 长按时间
source:mmi_kernel\include\mmi_theme.h  MMI_KBD_LONG_KEY_VALUE
source:mmi_kernel\include\mmi_theme.h  MMI_KBD_START_REPEAT_KEY_VALUE
//source:mmi_kernel\include\mmi_theme.h  MMI_KBD_LONG_RED_KEY_VALUE
//source:mmi_kernel\include\mmi_theme.h  MMI_KBD_LONG_SUB_KEY_VALUE

// 开关机时间
app:phone\c\mmiphone_onoff.c  PHONE_STARTUP_DURING_TIME


// red--长按复位时间
chip_drv\chip_module\chip\uix8910\chip_phy_uix8910.c  CHIP_PHY_PB1KeyHwRstSet
// red--去掉长按7秒重启--107
fdl_bootloader/chip_drv/src/chip_cfg.c  Long_7s_Reset_Enable



[2.12] 指令
// psw
MS_MMI_Main/source/mmi_app/app/setting/h/mmiset_security.h  MMISET_PRIVACY_PROTECT_INIT_PWD




[2.13] 音量---------mmienvset_internal.h
// set vol(ring/msg/call)
app:envset\h\mmienvset_internal.h  MMIENVSET_CALL_RING_VOL_SILENT_MODE
// multim vol
app:setting\h\mmiset_export.h  MMISET_VOL_DEFAULT_MULTIM
// 合盖 vol
Save:node\C\study\Macro_gui_8910.h  __vol__



[2.14] 电池---------




[2.15] trace
// 107--uart
prj:project_{cur}.mk  UART_LOG_SUPPORT = FALSE
// 107--usb
prj:project_{cur}.mk RELEASE_INFO = FALSE
prj:project_{cur}.mk MEMORY_DEBUG_SUPPORT = TRUE
prj:project_{cur}.mk TRACE_INFO_SUPPORT = TRUE
//prj:project_{cur}.mk PRODUCT_BASELIB_DIR = ums9117_240X320BAR_48MB_CAT1
// 8910
prj:{cfg}.cfg   RELEASE_INFO = FALSE
prj:{cfg}.cfg   MEMORY_DEBUG_SUPPORT = TRUE
prj:{cfg}.cfg   TRACE_INFO_SUPPORT = TRUE
//prj:{cfg}.cfg   PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
prj:project_{cur}.mk MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_DEBUG


### trace
//
Save:node\C\project\Macro_Note_8910trace.h  __USB__
Save:node\C\project\Macro_Note_8910trace.h  __uart__
Save:node\C\project\Macro_Note_8910trace.h  __SIM__
//Save:node\C\project\Macro_Note_8910trace.h  __SIM__


### CE 蓝牙定频版本:
prj:project_{cur}.mk  PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
prj:project_{cur}.mk  BT_NONSIG_SUPPORT = TRUE


### 
// 省空间
Save:node\C\study\Macro_Spr_mem.h  __trace__



[2.16] 扩展项目:



//错误查找命令:
//set path=%path%;C:\CSDTK\cygwin\bin;
//find ./ -name "*.log"| xargs grep "ERROR"
//没装cygwin:
//findstr /s /i "ERROR" *.log>aaaa.txt

// search aaaa:
cmd_s: cd build\{cur}_builddir\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
// open output:
build\{cur}_builddir\log\aaaa.txt Error:
// open cmd:
cmd: cmd

// search lib:
// --xxx.map
// ----107
// ------nas_emm
// ------h324_adp     # 可能多余,
// ------device_info  # 多余
// ----8910
// ------halo_rec     # 未找到
cmd_s: cd build\{cur}_builddir\log&&findstr /s /i "nas_emm" *.log>aaaa.txt&&start aaaa.txt

// --set
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey


[2.17] Build问题
//
build\{cur}_builddir\
build\{cur}_builddir\log\midisoundbank.log 文件无法删除 
build\{cur}_builddir\log\app_main.log ERROR
build\{cur}_builddir\log\resource.log ERROR
build\{cur}_builddir\log\resource_main.log ERROR
build\{cur}_builddir\log\caf_templete.log ERROR
build\{cur}_builddir\tmp/SC6531EFM.def 宏
build\{cur}_builddir\tmp\app.macro 查看宏是否存在

build\{cur}_builddir\log\fota_bootloader.log ERROR
 

//cmd:
//findstr /s /i "ERROR" *.log>aaaa.txt
//findstr /s /i "Generate" *.log>aaaa.txt
 

cmd_w: cd build\UIS8910_ROM_16MB_DS_USER_builddir\
cmd_w: D:&&cd D:\Save\SI\Macro\




[2.18] 


[2.19] 


[2.20] 






