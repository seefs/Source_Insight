
// :
Save:SI\node\note\Macro_Note_Tools.h \[1.1\] vc:

// 展讯 工具:
Save:SI\node\note\Macro_Note_Tools.h \[2.1\] FontTool 字体:
Save:SI\node\note\Macro_Note_Tools.h \[2.2\] foobar2000 修改mp3 广告图标
Save:SI\node\note\Macro_Note_Tools.h \[2.3\] ResOver 网络参数
// mtk 工具:
Save:SI\node\note\Macro_Note_Tools.h \[3.1\] mtk--MCTApp --不知道怎么用
Save:SI\node\note\Macro_Note_Tools.h \[3.2\] mtk--STMTView 字符串工具:
Save:SI\node\note\Macro_Note_Tools.h \[3.3\] mtk--TRACE:
Save:SI\node\note\Macro_Note_Tools.h \[3.4\] mtk--下载工具:
Save:SI\node\note\Macro_Note_Tools.h \[3.5\] mtk--字体:
// 常用   工具:
Save:SI\node\note\Macro_Note_Tools.h \[4.1\] SVN 配置:
Save:SI\node\note\Macro_Note_Tools.h \[4.2\] BCmp 配置:
Save:SI\node\note\Macro_Note_Tools.h \[4.3\] git:
Save:SI\node\note\Macro_Note_Tools.h \[4.4\] vim:
Save:SI\node\note\Macro_Note_Tools.h \[4.5\] SI:
	


/***********************************************************************/
[1.1] vc:
//Visual Studio 6.0
Visual Studio 6.0.rar
vc6.0官方下载 win7中文版.zip
//Visual Studio 6.0
//Incredibuild
Incredibuild5.0+crack
//注册表扫描(时间段-清除vc6信息,卸载不干净)
regscanner.rar
//msjavx86
msjavx86.exe
VC6LineNumberAddin.rar
npptools.rar

//AddIns
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\MSDev98\AddIns








[2.1] FontTool 字体:
open F:\6531E_16A\tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
F:\6531G_SX\MS_MMI\source\resource\Common\FONT\LANG_FONT_LATIN_12_14_29.lib


[2.2] foobar2000 修改mp3 广告图标
open D:\Program Files (x86)\foobar2000\foobar2000.exe


[2.3] ResOver 网络参数
open E:\SVN\6531DA_new\tools\DEBUG_TOOL\ResOver\Bin\ResOver.exe


//mtk tools:
[3.1] mtk--MCTApp --不知道怎么用
open MCT_TOOL\MCTApp.exe

	
[3.2] mtk--STMTView 字符串工具:
open:plutommi\Customer\STMTView.exe
F:\11CW1352MP_MT6261DM\plutommi\Customer\CustResource\M103_KEMAN_MMI\ref_list_M103_KEMAN_2408.txt
F:\11CW1352MP_BLEPHONE61D_11C_V33\projects\M105\M105_XYZN_S1_C3_NEDADJ_F6\Resource\ref_list.txt

arabic: 062C ~ 0644
persion:062C ~ 06af  波斯文独有编码:8-0686 5-0698 2-067E 6-06Af
bengli: 0944 ~ 09EE
india:  093E ~ 095f

批量修改问题:
5.1 “,”->引号问题: 
       “,”换成“^”; 原来应该没有“^”, 最后再替换回来
       ":" 保存后也会有引号, 数量少 最后可以个别替换
5.2 excel保存->乱码问题:
       excel打开，复制出替换列(英文波斯)，
       批量修改翻译
       修改完替换excel 全部复制出来用其他工具/UE保存
5.3 还原逗号: “^”换成“,”
5.4 tab字符 问题: 
       新表行末少1个tab字符
       对比 ref_list.txt 将44个差异地方覆盖过去，
       ref_list.txt tab字符正常；差异项少1个tab不影响
5.5 用字符工具保存行末多了44个tab字符


[3.3] mtk--TRACE:
open D:\ProgramDownTool\3.1304.00_Catcher\Catcher.exe
   
//1 phone: *#3646633#->EngMode:
device->set UART->UART setting->TST-PS config->USB port->SAVE
//2 Menu--Config--Set database path:
tst\database_classb\BPLGUInfoCustomAppSrcP_MT6261_...
//3 Menu--View--ps Integrated--show log
//4 Menu--Control -> mode -> logging
//5 配置trace线所用的USB端口(T图标)
//6 connet
//7 filer->set--All on



[3.4] mtk--下载工具
//  FlashTool_v5.1528.00
open:D:\Desktop\工具\FlashTool_v5.1548.00\Flash_tool_Beta.exe
1 Scatter/config File, 选择
build\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_PCB01_gprs_MT6261_S00.M107_XYZN_S2_4A_WESTERN_F2_V06_20180915.bin\FARSIGHTED61M_CN_11C_BB.cfg
2  选择
    option->usb Download/Readback
    option->usb Download Without battery
    option->Format Fat(auto)->Format Fat
3 Format Fat不会擦除校准参数、IMEI号


[3.5] mtk--字体
open F:\6531E_16A\tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
F:\11CW1352MP_BLEPHONE61D_11C_V33\vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf




[4.1] SVN 配置:
C:\Users\Administrator\AppData\Roaming\Subversion\config

C:\Users\Administrator\AppData\Roaming\Subversion\config
//	global-ignores = *.o *.lo *.la *.al .libs *.so *.so.[0-9]* *.a *.pyc *.pyo __pycache__
//	 *.rej *~ #*# .#* .*.swp .DS_Store

--------------------------------------------------

[4.2] BCmp 配置:
C:\Users\Administrator\AppData\Roaming\Scooter^Software\Beyond^Compare^4



[4.3] git:
Save:SI\node\ToolsMsg\Macro_git.h
	
[4.4] vim:
Save:SI\node\ToolsMsg\Macro_vim.h
	
[4.5] SI:
Save:SI\node\ToolsMsg\Macro_SI.h


