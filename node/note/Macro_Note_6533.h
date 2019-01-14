快捷键：
F11：打开/关闭笔记
F2： 打开选择的路径/文件; 文件名+扩展名
F5： 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make/ctmake/xmake、open、vc、vs08开头; 默认打开文件+关键字(行)

--------------------------------------------------

默认(便于上传svn):
set S069_HK_H1809_NetOnNet_F5_QQVGA

当前project:
set S069_HK_H1822_IRBIS_SF31_F2_QQVGA
	



setEnd:从setEnd行开始替换名称(上一次选中->当前选中); 
--------------------------------------------------


6533编译指令:
open: C:\CSDTK\cygwin\Cygwin.bat
	work .

如果路径不对，需要修改环境变量:
open: C:\CSDTK\cygwin\.bashrc PROJ_ROOT
	cygpath "F:"		改为:
	cygpath "F:/SC6533G"



编译：
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=yes CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2


编译模块--屏
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=no CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2  platform/edrv/lcdd/

编译模块--摄像头
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=no CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2  platform/edrv/camdold/

编译模块
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=yes CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2

CT_RELEASE=debug



模拟器：

--------------------------------------------------

下载工具
open:D:\tools\fpupgrade_V10.00.01\fpupgrade.exe

C:\CSDTK\cygwin\.bashrc	export^PROJ_ROOT
	export PROJ_ROOT=`cygpath "D:/6533"`
	
--------------------------------------------------
			
Make 常用设置:
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def CT_PRODUCT				版本号
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def PROJECT_FEATURE
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def LCD_MODEL 					屏设置
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def CAMERA_MODEL 				摄像头设置
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def SUPPORT_DUAL_CAMERA 		摄像头设置

屏：
platform\edrv\lcdd\nv3021\gouda\src\drv_lcd_nv3021.c LCD_NV3021_TIANYIFU_BOE

摄像头:
platform\edrv\camdold\bf3a02\src\drv_camera.h
platform\edrv\camdold\bf3a02\src\drv_camera_bf3a02.c


--------------------------------------------------

主菜单资源 ：


--------------------------------------------------

Build问题:
build\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\_default_\
	下载文件：
hex\S069_HK_H1822_IRBIS_SF31_F2_QQVGA_release\S069_HK_H1818C_DIGMA_LINX_A170_F2_QQVGA_release_flash.lod

.




target\R039_YSF_VT70i_bundy_F4\include
application\target_res\common\mmi_customer\Images\R028_BLF_K1_LEPH_NoVIB_F2_QQVGA\image.zip
application\target_res\common\mmi_customer\aud_source\R028_BLF_K1_LEPHONE_F2\Audio.zip
application\target_res\common\mmi_customer\include\custresdef.h

application/target_res/commoni_customer/Res_MMI/Res_MainMenu.c

application/coolmmii/GUIc/wgui_categories_idlescreen.c
application/coolmmii/GUIc/wgui_categories_util.c
application/coolmmii/GUIc/gui_fixed_menuitems.c
application/coolmmii/GUIc/gui_inputs.c
application/coolmmii/includei_features_camera.h



菜单
F:\soft\application\target_res\common\mmi_customer\Images\RB039_SH_B105_CJ01_F4_QQVGA\MainLCD\MainMenu\MATRIX


版本号查询：
*#37*#，*#36*#
	*#87#
	*#36*#
	*#3641#


custresdef.h

lcd/cam: *#8376#


在手机设置里面那个亮度等级设置和lightLevelToBacklight这个表对应关系为：
第5级对应lightLevelToBacklight[7]
第4级对应lightLevelToBacklight[4]
第3级对应lightLevelToBacklight[3] 





