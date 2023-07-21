
// base
Save:node\Macro_File.h
Save:node\Macro_History.h
Save:node\Macro_Future.h
Save:node\Macro_Memory.h
Save:node\Macro_tmp.h
patch:ssh\Macro_user_psw.h

// C
Save:node\C\Macro_Note_C.h
patch:node\Macro_node_patch.h    __code__
//
Save:node\C\project\Macro_Note_{0}.h
Save:node\C\project\Macro_cfg_{0}.h
Save:node\C\study\
Save:node\C\study\Macro_app_{0}.h
Save:node\C\study\Macro_gui_{0}.h
Save:node\C\study\Macro_fun_{0}.h
Save:node\C\study\Macro_res_{0}.h
Save:node\C\study\Macro_nv_{0}.h
// ext
Save:node\C\study\Macro_slide_8910.h
Save:node\C\study\Macro_zmaee_8910.h
Save:node\C\study\Macro_tihu_8910.h
// 功能测试
Save:Help\Macro_Note_Test.h   goto_word

/***********************************************************************/







// set cur
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
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
make p={cur} m={simulator} -j10
make p={cur} m={simulator10} VS2010=1 -j10
make p={cur} m={app_main}
make p={cur} m={app_main} update image
make p={cur} m={resource_main}
make p={cur} m={resource_main} VS2010=1
make p={cur} m=app_watch_main
make p={cur} m=custom_drv
make p={cur} m=dc
make p={cur} m=custom_drv {app_main}  update image
make p={cur} m=ctrl
make p={cur} m=chip_drv
make p={cur} m=nv_parameter
make p={cur} m=version
make p={cur} m=gui_main
make p={cur} m=bootloader
make p={cur} m=tf_fdl
make p={cur} image

