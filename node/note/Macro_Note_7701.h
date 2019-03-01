快捷键[Ca]：
F11：打开/关闭笔记
F2： 打开选择的路径/文件; 文件名+扩展名
F5： 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make、open、vc、vs08开头; 默认打开文件+关键字(行)

--------------------------------------------------

默认(便于上传svn)[Cs]:
set PS102_KLS_W395_ZX_W1G1_F2 PS102

当前project:
set PS102_KLS_W395_ZX_W1G1_F2 PS102
set PS102_SPEED_ZX_QVGA_F1 PS102
set PS102_DJTX_G182_W25G2_F1 PS102
	SE039_YST_E18_E250_F2

setEnd:从setEnd行开始替换名称(上一次选中->当前选中)

--------------------------------------------------

7701编译指令[Cc]:
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


其他编模块
make p=PS102_KLS_W395_ZX_W1G1_F2 m=app update image
模拟器：
make p=PS102_KLS_W395_ZX_W1G1_F2 m=simulator_main
vc:build\PS102_KLS_W395_ZX_W1G1_F2_builddir\win\simulator.dsw



下载工具[Ct]
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

E:\SC7701_20180509\build\PS102_KLS_W395_ZX_W1G1_F2_builddir\img



--------------------------------------------------




--------------------------------------------------
Make 常用设置[Cf]:
	屏:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk LCD_CHIP
	摄像头:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SENSOR_CHIP
	屏亮度:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT

	修改按键黑点：
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)

	
	版本号：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\resource\version_software_mocor.h

----------------------------------------------------------------------------

菜单[m]

----------------------------------------------------------------------------

资源

----------------------------------------------------------------------------

项目文件:
	
----------------------------------------------------------------------------

设置[s]:		（笔记是旧的）
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

	字库：
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


	型号--MSD, 翻译：
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

----------------------------------------------------------------------------

Idle[i]: 拨号

	拨号光标
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN

----------------------------------------------------------------------------
	
菜单

----------------------------------------------------------------------------

工具[t]：

----------------------------------------------------------------------------

trace[t]:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk RELEASE_INFO = FALSE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MEMORY_DEBUG_SUPPORT = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk TRACE_INFO_SUPPORT = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace


// 抓trace:
open: tools\DEBUG_TOOL\CHANNELSERVER\Bin\ChannelServer.exe
//	1) 连接USB线, 选择 USB LOG的选项
//	2) Channel Server Configure:
//		MS: Type:	UART
//		   Port:  SPRD U2S Diag(COM12)	---------------- 要改 
//		                       (COM12是连接USB的端口)
//		   BaudRate:115200	---------------------------- 要改 
//		   Endian: self adaptive
//		
//		WinSocket Server:
//		   Port: 36666
//		   Timeout: 3 (s)
//	3) Connect MSSim;channel的图标将有谈绿色的更成翠绿色
	
//open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
open: tools\DEBUG_TOOL\Logel_for_TD\Bin\ArmLogel.exe
//	1) 插入USB线，选择USB LOG的选项
//	2) 运行 ArmLogel.exe
//	3) 菜单选项LOG下面一行的最左边的DLL图标；
//	4) DLL图标变化后，点击第二个图标Connect;
//	5) 点击第五个图标Logging
//	6) 点击点击第五个图标Stop
//	7) 点击log保存图标


// NV修改:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// 选择:
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.prj
D:\SVN\SC7701\build\SC7702_PS102_nvitem_Uart\nvitem.prj
// 设置:
//	com_debug = 0x1               (USB:0xFF,)
//	com_data = 0xFF               (USB:0xFF, 相同)
//	com_debug_baud_rate = 0x70800 (USB:0x1C200,展迅没说这个要改)
//	dsp_log_switch = 0x0          (USB:0x1,)


// NV下载(用这个旧版的):
open: tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
// 只选中: FDL1, FDL1, NV
// replace NV bin:
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// 或者 CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug			 //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....		   nvm =^DSP_log_switch 	 //ITEM_NAME 0x0
//File—>Save Image，File—>Save Project


USB抓trace:
//工程模式设置:
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (不确定开不开)

uart抓trace:
//工程模式设置:
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:close (不确定)
//8 para set->debug->assert:open  (不确定开不开)



--------------------------------------------------
CE 蓝牙定频版本:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------


扩展项目：





----------------------------------------------------------------------------

Build问题[b]:

build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\midisoundbank.log 文件无法删除 
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\resource.log ERROR
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\caf_templete.log ERROR
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\tmp/SC7702.def 宏
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\tmp\app.macro 查看宏是否存在
	

findstr /s /i "ERROR" *.log>aaaa.txt



1 超空间:
~ 2个游戏		  12K
~ 一条APN记录占用0.163kb。3000~

2 编译时间
gettime.pl

[Cg]


