
// nv����
Desktop:SPRD_T107\X332\sim_lock_nv\
Desktop:SPRD_T107\X332\sim_lock_nv\_simlock_list.h

// imsi����:
//  -:-----=====-----
//  1:46001 23486 52788 ��ͨ
//  1:46007 79588 13372 �ƶ�

// nvTool���ֻ�����NV
Save:node\C\study\Macro_nv_8910.h  __nvTool__

// FAQ:
//  29919_SIMLOCK��ȫ��������˵��V1.2.pdf


### 3.1 �����ܿ��ؼ�������
rdnv:\
rdnv:NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only
// 0x0f--------Ĭ��,������(3��)----------------
// 0xB---------������(��ͨ)--------------------ok
// 0x35--------��Ӫ����------------------------
// 0x83--------�û���--------------------------
// 0x8B--------�û���(��ͨ)_or_������(�ƶ�)----ok
// 0xAB--------�û���+��Ӫ����+������----------



### 3.2 ���������� simlock_status
nv:\
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status
// 0x0---------Ĭ��,����-----------------------------
// 0x1---------������--------------------------------err
// 0x4---------��Ӫ����------------------------------err
// 0x10--------�û���--------------------------------err
// 0x100-------������--------------------------------ok (��������������)
// 0x100-------�û���(��ͨ)_or_������(�ƶ�)----------ok
// 0x100-------�û���+��Ӫ����+������----------------

//   ��5 (ʵ�ʽ���)
nv:NV_SIM_LOCK_USER_DATA_ID.xml  sim_lock_status
// 0x0---------Ĭ��,����-----------------------------
// 0x1---------������--------------------------------ok
// 0x4---------��Ӫ����------------------------------
// 0x10--------�û���--------------------------------
// 0x11--------�û���(��ͨ)_or_������(�ƶ�)----------ok
// 0x15--------�û���+��Ӫ����+������----------------



### 3.3 ���ð�����
//   ��1~��4
//    ���������ܸ���
//    XML ���ð�����ʱ��MCC ���÷�������ݡ����ĳ������û������XML ���������������Ҫ��д��
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_locks            ->numLocks
// 0x0---------Ĭ��--------------------------------------
// 0x1---------������+1��apn-----------------------------ok
// 0xC---------������+12��apn----------------------------
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_subset_locks     ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sp_locks , sp_locks->sp  ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  corporate_locks          ->numLocks

// �޸� mcc-mnc-num
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_locks            ->locks[0]
// 0x1A9,0x02,0x02---------Ĭ��--------------------------------------
// 0x1CC,0x00,0x02---------�ƶ�--------------------------------------
// 0x1CC,0x02,0x02---------�ƶ�--------------------------------------
// 0x1CC,0x07,0x02---------�ƶ�--------------------------------------
// 0x1CC,0x01,0x02---------��ͨ--------------------------------------ok


//   ��5
nv:NV_SIM_LOCK_USER_DATA_ID.xml  user_locks    ->numLocks
// 0x1---------�û���+1��imsi-----------------------------ok

// �޸� imsi_len - imsi_val(���128��)
nv:NV_SIM_LOCK_USER_DATA_ID.xml  user_locks    ->locks[0]
//   locks[0].imsi_len = 8-----------------------------------------imsi��ǰ8λΪ46001234
//   locks[0].imsi_val[0] = 0x49-----------------------------------��1λ9�ò���
//   locks[0].imsi_val[1] = 0x06-----------------------------------
//   locks[0].imsi_val[2] = 0x10-----------------------------------
//   locks[0].imsi_val[3] = 0x32-----------------------------------
//   locks[0].imsi_val[3] = 0xf4-----------------------------------



//### ������������
//nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_blacklist_locks


//### ��������������������
//   ==> ��sim1_locks������˵���ο� 3.8 


