
//Ŀ¼:
Save:node\C\study\Macro_doc_8910key.h \[1.1\] keyKbd
Save:node\C\study\Macro_doc_8910key.h \[1.2\] keySig
Save:node\C\study\Macro_doc_8910key.h \[1.3\] keyDial
Save:node\C\study\Macro_doc_8910key.h \[1.4\] keyStatus------����
Save:node\C\study\Macro_doc_8910key.h \[1.5\] keySlide
Save:node\C\study\Macro_doc_8910key.h \[1.6\] keySOS
Save:node\C\study\Macro_doc_8910key.h \[1.7\] 
Save:node\C\study\Macro_doc_8910key.h \[1.8\] 
Save:node\C\study\Macro_doc_8910key.h \[1.9\] 
Save:node\C\study\Macro_doc_8910key.h \[1.10\] 
Save:node\C\study\Macro_doc_8910key.h \[1.11\] 
Save:node\C\study\Macro_doc_8910key.h \[1.12\] 




[1.1] __keyKbd__
// --����ֵתʵ��ֵ
Save:node\C\study\Macro_im_8910.h   __keySignal__
//		==>MMK_DispatchMSGKbd
//		====>MMIDEFAULT_ConvertKeyCode
//		======>signal_keycode:w/66/0x42/SCI_VK_W
//		======>key_code:      w/41/0x29/KEY_W
//		====>KPD_DOWN:
//		====>HandleMSGKbd
//		======>MMK_DefaultMSGKbd                    # ����/������/������/handset
//		========>other:
//		==========>green:
//		==========>MMIAPICC_SendMsgToApplet(KEY_PRESSED + keycode, PNULL);
//		==========>end:
//		==========>MMIAPICC_ReleaseCallByRedkey();
//		========>DefaultIsRespond
//		======>GetMultiKeyTPParam
//		========>cur_key_num:      0
//		======>MMK_DispMsgToWin                     # ���ڴ���
//		========>MMK_DispMsgToFocusWin
//		==========>MMK_DispatchToHandle             # --WINDOW
//		============>WINDOW:
//		============>MMK_DefaultProcessWinMsg
//		==============>MMK_RunWinHookProc
//		================>.MMK_RunCtrlProc

//		============>MMK_RunWinProc                 # --win_handle
//		==============>.ProcessMsg
//		==============>CC_HandleCcWinMsg            # --key--kbd--call
//		============>MMK_ProcSpecialWinMsg          # --win_handle
//		======>MMK_DefaultMSGKbdLater               # ϵͳĬ�ϴ���
//		========>���/earphone/earphone/CAM/ScreenPhoto
//		======>MMK_HandlePublicKey                  # 
//		================>
//		==================>
//		====================>
//		======================>
//		========================>
//		==========================>


[1.2] __keySig__
// --
//		==>DispatchSysSig
//		====>MMICC_HandlePsMsg
//		======>APP_MN_CALL_DISCONNECTED_IND
//		========>MmiDestroySignal
//		============>MmiSendSignal
//		==============>
//		================>
//		==================>
//		====================>
//		======================>
//		========================>
//		==========================>
//		============================>
//		==============================>
//		================================>



[1.3] __keyDial__
### --key--dial--down
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # KPDSVR
//		======>MMK_DispatchMSGKbd                   # KPD_DOWN/KPD_UP
//		========>HandleMSGKbd
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_RunWinProc             # win_handle
app:idle\c\mmiidle_dial.c  MMI_RESULT_E^HandleDialWinMsg


### --key--dial--red
//		========>HandleMSGKbd
//		============>BaseFlexCtrlHandleMsg
//		===============>RED:
//		================>.is_handle_red_key
//		========>GUIEDIT_SetHandleRedKey(FALSE, _CTRL_ID);  # ����


### --key--dial--long--log
//	64023 MSG_KEYDOWN_CANCEL
//	57397 MSG_NOTIFY_EDITBOX_IMSYNC_CURSOR //1~3
//	e030  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM //1~3
//	fd17  MSG_KEYPRESSUP_CANCEL

