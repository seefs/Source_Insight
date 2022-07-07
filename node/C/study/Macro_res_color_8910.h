
基础路径设置:
//basePath = 

//目录:
// 1. 
Save:node\C\study\Macro_res_color_8910.h \[1.1\] multi--------
Save:node\C\study\Macro_res_color_8910.h \[1.2\] common
Save:node\C\study\Macro_res_color_8910.h \[1.3\] gui----------
Save:node\C\study\Macro_res_color_8910.h \[1.4\] tool---------
Save:node\C\study\Macro_res_color_8910.h \[1.5\] win----------
Save:node\C\study\Macro_res_color_8910.h \[1.6\] test
Save:node\C\study\Macro_res_color_8910.h \[1.7\] call
Save:node\C\study\Macro_res_color_8910.h \[1.8\] theme
Save:node\C\study\Macro_res_color_8910.h \[1.9\] display------
Save:node\C\study\Macro_res_color_8910.h \[1.10\] sms
Save:node\C\study\Macro_res_color_8910.h \[1.11\] set
Save:node\C\study\Macro_res_color_8910.h \[1.12\] form--------form theme
Save:node\C\study\Macro_res_color_8910.h \[1.13\] form2-------ctrl theme
Save:node\C\study\Macro_res_color_8910.h \[1.14\] 
Save:node\C\study\Macro_res_color_8910.h \[1.15\] 




[1.1] __multi__
### __Mp3__
// mp3--bg--白--去滚动重叠
// mp3--bg--黑
app:audioplayer\h\audioplayer_mdu_def.h  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT
app:audioplayer\h\audioplayer_mdu_def.h  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT
// mp3--滚动时会重影
// mp3--osd时间重影
app:audioplayer\c\mmiapwin_main_pda.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT
app:audioplayer\c\mmiapwin_main_pda.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:audioplayer\c\mmiapwin_main_pda.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// mp3--setBtName(theme)
app:audioplayer\c\mmiapwin_set.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 

// mp3--title



### __pic__
// pic--
app:pic_viewer\c\mmipicview_list.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT  
app:pic_viewer\c\mmipicview_list.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:pic_viewer\c\mmipicview_list.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:pic_viewer\c\mmipicview_list.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:pic_viewer\c\mmipicview_list.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// pic--107
app:pic_viewer\h\mmipicview_position.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:pic_viewer\c\mmipicview_preview.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:pic_viewer\c\mmipicview_preview.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// pic--107--多余
app:pic_viewer\h\pic_viewer_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:pic_viewer\h\pic_viewer_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 


### __fm__
// fm--bg--107--未使用
app:fm\c\mmifm_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 



### __camera__
//
source:mmi_app\common\c\mmicom_panel.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT
//
app:camera\h\mmidc_display.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:camera\c\mmidc_full_osd_display.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:camera\c\mmidc_full_osd_display.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:camera\c\mmidc_full_osd_display.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:camera\c\mmidc_full_osd_display.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:camera\c\mmidc_full_osd_display.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:camera\c\mmidc_full_osd_display.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 

// camera--color
//		====>GetStringDefaultStyle
//		======>edge_color  # WHITE
//		====>MMIDC_GetStringWidth
//		======>edge_color  # WHITE
//		====>MMIDC_GetSpecialStringWidth
//		======>edge_color  # WHITE
//		====>MMIDC_DisplaySpecialString
//		======>edge_color  # WHITE
//		====>MMIDC_DisplayString
//		======>edge_color  # WHITE
//		====>MMIDC_DisplayGrayString
//		======>edge_color  # WHITE
// camera--menu
//		====>MMIDC_InitMenu
//		======>display_number = 7   #最大菜单数(没用, >=4即可)

// camera--color   #白色反色后边框为纯黑 (好像不能改)
app:camera\h\mmidc_display.h   MMIDC_TEXT_COLOR
// camera--font-20
app:camera\h\mmidc_display.h   MMIDC_TEXT_FONT
// camera--font-24H
app:camera\h\mmidc_display.h   MMIDC_ITEM_TEXT_HEIGHT


### __file__
// file--title
//		====>GUILABEL_SetFont   #26 W
app:fmm\c\mmifmm_mainwin.c   GUILABEL_SetFont



