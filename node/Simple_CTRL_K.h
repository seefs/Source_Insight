
//目录:
Save:node\Simple_CTRL_K.h \[1.0\] F1-0 宏说明
Save:node\Simple_CTRL_K.h \[1.1\] F1 (按F1后再按0~9、A~Z、F2~F12)
Save:node\Simple_CTRL_K.h \[1.2\] F2 打开目录
Save:node\Simple_CTRL_K.h \[1.3\] F3 修改默认向前搜索
Save:node\Simple_CTRL_K.h \[1.4\] F4 修改默认向后搜索
Save:node\Simple_CTRL_K.h \[1.5\] F5 打开/跳转
Save:node\Simple_CTRL_K.h \[1.6\] F6 (区分中文跳转 和 英文跳转)
Save:node\Simple_CTRL_K.h \[1.7\] F7
Save:node\Simple_CTRL_K.h \[1.8\] F8 高亮   同原功能
Save:node\Simple_CTRL_K.h \[1.9\] F9 关闭文件, 显示所有宏, 便于查找
Save:node\Simple_CTRL_K.h \[1.10\] F10 分组索引
Save:node\Simple_CTRL_K.h \[1.11\] F11 宏注释 项目笔记
Save:node\Simple_CTRL_K.h \[1.12\] F12 显示配置 是否定义
Save:node\Simple_CTRL_K.h \[1.13\] CTRL组合
Save:node\Simple_CTRL_K.h \[1.14\] 当前文件快捷键
Save:node\Simple_CTRL_K.h \[1.15\] 特殊标记

//新功能(未完成):
Save:node\Simple_CTRL_K.h unfinished:

/***********************************************************************/
/************************** 新功能和BUG说明 ****************************/
/***********************************************************************/

// 第3个
source:mmi_app\common\h\common_mdu_def.h   SPDE_UI_STYLE_BLACK_BG_WHITE_FONT  3


F1--R: 就是ctrl_R打--svn/git-log

//
patch:...
--对比当前项目文件
f7--c--对比补丁中的文件，自动分类

//
exist_file.pl


//
file 604 word, 从604行开始搜索

F5,note跳mk,其他跳patch

//
ctrl+R, 空行默认跳:mk--_T5

// 未设置--死循环
// 设置了--多个\
base: \[1.1\] 常量

ctrl+t, 第1步先换tab成空格（右注释）
ctrl+t, 调整空格个数，
ctrl+t, 空格少2个不能取消注释
ctrl+t, 索引-----跳转并粘贴
ctrl+R, 空行目录, 或者从空行导入模板
ctrl+R, _foreach, 关键字，循环跳转目录，或者加一行
F3, $kotlin_version, 带通配符搜不到

注释:
选中
xml-> ...
.gradle-> /* */


打开失败(jpg,) 打开上级目录



/***********************************************************************/
/******************************* 宏说明 ********************************/
/***********************************************************************/

[1.0] F1-0 宏说明
//
Save:Macro\sbd_f1.em
// 标签
[Base]
  功能显示(当前非项目文件):
F1-1:  数字0~9
F1-2:  字母a-j
F1-3:  字母k-t
F1-4:  字母u-z
F1-5:  f1-f10
F1-6:  f11-f12, Other -,+,back,del,方向键 
F1-7:  ctrl+a~D
F1-8:  数字提示
F1-9:  字母提示(最常用)

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

[1.1] key:[F1] (按F1后再按0~9、A~Z、F2~F12)
快捷键：
F1 -> 0~9: 		... (按F1提示)
F1 -> A~Z: 		... (按A提示)
F1 -> F2~F12: 	显示 F2~F12 功能说明

