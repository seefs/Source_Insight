
基础路径设置:
//basePath = 

//目录:
// 1. 
Save:node\C\study\Macro_im_8910.h \[1.1\] sms--marco
Save:node\C\study\Macro_im_8910.h \[1.2\] sms--input----实际值转IM值
Save:node\C\study\Macro_im_8910.h \[1.3\] sms--input--switch
Save:node\C\study\Macro_im_8910.h \[1.4\] edit--show
Save:node\C\study\Macro_im_8910.h \[1.5\] im + pen
Save:node\C\study\Macro_im_8910.h \[1.6\] --keymap------虚拟值转实际值
Save:node\C\study\Macro_im_8910.h \[1.7\] --simulator---虚拟值
Save:node\C\study\Macro_im_8910.h \[1.8\] key event
Save:node\C\study\Macro_im_8910.h \[1.9\] dial--input
Save:node\C\study\Macro_im_8910.h \[1.10\] lock--input
Save:node\C\study\Macro_im_8910.h \[1.11\] menu--input
Save:node\C\study\Macro_im_8910.h \[1.12\] 
Save:node\C\study\Macro_im_8910.h \[1.13\] 
Save:node\C\study\Macro_im_8910.h \[1.14\] 
Save:node\C\study\Macro_im_8910.h \[1.15\] 
Save:node\C\study\Macro_im_8910.h \[1.16\] 




[1.1] sms--marco
// key26 高亮这些，方便看代码

// --sms--marco
app:im\h\mmiim_internal.h  INPUT_METHOD_CSTAR_MINI = TRUE
app:im\h\mmiim_internal.h  INPUT_METHOD_IEKIE_MINI = TRUE
app:im\h\mmiim_internal.h  INPUT_METHOD_CSTAR_COMMON_MINI = TRUE
app:im\h\mmiim_internal.h  INPUT_METHOD_IEKIE_COMMON_MINI = TRUE
// 
app:im\h\mmiim_base.h  MMIIM_CORE_USE_CSTAR = TRUE
app:im\h\mmiim_base.h  MMIIM_ENGINE_EXIST   = TRUE




[1.2] sms--input

###  __input__
// --sms--input--shift
// shift
Save:node\C\study\Macro_doc_8910.h  __keyStatus__


// --sms--input--text--增加
// --sms--input--pbNum--增加
//		==>ImHandleMsg
//		====>AppHandle
//		======>HandleMsg
app:im\c\mmiim_cstar.c  BOOLEAN^HandleSysMsg
//		========>HandleSysMsg                        # cstar        # 默认切换
//		==========>ConvertKey                        # --cstar
//		============>MMIIM_PhysicalKeyMsgToImKey
//		==============>s_phy_im_shift_key_map        # --shift按键
//		================>[@-(]:
//		==================>id45 => {72, 51} = {0x48, 51} => {KEY_AT_QWERTY, MMIIM_SP_KEY_LEFT_PARENTHESIS}
//		================>[/-)]:
//		==================>id38 => {84, 58} = {0x54, 63} => {KEY_SLASH, MMIIM_SP_KEY_RIGHT_PARENTHESIS}
//		==============>s_phy_im_key_map
//		================>[@]:
//		==================>id45 => {72, 51} = {0x48, 51} => {KEY_AT_QWERTY, MMIIM_SP_KEY_AT_QWERTY}
//		================>[/]:
//		==================>id41 => {84, 63} = {0x54, 63} => {KEY_SLASH, MMIIM_SP_KEY_SLASH}
//		================>[ALT]:
//		==================>idXX => {xx, xx} = {0xxx, xx} => {xxx, xxx}
//		================>[SHIFT]:
//		==================>idXX => {71, xx} = {0x47, xx} => {KEY_SHIFT, xxx}
//		================>[FN]:
//		==================>idXX => {70, xx} = {0x46, xx} => {KEY_FN, xxx}
//		================>[Chr]:
//		==================>idXX => {111, xx} = {0x6E, xx} => {KEY_AT_QWERTY, xxx}
//		================>[AT]: //  KEY_AT   KEY_CAPS
//		==================>idXX => {39, xx} = {0x27, xx} => {KEY_AT, xxx}
//		================>[XX]:
//		==================>idXX => {111, xx} = {0x6E, xx} => {KEY_AT_QWERTY, xxx}
//		================>
//		==================>
//		============>sp_vk = 36 (R)
//		============>cs_vk = 114 => 'a' + 17         # --KEY_FN == cs_vk (sys chr)
//		==============>.data_ptr->method  = 17409 / 9217  # --切换问题，输入法有区别
//		==========>MMIIM_ConvertMethod               # --data_ptr->method = 17409
//		============>g_cstar_method_relation_list
//		==============>{GUIIM_M_PINYIN,    IM_PINYIN_DZ},  //0x2401=9217
//		==============>{GUIIM_M_Q_PINYIN,  IM_PINYIN_DZ},  //0x4401=17409 65541
//		================>DrawPreEditWin
//		================>DrawCandWin                 # 更新候选词窗口内容 
app:im\c\mmiim_cstar.c  ConvertKey(data_ptr )

