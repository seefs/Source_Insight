
����·������:
//basePath = 

//Ŀ¼:
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
Save:node\C\study\Macro_patch_third.h \[1.10\] ������
Save:node\C\study\Macro_patch_third.h \[1.11\] 
Save:node\C\study\Macro_patch_third.h \[1.12\] 
// �������
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
// --enter
//		==>MMIAPIMENU_EnterLebao
//		====>LEBAO_ExitOtherApp
//		======>�˳�xmly
//		====>StartLebaoApp
//		======>LEBAO_RequestVirtualHandle
//		======>lebao_event_timer_proc
app:lebao\music\view\lebao_app.c  MMIAPIMENU_EnterLebao
// --�˳�
//		==>MMIAPIMENU_EnterLebao        # ��һ������
//		====>MMIAPIMENU_real_QuitLebao  # ����
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
// ������ѡ����ͣ, ֹͣ, �����в�֧�ּ�������;  
// �����Ҫ�������ŵȶ���,  ��Ҫ�������һ���ж�״̬����¼���.
//�������ſ����� lebao_ctrl_resume_music(0, 0, NULL);  
// ����ǵ����� lebao_player_stop_playing(), ��֧�ּ�������.
//��Ҫ��ס��һ�ε�״̬, ����� LEBAO_STATUS_PLAY,  ���� lebao_ctrl_pause_music, 
//   Ȼ��ֱ�� lebao_ctrl_resume_music;  ����״̬���ִ���� lebao_player_stop_playing, 
//   �Ͳ��ܼ���������, ��Ϊ���ŵļ�¼�����;

// state
app:lebao\music\view\lebao_app.c  lebao_playing_enter_resume_state

### ϵͳʹ��2�� sim��ʱ.
//1. ϵͳ���������ʹ����������; ��һ�ε�¼��ҪУ�������֤, ʹ�� sim 2G����.
//	��¼�ɹ���, һ���ڵĵ�¼��ʹ����������, У����ʷ token ֵ.
//	������� sim �� / �˳���¼/����˺�, �ᴥ��������֤��¼.

//2. 2G����/����(��Ա����ʹ��)/�������õ�ѡ��.
//	a. Ĭ��ȱʡΪ��һ�����ڵ� sim ��.
//	b. ʹ�ú��� lebao_get_active_sim(),  MMIAPISET_GetActiveSim() �жϻ�ѡ�� sim ��.
//	c. migu û���ṩ sim ��ѡ��� ui ����, ���������. 
//	d. �漰 sim ��ѡ�񼰶���/�绰����/�������õ� ����API, �������ļ� lebao\music\view\lebao_app.c.
	
// 3. ��������ѡ��
//	a. migu����ʱͨ�� lebao_active_network() ѡ����������ͨ��.	
//		==>lebao_pdp_active
//		====>lebao_get_active_sim
app:lebao\music\view\lebao_app.c  BOOLEAN^lebao_active_network
//	b. MMIAPIPDP_PsIsPdpLinkExist() �ж��Ƿ��Ѵ��� Pdp Link ,
//	   Ĭ�����δ˲���.
//	c. lebao_pdp_active() ѡ�񼤻� pdp link.
//		ͨ�� lebao_get_active_sim() �� MMIAPISET_GetDataSimFromNV() ѡ�񼤻������ͨ��.
app:lebao\music\view\lebao_app.c  lebao_get_active_sim
//	d. migu �����в��޸���������ͨ��.
//	e. migu �˳�ʱ ���� MMIAPIPDP_Deactive(), 
	
// 4. �������ýӿ�
//		==>MMIAPISET_GetActiveSim
//		====>���� lebao_get_active_sim
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
//		====>LIBXMLYAPI_CreateXysdkMainWin  # ������
//

// stop
// ��ȫ�ǿ⣬��������ͣ
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
// ��ʱ�ļ�
code:\txt\fota\
code:\txt\fota\rs_8910_git.txt  xxx





[1.5] bt
### 
//SPCSS01123086
//�繵ͨ��pbap sever��֧�֣�client��Ҫ������MOCOR_20A_MP_W22.04.6_P5ȡ�п�pbap�Ĺ��̣�
//��������ֻ��Ļ���clientӦ��Ҳûʲô�ã���֪Ϥ
//
//���¸����£�����������û��


[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] ������

### replace_nv
// �����滻
Save:Help\Other\
// 1.�滻�������
Save:Help\Other\Macro_Help_replace.h
// 2.�滻����һNV
Save:Help\Other\Macro_Help_replace_2n1.h
Save:Help\Other\Macro_Help_replace_2n1_path.h

// tool
tool_mini:4_�����ֿ�\
tool_mini:4_�����ֿ�\sprd_nv_exist.xlsm

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





