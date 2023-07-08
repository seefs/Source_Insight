
// --cur
Save:set\
Save:set\Macro_Set_Path_sprd_{pro}.h  curKey

//目录:
// 1. 
Save:node\C\study\Macro_pos_8910.h \[1.1\] height, title, softkey
Save:node\C\study\Macro_pos_8910.h \[1.2\] width
Save:node\C\study\Macro_pos_8910.h \[1.3\] list
Save:node\C\study\Macro_pos_8910.h \[1.4\] icon---list
Save:node\C\study\Macro_pos_8910.h \[1.5\] menu, popmenu
Save:node\C\study\Macro_pos_8910.h \[1.6\] mainmenu
Save:node\C\study\Macro_pos_8910.h \[1.7\] call
Save:node\C\study\Macro_pos_8910.h \[1.8\] idle
Save:node\C\study\Macro_pos_8910.h \[1.9\] record
Save:node\C\study\Macro_pos_8910.h \[1.10\] Mp3
Save:node\C\study\Macro_pos_8910.h \[1.11\] fm
Save:node\C\study\Macro_pos_8910.h \[1.12\] alarm
Save:node\C\study\Macro_pos_8910.h \[1.13\] calen
Save:node\C\study\Macro_pos_8910.h \[1.14\] camera, pic
Save:node\C\study\Macro_pos_8910.h \[1.15\] charge
Save:node\C\study\Macro_pos_8910.h \[1.16\] form-----------------
Save:node\C\study\Macro_pos_8910.h \[1.17\] edit-----------------
Save:node\C\study\Macro_pos_8910.h \[1.18\] pubWin
Save:node\C\study\Macro_pos_8910.h \[1.19\] text
Save:node\C\study\Macro_pos_8910.h \[1.20\] banner
Save:node\C\study\Macro_pos_8910.h \[1.21\] spinner
Save:node\C\study\Macro_pos_8910.h \[1.22\] watch----------------
Save:node\C\study\Macro_pos_8910.h \[1.23\] watch gui------------
Save:node\C\study\Macro_pos_8910.h \[1.24\] 
Save:node\C\study\Macro_pos_8910.h \[1.25\] Dial
Save:node\C\study\Macro_pos_8910.h \[1.26\] watch call 
Save:node\C\study\Macro_pos_8910.h \[1.27\] 
Save:node\C\study\Macro_pos_8910.h \[1.28\] 



[1.1] height, title, softkey
app:theme/h/

### __height__
// bar
//		==>MMITHEME_GetStatusBarHeight
app:theme/h/mmi_position_{size}.h  MMI_STATUSBAR_HEIGHT                       # 26

// title
//		==>MMITHEME_GetWinTitleHeight
app:theme/h/mmi_position_{size}.h  MMI_TITLE_THEME_HEIGHT_H                   # 35


// 1line (All)
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT_MS                    # file
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM2_HEIGHT_MS                   #
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_LIST_ITEM_HEIGHT         #
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_AVATAR_LIST_ITEM_HEIGHT  #
app:theme/h/mmi_position_{size}.h  
app:theme/h/mmi_position_{size}.h  MMI_LIST_SPLIT_ITEM_HEIGHT                 #
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT                       # sms
app:theme/h/mmi_position_{size}.h  MMI_LIST_BUTTON_HEIGHT                     #
app:theme/h/mmi_position_{size}.h  

// 2line (All)
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_DOUBLE_LINE_LIST_ITEM_HEIGHT
app:theme/h/mmi_position_{size}.h  MMI_RADIO_LIST_ITEM_HEIGHT
app:theme/h/mmi_position_{size}.h  MMI_TOGGLE_LIST_ITEM_HEIGHT

// 2line (other)
s_item_style_2_icon_2text_and_text
s_item_style_no_bigicon_text_and_text_with_mask_ms


// softkey
//		==>MMITHEME_GetSoftkeyRect(0)
app:theme/h/mmi_position_{size}.h  MMI_FULLSCREEN_SOFTKEY_BAR_HEIGHT
app:theme/h/mmi_position.h  MMI_FULLSCREEN_SOFTKEY_BAR_HEIGHT


### __tab__
//		==>MMITHEME_GetWinTabBothRect
//		====>MMI_TAB_ITEM_DEFAULT_HEIGHT
//		======>MMITAB_DEFAULT_ITEM_HEIGHT
app:theme/h/mmi_position_{size}.h  MMI_TAB_HEIGHT                             # 35
app:theme\h\mmidisplay_data.h  {size}   MMI_TAB_ITEM_DEFAULT_HEIGHT          # 36 //未改

// sms--tab
//		====>MMITHEME_GetTabStyle (未使用)
//		======>style_ptr->font			  
//		======>style_ptr->font_color	       # 
//		======>style_ptr->sel_font_color       # 选择颜色
// sms--tab--1Line
//		====>CreateTabCtrl
//		======>MMITHEME_GetWinTabBothRect      # 35
//		========>MMK_IsWinIncludeTitle         # false
//		====>CreateTabTitleCtrl
//		======>title height=27
// sms--tab--draw
//		==>DrawCtrl
//		====>DrawAllTabItems
//		======>GUITAB_STATE_SINGLE_LINE        # 单行不画标题
//		========>DrawTabTitleText              # --画标题
//		==========>title height=5+24
//		======>DrawTabItem                     # 画tab
//		========>DrawSelectBg
//		==========>tab_ptr->tab_style.height_bg_info.img_id
//		========>DrawDividingLine              # --画竖线
//		==========>tab_ptr->tab_style.dividing_line
//		========>tab top=23
//		========>DrawItemText                  # --画竖线
//		==========>
app:theme\c\mmitheme_pos.c  MMITHEME_GetWinTabBothRect


