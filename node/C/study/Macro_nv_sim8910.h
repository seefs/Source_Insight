
//Ŀ¼:
Save:node\C\study\Macro_nv_sim8910.h \[1.1\] IMEI
Save:node\C\study\Macro_nv_sim8910.h \[1.2\] //ECC, nv copy
Save:node\C\study\Macro_nv_sim8910.h \[1.3\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.4\] //BAND
Save:node\C\study\Macro_nv_sim8910.h \[1.5\] //REG
Save:node\C\study\Macro_nv_sim8910.h \[1.6\] 4G
Save:node\C\study\Macro_nv_sim8910.h \[1.7\] comData
Save:node\C\study\Macro_nv_sim8910.h \[1.8\] slot  ��·
Save:node\C\study\Macro_nv_sim8910.h \[1.9\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.10\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.11\] 
Save:node\C\study\Macro_nv_sim8910.h \[1.12\] 


// --������Ŀ
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey
nv:\\


[1.1] __IMEI__
// nv id-imei
common\export\inc\nv_item_id.h  NV_IMEI   5
common\export\inc\nv_item_id.h  NV_IMEI1  377
common\export\inc\nv_item_id.h  NV_IMEI2  390
common\export\inc\nv_item_id.h  NV_IMEI3
// �޸�IMEI1~IMEI4
common\nv_parameters\nv_type\nv_type_uix8910.nvm  NV_IMEI
build\{cur}_builddir\..\nv\nvitem\nv_type_uix8910.nvm

// imei-3A25720371833604
// nv---A352273017386340


// nv����
make\nv_parameter\config_info.nv  com_debug


[1.2] 
### *.nvm
//
lib\modem\{ROM}\nvitem\


### ProductionParam_uix8910.nvm
//
batNv:\\




[1.3] 


[1.4] 




[1.5] 



[1.6] __4G__
//	value="0x0"
//	value="0x04"  ��Ϊ4G only
lib\modem\{ROM}\nvitem\
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   defaultRat
lib\modem\{ROM1}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   defaultRat
//
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   defaultRat


//
nv:modem_nv_cat1bis_uix8910_static.nvm   defaultRat
nv:modem_nv_cat1bis_uix8910_card2_static.nvm   defaultRat


// SPCSS01123748/SPCSS00883216
//ͬʱ��˾��Ҫ��עMMI/AT�п��ܴ��ڵ��޸����õĲ˵�/����
// SPCSS01134008

[1.7] 
nv:\\
HW:\
// sim
HW:{project}\nv_type_uix8910.nvm  sim_card_number
HW:WA22U_W48E\nv_type_uix8910.nvm  sim_card_number
//	0x1

//
HW:{project}\nv_type_uix8910.nvm  com_data
//	0xFF


nv:nv_type_uix8910.nvm  3651



[1.8] __slot__

// static-->sim_slot_switch-->reserved[0]
//  0x0 ==> 0x1

### w21
//HW:{project}\modem_nv_cat1bis_uix8910_static.nvm  9166
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   9166

### w22
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   9186
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_static.nvm   sim_slot_switch,reserved[0]
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   9186
lib\modem\{ROM}\nvitem/modem_nv_cat1bis_uix8910_card2_static.nvm   sim_slot_switch,reserved[0]

//   0x0: ��·�����ͷ�
//   0x1: Ĭ��
//
//�޸���·����ʱ�� (8910_��վ����ʱ��
//1��������ʱ����·��Ҫ����10�룬��Э���Ҫ���ƶ�Ҳһֱ�ڲ鲻����Э��������
//2������ʽ�ķ�������С��·����������nvֵ���������ٹ��ġ�
//����1��ͨ��ATָ���޸�  at+rrcrel=���֣�0-20��  ������0.5��
//����2��ͨ���޸�Ĭ��nvֵ����С������modem_nv_cat1bis_uix8910_static.nvm�����һ��ֵ����Ϊ0-20ĳ����
//3������ԣ����ܻ�Ӱ�쵽��ͨ�ʣ��ر��Ƕ�̬�����£�����·�����֡�




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



