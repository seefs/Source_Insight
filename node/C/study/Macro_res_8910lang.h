
//目录:
Save:node\C\study\Macro_res_8910lang.h \[1.1\] def
Save:node\C\study\Macro_res_8910lang.h \[1.2\] search
Save:node\C\study\Macro_res_8910lang.h \[1.3\] FONT
Save:node\C\study\Macro_res_8910lang.h \[1.4\] CN
Save:node\C\study\Macro_res_8910lang.h \[1.5\] SPAN
Save:node\C\study\Macro_res_8910lang.h \[1.6\] 
Save:node\C\study\Macro_res_8910lang.h \[1.7\] 
Save:node\C\study\Macro_res_8910lang.h \[1.8\] tool
Save:node\C\study\Macro_res_8910lang.h \[1.9\] 
Save:node\C\study\Macro_res_8910lang.h \[1.10\] 
Save:node\C\study\Macro_res_8910lang.h \[1.11\] 
Save:node\C\study\Macro_res_8910lang.h \[1.12\] 




[1.1] __def__
//
app:im\c\mmiim.c  MMINV_IM_LANGUAGE



[1.2] __search__
//
Save:Help\Macro_Note_Test.h  __goto__

//  复制--中文跳转:
goto_copy  越
goto_copy  越南
goto_copy  阿
goto_copy  泰
//  to:
//		VIETNAMESE
//		ARABIC
//		THAI


// 1.翻译
Save:node\C\rule\Macro_Rule_Han_file.h  意大利
Save:node\C\rule\Macro_Rule_Han_file.h  德
Save:node\C\rule\Macro_Rule_Han_file.h  法语
Save:node\C\rule\Macro_Rule_Han_file.h  西班牙
Save:node\C\rule\Macro_Rule_Han_file.h  波兰
Save:node\C\rule\Macro_Rule_Han_file.h  捷克


// 2.找宏
prj:project_{cur}.mk  CZECH





[1.3] __FONT__
### 字库
//		==>VECTOR:
//		====>ETRUMP:
//		======>en:*.ttf
//		======>cn:Spreadtrum_YH2312F.ttf  (426K)
//		====>def:
//		======>en:*.lib   (88K)
//		======>cn:LANG_FONT_HAN_VECTOR.lib  (2.04M)
//		======>cn:LANG_FONT_HAN_VECTOR.lib  (2.04M)
//		==>GRAY:
//		====>error
//		======>en:*GRAY.lib
//		======>cn:LANG_FONT_HAN_GRAY.lib  (1.94M)
//		==>点阵:
//		======>en:LANG_FONT_LATIN_BASIC.lib   (173K)
//		======>cn:LANG_FONT_HAN_GRAY.lib  (4.79M)
source:resource\mmi_res_prj_def.h  FONT_TYPE_SUPPORT_VECTOR
source:resource\mmi_res_prj_def.h  VECTOR_FONT_SUPPORT_ETRUMP
source:resource\mmi_res_prj_def.h  FONT_TYPE_SUPPORT_GRAY


// 简体中文
source:resource\mmi_res_prj_def.h  LANG_FONT_HAN_VECTOR

// 希伯来
source:resource\mmi_res_prj_def.h  LANG_FONT_HEBREW_VECTOR

// 英文
source:resource\mmi_res_prj_def.h  LANG_FONT_LATIN_VECTOR


### 换字库--省空间抓log
//
source:resource\Common\FONT\LANG_FONT_LATIN_12_14_29.lib
source:resource\Common\FONT\
//
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  WATCH_LANG_HAN_VECTOR_3241
MS_Customize/UIX8910_normal.scf
source:resource/mmi_res_prj_def.h  WATCH_LANG_HAN_VECTOR_3241


### 点阵
//
Makefile.verify  VECTOR_FONT


### goto
// FONT
key:FONT,file:mmi_res_prj_def.h

// LANG
key:LANG,file:mmi_res_prj_def.h

// IM
key:IM,file:mmi_res_prj_def.h


[1.4] __CN__

// 繁体
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT	= FALSE	          
prj:project_{cur}.mk  MMI_DISPLAY_SIMP_CHINESE_SUPPORT = FALSE  
prj:project_{cur}.mk  IM_TRAD_CHINESE_SUPPORT = TRUE            
prj:project_{cur}.mk  MMI_DISPLAY_TRAD_CHINESE_SUPPORT = TRUE   
// 繁体
prj:project_{cur}.mk  MMI_LANG_HAN_VECTOR_DEFAULT_ADD_SIMP_LIB = TRUE
prj:project_{cur}.mk  WATCH_LANG_HAN_VECTOR_USE_MERGE_SMALL = TRUE
prj:project_{cur}.mk  MMISET_EDEFAULT_INPUT_LANGUAGE_TRAD_CN = TRUE

// 关中文     
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_DISPLAY_SIMP_CHINESE_SUPPORT = FALSE
prj:{cfg}.cfg  IM_SIMP_CHINESE_SUPPORT
// 
prj:project_{cur}.mk  MMI_LANG_HAN_VECTOR_DEFAULT_ADD_SIMP_LIB = TRUE
prj:project_{cur}.mk




[1.5] __SPAN__


// 西班牙开2个宏
prj:{cfg}.cfg  IM_SPANISH_SUPPORT
prj:{cfg}.cfg  IM_SPANISH_AM_SUPPORT


[1.6] 




[1.7] 





[1.8] __tool__
### tool
source:resource\Common\FONT\
// 8910
tools\DEBUG_TOOL\FONTTOOL\Bin\
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe
// 107
tools\Common\FONTTOOL\Bin\
open tools\Common\FONTTOOL\Bin\FontTool.exe

// SPCSS01127227
//		矢量字体的大小和宽度是依照算法计算出来的，有阴影应该是原始 ttf 字库不合适造成, 。建议更换 ttf 字库.
//		目前工具能调整矢量字体部分:  
//		“Max Brearing Y Delta”―― 调整字符上下偏移，取值范围
//		“Shrink Percent[50%-100%]” ―― 字型高度缩小的百分比[50-100]
//		“Compress”               ――  轮廓和符合字型数据压缩


### 其他 ttf
// 输出ttf编码
Save:node\C\cfg\Macro_c_list.h  __fontforge__
// windows ttf
//   arial.ttf--常规
Save:node\C\cfg\Macro_c_list.h  __TTF__

//	不等宽字体：
//		Times New Roman-------times.ttf
//		Tahoma----------------tahoma.ttf (用这个)
//		Arial
//		Microsoft Sans Serif--micross.ttf
//	等宽字体
//		Courier New
//	其他字体
//		arialuni
//		calibri
//		


### 希伯来
//
source:resource\Common\FONT\
source:resource\mmi_res_prj_def.h  LANG_FONT_HEBREW_VECTOR
source:resource\mmi_res_prj_def.h  LANG_FONT_LATIN_BASIC_VECTOR
// 字母表 - 希伯来语
https://mylanguages.org/zh/hebrew_alphabet.php


###
//
tool_mini:4_翻译字库\_ttf_to_font\
tool_mini:4_翻译字库\_ttf_to_font\_readme.md
// 字符编码
//   char_code.xlsx
//   --俄---------66
//   --希伯来-----38
//   ----0951~05f4




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 





