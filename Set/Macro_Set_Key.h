//
// ��ʽ: (��99����) 
// 99xxx = val
//
// ��ʽ˵��: 
// 99: ���֣�ǰ�治Ҫ�ո�
// xxx: ������ key alias...
// =: ���ҿ����пո�
// val: ���治Ҫ�ո�
//
//
// ʹ��˵��:(��98 99����) 
// 98 = path1
// 99 = path2
//   С�࣬��Ŀ·���б�������Ŀ��Ҫ��ӣ�����û�������ļ�����ת�������ò���
//           ;����ظ�Ҳ�����ã����ܲ��ֹ�����Ӱ��
//           ;������Ŀ�ŷ�һ��10�����ڣ�����Ҫ�Ĵ�����ݡ�
// 
// 90alias = val
//   ����������ڽű��ڲ��ж����
//           ;Ҳ���ⲿ����·��ʹ��( {8910}\... )��ƥ��path1
// 90RuleEn = val
//           ;�ļ����� (F5ʹ��)
// 90tag1 = SPRD or RDA or MTK or base
//           ;(F12ʹ��)
// 90tag2 = val2
//
// 98key = val1
// 99key = val2 (ͬһ�״���ɹ��ñ���)
//   С�࣬���ñ���
//           ;�ⲿһ�����ڴ������ļ����á�pro���滻������ ({pro})
//           ;���ñ���ʱ������1���ܶԱȣ���Ҫ�ı��������(�� ��_SI4.0��)
// 
// sourcePath  = MS_MMI\source\
// curKey = project1
//   ·����д���滻 (����cfg������)
// 
// 99Note = val
//           ;F11ʹ�� (��������)
// 
// 99Hot2 = val
//           ;F1ʹ�� spr or mtk
//
// {0}
//           ;������������
// 
// ������: ����-->�����-->�����ã���ʱ-->��ϵͳ-->����Ŀ������-->����д-->���滻
//         ��Ŀ-->ģ��/��ʱ2-->����


//(1) 6531DA ��Ŀ·��
10alias = 6531D
10RuleEn = 6531DA
10tag1 = SPRD
//
10 = G:\SP6531D
11 = E:\W03_Code

10key = 6531
11key = 6600


//(2) 6531btdialer ��Ŀ·��
20alias = 6531DB
20RuleEn = 6531btdialer
20tag1 = SPRD
// ע��20 ����ʾ�Ƚ�
//20 = F:\6531DA_Btdialer
20key = 6531DB



//(3) 6531E ��Ŀ·��
30alias = 6531E
30RuleEn = 6531E
30tag1 = SPRD
// ע��30 ����ʾ�Ƚ�
30 = E:\soft\6531E
30key = 6531E



//(4) soft ��Ŀ·��
40alias = RDA
40RuleEn = soft
40tag1 = RDA
// ע��40 ����ʾ�Ƚ�
//40 = F:\soft
40key = rda


//(5) 6533 ��Ŀ·��
50alias = 6533
50RuleEn = 6533
50tag1 = RDA
// ע��50 ����ʾ�Ƚ�
//50 = F:\SC6533G\soft
//50 = E:\SC6533G
50key = 6533


//(6) 7701 8910 ��Ŀ·��
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


//(7) 7701 8910 ��Ŀ·��
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

//(8) MTK ��Ŀ·��1
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
// ����\SI
// ���ִ�Сд, ����save�ļ����ܱȽ�
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
// �����ⲿ�õ��٣�common��Ҳ��������
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


//(15) hexo ��Ŀ·��
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
//�¼� type ͬ���޸ıʼ����ƣ�
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