//   
//   临时改2个窗口
app:theme\c\mmitheme_tab.c  MMITHEME_GetTabChildWinTop

// align_type
app:theme\c\mmitheme_title.c  MMITHEME_GetTitleStyle



[1.2] __width__
// --right
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_RIGHT_MS
// sms--right
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_RIGHT

// 320
//    GUILCD_GetLogicWidthHeight(GUI_MAIN_LCD_ID, &width, &height);
app:theme/h/mmi_position_{size}.h  MMI_MAINSCREEN_WIDTH

// base=Min(240,320)=240
ctrl:ListBox\c\ctrllistbox.c  item_base_width


[1.3] list
### __sms__
// sms--icon+str
//		==>GUIITEM_STYLE_ONE_LINE_ICON_TEXT_WITHOUT_EFFECT_STR
//		====>s_item_style_1_icon_text_without_effect_str
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT

// sms--icon+str+num (F7000)
//		==>GUIITEM_STYLE_ONE_LINE_ICON_TEXT_AND_TEXT_SMS
//		====>s_item_style_1_icon_text_text_2_sms
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT
app:theme/h/mmi_position_{size}.h  MMI_LIST_EXPAND_ITEM_HEIGHT

// sms--icon+str+num
//		==>GUIITEM_STYLE_ONE_LINE_ICON_TEXT_AND_TEXT
//		====>s_item_style_1_icon_text_text_2
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT
//		====>MMI_LIST_ITEM_HEIGHT
app:theme\h\mmidisplay_data.h  MMI_LIST_EXPAND_ITEM_HEIGHT

// sms--bottom margin
//		==>LIST_CalculateListItemRect
//		====>LIST_AdjustRect
//		======>all=(204-35+1)/5
//		====>list_ctrl_ptr->end_item_bottom_margin      =6
//		======>ListCtrlInit 改为:margin=0

// sms--space
app:theme/h/mmi_position_{size}.h  MMI_LIST_HEIGHT_SPACE        # 1


### __sms_text__
//		==>HandleDraftBoxChildWinMsg
//		====>MSG_GET_FOCUS:
//		======>MMISMS_LoadSmsListFromOrder
//		========>MMISMS_ListSmsFromOrder
//		==========>MMISMS_BOX_SENDSUCC:
//		==========>MMISMS_BOX_NOSEND:
//		============>FormListFromLinkhead
//		==>ListGetItemContentOpacityFontColor
//		====>.custom_font_color_focus
//		======>FormListBoxItem                     # add data 
//		========>MMISMS_MO_DRAFT:
// sms--草稿--
//		==>GUIITEM_STYLE_TWO_LINE_2TEXT_AND_TEXT_ICON_MS
//		====>s_item_style_2_2text_and_text_icon_ms
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT

// sms--已发--
//		==>GUIITEM_STYLE_TWO_LINE_2TEXT_AND_TEXT_ICON_MS
//		====>
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT



### __list__ --其他
// list--其他
app:theme/h/mmi_position_{size}.h  MMI_LIST_EXTRAS_ITEM_HEIGHT_MS
app:theme/h/mmi_position_{size}.h  MMI_LIST_PB_QUICK_ACTION_ITEM_TEXT_HEIGHT_MS
// list--set--connect--roaming
//		==>GUIITEM_STYLE_TWO_LINE_TEXT_AND_SCROLLTEXT_ANIM
//		====>s_item_style_2_text_and_scrolltext_anim
app:theme/h/mmi_position_{size}.h  MMI_LIST_DOUBLE_LINE_ITEM_HEIGHT

// list--memo
//		==>GUIITEM_STYLE_ONE_LINE_SMALL_TEXT_AND_TEXT
//		====>s_item_style_2_text_and_scrolltext_anim
app:theme/h/mmi_position_{size}.h  MMI_LIST_DOUBLE_LINE_ITEM_HEIGHT


### __alarm__
// alarm--icon+str
//		==>GUIITEM_STYLE_MULTI_CHOICE_PICKER_TEXT
//		====>s_item_style_multi_choice_picker_text
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_LIST_ITEM_HEIGHT

//		==>GUIITEM_STYLE_THREE_LINE_TEXT_ICON      (107)
//		====>s_item_style_3_text_and_text_and_text_icon
app:theme/h/mmi_position_{size}.h  MMI_LIST_DOUBLE_LINE_ITEM_HEIGHT


### __stopwatch__ (107)
// alarm--icon+str
//		==>GUIITEM_STYLE_ONE_LINE_ICON_TWO_TEXT
//		====>s_item_style_1_icon_text_text
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_LIST_ITEM_HEIGHT

### __file__
// file--icon+str
//		==>GUIITEM_STYLE_ONE_LINE_ICON_TEXT_MS
//		====>s_item_style_1_icon_text_ms
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT_MS          #h
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_LEFT_SPACE_MS      #w
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_WIDTH_MS
// file--icon--space太小显示不全
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_TOP_MARGIN_MS
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_BOTTOM_MARGIN_MS
// file--str--space 
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_TOP_MARGIN_MS
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_BOTTOM_MARGIN_MS