### --key--dial--longCancel
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # KPDSVR
//		======>MMK_DispatchMSGKbd                   # 
//		========>HandleMSGKbd                       # status:65024, code:23
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_DefaultProcessWinMsg   # ctrl_handle
//		==================>MMK_RunCtrlProc
//		====================>PhoneNumEditCtrlHandleMsg  # IGUICTRL_HandleEvent
//		======================>BaseFlexCtrlHandleMsg  # MSG_KEYREPEAT_CANCEL
//		========================>HandleTextCancelKey
//		==========================>BASEFLEX_DelString
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # P_APP
//		======>MMK_DispatchMSGTimer                 # APP_TIMER_EXPIRY
//		========>MMK_HandleKeyLongPressTimer        # KBD_TIMER
//		==========>SaveKeyLongDownStatus
//		============>is_long_press = TRUE
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # 
//		================>MMK_DefaultProcessWinMsg   # ctrl_handle
//		==================>MMK_RunCtrlProc
//		====================>PhoneNumEditCtrlHandleMsg  # IGUICTRL_HandleEvent
//		======================>BaseFlexCtrlHandleMsg  # MSG_KEYLONG_CANCEL
//		========================>HandleTextCancelLong
//		========>MMK_HandleKeyRepeatPressTimer      # KEY_REPEATED
//		==========>MMK_DispMsgToWin
//		============>MMK_DispMsgToFocusWin
//		==============>MMK_DispatchToHandle         # WINDOW
//		================>MMK_RunWinProc             # win_handle
ctrl:editbox\c\ctrlbaseflex.c  MMI_RESULT_E^BaseFlexCtrlHandleMsg
//		==========================>AppHandle            # CURSOR




[1.4] __keyStatus__

### --key--timer
//		========>TimerCallBack
//		==========>MmiCreateSignal
//		============>
//		==============>
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # 
//		======>MMK_DispatchMSGKbd                   # ����ת��һЩ����ֵ
//		========>MMIDEFAULT_ConvertKeyCode
//		==========>[SHIFT]: 
//		============>96 = 0x60 => {SCI_VK_SHIFT, 0x47} => 0x47 = 71 => KEY_SHIFT
//		========>SaveKeyDownStatus                  # KPD_DOWN, �ఴ����֪��֧��֧��
//		==========>MMK_StartWinTimer                # 1.5s (long) 0.3s (repeat)
//		============>StartAppTimer
//		========>HandleMSGKbd
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # P_APP
//		======>MMK_DispatchMSGTimer                 # APP_TIMER_EXPIRY
//		========>MMK_HandleKeyLongPressTimer        # KBD_TIMER
//		==========>SaveKeyLongDownStatus
//		============>is_long_press = TRUE           # ==>longUp msg
//		==========>HandleMSGKbd
//		========>MMK_HandleKeyRepeatPressTimer      # KEY_REPEATED
//		==========>SaveKeyRepeatStatus
//		==========>MMK_StartWinTimer
//		==========>HandleMSGKbd
//		==>APP_Task
//		====>MMK_DispatchExtSig                     # 
//		======>MMK_DispatchMSGKbd                   # 
//		========>SaveKeyUpStatus                    # KPD_UP
//		==========>MMK_StopTimer
//		========>HandleMSGKbd


### --key--idle--long--ok
//		======>case MSG_APP_OK      //0
//		======>case MSG_CTL_OK      //0
//		======>case MSG_APP_OK      //1
//		======>case MSG_KEYUP_OK    //1
//		======>case MSG_KEYLONG_OK  //1
//		======>case MSG_TIMER       //+ ����û��
app:idle\c\mainapp.c  IdleWin_HandleMsg
//		======>case MSG_APP_OK      //0
//		======>case MSG_CTL_OK      //0
//		======>case MSG_KEYUP_OK    //1
app:idle\c\mmiidle_cstyle.c   MMIIDLE_CommonHandleMsg
//		======>case MSG_KEYUP_OK    //1
app:keylock\c\mmikl_keylock.c  MMIKL_HandleKLDispWinMsg
//		======>case MSG_KEYUP_OK    //1 û��
source:mmi_app\common\c\mmi_pubwin.c  MMIPUBHandleWinMsg

