
����·������:
//basePath = 
mkPath = SPDE_PRJ\K220U_SHY_517T\project_UIS8910_ROM_16MB_DS_USER.mk
mk:\\
cfgPath = SPDE_PRJ\K220U_SHY_517T\uis8910_phone_user_base_config.cfg
cfg:\\
//imgPath = build\UIS8910_240x320BAR_16MB_SS_WA03U_T2_V2_USER_builddir\img
tmpPath = build\tmp
tmp:\\

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\C\project\Macro_cfg_8910.h \[1.1\] AUDIO, TONE
Save:node\C\project\Macro_cfg_8910.h \[1.2\] PB
Save:node\C\project\Macro_cfg_8910.h \[1.3\] SMS
Save:node\C\project\Macro_cfg_8910.h \[1.4\] MMS
Save:node\C\project\Macro_cfg_8910.h \[1.5\] BROWSER
Save:node\C\project\Macro_cfg_8910.h \[1.6\] BT
Save:node\C\project\Macro_cfg_8910.h \[1.7\] RECORD
Save:node\C\project\Macro_cfg_8910.h \[1.8\] Lcd---------------
Save:node\C\project\Macro_cfg_8910.h \[1.9\] shortcut----------menu
Save:node\C\project\Macro_cfg_8910.h \[1.10\] 
Save:node\C\project\Macro_cfg_8910.h \[1.11\] 
Save:node\C\project\Macro_cfg_8910.h \[1.12\] 
//
Save:node\C\project\Macro_cfg_8910.h \[2.1\] IM
Save:node\C\project\Macro_cfg_8910.h \[2.2\] DTMF
Save:node\C\project\Macro_cfg_8910.h \[2.3\] ���ӱ���
Save:node\C\project\Macro_cfg_8910.h \[2.4\] 
Save:node\C\project\Macro_cfg_8910.h \[2.5\] 
Save:node\C\project\Macro_cfg_8910.h \[2.6\] DL
Save:node\C\project\Macro_cfg_8910.h \[2.7\] FM
Save:node\C\project\Macro_cfg_8910.h \[2.8\] WIFI
Save:node\C\project\Macro_cfg_8910.h \[2.9\] SS
Save:node\C\project\Macro_cfg_8910.h \[2.10\] Tool
Save:node\C\project\Macro_cfg_8910.h \[2.11\] lib--------------
Save:node\C\project\Macro_cfg_8910.h \[2.12\] build ����������
Save:node\C\project\Macro_cfg_8910.h \[2.13\] build ʡ�ռ�
Save:node\C\project\Macro_cfg_8910.h \[2.14\] spiflash_cfg
Save:node\C\project\Macro_cfg_8910.h \[2.15\] marco
Save:node\C\project\Macro_cfg_8910.h \[2.16\] Lib
Save:node\C\project\Macro_cfg_8910.h \[2.17\] FLASH (��/С�汾)
Save:node\C\project\Macro_cfg_8910.h \[2.18\] build map
Save:node\C\project\Macro_cfg_8910.h \[2.19\] 
Save:node\C\project\Macro_cfg_8910.h \[2.20\] 
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] AUDIO, TONE


// ˫��Ͳ
//	DUAL_RECEIVER_SWITCH_SUPPORT
SPDE_PRJ/K220U_HYBL_H660A_HTX_LTC/project_UIS8910_ROM_16MB_DS_USER.mk


## TONE
SPDE_PRJ/K220U_HYBL_H660A/uis8910_phone_user_base_config.cfg  YOUNGTONE_TTS_LIB
// YOUNGTONE_TTS_LIB = MAN


[1.2] PB
## "PB��SMS�����޸�.txt"��

//1�����绰����Ŀ����Ϊ5000����Ҫ�����²������(������������ΪX��=5000 - �汾Ĭ��������)��
//a���޸���Ŀ, ������Ϊ5000
MS_MMI_Main\source\mmi_service\export\inc\mmipb_common.h  MMIPB_NV_MAX_RECORD_NUM
//		#define MMIPB_NV_MAX_RECORD_NUM     200 //500 