[1.2] __common__
// common--tips--红黑--多余
// common--title bg--107
// common--pub bg
// common--tab bg
// common--theme bg
// common--common bg--8910
// common--common HL bg--no use
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 

// common--common bg--8910
source:mmi_app\common\h\common_mdu_def.h   IMAGE_COMMON_BG 

//
// MMITHEME_GetCommonLightBg


[1.3] __gui__
// gui--edit
ctrl:editbox\c\ctrlbaseedit_highlight.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// gui--list
ctrl:ListBox\c\ctrllistbox.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
ctrl:ListBox\c\ctrllistbox.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
ctrl:Menu\c\ctrlmenu_popup.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT  
// gui--menusec
ctrl:Menu\c\ctrlmenu_sec.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
ctrl:Menu\c\ctrlmenu_sec.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
ctrl:Menu\c\ctrlmenu_sec.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT  


### gui--color
// gui--menusec (多媒体)
//		==>DisplaySecMenuItemText
//		====>text_color              # 灰色   --G
//		====>text_color              # 焦点 !same --B
//		====>MMI_THEME_MENU          # 
//		======>excel_row_2           # 焦点/非焦点 same --W; 非焦点 !same --W
//		======>s_theme_font_color_arry_ex     #107 --W
//
//		==>MMITHEME_GetSecondMenuTheme
//		====>cur_item_font
//		======>MMI_LIST_EXPAND_ITEM_FONT      # 焦点 --mid 30
//		======>MMI_LIST_DEFAULT_ITEM_FONT     # 非焦点

// gui--list (SOS)
//		==>THEMELIST_GetContentTextColor
//		====>color                   # 灰色 &same --W
//		====>MMI_THEME_LIST_ITEM2    # 
//		======>excel_row_12          # 灰色 !same --B
//		====>color                   # 焦点 &same --W
//		====>MMI_THEME_LIST_ITEM1    # 
//		======>excel_row_11          # 焦点 !same --B
//		====>MMI_THEME_LIST_ITEM0    # 
//		======>excel_row_10          # 非焦点 --W

// gui--popmenu
//		==>PopmenuDisplayItemText
//		====>text_color              # 灰色   --G
//		====>text_color              # 焦点 !same --B
//		====>MMI_THEME_POPMENU       # 
//		======>excel_row_3           # 焦点/非焦点 same --W; 非焦点 !same --w



[1.4] __tool__
//
app:browser\c\mmibrowser_wintable.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// tool--bt--107(theme)
app:bt\c\mmibt_app.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 



[1.5] __win__
// 不走color.xml
prj:project_{cur}.mk  UI_STYLE_THEME_COLOR_NEW    = TRUE


### __idle__  # smart
//		==>date/week (excel)
//		====>SONG_FONT_17
//		====>MMI_THEME_IDLE_DATE
//		======>excel_row_17                    # --W 17
//		==>sim
//		====>MMIIDLE_TEXT_FONT
//		======>MMI_DEFAULT_SMALL_FONT
//		====>MMI_THEME_IDLE_NETWORKNAME        # --w small 20
//		==>softkey
//		====>MMI_FULLSCREEN_SOFTKEY_TEXT_FONT
//		====>MMI_THEME_IDLE_SOFTKEY            # --w mid 30  (调整到22)
//		==>select
//		====>MMI_THEME_SELECT
//		======>excel_row_17                    # --黄/蓝


### __lock__
//		==>DisplayScreenSaverTime
//		====>idle_disp_style.text_font         # --custom 36  (调整到22)


### __mainmenu__
// mainmenu--font--menu标题
//		==>MMITHEME_DrawMainmenuItem
//		====>MMITHEME_MAINMENU_TEXT_FONT     # --15
source:mmi_kernel/include/mmitheme_mainmenu_{size2}.h  MMITHEME_MAINMENU_TEXT_FONT

// mainmenu--softkey 多层
//		==>MatrixMenuCreateButton
//		====>SONG_FONT_18                     # --custom 18  (调整22)
//		====>MMITHEME_GetSoftKeyTextFont      # --mid 30
//		======>MMI_FULLSCREEN_SOFTKEY_TEXT_FONT
//		========>MMI_DEFAULT_BIG_FONT   
//		======>MatrixMenuDrawHandleButton
//		====>~MMI_THEME_MAINMENU_FONT         # --w
// mainmenu--softkey 非多层
//		==>MatrixMenuSetSoftkey
//		======>                           # 临时修改字体区域