// file--check+icon+str
//		==>GUIITEM_STYLE_ONE_LINE_CHECK_ICON_MS
//		====>s_item_style_1_check_icon_ms
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_BIG_ICON_WIDTH     # 48+5+6=59
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_LEFT_SPACE
app:theme/h/mmi_position_{size}.h  MMI_LIST_TEXT_LEFT_SPACE


// file--2line--mp4
//		==>GUIITEM_STYLE_TWO_LINE_BIGICON_TEXT_AND_2TEXT_MS
//		====>s_item_style_2_bigicon_text_and_2text_ms
app:theme/h/mmi_position_{size}.h  MMI_LITT_SIZE_STAMP_WIDTH_MS    # file size


// list--位置
app:theme/c/mmitheme_list.c  s_item_style_2_text_text_2_ms

ctrl:ListBox/c/ctrllistbox.c  end_item_bottom_margin
//    list_ctrl_ptr->end_item_bottom_margin = 6;


### __pb__
// pb--show--1line (icon rect 不够)
//		==>listitem_type
//		====>MMIPB_GetListStyle
//		======>GUIITEM_STYLE_ONE_LINE_BIGICON_TEXT_WITH_MASK_MS
//		========>s_item_style_no_bigicon_text_with_mask_ms
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT_BIG_ICON_MS   # 45
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_TOP_MARGIN_MS        # 2
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_WIDTH_2_MS           # 2

// pb--del--search (icon rect 不够)
//		==>style
//		====>HandleOperateReloadList
//		======>GUIITEM_STYLE_MULTI_CHOICE_PICKER_AVATAR_AND_TEXT
//		========>s_item_style_multi_choice_picker_noavatar_and_text
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_AVATAR_LIST_ITEM_HEIGHT   # 45

// pb--del--other--no use
//		======>GUIITEM_STYLE_MULTI_CHOICE_PICKER_TWO_LINE_TEXT_AND_TEXT
//		========>s_item_style_multi_choice_picker_two_line_text_and_text
app:theme/h/mmi_position_{size}.h  MMI_CHOICE_PICKER_DOUBLE_LINE_LIST_ITEM_HEIGHT   # 70



### __cl__
// cl--list--sim2--8910
//		==>AppendCustomLogListItem
//		===>GUIITEM_STYLE_TWO_LINE_TEXT_ICON_AND_TEXT_MS
//		=====>s_item_style_2_text_icon_and_text_ms
app:theme/h/mmi_position_{size}.h  MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS   # 68
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_MARGIN_MS                # 6
app:theme/h/mmi_position_{size}.h  MMI_LIST_SMALL_ICON_WIDTH_MS           # 16

// cl--list--107
//		==>AppendLogListItem
//		====>GUIITEM_STYLE_ONE_TWO_LINE_TWO_ICON_TEXT_AND_TWO_TEXT
//		======>s_item_style_1_2_2icon_text_and_2text




// cl--details--title--form
//		==>HandleLogListDetailWindow
//		====>DETAIL_VIEW_CONTACT_ITEM_HEIGHT
//		======>MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS                       # 2行换1行(bug:标题list未使用)
app:cl\h\mmicl_internal.h   DETAIL_VIEW_CONTACT_ITEM_HEIGHT
app:theme/h/mmi_position_{size}.h  MMI_LIST_DOUBLE_LINE_ITEM2_HEIGHT_MS   # 68

// cl--details--title--list
//		======>GUIITEM_STYLE_ONE_LINE_BIGICON_TEXT_WITH_MASK_MS
//		========>s_item_style_no_bigicon_text_with_mask_ms
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT_BIG_ICON_MS   # 45


// 调整高度:
//	GUIFORM_SetChildHeight(form_ctr_id, editor_ctr_id, &editor_child_height);




[1.4] __icon__
// sms--icon+str
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_LEFT_SPACE
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_SELECT_ICON_WIDTH
// sms--icon+str+num
app:theme\c\mmitheme_list.c   MMI_LIST_BIG_FONT_WIDTH
app:theme/h/mmi_position_{size}.h  MMI_LIST_TEXT_LEFT_SPACE
app:theme/h/mmi_position_{size}.h  MMI_LIST_RIGHT_SPACE





[1.5] __menu__

// player--icon+str+num
//		==>MMI_SECMENU_ITEM_HEIGHT
//		====>MMI_LIST_ITEM_HEIGHT
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT


// file--popmenu
//		==>PopmenuDisplayItemText
//		====>PopmenuAdjustMenuRect [51,204]
//		======>border_width = 2
//		==>MMITHEME_GetOptionsMenuTheme
source:mmi_kernel\include\mmitheme_menu.h  MMITHEME_OPTIONSMENU_ITEM_HEIGHT  # 未使用
//		==>MMITHEME_GetPopMenuTheme
//		====>MMIMENU_POPUP_ITEM_HEIGHT
//		======>40                  # 默认
//		======>MMIMENU_SELECTED_BAR_HEIGHT
app:theme\c\mmitheme_menu.c  MMIMENU_SELECTED_BAR_HEIGHT
app:theme\c\mmitheme_menu.c  MMITHEME_POPUPMENU_TEXT_LINE_HEIGHT



[1.6] __mainmenu__
// mainmenu--index--8910
source:mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
// mainmenu--index--107
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_ICON_MENU_DEFAULT_INDEX