MS_MMI_Main\source\mmi_app\app\pb\h\mmipb_nv.h  MMINV_MAX_PHONEBOOK_RECORDS
//		#define MMINV_MAX_PHONEBOOK_RECORDS     MMIPB_NV_MAX_RECORD_NUM

//b�����ӵ�RAM����
//	ÿ����100����ϵ�ˣ��������Լ24K��STATIC heap�ռ䣬��ˣ����ӵĿռ�Ϊ(24*X/100)
//	�������ӵĿռ䣨����ΪX��������mem_cfg.c�� MAX_STATIC_SPACE_SIZE ��MAX_SYSTEM_SPACE_SIZE��С����
//	MAX_STATIC_SPACE_SIZE��С + X
//	MAX_SYSTEM_SPACE_SIZE��С - X
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252

//ÿ����100����ϵ��,APP HEAP���������
//����һ�����룺��14K
//���������룺  ��16K
//...
//
//��ˣ�������RAM��(14 + 2*��K - 1��) * X / 100  -- KΪ������������MMIPB_MAX_NV_PHONE_NUM@mmi_custom_define.h���壩

//��˵��������"+ X" "- X"ֻ�Ǳ��ص��޸ķ�����ʵ��ϵͳ���ܻ������࣬MAX_SYSTEM_SPACE_SIZE���ܵ����Ĵ�С��СһЩ�������ʵ�΢��(��50KΪ��λ)��ֻҪ���벻��RAM�����ɡ�

//��ˣ�������ӵ������󣬻ᵼ��ϵͳ�ռ��С��Ӱ��browser/camera�ȴ��ڴ�Ӧ�ã����գ�������

//c��flash ����
//������桶Flash �������˵����
//
//d���޸ĺ������룬�����ֻ�������ģʽ->Running NV Counting���鿴MMI running NV item num�������ֵԶԶС��MAX_MMI_NV_USER_ITEM_NUM(@mmi_nv.h)�����ֵ��
//����Ҫ�����沽��ĵ�����������Ҫ�������ĵ�����
//
//e���޸�MAX_MMI_NV_USER_ITEM_NUM(@mmi_nv.h):MAX_MMI_NV_USER_ITEM_NUMֵΪ��MAX_MMI_NV_USER_ITEM_NUM + X��
//
//f���޸�NV_MAX_ID��mem_cfg.c����NV_MAX_IDֵΪ��NV_MAX_ID + X��
//
//g���޸�MAX_NV_USER_ITEM_NUM(@nv_item_id.h):MAX_NV_USER_ITEM_NUMֵΪ��MAX_NV_USER_ITEM_NUM + X��
//
//h����Ҫ��������������ļ�umem.a��efs.a
//   MAX_NV_USER_ITME_NUM-->NV_UDISK_BASE-->umem.a
//   NV_MAX_ID-->LAST_NV_ITEM-->efs.a  
//
//ע��efs��NV���������<0x3fff(16383)��
//    1���鿴EFS_ItemInit��@efs_item.c�����:SCI_ASSERT(EFS_MAX_NV_ITEM < ITEM_MASK_ID)
//    2��#define ITEM_MASK_ID 0x3FFF
//-------------------------------------------------------------------------


## Flash �������˵��(�ͻ�����ǰ����ıز���)��
//	����runing nv���޸ģ��޸��ֻ��ж�������/Pb����/����Ӧ��NV��ȣ���
//	1��ͨ����غ��޸��ֻ���������
//	2��a���޸ĺ������룬�����ֻ�������ģʽ->Running NV Counting���鿴All running NV size��ֵ�����趨��Ϊall_running_nv_size��
//	   b���鿴��Ӧ��spiflash_cfg.c�ļ���running nv���õĴ�С��(RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE)
//	   c����������(RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE) >= all_running_nv_size + FLASH_SECTOR_SIZE
//
//	spi flash��������Ĺ�ϵ����С�������Ӧ���̵�spiflash_cfg.c��
//	     (RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE) + FIXED_NV_SIZE + (UMEM_SECTOR_NUM*FLASH_SECTOR_SIZE) + PS BIN SIZE(���̵�*stone.bin�ļ���resource+ps code��ѹ�����ļ���С) <= PHY_FLASH_SIZE������flash�Ĵ�С����λBytes��
//	    ע�������ʽÿ��NV�Ĵ�СҪSector���루û�дﵽ1��Sector��С����1��Sector��С���㣩
//
//	��ע�⡿ǰ�湫ʽ�к��Ӧ�ڷ�þ��Flash������þ��Flash����Ҫ�鿴���޸Ķ�Ӧ��*_B���ĺ�
//	���磺RUNNIN_NV_SECTOR_NUM_B�ȵȣ�������RUNNIN_NV_SECTOR_NUM��

## ���� 
make\app_main\release_app_macro.mk  MMIPB_MAX_COUNT_200



[1.3] SMS

## ��ε�������Ϣ����
// 1.�޸Ŀ��ƶ��Ÿ����ĺ꣺
BASE\l4\export\inc\mn_type.h  MN_SMS_IN_NV_MAX_NUM
//		#define MN_SMS_IN_NV_MAX_NUM        200      // the max SMS num in NV 

MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  MMINV_MAX_SMS_RECORDS
//		#define MMINV_MAX_SMS_RECORDS    200

// (CQû˵�����Ҳ����)
MS_MMI_Main\source\mmi_service\export\inc\mmi_custom_define.h  define^MMISMS_MAX_SYS_SIM_SMS_NUM
//		#define MMISMS_MAX_SYS_SIM_SMS_NUM    200

// 2.����RUNNINT NV��С����Ҫ��Ӧ��flash cfg����������running nv��sector��Ŀ
// ����ϢRUNNINT NV���Ӵ�С�ļ��㷽ʽΪ�� ��������Ŀ* sizeof(MN_SMS_MESSAGE_ITEM_T)
//  100*230/1024 =  22.46
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  FLASH_SIZE_128MBIT
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  559
//		#define  RUNNIN_NV_SECTOR_NUM       11

// 3.����RAM�Ĵ�С
chip_drv\source\prj_win\mem_cfg_win32.c  MAX_STATIC_HEAP_SIZE
// ���� MAX_STATIC_HEAP_SIZE �Ĵ�С��
// ����Ϣ MAX_STATIC_HEAP_SIZE ���Ӵ�С�ļ��㷽ʽΪ����������Ŀ*sizeof(MMISMS_LINKED_ORDER_UNIT_T)
//  100*188/1024 =  18.3

// 4.RAM����(����һ������)
//  100�� Լ  12K
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252
//		MAX_STATIC_SPACE_SIZE��С + 12K
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  259
//		MAX_SYSTEM_SPACE_SIZE��С - 12K

//	��˵��������"+ Y" "- Y"ֻ�Ǳ��ص��޸ķ�����ʵ��ϵͳ���ܻ������࣬
//	MAX_SYSTEM_SPACE_SIZE���ܵ����Ĵ�С��СһЩ�������ʵ�΢��(��50KΪ��λ)��ֻҪ���벻��RAM�����ɡ�
//	��ˣ�������ӵ������󣬻ᵼ��ϵͳ�ռ��С��Ӱ��browser/camera�ȴ��ڴ�Ӧ�ã����գ�������



## �رն���
//	�뽫 APP_RegisterPsService@mmimain.c ��sms ��smscb ����ע��
//	{
//	    //Register sms event
//	    SCI_RegisterMsg( MN_APP_SMS_SERVICE,
//	        (uint8)(EV_MN_APP_SMS_READY_IND_F & 0xff), /*lint !e778*/
//	        (uint8)((MAX_MN_APP_SMS_EVENTS_NUM - 1) & 0xff),
//	        SCI_NULL);
//	   
//	    //Register smscb event
//	    SCI_RegisterMsg( MN_APP_SMSCB_SERVICE,
//	        (uint8)(EV_MN_APP_SMSCB_MSG_IND_F & 0xff), /*lint !e778*/
//	        (uint8)((MAX_MN_APP_SMSCB_EVENTS_NUM - 1) & 0xff),
//	        SCI_NULL);
//	}
//	Ȼ���ٽ����˵��ж������ε����ɡ�
//	Ҫע�����������Ӧ����ʹ�ö��ŵ�ѡ��Ҳ��Ҫ���ε��������ڲ��Ž����������ȥ�����ţ�Ҳ��Ӹò˵����ε���





[1.4] MMS
//MMS
cfg: . MMS_SMS_IN_1_SUPPORT
//	MMS_SMS_IN_1_SUPPORT = TRUE

//
MMS_SUPPORT = DORADO
//
MMS_SMS_IN_1_SUPPORT = TRUE                         ### MMS SMS IN 1 Support:


## �رղ��Ź��ܿ���͸������patch����Ҫ����˾���룩, �ر�MMS_SUPPORT�꣬����֮�������汾���Լ���




[1.5] BROWSER
// mk
BROWSER_SUPPORT = TRUE                
BROWSER_SUPPORT_DORADO = TRUE   
// 8910      
BROWSER_OPERA_START_PAGE = TRUE
DL_SUPPORT = TRUE
//
OPERA_MINI_SUPPORT = VER42
BROWSER_ALL_RUNNING_SUPPORT = TRUE 



[1.6] BT
//
BLUETOOTH_SUPPORT = SPRD_BT



[1.7] RECORD
// MMI_RECORD_SUPPORT
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/RF_calib.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/RF_nv.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/audio_arm_6531efm.nvm
lib/modem/UIS8910_ROM_16MB_DS_USER/nvitem/audio_calib_VQE.nvm




[1.8] Lcd
// 128*128
SPDE_PRJ\K220U_L680_QQVGA\uis8910_phone_user_base_config.cfg 128X128

// 128*160
SPDE_PRJ\K220U_QQVGA\uis8910_phone_user_base_config.cfg 128X160

// 128*160H
SPDE_PRJ\K220U_SHY_S13_HQQVGA\uis8910_phone_user_base_config.cfg 128X160
SPDE_PRJ\K220U_SHY_S13_HQQVGA\uis8910_phone_user_base_config.cfg MMI_RES_ORIENT

// 160*128
SPDE_PRJ\K220U_QQVGA\uis8910_phone_user_base_config.cfg 160X128
SPDE_PRJ\K220U_LBR_L691_HS_L51_HQQVGA\uis8910_phone_user_base_config.cfg 160X128

// LAND
//	MMI_RES_ORIENT_LANDSCAPE
//	MAINLCD_LOGIC_ANGLE_90
//	MAINLCD_DEV_SIZE_160X128
//	MAINLCD_SIZE_160X128
//	MAINLCD_SIZE_128X128
//	MMI_RES_DIR_mmi_res_160x128

// MAINLCD
//	MAINLCD_SIZE_176X220
//	SPDE_UI_176X220_STYLE



[1.9] shortcut
// shortcut
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_shortcut.c  ->direction_shortcut

// fun 4
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  OpenSelectedShortcutWin
// key 4
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  GetDirectionKey
// key 2
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_shortcut.c  GetFunctionKey


### �ݾ�����
// id
MMISET_SHORTCUT_MAX
// txt
s_shortcut_menu_list_text_id
// func
mmiset_shortcut_menu_func_arr

### ��ݼ�����
// id
MMISET_SHORTCUT_MAX
// key--txt
s_shortcut_list_text_id
// key--func
OpenSelectedShortcutWin--func_arr

### Ĭ��/��ʾ
// default list
s_shortcut_menu_show_list_text_id

### �༭
// all list
s_shortcut_menu_edit_list_text_id

// edit-menu
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_phonewin.c  MMI_RESULT_E^HandleShortCutSetMenuWindow



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] IM
//IM_ENGINE = NONE


[2.2] 
//
MMI_DIALPANEL_DTMF_SUPPORT


