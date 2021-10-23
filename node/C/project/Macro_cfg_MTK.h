
基础路径设置:
//basePath = 
mkPath = SPDE_PRJ\K220U_SHY_517T\project_UIS8910_ROM_16MB_DS_USER.mk
mk:\\
cfgPath = SPDE_PRJ\K220U_SHY_517T\uis8910_phone_user_base_config.cfg
cfg:\\
//imgPath = build\UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_USER_builddir\img
tmpPath = build\tmp
tmp:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\project\Macro_cfg_MTK.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_MTK.h \[1.2\] PB
Save:node\C\project\Macro_cfg_MTK.h \[1.3\] SMS
Save:node\C\project\Macro_cfg_MTK.h \[1.4\] MMS
Save:node\C\project\Macro_cfg_MTK.h \[1.5\] BROWSER
Save:node\C\project\Macro_cfg_MTK.h \[1.6\] BT
Save:node\C\project\Macro_cfg_MTK.h \[1.7\] RECORD
Save:node\C\project\Macro_cfg_MTK.h \[1.8\] Lcd---------------
Save:node\C\project\Macro_cfg_MTK.h \[1.9\] shortcut----------menu
Save:node\C\project\Macro_cfg_MTK.h \[1.10\] USB
Save:node\C\project\Macro_cfg_MTK.h \[1.11\] 
Save:node\C\project\Macro_cfg_MTK.h \[1.12\] 
//
Save:node\C\project\Macro_cfg_MTK.h \[2.1\] IM
Save:node\C\project\Macro_cfg_MTK.h \[2.2\] DTMF
Save:node\C\project\Macro_cfg_MTK.h \[2.3\] 电子保卡
Save:node\C\project\Macro_cfg_MTK.h \[2.4\] SCREENSAVER
Save:node\C\project\Macro_cfg_MTK.h \[2.5\] CAMERA
Save:node\C\project\Macro_cfg_MTK.h \[2.6\] DL
Save:node\C\project\Macro_cfg_MTK.h \[2.7\] FM
Save:node\C\project\Macro_cfg_MTK.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_MTK.h \[2.9\] SS
Save:node\C\project\Macro_cfg_MTK.h \[2.10\] Tool
Save:node\C\project\Macro_cfg_MTK.h \[2.11\] lib-----------
Save:node\C\project\Macro_cfg_MTK.h \[2.12\] build 服务器流程
Save:node\C\project\Macro_cfg_MTK.h \[2.13\] build 省空间
Save:node\C\project\Macro_cfg_MTK.h \[2.14\] spiflash_cfg
Save:node\C\project\Macro_cfg_MTK.h \[2.15\] marco
Save:node\C\project\Macro_cfg_MTK.h \[2.16\] Lib
Save:node\C\project\Macro_cfg_MTK.h \[2.17\] FLASH (大、/小版本)
Save:node\C\project\Macro_cfg_MTK.h \[2.18\] build map
Save:node\C\project\Macro_cfg_MTK.h \[2.19\] build error
Save:node\C\project\Macro_cfg_MTK.h \[2.20\] moids error
Save:node\C\project\Macro_cfg_MTK.h \[2.21\] 
Save:node\C\project\Macro_cfg_MTK.h \[2.22\] 






[1.1] 




[1.2] 




[1.3] 




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] USB

// USB相关
USB_SUPPORT 	#USB功能的总开关
USB_HS_SUPPORT	#usb high speed
USB_MASS_STORAGE_SUPPORT	#usb mass storage
USB_IN_NORMAL_MODE_SUPPORT	#开机 mass storage
USB_COM_PORT_SUPPORT		#usb com port
USB_MULTIPLE_COMPORT_ENABLE	#枚举 com port


// 开U盘
USB_MULTIPLE_COMPORT_ENABLE	?
USB_MASS_STORAGE_CDROM_SUPPORT	?
UART3_SUPPORT = FALSE


