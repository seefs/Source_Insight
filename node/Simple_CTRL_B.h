

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
Save:node\C\study\Macro_modis_8910.h
Save:node\C\study\Macro_fun_8910.h
Save:node\C\study\Macro_slide_8910.h
Save:node\C\study\Macro_zmaee_8910.h
Save:node\C\study\Macro_data_8910.h
Save:node\C\study\Macro_res_8910.h
Save:node\C\study\Macro_nv_8910.h


/***********************************************************************/

SOS





//
正常灭屏关灯效, 关机灭屏除外



//
菜单
----开关(总开关)
//  MMIAPISET_GetLedSwitchType
----控制灯效(亮屏/开关机/来电/音乐)
//  MMIAPISET_GetLedControlType
----灯效效果(1,2,3,4,5,6)
//  MMIAPISET_GetLedMode

// 具体位置我再找下, fun:
//	ET6037Y_Open();
//	ET6037Y_Close();



//
128*128 电池充不满

//
视频分辨率


//
好像可以在resource_main.mk，app_main.mk里加宏，默认删debug的铃声


//
没有idle:time_date



//
二维码

//
GUIRES_DisplayImg
GUI_DisplayBg
//


//
//彩信
MMK_CloseWin
MMK_SendMsg
//
sms_ring_不支持,pubwin不自动消失

//


#define Trace_Log_Buf_Print            SCI_TRACE_LOW





// 8910s
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_USER m=resource_main
make p=UIS8910_ROM_16MB_DS_USER m=ctrl update image
make p=UIS8910_ROM_16MB_DS_USER m=gui_main update image
make p=UIS8910_ROM_16MB_DS_USER image
// launcher
make p=UIS8910_128x160BAR_16MB_SS_WA03U_T2_V2_USER m=simulator_idh
// 8910wa
make p=UIS8910_128x160BAR_16MB_SS_WA03U_T2_V2_USER m=simulator_idh
// thir_wa
make p=UIS8910_240x240BAR_16MB_SS_USER m=simulator_idh
make p=UIS8910_240x240BAR_16MB_SS_USER new job=12
make p=UIS8910_240x240BAR_16MB_SS_USER m=resource_main
// w0
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_DEBUG m=simulator_idh
make p=UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_DEBUG m=fota_bootloader
make p=UIS8910_ROM_16MB_SS_WA07U_DEBUG m=fota_bootloader update image
make p=UIS8910_ROM_16MB_SS_WA07U_DEBUG m=resource_main
make p=UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_USER m=resource_main update image
make p=UIS8910_ROM_16MB_SS_WA07U_DEBUG m="resource_main app_main" update image
make p=UIS8910_ROM_16MB_SS_WA07U_F30Z_DEBUG m="chip_drv app_main" update image
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
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535B_user m=simulator_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=resource_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535B_user m=resource_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=app_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=ctrl update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=custom_drv
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=custom_drv update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m="mmk_main ctrl app_main" update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m="bootloader app_main" update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=mmk_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=bootloader update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=tf_fdl
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m="fdl1 fdl2 tf_fdl bootloader"
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=bootloader
//
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug m=app_main update image
//
//