// mainmenu--title 总标题
//		==>MatrixMenuDisplayActiveItemTitle
//		====>title_font
//		======>MMITHEME_GetMainMenuTheme
//		========>SONG_FONT_25
//		========>MMI_DEFAULT_TEXT_FONT        # --big 32
//		====>MMI_THEME_MAINMENU_FONT
//		======>excel_row_4                    # --B (加反色)


### __test__
//		==>bg
//		====>EngShow3ResultWinHandleMsg
//		======>mmi_eng_display.bkgd_color
app:eng\c\mmieng_base.c  mmi_eng_display



### gui--font
// gui--menusec (多媒体)
//		==>title
//		====>MMITHEME_GetTitleStyle
//		======>MMI_TITLE_TEXT_FONT             # --big 30  (调整26)
//		==>item
//		====>MMITHEME_GetSecondMenuTheme
//		======>MMI_LIST_DEFAULT_ITEM_FONT      # --def/nor 26
//		==>softkey
//		====>MMITHEME_GetSoftkeyStyle
//		======>MMI_FULLSCREEN_SOFTKEY_TEXT_FONT  # --nor 26  (中sfk)
//		====>GUISOFTKEY_Init
//		======>button_arr[LEFT_BUTTON].font      # --f40 写死    (调整26)
// gui--list
//		==>title                               # --big 30
//		==>item
//		====>ListGetTextStyle
//		======>item_style_ptr->content[i].font_focus
//		======>item_style_ptr->content[i].font
//		======>MMI_LIST_EXPAND_ITEM_FONT       # --w exp/nor 26
//		==>softkey                             # --f40 写死
Save:node\C\study\Macro_pos_8910.h   __list__

// gui--popmenu
//		==>MMITHEME_GetOptionsMenuTheme        # --small 20
//		==>PopmenuDisplayItemText
//		====>text_color              # 焦点 !same --B
//		====>MMI_THEME_POPMENU       # 非焦点
//		======>excel_row_3           # --W



[1.6] __test__
// test--(theme)
app:eng\c\mmieng_base.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:eng\c\mmieng_base.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:eng\c\mmieng_base.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:eng\c\mmieng_base.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:eng\c\mmieng_base.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:eng\c\mmieng_uitestwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:eng\c\mmieng_uitestwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:eng\c\mmieng_uitestwin.c  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT  
//
app:eng\c\mmieng_win.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 




[1.7] __call__
// cc--(theme)
app:cc\c\mmicc_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 

### call
// ui--font
app:cc\c\mmicc_{wintab}.c MMI_CALL_NAME_FONT
// ui--label(默认)
app:cc\c\mmicc_{wintab}.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(大屏)
app:cc\c\mmicc_{wintab}.c LRBUTTON_WIDTH


### 小屏
// label--name, num
app:cc\c\mmicc_{wintab}.c  MMICC_CONNECTED_SIM_LABEL_CTRL_ID
// anim--pad--小屏无效
app:cc\c\mmicc_{wintab}.c  9453

### 大屏
//		==>PdaDisplaySingleCallInfoForCommon
//		====>PdaCallCreateLabelByTextPtr
//		======>240X320:
//		========>state:    --240X320
 //		========>sim1:     --128X160 Dsim
 //		========>state:    --128X160 Dsim
 //		========>state:    --128X160 Ssim
//		======>240X320:
//		========>Line1:    --240X320(No)!112
//		========>Line1:    --240X320(No) 112
//		========>Time:     --240X320  New
//		========>Time:     --128X160
//		======>BIRD:       --(No)
//		======>Name
//		========>Name+city:--
//		========>Num:      --
//		========>Num:      --!Name
//		========>NULL:     --(No)
//		======>RE time:    --(No)
//		======>New
//		========>city:     --(单行)
//		======>SIM1:       --
//		======>Volte:      --

// --cc--bar

// --cc--str--connect/state
//		====>MMI_CALL_INFO_FONT
//		====>font_color
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_STATE_LABEL_CTRL_ID

