//
// 格式: (以99举例) 
// 99xxx = val
//
// 格式说明: 
// 99: 数字，前面不要空格
// xxx: 可以是 key alias...
// =: 左右可以有空格
// val: 后面不要空格
//
//
// 使用说明:(以98 99举例) 
// 98 = path1
// 99 = path2
//   小类，项目路径列表。所有项目都要添加，否则没有配置文件‘跳转’功能用不了
//           ;编号重复也可以用，可能部分功能有影响
//           ;类似项目号放一起，10个以内，超过要改代码兼容。
// 
// 90alias = val
//   类别名，用于脚本内部判断类别。
//           ;也可外部当作路径使用( {8910}\... )，匹配path1
// 90RuleEn = val
//           ;文件别名 (F5使用)
// 90tag1 = SPRD or RDA or MTK or base
//           ;(F12使用)
// 90tag2 = val2
//
// 98key = val1
// 99key = val2 (同一套代码可共用别名)
//   小类，配置别名
//           ;外部一般用于打开配置文件，用‘pro’替换配置名 ({pro})
//           ;共用别名时，仅第1个能对比，次要的别名放最后(如 “_SI4.0”)
// 
// sourcePath  = MS_MMI\source\
// curKey = project1
//   路径缩写，替换 (具体cfg中设置)
// 
// 99Note = val
//           ;F11使用 (功能舍弃)
// 
// 99Hot2 = val
//           ;F1使用 spr or mtk
//
// {0}
//           ;在配置中设置
// 
// 总流程: 名称-->左类别-->右配置，临时-->左系统-->右项目，索引-->左缩写-->右替换
//         项目-->模板/临时2-->配置


//(1) 6531DA 项目路径
10alias = 6531D
10RuleEn = 6531DA
10tag1 = SPRD
//
10 = G:\SP6531D
11 = E:\W03_Code

10key = 6531
11key = 6600


//(2) 6531btdialer 项目路径
20alias = 6531DB
20RuleEn = 6531btdialer
20tag1 = SPRD
// 注释20 不显示比较
//20 = F:\6531DA_Btdialer
20key = 6531DB



//(3) 6531E 项目路径
30alias = 6531E
30RuleEn = 6531E
30tag1 = SPRD
// 注释30 不显示比较
30 = E:\soft\6531E
30key = 6531E



//(4) soft 项目路径
40alias = RDA
40RuleEn = soft
40tag1 = RDA
// 注释40 不显示比较
//40 = F:\soft
40key = rda


//(5) 6533 项目路径
50alias = 6533
50RuleEn = 6533
50tag1 = RDA
// 注释50 不显示比较
//50 = F:\SC6533G\soft
//50 = E:\SC6533G
50key = 6533


//(6) 7701 8910 项目路径
60alias = 8910
60RuleEn = 8910
60tag1 = SPRD
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
70tag1 = SPRD

//
70 = G:\T1072
71 = G:\T1071
72 = E:\T107old
73 = D:\soft\T1073
74 = E:\T107base
76 = G:\wa03u_git
77 = G:\wa03u_git2
78 = E:\soft\8910GHR
79 = D:\soft\T107_X212T


70key = 107
71key = 107
72key = 107Old
73key = 107D
74key = 107B
76key = 8910wa_git
77key = 8910wa_git
78key = 8910B
79key = 107O

//(8) MTK 项目路径1
80alias = MTK
80RuleEn = MTK
80tag1 = MTK
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
90tag1 = base
// 不带\SI
// 区分大小写, 否则save文件不能比较
90 = D:\save
90 = D:\_SI4.0\save.si4project
90 = D:\save\Source^Insight\Projects\Base
91 = D:\save\SI_pri
92 = \\tsclient\D\save
92 = \\tsclient\D\_SI4.0\save.si4project
92 = \\tsclient\D\save\Source^Insight_sub\Projects\Base
93 = \\tsclient\D\save\SI_pri
//
90key = base
91key = base_pri
92key = base
93key = base_pri


//(10) tmp
100alias = tmp
// 估计外部用的少，common里也可以设置
101 = G:\_HW_NV_PARA.git
102 = D:\save\patch
103 = D:\save\SI
104 = D:\save\tool_mini

101key = HW
102key = patch
103key = save
104key = toolM


//(11) 8910DM
110alias = 8910DM
110RuleEn = 8910
110tag1 = SPRD
// 
110 = E:\soft\8910DM

111key = 8910DM


//(12) python
120alias = Pythons
//
120 = D:\project\GitHub\myPython
120 = D:\_SI4.0\myPython.si4project
121 = D:\project\GitHub\tensorflow
121 = D:\_SI4.0\tensorflow.si4project


//(13)  


//(14) 9820E
140alias = 9820e
//
140 = F:\9820e
140 = D:\_SI4.0\9820E_local.si4project


//(15) hexo 项目路径
150alias = hexo
150RuleEn = hexo
150Same = hexo
150Cfg = null
//
150 = D:\project\S\hexo.git\hexo-blog-geektutu
151 = D:\project\S\hexo.git\hexo-blog-geektutu_old
152 = D:\project\S\hexo.git\hexo-theme-geektutu
153 = D:\project\S\hexo.git\seefs.github.io
154 = D:\project\S\hexo.git\seefs.github.io_master
155 = D:\project\S\hexo.git\seets.github.io_main

150key = hexo
151key = hexo
152key = hexo
153key = hexo
154key = hexo
155key = hexo


//
//
//新加 type 同步修改笔记名称：
//    getBaseFileType(pathName s)
//




#### Hot test
8910Hot1 = \\resource\\version_software_mocor.h
8910Hot2 = \\resource\\common_mdu_def.h
8910Hot3 = \\resource\\mmi_custom_define.hMMISET_EDEFAULT_LANGUAGE
8910Hot4 = \\resource\\mmi_menutable_128x160.cmenu_mainmenu_icon
8910Hot5 = \\resource\\mmi_menutable_240x320.cmenu_mainmenu_icon
8910Hot6 = \\resource\\mmienvset_internal.h
8910Hot7 = \\resource\\RING

MTKHot1 = M107\\M107_XYZN_S2_4A_WESTERN_F2
MTKHot2 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\M107_XYZN_S2_4A_WESTERN_F2_GPRS.mak
MTKHot3 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld
MTKHot4 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\MMI_features_switchPLUTO.h
MTKHot5 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\ref_list.txt
MTKHot6 = M107\\M107_XYZN_S2_4A_WESTERN_F2\\Resource\\custom_MemoryDevice.h


