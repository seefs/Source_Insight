//
// 说明: (“=”左右可以有空格)
// 10:  项目路径 (“,”前不要多余空格)
// 10alias:  别名, 脚本内部使用
// 10key:    项目文本中替换使用 (替换 {pro})
//
// 10RuleEn: F5使用
// 10Search: F9使用(功能舍弃)
// 10Note:       F11使用(功能舍弃)
// 10Hot2:      F1使用, spr or mtk


//(1) 6531DA 项目路径
10alias = 6531D
10RuleEn = 6531DA
//
10 = G:\SP6531D,
10key = 6531D


//(2) 6531btdialer 项目路径
20alias = 6531DB
20RuleEn = 6531btdialer
//
20 = F:\6531DA_Btdialer,
20key = 6531D



//(3) 6531E 项目路径
30alias = 6531E
30RuleEn = 6531E
//
30 = E:\SPDE6531E,
30 = D:\_SI4.0\6531E.si4project,
30key = 6531E



//(4) soft 项目路径
40alias = RDA
40RuleEn = soft
//
40 = F:\soft,
40key = rda


//(5) 6533 项目路径
50alias = 6533
50RuleEn = 6533
//
50 = F:\SC6533G\soft,
50 = E:\SC6533G,
50key = 6533


//(6) 7701, 8910 项目路径
60alias = 8910
60RuleEn = 8910
//
60 = G:\UIS8910_git,
62 = G:\UIS8910_schcard_git,
64 = G:\wa01u_svn,
66 = G:\wa01u_svn_small_new2,
68 = G:\wa01u_svn_small_new,

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
70 = G:\wa01u_svn_small_new3,
72 = G:\T1071,
74 = G:\wa01u_svn_small_w21,
76 = G:\wa03u_git,
78 = G:\wa03u_git2,

72key = 107
74key = 8910wa21

76key = 8910wa_git
78key = 8910wa_git

//(8) MTK 项目路径1
80alias = MTK
80RuleEn = MTK
//
80 = E:\60M,
80 = E:\_SI4.0\61M.si4project,
82 = E:\MT61D_ZYF,
82 = E:\_SI4.0\61M_ZYF.si4project,
84 = E:\60D_11C,
84 = E:\_SI4.0\60D_11C.si4project,
86 = E:\60A_6464,
86 = E:\_SI4.0\60D_11C.si4project,

80key = 61M
82key = 61D_ZYF
84key = 60D_11C
86key = 60A


//(9) base -> save
90alias = base
90RuleEn = base
// 不带\SI
90 = D:\Save,
90 = D:\_SI4.0\save.si4project,
90 = D:\save\Source Insight\Projects\Base,
//
90key = base


//(10) tmp
100 = X:\NoneEmpty,


//(11) tmp
110
X:\NoneEmpty,
111
X:\NoneEmpty,
112
X:\NoneEmpty,


//(12) python
120alias = Pythons
//
120 = D:\project\GitHub\myPython,
120 = D:\_SI4.0\myPython.si4project,


//(13)  tensorflow
130 = D:\project\GitHub\tensorflow,
130 = D:\_SI4.0\tensorflow.si4project,


//(14) 9820E
140alias = 9820e
//
140 = F:\9820e,
140 = D:\_SI4.0\9820E_local.si4project,

// tmp
150 = X:\NoneEmpty,



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


