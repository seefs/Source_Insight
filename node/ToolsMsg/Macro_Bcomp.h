

// ���뷽ʽ
//   Ĭ������ŷ��windows����
// ����>>�ļ���ʽ ���Ҳ��л��� �ڶ�����ǩҳ��ת���� �ڿ��µ������Ｔ�����ñ��뷽ʽ��


//�����ļ�:
open: C:\Program^Files\Beyond^Compare^4\BCompare.chm


//·��:
C:\Program Files\Beyond Compare 4\BCompare.exe


//�ļ��жԱȵ����ļ�:
//BCompare.exe /silent "@D:\tmp\compare_script.txt" "���Ƚ��ļ���1" "���Ƚ��ļ���2" "����ļ�"
BCompare.exe /silent "@E:\save\SI\Cmd_TXT\compare_script.txt" "F:\6531E_16A\MS_Customize\midi\ARM_2MB" "F:\6531G_16A_MP_W17.43.4\MS_Customize\midi\ARM_2MB" "E:\save\SI\Cmd_TXT\compare_re.txt"


Save:SI\Cmd_TXT\compare_script.txt
//	load "%1" "%2"
//	select all
//	filter "-.svn\"
//	expand all
//	compare rules-based
//	folder-report layout:xml  output-to:"%3"


�������ڴ�:
�ļ���/�ļ��Ա�:
BCompare.exe "F:\6531E_16A\MS_Customize\midi\ARM_2MB" "F:\6531G_16A_MP_W17.43.4\MS_Customize\midi\ARM_2MB"


//	�ĵ���
//	C:\Program Files\Beyond Compare 4\BCompare.chm
//
//	BCompare.exe
//
//	C:\Program Files\Beyond Compare 4\
//	BCompare.exe "C:\Left Folder" "C:\Right Folder"
//
//	BCompare.exe C:\Left.ext C:\Right.ext C:\Center.ext
//
//	����ͼ:
//	BCompare.exe "@C:\My Script.txt"
//
//	echo %1\BCompare.exe %2 %3
//
//	����:
//	E:\save\SI\Cmd\bcompare2.bat  "F:\6531DA_Btdialer\version" "F:\6531DA_Btdialer\version"
//	E:\save\SI\Cmd\cmd_base2.bat  "C:\\Program Files\\Beyond Compare 4\BCompare.exe" "F:\6531DA_Btdialer\version" "F:\6531DA_Btdialer\version"

E:\save\SI\Cmd\bcompare2.bat  "F:\6531DA_Btdialer\version" "F:\6531DA_Btdialer\version"


