

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
Save:node\C\study\Macro_data_8910.h
Save:node\C\study\Macro_res_8910.h
Save:node\C\study\Macro_nv_8910.h
//
Save:node\C\study\Macro_slide_8910.h
Save:node\C\study\Macro_zmaee_8910.h
Save:node\C\study\Macro_sccard_8910.h
Save:node\C\study\Macro_socket_8910.h


/***********************************************************************/





// 8910s
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_DEBUG m=resource_main update image
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
make p=UIS8910_ROM_16MB_SS_WA07U_F8Z_QQVGA_DEBUG m=simulator_idh
make p=UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_DEBUG m=resource_main
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30ZL_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m=resource_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m="resource_main app_main" update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m="custom_drv app_main" update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER image
// w07 差异(不然监拍会显示页面)
make p=UIS8910_ROM_16MB_SS_WA07U_USER m=isp_service update image
// bmw0
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=simulator_idh
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=resource_main
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=app_watch_main update image
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=app_watch_main
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=chip_drv
// sch
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=custom_drv update image
// 6531
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A m=simulator
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A m=resource
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A m=app update image
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A m=app
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A image
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A m="gui app" update image
make p=sc6531_F55S_32X32_240X320_formal_SUOAI_Z6_A new job=12
// T107
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=simulator_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=resource_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=app_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=ctrl update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=custom_drv
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=custom_drv update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m="mmk_main ctrl app_main" update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=mmk_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=bootloader update image
//


