
基础路径设置:
//basePath = 


//目录:
// 1. 
Save:Help\Other\Macro_Help_SI.h \[1.1\] marco file
Save:Help\Other\Macro_Help_SI.h \[1.2\] marco test...
Save:Help\Other\Macro_Help_SI.h \[1.3\] set save path---修改
Save:Help\Other\Macro_Help_SI.h \[1.4\] set work path
Save:Help\Other\Macro_Help_SI.h \[1.5\] other set
Save:Help\Other\Macro_Help_SI.h \[1.6\] set cfg path
Save:Help\Other\Macro_Help_SI.h \[1.7\] 
Save:Help\Other\Macro_Help_SI.h \[1.8\] 
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
// 1) 改变Save路径, 宏命令才能正常使用:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_root_path.em  getRootPath(0)

// 2) 首次安装步骤:
Save:Help\Other\Macro_Help_SI.h


[1.4] set work path
//1) 工程路径编号
Save:set\Macro_Set_Base.h

//2) 项目路径缴存(替换)
Save:set\Macro_Set_Note.h


[1.5] other set
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



[1.6] set {pro} path
// 1.项目号
// --项目号--代码
Save:Macro\sbd_f11.em   ReCustomKeyHead
// --项目号--保存在哪个文件
Save:Macro\sbd_base.em  getPathConfig(0)
// --项目号--文件
Save:set\Macro_Set_Base.h
// --项目号--{pro}--限制可以转换的类型
Save:Macro\sbd_file.em  GetPubPathBuf
//
Save:set\
Save:set\Macro_Set_Path_*_*.h

// __cfg__
// 2.获取项目号
// --每个项目独立配置;多个key会遍历所有可能,不存在取key为空
// --S项目暂用save目录作项目目录
Save:set\
Save:set\Macro_Set_Path_{pro}.h  curKey
Save:set\Macro_Set_Path_.h  curKey





[1.7] 




[1.8] 




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






