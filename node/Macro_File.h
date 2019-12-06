
// File List [Num][Ca]:
// 1. 常用笔记
Save:node\Macro_File.h \[1.1\] work file
Save:node\Macro_File.h \[1.2\] bak file
// 2. Marco
Save:node\Macro_File.h \[2.1\] marco file
Save:node\Macro_File.h \[2.2\] set marco path
Save:node\Macro_File.h \[2.3\] set work path
Save:node\Macro_File.h \[2.4\] set file code
// 3. Cmd
Save:node\Macro_File.h \[3.1\] Cmd file
Save:node\Macro_File.h \[3.2\] Cmd unzip
Save:node\Macro_File.h \[3.3\] Cmd Compare
// 4. Test
Save:node\Macro_File.h \[4.1\] test file
Save:node\Macro_File.h \[4.2\] file list Test:
Save:node\Macro_File.h \[4.3\] Msg file
Save:node\Macro_File.h \[4.4\] Tmp File
// 5. rule
Save:node\Macro_File.h \[5.1\] rule
Save:node\Macro_File.h \[5.2\] search
Save:node\Macro_File.h \[5.3\] Group (不用)
Save:node\Macro_File.h \[5.4\] version (不稳定, 不用)
// 6. set
Save:node\Macro_File.h \[6.1\] set file
Save:node\Macro_File.h \[6.2\] tools file
Save:node\Macro_File.h \[6.3\] SVN BCmp git SI vim Office
// 7. 其他
Save:node\Macro_File.h \[7.1\] 禅道 展讯 MTK
Save:node\Macro_File.h \[7.2\] 参考标号:






[1.1] work file
//1) android:
Save:node\9820e\Macro_Note_9820es.h
//2) MTK SPR:
//	MTK, modis
Save:node\note\Macro_modis_MTK.h
Save:node\note\Macro_Note_MTK.h
//	6531E, modis
Save:node\note\Macro_modis_6531E.h
Save:node\note\Macro_Note_6531E.h
//	7701, modis
Save:node\note\Macro_Note_7701.h

//3) other:
Save:node\Project\Macro_A_Nav.h


[1.2] bak file
//1) 未整理:
Save:bak\bak_mtk_lang.h	
//2) 未改:
Save:bak\bak_mtk_weiti.h	
//3) bak文件:
Save:bak\bak_20181114_tmp_B_old.h
Save:bak\bak_20181123_git.h
	


[2.1] marco file
//1) path:
Save:Macro\
//2) f1~f12:
Save:Macro\sbd_f1.em
Save:Macro\sbd_f7.em
Save:Macro\sbd_f11.em  NoteHander
Save:Macro\sbd_ctrl.em
//3) tool:
Save:Macro\a_String.em


[2.2] set marco path
// 1) 改变Save路径, 宏命令才能正常使用:
Save:Macro\sbd_base.em	getSavePath(0)
Save:Macro\sbd_root_path.em  getRootPath(0)

// 2) 设置路径步骤:
Save:Set\Macro_Set_Help.h


[2.3] set work path
//1) 路径切换:
Save:Help\Macro_Help_Base.h  PathSwitchNode


[2.4] set file code
Save:Cmd_other\conv_cur_charset\
//添加转换目录:
//    用ue打开,或ansi
Save:Cmd_other\conv_cur_charset\conv_cur_ansi_to_utf8.vbs



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



[4.1] test file
Save:Help\Test\Macro_Tmp_Node_Test.h
Save:Help\Test\sbd_Tmp_Show.em
Save:Help\Test\Macro_Tmp_...
Save:Help\Test\...
Save:Help\Test\Tmp_Test.h
// Fxx功能测试:
Save:Help\Test\Macro_Test_F11.h
Save:Help\Test\Macro_Test_Path.h



[4.2] file list Test:
Save:Cmd\file___no_use\...
Save:Cmd\file___no_use\dir_getFile...
Save:Cmd\file___no_use\dir_getFile time.bat
Save:Cmd\file___no_use\dir_getFile_spr.bat
Save:Cmd\cmd_getFileList.bat
Save:Cmd_TXT\si_filelist.h


[4.3] Msg file
//1) Nv Msg
Save:node\set\Macro_Val.h
//2) Pic Path Msg
Save:node\set\Show_Pic_dir.h
//3) Key Msg
Save:node\Simple_CTRL_K.h


[4.4] Tmp File
Save:node\
//1) Tmp File
Save:node\Simple_CTRL_B.h
//2) Bcmp Tmp File
Save:node\Tmp_Comp_1.h
Save:node\Tmp_Comp_2.h
//3) 其他:
Save:bak\Macro_tmp.h
Save:Help\Test\Tmp_space.h


[5.1] rule
//1) rule 中文:
Save:node\rule\Macro_Rule_Han_file.h
//2) rule LCD+CAM 文件跳转:
Save:node\rule\Macro_Rule_Key_file_6531E.h
Save:node\rule\Macro_Rule_Key_file_7701.h
Save:node\rule\Macro_Rule_Key_file_6533.h
Save:node\rule\Macro_Rule_Key_file_MTK.h


[5.2] search
//1) search 所有宏:
Save:node\search\Macro_ALL_6531E.h
//2) search 9820e 所有文件:
Save:node\search\Macro_ALL_9820e_JAVA.h


[5.3] Group (不用)
Save:node\group\Macro_Group_Make_6531E.h


[5.4] version (不稳定, 不要用)
Save:node\version\si_version_6531e.h



[6.1] set file
//1) Common set
Save:set\Macro_Set.h
//   set--utf8: (现在用不上, 改编码用处理)
Save:set\Macro_Set.h 63
//2) 项目路径
Save:set\Macro_Set_Base.h
Save:set\Macro_Set_Help.h
//2) windows system Path
Save:node\Tmp_Common.h
//3) cur project
Save:set\Macro_Set_Note.h
//4) help
Save:set\Macro_Set_Note_Python.h  last_node


[6.2] tools file
Save:node\note\Macro_Note_Tools.h


[6.3] SVN BCmp git SI vim Office
//1) win:
Save:node\ToolsMsg\Macro_win.h
//   SVN cfg:
Save:node\ToolsMsg\Macro_win.h \[2.4\] SVN 配置

//2) BCmp 配置:
C:\Users\Administrator\AppData\Roaming\Scooter^Software\Beyond^Compare^4
//   BCmp:
Save:node\ToolsMsg\Macro_Bcomp.h

//3) SecureCRT:
Save:node\ToolsMsg\Macro_SecureCRT.h

//4) git:
Save:node\ToolsMsg\Macro_git.h

//5) SI:
Save:node\ToolsMsg\Macro_SI.h

//6) vim:
Save:node\ToolsMsg\Macro_vim.h
Save:node\ToolsMsg\Macro_MTK_FlashTool.h

//7) Cmd:
Save:node\ToolsMsg\Macro_Cmd.h

//8) Office:
Save:node\ToolsMsg\Macro_Office.h
	






[7.1] 禅道 展讯 MTK
//1) 禅道:
http://192.168.2.252/zentao/my/
//2) 展讯:
http://222.66.158.139:2008/cqweb/#
//3) MTK:
https://online.mediatek.com




[7.2] 参考标号:
//参考标号:
Save:Help\Test\Macro_Test_Node_Num.h
//样板文件:
Save:Help\Test\Macro_z_null.h




