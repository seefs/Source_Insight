
//Ŀ¼:
Save:node\C\study\Macro_app_8910pb.h \[1.1\] init
Save:node\C\study\Macro_app_8910pb.h \[1.2\] detail
Save:node\C\study\Macro_app_8910pb.h \[1.3\] memory
Save:node\C\study\Macro_app_8910pb.h \[1.4\] add
Save:node\C\study\Macro_app_8910pb.h \[1.5\] delete
Save:node\C\study\Macro_app_8910pb.h \[1.6\] search
Save:node\C\study\Macro_app_8910pb.h \[1.7\] pbBak
Save:node\C\study\Macro_app_8910pb.h \[1.8\] 
Save:node\C\study\Macro_app_8910pb.h \[1.9\] 
Save:node\C\study\Macro_app_8910pb.h \[1.10\] 
Save:node\C\study\Macro_app_8910pb.h \[1.11\] 
Save:node\C\study\Macro_app_8910pb.h \[1.12\] 




[1.1] __init__

// init
//		==>HandleEntryListWinMsg
//		====>OPEN:
//		======>MMK_SetAtvCtrl              # ==>GET_ACTIVE
//		==>PbCreateChildWin                # ==>GET_FOCUS
//		==>HandleMainWinMsg
//		====>OPEN:                         # open/save ==>RELOAD_SEARCH
//		==>HandleEntryListWinMsg
//		====>RELOAD_SEARCH:
//		======>HandleMainReloadMsg
//		========>MMIPB_MultiSearch         # ģ������/����/�Ŷӷ���
//		==========>MMIPB_SearchQSortList
//		============>.s_pb_qsort_list      # �ַ�������
//		============>.s_pb_contact_list    # ������
//		==========>MMIPB_SearchSubStringInList  # �Ѻ��������
//		========>MMIPB_ReadContactList     # �������Ľ����ʾ����
//		============>.contact_list_info
//		========>SetListItem               # �����ʾ
//		==========>MMIPB_GetListStyle
//		============>GUIITEM_STYLE_ONE_LINE_BIGICON_TEXT_WITH_MASK_MS
//		==========>MMIPB_SearchAndAppendItem
//		============>SetListItemForSearch
//		========>MMIPB_GetContactListIndex # ��ǰ����
//		==>HandleEntryListWinMsg
//		====>PAINT:                        # ==>List/CTL_PAINT ==>ITEM_DATA 
//		====>ITEM_DATA:                    # ==>
//		======>AppendDyncListItem
//		======>MMIPB_CONTACTINDEX          # id->data

//		==>HandleEntryListWithSearchWinMsg
//		====>empty:
//		======>CTRLLIST_SetEmptyInfo
//		====>form:
//		======>
//		====>button:
//		======>
//		====>edit:
//		======>MMIPB_SearchWinCreateEditor
//		========>GUIEDIT_SetStyle(,GUIEDIT_STYLE_SINGLE_DYN_DOWN);
//		========>CTRLBASEEDIT_SetDeActiveBorderColor(, MMI_DARK_WHITE_COLOR);
app:pb\c\mmipb_view.c  HandleEntryListWithSearchWinMsg



[1.2] __detail__

// pb-detail
app:pb\c\mmipb_view.c  MMI_RESULT_E^HandleEntryDetailWinMsg



[1.3] __memory__


// pb-memory
//		==>MMIPB_MEMDETAIL_WIN_TAB
app:pb\c\mmipb_view.c  MMI_RESULT_E^^HandleMemDetailWinMsg

// MEM
app:pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_USED_SPACE


//		==>menu_infor_ptr
//		====>.contact_ptr
//		==>HandlePbOptMenuWinMsg
//		====>CreatePbOptMenu
//		======>GetMenuArrAddress
//		========>.s_pb_main_opt_item
//		==========>PB_OPTMENU_NODE_ADDNEW
//		======>.s_pb_menu
//		========>.index  # ��ȡtxt,func,Enable
//		==========>AddMenuEnable



[1.4] __add__


