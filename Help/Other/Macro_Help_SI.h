


[1.1] SI4.0安装步骤

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



[1.2] 更新配置文件
#    配置文件 下载命令:
git clone https://github.com/seefs/Source_Insight_4_0_cfg

#    更新后覆盖这个目录
#    已设置好快捷键，字体，菜单
...\Save\Source Insight 4.0\Settings
#    (举例)
	
	


[1.3] 初次配置需要同步, 更新新功能也可能要同步(否则报函数找不到)

菜单--project -> 打开project -> base project 
切换到base project下：

###添加宏文件:
菜单--project -> 添加或移除项目文件 -> 添加
...\Macro

选所有文件, 
其他文件不用添加


###同步:
菜单--project -> 同步文件



[1.4] 设置保存目录
运行:
...\Cmd_other\first_set_path.bat

或者直接编辑:
...\Save\SI_db\Macro\sbd_root_path.em
	


[1.5] 验证配置OK
###快捷键
ctrl+b, 即打开临时文件--simple_tmp_b.h
f2, 打开当前目录



