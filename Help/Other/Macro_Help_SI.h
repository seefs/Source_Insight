
基础路径设置:
//basePath = 


//目录:
// 1. 
Save:Help\Other\Macro_Help_SI.h \[1.1\] marco file
Save:Help\Other\Macro_Help_SI.h \[1.2\] marco test...
Save:Help\Other\Macro_Help_SI.h \[1.3\] set save-------宏路径设置
Save:Help\Other\Macro_Help_SI.h \[1.4\] data set-------常量设置
Save:Help\Other\Macro_Help_SI.h \[1.5\] set cfg--------项目设置
Save:Help\Other\Macro_Help_SI.h \[1.6\] set key--------路径设置
Save:Help\Other\Macro_Help_SI.h \[1.7\] set common-----公共设置/工具路径
Save:Help\Other\Macro_Help_SI.h \[1.8\] 代码备注--key
Save:Help\Other\Macro_Help_SI.h \[1.9\] 代码备注--log
Save:Help\Other\Macro_Help_SI.h \[1.10\] 
Save:Help\Other\Macro_Help_SI.h \[1.11\] 
Save:Help\Other\Macro_Help_SI.h \[1.12\] 




[1.1] marco file
### __marco__
Save:Macro\
//1) f1~f12:
Save:Macro\sbd_f1.em
Save:Macro\sbd_f2.em
Save:Macro\sbd_f7.em
Save:Macro\sbd_f10.em  macro^NoteGroup
Save:Macro\sbd_f11.em  macro^NoteHander
Save:Macro\sbd_ctrl.em
//2) tool:
Save:Macro\a_String.em
//3) 文件类型
Save:Macro\sbd_file.em  IsTxtFile( )


[1.2] marco test...
Save:Help\

### __test__
// 功能测试
Save:Help\Macro_Note_Test.h

// 批量替换--nv
Save:Help\Other\Macro_Help_replace.h

// 批量搜索
Save:Help\Other\Macro_Help_search.h

// 项目文件统计/调试命令
//Save:node\ToolsMsg\Macro_SI.h  __filelist__
Save:Help\Other\Macro_Help_filelist.h


[1.3] set save
### __save__
// 1) 改变Save路径 (必须改，否则宏命令用不了)
// --入口:
Save:Macro\sbd_base.em	getSavePath(0)
// --直接编辑路径:
Save:Macro\sbd_root_path.em  getRootPath(0)
// --或者自动设置:
Save:Cmd_other\
Save:Cmd_other\first_set_path.bat
// --环境变量--区分版本
Save:Help\Other\Macro_Help_filelist.h  __SiVer__

// 2) 其他设置:
Save:node\C\cfg\
// --sprd--key
Save:node\C\cfg\Macro_c_path_sprd.h
// --mtk--key
Save:node\C\cfg\Macro_c_path_mtk.h



[1.4] data set
### __data__
//
// 最好移到项目配置文件下
//
// show python help
//   1--on, 0--off
Save:set\Macro_Set.h 75

// show android help
//   1--on, 0--off
Save:set\Macro_Set.h 78

// show html help
//   1--on, 0--off
Save:set\Macro_Set.h 81

//
Save:Macro\sbd_f12.em  ShowLibHelp

//
Save:Help\LangInfo\
Save:Help\LangInfo\Macro_Info_Python.h
Save:Help\LangInfo\Macro_Info_Html.h


[1.5] set cfg--------项目设置
### __cfg__
// 项目设置(每个项目独立配置)
Save:set\
Save:set\Macro_Set_Path_{pro}.h  curKey

// --普通key
// ----{0},{cur}
// --特殊key
// ----{pro}
// ------多个pro会遍历所有可能 (没啥用，只是语法上保持不报错)
// ------pro不存在时，取pro为空
// --多类型key
// ----{Next}
// ------next=2时检查2个路径是否存在
Save:set\Macro_Set_Path_{pro}_{pro}.h  curKey
Save:set\Macro_Set_Path_sprd_.h  curKey


