//
// ��ʽ: 
// __xxx = val
//
// ��ʽ˵��: 
// __: ���֣�ǰ�治Ҫ�ո�
// xxx: ������ key alias...
// =: ���ҿ����пո�
// val: ���治Ҫ�ո�
//
//
// ʹ��˵��: 
// __ = val
//   С�࣬��Ŀ·�� (�г�ÿ��·��)
//           ����ظ�Ҳ�����ã�����
// 
// __alias = val
//   ���࣬����
//           ���࣬�ű��ڲ�ʹ�ã�val �������ⲿʹ��( {8910}\... )
// __RuleEn = val
//   ���࣬�ļ�����
//           (F5ʹ��)
//
// __key = val
//   С�࣬���ñ��� (ͬһ�״���ɹ���)
//           �����ڲ��滻�� ({pro})
//           �������ã�����1���ܶԱȣ���Ҫ�ķ����(�� ��_SI4.0��)
// 
// __Search = val
//           F9ʹ�� (��������)
// 
// __Note = val
//           F11ʹ�� (��������)
// 
// __Hot2 = val
//           F1ʹ�� spr or mtk
//
// {0}
//           ������������
// 


//(1) 6531DA ��Ŀ·��
10alias = 6531D
10RuleEn = 6531DA
//
10 = G:\SP6531D
11 = E:\W03_Code

10key = 6531
11key = 6600


//(2) 6531btdialer ��Ŀ·��
20alias = 6531DB
20RuleEn = 6531btdialer
// ע��20 ����ʾ�Ƚ�
//20 = F:\6531DA_Btdialer
20key = 6531DB



//(3) 6531E ��Ŀ·��
30alias = 6531E
30RuleEn = 6531E
// ע��30 ����ʾ�Ƚ�
30 = E:\soft\6531E
30key = 6531E



//(4) soft ��Ŀ·��
40alias = RDA
40RuleEn = soft
// ע��40 ����ʾ�Ƚ�
//40 = F:\soft
40key = rda


//(5) 6533 ��Ŀ·��
50alias = 6533
50RuleEn = 6533
// ע��50 ����ʾ�Ƚ�
//50 = F:\SC6533G\soft
//50 = E:\SC6533G
50key = 6533


//(6) 7701 8910 ��Ŀ·��
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


//(7) 7701 8910 ��Ŀ·��
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

//(8) MTK ��Ŀ·��1
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
// ����\SI
// ���ִ�Сд, ����save�ļ����ܱȽ�
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
// δʹ��, ������ Macro_set_path_common.h �и���
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
//�¼� type ͬ���޸ıʼ����ƣ�
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