// mainmenu--item 总区域(多层一定要改)
//		==>MMITHEME_MENU_ITEM_WIDTH / MMITHEME_MENU_ITEM_HEIGHT
//		====>4X3, w, 80
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_TITLE_ICONMENU_ITEM_WIDTH_V
//		====>4X3, h, (40+28)
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_TITLE_ICONMENU_ITEM_HEIGHT_V
//		====>好像未使用
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_TITLE_ICONMENU_ITEM_HEIGHT_H
//		====>margin
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_TITLE_ICONMENU_TOP_MARGIN_H
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_ICONMENU_TOP_MARGIN_H
//		====>icon, text, margin 应该 >1
//		======>MMITHEME_ICONMENU_ICON_TEXT_MARGIN
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_ICONMENU_ICON_TEXT_MARGIN_H

// mainmenu--item 总区域(init)
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MMITHEME_ICONMENU_ITEM_HEIGHT_H


// mainmenu--icon/text
//		====>45X40       # item转icon区域
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MENUICON_HEIGHT
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MENUTEXT_HEIGHT


// mainmenu--HighLight--Rect
//		==>MatrixMenuGetHighLightRect
//		====>focus_item_w
//		======>MMITHEME_GetMainMenuTheme
source:mmi_kernel/include/mmitheme_mainmenu_{size}.h  MENUICON_FOCUSITEM_W


// mainmenu--item--bg
//		====>bg_image, 45X40





[1.7] __call__
### 107--240*320

// label--sim, state
app:cc\c\mmicc_{wintab}.c  8085  sim, state
//		==>{158,188}, 96+30+30
app:cc\h\
app:cc\h\mmicc_position.h  CC_SEC_INFO_NAME_LABEL_TOP

// --cc--bar
//		==>{0,40}

// --cc--str--3st--num/state
//		==>{0,30}
app:cc\h\mmicc_position_{size}.h  CC_SEC_INFO_NAME_LABEL_TOP
app:cc\h\mmicc_position_{size}.h  CC_SEC_INFO_STATE_LABEL_TOP

// --cc--str--num
//		==>{36,66}
//		====> 36 = (96)-60-0
app:cc\h\mmicc_position_{size}.h  CC_MAIN_INFO_NAME_LABEL_TOP

// --cc--str--name
//		==>CC_OpenMtCallWin
//		====>MMICC_GetCallNameStrByIndex
app:cc\h\mmicc_position_{size}.h  CC_MAIN_INFO_NAME_LABEL_TOP_H

// --cc--anim--photo
//		==>PdaDisplayCallPhotoForCommon
//		==>{96,161}
//		====> 96 = (96+30+30)-60-0
app:cc\h\mmicc_position_{size}.h    CC_MAIN_INFO_ANIM_TOP

// --cc--str--time
app:cc\h\mmicc_position_{size}.h  CC_MAIN_INFO_TIME_LABEL_TOP
app:cc\h\mmicc_position_{size}.h    CC_MAIN_INFO_TIME_LABEL_TOP_H

// --cc--str--connect/state
//		==>{188,218}
//		====> 188 = (96)+62+30
app:cc\h\mmicc_position_{size}.h    CC_MAIN_INFO_STATE_LABEL_TOP

// --cc--anim--Mo/Mt/Cur/Auto/Opt/Fly
//		==>{228,268}

// --cc--muilt--state/name/num
app:cc\h\mmicc_position_{size}.h  CC_SEC_INFO_NAME_LABEL_TOP_H
app:cc\h\mmicc_position_{size}.h  CC_SEC_INFO_NUM_LABEL_TOP_H
app:cc\h\mmicc_position_{size}.h  CC_SEC_INFO_STATE_LABEL_TOP_H


// --cc--softkey
app:cc\h\mmicc_position_{size}.h  CC_MAIN_INFO_BOTTOM_ANIM_TOP
//		==>{275,319}  #softkey


// --cc--volte
app:cc\h\mmicc_position_{size}.h  CC_MAIN_INFO_BOTTOM_ANIM_TOP



// --cc--单独通话
//		==>可以在(guilistbox.c)中删掉(GUIITEM_STATE_HAS_AVATAR_MASK)不显示
//		====>GUIITEM_STYLE_ONE_LINE_BIGICON_TEXT_WITH_SIMSEL_MS
//		======>s_item_style_1_bigicon_text_with_simsel_ms
//		========>
app:theme/h/mmi_position_{size}.h  MMI_LIST_ITEM_HEIGHT_BIG_ICON_MS   # 45
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_TOP_MARGIN_MS        # 45-8=37
//		======>注意宽度够不够
app:theme/h/mmi_position_{size}.h  MMI_LIST_BIG_ICON_WIDTH_MS   # 40
app:theme/h/mmi_position_{size}.h  MMI_LIST_ICON_LEFT_SPACE_MS  # 6
//		==>头像
//		====>case GUIITEM_DATA_IMAGE_ID
//		========>LIST_DrawItemIcon   # {6,4,44,41} w:38
//		==>头像bg圆
//		====>GUIITEM_STATE_HAS_AVATAR_MASK
//		======>.avatar_mask_left_space:5
//		======>.avatar_mask_width:     40
//		======>mask_rect:     {5,0,46,44} 42/45
//		======>icon_disp_rect:{6,2,45,41} 40/40  # 38+2
//		======>
//		========>GUIRES_DisplayImgWitchColorExchange
app:theme/h/mmi_position_{size}.h  MMI_LIST_BIG_ICON_WIDTH_MS



[1.8] __idle__
### mstyle
// --idle--pos
//		==>.time.top:
//		====>MMI_IDLE_TIME_Y             +30  (38*56)
//		==>.data,week.top:
//		====>MMI_IDLE_DATE_Y             +30+56 ----font36 / h40
//		==>.lunar.top:
//		====>MMI_IDLE_LUNAR_Y            +30+56+40 ----font36 / h39
//		==>.mp3.top:                     +30+56+78=164 / 165写死 ----font36 / h32
app:theme/c/mmidisplay_data.c
app:theme/c/mmidisplay_data_{size}.c  MMI_IDLE_DISPLAY_T^^mmi_idle_display
//		==>.sim.top:                     +174 / 212----font36 / h38, h39
//		====>MMI_IDLE_SIM_STATUS_TOP:    +136 
//		======>MMI_IDLE_TIME_TOP:           18
//		======>MMI_IDLE_TIME_HEIGHT:        58
//		======>MMI_IDLE_DATE_HEIGHT*2:      30
//		====>MMI_IDLE_INTERVAL_MARGIN:     2  (*2)
//		====>MMI_IDLE_SIM_STATUS_HEIGHT:  36  (*2)
//		==>.softkey.top:                 +274 / 277 / 275
app:theme/me/c/mmidisplay_data_{size}.c  MMI_IDLE_COMON_MAIN_LCD_Y_NETWORKNAME
// --idle--time
app:theme/h/mmi_position.h  MMI_MAIN_TIME_Y
app:theme/h/mmi_position.h  IDLE_TIME_PIC_WIDTH


### smart
// --idle--pos
app:idle\c\mmiidle_displaymini.c  s_item_t
// --idle--id
//		==>InitListItem  #240*320
//		====>select
//		======>MMIIDLE_PROMPT_SELECT_HEIGHT
app:idle\h\mmiidle_display.h   MMIIDLE_TP_LINE2





[1.9] __record__
// record--pos
//	--注意 126*160 从第3组 126*160 开始
//	----1.MMI_GUI_STYLE_TYPICAL
//	----2.MMI_PDA_SUPPORT
//	----3.else
app:record\h\mmirecord_position.h  {size}

// record--
//		==>anim
//		====>SetPortraitAndLandscapeFormParam
//		======>MMIRECORD_RECORD_RECORD_BG_H_Y   # y, 56
//		======>record_record_bg_x               # x, 72=(320-175)/2
//		==>time
//		====>DisplayRecordAllBG
//		======>time_rect                        # 默认 time 在上面
app:record\h\mmirecord_position.h  MMIRECORD_RECORD_RECORD_BG_H_Y




[1.10] __Mp3__
// ui_2--pos--128*160
//		==>MMIMP3_TIME_FONT          # font
//		==>MP3_LAYOUT_PREV_RECT_V    # btn
//		==>MP3_PROGRESS_RECT_V       # progress
//		==>MP3_TIME_RECT_V           # time
//		==>MP3_PIC_RECT_V            # bg
// ui_1--pos--240*320 (H)
//		==>title:
//		====>hor_title_form_rect
//		======>MMIMP3_TITLE_BOTTOM_H        # title rect
//		========>MMIMP3_TITLE_MAIN_HEIGHT_H
//		====>MMIMP3_LIST_BTN_WIDTH_H        # left/right btn (remove)
//		====>file_label_rect                # fileinfo (remove)
//		==>ALBUM:
//		====>album_anim_rect
//		======>MMIMP3_ALBUM_ANIM_RECT_H     # album rect
//		========>MMIMP3_PLAY_FORM_TOP_H
//		==>osd-btn:
//		====>osd_panel_rect
//		======>MMIMP3_OSD_LABEL_RECT_H      # 
//		========>MMIMP3_OSD_PANEL_RECT_H
//		======>MMIMP3_OSD_BTN_HEIGHT        # 16/0
//		======>MMIMP3_OSD_PROGRESS_HEIGHT   # 20
//		======>MMIMP3_OSD_LABEL_HEIGHT      # 22
//		==>osd-process:
//		====>dumy_owndraw_height            # 
//		==>father/play:
//		====>hor_play_btn_form_rect         # play rect
//		======>MMIMP3_HOR_PLAY_FORM_RECT
//		========>MMIMP3_PLAY_FORM_TOP_H
app:audioplayer/h/mmiap_position.h   {size}
// ui--pos--128*160
//		==>MMIMP3_TITLE_MARGIN_TOP   # 


// mp3--title--label                 # def26
// pos--progress
app:audioplayer\c\mmiapwin_common.c  progress_groove_rect




[1.11] __fm__




[1.12] __alarm__
//

//		==>SetWeeksParamEditWin
//		====>space_sub   #修改week总宽度-prg宽度

//
app:accessory\c\mmialarm.c  ALARM_EDIT_ITEM_HEIGHT  #未使用
// alarm--style2 (def)
app:accessory\h\mmiacc_event.h  CHILD_FORM_BUTTON_HIGHT  # title height

//
app:accessory\h\mmialarm_position.h



