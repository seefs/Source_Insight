
//目录:
// 由于编码原因，可另建一个相同内容文件
Save:node\S\cfg\Macro_s_path.h \[1.1\] cfg_cur--------
Save:node\S\cfg\Macro_s_path.h \[1.2\] PY
Save:node\S\cfg\Macro_s_path.h \[1.3\] Admin
Save:node\S\cfg\Macro_s_path.h \[1.4\] S
Save:node\S\cfg\Macro_s_path.h \[1.5\] BakS
Save:node\S\cfg\Macro_s_path.h \[1.6\] 
Save:node\S\cfg\Macro_s_path.h \[1.7\] 
Save:node\S\cfg\Macro_s_path.h \[1.8\] 
Save:node\S\cfg\Macro_s_path.h \[1.9\] 


[1.1] __cfg_cur__
Save:set\

### 路径列表
// 添加项目路径, 转换为配置key
// 转换: path -> 150 -> 150key -> hexo
Save:set\Macro_Set_Key.h  hexo$


### 配置文件
// 简化路径
// 转换: god -> xxx
Save:set\Macro_Set_Path_{pro}.h  godPath



### hexo
{hexo}:\
// path cfg
Save:set\Macro_Set_Path_{pro}.h  metaPath

//
Save:set\Macro_Set_Common.h  hexoSrc


### Key
// url
//Save:set\Macro_Set_Path_{pro}.h  urlKey


[1.2] __PY__

//
Save:set\Macro_Set_Common.h  pyScripts
pyScripts:\\
//
D:\Program^Files\py\py310\
D:\Program^Files^(x86)\py\py310\



[1.3] __Admin__
//
Save:set\Macro_Set_Common.h  Admin
//
C:\Users\
C:\Users\{Admin}\AppData\



[1.4] __S__
S:\\
//
Save:set\Macro_Set_Common.h  SPath



[1.5] __BakS__
BakS:\\

//
Save:set\Macro_Set_Common.h  BakSPath



[1.6] 



[1.7] 

// bcmp
//cmd_f: ren bak:Tmp_Test.h Tmp_Test5.0.h




[1.8] 




[1.9] 




[1.10] 




[1.11] 




[1.12] 




