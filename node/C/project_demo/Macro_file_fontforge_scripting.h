
# 当前项目路径:
basePath = D:\project\C\Demo\fontforge
base:\\


AsFile:base:


# step
//1.字频-range---裁剪
//2.字频-output--生成code
//3.font-sprd----生成0_1
//4.font-calc----生成range
//5.font-sprd----生成ini


# 脚本
C:\Program^Files^(x86)\FontForgeBuilds\bin\
C:\Program^Files^(x86)\FontForgeBuilds\fontforge-console.bat
# 脚本
open:C:\Program^Files^(x86)\FontForgeBuilds\fontforge-console.bat
# 脚本--path
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


// 参考脚本
https://www.it1352.com/2088369.html
// 官方脚本
https://fontforge.org/docs/tutorial/scripting-tutorial.html
https://fontforge.org/docs/scripting/scripting.html
https://fontforge.org/docs/scripting/scripting.html#scripting-example



### 使用循环
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



# scriptloop----使用循环
build\pe\test.pe




# cfg
// file
build\pe\
// run cfg
fontforge -c "script-string" -script xxx
fontforge -lang={ff|py} -c -script xxx
//“py”表示使用 python 解释器，“ff”或“pe”表示使用旧解释器





