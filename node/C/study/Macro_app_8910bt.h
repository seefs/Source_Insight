
//目录:
Save:node\C\study\Macro_app_8910bt.h \[1.1\] 
Save:node\C\study\Macro_app_8910bt.h \[1.2\] 
Save:node\C\study\Macro_app_8910bt.h \[1.3\] 
Save:node\C\study\Macro_app_8910bt.h \[1.4\] 
Save:node\C\study\Macro_app_8910bt.h \[1.5\] 
Save:node\C\study\Macro_app_8910bt.h \[1.6\] 
Save:node\C\study\Macro_app_8910bt.h \[1.7\] btModis
Save:node\C\study\Macro_app_8910bt.h \[1.8\] 
Save:node\C\study\Macro_app_8910bt.h \[1.9\] 
Save:node\C\study\Macro_app_8910bt.h \[1.10\] 
Save:node\C\study\Macro_app_8910bt.h \[1.11\] 
Save:node\C\study\Macro_app_8910bt.h \[1.12\] 




[1.1] __enter__

// --bt--enter
//		==>MMIAPIBT_OpenMainMenuWin
//		====>MMIBT_OpenMainMenuWin
// --bt--open--init once (popup)
//		==>HandleMainMenuWinMsg (bt)
//		====>MMIBT_UpdateMainMenu
//		======>DoOperation
//		========>HIDE:
//		========>SetBtVisibility
//		==========>MMIPUB_OpenWaitWin
app:bt\c\mmibt_mainwin.c  MMI_RESULT_E^^^HandleMainMenuWinMsg



[1.2] __search__

// --bt--search (popup)
//		==>PAIRES:
//		====>OpenInquireDeviceListWin
//		======>MMIBT_INQUIRED_DEV_LIST_WIN_TAB
//		========>HandleInquiredDevListWinMsg
//		==========>DoOperation
//		============>MMIPUB_OpenWaitWin
// --bt--search stop
//		==>CANCEL:
//		====>BT_CancelSearch()
//		==>PAIRES: 配对
//		====>MMIBT_SetOpertor(MMIBT_OPC_NOT_CHANGE, MMIBT_OPC_PAIR);  
//		==>PAIRES: option--配对的代码少，好看点
//		====>BT_PairDevice(&s_pin_request_info.addr);
app:bt\c\mmibt_inquireddevice.c  HandleInquiryOptMenuWinMsg
//		==>PAIRES ok:
//		====>MMIBT_GetPairComCnf()
//		====>WatchBtMain_ProcessBtPsMsg()
//		==>确认密码:
//		====>Display_NumericPasskeyInfo()
//		==>输入密码:
//		====>OpenPinInputWin()
//		====>HandlePinInputWinMsg()


// --bt--popwin
//		==>OpenPinInputWin         # 连接密码
//		====>STR_BT_ENTER_CODE
// --bt--rec ok
//		==>MMIBT_OpenNewReceivedFileWin



[1.3] __play__


// --bt--play--handle
app:audioplayer\c\mmiap_play.c  MMIMP3_ReqPlayHandle
// --bt--play--calen--ring
//		==>MMIAPISET_PlayRingByIdEx
//		====>PlayFixedRing
//



[1.4] __atc__

//mmibt_wintab.c
//MMIAPIBT_AppInit

// 蓝牙自动测试优化
MS_Ref/source/autotest_device/src/autotest_device.c  1904
//		Is_BTSearchStart = SCI_FALSE;      //+
//        BT_CancelSearch();  // add by unisoc 2020      



[1.5] __msg__


//bt
// auto/menu CON
//	CON:A2DP:a-8,CallBack:8-12
//	CON:A2DP:9-8,
//	CON:A2DP:ID_STATUS_AVRCP_CONNECT_COMPLETE,CallBack:ID_STATUS_HFAG_HFU_CLCC
//	CON:A2DP:ID_STATUS_A2DP_CONNECTED,
//	// menu DIS
//	DIS:A2DP:a-9,CallBack:1-5
//	DIS:A2DP:ID_STATUS_AVRCP_DISCONNECT_COMPLETE,CallBack:ID_STATUS_CM_VISIBLE_RES
//	// menu DIS
//	DIS:A2DP:9-9,CallBack:1-5
//	DIS:A2DP:ID_STATUS_A2DP_DISCONNECTED,CallBack:ID_STATUS_CM_VISIBLE_RES

// msg
app:bt\c\mmibt_app.c  MMIBT_A2DPCallBackFunc
// 1.CON
//	10090008  ID_STATUS_A2DP_CONNECTED
//	100a0008  ID_STATUS_AVRCP_CONNECT_COMPLETE
//	10090003  ID_STATUS_A2DP_SRC_START_STREAM
//	100a0009  ID_STATUS_AVRCP_DISCONNECT_COMPLETE
//	10090009  ID_STATUS_A2DP_DISCONNECTED
//	10090008  a2_c
//	10090003  a2_s
//	10090005  ID_STATUS_A2DP_SRC_CLOSE_STREAM
//	100a0009  av_dc
//	10090009  a2_dc
//	100a0008  av_c
//	10090008  a2_c
//	100a0009  av_dc
//	10090009  a2_dc



[1.6] __share__

// bt mode
app:heroengine\tts\c\hero_tts_api.c  BLUETOOTH_SUPPORT

// bt--set--name
app:bt\c\mmibt_editwin.c  HandleEditDeviceNameMsg

// bt--nv
MMIBT_GetBtStatusForIcon
//    is_poweron = BT_GetState();

// 分享
// --url--通过短信
//		==>ID_POPUP_MENU_SEND_URL
//		====>MMIBROWSER_SendUrlContentBySms
// --pb--通过email/bt
//		==>MMIPB_OPERATE_TYPE_MULTI_SHARE
//		====>SendMultiVcard
//		======>MMIAPIBT_SendMultiFile





[1.7] __btModis__

// BT-msg
app:bt/c/mmibt_app.c MMIBT_CallBackFunc
app:bt/c/mmibt_app.c MMIBT_A2DPCallBackFunc
//	PUBLIC void MMIBT_A2DPCallBackFunc_Test(uint16 mode)
//	{
//	    BT_MSG_T dg_msg;
//	    if(mode==1)
//	    {
//		    dg_msg.msg_id     = ID_STATUS_AVRCP_CONNECT_COMPLETE;//0x100A0008
//		    dg_msg.status     = BT_SUCCESS;
//		    dg_msg.body_size  = 0;
//		    dg_msg.body_ptr   = NULL;
//		    MMIBT_A2DPCallBackFunc( &dg_msg );
//			
//		    dg_msg.msg_id     = ID_STATUS_HFAG_HFU_CLCC;//0x10010001
//		    MMIBT_CallBackFunc( &dg_msg );
//		}
//		else
//		{
//		    dg_msg.msg_id     = ID_STATUS_A2DP_DISCONNECTED;//0x100A0008
//		    dg_msg.status     = BT_SUCCESS;
//		    dg_msg.body_size  = 0;
//		    dg_msg.body_ptr   = NULL;
//		    MMIBT_A2DPCallBackFunc( &dg_msg );
//			
//		    dg_msg.msg_id     = ID_STATUS_CM_VISIBLE_RES;//0x10010001
//		    MMIBT_CallBackFunc( &dg_msg );
//		}
//		
//	}



[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 






