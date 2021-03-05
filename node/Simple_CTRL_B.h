

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
Save:node\C\study\Macro_data_8910.h
Save:node\C\study\Macro_res_8910.h


/***********************************************************************/




// 其他问题
// bug
【FM】FM选项---帮助 中的内容需要修改，本机不带耳机，说明还有耳机相关的内容。

【按键】0键丝印功能（*、+、W、P）未实现
【来电】合盖状态，来电，报号过程中，对方挂断，手机会一直响来电铃声。此时进音乐，提示“文件格式不支持”。进FM，收音机不播放。
【来电】合盖状态来电，等响铃一会儿对方挂断，开盖，主屏不亮。
【112】拨打112等紧急电话时，按中间键可以在听筒、免提间切换，但soft-key没有文字或图标说明
【电话本】电话本中，联系人条数多余一屏时，联系人与搜索栏部分重叠显示
【客户需求--捷径设置】手机内有捷径功能，但无捷径设置功能
//
上下左右默认对应的功能不符合产品要求
sms--保存到草稿--提示满
文件管理--不选amr



1--SOS?
//
录音时--白色btn--换成灰色

HandleDialMenuWinMsg
//
IdleWin_HandleMsg

//
mp3--name,icon
//
捷径--先改翻译

MS_MMI_Main/source/mmi_app/common/h/common_mdu_def.h


// bt--状态不对
MAIN_SetIdleBlueToothState

// BG
#define IMAGE_COMMON_BG  IMAGE_THEME_BG
//
defined(SIMPLIFY_TTS_KEY_STAR_TIME)



MMK_CloseWin


// E535
IDLE_STATUSBAR_S98T_FLP_E535_STYLE
//
IDLE_FLP_STYLE




// 8910s
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_DEBUG m=custom_drv update image

make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_USER m=resource_main
make p=UIS8910_ROM_16MB_DS_USER m=ctrl update image
make p=UIS8910_ROM_16MB_DS_USER m=gui_main update image
// w0
make p=UIS8910_ROM_16MB_SS_WA06U_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_WA06U_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_WA06U_USER m=fota_bootloader
make p=UIS8910_ROM_16MB_SS_WA06U_USER m=fota_bootloader update image
make p=UIS8910_ROM_16MB_SS_WA06U_USER m=resource_main
make p=UIS8910_ROM_16MB_SS_WA06U_USER m=custom_drv update image
// sch
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=simulator_idh
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=app_main update image
make p=UIS8910_ROM_16MB_SS_GZ02F_USER m=custom_drv update image
// bmw0
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=simulator_idh
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=resource_main
make p=UIS8910_240x320BAR_16MB_SS_BMWATCH_USER m=app_main update image
// T107
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=simulator_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=resource_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=resource_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=app_main update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=ctrl update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=custom_drv
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m=custom_drv update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user m="ctrl app_main" update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_user image
//
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug m=simulator_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug m=ctrl update image
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug m=app_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug m=ctrl
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug m=mmk_main
make p=ums9117_240X320BAR_48MB_S98T_FLP_E535_debug image









