
# ��ǰ��Ŀ·��:
basePath = D:\project\C\Demo\fontforge
base:\\


AsFile:base:


# step
//1.��Ƶ-range---�ü�
//2.��Ƶ-output--����code
//3.font-sprd----����0_1
//4.font-calc----����range
//5.font-sprd----����ini


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




# cfg
// file
build\pe\
// run cfg
fontforge -c "script-string" -script xxx
fontforge -lang={ff|py} -c -script xxx
//��py����ʾʹ�� python ����������ff����pe����ʾʹ�þɽ�����





