
//目录:
Save:node\C\study\Macro_app_8910menu.h \[1.1\] Creat
Save:node\C\study\Macro_app_8910menu.h \[1.2\] onePage
Save:node\C\study\Macro_app_8910menu.h \[1.3\] matrix
Save:node\C\study\Macro_app_8910menu.h \[1.4\] title
Save:node\C\study\Macro_app_8910menu.h \[1.5\] prg
Save:node\C\study\Macro_app_8910menu.h \[1.6\] 
Save:node\C\study\Macro_app_8910menu.h \[1.7\] 
Save:node\C\study\Macro_app_8910menu.h \[1.8\] 
Save:node\C\study\Macro_app_8910menu.h \[1.9\] 
Save:node\C\study\Macro_app_8910menu.h \[1.10\] 
Save:node\C\study\Macro_app_8910menu.h \[1.11\] 
Save:node\C\study\Macro_app_8910menu.h \[1.12\] 




[1.1] __Creat__

// menu--enter
//		==>MMIAPIMENU_CreatMainMenu
//		====>MAINMENU_TITLE_ICON_WIN_TAB             # title + 3X3 icon
//		====>MAINMENU_ICON_WIN_TAB                   # 4X3, icon + title
app:mainmenu\c\mainmenu_win.c  MAINMENU_ICON_WIN_TAB
//		==>APP_Init
//		====>MMIMAINMENU_InitMenuIdArray             # cnt
//		==>CreateMainMenuCtrl                        # init
//		====>MainmenuCtrlConstruct
//		======>MatrixMenuInit
//		========>MatrixMenuInitMenuDetail
//		==========>MatrixMenuGetInfo
//		============>MatrixMenuGetNotTitleStyleInfo
//		============>MatrixMenuGetTitleStyleInfo     # bg rect, row/column
//		==========>MatrixReadIconMenuItemList
//		============>MMIMAINMENU_GetMatrixItemList   # cnt
//		==============>MMIMAINMENU_GetItemCount
//		==>MainmenuCtrlHandleMsg                     # up/down
//		====>MatrixMenuHandle
//		======>HandleMatrixMenuDirectionKey
//		========>MatrixMenuResetIconDisplay          # reset 多层
//		==========>HandleMatrixMenuGetIconRect       # select + item
//		============>MMITHEME_MainmenuIconTextMargin   # 获得文字与图片的间距
//		==========>MatrixMenuDrawItem...
//		========>MSG_FULL_PAINT                      # 非多层
//		========>MatrixMenuDrawActiveIcon            # 多层直接画, 只有一行标题
//		==========>MatrixMenuDrawHighlightItem       # select + item
//		============>MatrixMenuDrawItem
//		==============>MMITHEME_DrawMainmenuItem     # draw
//		==============>DisplayMenuIcon               # 第1次显示(多层,12宫格)
//		==>MainmenuCtrlHandleMsg
//		====>MSG_CTL_PAINT

// menu--layer
//		==>UILAYER_CreateLayerEx
//		====>s_item_layer_handle, move layer      # softkey, bg
//		======>MatrixMenuCreateItemLayer
//		====>
//		======>MatrixMenuGetHighLightRect
//		====>
//		======>MatrixMenuCreateItemLayer


// menu--draw
//		==>MatrixMenuDraw
//		====>MatrixMenuDrawBg                      # bg
//		======>.bg_image
//		====>MatrixMenuGetTopAndBottomLineIndex    # icon rect
//		====>HandleMatrixMenuGetIconRect
//		====>MatrixMenuDisplayActiveItemTitle      # title
//		======>GUIRES_DisplayImg

// menu--select
//		==>s_mainmenu_item_data[i].active_img_id
//		====>active_icon.data.icon_id
//		======>MatrixMenuDrawHighlightItem
//		======>MatrixMenuDrawItemIcon
// menu--sms--num
//		==>MMITHEME_DrawMainmenuItem
//		====>DrawMenuNumberIcon
//		======>.cur_cache_info.menu_num
//		========>GetMenuIconNumber


// menu--main
app:mainmenu\c\mainmenu_win.c  HandleMainMenuWinMsg
// menu--second
app:mainmenu\c\mainmenu_win.c  HandleSecMenuStaticMsg
app:mainmenu\c\mainmenu_win.c  3353

// menu img
ctrl:Menu\c\ctrlmenu_popup.c  check_unsel_img
ctrl:Menu\c\ctrlmenu_sec.c   check_unsel_img
// menu enter
source:mmi_app\app\mainmenu\c\mainmenu_win.c  case^ID_TOOLS_RECORD
source:mmi_app\app\mainmenu\c\mainmenu_win.c  case^ID_ENTERTAIMENT_CAMERA

//tone


[1.2] __onePage__

// menu--one page
app:mainmenu\c\mainmenu_win.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
source:mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_data_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
app:mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
source:mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE




[1.3] __matrix__

// menu--matrix
source:mmi_app\app\theme\c\mmitheme_mainmenu.c  MAINMENU_NINE_MATRIX_STYLE
source:mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_NINE_MATRIX_STYLE
source:mmi_service\export\inc\mmi_custom_define.h  MAINMENU_NINE_MATRIX_STYLE
app:mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_NINE_MATRIX_STYLE
app:mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_NINE_MATRIX_STYLE
source:mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_NINE_MATRIX_STYLE



[1.4] __title__

// menu--title
//		==>MatrixMenuDisplayActiveItemTitle
source:mmi_service/export/inc/mmi_custom_define.h  MMISET_DEFAULT_MENU_STYLE_E




[1.5] __prg__

// menu--prg
app:theme/c/mmitheme_mainmenu.c  is_has_button
app:mainmenu/c/mainmenu_win.c  MAINMENU_ICON_WIN_TAB
app:mainmenu\c\mmi_mainmenu_matrix.c  ->is_need_prgbox



[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 





