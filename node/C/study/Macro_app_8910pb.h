
//Ŀ¼:
Save:node\C\study\Macro_app_8910pb.h \[1.1\] init
Save:node\C\study\Macro_app_8910pb.h \[1.2\] detail
Save:node\C\study\Macro_app_8910pb.h \[1.3\] add
Save:node\C\study\Macro_app_8910pb.h \[1.4\] memory
Save:node\C\study\Macro_app_8910pb.h \[1.5\] delete
Save:node\C\study\Macro_app_8910pb.h \[1.6\] search
Save:node\C\study\Macro_app_8910pb.h \[1.7\] pbBak, instance
Save:node\C\study\Macro_app_8910pb.h \[1.8\] pbNumMax
Save:node\C\study\Macro_app_8910pb.h \[1.9\] blacklist
Save:node\C\study\Macro_app_8910pb.h \[1.10\] 
Save:node\C\study\Macro_app_8910pb.h \[1.11\] 
Save:node\C\study\Macro_app_8910pb.h \[1.12\] 
Save:node\C\study\Macro_app_8910pb.h \[1.13\] 
Save:node\C\study\Macro_app_8910pb.h \[1.14\] clMain
Save:node\C\study\Macro_app_8910pb.h \[1.15\] clInit    #50��¼
Save:node\C\study\Macro_app_8910pb.h \[1.16\] clDeltail
Save:node\C\study\Macro_app_8910pb.h \[1.17\] 
Save:node\C\study\Macro_app_8910pb.h \[1.18\] 
Save:node\C\study\Macro_app_8910pb.h \[1.19\] 
Save:node\C\study\Macro_app_8910pb.h \[1.20\] 
Save:node\C\study\Macro_app_8910pb.h \[1.21\] 
Save:node\C\study\Macro_app_8910pb.h \[1.22\] 
Save:node\C\study\Macro_app_8910pb.h \[1.23\] 
Save:node\C\study\Macro_app_8910pb.h \[1.24\] 
Save:node\C\study\Macro_app_8910pb.h \[1.25\] 
Save:node\C\study\Macro_app_8910pb.h \[1.26\] 




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
//		======>HandleMainReloadMsg         # �ο������search
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

//
app:pb\c\mmipb_view.c  MMIPB_CONTACT_DISPLAY_ALL


[1.2] __detail__

// pb-detail
//		==>SetEntryDetails
//		====>.icon && name
//		======>AppendListItemDetail
//		====>.num
//		=======>MMIPB_SetContacItem
//		========>AppendListNumberItem
//		====>.group
//		========>
//		==========>
//		============>
//		==============>
app:pb\c\mmipb_view.c  MMI_RESULT_E^HandleEntryDetailWinMsg



MMK_CloseWin


[1.3] __add__

MMIPB_MAX_NV_PHONE_NUM

// Ĭ��2����ϵ��
app:pb\c\mmipb_menu.c  case^MMIPB_LISTBOX_INDEX_NUMBER_MOBILE        # 107
// ����5����ϵ��
app:pb\c\mmipb_menu.c  case^MMIPB_LISTBOX_INDEX_NUMBER_OFFICE        # 107


// pb-add--simSelect
app:pb\c\mmipb_menu.c  MMI_RESULT_E^HandleStorageSelectWinMsgList
// pb-add
//		==>InitContactEditItems
//		====>.photo
//		====>.name
//		=======>...
//		========>GUILIST_AppendItem
//		====>.num
//		=======>SetContactAddOrEditItem
//		====>.group
//		========>
//		====>.ring
app:pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddWinMsg        # 107
app:pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddEditWinMsg
// 	GUIEDIT_SetStyle(first_name_ctr_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);
// pb-add--edit
//		==>edit_text:
//		====>
//		==>edit_number:
//		====>

// im
//		==>SetInputBox
//		====>GUIEDIT_SetIm,
//		====>CTRLBASEEDIT_SetIm
app:im\c\mmiim_im_switching.c  MMIIM_REMOVE_ABC_STYLE


[1.4] __memory__


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
//		========>.s_pb_main_empty_opt_item
//		========>.s_pb_detail_basic_opt_item
//		==========>PB_OPTMENU_NODE_ADDNEW
//		======>.s_pb_menu
//		========>.index  # ��ȡtxt,func,Enable
//		==========>AddMenuEnable


[1.5] 


// pb-list-delete
app:pb\c\mmipb_view.c  void^HandleOperateReloadList


[1.6] search

// pb-list-search
//		==>MMIPB_SearchSubStringInList         # ȫ�ֲ���
//		==>MMIPB_MultiSearch                   # ģ������/����/�Ŷӷ���
//		====>MMIPB_CleanVisibleTable(group)    # --������
//		====>MMIPB_SearchQSortList             # --��ӱ��/����
//		======>.s_pb_qsort_list                # �ַ�������
//		======>.s_pb_contact_list              # ������
//		====>MMIPB_SearchSubStringInList  # �Ѻ��������
//		==>MMIPB_ReadContactList               # �������Ľ����ʾ����
//		======>.contact_list_info
//		==>SetListItem                         # �����ʾ
//		====>MMIPB_GetListStyle
//		======>GUIITEM_STYLE_ONE_LINE_BIGICON_TEXT_WITH_MASK_MS
//		====>MMIPB_SearchAndAppendItem
//		======>SetListItemForSearch
//		==>MMIPB_GetContactListIndex           # ��ǰ����
app:pb\c\mmipb_view.c  void^HandleMainReloadMsg



[1.7] __pbBak__
// --auto backup test
//		==>*#18#, �������
//		==>MMIPB_TestAutoBackup
//		====>MMIPB_OpenMainWin             # list_type ��֧, ���� instance
//		==>MMIPB_OpenPbWin                 # Applet.entry
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



[1.8] __pbNumMax__

## "PB��SMS�����޸�.txt"��

//1�����绰����Ŀ����Ϊ5000����Ҫ�����²������(������������ΪX��=5000 - �汾Ĭ��������)��
//a���޸���Ŀ, ������Ϊ5000
source:mmi_service\export\inc\mmipb_common.h  MMIPB_NV_MAX_RECORD_NUM
//		#define MMIPB_NV_MAX_RECORD_NUM     200 //500 

app:pb\h\mmipb_nv.h  MMINV_MAX_PHONEBOOK_RECORDS
//		#define MMINV_MAX_PHONEBOOK_RECORDS     MMIPB_NV_MAX_RECORD_NUM
app:pb\h\mmipb_nv.h  MMINV_PHONEBOOK_MAIN_LAST_ENTRY  #107


//b�����ӵ�RAM����
//	ÿ����100����ϵ�ˣ��������Լ24K��STATIC heap�ռ䣬��ˣ����ӵĿռ�Ϊ(24*X/100)
//	�������ӵĿռ䣨����ΪX��������mem_cfg.c�� MAX_STATIC_SPACE_SIZE ��MAX_SYSTEM_SPACE_SIZE��С����
//	MAX_STATIC_SPACE_SIZE��С + X
//	MAX_SYSTEM_SPACE_SIZE��С - X
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252
MS_Customize\source\product\config\ums9117_barphone\mem_cfg.c  252

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




[1.9] __blacklist__
// ������
make\app_main\app_macro.mk  MMI_BLACKLIST_SUPPORT
// ������
make\app_main\app_macro.mk  MMI_WHITELIST_SUPPORT
prj:project_{cur}.mk   MMI_WHITELIST_SUPPORT = TRUE
prj:project_{cur}.mk   MMI_BLACK_AND_WHITE_LIST_ADD_SETTING = TRUE
//		==>HandleMTCallDisc
//		====>CC_MTCallWhiteFireWall




[1.10] __pbName__
//
prj:project_{cur}.mk   MMI_PB_NAME_LEN_ = TRUE


### ��ϵ�����Ƴ���
//		==>20,40,30
source:mmi_service\export\inc\mmipb_common.h  MMIPB_NAME_MAX_LEN


### sim pb num
//		==>300+100
source:mmi_service\export\inc\mmipb_common.h  MMIPB_SIM_MAX_RECORD_NUM


### ��ϵ�˺�����
//		==>2,5
//		==>2000x5���ռ�
source:mmi_service\export\inc\mmi_custom_define.h  MMIPB_MAX_NV_PHONE_NUM

//		==>EFS_NvitemWrite
//		==>Ӧ���õ���RAM: 107 ������
source:mmi_app\kernel\h\mmi_modu_main.h  MMIUSERNV_PHONEBOOK_MAIN_LAST_ENTRY 2
//		==>MMI_ReadNVItem, �����cl+pb
source:mmi_app\kernel\h\mmi_modu_main.h  s_mmi_usernv_len


[1.11] 




[1.12] 




[1.13] 




[1.14] __clMain__
//
//1.cl-menu
app:cl\c\Mmicl_{wintab}.c   MMICL_ICON_MAIN_MENU_WIN_TAB
// cl--menu(240)
app:cc\c\mmicc_menutable.c GUIMENU_ITEM_T^menu_cl


//2.cl-list
// cl--title
app:cl\c\Mmicl_{wintab}.c   HandleLogListWindow
### __clNum__

// str
InitPdaCallLogListCtrl        CallLog



[1.15] __clInit__

// cl list--(107)
app:cl\c\Mmicl_{wintab}.c   AppendLogListItem

// cl--read
//		==>MMICL_ReadNV
//		====>MMICL_ReadAllNV
//		====>MMICL_RECORD_TOTAL_NUM     # 80+20=100
//		======>80 40, ������uint8�����ֻ��256-20
source:mmi_service\export\inc\mmi_custom_define.h  MMICL_RECORD_MAX_NUM
// cl--write ʵ��NV
//		==>MMICL_WriteNV
//		====>.header
//		====>.record
//		======>50000+28~38
//		========>EFS_NvitemWrite
//		========>Ӧ���õ���RAM: 107 ������
source:mmi_app\kernel\h\mmi_modu_main.h  MMIUSERNV_CL_CALL_ALL_CONTENT_BEGIN 2
//		======>0~9
source:mmi_app\app\cl\h\mmicl_internal.h  MMICL_RECORD_NVITEM_COUNT
//		==>CC_DisconnectedCallByIndex
//		====>MMIAPICL_RecordCallInfo(, calllog_type, cl_info )   # ģ��ʱ�������
//		======>AddNewCallInfo
//		========>AddNewDetailCallInfo
//		========>MMICL_WriteNV(MMICL_CALL_ALL, arraycall_info)
app:cc\c\mmicc_app.c   CC_DisconnectedCall(msg_id, )


// cl--Init
//		==>SetLogListItem
//		====>.arraycall_info
//		======>MMICL_GetRecordInfo
//		====>AppendLogListItem
//		======>.sim_name_str
//		======>.name_number_str
//		======>.time_str
//		======>...
//		=======>GUILIST_AppendItem
//		======>
//		========>
//		==========>
//		============>
app:cl\c\Mmicl_{wintab}.c   HandleCallLogChildWindow


//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>




[1.16] __clDeltail__

//3.cl-deltail
//		==>�Ӻ����ȡ����
app:cl\c\Mmicl_{wintab}.c   InitLogListDetailContactItem
// cl deltail--����ʾλ��
app:cl/c/Mmicl_{wintab}.c   AppendLogListDetailItem
// cl list--(107)
app:cl\c\Mmicl_{wintab}.c   AppendLogListItem




[1.17] __clTab__




[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



