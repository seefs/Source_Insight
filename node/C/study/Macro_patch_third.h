
����·������:
//basePath = 

//Ŀ¼:
// 1. 
Save:node\C\study\Macro_patch_third.h \[1.1\] zfb_107
Save:node\C\study\Macro_patch_third.h \[1.2\] migu_107
Save:node\C\study\Macro_patch_third.h \[1.3\] xmly_107
Save:node\C\study\Macro_patch_third.h \[1.4\] 
Save:node\C\study\Macro_patch_third.h \[1.5\] 
Save:node\C\study\Macro_patch_third.h \[1.6\] 
Save:node\C\study\Macro_patch_third.h \[1.7\] 
Save:node\C\study\Macro_patch_third.h \[1.8\] 
Save:node\C\study\Macro_patch_third.h \[1.9\] 
Save:node\C\study\Macro_patch_third.h \[1.10\] 
Save:node\C\study\Macro_patch_third.h \[1.11\] 
Save:node\C\study\Macro_patch_third.h \[1.12\] 
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] zfb_107
// 
prj:project_{cur}.mk   ALIIOT_SUPPORT = TRUE
//
//	lebao_playing_enter_stop_state(0);
//	lebao_ctrl_pause_music
//	lebao_ctrl_resume_music;
//
//lebao_playing_enter_stop_state() 
// ������ѡ����ͣ, ֹͣ, �����в�֧�ּ�������;  
// �����Ҫ�������ŵȶ���,  ��Ҫ�������һ���ж�״̬����¼���.
//�������ſ����� lebao_ctrl_resume_music(0, 0, NULL);  
// ����ǵ����� lebao_player_stop_playing(), ��֧�ּ�������.
//��Ҫ��ס��һ�ε�״̬, ����� LEBAO_STATUS_PLAY,  ���� lebao_ctrl_pause_music, 
//   Ȼ��ֱ�� lebao_ctrl_resume_music;  ����״̬���ִ���� lebao_player_stop_playing, 
//   �Ͳ��ܼ���������, ��Ϊ���ŵļ�¼�����;


// ע��Ӻ�
make/refbase/refbase.mk NV_Ali_Data.xml
make/perl_script/UMS9117.xml  Ali_DATA


// --mbedtls
//   ����Ŀ¼
prj:project_{cur}.mk   MBEDTLS_SUPPORT = TRUE
UMS9117.modules  MBEDTLS_SUPPORT
Third-party/mbedtls/V206/include/mbedtls/aes.h

// --libc
//   Ĭ�Ͽ�
make/libc/libc.mk
UMS9117.modules  libc

// --httpc
//   Ĭ�Ͽ�, ����mbedtls
make/httpc/httpc.mk





[1.2] migu_107
### __migu__
// �˳�
app:lebao\music\view\lebao_app.c  MMIAPIMENU_QuitLebao
//
app:lebao\music\view\lebao_app.c  MMIAPIMENU_EnterLebao

//
app:lebao\music\view\lebao_app.c  lebao_get_volume
app:lebao\music\view\lebao_app.c  lebao_set_volume
//    uint8 current_volume = MMIAPISET_GetMultimVolume();
//
images:lebao\MMI_RES_DEFAULT\IMAG\
//
MS_MMI_Main\source\resource\mmi_res_prj_def.h  LEBAO_MUSIC_SUPPORT
app:lebao\h\lebao_mdu_def.h  lebao_get_volume


// --log
app:lebao\applib\base\inc\
app:lebao\applib\base\inc\port_cfg.h_bak



[1.3] xmly_107
### __xmly__
//		==>MMIMAINMENU_StartXysdk
//		====>LIBXMLYAPI_CreateXysdkMainWin  # ������
//

// stop
// ��ȫ�ǿ⣬��������ͣ
Third-party\xmly\api\h\libxmly_api.h
//		==>LIBXMLYAPI_SetAudioPlayerStop
//		==>LIBXMLYAPI_AppExit




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



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





