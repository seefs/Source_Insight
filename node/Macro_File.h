
// File List [Num][Ca]:
// 1. Common notes
Save:node\Macro_File.h \[1.1\] work file
Save:node\Macro_File.h \[1.2\] bak file
Save:node\Macro_File.h \[1.3\] help--Node Num
Save:node\Macro_File.h \[1.4\] help--DefaultFile
Save:node\Macro_File.h \[1.5\] CQ
Save:node\Macro_File.h \[1.6\] special file
// 2. Marco
Save:node\Macro_File.h \[2.1\] marco file
Save:node\Macro_File.h \[2.2\] marco test...
Save:node\Macro_File.h \[2.3\] set save path
Save:node\Macro_File.h \[2.4\] set work path
Save:node\Macro_File.h \[2.5\] other set
Save:node\Macro_File.h \[2.6\] 
// 3. Cmd
Save:node\Macro_File.h \[3.1\] Cmd file
Save:node\Macro_File.h \[3.2\] Cmd unzip
Save:node\Macro_File.h \[3.3\] Cmd Compare
Save:node\Macro_File.h \[3.4\] utf8<-->ansi
Save:node\Macro_File.h \[3.5\] update
// 4. tools
Save:node\Macro_File.h \[4.1\] win
Save:node\Macro_File.h \[4.2\] Office
Save:node\Macro_File.h \[4.3\] Cmd
Save:node\Macro_File.h \[4.4\] SVN
Save:node\Macro_File.h \[4.5\] Beyond Compare
Save:node\Macro_File.h \[4.6\] SecureCRT
Save:node\Macro_File.h \[4.7\] git
Save:node\Macro_File.h \[4.8\] SI
Save:node\Macro_File.h \[4.9\] vim
Save:node\Macro_File.h \[4.10\] 



[1.1] work file
//1) android:
Save:node\android\Macro_Note_as.h
Save:node\android\project\Macro_Note_9820e.h

//2) MTK SPR:
Save:node\C\Macro_Note_C.h
//	MTK, modis
Save:node\C\study\Macro_modis_MTK.h
Save:node\C\project\Macro_Note_MTK.h
//	6531E, modis
Save:node\C\study\Macro_modis_6531E.h
Save:node\C\project\Macro_Note_6531E.h
//	7701, modis
Save:node\C\project\Macro_Note_7701.h

//3) Pythons:
Save:node\Pythons\Macro_Note_Python.h

//4) other:
Save:node\Project\Macro_A_Nav.h


[1.2] bak file
//	bak(未整理, 未改)
Save:Help\bak\Macro_tmp.h


[1.3] help--Node Num
//参考标号:
//  2个\\是为了不被替换
Save:Help\\DefaultFile\\Macro_Node_Num.h


[1.4] help--DefaultFile
//样板文件:
Save:Help\DefaultFile\Macro_z_null.h
Save:Help\DefaultFile\Macro_z_null.py
//样板文件-(更多序号+):
Save:Help\DefaultFile\Macro_z_null_2.h
//Info文件:
Save:Help\LangInfo\Macro_Info_Android.h
Save:Help\LangInfo\Macro_Info_Python.h


[1.5] CQ
//禅道 展讯 MTK
//1) 禅道:
http://192.168.2.252/zentao/my/
//2) 展讯:
http://222.66.158.139:2008/cqweb/#
//   9820e:
https://isupport.spreadtrum.com/iSupport/apply/faq_list#tab-
//3) MTK:
https://online.mediatek.com

[1.6] special file
//1) Nv Msg
Save:Set\Macro_Val.h
//2) Key Msg
Save:node\Simple_CTRL_K.h
//3) CTRL_B
Save:node\Simple_CTRL_B.h
//4) Bcmp Tmp File
Save:Cmd_TXT\Tmp_Comp_1.h
Save:Cmd_TXT\Tmp_Comp_2.h



[2.1] marco file
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


[2.2] marco test...
// 功能测试
Save:Help\Macro_Note_Test.h


[2.3] set save path
// 1) 改变Save路径, 宏命令才能正常使用:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_root_path.em  getRootPath(0)

// 2) 首次安装步骤:
Save:Help\Other\Macro_Help_SI.h


[2.4] set work path
//1) 工程路径编号
Save:set\Macro_Set_Base.h

//2) 项目路径缴存(替换)
Save:set\Macro_Set_Note.h


[2.5] other set
// show python help
//   1--on, 0--off
Save:set\Macro_Set.h 75

// show android help
//   1--on, 0--off
Save:set\Macro_Set.h 78


[2.6] 


[3.1] Cmd file
Save:Cmd\
Save:Cmd_other\
Save:Cmd_other\file_list\
Save:Cmd_other\conv_cur_charset\


[3.2] Cmd unzip
Save:Cmd_unzip\6531E\unzip_spr128.bat
Save:Cmd_unzip\6531E\unzip_spr240_mini.bat


[3.3] Cmd Compare
Save:bak\bcmp\bmp_107_mk.bat


[3.4] utf8<-->ansi
//set file code:
//   添加目录或文件，逐个转换编码格式
Save:Cmd_other\conv_cur_charset\
Save:Cmd_other\conv_cur_charset\conv_cur_utf8_to_ansi.vbs
Save:Cmd_other\conv_cur_charset\conv_cur_ansi_to_utf8.vbs


[3.5] update
// update
Save:Cmd_other\
Save:Cmd_other\git_auto_pull.bat
Save:Cmd_other\git_auto_push.bat

// 其他项目更新
Save:node\android\project\Macro_as_demo.h  git_updata



[4.1] win
Save:node\ToolsMsg\Macro_win.h


[4.2] Office
Save:node\ToolsMsg\Macro_Office.h


[4.3] Cmd:
Save:node\ToolsMsg\Macro_Cmd.h


[4.4] SVN
Save:node\ToolsMsg\Macro_win.h \[2.4\] SVN 配置


[4.5] Beyond Compare
C:\Users\Administrator\AppData\Roaming\Scooter^Software\Beyond^Compare^4
//   BCmp:
Save:node\ToolsMsg\Macro_Bcomp.h


[4.6] SecureCRT
Save:node\ToolsMsg\Macro_SecureCRT.h


[4.7] git
Save:node\ToolsMsg\Macro_git.h
Save:node\ToolsMsg\Macro_git_md.h
Save:node\ToolsMsg\Macro_git_app.h


[4.8] SI
Save:node\ToolsMsg\Macro_SI.h


[4.9] vim
Save:node\ToolsMsg\Macro_vim.h




[4.10] 