//		========>HandleSysMsg                        # abc
//		==========>TransMsg
//		============>MMIIM_SP_TransMsg               # basic
//		==============>MMIIM_PhysicalKeyMsgToImKey
//		================>s_phy_im_key_map
//		==================>{KEY_T, MMIIM_SP_KEY_T}   # 注意加字符
//		================>key_code = 44 => 38
//		==========>ConvertKey                        # --sp
//		============>MMIIM_SP_KEY_T/MMIIM_SP_26KEY_INDEX_T
//		==============>38 => 19
//		==========>MMIIM_SP_ML_GetCount
//		============>MMIIM_SP_ML26KEY_GetChrCnt
//		==============>符号:
//		================>MMIIM_SP_26KEY_COUNT to MMIIM_SP_26KEY_INDEX_MAX
//		================>s_26key_table_common
//		==================>{ MMIIM_SP_26KEY_INDEX_DOUBLE_QUOTES, {1, '\"'} },
//		==================>["]:
//		==================>56 => 56 => '\"'
//		==========>MMIIM_SP_ML_GetChar
//		============>MMIIM_SP_ML26KEY_GetChr
//		==============>符号:
//		==============>s_26key_table_abc_lower
//		================>{ MMIIM_SP_26KEY_INDEX_T, {1, 0x0074} },
//		================>19 => 0x0074
//		==========>CommitPackData
//		============>CTRLIM_SetNotify
app:im\c\mmiim_sp_multitap.c  BOOLEAN^HandleSysMsg
app:im\c\mmiim_sp_tp_basic.c  void^MMIIM_SP_TransMsg

//		==>ImHandleMsg
//		====>AppHandle                # 输入法应用处理
//		======>DealNotify             # 发放消息
//		========>GetNotify
//		==========>.notify_ptr->data->commit_data.commit[0] = 116 = 0x74
//		========>CommitData
//		==========>.im_ptr->last_commit.commit[0] = 116
//		============>CTRLMSG_SendNotifyEx
//		==============>TextEditCtrlHandleMsg
//		================>BaseFlexCtrlHandleMsg
//		==================>case MSG_NOTIFY_IM_COMMIT:
//		====================>BASEFLEX_AddString
//		======================>BASEFLEX_UpdateDisplay

// --sms--input--FN--字符
//		========>HandleSysMsg                        # cstar        # 默认切换
//		==========>KEY_FN=cs_vk
//		============>OpenSysbolWin
//		==============>MMIIM_SP_SymbCreateWinByLang
//		================>HandleSymbWinMsg
app:im\c\mmiim_cstar.c  BOOLEAN^HandleSysMsg




[1.3] sms--input--switch

