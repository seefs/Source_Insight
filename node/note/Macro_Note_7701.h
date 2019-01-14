快捷键：
F11：打开/关闭笔记
F2： 打开选择的路径/文件; 文件名+扩展名
F5： 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make、open、vc、vs08开头; 默认打开文件+关键字(行)

--------------------------------------------------

默认(便于上传svn):
set PS102_SPEED_ZX_F1 PS102

当前project:
set PS102_KLS_W395_ZX_W1G1_F2 PS102
set PS102_SPEED_ZX_QVGA_F1 PS102
	

setEnd:从setEnd行开始替换名称(上一次选中->当前选中)

--------------------------------------------------

7701编译指令:
cmd:F:\6531E_16A\cmd

编译:
open:project\PS102\PS102_KLS_W395_ZX_W1G1_F2\New_common.bat





编译模块
make p=PS102_KLS_W395_ZX_W1G1_F2 m=custom_drv
make p=PS102_KLS_W395_ZX_W1G1_F2 image


或 (1行命令)
make p=PS102_KLS_W395_ZX_W1G1_F2 m=custom_drv update image
make p=PS102_KLS_W395_ZX_W1G1_F2 m=custom_drv update image job=4
make p=PS102_KLS_W395_ZX_W1G1_F2 m=resource job=4


模拟器：
make p=PS102_KLS_W395_ZX_W1G1_F2 m=simulator_main
vc:build\PS102_KLS_W395_ZX_W1G1_F2_builddir\win\simulator.dsw



下载工具
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

E:\SC7701_20180509\build\PS102_KLS_W395_ZX_W1G1_F2_builddir\img



--------------------------------------------------




--------------------------------------------------
Make 常用设置:
	屏:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk LCD_CHIP
	摄像头:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SENSOR_CHIP
	屏亮度:
//chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT
	
	版本号：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\resource\version_software_mocor.h

----------------------------------------------------------------------------
/*
菜单

----------------------------------------------------------------------------

资源

----------------------------------------------------------------------------

项目文件:
	
----------------------------------------------------------------------------

设置:		（笔记是旧的）
	双摄像头(默认单)：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_DUAL_CAMERA_SUPPORT

	四频 / 2频设置;开就是2频：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __SBD_RF_TWO_BAND_SUPPORT__
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_RF_TWO_BAND_SUPPORT

	不带马达：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_REMOVE_VIBRA__ =TRUE

	双卡：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_MULTI_SIM_SYS = DUAL
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    卡反
	单卡翻译：
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23键：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk _23KEY
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_MULTI_GREEN_KEY =DUAL 绿键
	
	FM：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #带上搜的台多一点
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #外放时打开


	外置K类功放：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	软件2合1：FALSE是喇叭听筒独立(硬件二合一)，分开是软件2合1
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_EARPIECE_SPEAK_USE_ONE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk CUSTOMER = S039_JX_2IN1	                 # 二合一的音频（带K类的音频不同）
\audio\audio_dsp_codec_6531.nvm    0x6C0/硬件2合1;    0x638/软件2合1

	三合一：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk CUS_ADD_SHAKE= TRUE  三合一喇叭宏        
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk VIRTUAL_VIBRATE_FUNC
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __SPEAKER_VIB_INTENSITY_WEAK__
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE 三合一同时开


	手电筒
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk HHT_ADD_TORCHLIGHT= TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	闪光灯
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk DC_FLASH_SUPPORT= TRUE
	
	U盘
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk UMEM_PRTITION _MICRO

----------------------------------------------------------------------------

Idle:

----------------------------------------------------------------------------
	
菜单

----------------------------------------------------------------------------

工具：

----------------------------------------------------------------------------

trace:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk RELEASE_INFO = FALSE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MEMORY_DEBUG_SUPPORT = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk TRACE_INFO_SUPPORT = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
	
--------------------------------------------------
CE 蓝牙定频版本:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------


扩展项目：





----------------------------------------------------------------------------

Build问题:

build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\midisoundbank.log 文件无法删除 
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\tmp/SC7702.def 宏
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\tmp\app.macro 查看宏是否存在

1 超空间:
~ 2个游戏		  12K
~ 一条APN记录占用0.163kb。3000~

2 编译时间
gettime.pl