[2.3] ���ӱ���
//
//	#AOLEDA_ELECTRIC_GUARANTEE_CARD = TRUE 
//	SPDE_ELECTRIC_GUARANTEE_CARD_V2   = TRUE 
//	SPDEHTTP_SUPPORT                  = TRUE 


[2.4] 
//


[2.5] 



[2.6] DL
// Download
DL_SUPPORT = TRUE                                   ###Download Manager Supplier:
OMADL_SUPPORT = TRUE 

//
DATACOUNTER_SUPPORT = TRUE



[2.7] FM
//
FM_SUPPORT = SPRD_V0 
FM_VBC_EQ = TRUE                                     ###
FM_VBC = TRUE
//
BYD_CUSTOM_FM_TUNNING_STEP = TRUE

// mk
FM_S_ANT_SUPPORT = FALSE


[2.8] WIFI
//
WIFI_SUPPORT = UNISOC_RX                                  ### wifi Support
WIFI_VENDOR = UNISOC 



[2.9] SS
//
cfg: SCREENSAVER_SUPPORT



[2.10] Tool
// CALCULATOR_SUPPORT
SPDE_PRJ\K220T_JGW_Z105\project_ums9117_176X220BAR_48MB_K220T_JGW_Z105_user.mk CALCULATOR_SUPPORT
// STOPWATCH_SUPPORT
SPDE_PRJ\K220T_JGW_Z105\project_ums9117_176X220BAR_48MB_K220T_JGW_Z105_user.mk STOPWATCH_SUPPORT
// CALENDAR_SUPPORT
SPDE_PRJ\K220T_JGW_Z105\project_ums9117_176X220BAR_48MB_K220T_JGW_Z105_user.mk CALENDAR_SUPPORT
// WORLD_CLOCK_SUPPORT
SPDE_PRJ\K220T_JGW_Z105\project_ums9117_176X220BAR_48MB_K220T_JGW_Z105_user.mk WORLD_CLOCK_SUPPORT



[2.11] lib
// fota--alup
mk: 
// ADUPS_FOTA_DELETE_SETTING_MENU
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_menutable.c  FOTA_SUPPORT_ADUPS


// xmly--
mk: XYSDK_SUPPORT
// ����:\n  XMLY133
MS_MMI_Main/source/mmi_app/app/xysdk/h/xysdk_mdu_def.h  TXT_XYSDK_VER_INFO


// xmly--
mk: XYSDK_SUPPORT
// ����:\n  XMLY133
MS_MMI_Main/source/mmi_app/app/xysdk/h/xysdk_mdu_def.h  TXT_XYSDK_VER_INFO



[2.12] build ������
//
//	Jenkins�������ϣ������Լ�git���̱�����������������Ҳ�����˽��£�
//	1��jenkins�ĶԴ���ĸ��´���
//	2���������Ӽ��� git clean ����
//	3���������Ӹ��� HW_NV_PARA�Ĳ�����HW_NV_PARA���ڷ�����������һ��Ŀ¼
//	4��copy HW_NV_PARA���Ŀ¼������ļ���SPDE_PRJ��Ӧ��Ŀ��nvĿ¼��
//	5�������ʱ���������Ŀ��bat�ļ������SPDE_PRJ��nv�ļ�����Դ�ļ����Ƶ�������������Ŀ¼
//	6����ʼ�����ı���




[2.13] build ʡ�ռ�
//
build\tmp\
build\tmp\app_main.macro
build\tmp\app_main.macro.nv
//
build\tmp\error.txt


���ʹ�˾Ŀǰȱ�ٶ��ٿռ�?