// --cc--str--num
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_NUMBER_LABEL_CTRL_ID  [3]
// --cc--str--name
//		====>MMI_CALL_NAME_FONT
//		====>font_color
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_NAME_LABEL_CTRL_ID  [2]


// --cc--str--3st--num/state
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_HOLD_NAME_LABEL_CTRL_ID
// --cc--anim--photo
app:cc\c\mmicc_{wintab}.c  void^PdaDisplayCallPhotoForCommon
// --cc--str--time
app:cc\c\mmicc_{wintab}.c  ^^^^MMICC_CONNECTED_TIME_LABEL_CTRL_ID
// --cc--anim--Mo/Mt/Cur/Auto/Opt/Fly
app:cc\c\mmicc_{wintab}.c  DisplayCallAnimPhotoForCommon

//
app:cc\c\mmicc_{wintab}.c  MMI_CALL_INFO_FONT     # 26
app:cc\c\mmicc_{wintab}.c  MMI_CALL_NUMBER_FONT   # 26




[1.8] __theme__
//
app:theme\c\mmitheme_dropdownlist.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_edit.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_edit.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_edit.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_form.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_form.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_form.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_form.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_list.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_menu.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_menu.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_menu.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_pubwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_pubwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_richtext.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_richtext.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// theme--softkey--
app:theme\c\mmitheme_softkey.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_softkey.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_softkey.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmitheme_softkey.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
source:mmi_kernel\include\mmitheme_softkey.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:theme\c\mmitheme_statusbar.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// theme--tab--可能未调整
app:theme\c\mmitheme_tab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// theme--text--(theme)
app:theme\c\mmitheme_text.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
//
app:mainmenu\c\mmi_mainmenu_matrix.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// theme--title
app:theme\c\mmi_theme.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmi_theme.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\c\mmi_theme.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 


### __softkey__
// theme--softkey--透明度89/160--8910
ctrl:Softkey\c\ctrlsoftkey.c  GUISOFTKEY_GRAY_TEXT_ALPHA



[1.9] __display__
// color/bg
app:theme\h\mmidisplay_data.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\h\mmidisplay_data.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:theme\h\mmidisplay_data.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// lock--sms
app:keylock\c\mmikl_effectmain.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 




[1.10] __sms__
// sms--symbol
app:im\c\mmiim_sp_symbol.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// mms
app:mms\c\mmimms_editwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 


### sms
// sms--edit--key
//		==>MMIIM_CORE_USE_CSTAR: (cur)
//		====>g_mmiim_ui_config
//		======>MMIIM_DrawCandWin
//		========>
//		====>ImHandleMsg
//		======>AppHandle
//		========>HandleMsg
//		==========>HandleSysMsg                 # GUIIM_EVENT_SYS_MSG
//		============>DrawPreEditWin             # --choice 区域
//		==============>MMIIM_DrawPreEditWin     # [148 175]
//		================>.color_font_default    # 
//		================>.font_pre_edit         # 
//		============>DrawCandWin                # --候选词窗口, count=8
//		==============>MMIIM_DrawCandWin        # [177 204]
//		================>.color_bg_candidate    # bg
//		================>.color_border          # border
//		================>.color_hot_candidate   # hot
//		================>.font_candidate        # str font
//		================>.color_font_candidate  # str color
//		==============>DrawRightIDC             # 右箭头
//		==>MMIIM_CORE_USE_IEKIE:
//		==>MMIIM_CORE_USE_SOGOU:
//		==>MMIIM_CORE_USE_T9:
app:im\c\mmiim_base.c   g_mmiim_ui_config
// sms--cstar--init
//		==>ConstructObject
//		====>Initialize
//		======>InitData
//		========>MMIIM_InitChoiceWin     # [35 175]
//		======>SetMethod
//		========>method = 9217
//		==========>g_cstar_method_relation_list
//		========>cs_im = 5
//		========>CS_IMM_SetInputMethod
//		==>ConstructObject

// sms--edit--*--addsym
//		====>HandleSymbWinMsg
//		======>InitData
//		========>win_data_ptr->color_font    # bg
//		========>MMIIM_SP_SYMB_FONT          # font 20
//		========>.symb_cnt                   # 38
//		========>MMIIM_SP_SYMB_MARGIN_V      # 
app:im\c\mmiim_sp_symbol.c  void^InitData