[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



[2.1] 


[2.2] 


[2.3] 


[2.4] SCREENSAVER

plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_CURRENT_SCREENSVER_ID
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_CURRENT_SCREENSVER_ID

[2.5] 


[2.6] 


[2.7] 


[2.8] 
// wifi 宏总(不关模拟器编不过)
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOMER_APPLICATION


[2.9] 


[2.10] 


[2.11] lib
//	1.MRE
//	tool:关闭MRE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak MRE_PACKAGE = SLIM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak MRE_CONTENT_NUMBER = 0
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

//彻底关闭MRE
//@wanc 彻底关闭MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif

// 2.FLAVOR 库
//FLAVOR = GEMINI_2_NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/NONE
mtk_lib/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/NONE
MoDIS_VC9/MoDIS_LIB/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_modis/MT6261/S00/gprs/FLAVOR/NONE
tst/database_modis/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF
tst/database_classb/MT6261/S00/gprs/FLAVOR/NONE
tst/database_classb/MT6261/S00/gprs/FLAVOR/GEMINI_3_KAL_OFF


[2.12] 

编译问题:
// 1) mk:
custom\system\BLEPHONE61D_11C_BB\scat_config\FeatureBased\ObjListGen\object.list.backup CUSTOM_OPTION

// 2) 临时目录
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt

// 3) SI删除:行太长
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt


[2.13] 


[2.14] 


[2.15] 


[2.16] 


[2.17] 


[2.18] 


[2.19] build error

# 1.Error: 超空间:
AAPMC Error: Error[-2-] Calculating correct VIVA memory value...Failed.
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
Please check link error or check 
build\M107_XYZN_S2_4A_WESTERN_F2\log\vivaConfig.log Error:
	

# 2.Error: zimage_check 
make[-1-]: *** [zimage_check] Error 1
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make[-1-]: Entering directory 'F:/11CW1352MP_MT6261DM'
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make: *** [POSTBUILD ] Error 1
perl tools\ChkDepMod.pl --step 2 M107_XYZN_S2_4A_WESTERN_F2 gprs MT6261

//可能要删这个文件
custom\system\FARSIGHTED61M_CN_11C_BB


# 3.Error:  vivaConfig.log
vivaConfig.log:
Checking VIVA configuration reason
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
原因未知, 重新new正常


# 4.Error: mmiresource.lib
make[-1-]: *** [mmiresource.lib] Error 1
make[-1-]: *** Waiting for unfinished jobs....
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1


# 5.Error:  资源出错
更换语言后 资源出错 开关机动画/状态图标不显示 --> NV中修改语言


# 6.Error:  MMI Feature Check Error
soft\tst\database_classb下面的临时文件删除


# 7.Error:  XX.bin does not exist.
XX.bin does not exist. Please check it.


# 8.Error:  并行编译出错->Disable
make: *** [xgc_all_libs_2] Error 1


# 9.Error:  CreateProcess 拒绝访问
process_begin: CreateProcess(C:\Users\ADMINI~1\AppData\Local\Temp\make6688-1.bat, 
make (e=5): 拒绝访问


# 10.Error:  msys-1.0.dll
Tools\MSYS\bin\sh.exe: *** Couldn't reserve space for cygwin's heap (0x715B0000 <0x1FE0000>)
旧:
tools\MSYS\bin\msys-1.0.dll
新:
Save:SI\z-other-patch\mtk-tools\msys-1.0.dll [openDir]
换了后还是报错:
make[-1-]: *** [fluency.lib] Error 2
最后解决: 重启一次可以了。


# 11.Error: obigo03cstkadp
make[-1-]: *** [obigo03cstkadp.lib] Error 2
make[-1-]: *** [peripheral.lib] Error 2
make[-1-]: *** [postproc.lib] Error 2
make[-1-]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
new


# 12.Error:  文件名长度超过256
F:\11CW1352MP_KM2\build\M105_JX_..\M105_JX_._20181217.bin\M105_JX_.._20181217.bin
文件名长度超过256，不会生成bin文件


# 13.Error: 丢失 BOOTLOADER 文件，原因同上(6.12)
M105_..._BOOTLOADER_V005_MT6261_..._ext.bin



[2.20] moids error

# 1.KM模拟器编不过, 缺文件
// F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h
// F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h
cp->
cp F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h


// copy这2个文件
// F:\6261D_KM\tst\database_classb\pstrace_db\wap_trc_gen.h
// F:\6261D_KM\tst\database_classb\pstrace_db\wps_trc_gen.h

// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc.h
// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wap_trc_gen.h vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h

// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc.h
// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wps_trc_gen.h vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h

	
err->
// f:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\custom_config.c sys_mem_size_modis.h
// F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
cp custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
// 或
cp F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h


# 2.模拟器改NV后, 运行报错, 删除文件:
MoDIS_VC9\WIN32FS\DRIVE_C


# 3.模拟器Error: mte_data.h 少}
plutommi\framework\mte\mteinc\mte.h
plutommi\framework\mte\mteinc\mte_data.h 少一个}编不过


# 4.模拟器Error:   'shortname' 文件名超长
Run-time check Failure #2 - ... 'shortname' was corrupted
MoDIS_VC9\filesystem\FileSystemInc\FSSim_def.h FSSIM_SFN_LEN  ->19 最长18


# 5.模拟器Error:    vs_cfg:
 Stack around the variable XX was corrupted
 项目-属性-配置属性-C/C++-代码生成中”，将基本运行时检查设置成默认值
 code->basic runtime checks


# 6.模拟器Error:   exist not modis.exe 
 MoDIS_VC9 删除重拉代码


# 7.模拟器Error:    cannot update program database:
modis_vc9\mmi_service\debug\vc90.pdb
项目设置（打开项目设置ALT F7，以英文版为例）:
	C\C | General | Debug Information format | C7 Compatible (/Z7)
	C\C | Code Generation | Enable String Pooling | Yes (/GF)
	Linker |Debuging |General Debug Info | Yes (/DEBUG)
网上被互相转载的都是这三项，不过经过实验，只修改第一项即可。
修改保存后，再次编译会出现真正的错误点位置，修改该错误，
然后将各个设置恢复为修改前的值，再[重编]就不会出现cannot update program database错误了


# 8.模拟器Error: 空定义	
vendor\framework\obigo_Q03C\v1_official\msf\msf_lib\export\msf_log.h #define^MSF_LOG_MSG_ARGS
空定义
//	#ifdef WIN32
//	#undef  MSF_LOG_MSG_ARGS_(type, modId, msgId, format, s, ...)      
//	#undef MSF_LOG_MSG_NOARG_(type, modId, msgId, format, s)          
//	#undef MSF_LOG_MSG_NOARG(x)                                       
//	#undef MSF_LOG_MSG_ARGS(x)                                        
//	#endif



[2.21] 


[2.22] 