//BLUETOOTH_SUPPORT = NONE
// ���Թ���Щ
build\tmp\app_main.macro  BT_NONSIG_SUPPORT = TRUE                             ### Nosig support
build\tmp\app_main.macro  BT_BQB_SUPPORT = TRUE                                ### BQB SUPPORT
build\tmp\app_main.macro  BT_OPP_SUPPORT = TRUE                                ### Switch Of OPP Profile Support
build\tmp\app_main.macro  BT_FTS_SUPPORT = TRUE                                ### Switch Of FTP Server Profile Support
build\tmp\app_main.macro  BT_HFG_SUPPORT = TRUE                                ### Switch Of Hand Free Gateway Profile Support
build\tmp\app_main.macro  BT_A2DP_SUPPORT = TRUE                              ### Switch Of A2DP Profile Support
build\tmp\app_main.macro  MP3_A2DP_SUPPORT = TRUE                              ### MP3 Support Bluetooth Stereo:
build\tmp\app_main.macro  WAV_A2DP_SUPPORT = TRUE                              ### WAV Support Bluetooth Stereo:
build\tmp\app_main.macro  AMR_A2DP_SUPPORT = TRUE                              ### AMR_DSP Support Bluetooth Stereo:
build\tmp\app_main.macro  MIDI_A2DP_SUPPORT = TRUE                             ### MIDI Support Bluetooth Stereo:
build\tmp\app_main.macro  AAC_A2DP_SUPPORT = TRUE                              ### AAC Support Bluetooth Stereo:

//���� audio codec֧�ֲ��ֿ���˾����
build\tmp\app_main.macro  MP3_SUPPORT = TRUE                                   ### MP3 Decoder Support:
build\tmp\app_main.macro  AAC_SUPPORT = TRUE                                   ### AAC Decoder Support:
build\tmp\app_main.macro  AMR_SUPPORT = TRUE                                   ### AMR Decoder Support:


// mk
SPDE_PRJ\WA01U_Q3M\project_UIS8910_ROM_16MB_SS_WA07U_USER.mk
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg



// BT
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  BT_NONSIG_SUPPORT = TRUE   
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  BT_BQB_SUPPORT = TRUE      
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  BT_OPP_SUPPORT = TRUE      
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  BT_FTS_SUPPORT = TRUE      
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  BT_HFG_SUPPORT = TRUE      
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  BT_A2DP_SUPPORT = TRUE     
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  MP3_A2DP_SUPPORT = TRUE    
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  WAV_A2DP_SUPPORT = TRUE    
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  AMR_A2DP_SUPPORT = TRUE    
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  MIDI_A2DP_SUPPORT = TRUE   
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg  AAC_A2DP_SUPPORT = TRUE    


// MP3
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg MP3_SUPPORT = TRUE
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg AAC_SUPPORT = TRUE
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg AMR_SUPPORT = TRUE
WAV_SUPPORT = TRUE

// H264
SPDE_PRJ\WA01U_Q3M\uis8910_phone_user_base_config.cfg H264_DEC_SUPPORT = TRUE


// SMS
MMI_APP_REMOVE_SMS_NUM



[2.14] spiflash_cfg
// 8910F
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  FLASH_SIZE_128MBITX64MBIT_NEW
// 8910s
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  FLASH_SIZE_128MBIT$



// SECTOR
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  MMI_RES_SECTOR_NUM
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  604
// 	#define MMI_RES_SECTOR_NUM         70 // 67 //66  60
// 
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  UDISK_SIZE
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  573
//	#define UDISK_SIZE                 ((UMEM_SECTOR_NUM+4)*FLASH_SECTOR_SIZE)

// 
MS_Customize/UIX8910_normal.scf  LOAD_KERNEL_IMAGE
MS_Customize/UIX8910_normal.scf  43
//	LOAD_KERNEL_IMAGE IMAGE_ENTRY_ADDR 0x00A60000   # ps size

// 
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  PS_STONE_SECTOR_NUM
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  646
//	#define  PS_STONE_SECTOR_NUM		124 // 123 //123



[2.15] marco
//
make\chip_drv\def_config\UMS9117.cfg
// CONFIG_LCDC_VER
chip_drv/chip_module/lcdc/v5
// CONFIG_SPI_VER
chip_drv/chip_module/spi/v5
// CONFIG_LDO_VER
chip_drv/chip_module/ldo/sc2720
// CONFIG_ANALOG_VER
chip_drv/chip_module/analog/v7


[2.16] Lib
### w07U
// baseLib
SPDE_PRJ\WA07U_F3Z\project_UIS8910_ROM_16MB_SS_WA07U_F3Z_USER.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_ROM_16MB_SS_USER

