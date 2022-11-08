
Save
Save:node\Macro_File.h
Save:node\Macro_History.h
Save:node\Macro_Future.h
Save:node\Macro_Memory.h
Save:node\Macro_tmp.h
patch:ssh\Macro_user_psw.h

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
// ext
Save:node\C\study\
Save:node\C\study\Macro_slide_8910.h
Save:node\C\study\Macro_zmaee_8910.h
Save:node\C\study\Macro_tihu_8910.h
Save:node\C\study\Macro_patch_third.h
//
Save:node\C\project\Macro_bug.h  __w03__
Save:node\C\study\Macro_tihu_8910.h  __log__
// 功能测试
Save:Help\Macro_Note_Test.h   goto_word
// 加速固态硬盘
Save:node\ToolsMsg\Macro_win10.h

/***********************************************************************/




// 支付宝ansi

InitCBChannelList




//w03--电话本--删除

// 字库删一半，专门抓log

//w03--fota--晚上升级


// 指令查看上课禁用
// 微信移到H盘

//t6a
// test--心率显示不全
// 上课禁用--中途设置不生效
// 开机默认sim不是搜索中

//w48E闹钟
//上课禁用week， 最后一个时间段是否会销毁


//关于pws，看下有没有这个宏MMI_ETWS_SUPPORT，这个是跟着小区广播功能的
//s_cmas_pws_channel_info 这个是台湾的配置数据
//电池图标--不对


//MMI_WATCH_ADAPTER
//MMI_WATCH_NEW_STYLE
//MMI_WATCH_FIX_BUG
//MMI_WATCH_TEMP_STYLE
//MAINLCD_SIZE_240X284
//MAINLCD_DEV_SIZE_240X284
SPDE_UI_STYLE




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
make p={cur} m="custom_drv {app_main}" update image
make p={cur} m=ctrl
make p={cur} m=chip_drv
make p={cur} m=version
make p={cur} m=gui_main
make p={cur} image

