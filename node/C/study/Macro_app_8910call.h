
//Ŀ¼:
Save:node\C\study\Macro_app_8910call.h \[1.1\] init
Save:node\C\study\Macro_app_8910call.h \[1.2\] MT -----------����
Save:node\C\study\Macro_app_8910call.h \[1.3\] MO -----------ȥ��
Save:node\C\study\Macro_app_8910call.h \[1.4\] DIS ----------�Ҷ�
Save:node\C\study\Macro_app_8910call.h \[1.5\] Ans ----------����
Save:node\C\study\Macro_app_8910call.h \[1.6\] 112
Save:node\C\study\Macro_app_8910call.h \[1.7\] Multi---------�࿨ͨ��
Save:node\C\study\Macro_app_8910call.h \[1.8\] opt
Save:node\C\study\Macro_app_8910call.h \[1.9\] vib
Save:node\C\study\Macro_app_8910call.h \[1.10\] record
Save:node\C\study\Macro_app_8910call.h \[1.11\] speaker
Save:node\C\study\Macro_app_8910call.h \[1.12\] other
Save:node\C\study\Macro_app_8910call.h \[1.13\] 
Save:node\C\study\Macro_app_8910call.h \[1.14\] CC--msg, ��Ĭ�绰
Save:node\C\study\Macro_app_8910call.h \[1.15\] 
Save:node\C\study\Macro_app_8910call.h \[1.16\] 
// �������
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] __init__

// ����softkey��
MMK_DestroyControl(MMICC_CONNECTED_STATE_LABEL_CTRL_ID);

// ��ʾbtn
//		==>.cc_display_type = CC_DISPLAY_HOT_BUTTONS;
app:cc\c\mmicc_{wintab}.c  CC_HandleCcAnimWinMsg

// ��ͨ--ˢ��
//		==>CC_CreateHotButtonsWithoutForm
//		====>MMK_PostMsg,MSG_FULL_PAINT
app:cc\c\mmicc_{wintab}.c  case^MSG_CC_CONNECT_UPDATE_BUTTON



[1.2] __MT__

// ����--����-MT��
//		==>MMICC_HandlePsMsg
//		====>CC_CallAlertingInd
//		======>CC_CallSetupIndEx  #107
//		======>CC_CallSetupInd    #8910
//		========>MMICC_UpdateCallStatusDisplay      #mo mt dis����
app:cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMtCallWin
//		============>OpenCallingWin
//		==============>PdaDisplaySingleCallInfoForCommon
app:cc\c\mmicc_{wintab}.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_{wintab}.c  PdaDisplaySingleCallInfoForCommon  


// ����--update
//		==>CC_HandleCcAnimWinMsg
//		==>CC_HandleCcWinMsg
//		====>MMICC_UpdateCurrentCallStatus


[1.3] __MO__

// ����--ȥ��-MO��
//		==>MMICC_ProcessMakeCall  #107
//		====>ProcessPhoneNumExt
//		======>MakeCallReqExt
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMoCallWin
//		============>CC_CallStateDisplaying      # ��Ӧ CC_FreeSimStatusSpace
//		============>MMISUB_SetSubLcdDisplay     # sublcd
//		============>OpenConnectedWin
//		==============>PdaDisplaySingleCall
//		============>DisplayCallAnimPhotoForCommon
//		========>MMICC_EnableRemoteMute(FALSE)
app:cc\c\mmicc_{wintab}.c  CC_HandleCcWinMsg
app:cc\c\mmicc_{wintab}.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID



[1.4] __DIS__

// ����--�Ҷ� DIS
// �ر���Щ����
app:cc\c\mmicc_{wintab}.c  MMICC_MENU_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_CALLLIST_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_PROCESSING_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_ANIMATION_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_ADJUSTVOLUME_WIN_ID
app:cc\c\mmicc_{wintab}.c  MMICC_HOLDMENU_WIN_ID        #
app:cc\c\mmicc_{wintab}.c  MMICC_STATUS_WIN_ID
//app:cc\c\.c  MMIIDLE_DIAL_MENU_WIN_ID
//app:cc\c\mmicc_app.c MMICC_CALL_WAIT_INDICATOR_WIN_ID
//app:cc\c\mmicc_app.c MMICC_ANIMATION_WIN_ID

// 107 �Ҷ�
//		==>HandleFlipDown
//		====>CC_HandleDisconnectWinMsg
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>CC_DisconnectedCallByIndex
//		========>MMICC_OpenDisconnectWin(call_time)  #8910��ǰ��
//		==========>PdaDisplayDisconnectWin
//		============>CC_TimeCountToStr(call_time)
//		==========>MMICC_HandleOperAfterCallEnd
//		============>MMISUB_SetSubLcdDisplay()
app:cc\c\mmicc_app.c case^APP_MN_CALL_DISCONNECTED_IND




[1.5] __Ans__


// ����--����
app:cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent
// ����--���� 107
//		==>MMICC_HandlePsMsg
//		====>case^APP_MN_SETUP_COMPLETE_CNF
//		====>CC_SetupCompleteCnf
//		======>MMICC_VibrateForConnectPrompt
//		======>MMICC_UpdateCallStatusDisplay
//		========>case^MMICC_MO_CONNECTED_IND
//		========>MMICC_UpdateCurrentCallStatus    # ��ȡ�ַ�
// ����--���� 8910
//		==>CC_HandleCcAnimWinMsg
//		====>GUIWIN_SeSoftkeytButtonTextId     # ����ģʽ����ʾ����
//		======>MMIAPICC_IsMtCallPlayingRing
//		========>need_playring = TRUE;
//		========>PlayNewCallRing
//		====>MMICC_AnswerCall
app:cc\c\mmicc_{wintab}.c  MMI_CALL_SOFTKEY_SILENT_FIX



[1.6] __112__

// 112
//		==>MMIAPICC_IsEmergencyNum
//		====>if(0 == strcmp(tele_num, "112"))     # ��112����
app:cc\c\mmicc_{wintab}.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  



[1.7] __Multi__

// �࿨ͨ��--option
//		==>HandleHoldMenuWinMsg
//		====>MMICC_HoldCall
//		======>CC_HoldCall

// �࿨ͨ��--�Ҷ�
//		==>MMICC_HandlePsMsg
//		====>CC_DisconnectedCall
//		======>MMICC_UpdateCallStatusDisplay
//		======>MMICC_OpenDisconnectWin        #8910��ǰ��
//		======>CC_DisconnectedCallByIndex
//		======>CC_HandleDisconnectedInMPTY    # s_call_context.call_number -1

// �࿨ͨ��--����
//		==>MMICC_HandlePsMsg
//		====>case^APP_MN_SETUP_COMPLETE_CNF
//		====>CC_SetupCompleteCnf
//		======>MMICC_UpdateCallStatusDisplay
//		========>case^MMICC_MO_CONNECTED_IND
//		========>MMICC_UpdateCurrentCallStatus
//		==========>CustomCreateAndDisplayMultiCall
//		==========>DisplayCallInfoForMulti
//		============>CustomShowMultiCallList    #list

// �࿨ͨ��--����绰
//		========>MMICC_UpdateCurrentCallStatus
//		==========>PdaDisplaySingleCall
//		============>PdaDisplayMPTYCallInfoForCommon

// �࿨ͨ��--����
//		========>MMICC_UpdateCallStatusDisplay
//		==========>CC_OpenMoCallWin
//		============>OpenConnectedWinByWinTab
//		==============>CustomDisplayMultiCallInfoForCommon   #show
//		================>CustomShowMultiCallList    #list

// �࿨ͨ��--����ͨ��
//		==========>HandleCCListWinMsg
//		============>CustomUpdateConferenceList
//		==============>IMAGE_CC_AVATAR_UNKNOWN_SMALL
//		============>CustomUpdateMultiCallListAnim
//		==========>HandleHoldMenuWinMsg
//		============>CC_CallList
//		==============>CTRLLIST_SetBgColor

// �࿨ͨ��--����
//		==========>PdaDisplayMultiCall
//		============>PdaDisplayCallInfoForMultiHoldCall   #show