// binFile
SPDE_PRJ\WA07U_F3Z\project_UIS8910_ROM_16MB_SS_WA07U_F3Z_USER.mk  MODEM_BIN_FILE
// ����
//   MODEM_BIN_FILE = UIS8910_ROM_16MB_DS_USER

// .a--��ģ�������
lib\UIS8910_ROM_16MB_SS_USER

// binFile
lib\modem\UIS8910_ROM_16MB_DS_USER


### w03u
// baseLib
SPDE_PRJ\WA03U_T2_TW\project_UIS8910_240x320BAR_16MB_SS_WA03U_T2_TW_USER.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER

// binFile
SPDE_PRJ\WA03U_T2_TW\project_UIS8910_240x320BAR_16MB_SS_WA03U_T2_TW_USER.mk  MODEM_BIN_FILE
// ����
//   MODEM_BIN_FILE = MODEM_USER

// .a--��ģ�������
lib\UIS8910_240x320BAR_16MB_SS_USER

// binFile
lib\modem\MODEM_USER


### BMWATCH
// baseLib
SPDE_PRJ\BMWATCH\project_UIS8910_240x320BAR_16MB_SS_BMWATCH_USER.mk  PRODUCT_BASELIB_DIR
// �ֿ�
//   PRODUCT_BASELIB_DIR = UIS8910_240x320BAR_16MB_SS_USER


// .a--��ģ�������
lib\UIS8910_240x320BAR_16MB_SS_USER


### T107
// baseLib
SPDE_PRJ\S98T_FLP_E535_31\project_ums9117_240X320BAR_48MB_S98T_FLP_E535_31_user.mk  PRODUCT_BASELIB_DIR
SPDE_PRJ\S98T_FLP_E535_31\project_ums9117_240X320BAR_48MB_S98T_FLP_E535_31_debug.mk  PRODUCT_BASELIB_DIR
//
lib\ums9117_240X320BAR_48MB_CAT1_rel
lib\ums9117_240X320BAR_48MB_CAT1




[2.17] FLASH
### w07U (С�汾)
SPDE_PRJ\WA07U\project_UIS8910_ROM_16MB_SS_WA07U_USER.mk  FLASH_SIZE
//   FLASH_SIZE = 128MBIT

### w03u (��汾)
SPDE_PRJ\WA03U_T2_TW\project_UIS8910_240x320BAR_16MB_SS_WA03U_T2_TW_USER.mk  FLASH_SIZE
//   FLASH_SIZE = 128MBITX64MBIT_NEW

### BMWATCH (��汾)
SPDE_PRJ\BMWATCH\project_UIS8910_240x320BAR_16MB_SS_BMWATCH_USER.mk  FLASH_SIZE
//   FLASH_SIZE = 128MBITX64MBIT_NEW

### WA01U_Q3M (��汾)
SPDE_PRJ\WA01U_Q3M\project_UIS8910_240x320BAR_16MB_SS_WA01U_Q3M_USER.mk  FLASH_SIZE
//   FLASH_SIZE = 128MBITX64MBIT_NEW


[2.18] build map
// ��image
tmp:UIX8910.map  Region^LOAD_KERNEL_IMAGE

// range 1(rom) (12M ����/�洢)
tmp:UIX8910.map  Region^ROM_KERNAL_EXEC

// range 2(ram) (1.45M ����/�ϵ綪ʧ)
tmp:UIX8910.map  Region^RAM_RW

// range 3(SRAM) (calc size)
tmp:UIX8910.map  Region^SRAM_RES

// Total
tmp:UIX8910.map  Total^RO

// �޸� KERNEL size
//  (ͬ���ģ�����fota���ʧ��)
MS_Customize/UIX8910_normal.scf  42
MS_Customize/UIX8910_normal.scf  277



[2.19] 

G:\wa01u_svn_small_new\build\UIS8910_ROM_16MB_SS_WA07U_F30ZL_USER_builddir\win




[2.20] 




