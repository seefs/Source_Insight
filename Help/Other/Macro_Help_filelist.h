
### ����
// ��ʾlog����
testParam = 0  //��Ҫlog
//testParam = 1  //��ʾ����log
//testParam = 2  //��ʾ����log
// ���뱸ע
Save:Help\Other\Macro_Help_SI.h  __log__

//  ��ǰ�ļ���Ϊ ����--�����ļ�:
MiniTest = True



### ��Ŀ�ļ�--����
// __ref__
//		==>CtrlE                    # ģ����ת
//		====>OpenMiniTest           # MiniTest == True
Save:Macro\sbd_test.em  ref

//1) ѡ��(ref), ��ctrl+E
//��X����--���ܲ���ʾlog--ˢ��
ref  TestMsgX

// ���Դ� ��������
//ref  Add_and_Remove_Project_Files

// win10 ����
ref  Remove_File

ref  Remove_Project

// ���Դ� ���Ǳ���
//ref  Delete

ref  Delete_All_Clips
// ��ɾ����һ������
//ref  Delete_Character


// ����
//ref  Delete_Clip

ref  Delete_File

// ��ɾ����ǰ��
//ref  Delete_Line


### sys-����
// __sys__
Save:Macro\sbd_test.em  "sys"
// �ο�˵��
Save:node\ToolsMsg\Macro_SI.h  __node__

//��X����--���ܲ���ʾlog--ˢ��
sys  TestMsgX

// ���Դ� ��������
sys  %f




### ��Ŀ�ļ�--��ʽ
// __func__
// ��help�˵��в���--macro lang
Save:Macro\sbd_test.em  func
// �ο�˵��
Save:node\ToolsMsg\Macro_SI.h  __node__

func  AddFileToProj  D:\save\SI\Help\Tmp\target\Tmp_Test_new.c
// AddFileToProj(hprj, "E:\\save\\SI\\Macro\\sbd_tmp.em")

func  RemoveFileFromProj  D:\save\SI\Help\Tmp\target\Tmp_Test_new.c
// RemoveFileFromProj(hprj, filename)

// GetEnv
func  GetEnv  NVITEM_DIR

// PutEnv--�����˵�ǰ�����������
func  PutEnv  NVITEM_DIR  G:\_HW_NV_PARA.git2
func  PutEnv  NVITEM_DIR  G:\_HW_NV_PARA.git

// RunCmd
// ���ú�
func  RunCmd  TestSiMro1
// ����batʧ��
//func  RunCmd  D:\save\SI\Cmd_other\add_env\set_env_hw_nv.bat

//Nil or path, fWait =1,����������
//return 1-ok, 0-err
RunCmdLine (sCmdLine, sWorkingDirectory, fWait)

// StartMsg
StartMsg (s)

// Ask
Ask (prompt_string)

// GetProgramEnvironmentInfo
func  GetProEnvInfo  null
func  GetProEnvInfo  ProgramDir

// Ԥ����·������--������
func  GetEnv  APPDATA_DIR
func  GetReg  APPDATA_DIR



### ��Ŀ�ļ�--�ļ�����  
// __cnt__

//f1->G ��ʾ��Ŀ��һ���ļ���������, ������ʾ�ļ�����
//	mk
//	//==>
//	mk: 5373
//
//	java
//	//==>
//	java: 38179

// ����Զ������ļ�

// δʵ�� ref����f1->G����
ref  type  mk

 
cnt  Remove_File



### ����
// __SiVer__
Save:Macro\sbd_root_path.em  getRootPath

// ���õ�ǰ�����������
func  GetEnv  SI_VER
func  PutEnv  SI_VER  WIN10
func  PutEnv  SI_VER  WIN7
func  PutEnv  SI_VER  SUB10

// �޸ĵ�ǰ�����������
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\set_env_si_ver_win10.bat
Save:Cmd_other\add_env\set_env_si_ver_sub10.bat

// Special Constants
//	True       "1"
//	False      "0"
//	Nil        "" �C the empty string.
//	hNil       "0" �C an invalid handle value.
//	invalid    "-1" �C an invalid index value.
 


### ����shell
Save:Macro\sbd_test.em  shell_cmd
Save:Macro\sbd_test.em  shell_SvnLog
// �Զ��Ա�
//"C:\Program Files\Beyond Compare 4\BCompare.exe" E:\MT61D_ZYF\ ".\60M_11C_EX\"



