
// nv����
Desktop:\SPRD_T107\X332\sim_lock_nv\
// imsi����:
//  -:-----=====-----
//  1:460012348652788 ��ͨ
//  1:460077958813372 �ƶ�


### 3.1 �����ܿ��ؼ�������
rdnv:\
rdnv:NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only
// ������ �ĳ� ��Ӫ����
//  0x0f ==> 0x35
// ������ �ĳ� �û���+��Ӫ����+������
//  0x0f ==> 0xAB
// ֻ����ͨ������--test_ok
//  0x0f ==> 0xB
// ֻ����ͨ�û���_or_�ƶ�������--test
//  0x0f ==> 0x8B

//
PS\nv\internal\ps\common\
PS\nv\internal\ps\common\NV_PARAM_TYPE_SIM_CFG[1].xml  is_support_gsm_only



### 3.2 ���������� simlock_status
nv:\
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status
//   ��5
nv:NV_SIM_LOCK_USER_DATA_ID.xml  sim_lock_status
// ������ �ĳ� ��Ӫ����
//  0x0 ==> 0x4
// ������ �ĳ� �û���+��Ӫ����+������
//  0x0 ==> 0x15
// ֻ����ͨ������--test
//  0x0 ==> 0x1
// ֻ����ͨ�û���_or_�ƶ�������--test
//  0x0 ==> 0x8

//
PS\nv\export\ps\mn\
PS\nv\export\ps\mn\NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sim_lock_status



### 3.3 ���ð�����
//   ��1~��4
//    ���������ܸ���
//    XML ���ð�����ʱ��MCC ���÷�������ݡ����ĳ������û������XML ���������������Ҫ��д��
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_locks            ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_subset_locks     ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  sp_locks , sp_locks->sp  ->numLocks
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  corporate_locks          ->numLocks
// ��1�ĳ� 1��
//  0x0 ==> 0x1
// ��1�ĳ� 12��
//  0x0 ==> 0xC
// ֻ����ͨ������--test
//  0x0 ==> 0x1
// ֻ����ͨ�û���_or_�ƶ�������--test
//  0x0 ==> 0x1

// �޸�mcc mnc
//			<ITEM name="locks[0]" type="STRUCT" type_name="PLMN_T" varname="locks0" desc="item of of network lock list">
//				<ITEM name="mcc" type="uint16" varname="mcc" value="0x1A9" desc="mcc"/>
//				<ITEM name="mnc" type="uint16" varname="mnc" value="0x02" desc="mnc"/>
//				<ITEM name="mnc_digit_num" type="uint16" varname="mnc_digit_num" value="0x0" desc="mnc digit number"/>
//			</ITEM>


// ������������
//nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  network_blacklist_locks


//   ��5
nv:NV_SIM_LOCK_USER_DATA_ID.xml  user_locks
//nv:NV_SIM_LOCK_USER_DATA_ID.xml  encrypted_crc0
//PS\nv\export\ps\mn\NV_SIM_LOCK_USER_DATA_ID.xml  user_locks
//  �޸�
// numLocks 0x0 ==> 0x3
// imsi_len 0x0 ==> 0x8


// ��������������������
//   ==> ��sim1_locks������˵���ο� 3.8 


### 3.4 ������������
// ��control_key_type�������������������㷨��
nv:NV_SIM_LOCK_NV_CONTROL_KEY_ID.xml  control_key_type
//  control_key_type=4 �ǰ�ȫ�������ǲ���ʱ�Զ����ɵġ� ��ʾʹ��������롣���ȡ�ý�����ķ�����ο������ĵ�
//    https://unisupport.unisoc.com/file/index?fileid=29656
// 0x0 ==> 0x4
//
//  control_key_type=3 ��������洢�����볤��Ϊ8λ��
//   ������IMEI1���������㷨���ɣ�
//   IMEIÿ������λ���ȡ��λ��ǰ14λIMEI�����7λ�����룬��8λȡIMEI�ĵ�1λ��
//   ���磺IMEI:352273017386340�����㷨������Ϊ��84010473
// 0x0 ==> 0x3


### 3.5 ���ý������ܹر�
// ����
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit2  1(bit7,��,bit0)
// �� 4 ��ʾ�رս�������
// 0x0 ==> 0x4
// ��Ҫͬʱ�޸ģ��� SIMLOCK+�رս��� �ᵼ�����п��������á�
// SIMLOCK 0x0f ==> 0x00;  dummy3 0x0 ==> 0x4


### 3.6 ������������������
// Ĭ������������Ϊ 10 �Σ������������������������������״̬
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  max_num_trials
// �����ƽ�������
// 0xA ==> 0x7FFFFFFF



### 3.7 �����������Ĺ�ϵ
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit3  1(bit7,��,bit0)
// �� �� ��
// 0x0 ==> 0x8

//   ��5--�ĵ�û˵���Ҳ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy3



// �е㸴�ӣ����ĵ�...



### 3.8 ����������������������
// ����, ̫���Ӳ���
//   ��1~��4
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy3 .bit4  1(bit7,��,bit0)
//  ���� �� ����
// 0x0 ==> 0x10
//  ��֧�ֽ������� 1 �� 2 �������໥��������
// 0x0 ==> 0x14

//   ��5--�ĵ�û˵���Ҳ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy3 .bit4


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
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 0��IMEI1 ���뱣��
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 1��IMEI2 ���뱣��
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 2��IMEI3 ���뱣��
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 3��IMEI4 ���뱣��
//? PS_NV_PARAMS -> SIM_LOCK_CUSTOMIZE_DATA.dummy4 = 4��IMEI1 �� IMEI2 ���뱣��
//���� CP �汾 FM_BASE_17C_W21.11.2 ����ǰ�汾��


// V5.1 �� V5.2
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy4
// IMEI �������� Simba ����������
// �� V5.2
// 0x0 ==> 0xc0000000

//   ��5--�ĵ�û˵���Ҳ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy4



### 3.10 ����һ���Խ���������
//
nv:NV_SIM_LOCK_CUSTOMIZE_DATA_ID.xml  dummy1
// ������ �� һ���Խ���
// 0x0 ==> 0x1

//   ��5--�ĵ�û˵���Ҳ��
nv:NV_SIM_LOCK_USER_DATA_ID.xml  dummy1




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




