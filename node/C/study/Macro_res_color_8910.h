
����·������:
//basePath = 

//Ŀ¼:
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
// mp3--bg--��--ȥ�����ص�
// mp3--bg--��
app:audioplayer\h\audioplayer_mdu_def.h  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT
app:audioplayer\h\audioplayer_mdu_def.h  SPDE_UI_STYLE_BLACK_BG_WHITE_FONT
// mp3--����ʱ����Ӱ
// mp3--osdʱ����Ӱ
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
// pic--107--����
app:pic_viewer\h\pic_viewer_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
app:pic_viewer\h\pic_viewer_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 


### __fm__
// fm--bg--107--δʹ��
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
//		======>display_number = 7   #���˵���(û��, >=4����)

// camera--color   #��ɫ��ɫ��߿�Ϊ���� (�����ܸ�)
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
// common--tips--���--����
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
// gui--menusec (��ý��)
//		==>DisplaySecMenuItemText
//		====>text_color              # ��ɫ   --G
//		====>text_color              # ���� !same --B
//		====>MMI_THEME_MENU          # 
//		======>excel_row_2           # ����/�ǽ��� same --W; �ǽ��� !same --W
//		======>s_theme_font_color_arry_ex     #107 --W
//
//		==>MMITHEME_GetSecondMenuTheme
//		====>cur_item_font
//		======>MMI_LIST_EXPAND_ITEM_FONT      # ���� --mid 30
//		======>MMI_LIST_DEFAULT_ITEM_FONT     # �ǽ���

// gui--list (SOS)
//		==>THEMELIST_GetContentTextColor
//		====>color                   # ��ɫ &same --W
//		====>MMI_THEME_LIST_ITEM2    # 
//		======>excel_row_12          # ��ɫ !same --B
//		====>color                   # ���� &same --W
//		====>MMI_THEME_LIST_ITEM1    # 
//		======>excel_row_11          # ���� !same --B
//		====>MMI_THEME_LIST_ITEM0    # 
//		======>excel_row_10          # �ǽ��� --W

// gui--popmenu
//		==>PopmenuDisplayItemText
//		====>text_color              # ��ɫ   --G
//		====>text_color              # ���� !same --B
//		====>MMI_THEME_POPMENU       # 
//		======>excel_row_3           # ����/�ǽ��� same --W; �ǽ��� !same --w



[1.4] __tool__
//
app:browser\c\mmibrowser_wintable.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 
// tool--bt--107(theme)
app:bt\c\mmibt_app.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 



[1.5] __win__
// ����color.xml
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
//		====>MMI_THEME_IDLE_SOFTKEY            # --w mid 30  (������22)
//		==>select
//		====>MMI_THEME_SELECT
//		======>excel_row_17                    # --��/��


### __lock__
//		==>DisplayScreenSaverTime
//		====>idle_disp_style.text_font         # --custom 36  (������22)


### __mainmenu__
// mainmenu--font--menu����
//		==>MMITHEME_DrawMainmenuItem
//		====>MMITHEME_MAINMENU_TEXT_FONT     # --15
source:mmi_kernel/include/mmitheme_mainmenu_{size2}.h  MMITHEME_MAINMENU_TEXT_FONT

// mainmenu--softkey ���
//		==>MatrixMenuCreateButton
//		====>SONG_FONT_18                     # --custom 18  (����22)
//		====>MMITHEME_GetSoftKeyTextFont      # --mid 30
//		======>MMI_FULLSCREEN_SOFTKEY_TEXT_FONT
//		========>MMI_DEFAULT_BIG_FONT   
//		======>MatrixMenuDrawHandleButton
//		====>~MMI_THEME_MAINMENU_FONT         # --w
// mainmenu--softkey �Ƕ��
//		==>MatrixMenuSetSoftkey
//		======>                           # ��ʱ�޸���������

// mainmenu--title �ܱ���
//		==>MatrixMenuDisplayActiveItemTitle
//		====>title_font
//		======>MMITHEME_GetMainMenuTheme
//		========>SONG_FONT_25
//		========>MMI_DEFAULT_TEXT_FONT        # --big 32
//		====>MMI_THEME_MAINMENU_FONT
//		======>excel_row_4                    # --B (�ӷ�ɫ)


### __test__
//		==>bg
//		====>EngShow3ResultWinHandleMsg
//		======>mmi_eng_display.bkgd_color
app:eng\c\mmieng_base.c  mmi_eng_display



