
//Ŀ¼:
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

//  ����--������ת:
goto_copy  Խ
goto_copy  Խ��
goto_copy  ��
goto_copy  ̩
//  to:
//		VIETNAMESE
//		ARABIC
//		THAI


// 1.����
Save:node\C\rule\Macro_Rule_Han_file.h  �����
Save:node\C\rule\Macro_Rule_Han_file.h  ��
Save:node\C\rule\Macro_Rule_Han_file.h  ����
Save:node\C\rule\Macro_Rule_Han_file.h  ������
Save:node\C\rule\Macro_Rule_Han_file.h  ����
Save:node\C\rule\Macro_Rule_Han_file.h  �ݿ�


// 2.�Һ�
prj:project_{cur}.mk  CZECH





[1.3] __FONT__
### �ֿ�
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
//		==>����:
//		======>en:LANG_FONT_LATIN_BASIC.lib   (173K)
//		======>cn:LANG_FONT_HAN_GRAY.lib  (4.79M)
source:resource\mmi_res_prj_def.h  FONT_TYPE_SUPPORT_VECTOR
source:resource\mmi_res_prj_def.h  VECTOR_FONT_SUPPORT_ETRUMP
source:resource\mmi_res_prj_def.h  FONT_TYPE_SUPPORT_GRAY


// ��������
source:resource\mmi_res_prj_def.h  LANG_FONT_HAN_VECTOR

// ϣ����
source:resource\mmi_res_prj_def.h  LANG_FONT_HEBREW_VECTOR

// Ӣ��
source:resource\mmi_res_prj_def.h  LANG_FONT_LATIN_VECTOR


### ���ֿ�--ʡ�ռ�ץlog
//
source:resource\Common\FONT\LANG_FONT_LATIN_12_14_29.lib
source:resource\Common\FONT\
//
MS_Customize/source/product/config/uis8910ff_refphone/spiflash_cfg.c  WATCH_LANG_HAN_VECTOR_3241
MS_Customize/UIX8910_normal.scf
source:resource/mmi_res_prj_def.h  WATCH_LANG_HAN_VECTOR_3241


### ����
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

// ����
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT	= FALSE	          
prj:project_{cur}.mk  MMI_DISPLAY_SIMP_CHINESE_SUPPORT = FALSE  
prj:project_{cur}.mk  IM_TRAD_CHINESE_SUPPORT = TRUE            
prj:project_{cur}.mk  MMI_DISPLAY_TRAD_CHINESE_SUPPORT = TRUE   
// ����
prj:project_{cur}.mk  MMI_LANG_HAN_VECTOR_DEFAULT_ADD_SIMP_LIB = TRUE
prj:project_{cur}.mk  WATCH_LANG_HAN_VECTOR_USE_MERGE_SMALL = TRUE
prj:project_{cur}.mk  MMISET_EDEFAULT_INPUT_LANGUAGE_TRAD_CN = TRUE

// ������     
prj:project_{cur}.mk  IM_SIMP_CHINESE_SUPPORT = FALSE
prj:project_{cur}.mk  MMI_DISPLAY_SIMP_CHINESE_SUPPORT = FALSE
prj:{cfg}.cfg  IM_SIMP_CHINESE_SUPPORT
// 
prj:project_{cur}.mk  MMI_LANG_HAN_VECTOR_DEFAULT_ADD_SIMP_LIB = TRUE
prj:project_{cur}.mk




[1.5] __SPAN__


// ��������2����
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
//		ʸ������Ĵ�С�Ϳ���������㷨��������ģ�����ӰӦ����ԭʼ ttf �ֿⲻ�������, ��������� ttf �ֿ�.
//		Ŀǰ�����ܵ���ʸ�����岿��:  
//		��Max Brearing Y Delta���D�D �����ַ�����ƫ�ƣ�ȡֵ��Χ
//		��Shrink Percent[50%-100%]�� �D�D ���͸߶���С�İٷֱ�[50-100]
//		��Compress��               �D�D  �����ͷ�����������ѹ��


### ���� ttf
// ���ttf����
Save:node\C\cfg\Macro_c_list.h  __fontforge__
// windows ttf
//   arial.ttf--����
Save:node\C\cfg\Macro_c_list.h  __TTF__

//	���ȿ����壺
//		Times New Roman-------times.ttf
//		Tahoma----------------tahoma.ttf (�����)
//		Arial
//		Microsoft Sans Serif--micross.ttf
//	�ȿ�����
//		Courier New
//	��������
//		arialuni
//		calibri
//		


### ϣ����
//
source:resource\Common\FONT\
source:resource\mmi_res_prj_def.h  LANG_FONT_HEBREW_VECTOR
source:resource\mmi_res_prj_def.h  LANG_FONT_LATIN_BASIC_VECTOR
// ��ĸ�� - ϣ������
https://mylanguages.org/zh/hebrew_alphabet.php


###
//
tool_mini:4_�����ֿ�\_ttf_to_font\
tool_mini:4_�����ֿ�\_ttf_to_font\_readme.md
// �ַ�����
//   char_code.xlsx
//   --��---------66
//   --ϣ����-----38
//   ----0951~05f4




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 





