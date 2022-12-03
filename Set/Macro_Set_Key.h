//
// 格式: 
// __xxx = val
//
// 格式说明: 
// __: 数字，前面不要空格
// xxx: 可以是 key alias...
// =: 左右可以有空格
// val: 后面不要空格
//
//
// 使用说明: 
// __ = val
//   小类，项目路径 (列出每个路径)
//           编号重复也可以用，可能
// 
// __alias = val
//   大类，别名
//           大类，脚本内部使用，val 别名可外部使用( {8910}\... )
// __RuleEn = val
//   大类，文件别名
//           (F5使用)
//
// __key = val
//   小类，配置别名 (同一套代码可共用)
//           别名内部替换用 ({pro})
//           别名共用，仅第1个能对比，次要的放最后(如 “_SI4.0”)
// 
// __Search = val
//           F9使用 (功能舍弃)
// 
// __Note = val
//           F11使用 (功能舍弃)
// 
// __Hot2 = val
//           F1使用 spr or mtk
//
// {0}
//           在配置中设置
// 


//(1) 6531DA 项目路径
10alias = 6531D
10RuleEn = 6531DA
//
10 = G:\SP6531D
11 = E:\W03_Code

10key = 6531
11key = 6600


//(2) 6531btdialer 项目路径
20alias = 6531DB
20RuleEn = 6531btdialer
// 注释20 不显示比较
//20 = F:\6531DA_Btdialer
20key = 6531DB



//(3) 6531E 项目路径
30alias = 6531E
30RuleEn = 6531E
// 注释30 不显示比较
30 = E:\soft\6531E
30key = 6531E



//(4) soft 项目路径
40alias = RDA
40RuleEn = soft
// 注释40 不显示比较
//40 = F:\soft
40key = rda


//(5) 6533 项目路径
50alias = 6533
50RuleEn = 6533
// 注释50 不显示比较
//50 = F:\SC6533G\soft
//50 = E:\SC6533G
50key = 6533


//(6) 7701 8910 项目路径
60alias = 8910
60RuleEn = 8910
//
60 = G:\UIS8910_git2
61 = G:\UIS8910_git
62 = G:\UIS8910_schcard_git
63 = G:\wa01u_svn
65 = G:\wa01u_svn_small_new
66 = G:\wa01u_svn_small_new3
67 = G:\wa01u_svn_small_w21
68 = D:\soft\wa01u_w21_svn2
69 = E:\8910_w21base
69 = E:\8910_w22base
69 = G:\watch_sprd

60key = 8910
61key = 8910B
62key = 8910sch
63key = 8910wa
65key = 8910wa
66key = 8910wa
67key = 8910wa21
68key = 8910wa21D
69key = 8910B


//(7) 7701 8910 项目路径
70alias = 8910
70RuleEn = 8910
//
70 = G:\T1072
71 = G:\T1071
72 = E:\T107old
73 = D:\soft\T1073
74 = E:\T107base
76 = G:\wa03u_git
77 = G:\wa03u_git2

70key = 107
71key = 107
72key = 107Old
73key = 107D
74key = 107B

76key = 8910wa_git
77key = 8910wa_git

//(8) MTK 项目路径1
80alias = MTK
80RuleEn = MTK
//
80 = E:\60M
80 = E:\_SI4.0\61M.si4project

82 = E:\MT61D_ZYF
82 = E:\_SI4.0\61M_ZYF.si4project

84 = E:\60D_11C
84 = E:\_SI4.0\60D_11C.si4project

86 = E:\60A_6464
86 = E:\_SI4.0\60D_11C.si4project

80key = 61M
82key = 61D_ZYF
84key = 60D_11C
86key = 60A


//(9) base -> save
90alias = base
90RuleEn = base
// 不带\SI
// 区分大小写, 否则save文件不能比较
90 = D:\save
90 = D:\_SI4.0\save.si4project
90 = D:\save\Source^Insight\Projects\Base
91 = D:\save\SI_pri
//
90key = base
91key = base_pri


//(10) tmp
100alias = tmp
//
101 = G:\_HW_NV_PARA.git
102 = D:\save\patch
103 = D:\save\SI
104 = D:\save\tool_mini

101key = HW
102key = patch
103key = save
104key = toolM


//(11) tmp
110alias = other
// 未使用, 保存在 Macro_set_path_common.h 中更简单
111 = C:\Program^Files\Beyond^Compare^4\BCompare.exe
//111 = D:\Program^Files\Beyond^Compare^3\BCompare.exe

111key = BCompare




//(12) python
120alias = Pythons
//
120 = D:\project\GitHub\myPython
120 = D:\_SI4.0\myPython.si4project


//(13)  tensorflow
130 = D:\project\GitHub\tensorflow
130 = D:\_SI4.0\tensorflow.si4project


//(14) 9820E
140alias = 9820e
//
140 = F:\9820e
140 = D:\_SI4.0\9820E_local.si4project

// tmp
150 = X:\NoneEmpty



//
//
//新加 type 同步修改笔记名称：
//    getBaseFileType(pathName s)
//




#### Hot test
60Hot1 = \\resource\\version_software_mocor.h
60Hot2 = \\resource\\common_mdu_def.h
60Hot3 = \\resource\\mmi_custom_define.hMMISET_EDEFAULT_LANGUAGE
60Hot4 = \\resource\\mmi_menutable_128x160.cmenu_mainmenu_icon
60Hot5 = \\resource\\mmi_menutable_240x320.cmenu_mainmenu_icon
60Hot6 = \\resource\\mmienvset_internal.h
60Hot7 = \\resource\\RING

80Hot1 = M107\\M107_XYZN_S2_4A_WESTERN_F2
80Hot2 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\M107_XYZN_S2_4A_WESTERN_F2_GPRS.mak
80Hot3 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld
80Hot4 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\MMI_features_switchPLUTO.h
80Hot5 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\ref_list.txt
80Hot6 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\custom_MemoryDevice.h


