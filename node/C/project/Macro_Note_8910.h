
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
//
Save:node\C\study\Macro_im_8910.h  __LONG_0__
// --key--虚拟值转实际值
Save:node\C\study\Macro_doc_8910.h  __keyKbd__
// --key--发送信号
Save:node\C\study\Macro_doc_8910.h  __keySig__
// --key--保存状态
Save:node\C\study\Macro_doc_8910.h  __keyStatus__
// --key--点亮屏/侧键
Save:node\C\study\Macro_doc_8910.h  __keySlide__




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
chip_drv\chip_module\analog\
// --6531D
chip_drv\chip_module\analog\sr1131\analog_phy_sr1131.c  s_ana_bln_sw_tab
chip_drv\chip_module\analog\sr1131\analog_phy_sr1131.c  s_ana_dev_tab
// --6531E
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c s_ana_bln_sw_tab
// --t703/8910
chip_drv\chip_module\analog\sc2720\analog_phy_sc2720.c  s_ana_bln_sw_tab
chip_drv\chip_module\analog\sc2720\analog_phy_sc2720.c  s_ana_dev_tab
// --t107
chip_drv\chip_module\analog\v7\analog_phy.c  s_ana_bln_sw_tab
chip_drv\chip_module\analog\v7\analog_phy.c  BLTC_LCM_CURRENT_V
chip_drv\chip_module\analog\v7\analog_phy.c  s_ana_dev_tab
// 背景电流 = BLTC_LCM_CURRENT_V
chip_drv\chip_module\analog\analog_phy.h  LCM_V_SW

// --目录--107
make\chip_drv\def_config\
make\chip_drv\def_config\UMS9117.cfg  CONFIG_ANALOG_VER = v7
make\chip_drv\chip_modules\analog.mk  CONFIG_ANALOG_VER
//
make\chip_drv\chip_drv.mk  analog_phy_sc2720.c
make\chip_drv\chip_drv.mk  analog_phy

// --刷新帧率
//  ==>
//  ====>divider =8, spi就变成24M了
//  ======>spi_clk=200M/8=25M, 200M/8=25M, 200M/6=33M, 200M/5=40M
chip_drv\chip_module\lcdc\uix8910\hal_gouda.c  uint32^hal_GoudaUpdateSerialTiming
// --双帧率
prj:project_{cur}.mk   LCD_DUAL_SPI_FREQ_SUPPORT
//  ==>
MS_Ref\source\lcd\src\lcd_uix8910.c  LCD_DUAL_SPI_FREQ_SUPPORT



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
// 双摄像头(默认单)：
//prj:project_{cur}.mk SBD_DUAL_CAMERA_SUPPORT
prj:project_{cur}.mk _CAMER


// 四频 / 2频设置;开就是2频：
//prj:project_{cur}.mk __SBD_RF_TWO_BAND_SUPPORT__
//prj:project_{cur}.mk SBD_RF_TWO_BAND_SUPPORT

// 频段-用mk方式
prj:project_{cur}.mk  WCDMA_BANDS_SUPPORT = BAND_1_5_8
prj:project_{cur}.mk  TDD_BANDS_SUPPORT = BAND_38_39_40_41   #LTE TDD band
prj:project_{cur}.mk  FDD_BANDS_SUPPORT = BAND_1_3_5_8  # LTE FDD Band
// 频段-用nv方式(不要加mk)
Save:node\C\study\Macro_nv_sim8910.h  __BAND__

// 不带马达：
//prj:project_{cur}.mk __HHT_REMOVE_VIBRA__ =TRUE
prj:project_{cur}.mk  ELT_NO_VIBRATOR
prj:project_{cur}.mk  VIRTUAL_VIBRATE_FUNC
prj:project_{cur}.mk  REMOVE_VIBRA_AND_RING  # tts
prj:project_{cur}.mk  VIBRATE_DRIVER_VOLT_3_0V


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
prj:project_{cur}.mk  FM_VBC   = TRUE
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




[2.6] 情景模式 音频参数:
// 外置K类功放：
prj:project_{cur}.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

// 软件2合1：FALSE是喇叭听筒独立(硬件二合一)，分开是软件2合1
prj:project_{cur}.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
prj:project_{cur}.mk SBD_EARPIECE_SPEAK_USE_ONE
prj:project_{cur}.mk CUSTOMER = S039_JX_2IN1                  # 二合一的音频（带K类的音频不同）
\audio\audio_dsp_codec_6531.nvm    0x6C0/硬件2合1;    0x638/软件2合1

// 三合一：
prj:project_{cur}.mk CUS_ADD_SHAKE= TRUE  三合一喇叭宏        
prj:project_{cur}.mk VIRTUAL_VIBRATE_FUNC
prj:project_{cur}.mk __SPEAKER_VIB_INTENSITY_WEAK__
prj:project_{cur}.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE 三合一同时开


