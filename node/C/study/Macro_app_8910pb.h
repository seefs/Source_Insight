
//目录:
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
Save:node\C\study\Macro_app_8910pb.h \[1.15\] clInit    #50记录
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
//		======>HandleMainReloadMsg         # 参考后面的search
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

// 默认2个联系人
app:pb\c\mmipb_menu.c  case^MMIPB_LISTBOX_INDEX_NUMBER_MOBILE        # 107
// 增加5个联系人
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
//		========>.index  # 获取txt,func,Enable
//		==========>AddMenuEnable


[1.5] 


// pb-list-delete
app:pb\c\mmipb_view.c  void^HandleOperateReloadList


[1.6] search

// pb-list-search
//		==>MMIPB_SearchSubStringInList         # 全字查找
//		==>MMIPB_MultiSearch                   # 模糊查找/分组/排队分组
//		====>MMIPB_CleanVisibleTable(group)    # --清除标记
//		====>MMIPB_SearchQSortList             # --添加标记/分组
//		======>.s_pb_qsort_list                # 字符索引表
//		======>.s_pb_contact_list              # 索引表
//		====>MMIPB_SearchSubStringInList  # 搜号码或姓名
//		==>MMIPB_ReadContactList               # 把搜索的结果显示出来
//		======>.contact_list_info
//		==>SetListItem                         # 结果显示
//		====>MMIPB_GetListStyle
//		======>GUIITEM_STYLE_ONE_LINE_BIGICON_TEXT_WITH_MASK_MS
//		====>MMIPB_SearchAndAppendItem
//		======>SetListItemForSearch
//		==>MMIPB_GetContactListIndex           # 当前焦点
app:pb\c\mmipb_view.c  void^HandleMainReloadMsg



[1.7] __pbBak__
// --auto backup test
//		==>*#18#, 暗码测试
//		==>MMIPB_TestAutoBackup
//		====>MMIPB_OpenMainWin             # list_type 分支, 创建 instance
//		==>MMIPB_OpenPbWin                 # Applet.entry
//		====>.function_type                # function_type--bak_open--创建 分支
//		====>PbCreateChildWin              # ...走不到
app:pb\c\mmipb_export.c  MMIAPIPB_OpenAutoBackupWin
//		==>MMIPB_StartAutoBackup
//		====>
// --auto backup--exit
//		==>HandleExportContactResult       # function_type--不更新
//		====>s_mmipb_update_callback       # 保存一次会关闭
//		======>MMIPB_CloseApplet

// --auto backup set
app:pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_AUTO_BACKUP
//
app:pb\h\mmipb_id.def  MMIPB_AUTO_BACKUP_WIN_ID

//
app:idle/c/mainapp.c  MMIEnvActivateTimeCheck


### 参考
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
//		==>MMIPB_OpenOperationSelectWin             # 打开选择窗口
//		====>MMIPB_EnterPbTabOptMenu
//		==>HandlePbOptMenuWinMsg
//		====>CreatePbOptMenu
//		======>GetMenuArrAddress
//		========>.s_pb_operate_sel_opt_item
//		======>.MMI_PB_OPERATE_OK
//		==>AddCheckItemToOperateList                # 创建 sel_node
//		====>MMIPB_HandleOperateSelCallBack
//		======>SelectExportFolder
//		======>FolderSelectionCallBack
//		========>MMIPB_ExportContactAsynForPB       # 保存
//		==>MMIPB_ExportNextVcardAsyn
//		====>.filename
//		====>.MMIAPIVCARD_GetVcardDefaultFileName
//		======>MMIPB_WriteAsyn
//		==>.next
//		====>HandleExportContactResult              # 需要 handle
//		======>MMIPB_ExportNextVcardAsyn


// 一键备份
//		==>MMIAPIIKB_OpenMainWin
//		====>.backup
//		======>.s_ui_backup_list
//		========>BackupSelItems
//		==========>StartBackupItems
//		============>MMIIKB_GetCurBaseDir    # 存储路径_D_dir_0205_
//		============>MMIAPIFMM_CreateDir
//		====>.restore
//		======>InitRestoreSelItemList
//		========>IKeyBackup_GetPackContentNumber
//		====>.task
//		======>IKeyBackup_StartIKBHandlerTask
//		========>IKBBackupAllItems           # 状态
//		==========>BackupCircleTask
//		====>.process
//		======>MMIAPIIKB_RegTypeFunc
//		========>MMIPB_InitApp
//		========>ikeybackup_register
//		==========>ikeybackupcallback        # 获取全部联系人
//		==========>ikeyrestore_callback

