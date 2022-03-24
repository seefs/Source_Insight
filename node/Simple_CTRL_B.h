

Save
Save:node\Macro_File.h
Save:node\Macro_History.h
Save:node\Macro_Future.h
Save:node\Macro_Memory.h
Save:node\Macro_tmp.h

//C
Save:node\C\Macro_Note_C.h
Save:node\C\project\Macro_bug.h
//
Save:node\C\project\Macro_Note_{0}.h
Save:node\C\project\Macro_cfg_{0}.h
Save:node\C\study\
Save:node\C\study\Macro_app_{0}.h
Save:node\C\study\Macro_gui_{0}.h
Save:node\C\study\Macro_fun_{0}.h
Save:node\C\study\Macro_doc_{0}.h
Save:node\C\study\Macro_res_{0}.h
Save:node\C\study\Macro_nv_{0}.h


/***********************************************************************/




//
Y28--晚上--str

//
build--info, create dir..
//


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
make p={cur} m=app_main update image
make p={cur} m=custom_drv update image
make p={cur} m=dc update image
make p={cur} m=resource_main update image
make p={cur} m="custom_drv app_main" update image
make p={cur} m=ctrl update image
make p={cur} m=chip_drv
make p={cur} m=version
make p={cur} m=gui_main update image
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
make p={cur} m=app_main update image
make p={cur} m=ctrl update image
make p={cur} m=custom_drv
make p={cur} m=custom_drv update image
make p={cur} m="mmk_main ctrl app_main" update image
make p={cur} m=mmk_main update image
make p={cur} m=bootloader update image
make p={cur} image
//


