
基础路径设置:
basePath = D:\soft\SW004_C9_TD08\

//目录[Num][Ca]:
// 1. nordic蓝牙
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




[1.1] SVC中断
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
NRF_SOC_SVCS // SoC library，主要是一些外设PPI, FLASH, CLOCK等
NRF_SD_SVCS // SoftDevice Manager, 协议栈管理，主要用来开启关闭协议栈，查询协议栈是否开启，以及在bootloader被enabled时指明中断向量表
BLE_L2CAP_SVCS // L2CAP API SVC numbers
BLE_GATTS_SVCS // GATTS API SVC numbers.
BLE_GATTC_SVCS //GATTC API SVC numbers.
BLE_GAP_SVCS // GAP API SVC numbers.
BLE_COMMON_SVCS // Common API SVC numbers.

//SVC number
0X10~0XFF 协议栈




[1.2] SWI软中断
//
components\softdevice\s130\headers\nrf_soc.h RADIO_NOTIFICATION_IRQn
	




[1.3] 
Keil 4.54或者更高版本，
nRFgo Studio v1.14




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 