### 107
// 独立听筒
prj:project_{cur}.mk  AUDIO_EXT_PA= TRUE
prj:project_{cur}.mk  RCV_THROUGH_SPK= FALSE
// 听筒二合一
prj:project_{cur}.mk  AUDIO_EXT_PA= FALSE
prj:project_{cur}.mk  SPK_THROUGH_HPR= FALSE
prj:project_{cur}.mk  RCV_THROUGH_SPK= TRUE




[2.7] 手电筒
// 手电筒
prj:project_{cur}.mk HHT_ADD_TORCHLIGHT= TRUE
prj:project_{cur}.mk SBD_ADD_TORCHLIGHT    #6531E
 
// 闪光灯
prj:project_{cur}.mk DC_FLASH_SUPPORT= TRUE


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
app:setting\c\mmiset_display.c  MMI_TIME_DISPALY_TYPE_DEFAULT_12

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
prj:project_{cur}.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
// 8910
prj:{cfg}.cfg   RELEASE_INFO = FALSE
prj:{cfg}.cfg   MEMORY_DEBUG_SUPPORT = TRUE
prj:{cfg}.cfg   TRACE_INFO_SUPPORT = TRUE
//prj:{cfg}.cfg   PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
prj:project_{cur}.mk MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_DEBUG



### usb
// --6531
open: tools\DEBUG_TOOL\CHANNELSERVER\Bin\ChannelServer.exe
// 1) 连接USB线, 选择 USB LOG的选项
// 2) Channel Server Configure:
//  MS: Type: UART
//     Port:  SPRD U2S Diag(COM12) ---------------- 要改 
//                         (COM12是连接USB的端口)
//     BaudRate:115200 ---------------------------- 要改 
//     Endian: self adaptive
//  
//  WinSocket Server:
//     Port: 36666 
//     Timeout: 3 (s)
// 3) Connect MSSim;channel的图标将有谈绿色的更成翠绿色
// 其他:
// 1. 驱动不同, 可能显示 SPRD Diag(COM12)
// 2. 一直不出log, 还原svn后可能正常

// 6531
open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
// 8910
open: tools\DEBUG_TOOL\ArmLogel\Bin\ArmLogel.exe
open: tools\DEBUG_TOOL\ArmTracer\Bin\ArmLogel.exe
// 1) 插入USB线，选择USB LOG的选项
// 2) 运行 ArmLogel.exe
// 3) 菜单选项LOG下面一行的最左边的DLL图标；
// 4) DLL图标变化后，点击第二个图标Connect;
// 5) 点击第五个图标Logging
// 6) 点击点击第五个图标Stop
// 7) 点击log保存图标


// NV修改:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// 选择:
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\nvitem.prj
// 设置 Armlog抓取:
// dsp_log_switch = 0x0 //
// enable_arm_log = 0x1
// com_debug =  0;    //0xFF
// arm_log_uart_id = 0x1 //
// dsp_log_uart_id = 0x0 //

// 设置 Dsplog抓取:
// dsp_log_switch = 0x1 //
// enable_arm_log = 0x1
// com_debug = 0;    //0xFF
// arm_log_uart_id = 0x0 //
// dsp_log_uart_id = 0x1 //


// 不用改:
// com_data = 0xFF               (USB:0xFF, 相同)
// com_debug_baud_rate = 0x70800 (USB:0x1C200,展迅没说这个要改)

// 改完NV，只下载NV
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// 或者 CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug    //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....     nvm =^DSP_log_switch   //ITEM_NAME 0x0
//File—>Save Image，File—>Save Project


USB抓trace:
//工程模式设置:(6531)
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (不确定开不开)

//工程模式设置:(8910)
//8 para set->ap log:open
//8 para set->cp log:close
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (不确定开不开)

//工程模式设置:(107)
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:close
//8 para set->debug->alert:debug

uart抓trace:
//工程模式设置:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:close (不确定)
//8 para set->debug (para)->assert:open  (不确定开不开)

//工程模式设置:(8910 user)
//8 para set->ap log:open
//8 para set->cp log:open
//8 para set->usb log:close (不确定)
//8 para set->debug (para)->assert:open  (不确定开不开)




// USB--log--ok
//--          10:33:09.907  -- Start Logging[LittleEndian]                          ----->----                                    0:05:43.325   
//--          10:27:26.582  -- Lost 8956 PS packets in channel, SN range:(152804,161759) ----->----                                    0:00:00.000   
//--          10:27:26.582  -- Lost 25 PS packet(s) on CP side                      ----->----                                    0:00:00.000   

// USB--log--err
//--          10:36:07.278  -- Start Logging[LittleEndian]                          ----->----                                    0:00:00.000   
//--          10:36:07.278  -- Lost a PS packet in channel, SN:2243527              ----->----                                    0:00:00.000   
//--          10:36:07.278  -- Lost 5948 PS packets in channel, SN range:(2243579,2249526) ----->----                                    0:00:00.000   
//--          10:36:07.278  -- Lost 1999 PS packets in channel, SN range:(2249528,2251526) ----->----                                    0:00:00.000   




### CE 蓝牙定频版本:
make/{cur}_{GSM}.mak PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
make/{cur}_{GSM}.mak BT_NONSIG_SUPPORT = TRUE




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