详细功能：
F1 -> 1: 提示 功能0~9
F1 -> 2: project, 版本号, 跳转到 version_software_mocor.h                                       
F1 -> 3: project, 资源  ,   跳转到 common_mdu_def.h                                               
F1 -> 4: project, 语言,     跳转到 mmi_custom_define.h          -> MMISET_EDEFAULT_LANGUAGE          
F1 -> 5: project, 主菜单,    跳转到 mmi_menutable_XXx160.c       -> menu_mainmenu_icon                
F1 -> 6: project, 音量,     跳转到 mmienvset_internal.h                                           
F1 -> 7: 打开目录 \\resource\\RING                                                              
F1 -> 8: 打开Build目录                                                                          
F1 -> 9: 设置默认mk (在mk中; 或在搜索结果窗口, 选择mk名称)                                      
F1 -> 0: 跳到默认mk                                                                             
F1 -> -: 下载工具.                                                                              
F1 -> +: 下载工具 并设置当前pac                                                                 
F1 -> Back: 打开SR                                                       

F1 -> A: 提示 功能A~Z...

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

key:[F1A] (A~Z)
F1 -> A: 提示 功能A~Z
F1 -> B: 修改.em后, 对比文件SI与SI_bak                  
F1 -> C: 打开 cmd窗口 编译驱动
F1 -> D: 显示输入按键编码(test)
F1 -> E: 显示选中按键编码(test)
F1 -> F: 显示项目路径(检查F2打开问题)
F1 -> G: 显示所有文件数量+分类
F1 -> H: 
F1 -> I: 选中文字的ascii   【新加】
F1 -> J: New File  [Ctrl+N被用..有时间再加]
F1 -> K: 显示 SI常用快捷键                              
F1 -> L: 创建桌面lnk                                    
F1 -> M: 打开选择的Make
F1 -> N: 复制当前文件名                                 
F1 -> O: 打开目录 (6531DA/bt/6531E/6533/soft/save目录)  
F1 -> P: 项目切换
F1 -> Q: 清空剪切板
F1 -> R: 检查mk文件宏重复                               
F1 -> S: 显示当前选择Selection(调试)
F1 -> T: 
F1 -> U: 
F1 -> V: 搜索版本号 
F1 -> W 关闭多余win
F1 -> X: 清除.mk右侧内容, 用于对比
F1 -> Y:
F1 -> Z: pick window 
      
unfinished: [Next] (未实现)F1 -> X: 多余SI, 关闭省内存
F1 -> 其他符号, .; 显示ascii code

其他：
    若所有窗口关闭, 按F1/F2/F9/F10/F11/F12, 打开搜索结果窗口
    在em文件中, F1作为公共宏调试, F1~F12都有一个宏测试入口, F1->T作为宏F1调试

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_f2.em
[1.2] key:[F2] 打开目录
功能：
1. 未选中, 在搜索结果界面, 打开F1->9设置的mk文件；默认打开当前目录, 有basePath打开basePath
2. 选中mk, 打开 project或target
3. 选中path, 打开对应目录, 
       例如： F:\6531DA\MS_MMI\source\mmi_app\app\audio
           选中source ,    打开F:\6531DA\MS_MMI\source
           选中mmi_app, 打开F:\6531DA\MS_MMI\source\mmi_app
4. 以上条件打开失败, 打开当前目录、工程目录

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Save:Macro\sbd_f3.em
[1.3] key:[F3] 修改默认向前搜索
功能：
1. 修改默认向前搜索功能
2. 当前文件内循环
3. 搜索当前选择内容
4*. 当选中第1个字符为空格时, 搜索复制内容(用于没有可供选中的情况)
5. 另外用F1->F3代替原功能; 带通配符搜索时如:\(.*\)用这种

ctrl+F3、F4: unfinished:3: [Next]  (未实现) 笔记中，上一个、下一个标签

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Save:Macro\sbd_f4.em
[1.4] key:[F4] 修改默认向后搜索
功能：
1. 修改默认向后搜索功能
2. 当前文件内循环
3. 搜索当前选择内容
4*. 当选中第1个字符为空格时, 搜索复制内容(用于没有可供选中的情况)
5. 另外用F1->F4代替原功能; 带通配符搜索时如:\(.*\)用这种
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_f5.em
[1.5] key:[F5] 打开/跳转
功能：
1.  有选中
1.1 选中宏, mk文件中,          打开/跳转到对应的文件/宏
      打开文件, 再跳转到宏
          ST7735S   -> tft_ST7735S.c   -> LCD_ST7735S_YIHUA_HSD
          GC6133   -> sensor_GC6133.c  -> SBD_CAMREA_GC6133_FOR_XX
          GC6133   -> sensor_GC6133.c  -> SBD_CAMREA_GC6133_FOR_XX
          BT   -> bt_cfg.h  -> SBD_BT_NAME_XX
      打开目录
          CUSTOMER   -> F:\6531E_16A\common\nv_parameters
