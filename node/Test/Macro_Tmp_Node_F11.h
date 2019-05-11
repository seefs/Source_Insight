
//目录[Num][Ca]:
// F11功能测试:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.1\] open
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.2\] make
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.3\] vc
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.4\] set
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.5\] cp
// 特殊路径测试:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[2.1\] 特殊路径
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[2.2\] 删空格测试
// F11功能测试:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[3.1\] 新加替换目录:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[3.2\] 开启注释

//参考标号:
Save:SI\node\Test\Macro_Tmp_Node_Num.h






[1.1] open
//open     创建笔记; 打开exe; 打开文件+关键字; 非Macro_开头文件中只能用这个打开文件
open:plutommi\Customer\STMTView.exe


//openCmd 


//cmd 	   运行cmd命令 不包含cmd
cmd: cmd


[1.2] make
//make     运行cmd命令
make M115_JGW_D2_X191_F2 gprs gen_modis


//python   运行cmd命令
python S069_HK_H1822_IRBIS_SF31_F2_QQVGA


//ctmake   不运行cmd命令, 只复制
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


//xmake    不运行cmd命令, 只复制
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


[1.3] vc
//vc 	   
vc: build\SE818BC_BY_S018_JX_64_64_F3_builddir\win\simulator.dsw


//vs08     
vs08:MoDIS_VC9\MoDIS.sln


//call     不运行cmd命令, 只复制


[1.4] set
//set  
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm


//setPath  
setPath old (在这一行按F5, 开始替换)


//setProPath  
setProPath plutommi\\Customer\\Audio\\M115\\M115_JGW_D2_X191_F2 = AUDIO\\PLUTO


//sethistory: 



[1.5] cp
//cp:	   复制文件
cp Save:SI\node\Test\Tmp_Test.h Save:SI\node\Test\Tmp_Test_new.h
	
//RAR:
RAR Save:SI\node\Test\Tmp_Test.h Save:SI\node\Test\Tmp_Test_new.h
RAR Save:SI\node\Test\Tmp_Test.h



[2.1] 特殊路径
//1. "E:XXX YYY" 获取路径为 "E:XXX"

//cfg--fs
Tool:soft_zip_mp3\BLEPHONE61D_11C_BB.cfg main_region

root->F


[2.2] 删空格测试



[3.1] 新加替换目录:
Save:SI\MacroSBD\sbd_f11.em 327
// 添加:
//		else if(noteCmd == "Save" || noteCmd == "Tool")

Save:SI\MacroSBD\sbd_file.em macro^GetTransFileName( )
// 最后添加:
//	fName = ReplaceWord(fName, "Save:", getSavePath(0) # "\\")
//	fName = ReplaceWord(fName, "Project:", getCustomPath(0) # "\\")
//	fName = ReplaceWord(fName, "Tool:", getCustomPath(0) # "\\")



[3.2] 开启注释:
// 公共test msg：
Save:SI\MacroSBD\sbd_test.em macro^TestMsg( )
//	取消注释:
//	TestMsg(msgStr)


Msg("cmdP1 " # cmdP1 # CharFromKey(13)
# "cmdP2 " # cmdP2 # CharFromKey(13))

TestMsg(cmdStr)