// 接口
//		==>MMIPB_GetContactNumberNum
//		==>MMIAPIPB_GetPhoneContactCount
//		==>MMIAPIPB_GetAllSimContactCount
//		====>MMIPB_GetContactCount
//		======>
//		==>MMIAPIPB_GetPBRecordNumFromNV
//		====>MMIPB_GetContactStorageInfo



[1.8] __pbNumMax__

## "PB和SMS条数修改.txt"：

//1、将电话簿条目数改为5000条需要按如下步骤调整(假设增加条数为X（=5000 - 版本默认条数）)：
//a、修改条目, 均设置为5000
source:mmi_service\export\inc\mmipb_common.h  MMIPB_NV_MAX_RECORD_NUM
//		#define MMIPB_NV_MAX_RECORD_NUM     200 //500 

app:pb\h\mmipb_nv.h  MMINV_MAX_PHONEBOOK_RECORDS
//		#define MMINV_MAX_PHONEBOOK_RECORDS     MMIPB_NV_MAX_RECORD_NUM
app:pb\h\mmipb_nv.h  MMINV_PHONEBOOK_MAIN_LAST_ENTRY  #107


//b、增加的RAM调整
//	每增加100条联系人，大概增加约24K的STATIC heap空间，因此，增加的空间为(24*X/100)
//	根据增加的空间（假设为X），调整mem_cfg.c中 MAX_STATIC_SPACE_SIZE 和MAX_SYSTEM_SPACE_SIZE大小，即
//	MAX_STATIC_SPACE_SIZE大小 + X
//	MAX_SYSTEM_SPACE_SIZE大小 - X
MS_Customize\source\product\config\uis8910ff_refphone\mem_cfg.c  252
MS_Customize\source\product\config\ums9117_barphone\mem_cfg.c  252

//每增加100条联系人,APP HEAP增加情况：
//仅存一个号码：～14K
//存两个号码：  ～16K
//...
//
//因此，总增加RAM：(14 + 2*（K - 1）) * X / 100  -- K为号码数（见宏MMIPB_MAX_NV_PHONE_NUM@mmi_custom_define.h定义）

//【说明】上面"+ X" "- X"只是保守的修改方法，实际系统可能会有冗余，MAX_SYSTEM_SPACE_SIZE可能调整的大小会小一些。可以适当微调(以50K为单位)，只要编译不报RAM超即可。

//因此，如果增加的条数大，会导致系统空间变小，影响browser/camera等大内存应用（风险！！！）

//c、flash 调整
//请见下面《Flash 配置相关说明》
//
//d、修改后编译代码，进入手机进工程模式->Running NV Counting，查看MMI running NV item num，如果该值远远小于MAX_MMI_NV_USER_ITEM_NUM(@mmi_nv.h)定义的值，
//则不需要做下面步骤的调整，否则，需要做后续的调整。
//
//e、修改MAX_MMI_NV_USER_ITEM_NUM(@mmi_nv.h):MAX_MMI_NV_USER_ITEM_NUM值为（MAX_MMI_NV_USER_ITEM_NUM + X）
//
//f、修改NV_MAX_ID（mem_cfg.c）：NV_MAX_ID值为（NV_MAX_ID + X）
//
//g、修改MAX_NV_USER_ITEM_NUM(@nv_item_id.h):MAX_NV_USER_ITEM_NUM值为（MAX_NV_USER_ITEM_NUM + X）
//
//h、需要申请更新两个库文件umem.a及efs.a
//   MAX_NV_USER_ITME_NUM-->NV_UDISK_BASE-->umem.a
//   NV_MAX_ID-->LAST_NV_ITEM-->efs.a  
//
//注：efs中NV最大总条数<0x3fff(16383)：
//    1、查看EFS_ItemInit（@efs_item.c）语句:SCI_ASSERT(EFS_MAX_NV_ITEM < ITEM_MASK_ID)
//    2、#define ITEM_MASK_ID 0x3FFF
//-------------------------------------------------------------------------


## Flash 配置相关说明(客户量产前建议的必查项)：
//	对于runing nv的修改（修改手机中短信条数/Pb条数/增加应用NV项等）：
//	1、通过相关宏修改手机短信条数
//	2、a、修改后编译代码，进入手机进工程模式->Running NV Counting，查看All running NV size的值（假设定义为all_running_nv_size）
//	   b、查看对应的spiflash_cfg.c文件中running nv配置的大小：(RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE)
//	   c、必须满足(RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE) >= all_running_nv_size + FLASH_SECTOR_SIZE
//
//	spi flash各个区块的关系（大小定义见对应工程的spiflash_cfg.c）
//	     (RUNNIN_NV_SECTOR_NUM*FLASH_SECTOR_SIZE) + FIXED_NV_SIZE + (UMEM_SECTOR_NUM*FLASH_SECTOR_SIZE) + PS BIN SIZE(工程的*stone.bin文件：resource+ps code经压缩后文件大小) <= PHY_FLASH_SIZE（物理flash的大小，单位Bytes）
//	    注：上面等式每项NV的大小要Sector对齐（没有达到1个Sector大小，以1个Sector大小计算）
//
//	【注意】前面公式中宏对应于非镁光Flash，对于镁光Flash，需要查看和修改对应“*_B”的宏
//	（如：RUNNIN_NV_SECTOR_NUM_B等等，而不是RUNNIN_NV_SECTOR_NUM）

## 其他 
make\app_main\release_app_macro.mk  MMIPB_MAX_COUNT_200




[1.9] __blacklist__
// 黑名单
make\app_main\app_macro.mk  MMI_BLACKLIST_SUPPORT
// 白名单
make\app_main\app_macro.mk  MMI_WHITELIST_SUPPORT
prj:project_{cur}.mk   MMI_WHITELIST_SUPPORT = TRUE
prj:project_{cur}.mk   MMI_BLACK_AND_WHITE_LIST_ADD_SETTING = TRUE
//		==>HandleMTCallDisc
//		====>CC_MTCallWhiteFireWall




[1.10] __pbName__
//
prj:project_{cur}.mk   MMI_PB_NAME_LEN_ = TRUE


### 联系人名称长度
//		==>20,40,30
source:mmi_service\export\inc\mmipb_common.h  MMIPB_NAME_MAX_LEN


### sim pb num
//		==>300+100
source:mmi_service\export\inc\mmipb_common.h  MMIPB_SIM_MAX_RECORD_NUM


### 联系人号码数
//		==>2,5
//		==>2000x5超空间
source:mmi_service\export\inc\mmi_custom_define.h  MMIPB_MAX_NV_PHONE_NUM

//		==>EFS_NvitemWrite
//		==>应该用的是RAM: 107 不好算
source:mmi_app\kernel\h\mmi_modu_main.h  MMIUSERNV_PHONEBOOK_MAIN_LAST_ENTRY 2
//		==>MMI_ReadNVItem, 不会读cl+pb
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
//		======>80 40, 看起来uint8最大数只能256-20
source:mmi_service\export\inc\mmi_custom_define.h  MMICL_RECORD_MAX_NUM
// cl--write 实际NV
//		==>MMICL_WriteNV
//		====>.header
//		====>.record
//		======>50000+28~38
//		========>EFS_NvitemWrite
//		========>应该用的是RAM: 107 不好算
source:mmi_app\kernel\h\mmi_modu_main.h  MMIUSERNV_CL_CALL_ALL_CONTENT_BEGIN 2
//		======>0~9
source:mmi_app\app\cl\h\mmicl_internal.h  MMICL_RECORD_NVITEM_COUNT
//		==>CC_DisconnectedCallByIndex
//		====>MMIAPICL_RecordCallInfo(, calllog_type, cl_info )   # 模拟时调用这个
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
//		==>从号码获取姓名
app:cl\c\Mmicl_{wintab}.c   InitLogListDetailContactItem
// cl deltail--调显示位置
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