1.2 选中宏, 非mk文件中, 查找下一个
2.  未选中
2.1 复制中文-语言, 并且未选中内容, 跳转到复制对应的宏
      阿       -> ARABIC
      西班牙     -> SPANISH   //复制前面1~3个中文都可以
      法语      -> FRENCH
2.2 默认是打开文件夹(同F11中的F5)

//4#. 优化, LCD关键词加等级, 先计算等级, 再跳转（要等做了F6再说, 做了F6才有用）
unfinished:1: [Next] (BUG) F5->HAN MTK 中error  

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_f6.em
[1.6] key:[F6] (区分中文跳转 和 英文跳转)
1.功能：添加mk文件内, 中文跳转, 步骤:
1.1. 复制中文A
1.2. 选中英文B
1.3. 按F6添加跳转：A->B
	
2.功能：添加英文跳转文件, 步骤:
2.1. 在文件A中
2.2. 选中英文关键字B(最好是一部分)
2.3. 按F6添加跳转：含B的宏->A文件->关键字B
	
3.功能：编辑跳转关系, 步骤:
3.1. F7->E edit..->1/2
3.2. 可以在\SI\node\Macro_Rule_Key.h, Macro_Rule_Han.h 中手动添加, 并按F6排序 
   F6排序暂时用处不大, 现在已更改逐行查找->全文件查找, 之前逐行查找会卡。
3.3. 支持添加, 不支持替换, 替换请手动编辑
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_f7.em
[1.7] key:[F7]
详细功能：
---switch-----------------
F7 -> G -> 切换F5/F6功能: F5跳转.                F6添加跳转关系 
F7 -> S -> 切换F5/F6功能: F5多条件搜索.    F6         添加条件 
F7 -> B -> 切换--/F6功能: F6多工程文件对比, 设置对比工程
           增加功能: F1->F6 目录对比
F7 -> L -> 切换--/F6功能: F6关闭
F7 -> N -> 切换--/F6功能: F6服务器路径 
unfinished:1: [Next] 后面增加提示切换ok
	//1) 在这一行取消注释并F5, 保存服务器路径到文件中, 会提示设置ok:
	//	 basePath = \\192.168.2.115\xiaoj\9820\idh.code
	//2) F5优先用basePath作项目路径, 
	//	 默认用当前路径, basePath是注释的, 
	//3) F5/F6     打开本地/服务器代码
	//	 F2/F1->F2 打开本地/服务器路径
---no switch--------------
F7 -> U: 更新SVN 
F7 -> I: 提交SVN, 默认设置project 
F7 -> C -> Svn Commit(Cur File)
F7 -> T -> Svn Log(Cur File)
F7 -> R -> 添加跳转关系
F7 -> V -> 对比依次选中的2段代码						 (只有这个用的多点)
F7 -> X -> 清除#注释  (好像未实现)
F7 -> P -> 打开剪切板 (很少用)
F7 -> E -> 1/2/3/4/5: 编辑F5跳转关系/编辑F10菜单组/编辑F11宏说明
F7 -> F -> 打开目录..\SI\node (已经没有了)
F7 -> A -> 打开 ..\SI\node\Tmp_Common.h
    
unfinished:3: [Next] (未实现)F7 -> L -> build-查宏-显示在si  (未实现)
unfinished:1: [Next] (未实现)F7 -> M -> build-查log   type app* |find  "SPEAK" > log.txt  (未实现)
unfinished:1: [Next] (未实现) F7 -> H: last模式 最后一次命令：如svn添加文件

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Save:Macro\sbd_f8.em
[1.8] key:[F8] 高亮   同原功能
功能：
1. 高亮, 同原功能, 未改变
2. 多选高亮F8	     【未实现】

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Save:Macro\sbd_f9.em
[1.9] key:[F9] 关闭文件, 显示所有宏, 便于查找
功能：打开/关闭所有宏文件
1. 打开/关闭文件, 显示所有宏, 便于查找: 
	Save:node\search\Macro_ALL_6531E.h
	Save:node\search\Macro_ALL_6533.h
	Save:node\search\Macro_ALL_MTK.h