// pb-add--simSelect
app:pb\c\mmipb_menu.c  MMI_RESULT_E^HandleStorageSelectWinMsgList
// pb-add--edit
//		==>edit_text:
//		====>
//		==>edit_number:
//		====>
app:pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddEditWinMsg
// 	GUIEDIT_SetStyle(first_name_ctr_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);


[1.5] 


// pb-list-delete
app:pb\c\mmipb_view.c  void^HandleOperateReloadList


[1.6] search


// pb-list-search
app:pb\c\mmipb_view.c  void^HandleMainReloadMsg



[1.7] __pbBak__
// --auto backup test
//		==>*#18#, �������
//		==>MMIPB_TestAutoBackup
//		====>MMIPB_OpenMainWin             # list_type ��֧
//		==>MMIPB_OpenPbWin                 # Applet.entry, ���� instance
//		====>.function_type                # function_type--bak_open--���� ��֧
//		====>PbCreateChildWin              # ...�߲���
app:pb\c\mmipb_export.c  MMIAPIPB_OpenAutoBackupWin
//		==>MMIPB_StartAutoBackup
//		====>
// --auto backup--exit
//		==>HandleExportContactResult       # function_type--������
//		====>s_mmipb_update_callback       # ����һ�λ�ر�
//		======>MMIPB_CloseApplet

// --auto backup set
app:pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_AUTO_BACKUP
//
app:pb\h\mmipb_id.def  MMIPB_AUTO_BACKUP_WIN_ID

//
app:idle/c/mainapp.c  MMIEnvActivateTimeCheck


### �ο�
//import
app:pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_VCARD_IMPORT_CONTACT
//		==>MMIPB_LoadVCardFromDir
//		====>
//		======>
//		==>HandlePBPsMsg
//		====>.READ_CNF:
//		====>SaveContact
//		======>MMIPB_UpdateContact


//export
app:pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_VCARD_EXPORT_CONTACT
//		==>MMIPB_OpenOperationSelectWin             # ��ѡ�񴰿�
//		====>MMIPB_EnterPbTabOptMenu
//		==>HandlePbOptMenuWinMsg
//		====>CreatePbOptMenu
//		======>GetMenuArrAddress
//		========>.s_pb_operate_sel_opt_item
//		======>.MMI_PB_OPERATE_OK
//		==>AddCheckItemToOperateList                # ���� sel_node
//		====>MMIPB_HandleOperateSelCallBack
//		======>SelectExportFolder
//		======>FolderSelectionCallBack
//		========>MMIPB_ExportContactAsynForPB       # ����
//		==>MMIPB_ExportNextVcardAsyn
//		====>.filename
//		====>.MMIAPIVCARD_GetVcardDefaultFileName
//		======>MMIPB_WriteAsyn
//		==>.next
//		====>HandleExportContactResult              # ��Ҫ handle
//		======>MMIPB_ExportNextVcardAsyn


// һ������
//		==>MMIAPIIKB_OpenMainWin
//		====>.backup
//		======>.s_ui_backup_list
//		========>BackupSelItems
//		==========>StartBackupItems
//		============>MMIIKB_GetCurBaseDir    # �洢·��_D_dir_0205_
//		============>MMIAPIFMM_CreateDir
//		====>.restore
//		======>InitRestoreSelItemList
//		========>IKeyBackup_GetPackContentNumber
//		====>.task
//		======>IKeyBackup_StartIKBHandlerTask
//		========>IKBBackupAllItems           # ״̬
//		==========>BackupCircleTask
//		====>.process
//		======>MMIAPIIKB_RegTypeFunc
//		========>MMIPB_InitApp
//		========>ikeybackup_register
//		==========>ikeybackupcallback        # ��ȡȫ����ϵ��
//		==========>ikeyrestore_callback

// �ӿ�
//		==>MMIPB_GetContactNumberNum
//		==>MMIAPIPB_GetPhoneContactCount
//		==>MMIAPIPB_GetAllSimContactCount
//		====>MMIPB_GetContactCount
//		======>
//		==>MMIAPIPB_GetPBRecordNumFromNV
//		====>MMIPB_GetContactStorageInfo



[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



