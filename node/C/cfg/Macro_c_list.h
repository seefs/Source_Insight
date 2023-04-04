
基础路径设置:
//basePath = 
basePath = D:\project\C
base:\\
tmpPath = base:tmp
tmp:\\

//目录:
Save:node\C\cfg\Macro_c_list.h \[1.1\] qrcode---------二维码
Save:node\C\cfg\Macro_c_list.h \[1.2\] 
Save:node\C\cfg\Macro_c_list.h \[1.3\] TTF
Save:node\C\cfg\Macro_c_list.h \[1.4\] //TTF edit
Save:node\C\cfg\Macro_c_list.h \[1.5\] fontforge
Save:node\C\cfg\Macro_c_list.h \[1.6\] rime-----------输入法
Save:node\C\cfg\Macro_c_list.h \[1.7\] audio
Save:node\C\cfg\Macro_c_list.h \[1.8\] 
Save:node\C\cfg\Macro_c_list.h \[1.9\] 
Save:node\C\cfg\Macro_c_list.h \[1.10\] 
Save:node\C\cfg\Macro_c_list.h \[1.11\] 
Save:node\C\cfg\Macro_c_list.h \[1.12\] 




[1.1] qrcode
//

// qrcode
Useful = True
//	
cd:tmp: git clone https://github.com/rsky/qrcode
// 
Save:node\C\project_demo\Macro_file_qrcode.h


//
G:\wa03u_git\MS_MMI_Main\source\mmi_app\app\qrencode_2\c


[1.2] 




[1.3] __TTF__
# sprd ttf
// 细字体, 接近T107:
//	FONT\SimSun.ttf
// 
// 小字体, 比8910小:
//	FONT\Zouk TTF\NotoSans.ttf
// 
// 正常字体, 接近8910:
//	FONT\Zouk TTF\NotoSansCJKtc-Regular.ttc


# windows ttf
// ttc文件是ttf文件的集成文件
// 比如simsun.ttc是“宋体、新宋体、宋体-PUA”三种字体的集合
C:\Windows\Fonts\


# 字库厂商
//noto的ttf


# 开源ttf

// google ttf
// noto ttf (建议)
Useful = True
//	
cd:tmp: git clone https://github.com/google/fonts
cd:tmp: git clone https://github.com/google/fonts/tree/master/ofl/
cd:tmp: git clone https://github.com/google/fonts/tree/master/ofl/notosans
// 里面有分字体粗体和一般
// 粗体为NotoSans-Bold.ttf, 一般为NotoSans-Regular.ttf
Save:node\C\project_demo\Macro_file_ttf_google.h





[1.4] TTF edit


// TTF read
Useful = False
//	
//cd:tmp: git clone https://github.com/JohnWong/PyTTF



// BDF to TTF 
Useful = False
//	
//cd:tmp: git clone https://github.com/Tblue/mkttf



// ttfdiet
Useful = False
//	对 .ttf 字体进行了调整 减小了字体的文件大小
//cd:tmp: git clone https://github.com/twardoch/ttfdiet
// fonttools 不存在
Save:node\C\project_demo\Macro_file_ttf_ttfdiet.h




// ttf_to_png
Useful = False
//	ttf转png, woff转png
//cd:tmp: git clone https://github.com/biodog/ttf_to_png
// fontTools 库代码
Save:node\C\project_demo\Macro_file_ttf_ttf_to_png.h





[1.5] __fontforge__

// fontforge
Useful = True
//	
cd:tmp: git clone https://github.com/fontforge/fontforge
// 输出编码,  清除
Save:node\C\project_demo\
Save:node\C\project_demo\Macro_file_fontforge_scripting.h   # 语法
Save:node\C\project_demo\Macro_file_fontforge_mtk.h         # 生成code
Save:node\C\project_demo\Macro_file_fontforge_sprd.h        # 生成code/lib
Save:node\C\project_demo\Macro_file_fontforge_view.h        # 其他ttf

// exe
https://fontforge.org/en-US/downloads/

// ttc 转化ttf 工具
//https://transfonter.org/ttc-unpack
//字蛛 只可直接抽取ttf的字体


// 取中文编码
cd:tmp: git clone https://github.com/seefs/Personality




[1.6] __rime__
//
cd:tmp: git clone https://github.com/rime/rime-wubi

// cfg
C:\Program^Files^(x86)\Rime\weasel-0.14.3\data\
// cfg--hotkeys
C:\Program^Files^(x86)\Rime\weasel-0.14.3\data\default.yaml
//  移除 F4

//
https://rime.im/download/
//
// 在输入栏内按F4，会弹出设置，第5项便是繁体转简体。



 

[1.7] audio
// py--audio
Save:node\Pythons\project\Macro_audio.h



[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





