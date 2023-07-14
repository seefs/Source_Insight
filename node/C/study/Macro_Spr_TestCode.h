

### __code__

// SAR
//app:eng\c\mmieng_base.c  SAR

// BUILD
app:eng\c\mmieng_base.c  BUILD



// Phone
"#*8378#0#", "*#222#", "*#15963#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_UI_TEST1

// 自动测试--UI
"####1111#", "*#87#", "*#666#","####1111#"
app:eng\c\mmieng_main.c  MMIENG_IDLE_FULL_TEST

// 手动测试--Item
app:eng\c\mmieng_main.c  MMIENG_IDLE_ITEM_TEST
 "*#777#", "*#66*#", "*#79*#",
 
// Product
"#*8378#3#",

// PhoneInfo -- bg
"#*8378#4#",

// SN
"####2222#",

// Net--mcc,mnc
"####1040#",

// Engineer
"#*8378#1#", "*#555#",--mcc,mnc


//--v--mk--sw--hide
//app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SW_VERSION

// Version--Out -- bg
"#*8378#2#", "####0000#", 
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION1

// Version--2
"*#888#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION2

// Version--3--wa01u, mk,//显示更多版本信息
//"*#888#",
//app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_VERSION3


// Chip
"#*8378#5#",

// NV
"#*786646468#",

// Monkey--no use
"#*8378#8#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_MONKEY_TEST_AUTOSET

// TFload
"#*8378#9#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_TFLOAD_ENTER

// ALLSVN -- bg
"#*786837#",

// HW
"*#999#", "*#523#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SHOW_HW_VERSION

// IMEI
"*#333#", "*#0066#", "*#3184#"; "*#06#",
app:eng\c\mmieng_main.c  MMIENG_IDLE_DIAL_NUM_SET_SIM_IMEI_ALL

// Reset
"*#119*#", "*#70#",

// __ELECTRIC__
"*#2010#"; "*#0808#"; "*#0809#", 
app:eng\c\mmieng_main.c  MMIENG_ELECTRIC_GUARNTEE_CARD_RESET

// SALES_TRACKER
app:eng\c\mmieng_main.c  MMIENG_IDLE_SALES_TRACKER_SETTING
"*#55555#"

// test code
app:eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
//    {
//         "#1#",
//         MMIENG_IDLE_DIAL_NUM_UI_TEST2, //func id
//         PARS_MANUFACTURE_TEST,         //无使用
//         MMIAPIENG_StartUITest
//    }

// imsi:
SpdeShow3GIMSIInfo


### 
//--v--time,data,vol
//MMIENG_IDLE_DIAL_NUM_PHONE_INFO


//--t--nv error
//MMIENG_IDLE_DIAL_NUM_NV_COUNTING,

//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUDIO_DEMO,
//MMIENG_IDLE_DIAL_NUM_VIDEO_DEMO,
//MMIENG_IDLE_DIAL_NUM_MEDIA_DEMO,

//--x--no use
//MMIENG_IDLE_DIAL_NUM_AUTO_LOG,
//MMIENG_IDLE_DIAL_NUM_LOG_OFF,



### 暗码查看
// 密码6~8位
//		==>####8888#，暗码, simlock
//		==>语言切换
app:parse\c\mmiparse_dial.c  MMIAPISET_ParseSIMLockSwitchString
//		==>IMEI; "*#06#",
app:parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr

### reset
Save:node\C\study\Macro_app_8910set.h  __reset__


