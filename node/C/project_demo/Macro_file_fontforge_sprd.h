
# ��ǰ��Ŀ·��:
basePath = D:\project\C\Demo\fontforge
base:\\


### ��ʽҪ��(����)
// open format:
//   sfd
//   ttf
//   bdf
// use info:
//   TeXHeight
//   TeXDepth
//   Encoding--cn=Unicode


### �������
//�������
build\pe\
build\pe\scriptfile.pe
build\pe\scriptfile_cnt.pe
build\pe\scriptfile_code.pe


### scriptfile.pe--���chr48~chr71����
//font info 0~50
fontforge -script pe/scriptfile.pe AAA_FONT_CN.ttf


### scriptfile_cnt.pe--���chr1~chr65509���Էǿ�
//font cnt: 39429 (ԭ)
//fontforge -script pe/scriptfile_cnt.pe NotoSans.ttf


### scriptfile_code.pe--���code��txt
//font code: 14179
fontforge -script pe/scriptfile_code.pe AAA_FONT_CN.ttf>_log_CN_ALL.txt

//	 use step:--ע�������
//	   ttf--bdf--FontForge--(open error!)
//	   ttf--bdf--FontForge--sfd--(open error!)
//	   ttf--bdf--FontForge--ttf--3501
//	   ttf--bdf--all--FontForge--ttf/sfd--13496(max 65509)



### ��� (pe��ʽ��ansi, ������utf8)
build\pe\
build\pe\scriptclear_big5.pe
build\pe\scriptclear_gb2312.pe
build\pe\scriptclear_merge.pe
build\pe\scriptclear_mnoV.pe
build\pe\test.pe
//run test
fontforge -script pe/scriptclear_gb2312.pe _test.sfd ".sfd">_log.txt
fontforge -script pe/scriptclear_merge.pe AAA_FONT_CN.sfd ".sfd">_log_merge.txt
fontforge -script pe/scriptclear_merge.pe AAA_FONT_CN.ttf ".ttf">_log_merge.txt
fontforge -script pe/test.pe _test.sfd 37 ".sfd"
fontforge -script pe/test.pe _test.sfd 37 ".ttf"
fontforge -script pe/test.pe AAA_FONT_CN.ttf 37 ".ttf"
//run (.sfd��ת.ttf��, չѶ������)
fontforge -script pe/scriptclear_big5.pe AAA_FONT_CN.sfd ".sfd"
fontforge -script pe/scriptclear_gb2312.pe AAA_FONT_CN.sfd ".sfd"
fontforge -script pe/scriptclear_merge.pe AAA_FONT_CN.sfd ".sfd"
fontforge -script pe/scriptclear_mnoV.pe AAA_FONT_CN.sfd ".sfd"
//	font kp cnt: 9657
//	font rm 656535 cnt: 29772
//	font rm cnt: 41458
// ע����
//   0x5760�ַ�: .sfdû���� .ttfû���� .lib������


### �ܽ� ��fontTool����
// ԭlib
1.8910��+��: 2M+4.5M=6.5M
2.T107��+��: 2M+1.8M=3.8M, һ��һխ, ���ڴ����
// ��fontforge-lib
1.big-�ϲ���+��:       4.49M������Ҳ��ʧ�ַ� (BIG_FORGE.lib)
2.small-merge de:  2.45M����ʧһ�����ַ� (SMALL_FORGE.lib)
3.small-ttc de:    2.84M  (SMALL_FORGE_TC.lib)
// ��FONTTOOL-lib
1.big--tts1: 4.51M��(BIG_FTOOL_NS.lib)
2.big--tts2: 5.17M��(BIG_FTOOL_NSSC.lib)
3.big--tts3: 5.24M��(BIG_FTOOL_NSTC.lib)
4.small--tts1: 2.45M��(SMALL_FTOOL_NS.lib)
5.small--tts2: 2.84M��(SMALL_FTOOL_NSSC.lib)
6.small--tts3: 2.88M��(SMALL_FTOOL_NSTC.lib)

// �Ա�Ч��
86B0: NS>DEF>NSST=NSTT
// ����
//FBBx FBBy: ����Ŀ�Ⱥ͸߶�(defW=16, 90%W=14)
//maxbearingY-δѹ��: ����4(����)
//maxbearingY---ѹ��: ����2(����)
// ����ʹ��
//LANG_FONT_HAN_TRAD_TW_VECTOR_SMALL_FTOOL_NS_BY4
// ����:
// --"��"��"��"����������, ����ֿ�������
MS_MMI_Main\source\resource\Common\FONT\Zouk TTF\NotoSans.ttf +
// --������Ӱ��һ��
MS_MMI_Main\source\resource\Common\FONT\Zouk TTF\NotoSansCJKsc-Regular.ttc +
tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe + 
tools\DEBUG_TOOL\FONTTOOL\Bin\Han_merge_small.ini + 
//����ʱmaxbearingY����Ϊ4(����4�����ʾ���߽�����)
//Ӧ��Ҫѡʸ��flag


// SPCSS01127227
//		ʸ������Ĵ�С�Ϳ���������㷨��������ģ�����ӰӦ����ԭʼ ttf �ֿⲻ�������, ��������� ttf �ֿ�.
//		Ŀǰ�����ܵ���ʸ�����岿��:  
//		��Max Brearing Y Delta���D�D �����ַ�����ƫ�ƣ�ȡֵ��Χ
//		��Shrink Percent[50%-100%]�� �D�D ���͸߶���С�İٷֱ�[50-100]
//		��Compress��               �D�D  �����ͷ�����������ѹ��





