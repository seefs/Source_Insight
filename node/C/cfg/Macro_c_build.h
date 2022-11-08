

### __8910__

//编译:
//open: project\UIS8910_ROM_16MB_DS_USER\New_common.bat

//编译模块
make p=UIS8910_ROM_16MB_DS_USER
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv
make p=UIS8910_ROM_16MB_DS_USER image

//或 (1行命令)
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image job=4

//编译资源 (VS接着编译即可)
//		====>job=4 多核CPU
make p=UIS8910_ROM_16MB_DS_USER m=resource job=4


//其他编模块
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main


//模拟器：
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
vc: build\UIS8910_ROM_16MB_DS_USER_builddir\win\simulator.dsw
build\UIS8910_ROM_16MB_DS_USER_builddir\win\
//	改NV删除
cmd del^build\UIS8910_ROM_16MB_DS_USER_builddir\win\bin\flash_sim.dat
build\UIS8910_ROM_16MB_DS_USER_builddir\win\bin\flash_sim.dat


// spr--下载工具
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
build\UIS8910_ROM_16MB_DS_USER_builddir\img






### 

// 主要是8910
Save:set\
Save:set\Macro_Set_Path_sprd_8910.h  simulator
Save:set\Macro_Set_Path_sprd_107.h  simulator
Save:set\Macro_Set_Path_sprd_6531.h  simulator




### 总结


// mtk
make {cur} {GSM} new
make {cur} {GSM} remake
make {cur} {GSM} remake custom
make {cur} {GSM} remake Codegen
make {cur} {GSM} remake plutommi
make {cur} {GSM} remake mmi_framework
make {cur} {GSM} Resgen
make {cur} {GSM} remake mmiresource
make {cur} {GSM} gen_modis
// 8910s/watch
make p={cur} m=simulator_idh
make p={cur} m=app_main
make p={cur} m=app_main update image
make p={cur} m=custom_drv
make p={cur} m=dc
make p={cur} m=resource_main
make p={cur} m="custom_drv app_main" update image
make p={cur} m=ctrl
make p={cur} m=chip_drv
make p={cur} m=version
make p={cur} m=gui_main
make p={cur} image
// w07 差异(不然监拍会显示页面)
make p={cur} m=isp_service update image
// bmw0
make p={cur} m=app_watch_main update image
make p={cur} m=app_watch_main
// 6531
make p={cur} m=simulator
make p={cur} m=resource
make p={cur} m=app update image
make p={cur} m=app
make p={cur} image
make p={cur} m="gui app" update image
make p={cur} new job=12
// T107--如果编模块报错, 分开编
make p={cur} m=simulator_main
make p={cur} m=resource_main
make p={cur} m=app_main
make p={cur} m=ctrl
make p={cur} m=custom_drv
make p={cur} m="mmk_main ctrl app_main"
make p={cur} m=mmk_main
make p={cur} m=version
make p={cur} image

// mtk
make {cur} {GSM} new
make {cur} {GSM} remake
make {cur} {GSM} remake custom
make {cur} {GSM} remake Codegen
make {cur} {GSM} remake plutommi
make {cur} {GSM} remake mmi_framework
make {cur} {GSM} Resgen
make {cur} {GSM} remake mmiresource
make {cur} {GSM} gen_modis
// 8910s/T107, 如果T107编模块报错, 分开编
make p={cur} m={simulator}
make p={cur} m={simulator} VS2010=1 -j4
make p={cur} m={app_main}
make p={cur} m={app_main} update image
make p={cur} m={resource_main}
make p={cur} m=app_watch_main
make p={cur} m=custom_drv
make p={cur} m=dc
make p={cur} m="custom_drv {app_main}" update image
make p={cur} m=ctrl
make p={cur} m=chip_drv
make p={cur} m=version
make p={cur} m=gui_main
make p={cur} image
make p={cur} new job=12





