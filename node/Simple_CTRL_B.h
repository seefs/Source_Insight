

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
Save:node\C\study\Macro_modis_8910.h
Save:node\C\study\
Save:node\C\study\Macro_8910_Debug.h
Save:node\C\study\Macro_data_8910.h


/***********************************************************************/


//
拨号--智能拨号--第1次好像不正常




GUISTR_DrawTextToLCDInRect





20
35
10
222
4
30
321





//
翻译


SBD_DIAL_DEC_DTMF_TONE
DWORLD_CLOCK_SUPPORT
DUI_MULTILAYER_SUPPORT
MMI_POWER_VOL_SILENT




// g-8910s
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
//
make p=UIS8910_240x320BAR_16MB_SS_USER m=simulator_idh
make p=UIS8910_240x320BAR_16MB_SS_USER m=app_main update image
//
make p=UIS8910_240x320BAR_16MB_DS_USER m=custom_drv
make p=UIS8910_240x320BAR_16MB_DS_USER m=app_main update image
// d--w0
make p=UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_USER m=app_main update image
make p=UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_USER m=simulator_idh
make p=UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_USER m=fota_bootloader
make p=UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_USER m=fota_bootloader update image
make p=UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_USER m=resource_main
make p=UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_DEBUG m=custom_drv update image
// g-sch
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=custom_drv update image
// T107
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=simulator_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=resource_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=main