### 3.4 ������������
// ��control_key_type�������������������㷨��
nv:NV_SIM_LOCK_NV_CONTROL_KEY_ID.xml  control_key_type
// 0x0---------Ĭ��-----------------------------------------------
// 0x3---------��������洢�����볤��Ϊ8λ��----------------------ok
//			   ������IMEI1���������㷨���ɣ�
//			   IMEIÿ������λ���ȡ��λ��ǰ14λIMEI�����7λ�����룬��8λȡIMEI�ĵ�1λ��
//			   ���磺IMEI:352273017386340�����㷨������Ϊ��84010473
// 0x4---------��ȫ�������ǲ���ʱ�Զ����ɵ�------------------------
//			   ��ʾʹ��������롣���ȡ�ý�����ķ�����ο������ĵ�
//			   https://unisupport.unisoc.com/file/index?fileid=29656
// SPCSS01112904
//   SimLock�������̽��� V1.1.pdf
//   ��ȫ����̫�鷳


//### 3.5 ���ý������ܹر�
// ����
//nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit2  1(bit7,��,bit0)
// 0x0--------Ĭ��,���Խ���-----------------
// 0x4--------�رս���----------------------

// ��Ҫͬʱ�޸ģ��� SIMLOCK+�رս��� �ᵼ�����п��������á�
// SIMLOCK 0x0f ==> 0x00;  dummy3 0x0 ==> 0x4


### 3.6 ������������������
// Ĭ������������Ϊ 10 �Σ������������������������������״̬
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  max_num_trials
// 0xA-----------Ĭ��-----------------------
// 0x7FFFFFFF----�����ƽ�������-------------ok



### 3.7 �����������Ĺ�ϵ(�ۺ�)
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit3  1(bit7,��,bit0)
// 0x0--------------Ĭ��,��-----------------------
// 0x8--------------��----------------------------
// 0x208------------IMSI��ǰ8λ+��----------------ok
//			  ��1λ9��Ҫ������2^9=0x200
// 0x808------------IMSI��ǰ10λ+��----------------
// 0x80C------------IMSI��ǰ10λ+��+����-----------

//   ��5--�ĵ�û˵Ҫ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy3
// 0x0--------------Ĭ��--------------------------����




//### 3.8 ����������������������
// ����, ̫���Ӳ���
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit4  1(bit7,��,bit0)
// 0x0--------Ĭ��,����-----------------
// 0x10-------����----------------------
// 0x14-------����+��֧�ֽ���----------------------

//   ��5--�ĵ�û˵���Ҳ��
//nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy3 .bit4


// ����������ʱ
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  numLocks
//  �� 2 ������Ŀ--numLocks--����Ҫ����
//  �ù����뿨������


// ��������ͬһ����
//  �ο��ĵ�--ǰNΪsim1, �����Ϊsim2


// User Lock ��֧�ֶ������á�



### 3.9 ���� IMEI ѡ���Ա�������
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy4

// V5.0
// PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 0��IMEI1 ���뱣��
// PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 1��IMEI2 ���뱣��
// PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 2��IMEI3 ���뱣��
// PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 3��IMEI4 ���뱣��
// PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 4��IMEI1 �� IMEI2 ���뱣��
//���� CP �汾 FM_BASE_17C_W21.11.2 ����ǰ�汾��


// V5.1 �� V5.2
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy4
//  �汾��Ϣ ��Ϊ V5.2, IMEI �������� Simba ����������
// 0x0 ==> 0xc0000000

//   ��5--�ĵ�û˵���Ҳ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy4



### 3.10 ����һ���Խ���������
//
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy1
// 0x0---------Ĭ�ϣ�������-------------------------------------
// 0x1---------һ���Խ���-----------------------------------------ok

//   ��5--�ĵ�û˵���Ҳ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy1
// 0x0---------Ĭ�ϣ�������-------------------------------------
// 0x1---------һ���Խ���-----------------------------------------ok




### ����
### 4.1 ���ܸĲ���
//? �ܸ����� 16 �����ݵ���һ���������ֿ���פ��ʧ�ܡ�
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> max_num_trials
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> network_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> network_subset_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> sp_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> corporate_locks
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA ->dummy1��dummy4
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> sim_lock_status
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> user_locks
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> nck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> nsck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> spck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> cck_trials
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> pck_trials
//? PS_NV_PARAMS -> SIM_LOCK_CONTROL_KEY -> control_key_type
//? PS_NV_PARAMS -> NV_PARAM_TYPE_SIM_CFG[1] -> is_support_gsm_only
//? TD_TIANJI2_NV_TYPE -> NV_PARAM_TYPE_MN_CFG -> sim_slot_cfg