[1.13] __calen__
// calendar--title--[5,+20]
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_MONTH_TITLE_RECT_H
// calendar--week--[+20,+16]
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_MONTH_LINE0_TOP_H
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_MONTH_WEEKLY_Y_H
// calendar--day--22X6--[77,209]
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_BLOCK_HEIGHT_H
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_MONTH_ITEM0_LEFT_H
// calendar--schdule--22X6--[209,205]
// calendar--softkey--[205,+28]
app:theme/h/mmi_position_{size}.h  MMI_FULLSCREEN_SOFTKEY_BAR_HEIGHT
// calendar--Lunar--[138,+16]
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_LUNAR_TITLE_RECT_H


// font
// --title/Lunar--15
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_MONTH_FONT
// --week/day--12
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_DATE_FONT
// --schdule--17
app:accessory\h\mmiacc_position.h  {size}  CALENDAR_SCH_TEXT_FONT




[1.14] camera, pic
### __camera__
// camera--IconSize

### __pic__
//		==>get:
//		====>GetImgDisplayRect
//		======>GUIANIM_GetImgWidthAndHeight
//		========>.img_width   210
//		========>.img_height  280
ctrl:anim\c\ctrlanim_display.c  GUIANIM_Display( )



[1.15] __charge__
//



[1.16] form
### __form__
// --form--layout  (pos)
//		==>CTRLFORM_Layout
//		====>AdjustFormRelativeRect
//		======>child_ptr->ver_space                 # top margin
//		==>CTRLFORM_Layout
//		====>CTRLFORM_CalcAllChild
//		======>IsCreatePrgCtrl
//		========>all_space:
//		======>CalculateChildHeight
//		========>label:
//		==========>LabelCtrlGetHeightByWidth
//		==========>CTRLLABEL_SetMargin
//		==========>.margin_tb_space                 # --2
//		========>edit_text:
//		==========>EditCtrlGetHeightByWidth         # 38
//		==========>BaseEditCtrlGetHeightByWidth
//		============>BASEEDIT_EXTRA_AREA            # --alarm--editName2--H
//		========>setlist:
//		==========>GetSetListHeight                 # 30
//		========>btn:
//		==========>ButtonCtrlGetHeightByWidth       # 40
//		============>ButtonCtrlGetBgHeight
//		========>owndraw:
//		==========>OwnDrawGetHeightByWidth          # 默认26
//		============>MMITHEME_GetOwnDrawDefaultHeight
//		==============>font
//		==>child_ptr->->size_range

### __set_display__
// --form--layout
//		=>CalculateChildHeight
//		===>label:      30+30+1
//		===>owndraw:    30+28+1
//		=====>GUIOWNDRAW_SetHeight(28)
//		===>label:      30+30+1
//		===>label:      30+30+1

### __alarm2__
// --form--layout
//		==>CalculateChildHeight
//		====>name / edit_text:         30+38+1
//		====>time / edit_time:         30+38+1
//		====>ring / label+label:       30+30+1
//		======>CTRLFORM_SetChildHeight(26) 右btn
//		====>repeat / label+setlist:   30+30+1
//		======>CTRLFORM_SetChildHeight(24) 小屏用
//		====>week / btn:               40



[1.17] __edit__
### __form__


### __set_pin__  (edit password)
//		==>HandlePinInputExceptPhone
// --set--pin--text--top--35+5   #status+间距
app:phone\c\mmiphone_wintab.c   MMIPHONE_PIN_PUK_REMAIN_TOP_MARGIN
// --set--pin--text--h--40
app:phone\c\mmiphone_wintab.c   MMIPHONE_PIN_PUK_REMAIN_HEIGHT

//		==>GetPinPukEditRect
// --set--pin--edit--top--20 #间距
app:theme\h\mmidisplay_data.h  {size}   MMI_PASSWORD_EDIT_TOP_MARGIN_H (_H应该未使用)
// --set--pin--edit--h--36
app:theme\h\mmidisplay_data.h  {size}   MMI_PASSWORD_EDIT_HEIGHT

// 用第1组
app:phone\c\mmiphone_wintab.c   MMI_PIN_INPUT_USE_T107_STYLE


### __setcall__  (edit digital)
// --setcall--其他--提示时间
//		==>HandleSetMinuteReminderEditWindow
//		====>CTRLLABEL_SetFont
//		====>GUIEDIT_SetBorder
//		====>CTRLBASEEDIT_SetFont / GUIEDIT_SetFont / GUIEDIT_SetFontColor
// --setcall--text--top--35+1    #35+status+间距
app:setting\c\mmiset_callwin.c   SET_MINUTE_REMINDER_LABLE_TOP_MARGIN
// --setcall--text--h--40
app:setting\c\mmiset_callwin.c   SET_MINUTE_REMINDER_LABLE_HEIGHT

//		==>MMIAPISET_GetPwEditRect
// --setcall--edit--top--2 #间距
app:theme\h\mmidisplay_data.h  {size}   MMI_NUMBER_EDIT_TOP_MARGIN
// --setcall--edit--h--36
app:theme\h\mmidisplay_data.h  {size}   MMI_NUMBER_EDIT_TOP_MARGIN

//		==>MMIAPISET_SetPwBg (不够就删了)
// --setcall--img--35+20+36=91, 实际35+1+40+2+36=114  # 共用
app:theme\h\mmidisplay_data.h  {size}   MMI_PASSWORD_EDIT_TOP_MARGIN
app:theme\h\mmidisplay_data.h  {size}   MMI_PASSWORD_EDIT_HEIGHT


### __EditSms__  (edit sms)