### --key--idle--long--cancel
//		======>case MSG_APP_CANCEL
//		======>case MSG_CTL_CANCEL
//		======>case MSG_KEYUP_CANCEL
//		======>case MSG_KEYLONG_CANCEL
app:idle\c\mainapp.c  IdleWin_HandleMsg






[1.5] __keySlide__
### keySlide
//		==>HandleMSGKbd
//		====>MMK_DefaultMSGKbd        # ����/������/������/handset
//		====>MMK_DispMsgToWin         # ����
//		====>MMK_DefaultMSGKbdLater   # ����
//		====>MMK_HandlePublicKey      # ��������, FM/������/handset
//		====>MMIBT_HandleBTKey        # BT
### --������/vol
//		==>MMK_DefaultMSGKbd
//		====>DefaultBackLight                   # ���⴦��
//		======>KEY_PRESSED:
//		========>.is_halt                       # ����
//		========>.halt_back                     # Ԥ����
//		========>MMIDEFAULT_TurnOnBackLight
//		==========>MMIDEFAULT_TurnOnLCDBackLight
//		============>DefaultBackLight           # �Ƿ����� �̰�/���� 
//		============>DefaultKeyTone             # ������ ���� 
//		====>DefaultIsRespond                   # �Ƿ���Ӧ--Side/vol ����/�ϸ�//����/���� 
//		======>.s_is_down_keystatus_backlight_on
//		==>MMK_DefaultMSGKbdLater
//		====>DefaultSideKey                     # �������/vol
//		========>.!is_key_lock                  # ���ǲ�����
//		========>.is_halt                       # ���أ��ϸǲ�����
//		========>MMIDEFAULT_TurnOnBackLight
//		========>.is_halt                       # ��������
### --����
//		==>APP_Task
//		====>MMK_DispatchExtSig
//		======>MMK_DispatchMSGTimer
//		========>MMIDEFAULT_HandleBackLightOver
### --����
//		==>CloseAllLight
//		========>MMIDEFAULT_TurnOffBackLight
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_TurnOnBackLight
### --fm
//		==>HandleMSGKbd
//		====>MMK_HandlePublicKey
//		======>GPIO_SIG1:
//		========>MMIAPI_FM_ONOFF
### --flip
//		==>MMK_DefaultMSGKbd
//		====>DefaultFlip          # 
//		======>
//		==>MMK_HandlePublicKey
//		====>MSG_KEYDOWN_FLIP:    # �ϸ�
//		======>HandleFlipDown     # ����idle
//		====>MSG_KEYDOWN_FLIP:    # �ϸ�
//		======>recode = FALSE     # ����FALSE ��bg mp3
//		========>MMIDEFAULT_HandleFlipKey
//		======>do()               # ������ MSG_APP_CANCEL
//		======>MMK_PostMsg(MSG_APP_CANCEL)
//		========>play mp3         #
//		==>MSG_KEYUP_FLIP:        # ����FALSE �������ʱ���ǲ����� (���ǵ�ʲôԭ��)
app:accessory\c\mmicountedtime_main.c  MMIAPICT_HandleCountedTimeArriveWin




[1.6] __keySOS__

### SOSת��
//
config:keymap_cfg.c  SCI_VK_MAINBOARD_KEY4

//		==>SCI_VK_SOS
//		==>SCI_VK_CALENDER
MS_Ref\export\inc\dal_keypad.h  SCI_VK_SOS

//		==>SCI_VK_CALENDER
//		==>0x5e
source:mmi_app\kernel\c\mmi_default.c  0x5e

//		==>KEY_CALENDER
//		==>KEY_SOS
CAF\Template\include\caf.h  0x5e
CAF\Template\include\caf.h  KEY_SOS


### SOS�����ο� Slide����
//		==>MMK_DefaultMSGKbd                    # sos��ֹ����
source:mmi_app\kernel\c\mmi_default.c  SOS_Key_Filter_Status

//		==>MMK_DefaultMSGKbd
//		====>DefaultExtKey                      # start
//		======>MMIAPISET_StartSOSProcedures
source:mmi_app\kernel\c\mmi_default.c  DefaultExtKey
//		======>StopSOSProcedures                # ��ͨ�绰



[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 






