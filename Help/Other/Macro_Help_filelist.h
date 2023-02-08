
### 配置
// 显示log级别
testParam = 0  //不要log
//testParam = 1  //显示少量log
//testParam = 2  //显示多数log
// 代码备注
Save:Help\Other\Macro_Help_SI.h  __log__

//  当前文件作为 命令--测试文件:
MiniTest = True



### 项目文件--引用
// __ref__
//		==>CtrlE                    # 模板跳转
//		====>OpenMiniTest           # MiniTest == True
Save:Macro\sbd_test.em  ref

//1) 选中(ref), 再ctrl+E
//传X清零--可能不显示log--刷新
ref  TestMsgX

// 可以打开 但是死机
//ref  Add_and_Remove_Project_Files

// win10 不卡
ref  Remove_File

ref  Remove_Project

// 可以打开 但是报错
//ref  Delete

ref  Delete_All_Clips
// 会删除下一个符号
//ref  Delete_Character


// 报错
//ref  Delete_Clip

ref  Delete_File

// 会删除当前行
//ref  Delete_Line


### sys-命令
// __sys__
Save:Macro\sbd_test.em  "sys"
// 参考说明
Save:node\ToolsMsg\Macro_SI.h  __node__

//传X清零--可能不显示log--刷新
sys  TestMsgX

// 可以打开 但是死机
sys  %f




### 项目文件--公式
// __func__
// 在help菜单中查找--macro lang
Save:Macro\sbd_test.em  func
// 参考说明
Save:node\ToolsMsg\Macro_SI.h  __node__

func  AddFileToProj  D:\save\SI\Help\Tmp\target\Tmp_Test_new.c
// AddFileToProj(hprj, "E:\\save\\SI\\Macro\\sbd_tmp.em")

func  RemoveFileFromProj  D:\save\SI\Help\Tmp\target\Tmp_Test_new.c
// RemoveFileFromProj(hprj, filename)

// GetEnv
func  GetEnv  NVITEM_DIR

// PutEnv--仅改了当前软件环境变量
func  PutEnv  NVITEM_DIR  G:\_HW_NV_PARA.git2
func  PutEnv  NVITEM_DIR  G:\_HW_NV_PARA.git

// RunCmd
// 调用宏
func  RunCmd  TestSiMro1
// 调用bat失败
//func  RunCmd  D:\save\SI\Cmd_other\add_env\set_env_hw_nv.bat

//Nil or path, fWait =1,不立即返回
//return 1-ok, 0-err
RunCmdLine (sCmdLine, sWorkingDirectory, fWait)

// StartMsg
StartMsg (s)

// Ask
Ask (prompt_string)

// GetProgramEnvironmentInfo
func  GetProEnvInfo  null
func  GetProEnvInfo  ProgramDir

// 预定义路径变量--不可用
func  GetEnv  APPDATA_DIR
func  GetReg  APPDATA_DIR



### 项目文件--文件总数  
// __cnt__

//f1->G 显示项目中一种文件类型数量, 空行显示文件总数
//	mk
//	//==>
//	mk: 5373
//
//	java
//	//==>
//	java: 38179

// 最好自动过滤文件

// 未实现 ref：比f1->G好用
ref  type  mk

 
cnt  Remove_File



### 变量
// __SiVer__
Save:Macro\sbd_root_path.em  getRootPath

// 设置当前软件环境变量
func  GetEnv  SI_VER
func  PutEnv  SI_VER  WIN10
func  PutEnv  SI_VER  WIN7
func  PutEnv  SI_VER  SUB10

// 修改当前软件环境变量
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\set_env_si_ver_win10.bat
Save:Cmd_other\add_env\set_env_si_ver_sub10.bat

// Special Constants
//	True       "1"
//	False      "0"
//	Nil        "" – the empty string.
//	hNil       "0" – an invalid handle value.
//	invalid    "-1" – an invalid index value.
 


### 其他shell
Save:Macro\sbd_test.em  shell_cmd
Save:Macro\sbd_test.em  shell_SvnLog
// 自动对比
//"C:\Program Files\Beyond Compare 4\BCompare.exe" E:\MT61D_ZYF\ ".\60M_11C_EX\"



