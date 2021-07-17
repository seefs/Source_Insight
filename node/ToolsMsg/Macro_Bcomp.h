

// 编码方式
//   默认以西欧（windows）打开
// 工具>>文件格式 在右侧切换到 第二个标签页【转换】 在靠下的杂项里即可设置编码方式。


//帮助文件:
open: C:\Program^Files\Beyond^Compare^4\BCompare.chm


//路径:
C:\Program Files\Beyond Compare 4\BCompare.exe


//文件夹对比导出文件:
//BCompare.exe /silent "@D:\tmp\compare_script.txt" "待比较文件夹1" "待比较文件夹2" "结果文件"
BCompare.exe /silent "@E:\save\SI\Cmd_TXT\compare_script.txt" "F:\6531E_16A\MS_Customize\midi\ARM_2MB" "F:\6531G_16A_MP_W17.43.4\MS_Customize\midi\ARM_2MB" "E:\save\SI\Cmd_TXT\compare_re.txt"


Save:SI\Cmd_TXT\compare_script.txt
//	load "%1" "%2"
//	select all
//	filter "-.svn\"
//	expand all
//	compare rules-based
//	folder-report layout:xml  output-to:"%3"


正常窗口打开:
文件夹/文件对比:
BCompare.exe "F:\6531E_16A\MS_Customize\midi\ARM_2MB" "F:\6531G_16A_MP_W17.43.4\MS_Customize\midi\ARM_2MB"


//	文档：
//	C:\Program Files\Beyond Compare 4\BCompare.chm
//
//	BCompare.exe
//
//	C:\Program Files\Beyond Compare 4\
//	BCompare.exe "C:\Left Folder" "C:\Right Folder"
//
//	BCompare.exe C:\Left.ext C:\Right.ext C:\Center.ext
//
//	无视图:
//	BCompare.exe "@C:\My Script.txt"
//
//	echo %1\BCompare.exe %2 %3
//
//	测试:
//	E:\save\SI\Cmd\bcompare2.bat  "F:\6531DA_Btdialer\version" "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\cmd_base2.bat  "C:\\Program Files\\Beyond Compare 4\BCompare.exe" "F:\6531DA_Btdialer\version" "F:\6531DA_Btdialer\version"

E:\save\SI\Cmd\bcompare2.bat  "F:\6531DA_Btdialer\version" "F:\6531DA_Btdialer\version"