//? ���� SIMLOCK �汾������������ NV ֵ��������������
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA -> sim_lock_status
//? PS_NV_PARAMS -> SIM_LOCK_USER_DATA -> sim_lock_status

// ��֪��ʲô�ã�������sim��Ϣ
PS\nv\internal\ps\mn\NV_PARAM_TYPE_MN_CFG.xml  id="2140"


### ����鿴
// ����6~8λ
//		==>####8888#������
app:parse\c\mmiparse_dial.c  MMIAPISET_ParseSIMLockSwitchString
//		====>OpenSIMLockSwitchWin
//		======>HandleSIMLockMenuWindow
//		========>��״̬:
//		==========>MMIAPIPHONE_GetSIMUnlockConfigDataPtr
//		========>5����:
//		========>MMIAPIPHONE_HandleSIMLockSettingMenuFlow
//		==========>HandleSIMUnlockingInputingString
//		============>��������:
//		==============>MNPHONE_SIMUnlockEx
//		============>��������:
//		==============>MNPHONE_SIMLockEx
app:phone\c\mmiphone_wintab.c  SIM_UNLOCK_LEN_IS_IN_RANGE



### SimLock�������̽��� V1.1.
//
https://item.taobao.com/item.htm?spm=2013.1.20141003.10.pFAw9w&scm=1007.10011.31620.100200300000001&id=520397211495&pvid=d017ed7f-9f58-4952-97ba-4bcaec94ef1d

//
SimLockDataGen����



### QuerySIMLockKey


### ResearchDownload ����ע����
//
make\perl_script\UMS9117.xml  IMEI                       0xFFFFFFFF
make\perl_script\UMS9117.xml  SIMLOCK_SIGN               0x91C  2332  SIMLOCK_SIGN.xml
make\perl_script\UMS9117.xml  SIMLOCK_PK                 0x91E  2334  SIMLOCK_RSA.xml
//make\perl_script\UMS9117.xml  SIMLOCK_CUSTOMIZE_DATA   0x1F0  496
//make\perl_script\UMS9117.xml  SIMLOCK_USER_DATA        0x1F1  497
//make\perl_script\UMS9117.xml  SIMLOCK_NVCONTROL_KEY    0x1F2  498
make\perl_script\UMS9117.xml  SIMLOCK_KEY                0x1F4  500   NV_SIM_LOCK_STORAGE_KEY.xml
//make\perl_script\UMS9117.xml  SIMLOCK_CFG              0x7E4  2020  NV_PARAM_TYPE_SIM_CFG[1].xml

// �Զ���
SPDE_PRJ\{cur}\PerlNV\UMS9117_NEW.xml


### SIMLOCKKEYGEN
// SIMLOCKKEYGEN
tools\Common\SIMLOCKKEYGEN\Bin\

//
//testPath = tools\Common\SIMLOCKKEYGEN\Bin\
//test:\\
//
//test:keras\Keras_text_type.py
//python_w test:keras\Keras_text_type.py
//test:keras\Keras_text_type.py
//cmd_s tools\Common\SIMLOCKKEYGEN\Bin\

// 
SimLockKeyGen -f imei_list_file dummy1 dummy2 dummy3 OutputCsvFile [-keylen n]
SimLockKeyGen -f imei_list_file.txt 1 0 0 output_1_0_0.csv -keylen 8
SimLockKeyGen -f imei_list_file.txt 1 0 8 output_1_0_8.csv -keylen 8


### WriteIMEI
��FactoryDownload���ߡ�WriteIMEI���ߺ�CheckX���ߵ�PhaseCheck.ini�����ļ����ӣ�STATION 8 = 
SIMLOCK��

// WriteIMEI
file_down:_tool\WriteIMEI_R19.0.0001\
// FactoryDownload
//
// CheckX
//

// _apn-doc
SPRD_T107:_apn\


### SIMLockServer
// tool--34557 Simlock�����Server��
https://unisupport.unisoc.com/tool/index