2. 在sbd_base.em中getBaseFileType(, s=1)设置类型6531E、6533、MTK
	默认为空, 有需要才设置
3. 9820功能: 文件名显示路径
		选中: Settings.java
		提示: packages\apps\Settings\src\com\android\settings\Settings.java
		按ok添加这一行; 多选需要按序号; 按0添加全部行
unfinished:1: [Next]  F9-MTK: 所有文件名
	
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_f10.em
[1.10] key:[F10] 分组索引
功能：SR组菜单
1 在Simple_CTRL_B/default窗口
	1.1 空格对齐
2 在展讯mk文件(几乎不用, IM可能会用于删除语言)
	2.1 在mk文件, 显示主列表
		1.LCD     - 跳到分组
		2.camera  - 跳到分组
		3....     - 
		g.Font    - 第2次F10, 循环跳转
		h.IM      - 第2次F10, 循环跳转
		按编号跳转到宏
	2.2 在mk文件, 选择 - 添加item
		key ~ mk head
	2.3 在mk文件, 不选择 - 跳转到当前复制内容对应的宏位置
	2.4 以上功能冲突, 用F1->Q清空剪切板调整
3 在Note文件
	3.1 跳到目录
4 在em文件
	4.1 显示Macro函数名+行号, 方便进一步编辑

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_f11.em
[1.11] key:[F11] 宏注释 项目笔记
1. 打开或关闭笔记文件:
    \SI\node\note\Macro_Note_6531E.h
    \SI\node\note\Macro_Note_MTK.h

	1). 笔记中的一些F5功能
	### 命令格式: 取第2串字符--路径
	//open:         (1) 打开exe; 
	                (2) 打开文本文件+关键字，可以是非Macro_开头文件
	//test:         (1)
	//cp:           (1) 复制文件
	//RAR:          (1) 
	
	### 命令格式: 取1~4串字符, 整行--命令+路径+关键字
	//make:         (1) 运行cmd命令
	//ctmake:       (1) 不运行cmd命令, 只复制
	//xmake:        (1) 不运行cmd命令, 只复制
	
	### 命令格式: 取2~4串字符, 路径转换--不分左右
	//vc:           (1) 打开模拟器
	//vs08:         (1) 打开模拟器
	
	### 命令格式: 取3~4串字符, 路径在左--即改变cmd路径
	//python:       (1) 运行cmd命令
	//python_w:     (1) 
	//FileSame:     (1) 
	//AsFile:       (1) 获取文件名，base目录
	//EcFile:       (1) 获取文件名，base目录
	//cd:tmp:       (1) git ...
	//cd_i:tmp:     (1) git ...
	
	### 命令格式: 取2~4串字符, 循环替换路径(几乎通用)
	//cmd_f:        (1) 
	//cmd_w:        (1) 
	//cmd_s:        (1) 
	
	### 命令格式: 取1~2串字符, 完整路径
	//XXX:          (1) 替换路径, 比Save优先
	//Save:         (1) 
	//A~E:          (1) 
	
	
	//默认:      打开文件, 搜索关键字并跳转行; 关键字说明:
	//             关键字只有一个, 空格用作区分文件名, 用^表示空格;
	//             默认优先查找行首(不加^);
	//             可以用$结尾:abc$, 只有这个符号用通符,后续再补充.
	//         打开上级目录,     以[Path]结尾:
	//         Save:...\... [Path]
		如:
	chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT

	2). 9820e中F5/F6功能类似
		//F5 先读取当前文件 basePath 值代替项目目录, 不用的注释掉
		basePath = F:\9820e
		//basePath = D:\SVN\app\Calculator
		//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

	3). F10或者ctrl+D, 显示笔记中的索引; 输编号, 跳转到对应行
		//具体查看ctrl + D的功能说明
	
	4). 文件名补全...:
	Save:Cmd\file___no_use\dir_getFile...
	//按F5, 显示添加行:
	Save:Cmd\file___no_use\dir_getFile_spr.bat
	//按F6, 清除查找记录, 否则查找相同内容无法刷新:
	Save:Cmd_TXT\si_filelist.h