// sms--edit--insert sg
//		====>title_rect                      # title
//		====>tip_style.font_color
app:sms\c\mmisms_wordlistwin.c  MMI_RESULT_E^HandleSelectWordWinMsg

// sms--edit--insert sg
//		====>InitPhizData
//		====>DrawPhizWin
app:sms\c\mmisms_phizlistwin.c  MMI_RESULT_E^HandlePhizListWinMsg

// sms--chat-- (no use)
//		====>InitEditingAreaControls
//		====>SetMMSChatItemParam
//		====>
app:sms\c\mmisms_chatreadwin.c  InitEditingAreaControls
//		====>font_size_note
//		====>font_size_note
app:sms\c\mmisms_messageboxwin.c  HandleChatBoxChildWinMsg
app:sms\c\mmisms_messageboxwin.c  HandleBlockNumberTextBoxWinMsg
//		====>color
app:sms\c\mmismsapp_order.c  FormListFromLinkhead

//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>
//		================>
//		==================>


[1.11] __set__
// set--pin--label--107
app:phone\c\mmiphone_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:phone\c\mmiphone_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:phone\c\mmiphone_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:phone\c\mmiphone_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:phone\c\mmiphone_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// set--callset--input--107
app:setting\c\mmiset_callwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:setting\c\mmiset_callwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:setting\c\mmiset_callwin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// set--setlang--107
app:setting\c\mmiset_phonewin.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 





[1.12] form
// MMITHEME_CHILD_COLOR


// fm--bg--107--未使用
app:fm\c\mmifm_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 

// form--界面
// --set--显示设置
// --set--env--setRing
 --sms--edit
// --alarm
 --calc
// --日历
// --unit

### __form__
// form--test
//		====>0x07ff,青; 0xf800,红; 
// form--init
//		==>MMITHEME_GetFormTheme
//		====>unit_font                       # 非焦点 label2, small 26
//	                                         # --UNIT, 白 (默认)
//	                                         # --非 UNIT, =红=child.font
//		====>child.font                      # label1,  normal 26
//	                                         # --白 (默认)
//	                                         # --禁止后, 白
//		====>active_child.font               # 焦点,   normal 26
//	                                         # --白 (默认)
//		====>highlight_label_child.font      # label1, 增加一个高亮色
//	                                         # --白 (默认)
//	                                         # --
//		====>gray_child.font                 # normal 26
//	                                         # --白 (默认)
// form--init2
//		==>MMITHEME_ModifyFormTheme


// form--非焦点
//		==>HandleFormNotifyLoseActive
//		====>is_permit_font              # --true, 允许
//		======>GetChildFont
//		========>theme.active_child.font.color
//	                                     # 
// form--焦点
//		==>HandleFormNotifyGetActive
//		====>is_permit_font              # --true, 允许
//		======>GetChildFont
//		========>theme.active_child.font.color
//	                                     # --0x001f,蓝, label2 (非 UNIT)
//	                                     # --单项
//		========>GUIFORM_TYPE_TP         # --TP类型 红
//		======>LabelCtrlSetFont          # ctrl_1
// form--bg--焦点
//		====>CTRLFORM_SetParam
//		======>VTLBASE_SetBg
//		========>FormCtrlSetBg
//		======>CTRLFORM_Display

// form--time
// --冲突界面:
// --日历--Go to date  (只能看到选中的数字，其他数字看不到)
// --电话本容量 (107)
// --FM--录音时间 (107)
//		====> (高亮黑, 默认白)
ctrl:editbox\c\ctrlbaseedit_highlight.c  void^DisplayHighlightAndStr
app:theme\c\mmitheme_edit.c  MMITHEME_GetEditTheme



[1.13] form2
### __form2__
// 非 Permit
//		==>GUIFORM_PermitChildFontColor

// form--edit
//		==>MMITHEME_GetEditTheme
//		====>info_font                    # 应该是右上角字体
//		==>MMITHEME_GetTextDisplayTheme
//		====>font.color                   # sms edit text



[1.14] 






[1.15] 




