/***********************************************************************/
/*************************** 说明与设置 ********************************/
/***********************************************************************/

快捷键[Ca]：
F11：打开/关闭笔记
F2： 打开选择的路径/文件; 文件名+扩展名
F5： 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make/ctmake/xmake、open、vc、vs08开头; 默认打开文件+关键字(行)

--------------------------------------------------

默认项目(便于上传svn) [Cs]:
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm
	
当前项目:
set M101_C1_F184_M_ergo_F3 M101_COOLCEL gsm
	
set M105_MLT_S2401_GTOUCH_F4 M105_MLT gprs
set M105_MLT_S2401_ZX_F4 M105_MLT gprs
set XG05_KM_V2404Q_Power_4000_F2 XG05_KM gprs

set M105_XYZN_S1_C3_NEDADJ_F6 M105 gprs
set M105_XYZN_ZX M105 gprs
set M106_DC_P2401_F6 M106 gprs
	
set M103_KEMAN_2401_VGOTEL_F2 XG05_KM gprs

[0]

[N0]
[F5]

setEnd:从setEnd行开始替换名称(上一次选中->当前选中); 以空格分开; 不要直接替换(M105<->M105_MLT 暂时未判断)

/***********************************************************************/
/*************************** 编译与下载 ********************************/
/***********************************************************************/

MTK编译指令[Cc]:
open: C:\Windows\System32\cmd.exe
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python37\python.exe


编译1：
make M101_COOLCEL_CS181_M_BRAVIS_F3 gsm new

编译2：
projects\M101_COOLCEL\M101_COOLCEL_CS181_M_BRAVIS_F3\New_common.bat

	

编译模块
python test1.py

编译资源 (VS接着编译即可)
make M101_COOLCEL_CS181_M_BRAVIS_F3 gsm Resgen