// --sms--switch--#--切换语言
//		========>HandleSysMsg                        # cstar        # 默认切换
//		==========>KEY_CTRL:
//		==========>OpenSwitchIMWin
//		============>MMIIM_SwitchingCreateWin
//		==============>.lang = MMIAPIIM_GetLanguage() = 1
//		================>InitIMDisplayValues
//		==================>s_simpchs_im_name_list,  cnt 2 (cur)
//		==================>s_abc_im_name_list,      cnt 3
//		==================>s_123_im_name_list,      cnt 1
//		================>MMIIM_SWITCH_IM_WIN_TAB
//		==>OnIMClicked                               # select
//		====>s_im_def
//		======>最好改成: GUIIM_INPUT_TYPE_QWERT
//		======>MMITHEME_IMGetMethodByInput
//		========>GetDefBySet                         # id/0 转id/11
//		==========>GUIIM_M_Q_PINYIN                  # --0x4401
//		====>SendChangeMethodMsg
//		======>CTRLIM_CommitData
//		========>CommitData
//		==========>case:
//		==========>SetMethod                         # ctrlim.c
//		============>AppInit
//		==============>.im_handle
//		================>Initialize
//		==================>SetMethod(data_ptr, 0x4401);
//		==================>MMIIM_SP_ML_SetMethod;
//		====================>MMIIM_SP_ML26KEY_GetKeyTable;
//		======================>s_spim_26key_lang_data;    # cur im
//		============>MSG_NOTIFY_IM_SWICTH
//		==>BaseEditCtrlHandleMsg
//		====>MSG_NOTIFY_IM_SWICTH                    # switch show
//		======>BASEEDIT_HandleImSwitch (no use)
app:im\c\mmiim_im_switching.c  MMI_RESULT_E^HandleSwitchingIMWinMsg

// --sms--input--初始化语言
//		==>BaseEditCtrlHandleMsg
//		====>ACTIVE:
//		====>BASEEDIT_CreateImCtrl
//		======>ConstructObject
//		========>ImConstruct
//		==========>MMITHEME_IMGetDefaultMethod        # 改为26key输入法
//		============>GUIIM_M_PINYIN   (default)
app:theme\c\mmitheme_im.c  MMITHEME_IMGetDefaultMethod



[1.4] sms--edit--show

// --sms--edit
//		==>Im
//		====>Initialize
//		==>Im
//		====>CTRLBASEEDIT_SetIm
//		====>CTRLTEXTEDIT_SetTextMaxLen
//		====>CTRLBASEFLEX_SetString

// --sms--input--pbNum--切换内部焦点
//		====>ListEditCtrlHandleMsg
//		======>switch:
//		========>AddSeparator                    #空格
//		==========>BASEEDIT_GetSeparatorChar
//		========>BaseEditCtrlOnCursorChanged     #光标
//		======>BaseFlexCtrlHandleMsg
//		========>HandleEditLoseActive
//		==========>BASEEDIT_SetNoHighlight
//		========>BaseEditCtrlHandleMsg           #parent msg
//		==========>case MSG_CTL_PAINT:
//		============>VTLBASEEDIT_DisplayAll      #draw



// --sms--input--pbNum--位移
//		==>BaseFlexCtrlHandleMsg
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>
//		================>
//		==================>



[1.5] im + pen

// im + pen
ctrl:editbox/c/ctrlbaseflex_display.c  BaseFlexCtrlDisplayLeftNum
// im + pen--display
ctrl:editbox/c/ctrlbaseedit_internal.c  BASEEDIT_DisplayEditExtraArea
ctrl:editbox/c/ctrlbaseedit_internal.c  721



[1.6] __keymap__------虚拟值转实际值
// keymap

// --key--按键丝印
//		==>SCI_VK_HOME
config:uis8910ff_refphone\keymap_cfg.c  keymap\[\]
config:uis8910ff_refphone\keymap_cfg.c  X225U_KEYMAP_STYLE
config:uis8910ff_refphone\keymap_cfg.c  SCI_VK_CALENDER
                               

// --key--消息按键值
//		==>[@]:
//		====>72 = 0x48 => KEY_AT_QWERTY
//		==>[/]:
//		====>84 = 0x54 => KEY_SLASH
//		==>[/]: --new
//		====>34 =  => 
//		==>[HOME]:
//		====>34 = 0x72 => KEY_HOME
CAF\Template\include\caf.h  KEY_HOME

// --key--虚拟按键值
//		==>
//		====>
//		==>[@]:
//		====>97 = 0x61 => SCI_VK_AT_QWERTY
//		==>[/]:
//		====>104 = 0x68 => SCI_VK_SLASH
//		==>[HOME]:
//		====>41 = 0x29 => SCI_VK_HOME
MS_Ref\export\inc\dal_keypad.h  SCI_VK_HOME

### __keySignal__
// --key--与caf对齐
//		==>KeypadCallBackFunc               # 转按键
//		====>MMK_CheckKeySingle             # single_code=513, key_code=69
//		======>MMIDEFAULT_ConvertKeyCode    # --倒着推
//		========>s_keycode_table            # 
//		==========>[1]:
//		============>SCI_VK_1 = 0x31 => {SCI_VK_1, 0x08} => 0x08 = 8 => KEY_1
//		==========>[OK]:
//		============>SCI_VK_OK = 0x0C => {SCI_VK_OK, 0x23} => 0x23 = KEY_PLAYANDSTOP
//		==========>[T]:
//		============>69 = 0x45 => {SCI_VK_T, 0x2C} => 0x2C = 44 => KEY_T
//		==========>[IE]:
//		============>33 = 0x21 => {SCI_VK_IE, 0x5f} => 0x5f = xx => KEY_IE
//		==========>[@]:
//		============>97 = 0x61 => {SCI_VK_AT_QWERTY, 0x48} => 0x48 = 72 => KEY_AT_QWERTY
//		==========>[/]: 
//		============>104 = 0x68 => {SCI_VK_SLASH, 0x54} => 0x54 = 84 => KEY_SLASH
//		==========>[&]: 换 '
//		============>112 = 0x70 => {SCI_VK_SHIFT_AND, 0x55} => 0x55 = xx => KEY_SHIFT_AND
//		============>99 = 0x63 => {SCI_VK_AND, 0x4a} => 0x4a = xx => KEY_AND (err)
//		==========>[FN]: 换 SHIFT
//		============>96 = 0x60 => {SCI_VK_SHIFT, 0x47} => 0x47 = 71 => KEY_SHIFT
//		==========>[chr]: 换 FN
//		============>95 = 0x5F => {SCI_VK_FN, 0x46} => 0x46 = 70 => KEY_FN
//		==========>[SHIFT]: 换 CAPS
//		============>105 = 0x69 => {SCI_VK_CAPS, 0x72} => 0x72 = 114 => KEY_CAPS

//		======>CheckKeyMsgNumber
//		========>s_waiting_key_info.waiting_keycode
//		==========>MmiSendSignal            # 发送 0x2C
//		==>HandleMSGKbd
//		====>DefaultIsRespond               # 播报
//		======>0x2C (KEY_T)
source:mmi_app\kernel\c\mmi_default.c  SCI_VK_IE


// --key--按按测试--数字/*#
//		==>s_qwerty_to_typical_key_convert
//		==>s_typical_to_qwerty_key_convert
//		====>[1]:
//		======>0x2B = 43 => { KEY_R, KEY_1 } => 0x08 = 8 => KEY_1
//		====>[*]:
//		======>0x2E = 46 => { KEY_U, KEY_STAR } => 0x11 = 17 => KEY_STAR
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_ConvertQwertyKeyToTypicalKey
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_ConvertTypicalKeyToQwertyKey



[1.7] __simulator__
// --common
//		==>[KEY_OK]:
//		====>13 = 0x0D => SCI_VK_WEB
//		==>[KEY_RIGHT]:
//		====>7 = 0x07 => SCI_VK_RIGHT
// --qwert
//		==>[KEY_EXT_Q]:
//		====>65 = 0x41 => SCI_VK_Q
//		==>[KEY_EXT_DEL]:
//		====>84 = 0x54 => SCI_VK_DEL
//		==>[KEY_EXT_ENTER]:
//		====>94 = 0x5E => SCI_VK_ENTER
// --ext1
//		==>[KEY_TST1]:
//		====>34 = 0x22 => SCI_VK_HANG
//		==>[KEY_TST2]:
//		====>36 = 0x24 => SCI_VK_VOL_DOWN
//		==>[KEY_TST3]:
//		====>18 = 0x12 => SCI_VK_FLIP
//		==>[KEY_TST4]:
//		====>20 = 0x14 => SCI_VK_HEADSET_DETECT
// --ext2
//		==>[HOME]:
//		====>33 = 0x21 => SCI_VK_IE
//		==>[CALENDER]:
//		====>32 = 0x20 => SCI_VK_CALENDER
//		==>[NOTES]:
//		====>30 = 0x1E => SCI_VK_NOTES
//		==>[SMS]:
//		====>31 = 0x1F => SCI_VK_SMS
//		==>[SLASH]: "/"
//		====>104 = 0x68 => SCI_VK_SLASH
//		==>[chr]: 
//		====>95 = 0x5F => SCI_VK_FN
// --chr
//		==>[KEY_EXT_AT]: "@"
//		====>97 = 0x61 => SCI_VK_AT_QWERTY
//		==>[KEY_EXT_SHIFT]:  // CAPS
//		====>105 = 0x69 => SCI_VK_CAPS
//		==>[KEY_EXT_FN]:
//		====>96 = 0x60 => SCI_VK_SHIFT
//		==>[KEY_EXT_AND]:--"&"--"'"
//		====>112 = 0x70 => KEY_SHIFT_AND
//		====>99 = 0x63 => KEY_AND (err)
source:winsimulator_tp\skin\
source:winsimulator_tp\skin\mssim_duallcd_320_240_Q.ini  KEY_EXT_AND
build\{cur}_builddir\
build\{cur}_builddir\win\mssim_duallcd_320_240_Q.ini  KEY_EXT_Q




[1.8] 




[1.9] dial--input
//
## __LONG_0__
// 	 MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_ctrl\source\editbox\c\ctrlbaseflex.c
// (7)LONG 处理
source:mmi_ctrl\source\editbox\c\ctrlbaseflex.c MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_ctrl\source\Im\c\ctrlim.c 
source:mmi_ctrl\include\ctrlim_base.h 
// switch
source:mmi_ctrl\source\editbox\c\ctrlphonenumedit.c MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_ctrl\source\editbox\c\ctrlphonenumedit.c 
source:mmi_ctrl\source\editbox\c\ctrlphonenumedit.c 
source:mmi_app\app\idle\c\mainapp.c MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_app\app\idle\c\mainapp.c 
source:mmi_app\app\idle\c\mainapp.c 
source:mmi_app\app\idle\c\mainapp.c 
source:mmi_app\app\idle\c\mmiidle_dial.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_app\app\idle\h\mmiidle_export.h 
source:mmi_app\app\im\c\mmiim_sp_multitap.c 
source:mmi_app\app\im\c\mmiim_sp_multitap.c 
// (6)LONG 前
source:mmi_app\app\im\c\mmiim_sp_multitap.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
// (3)timer R
source:mmi_kernel\source\c\mmk_kbd.c 
// (1)timer S
// (4)timer R
source:mmi_kernel\source\c\mmk_kbd.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_kernel\include\mmk_msg.h 
// (2)timer
source:mmi_kernel\source\c\mmk_timer.c  MMI_PLUS_P_W_INPUT_LONG_0_KEY_STYLE
source:mmi_kernel\include\mmk_timer.h 

//
## __DOWN_0__
// --dial--input--text--增加
//		==>init:
//		====>ImConstruct
//		======>Initialize
//		========>.method:
//		==========>param_ptr->method_param_ptr->im_def_ptr->method
//		============>GUIIM_M_Q_123
//		========>MMIIM_SP_ML_SetMethod
//		==========>MMIIM_SP_ML26KEY_GetKeyTable
//		============>s_spim_26key_lang_data
//		==============>s_26key_table_123
//		==============>.key_table_ptr
//		====>BASEEDIT_CreateImCtrl
//		======>PhoneNumEditCtrlConfigImKey          # 长按键
//		========>GUIIM_SetCustomKey
//		==========>SetCustomKey
//		============>MMIIM_SP_ML26KEY_AllocCustomKb
//		==============>MMIIM_SP_26KEY_INDEX_MAX     # 77
//		==============>MMIIM_SP_26KEY_COUNT         # 41
//		==>ImHandleMsg
//		====>AppHandle
//		======>HandleMsg
//		========>HandleSysMsg                        # abc
//		==========>TransMsg
//		============>MMIIM_SP_TransMsg               # basic
//		==============>MMIIM_PhysicalKeyMsgToImKey
//		==========>ConvertKey                        # --sp
//		==========>MMIIM_SP_ML_GetCount
//		============>.custom_kb_ptr
//		============>MMIIM_SP_ML26KEY_GetChrCnt
//		==============>符号:
//		================>MMIIM_SP_26KEY_COUNT to MMIIM_SP_26KEY_INDEX_MAX
//		================>s_26key_table_common
//		==================>{ MMIIM_SP_26KEY_INDEX_DOUBLE_QUOTES, {1, '\"'} },
//		==================>["]:
//		==================>56 => 56 => '\"'
//		==========>MMIIM_SP_ML_GetChar
//		============>MMIIM_SP_ML26KEY_GetChr
//		==============>符号:
//		==============>s_26key_table_abc_lower
//		================>{ MMIIM_SP_26KEY_INDEX_T, {1, 0x0074} },
//		================>19 => 0x0074
//		==========>CommitPackData
//		============>CTRLIM_SetNotify
app:im\c\mmiim_sp_multitap.c  BOOLEAN^HandleSysMsg
//		==>ImHandleMsg
//		====>AppHandle                # 输入法应用处理
//		======>DealNotify             # 发放消息
//		========>GetNotify
//		==========>.notify_ptr->data->commit_data.commit[0] = 116 = 0x74
//		========>CommitData
//		==========>.im_ptr->last_commit.commit[0] = 116
//		============>CTRLMSG_SendNotifyEx
//		==============>MMK_RunCtrlProc
//		================>PhoneNumEditCtrlHandleMsg
//		==================>BaseFlexCtrlHandleMsg
//		====================>case MSG_NOTIFY_IM_COMMIT:
//		======================>BASEFLEX_AddString
//		==>AddString
//		========================>BASEFLEX_UpdateDisplay



[1.10] lock--input
### __Emergency__
// --lock--input
//		====>MMIAPICC_OpenEmergencyWin
//		======>MMIAPICC_IsInputEmergencyCall
//		========>MMIAPICC_IsEmergencyPartNum
//		==========>SETTINGS_NV_DEFAULT_SIM_ECC
//		==============>
//		====>MMIAPICC_IsEmergencyNum
//		==============>s_emergency_call
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_ConvertQwertyKeyToTypicalKey



[1.11] menu--input
// --menu--input
source:mmi_app\kernel\c\mmi_default.c  MMIDEFAULT_ConvertQwertyKeyToTypicalKey

//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>



[1.12] 




[1.13] 




[1.14] 




[1.15] 





[1.16] 




[1.17] 


Save:node\C\study\Macro_im_8910.h \[1.17\] 
Save:node\C\study\Macro_im_8910.h \[1.18\] 
Save:node\C\study\Macro_im_8910.h \[1.19\] 
Save:node\C\study\Macro_im_8910.h \[1.20\] 
Save:node\C\study\Macro_im_8910.h \[1.21\] 
Save:node\C\study\Macro_im_8910.h \[1.22\] 
Save:node\C\study\Macro_im_8910.h \[1.23\] 
Save:node\C\study\Macro_im_8910.h \[1.24\] 
Save:node\C\study\Macro_im_8910.h \[1.25\] 
Save:node\C\study\Macro_im_8910.h \[1.26\] 


[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 




