//
// (path)注意格式不要多余空格
// alias:  脚本内部使用
// key:    文本中使用
// RuleEn: F5使用
// Search: F9使用(功能舍弃)
// ALL:        F10使用(功能舍弃)
// Group_Make: F10使用(功能舍弃)
// Group_Menu: F10使用(功能舍弃)
// Note:       F10使用(功能舍弃)
// version:    F10使用(功能舍弃)
// "Hot":      F1使用, spr or mtk


//(1) 6531DA 项目路径
10alias = 6531D
10RuleEn = 6531DA
//
10 = project:G:\SP6531D,
10key = 6531D


//(2) 6531btdialer 项目路径
20alias = 6531DB
20RuleEn = 6531btdialer
//
20 = project:F:\6531DA_Btdialer,
20key = 6531D



//(3) 6531E 项目路径
30alias = 6531E
30RuleEn = 6531E
//
30 = project:E:\SPDE6531E,
30 = project:D:\_SI4.0\6531E.si4project,
30key = 6531E



//(4) soft 项目路径
40alias = RDA
40RuleEn = soft
//
40 = project:F:\soft,
40key = rda


//(5) 6533 项目路径
50alias = 6533
50RuleEn = 6533
//
50 = project:F:\SC6533G\soft,
50 = project:E:\SC6533G,
50key = 6533


//(6) 7701, 8910 项目路径
60alias = 8910
60RuleEn = 8910
//
60 = project:G:\UIS8910_git,
62 = project:G:\UIS8910_schcard_git,
64 = project:G:\wa01u_svn,
66 = project:G:\wa01u_svn_small_new2,
68 = project:G:\wa01u_svn_small_new,

60key = 8910
62key = 8910sch

64key = 8910wa
66key = 8910wa
68key = 8910wa
70key = 8910wa


//(7) 7701, 8910 项目路径
70alias = 8910
70RuleEn = 8910
//
70 = project:G:\wa01u_svn_small_new3,
72 = project:G:\T1071,
74 = project:G:\wa01u_svn_small_w21,
76 = project:G:\wa03u_git,
78 = project:G:\wa03u_git2,

72key = 107
74key = 8910wa21

76key = 8910wa_git
78key = 8910wa_git

//(8) MTK 项目路径1
80alias = MTK
80RuleEn = MTK
//
80 = project:E:\60M,
//奇数项, 解决源码+SI目录分开问题, 源码目录单独设置在前一项
81 = project:E:\_SI4.0\61M.si4project
82 = project:E:\MT61D_ZYF,
83 = project:E:\_SI4.0\61M_ZYF.si4project
84 = project:E:\60D_11C,
85 = project:E:\_SI4.0\60D_11C.si4project
86 = project:E:\60A_6464,
87 = project:E:\_SI4.0\60D_11C.si4project

80key = 61M
81key = 61M

82key = 61D_ZYF
83key = 61D_ZYF

84key = 60D_11C
85key = 60D_11C

86key = 60A
87key = 60A


//(9) base -> save
90alias = base
90RuleEn = base
//
90 = project:D:\Save,

90key = base


//(10) tmp
100 = project:X:\NoneEmpty,


//(11) tmp
110
project:X:\NoneEmpty,
111
project:X:\NoneEmpty,
112
project:X:\NoneEmpty,


//(12) python
120alias = Pythons
//
120 = project:D:\project\GitHub\myPython,
121 = project:D:\_SI4.0\myPython.si4project,


//(13)  tensorflow
130 = project:D:\project\GitHub\tensorflow,
131 = project:D:\_SI4.0\tensorflow.si4project,


//(14) 9820E
140alias = 9820e
//
140 = project:F:\9820e,
141 = project:D:\_SI4.0\9820E_local.si4project,

// tmp
150 = project:X:\NoneEmpty,



//
//
//新加 type 同步修改笔记名称：
//    getBaseFileType(pathName, s)
//




#### Hot test
60Hot1 = \\resource\\version_software_mocor.h
60Hot2 = \\resource\\common_mdu_def.h
60Hot3 = \\resource\\mmi_custom_define.h,MMISET_EDEFAULT_LANGUAGE
60Hot4 = \\resource\\mmi_menutable_128x160.c,menu_mainmenu_icon
60Hot5 = \\resource\\mmi_menutable_240x320.c,menu_mainmenu_icon
60Hot6 = \\resource\\mmienvset_internal.h
60Hot7 = \\resource\\RING

80Hot1 = M107\\M107_XYZN_S2_4A_WESTERN_F2
80Hot2 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\M107_XYZN_S2_4A_WESTERN_F2_GPRS.mak
80Hot3 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld
80Hot4 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\MMI_features_switchPLUTO.h
80Hot5 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\ref_list.txt
80Hot6 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\custom_MemoryDevice.h