[1.8] __opt__


// call--opt--8910
//		==>MENU:
//		==>OpenCallMenu          # add note
//		====>MMICC_HOLDMENU_WIN_TAB
//		======>HandleHoldMenuWinMsg
// call--opt--107
//		==>MENU:
//		==>OpenCCHoldMenu
app:cc\c\mmicc_{wintab}.c  MMI_RESULT_E^HandleHoldMenuWinMsg  
//    if ((MMICC_AUDIO_DEV_BT == MMICC_GetCurrentDev()))


[1.9] __vib__


// call--vib--8910
//		==>COMPLETE_IND: ��ͨ
//		====>CC_SetupCompleteInd
//		======>MMICC_VibrateForConnectPrompt
//		==>
//		====>CC_SetupCompleteCnf
//		======>MMICC_VibrateForConnectPrompt
//		==>CC_HandleCcAnimWinMsg
//		====>OPEN:
//		====>PlayNewCallRing
//		======>MMIAPICC_StartRingOrVibrate


[1.10] __record__

// call--record--8910
//		==>CC_HandleCcWinMsg
//		====>WEB:
//		====>HandleRecordOpt
//		======>StartCCRecord
//		========>MMIRECORDSRV_StartRecord
//		==========>RequestHandle
//		====>CANCEL:
//		======>EnableHandfreeMode
//		========>softkey:
//		==========>BM_UpdateLButton_WithText




[1.11] __speaker__

// call--speaker--8910
//		==>CC_HandleCcWinMsg
//		====>open:            # ����
//		====>STARTTIMER:      # ȥ��
//		====>UPDATE_BUTTON:   # ȥ��
//		====>MSG_CC_CONNECT_OPEN_WINDOW:
//		====>MSG_NOTIFY_ANIM_UPDATE_END:
//		==>HandleCCWinWebMsg
//		====>MMISRVAUD_ROUTE_SPEAKER
//		==>HandleCCWinPenOkMsg
//		====>MMISRVAUD_ROUTE_SPEAKER
//
//		if(MMIAPICC_IsHandFree() == FALSE)
//			EnableHandfreeMode(!MMIAPICC_IsHandFree());



[1.12] __other__



// call--��������--8910
app:cc\c\mmicc_{wintab}.c  MMI_IDLE_8_KEY_LONG_TO_HANDHOLD 


[1.13] 
//




[1.14] __ALERTING__
CC--msg, ��Ĭ�绰

### ��Ĭ�绰(����)
//		==>MMICC_HandlePsMsg
//		====>case^APP_MN_ALERTING_IND                # �յ�������ʾ�¼��Ĵ���
//		======>CC_CallAlertingInd                    # 2G�������������
//		======>CC_CallEarlyMediaInd                  # volte�������������
//		========>case^MN_CALL_REMOTE_USER_ALERTING   # �յ��Զ˷�������ALERT��Ϣ
//		==========>MNPHONE_StartVolteCodec           # �ɷ��ڽ�ͨ�����
app:cc\c\mmicc_app.c  case^APP_MN_ALERTING_IND
//	StopLocalNetRing
//	PlayLocalNetRing  # no use
//		====>case^APP_MN_CALL_START_IND              # ring
//		======>CC_CallStartInd                       # 
//		========>MMICC_ConstructVoiceCodec           # ��Ҫ�أ����˺�û����
//		====>case^APP_MN_SYNC_IND                    # ring, MMISRVAUD_TYPE_VOICE
//		======>CC_SyncInd                            # 
//		========>CC_OpenAudioTunnel                  # //bt
//		===========>MMICC_ConstructVoiceCodec        # no use


### ��Ĭ�绰(����)
source:mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultSideKey
// log:
// CC_MT_CONNECTING_STATE          # ���
// CC_MO_CONNECTING_STATE          # ���
// CC_IN_CALL_STATE                # 1 
// CC_CALL_CONNECTED_STATE         # ��ͨ
// MMICC_IsExistIncommingCall()    # �����δ��ͨ




[1.15] 





[1.16] 