2. mk中有选中, 即显示宏说明
	1). 选择整个宏,     显示、添加宏说明
		选择:
    		IM_PORTUGUESE_SUPPORT
		弹窗提示:
			意大利, Italiano, 默认字库, T
		//即: 显示语言+名称翻译, 默认字库即拉丁字库, T表示翻译表1--T列, 2T表示翻译表2--T列

		//也可以手动添加说明内容
		Save:node\note\Macro_Note_Long.h
		//如:
    	//key:IM_ITALIAN_SUPPORT, 意大利, Italiano, 默认字库, T
    	
	2). 选择部分关键词,    显示、添加词说明; 
		手动添加说明内容
		Save:node\note\Macro_Note_Short.h
		//如:
		//key:BOE, 	京东方
		//key:BOE1, 	京东方
		//key:BOE2, 	京东方
		
	3). 可选择多行
		LCD_NV3029G_SANLONG_CPT2	= TRUE
		LCD_GC9306_YIHUA_HSD      = TRUE
		LCD_GC9305_SANLONG_HSD2 = TRUE
	提示:
		NV3029G	三龙+CPT
		GC9306	亿华
		GC9305	三龙+HSD
	按确认, 复制以上内容到剪切板, 再粘贴到软件说明书中。

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Save:Macro\sbd_f12.em
[1.12] key:[F12] 显示配置 是否定义
功能：
1. mk  file -> 显示配置; 每个工程宏名称不一样, 根据sbd_base设置的路径进行区分。
               检查新屏/摄像头cfg是否添加; 
               不兼容的屏：9101与9105 
               有问题的宏：SBD_HEADSET_KEY_CONTROL_MP3
               pb-sms-NV修改; 
2. SR  file -> 打开选中/默认mk
3. Simple_CTRL_K.h  -> 显示宏功能说明
      			//按F12->F1~F12
4.1  显示宏名称是否定义(MTK)
4.2  显示图片路径(SPR)
4.3  打开SR
4.4  显示宏名称是否定义(SPR)
      			//选中 
      			//		SBD_USB_NAME_X5300
      			//也可以选中一部分: 
      			//		SBD_USB_
      			//提示: 
      			//		aaa_
unfinished:4: [Next]  打开其他工程mk, F12没有匹配对; 以前可以现在不行了...

//4) 弹窗显示F1~F12的功能说明
//  F12->F1~F12

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Save:Macro\sbd_ctrl.em
[1.13] key:CTRL组合
部分功能替换原有功能

CTRL + ↑: 1.搜索结果中同文件选择; 
          2.选择函数名, 返回调用位置; 
          3.其他情况同原功能
CTRL + ↓: 1.搜索结果中同文件选择; 
          2.其他情况同原功能
//CTRL + ←: 1.原功能(未设置快捷键)
//CTRL + →: 1.原功能(未设置快捷键)
			  
ctrl + B: 1.显示帮助--py/html/android语法(如果设置打开)
          2.显示图片路径(sprd)
          3.显示宏是否定义(mtk/sprd)
          4.打开或关闭临时文件, 作一些记录
          
ctrl + C: 1.新加文件

ctrl + D: 1 搜索结果中
			  1.1 未选中, 向上向下选择同名行数, 向上向下删除同文件行;
			  1.2 已选中, 删除选中行
		  2. 在ref_list中, 选中下一条翻译
		  3. 同F10

unfinished:3: [Next] (未实现)4*. 选择1整行+ 设置对齐默认值; 选中, 注释对齐


ctrl + E: 1.打开文件或右侧project窗口
          //2.F10---默认区域--如font -- 每个文件1个默认行
          //3.base-F1/F2/../F12/E 
          //4.最后一次使用的F1
          