### gui--font
// gui--menusec (��ý��)
//		==>title
//		====>MMITHEME_GetTitleStyle
//		======>MMI_TITLE_TEXT_FONT             # --big 30  (����26)
//		==>item
//		====>MMITHEME_GetSecondMenuTheme
//		======>MMI_LIST_DEFAULT_ITEM_FONT      # --def/nor 26
//		==>softkey
//		====>MMITHEME_GetSoftkeyStyle
//		======>MMI_FULLSCREEN_SOFTKEY_TEXT_FONT  # --nor 26  (��sfk)
//		====>GUISOFTKEY_Init
//		======>button_arr[LEFT_BUTTON].font      # --f40 д��    (����26)
// gui--list
//		==>title                               # --big 30
//		==>item
//		====>ListGetTextStyle
//		======>item_style_ptr->content[i].font_focus
//		======>item_style_ptr->content[i].font
//		======>MMI_LIST_EXPAND_ITEM_FONT       # --w exp/nor 26
//		==>softkey                             # --f40 д��
Save:node\C\study\Macro_pos_8910.h   __list__

// gui--popmenu
//		==>MMITHEME_GetOptionsMenuTheme        # --small 20
//		==>PopmenuDisplayItemText
//		====>text_color              # ���� !same --B
//		====>MMI_THEME_POPMENU       # �ǽ���
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
// ui--label(Ĭ��)
app:cc\c\mmicc_{wintab}.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(����)
app:cc\c\mmicc_{wintab}.c LRBUTTON_WIDTH


### С��
// label--name, num
app:cc\c\mmicc_{wintab}.c  MMICC_CONNECTED_SIM_LABEL_CTRL_ID
// anim--pad--С����Ч
app:cc\c\mmicc_{wintab}.c  9453

### ����
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
//		========>city:     --(����)
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
// theme--tab--����δ����
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
// theme--softkey--͸����89/160--8910
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
//		============>DrawPreEditWin             # --choice ����
//		==============>MMIIM_DrawPreEditWin     # [148 175]
//		================>.color_font_default    # 
//		================>.font_pre_edit         # 
//		============>DrawCandWin                # --��ѡ�ʴ���, count=8
//		==============>MMIIM_DrawCandWin        # [177 204]
//		================>.color_bg_candidate    # bg
//		================>.color_border          # border
//		================>.color_hot_candidate   # hot
//		================>.font_candidate        # str font
//		================>.color_font_candidate  # str color
//		==============>DrawRightIDC             # �Ҽ�ͷ
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


// fm--bg--107--δʹ��
app:fm\c\mmifm_wintab.c   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT 

// form--����
// --set--��ʾ����
// --set--env--setRing
 --sms--edit
// --alarm
 --calc
// --����
// --unit

### __form__
// form--test
//		====>0x07ff,��; 0xf800,��; 
// form--init
//		==>MMITHEME_GetFormTheme
//		====>unit_font                       # �ǽ��� label2, small 26
//	                                         # --UNIT, �� (Ĭ��)
//	                                         # --�� UNIT, =��=child.font
//		====>child.font                      # label1,  normal 26
//	                                         # --�� (Ĭ��)
//	                                         # --��ֹ��, ��
//		====>active_child.font               # ����,   normal 26
//	                                         # --�� (Ĭ��)
//		====>highlight_label_child.font      # label1, ����һ������ɫ
//	                                         # --�� (Ĭ��)
//	                                         # --
//		====>gray_child.font                 # normal 26
//	                                         # --�� (Ĭ��)
// form--init2
//		==>MMITHEME_ModifyFormTheme


// form--�ǽ���
//		==>HandleFormNotifyLoseActive
//		====>is_permit_font              # --true, ����
//		======>GetChildFont
//		========>theme.active_child.font.color
//	                                     # 
// form--����
//		==>HandleFormNotifyGetActive
//		====>is_permit_font              # --true, ����
//		======>GetChildFont
//		========>theme.active_child.font.color
//	                                     # --0x001f,��, label2 (�� UNIT)
//	                                     # --����
//		========>GUIFORM_TYPE_TP         # --TP���� ��
//		======>LabelCtrlSetFont          # ctrl_1
// form--bg--����
//		====>CTRLFORM_SetParam
//		======>VTLBASE_SetBg
//		========>FormCtrlSetBg
//		======>CTRLFORM_Display

// form--time
// --��ͻ����:
// --����--Go to date  (ֻ�ܿ���ѡ�е����֣��������ֿ�����)
// --�绰������ (107)
// --FM--¼��ʱ�� (107)
//		====> (������, Ĭ�ϰ�)
ctrl:editbox\c\ctrlbaseedit_highlight.c  void^DisplayHighlightAndStr
app:theme\c\mmitheme_edit.c  MMITHEME_GetEditTheme



[1.13] form2
### __form2__
// �� Permit
//		==>GUIFORM_PermitChildFontColor

// form--edit
//		==>MMITHEME_GetEditTheme
//		====>info_font                    # Ӧ�������Ͻ�����
//		==>MMITHEME_GetTextDisplayTheme
//		====>font.color                   # sms edit text



[1.14] 






[1.15] 




