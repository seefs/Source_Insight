
# ��ǰ��Ŀ·��:
basePath = D:\project\C\Demo\fontforge
base:\\


### HEBREW ϣ����
build\ttf_sprd_HEBREW\


//
Heebo-Regular:5char
Heebo-Medium:5char
opensanshebrew-regular-webfont:2char
//Rubik-Medium:3char
Rubik-Regular:3char
VarelaRound-Regular:2char


// cnt: 87--.lib��ת��.bdf
fontforge -script pe/scriptfile_code.pe ttf_sprd_HEBREW/_x332_bdf/LANG_FONT_HEBREW_VECTOR.bdf>ttf_sprd_HEBREW/_x332_bdf/_log_HEBREW_VECTOR.txt
// cnt: 87
fontforge -script pe/scriptfile_code.pe ttf_sprd_HEBREW/_x332_bdf/LANG_FONT_HEBREW_VECTOR_X332.bdf>ttf_sprd_HEBREW/_x332_bdf/_log_HEBREW_VECTOR_X332.txt

// cnt: 50
fontforge -script pe/scriptfile_code.pe ttf_sprd_HEBREW/_x332_bdf/LANG_FONT_HEBREW_VECTOR_HEEBO_MED.bdf>ttf_sprd_HEBREW/_x332_bdf/_log_HEBREW_HEEBO_MED.txt
// cnt: 47
fontforge -script pe/scriptfile_code.pe ttf_sprd_HEBREW/_x332_bdf/LANG_FONT_HEBREW_VECTOR_OPENSANS.bdf>ttf_sprd_HEBREW/_x332_bdf/_log_HEBREW_OPENSANS.txt
// cnt: 46
fontforge -script pe/scriptfile_code.pe ttf_sprd_HEBREW/_x332_bdf/LANG_FONT_HEBREW_VECTOR_RUBIK_MED.bdf>ttf_sprd_HEBREW/_x332_bdf/_log_HEBREW_RUBIK_MED.txt
// cnt: 45
fontforge -script pe/scriptfile_code.pe ttf_sprd_HEBREW/_x332_bdf/LANG_FONT_HEBREW_VECTOR_VARELAROUND.bdf>ttf_sprd_HEBREW/_x332_bdf/_log_HEBREW_VARELAROUND.txt


### ��������
//�����h�O--����
��         \u5586
��         \u73ee
�h         \u73a5
|,�O,��,��,��,�� 
\u007c,\u2223,\u2502,\ufe31,\ufe33,\uff5c
��ҽ����|����ж�-------def
��ҽ�����O����ж�------copy
��ҽ����������ж�-------def
��ҽ����������ж�------def
��ҽ����������ж�------def
��ҽ����������ж�------def