ctrl + U: 1.添加复制内容(配合svn--bcomp查看修改记录使用)
          //模式1: 多行选择: str              +每行
      			//复制: 
      			//		aaa_
      			//选中: 
      			//		xxx
      			//		yyy
      			//->: 
      			//		aaa_xxx
      			//		aaa_yyy
          //模式1-2: (用的少)
      			//第1行相同, str从后面添加
          //模式2: 多行选择: 数字递增             +每行
      			//选中: 
      			//		22
      			//		(空行)
      			//->: 
      			//		22
      			//		23
          //模式3: 不     选   : str[ i ]+空格+每行
      			//复制: 
				//		xx
				//		xy
				//		xz
      			//选中: 
				//		aa
				//		ab
				//		ac
      			//->: 
				//	  	xx aa
				//	  	xy ab
				//	  	xz ac
          //模式4: 添加通配符		    【未实现】
		  2. 添加空行, 复制^p^p^p(添加3行)
          
Ctrl + I: //转格式:
          //	  sprd_apps.mk (customize/customer_cfg/sp6820a/res)
          //->: 
          //	  customize/customer_cfg/sp6820a/res/sprd_apps.mk
          //转格式:
          //	  4.7.22
          //->: 
          //	  [ 4.7.22 ]
          //	功能有点问题: -会作为.匹配; 错误匹配可能要手动选择下一个标号
		  unfinished:3: [Next]  (未实现) char. 在前加编吗
		  
ctrl + K: 1.跳到快捷键说明文件 Simple_CTRL_K.h
ctrl + N: 添加空行(10行)
ctrl + Q: 1.打开下一个窗口
ctrl + R: 1.非笔记, 打开下一个搜索结果
          2.笔记,     跳转目录或文件
			  2.1 跳转目录。
			      数字作为索引时, 直接生成目录
			      字母作为索引时, 需要另行显示, 易变难记; 同时序列复杂, 不易分裂; 有冲突隐患
			  2.2 跳转文件。
ctrl + Shift + R: 
          1.笔记,     打开demo项目文件
		  	
ctrl + T: 1.type(.mk)中,    交换true/false, 或者在末尾加(= TRUE); 
          2.type(.C, .H)中, 添加或删除注释 //
          3.type(.py)中,     添加或删除注释 #
          4.type(.bat)中,    添加或删除注释 ::
		  5.type(*.*)中,     存在即交换: __OFF__ , __ON__
          6.unfinished: (未实现) note中直接修改mk, 可以多行
          
ctrl + W: 1.修改原功能, 不关闭搜索结果窗口, 但是大于40行会删除一半内容
Ctrl + Back: 回到SI
	
	其他：
[6D方法] +B共用 +U任用 +E通用; -D简用 -K化用 -N独用
ctrl + F12: 事件测试, 或者其他测试, 详细说明在 aEvent.em中
//Event功能现在用不上

(宏说明完)
			  
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
[1.14] 

  
3) 显示未完成功能
  ctrl+D->ctrl+D, 提示:
//  1. [ 1.1 ] (未实现)F1 -> X:多余SI,关闭省内存
//  2. [ 1.1 ](BUG) F5-> HAN MTK中error
//  ...
//  12. [ 2.4 ] (未实现)根据首行是否居首,删除注释
按ok再按数字序号跳转至对应位置



[1.15] 特殊标记: 
//1)内向标记:
//  开启内向标记:
//    ctrl+E:  外向是打开项目列表，内向是打开Demo文件，类似ctrl+R
//	            或者从近似列表中打开文档，太复杂(未实现)
//
//	  ctrl+D:  外向是索引，内向是删除*** (未实现)
Inward = TruE
	
//  向后注释:
//	  ctrl+T:  外向是向前注释，内向是向后注释；
//	           从demo导入注释; (未实现)
//	  ctrl+t,  重新编号：[]与1)都换成##某个符号，太复杂(未实现)
Backward = -1


//  重新编号:
//	  ctrl+T:  (未实现)
Number = True

//	重复:
//	  ctrl+w:  (未实现)
Foreach = True


//2)其他标记:
//  项目:
newPro = XXX
CurProPath = XXX
newPro = XXX

//  Test:  (MiniTest)
Mini_Test  = True
bftParam  = 1
fileParam = 1
testParam = 1

//  Path:
basePath = XXX
demoPath = XXX
xxxPath  = XXX




