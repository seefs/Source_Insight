
# ����·������:
Inward   = True
Backward = 0
# ��ǰ��Ŀ·��:
basePath = D:\project\C\Demo\fontforge
base:\\


AsFile:base:


# �ű�
C:\Program^Files^(x86)\FontForgeBuilds\bin\
C:\Program^Files^(x86)\FontForgeBuilds\fontforge-console.bat
# �ű�
open:C:\Program^Files^(x86)\FontForgeBuilds\fontforge-console.bat
# �ű�--path
cd D:\project\C\Demo\fontforge\build\
cd build\
//
fontforge --help


// func
fontforge\scripting.c  "Print"
fontforge\scripting.c  "Open"
fontforge\scripting.c  "Select"
fontforge\scripting.c  "Print"
fontforge\scripting.c  "GlyphInfo"

doc\sphinx\olddocs\old\ja\scripting.html  html#Open
doc\sphinx\olddocs\old\ja\scripting.html  html#Select
doc\sphinx\olddocs\old\ja\scripting.html  html#Print
doc\sphinx\olddocs\old\ja\scripting.html  html#GlyphInfo


doc\sphinx\olddocs\old\ja\scripting.html  html#Clear
doc\sphinx\olddocs\old\ja\scripting.html  html#Save


// �ο��ű�
https://www.it1352.com/2088369.html
// �ٷ��ű�
https://fontforge.org/docs/tutorial/scripting-tutorial.html
https://fontforge.org/docs/scripting/scripting.html
https://fontforge.org/docs/scripting/scripting.html#scripting-example



# cfg
// file
build\pe\
// run cfg
fontforge -c "script-string" -script xxx
fontforge -lang={ff|py} -c -script xxx
//��py����ʾʹ�� python ����������ff����pe����ʾʹ�þɽ�����

#doc
//�������
build\pe\
build\pe\scriptfile.pe
build\pe\scriptfile_cnt.pe
build\pe\scriptfile_code.pe
## open format:
##   sfd
##   ttf
##   bdf
## use info:
##   TeXHeight
##   TeXDepth
##   Encoding--cn=Unicode
//font info 0~50
fontforge -script pe/scriptfile.pe _test.sfd
fontforge -script pe/scriptfile.pe _test.ttf
fontforge -script pe/scriptfile.pe BBB_FONT_CN2.ttf
fontforge -script pe/scriptfile.pe BBB_FONT_CN3_16.bdf
fontforge -script pe/scriptfile.pe AAA_FONT_CN.ttf
//font cnt: 147
fontforge -script pe/scriptfile_cnt.pe _test.sfd
//font cnt: 39429 (ԭ)
fontforge -script pe/scriptfile_cnt.pe AAA_FONT_CN.sfd
fontforge -script pe/scriptfile_cnt.pe AAA_FONT_CN.ttf
//font cnt: 9656 (��)
fontforge -script pe/scriptfile_cnt.pe AAA_FONT_CN_mnoV.ttf
//font cnt: 1520
fontforge -script pe/scriptfile_cnt.pe BBB_FONT_TW_VECTOR_T107.ttf
//font code: 14179
fontforge -script pe/scriptfile_code.pe AAA_FONT_CN.ttf>_log_CN_ALL.txt
fontforge -script pe/scriptfile_cnt.pe BBB_FONT_CN2.ttf
## use step:
##   ttf--bdf--FontForge--(open error!)
##   ttf--bdf--FontForge--sfd--(open error!)
##   ttf--bdf--FontForge--ttf--3501
##   ttf--bdf--all--FontForge--ttf/sfd--13496(max 65509)
fontforge -script pe/scriptfile_code.pe CCC_TRAD_HK_14.bdf>_log_CN14.txt
fontforge -script pe/scriptfile_code.pe CCC_TRAD_HK_16.bdf>_log_CN16.txt
fontforge -script pe/scriptfile_code.pe CCC_TRAD_HK_20.bdf>_log_CN20.txt
fontforge -script pe/scriptfile_code.pe CCC_TRAD_HK_24.bdf>_log_CN24.txt



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
//   0x5760 .sfdû���� .ttfû���� .lib������





### ʹ��ѭ��
build\pe\scriptloop.pe
//run
fontforge -script convert.pe *.pfb
//#!/usr/local/bin/fontforge
//	i=1
//	while ( i<$argc )
//	  Open($argv[i])
//	  Generate($argv[i]:r + ".ttf")
//	  i = i+1
//	endloop



# scriptloop----ʹ��ѭ��
build\pe\test.pe