//		==>BASEEDIT_GetLineRect           # 画线, h=1
//		====>line_height = 28             # --字体高度+2
//		====>rect        = [54,203] 
//		====>edit_rect   = [59,198]       # --margin=5
//		======>28*3=84<144
//		========>row1:  [59,87]
//		========>line1: [88,88]           # --bottom错
//		========>row2:  [87,115]
//		========>line2: [116,116]


[1.18] __pubWin__
//
// 间距
app:theme\c\mmitheme_pubwin.c  MMIPUB_TITLE_V_MARGIN_TOP

// --pubWin--theme
//		==>MMITHEME_GetPubTheme  
app:theme\c\mmitheme_pubwin.c  theme_ptr->font_color

// --pubWin--theme
//		==>MMITHEME_GetPubLayoutTheme
//		==>color 好像未使用
app:theme\c\mmitheme_pubwin.c  layout_theme_ptr->button_font.color
app:theme\c\mmitheme_pubwin.c  layout_theme_ptr->button_font.font

// --pubWin--
source:mmi_app\common\c\mmi_pubwin.c  DisplayDialogProgressTextOnlyWin
// --pubWin--
//		==>CreatTextBoxCtrl
//		====>GUITEXT_SetFont

//  use?
app:theme/h/mmi_position_{size}.h   MMITHEME_PUBWIN_WAIT_RECT

// --pubWin--pos
source:mmi_app\common\h\mmipub.h  MMIPUB_TEXT_MAX
// --pubWin--prg (右对齐)
source:mmi_app\common\c\mmi_pubwin.c  MMIPUB_PROGRESS_TEXT_RIGHT


// --dialog--不知道哪个用
//		==>DisplayTextDialogString


// tips
//		==>MMITHEME_GetTipsStyle
//		====>MMITIPS_RECT_MIN_HEIGHT       # 不知道哪里使用
// --mp3--tips2--格式不支持
//		==>MMIPUB_StartDisTips
//		==>HandleTipsWinMsg
//		====>DisplayTipsPtr
//		======>GetTipsDisRect
//		========>MMIPUB_TIPS_DIS_HEIGHT
//		====>HandleClearTipsTimerEvent
//		======>MMIPUB_ClearTips


// bar
// --应该是旧UI
//		==>HandleSetDisplayBlacklightWindow
source:mmi_ctrl\include\ctrlprogressbar_export.h  VOLUME_BRIGHTNESS_BAR_HEIGHT
//
// --没发现使用
//		====>ProgressBarHandleMsg
//		======>case MSG_CTL_GET_ACTIVE
//		========>ProgressBarDraw
//		==========>DisplayNPSScoreBar
source:mmi_ctrl\source\Progressbar\c\ctrlprogressbar.c  VOLUME_BRIGHTNESS_BAR_MARGIN
source:mmi_ctrl\source\Progressbar\c\ctrlprogressbar.c  VOLUME_BRIGHTNESS_BAR_TEXT_HEIGHT



[1.19] __text__
//
//		==>MMITHEME_GetTextTheme




[1.20] __banner__
// --cam--rm--ok
// --pb--add--ok
//		==>InitControlPara
//		====>MMI_BANNER_STR_TEXT
source:mmi_app\common\c\mmicom_banner.c  MMI_TEXT_BANNER_TEXT_HEIGHT



[1.21] spinner
// 未使用
//		==>DisplaySpinnerAnimText
//		==>CTRLANIM_SetSpinner



[1.22] watch
### watch
app:theme/h/mmi_position.h  ^WATCHLIST_ITEM_HEIGHT              # 70

### __setMain__
// set--main--icon+str
//		==>GUIITEM_STYLE_1ICON_1STR
//		====>s_item_style_1icon_1str
//		======>[13,14,55,56]  36*36
//		======>[63,10,218,57]
app:theme/h/mmi_position.h  ^WATCHLIST_ICON_TEXT_LEFT_SPACE     # 13 space
app:theme/h/mmi_position.h  ^WATCHLIST_ICON_TEXT_TOP_SPACE      # 14
app:theme/h/mmi_position.h  ^WATCHLIST_ICON_TO_TEXT_SPACE       # 8
app:theme/h/mmi_position.h  ^WATCHLIST_BG_ICON_TOP_SPACE        # 10
app:theme/h/mmi_position.h  ^WATCHLIST_BG_ICON_BOTTOM_SPACE     # 57 = 70-13
app:theme/h/mmi_position.h  ^WATCHLIST_ICON_NORMAL_WIDGH_HEIGHT_SPACE    #42
app:theme/h/mmi_position.h  ^WATCHLIST_TEXT_WIDGH_MID           # 155
app:theme/h/mmi_position.h  ^WATCHLIST_ITEM_HEIGHT              # 70


### __setBn__


### __setBl__
// set--bl--str
//		==>GUIITEM_STYLE_1STR_RADIO
//		====>s_item_style_1str_radio
//		======>[13,10,168,57]
app:theme/h/mmi_position.h  ^WATCHLIST_ICON_TEXT_LEFT_SPACE     # 13 space

// set--radio--ic
app:theme\c\mmitheme_list.c  radio_tag_width                        # 48
app:theme/h/mmi_position.h  WATCHLIST_RADIO_ICON_WIDTH              # --24
app:theme/h/mmi_position.h  WATCHLIST_ICON_RIGHT_MARGIN             # --12
app:theme\c\mmitheme_list.c  toggle_tag_width                       # 56
app:theme/h/mmi_position.h  WATCHLIST_TOGGLE_ICON_WIDTH             # --32


### __setSound__
// set--sound--str
//		==>GUIITEM_STYLE_2STR
//		====>s_item_style_2str
//		======>[13,10,168,57]
//		======>[176,10,218,56] 24*24
//app:theme/h/mmi_position.h  WATCHLIST_TEXT_LEFT_SPACE           # 12
//app:theme/h/mmi_position.h  WATCHLIST_TEXT_WIDGH_BIG            # 214

// set--sound--str
//		==>GUIITEM_STYLE_1STR_1ICON
//		====>s_item_style_1str_1icon
//		======>[13,10,168,57]
//		======>[176,10,218,56] 24*24
app:theme/h/mmi_position.h  WATCHLIST_ICON_TEXT_LEFT_SPACE      # 13 space
app:theme/h/mmi_position.h  WATCHLIST_TEXT_WIDGH_MID            # 155
app:theme/h/mmi_position.h  WATCHLIST_ICON_TO_TEXT_SPACE        # 8
app:theme/h/mmi_position.h  WATCHLIST_ICON_NORMAL_WIDGH_HEIGHT_SPACE   # 42


// rect
app:theme\c\mmitheme_list.c  s_item_style_small_2str
app:theme\c\mmitheme_list.c  s_item_style_1str_1icon
//   13+155=168, 168+12+24+12=216


### __setAlarm__
// Alarm--list--icon+2str
//		==>GUIITEM_STYLE_1ICON_2STR
//		====>s_item_style_1icon_2str
//		======>[13,14,55,56]  36*36
app:theme/h/mmi_position.h  WATCHLIST_ICON_NORMAL_WIDGH_HEIGHT_SPACE   # 42


[1.23] watch gui
//
### __waList__
// list--rect.top
//		==>.top = 1
ctrl:ListBox\c\ctrllist_item.c  void^LIST_ResetItemPostion
source:mmi_kernel\include\mmitheme_list.h  MMI_LIST_ITEM_BG_TOP_DOWN_MARGIN
// list--rect.bottom
//		==>.bottom = 6
//		====>.end_item_bottom_margin
ctrl:ListBox\c\ctrllistbox.c  void^ListCtrlInit

// list--item--bg
//		==>ListDrawItem
//		====>.item_rect
//		====>LIST_CalculateListItemRect ()
//		==>.margin = 1
ctrl:ListBox\c\ctrllistbox.c  MMI_LIST_ITEM_BG_LEFT_RIGHT_MARGIN
source:mmi_kernel\include\mmitheme_list.h  MMI_LIST_ITEM_BG_TOP_DOWN_MARGIN











[1.24] 




[1.25] Dial
### __Dial__ (tp)

// --dial--btn--H--40
app:idle\c\mmiidle_dial.c  MMIIDLE_DIAL_OFFSET_Y
// ----bg--38
app:idle\c\mmiidle_dial.c  MMIIDLE_DIAL_NUMBER_BG_HEIGHT
// ----line--2
app:idle\c\mmiidle_dial.c  MMIIDLE_DIAL_LINE_WIDTH


// --dial--btn--Y--
//		==>240-5btn
app:idle\c\mmiidle_dial.c  MMIIDLE_DIAL_NUMBER_TOP_Y

// --dial--edit--H--38
app:idle\c\mmiidle_dial.c  MMIIDLE_DIAL_NUMBER_BG_HEIGHT




[1.26] watch call 

// ==>image
Save:node\C\study\Macro_res_image_8910.h __call__
Save:node\C\study\Macro_res_image_wa8910.h __WaCall__

### __WaCall__ (tp)

// 流程--来电-MT，
//		==>CC_HandleCcAnimWinMsg
//		====>OPEN:
//		======>BM_CC_update_Hangup_Button_inComing(FALSE)
//		======>BM_CC_update_Accept_Button(FALSE)
//		========>挂3 + 接4 (底)
//		====>OwnerDrawDraw:
//		======>BM_DrawIncomingButtonctrl
//		========>
//		====>CallBackFunc:
//		======>CustomAnimOwnerDrawCallback
//		========>IMAGE_CC_AVATAR_UNKNOWN
app:cc\c\mmicc_{wintab}.c  BM_CC_update_Hangup_Button


// 流程--去电-MO，
//		==>CC_HandleCcAnimWinMsg
//		====>OPEN:
//		======>BM_CC_update_Hangup_Button_inComing(FALSE)
//		======>BM_CC_update_Accept_Button(FALSE)
//		========>挂3 + 接4 (底)
//		====>OwnerDrawDraw:
//		======>MMICC_DrawBottomButtonCtrl
//		========>BM_CC_update_Hangup_Button
//		==========>挂1 (-60/-30)


// 流程--接听
//		====>OwnerDrawDraw:
//		======>MMICC_DrawBottomButtonCtrl
//		========>BM_CC_update_Hangup_Board_inConnectStatsu(FALSE)
//		========>BM_CC_update_Hangup_Button_inConnectStatsu(FALSE)
//		==========>挂0 + 接4
//		====>CallBackFunc:
//		======>CustomAnimOwnerDrawCallback
//		========>IMAGE_CC_AVATAR_UNKNOWN


// 流程--挂断
//		==>CC_HandleCcAnimWinMsg
//		====>TP_PRESS:
//		======>BM_CC_update_Hangup_Button_inComing

// 头像
//		==>PdaDisplayCallPhotoForCommon



[1.27] 


[1.28] 