[1.6] set key--------路径设置
### __key__
// 路径设置
Save:set\Macro_Set_Key.h

// --{91}
// ----S项目暂用save目录作项目目录
Save:set\Macro_Set_Key.h  base_pri

// --{HW}
// ----从键值反向查找键路径
Save:set\Macro_Set_Key.h  101key
{HW}\\


[1.7] set common-----公共设置/工具路径
### __Common__
// 其他路径
Save:set\Macro_Set_Common.h   HWNVPath

// 工具路径
Save:set\Macro_Set_Common.h   BComparePath

// 公共设置
Save:set\Macro_Set_Common.h   AdminKey



[1.8] 代码备注
// 应该可以同步配置，项目设置优先

### 获取key--{0}/常用键
//		==>getKeyHead
//		====>GetPubPathBuf                # 项目设置
//		======>'Macro_Set_Path_base.h'
//		====>GetCommonPathBuf             # 公共设置
//		======>'Macro_Set_Common.h'
//		====>GetPubKeyBuf
//		======>'Macro_Set_Key.h'          # 路径设置 xxkey_8910 => path
//		======>getPathFromKey
//		========>SearchNumFromKey
//		========>SearchPathFromNum
Save:Macro\sbd_f11.em   ReAllKeyHead
//
{8910}:\


### 获取key--tool
//		==>NoteHander
//		====>getVS08Path(0)
//		======>getToolPathFromKey("", "VS08")
//		========>'VS08' -> path


### 获取key--Alias/项目键
//		==>getPathFromAlias   #  (未使用)
Macro\sbd_base.em  getPathFromAlias
//		==>BCompare
//		====>getBaseOther(curtype, "alias")
//		======>'6531D' -> 'MS_MMI'
//		==>getCustomHot(hbuf, 2)
//		====>getBaseType
//		====>getBaseOther(n, "alias")
//		====>getBaseOther(curtype, "Hot")
//		======>"Hot2" -> path


### 获取Num/代码键
//		==>BCompare
//		====>getBaseDirNum
//		======>SearchNumFromPath
//		==>GetPubPathBuf
//		====>getBaseDirNum
//		==>getCustomKeyHead
//		====>getBaseDirNum
//		====>getBaseKey
//		======>"pro" -> "60" -> "8910"
Save:Macro\sbd_f11.em   ReCustomKeyHead


### 获取Num
//		==>Item_2
//		====>Item_Tree(2)
//		======>Code_Tree(2-12)
//		========>TreeNum(hbuf, 2)
//		==========>"work" -> "tree" -> 1 -> 2
//		==>Tree()  # f1-2
//		====>TreeNum(hbuf, 2)
//		======>getCustomHot(hbuf, 2)


### 获取project
//		==>OpenPath
//		====>getProjectPath
//		======>getBaseDirNum
//		========>"选中" -> "\\target"       # 过时了，移到cfg里
//		==>ShowMacro
//		====>OpenSelMakeFile
//		======>OpenMakeFile
//		========>getProjectPath
//		==========>"SR" -> "mk"    # 有一点点用
//		==>getBaseType
//		====>getBaseDirNum


### 获取 tag1
//		==>ShowMarcoFromFile
//		====>getBaseOther(n, "tag1")


### 
//		==>
//		====>
//		======>
//		========>
//		==========>
//		============>
//		==============>


[1.9] 代码备注--log
// 返回测试
Save:Help\Other\Macro_Help_SI.h   __test__

### __log__
// 显示log级别
//testParam = 0  //不要log
//testParam = 1  //显示少量log
//testParam = 2  //显示多数log
// log
Save:Macro\sbd_test.em  macro^TestMsg


//  当前文件作为测试文件:
//MiniTest = True
Save:Macro\sbd_test.em  MiniTest



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 






