
基础路径设置:
//basePath = 


//目录:
// 1. 
Save:Help\Other\Macro_Help_SI.h \[1.1\] marco file
Save:Help\Other\Macro_Help_SI.h \[1.2\] marco test...
Save:Help\Other\Macro_Help_SI.h \[1.3\] set save-------修改
Save:Help\Other\Macro_Help_SI.h \[1.4\] 
Save:Help\Other\Macro_Help_SI.h \[1.5\] other set
Save:Help\Other\Macro_Help_SI.h \[1.6\] set key--------项目路径
Save:Help\Other\Macro_Help_SI.h \[1.7\] set common-----工具路径
Save:Help\Other\Macro_Help_SI.h \[1.8\] 备注
Save:Help\Other\Macro_Help_SI.h \[1.9\] 
Save:Help\Other\Macro_Help_SI.h \[1.10\] 
Save:Help\Other\Macro_Help_SI.h \[1.11\] 
Save:Help\Other\Macro_Help_SI.h \[1.12\] 
// 2. SI4.0安装步骤
Save:Help\Other\Macro_Help_SI.h \[2.1\] SI4.0安装步骤
Save:Help\Other\Macro_Help_SI.h \[2.2\] 更新配置文件
Save:Help\Other\Macro_Help_SI.h \[2.3\] 初次配置需要同步, 更新新功能也可能要同步(否则报函数找不到)
Save:Help\Other\Macro_Help_SI.h \[2.4\] 设置保存目录
Save:Help\Other\Macro_Help_SI.h \[2.5\] 验证配置OK
Save:Help\Other\Macro_Help_SI.h \[2.6\] 
Save:Help\Other\Macro_Help_SI.h \[2.7\] 
Save:Help\Other\Macro_Help_SI.h \[2.8\] 




[1.1] marco file
### __marco__
//1) path:
Save:Macro\
//2) f1~f12:
Save:Macro\sbd_f1.em
Save:Macro\sbd_f2.em
Save:Macro\sbd_f7.em
Save:Macro\sbd_f10.em  macro^NoteGroup
Save:Macro\sbd_f11.em  macro^NoteHander
Save:Macro\sbd_ctrl.em
//3) tool:
Save:Macro\a_String.em
//4) file style:
Save:Macro\sbd_file.em  IsTxtFile( )


[1.2] marco test...
### __test__
//
Save:Help\
// 功能测试
Save:Help\Macro_Note_Test.h
// 开启测试
Save:Macro\sbd_test.em  macro^TestMsg

// 批量替换
Save:Help\Other\Macro_Help_replace.h


[1.3] set save path
### __set__
// 1) 改变Save路径
// --用的固定路径，必须改，否则宏命令用不了:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_root_path.em  getRootPath(0)

// 2) 首次安装步骤:
Save:Help\Other\Macro_Help_SI.h


[1.4] 


[1.5] other set
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



[1.6] set key
//

### __cfg__
Save:set\
Save:set\Macro_Set_Path_{pro}.h  curKey
// --多个key会遍历所有可能 (没啥用，只是语法上保持不报错)
Save:set\Macro_Set_Path_{pro}_{pro}.h  curKey
// --不存在取key为空
Save:set\Macro_Set_Path_.h  curKey


### __key__
// 每个项目独立配置: 
Save:set\Macro_Set_Key.h

// S项目暂用save目录作项目目录
Save:set\Macro_Set_Key.h  base_pri

// 也可以外部调用路径
Save:set\Macro_Set_Key.h  101key
{HW}\\


[1.7] set common
// --差异 放 cur Path;
// --tool 放 Common;
// --共用 放 Key;
Save:set\Macro_Set_Common.h   downPath
//
HWNV:\\



[1.8] 备注

### 获取key--{0}/常用键
//		==>getKeyHead
//		====>GetPubPathBuf
//		======>'Macro_Set_Path_base.h'
//		====>GetCommonPathBuf
//		======>'Macro_Set_Common.h'
//		====>GetPubKeyBuf
//		======>'Macro_Set_Key.h'
Save:Macro\sbd_f11.em   ReAllKeyHead


### 获取key--8910 path外部使用
//		==>getKeyHead
//		====>getPathFromKey
//		======>SearchNumFromKey
//		======>SearchPathFromNum
//		========>'8910' -> '60' -> path
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


[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] SI4.0安装步骤

	1) 安装包文件:
		SI4.0安装包\si4.pediy.lic
		SI4.0安装包\sourceinsight4.exe
		SI4.0安装包\sourceinsight4084-setup.exe

	2) 安装步骤:
		1 安装 sourceinsight4084-setup.exe
		2 用sourceinsight4.exe替换安装目录下的文件
			D:\Program Files (x86)\Source Insight 4.0\sourceinsight4.exe
		3 打开sourceinsight4.exe，导入证书si4.pediy.lic

	3) SI4.0默认配置, 需要改字体、编码、布局..
		//具体查看:
		//SI4.0安装使用.txt


[2.2] 更新配置文件
#    配置文件 下载命令:
git clone https://github.com/seefs/Source_Insight_4_0_cfg

#    更新后覆盖这个目录
#    已设置好快捷键，字体，菜单
...\Save\Source Insight 4.0\Settings
#    (举例)
	
	


[2.3] 初次配置需要同步, 更新新功能也可能要同步(否则报函数找不到)

菜单--project -> 打开project -> base project 
切换到base project下：

###添加宏文件:
菜单--project -> 添加或移除项目文件 -> 添加
...\Macro

选所有文件, 
其他文件不用添加


###同步:
菜单--project -> 同步文件



[2.4] 设置保存目录
运行:
...\Cmd_other\first_set_path.bat

或者直接编辑:
...\Save\SI_db\Macro\sbd_root_path.em
	


[2.5] 验证配置OK
###快捷键
ctrl+b, 即打开临时文件--simple_tmp_b.h
f2, 打开当前目录


[2.6] 


[2.7] 


[2.8] 






