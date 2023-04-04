
基础路径设置:
//basePath = 

//目录:
// 1. 
Save:node\C\study\Macro_patch_third.h \[1.1\] zfb_107
Save:node\C\study\Macro_patch_third.h \[1.2\] migu_107
Save:node\C\study\Macro_patch_third.h \[1.3\] xmly_107
Save:node\C\study\Macro_patch_third.h \[1.4\] fota_file
Save:node\C\study\Macro_patch_third.h \[1.5\] bt
Save:node\C\study\Macro_patch_third.h \[1.6\] 
Save:node\C\study\Macro_patch_third.h \[1.7\] 
Save:node\C\study\Macro_patch_third.h \[1.8\] 
Save:node\C\study\Macro_patch_third.h \[1.9\] 
Save:node\C\study\Macro_patch_third.h \[1.10\] 批处理
Save:node\C\study\Macro_patch_third.h \[1.11\] 
Save:node\C\study\Macro_patch_third.h \[1.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] zfb_107
// 
prj:project_{cur}.mk   ALIIOT_SUPPORT = TRUE

// --enter
//		==>WatchLAUNCHER_Alipay_Enter
//		====>
//		======>
//		========>
//		==========>
//		============>
app:aliiot\c\aliiot_alipay_menu.c  WatchLAUNCHER_Alipay_Enter

// sim
app:aliiot\c\
app:aliiot\c\aliiot_alipay_interface.c  aliiot_tpvsz_get_active_sim


// 注意加宏
make/refbase/refbase.mk NV_Ali_Data.xml
make/perl_script/UMS9117.xml  Ali_DATA


// --mbedtls
//   更换目录
prj:project_{cur}.mk   MBEDTLS_SUPPORT = TRUE
UMS9117.modules  MBEDTLS_SUPPORT
Third-party/mbedtls/V206/include/mbedtls/aes.h

// --libc
//   默认开
make/libc/libc.mk
UMS9117.modules  libc

// --httpc
//   默认开, 引用mbedtls
make/httpc/httpc.mk





[1.2] migu_107
### __migu__
// --enter
//		==>MMIAPIMENU_EnterLebao
//		====>LEBAO_ExitOtherApp
//		======>退出xmly
//		====>StartLebaoApp
//		======>LEBAO_RequestVirtualHandle
//		======>lebao_event_timer_proc
app:lebao\music\view\lebao_app.c  MMIAPIMENU_EnterLebao
// --退出
//		==>MMIAPIMENU_EnterLebao        # 不一定会走
//		====>MMIAPIMENU_real_QuitLebao  # 必走
app:lebao\music\view\lebao_app.c  MMIAPIMENU_QuitLebao

//
app:lebao\music\view\lebao_app.c  lebao_get_volume
app:lebao\music\view\lebao_app.c  lebao_set_volume
//    uint8 current_volume = MMIAPISET_GetMultimVolume();

//
images:lebao\MMI_RES_DEFAULT\IMAG\
//
MS_MMI_Main\source\resource\mmi_res_prj_def.h  LEBAO_MUSIC_SUPPORT
app:lebao\h\lebao_mdu_def.h  IMAGE_LEBAO_LOGO


//	lebao_playing_enter_stop_state(0);
//	lebao_ctrl_pause_music
//	lebao_ctrl_resume_music;
//
//lebao_playing_enter_stop_state() 
// 函数中选择暂停, 停止, 例子中不支持继续播放;  
// 如果需要继续播放等动作,  需要你这边做一下判断状态并记录标记.
//继续播放可以用 lebao_ctrl_resume_music(0, 0, NULL);  
// 如果是调用了 lebao_player_stop_playing(), 不支持继续播放.
//需要记住上一次的状态, 如果是 LEBAO_STATUS_PLAY,  可以 lebao_ctrl_pause_music, 
//   然后直接 lebao_ctrl_resume_music;  其它状态如果执行了 lebao_player_stop_playing, 
//   就不能继续播放了, 因为播放的记录清除了;

// state
app:lebao\music\view\lebao_app.c  lebao_playing_enter_resume_state

### 系统使用2个 sim卡时.
//1. 系统启动后必须使用数据流量; 第一次登录需要校验短信认证, 使用 sim 2G短信.
//	登录成功后, 一月内的登录仅使用数据网络, 校验历史 token 值.
//	如果更换 sim 卡 / 退出登录/清除账号, 会触发重新认证登录.

//2. 2G短信/语音(会员订购使用)/铃声设置的选择.
//	a. 默认缺省为第一个存在的 sim 卡.
//	b. 使用函数 lebao_get_active_sim(),  MMIAPISET_GetActiveSim() 判断或选择 sim 卡.
//	c. migu 没有提供 sim 卡选择的 ui 操作, 参数保存等. 
//	d. 涉及 sim 卡选择及短信/电话拨打/铃声设置等 操作API, 保存在文件 lebao\music\view\lebao_app.c.
	
// 3. 数据流量选择
//	a. migu启动时通过 lebao_active_network() 选择数据流量通道.	
//		==>lebao_pdp_active
//		====>lebao_get_active_sim
app:lebao\music\view\lebao_app.c  BOOLEAN^lebao_active_network
//	b. MMIAPIPDP_PsIsPdpLinkExist() 判断是否已存在 Pdp Link ,
//	   默认屏蔽此操作.
//	c. lebao_pdp_active() 选择激活 pdp link.
//		通过 lebao_get_active_sim() 或 MMIAPISET_GetDataSimFromNV() 选择激活的数据通道.
app:lebao\music\view\lebao_app.c  lebao_get_active_sim
//	d. migu 运行中不修改数据流量通道.
//	e. migu 退出时 运行 MMIAPIPDP_Deactive(), 
	
// 4. 铃声设置接口
//		==>MMIAPISET_GetActiveSim
//		====>换成 lebao_get_active_sim
app:lebao\music\view\lebao_app.c  lebao_set_ringtone


### log
app:lebao\applib\base\inc\
app:lebao\applib\base\inc\port_cfg.h_bak
//
Save:node\C\study\Macro_patch_8910.h  __Trace__
//	Trace_Log_Buf_Print("MMIBT_A2DPCallBackFunc msg_id=%x",  pMsg->msg_id);



[1.3] xmly_107
### __xmly__
//		==>MMIMAINMENU_StartXysdk
//		====>LIBXMLYAPI_CreateXysdkMainWin  # 库里面
//

// stop
// 完全是库，做不了暂停
Third-party\xmly\api\h\libxmly_api.h
//		==>LIBXMLYAPI_SetAudioPlayerStop
//		==>LIBXMLYAPI_AppExit

// --enter
//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>



[1.4] __fota_file__

### fota_rs_8910
// 临时文件
code:\txt\fota\
code:\txt\fota\rs_8910_git.txt  xxx





[1.5] bt
### 
//SPCSS01123086
//如沟通，pbap sever不支持，client需要升级到MOCOR_20A_MP_W22.04.6_P5取有开pbap的工程，
//如果你做手机的话，client应该也没什么用，请知悉
//
//重新更正下：拨号器功能没有


[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 批处理

### replace_nv
// 批量替换
Save:Help\Other\
// 1.替换电池曲线
Save:Help\Other\Macro_Help_replace.h
// 2.替换二合一NV
Save:Help\Other\Macro_Help_replace_2n1.h
Save:Help\Other\Macro_Help_replace_2n1_path.h

// tool
tool_mini:4_翻译字库\
tool_mini:4_翻译字库\sprd_nv_exist.xlsm

// path
HW:{project}\
HWNV:\


### search_macro
//
Save:Help\Other\Macro_Help_search.h



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





