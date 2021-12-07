

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
Save:node\C\project\Macro_Note_8910.h
Save:node\C\project\Macro_cfg_8910.h
Save:node\C\study\
Save:node\C\study\Macro_app_8910.h
Save:node\C\study\Macro_gui_8910.h
Save:node\C\study\Macro_fun_8910.h
Save:node\C\study\Macro_doc_8910.h
Save:node\C\study\Macro_res_8910.h
Save:node\C\study\Macro_nv_8910.h
//
Save:node\C\study\Macro_slide_8910.h
Save:node\C\study\Macro_zdt_8910.h
Save:node\C\study\Macro_zmaee_8910.h
Save:node\C\study\Macro_socket_8910.h
Save:node\C\study\Macro_patch_8910.h
//
Save:node\C\project\Macro_Note_MTK.h
Save:node\C\project\Macro_cfg_MTK.h
Save:node\C\study\
Save:node\C\study\Macro_app_MTK.h
Save:node\C\study\Macro_gui_MTK.h
Save:node\C\study\Macro_fun_MTK.h
Save:node\C\study\Macro_doc_MTK.h
Save:node\C\study\Macro_res_MTK.h
Save:node\C\study\Macro_nv_MTK.h


/***********************************************************************/





//
make {cur} GSM new
make {cur} GSM remake
make {cur} GSM remake custom
make {cur} GSM remake plutommi
make {cur} GSM Resgen
make {cur} GSM remake mmiresource
make {cur} GSM gen_modis
// 8910s
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_USER m=resource_main update image
make p=UIS8910_ROM_16MB_DS_USER m=ctrl update image
make p=UIS8910_ROM_16MB_DS_USER m=gui_main update image
make p=UIS8910_ROM_16MB_DS_DEBUG image
// launcher
make p=UIS8910_128x160BAR_16MB_SS_WA03U_T2_V2_USER m=simulator_idh
// 8910wa
make p=UIS8910_128x160BAR_16MB_SS_WA03U_T2_V2_USER m=simulator_idh
// thir_wa
make p=UIS8910_240x240BAR_16MB_SS_USER m=simulator_idh
make p=UIS8910_240x240BAR_16MB_SS_USER new job=12
make p=UIS8910_240x240BAR_16MB_SS_USER m=resource_main
// w0
make p=UIS8910_240x320BAR_16MB_SS_WA17U_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_AMT_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_AMT_USER m=custom_drv update image
make p=UIS8910_240x320BAR_16MB_SS_WA03U_T2_HERO_user m=resource_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_F3Z_USER m=dc update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m="resource_main app_main" update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m="custom_drv app_main" update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_USER m=version
make p=UIS8910_ROM_16MB_SS_WA08U_X6C_USER m=chip_drv
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_AMT_USER m=custom_drv
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_AMT_USER image
// w07 差异(不然监拍会显示页面)
make p=UIS8910_ROM_16MB_SS_WA07U_USER m=isp_service update image
// bmw0
make p=UIS8910_ROM_16MB_SS_BMWATCH_FS_8_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_BMWATCH_FS_USER m=resource_main
make p=UIS8910_ROM_16MB_SS_BMWATCH_FS_USER m=app_watch_main update image
make p=UIS8910_ROM_16MB_SS_BMWATCH_FS_8_USER m=app_watch_main
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=chip_drv
make p=UIS8910_ROM_16MB_SS_BMWATCH_FS_USER m=custom_drv
make p=UIS8910_ROM_16MB_SS_BMWATCH_FS_8_USER image
// sch
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=custom_drv update image
// 6531
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 m=simulator
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 m=resource
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 m=app update image
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 m=app
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 image
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 m="gui app" update image
make p=sc6531_K220S_32X32_QCIF_HCG_H1621_1 new job=12
// T107
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug m=simulator_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug m=resource_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug m=app_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug m=ctrl update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_user m=custom_drv
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_user m=custom_drv update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug m="mmk_main ctrl app_main" update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug m=mmk_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_31_user m=bootloader update image
//


