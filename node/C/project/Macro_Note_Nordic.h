
����·������:
basePath = D:\soft\SW004_C9_TD08\

//Ŀ¼[Num][Ca]:
// 1. nordic����
Save:node\C\project\Macro_Note_Nordic.h \[1.1\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.2\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.3\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.4\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.5\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.6\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.7\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.8\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.9\] 
Save:node\C\project\Macro_Note_Nordic.h \[1.10\] 




[1.1] SVC�ж�
//SVCALL
components\softdevice\s132\headers\ble.h SVCALL
components\softdevice\s130\headers\ble_gap.h SVCALL
components\softdevice\s130\headers\ble_gattc.h SVCALL
components\softdevice\s132\headers\ble_gatts.h SVCALL
components\softdevice\s132\headers\nrf_sdm.h SVCALL
components\softdevice\s130\headers\nrf51\nrf_mbr.h SVCALL
components\softdevice\s132\headers\nrf52\nrf_mbr.h SVCALL
components\softdevice\s130\headers\nrf_svc.h SVCALL
components\softdevice\s130\headers\ble_l2cap.h SVCALL



//
components\softdevice\s130\headers\nrf_soc.h NRF_SOC_SVCS
NRF_SOC_SVCS // SoC library����Ҫ��һЩ����PPI, FLASH, CLOCK��
NRF_SD_SVCS // SoftDevice Manager, Э��ջ������Ҫ���������ر�Э��ջ����ѯЭ��ջ�Ƿ������Լ���bootloader��enabledʱָ���ж�������
BLE_L2CAP_SVCS // L2CAP API SVC numbers
BLE_GATTS_SVCS // GATTS API SVC numbers.
BLE_GATTC_SVCS //GATTC API SVC numbers.
BLE_GAP_SVCS // GAP API SVC numbers.
BLE_COMMON_SVCS // Common API SVC numbers.

//SVC number
0X10~0XFF Э��ջ




[1.2] SWI���ж�
//
components\softdevice\s130\headers\nrf_soc.h RADIO_NOTIFICATION_IRQn
	




[1.3] 
Keil 4.54���߸��߰汾��
nRFgo Studio v1.14




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 












