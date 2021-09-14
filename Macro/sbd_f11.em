
macro _NoteTest(hbuf, cNum)
{
	//no use
	NoteHander(hbuf, cNum, 0)
}
macro Note()
{
	//_TempHeadF11(hbuf)
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	
	sel = MGetWndSel(hbuf)
	isN = FALSE  //ѡ��->��ʾ��ע ������;���󣬸�Ϊֻ��mk,mak,def�ļ�����
	if(IsMakeFile(hbuf))
	{
		isN = TRUE
	}
	if (isN && IsSingleSelect(sel))
	{
		//1. ѡ��������,     ��ʾ����Ӻ�˵��
		//2. ѡ�񲿷ֹؼ���,    ��ʾ����Ӵ�˵��; 
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
			
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		if(cur_sel == GetWholeMacro(cur_line, sel))
		{
			LongNote(hbuf, cur_sel)
		}
		else
		{
			ShortNote(hbuf, cur_sel)
		}
	}
	else if(isN && IsMoreSelect(sel))
	{
		//3. ��ѡ�����
		//	LCD_NV3029G_SANLONG_CPT2	= TRUE
		//	LCD_GC9306_YIHUA_HSD      = TRUE
		//	LCD_GC9305_SANLONG_HSD2 = TRUE
		//��ʾ:
		//	NV3029G	����+CPT
		//	GC9306	�ڻ�
		//	GC9305	����+HSD
		//��ȷ�ϣ������������ݵ����а壬��ճ�������˵�����С�
		nTxt = ""
		i = sel.lnFirst
		while (i <= sel.lnLast)
		{
			line = GetBufLine(hbuf, i)
			iMacro = GetLineMacro(line)
			iNote = GetMediumNote(iMacro)
			
			if(iNote != "")
			{
				nTxt = nTxt # iNote # CharFromKey(13)
			}
			i = i + 1
		}
		if(nTxt != "")
		{
			msg("@nTxt@")
			SetClipString(nTxt)
		}
	}
	else
	{
		isSaveRow = 1
		bft = getBft(3)
//		if(bft == "")
//			stop

		openNoteFile(hbuf, bft, isSaveRow)
	}
}

macro openNoteFile(hbuf, bft, isSaveRow)
{
	if(bft == "Pythons")
	{
		mFile = getProjectPythons(0) # "\\Macro_Note_@bft@.h"
	}
	else if(bft == "9820e")
	{
		mFile = getProjectAndroid(0) # "\\Macro_Note_@bft@.h"
	}
	else
	{
		mFile = getProjectC(0) # "\\Macro_Note_@bft@.h"
	}
	
	if(IsFileName(hbuf, mFile))
	{
		if(isSaveRow == 0)
		{
			hwnd = GetCurrentWnd()
			lnTop = GetWndVertScroll(hwnd);
			SaveMode(getWndVertRow(0), "@lnTop@")
		}
		close
	}
	else
	{
		if(isSaveRow == 0)
		{
			lnTop = ReadMode(getWndVertRow(0))
			OpenExistFileRow(mFile, lnTop)
		}
		else
		{
			OpenExistFileRow(mFile, 0)
		}
	}
}

macro LongNote(hbuf, key)
{
	//_TempHeadF11(hbuf)
	nTxt = GetLongNote(key)
	if(nTxt == "")
	{
		nTxt = GetMediumNote(key)
	}
	if(nTxt != "")
	{
		ntStr = "@key@:" # CharFromKey(13)
		ntStr = ntStr # nTxt # CharFromKey(13)
		msg("@ntStr@")
		SetClipString(nTxt)
	}
	else //add noto
	{
		grMsg = "Add Long Note, Macro: @key@" # CharFromKey(13)
		ntStr = Ask("@grMsg@")
		
		ntRule = OpenCache(getNodePath(0) # "\\note\\Macro_Note_Long.h")
		ntStr = "key:@key@,@ntStr@"
		AppendBufLine(ntRule, "@ntStr@")
		SaveBuf(ntRule)
		CloseBuf(ntRule)
	}
}

macro GetLongNote(key)
{
	//_TempHeadF11(hbuf)
	mFile = getNodePath(0) # "\\note\\Macro_Note_Long.h"
	mBuf = OpenCache(mFile)
	mKey = "key:" # key # ","
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	nTxt = ""

	while (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ich = SplitMacro(line, ",", 0, ilen)		
		nTxt   = strmid(line, ich + 1, ilen) # CharFromKey(13)
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
	}
	CloseBuf(mBuf)
	return nTxt
}

macro GetMediumNote(key)
{
	//_TempHeadF11(hbuf)
	mFile = getNodePath(0) # "\\note\\Macro_Note_Short.h"
	mBuf = OpenCache(mFile)
	nTxt = ""
	
	klen = strlen(key)
	iStart = 0
	ichKey = SplitMacro(key, "_", iStart, klen)
	while (1)
	{
		if(ichKey >= 0)
		{
			ikey = strmid(key, iStart, ichKey)
		}
		else
		{
			ikey = strmid(key, iStart, klen)
		}
		iStart = ichKey + 1
		
		mKey = "key:" # ikey # ","
		mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
		if (mSel != "")
		{
			line = GetBufLine(mBuf, mSel.lnFirst )
			ilen = strlen(line)
			
			ich = SplitMacro(line, ",", 0, ilen)
			if (ich > 0)
			{
				nTxt = nTxt # strmid(line, ich + 1, ilen)
			}
		}
		if(ichKey < 0)
		{
			break
		}
		ichKey = SplitMacro(key, "_", iStart, klen)
	}
	CloseBuf(mBuf)
	return nTxt
}

macro ShortNote(hbuf, key)
{
	//_TempHeadF11(hbuf)
	nTxt = GetShortNote(key)
	if(nTxt != "")
	{
		ntStr = "@key@:" # CharFromKey(13)
		ntStr = ntStr # nTxt # CharFromKey(13)
		msg("@ntStr@")
		SetClipString(nTxt)
	}
	else //add noto
	{
		grMsg = "Add Short Note, Macro: @key@" # CharFromKey(13)
		ntStr = Ask("@grMsg@")
		tabStr = CharFromKey(9)
		
		ntRule = OpenCache(getNodePath(0) # "\\note\\Macro_Note_Short.h")
		ntStr = "key:@key@,@tabStr@@ntStr@"
		AppendBufLine(ntRule, "@ntStr@")
		SaveBuf(ntRule)
		CloseBuf(ntRule)
	}
}

macro GetShortNote(key)
{
	//_TempHeadF11(hbuf)
	mFile = getNodePath(0) # "\\note\\Macro_Note_Short.h"
	mBuf = OpenCache(mFile)
	mKey = "key:" # key # ","
	mSel = SearchInBuf(mBuf, key, 0, 0, FALSE, FALSE, FALSE)
	nTxt = ""

	if (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ich = SplitMacro(line, ",", 0, ilen)
		if (ich > 0)
		{
			nTxt   = strmid(line, ich + 1, ilen)
		}
	}
	CloseBuf(mBuf)
	return nTxt
}

//Note press F5,F6,CtrlE,CtrlR
macro NoteHander(hbuf, cNum, prompt)
{
	// cmd = 4, 5 or 6
	
	var cur_line
	var noteCmd
	var noteWord
	var rootPath //��·��, cmd cd�����Ŀ¼
	var curPath
	var lastStr
	
	//����: ��1���ַ�--�������ơ���2���ַ�--·������3���ַ�--�ؼ���
	var firstS
	var firstE
	var secondS
	var secondE
	var thirdS
	var thirdE
	
	var cur_row
	var isCmd
	
	//��ʾlog, ����ϻصļ�¼, ������һ�ξͿ�����
	TestMsg("��X����", "X")
	
	sel = MGetWndSel(hbuf)
	cur_line = GetBufLine(hbuf, sel.lnFirst )
	cur_row = sel.lnFirst

	//ɾ�����׿ո�
	firstS = StartWS(cur_line, 0 )
	if (firstS == "X")
		stop
	else if (firstS > 0)
		cur_line = strmid(cur_line, firstS, strlen(cur_line))
	len = strlen(cur_line)

	// ȡ��1���ַ�--��������, ��":"��" "�ֿ�
	firstE = GetHeadIndex(hbuf, cur_line)
	if (firstE != "X")
	{
		noteCmd = strmid(cur_line, 0, firstE)
		isCmd = 0

		//��ͨ�ı���ֹ�˺�·���޹صĲ���(prompt)
		
		//type6: [0, 1], -, - (priority)
		if(IsTransHead(hbuf, noteCmd)==1)
			isCmd = 6
			
		//type1:  -, [1], -, -
		else if(prompt == 0 && (noteCmd == "open"  || noteCmd == "test" || noteCmd == "setPath" || noteCmd == "setProPath" || noteCmd == "sethistory"
			 || noteCmd == "cp" || noteCmd == "cprow" || noteCmd == "RAR"))
			isCmd = 1

		//type2: [0, 1, 2, 3] (only copy)
		else if(prompt == 0 && (noteCmd == "make" || noteCmd == "ctmake" || noteCmd == "xmake"))
			isCmd = 2
			
		//type3: -, [1, 2, 3]
		else if(prompt == 0 && (noteCmd == "set"  || noteCmd == "vc" || noteCmd == "vs08"))
			isCmd = 3
			
		//type4: -, -, [2, 3]
		else if(prompt == 0 && (noteCmd == "python" || noteCmd == "python_w" || noteCmd == "FileSame" || noteCmd == "AsFile"  || noteCmd == "EcFile"
			 || noteCmd == "cd" || noteCmd == "cd_i"))
			isCmd = 4
			
		//type7: -, [1, 2, 3]
		else if(noteCmd == "cmd_f" || noteCmd == "cmd_w" || noteCmd == "cmd_s")
			isCmd = 7
			
		//type5: [0, 1], -, -
		//  add all replace words:
		else if(noteCmd == "Save" || noteCmd == "App")
			isCmd = 5
			
		//type5: [0, 1], -, -
		else if(prompt == 0 && strlen(noteCmd)==1)
			isCmd = 5
			
		//������ת��: ɾ���ո�
		secondS = GetTransCmdS(cur_line, firstE + 1, len)
		secondE = GetTransCmdE(cur_line, secondS,     len)
		thirdS  = GetTransCmdS2(cur_line, secondE + 1, len)
		thirdE  = GetTransCmdE(cur_line, thirdS,     len)
		
		if (isCmd == 1)
			curPath = strmid(cur_line, secondS, secondE)	// -, [1], -, -
		else if (isCmd == 2)
			curPath = cur_line						// [0, 1, 2, 3]
		else if (isCmd == 3)
		{
			// ȥ��1��head(·������)
			// cur_line--> "vs08:base:MoDIS_VC9\MoDIS.sln"
			// cur_line--> "     base:MoDIS_VC9\MoDIS.sln"
			// next2-----> "     base "
			curPath = strmid(cur_line, secondS, len)	// -, [1, 2, 3]
			index2 = GetHeadIndex(hbuf, curPath)
			if (index2 != "X")
			{
				// noteCmd2---> "   base "
				// curPath----> "     ...MoDIS_VC9\MoDIS.sln"
				noteCmd2 = strmid(curPath, 0, index2)
				if(IsTransHead(hbuf, noteCmd2)==1)
					curPath = ReTransHead(hbuf, noteCmd2, curPath)
			}
		}
		else if (isCmd == 4)
		{
			// ȥ��2��head(·������, �ұ��ü�·��)
			// cur_line--> "cd:tmp: git clone https://github.com/Rukey7/MvpApp"
			// cur_line--> "   tmp: git clone https://github.com/Rukey7/MvpApp"
			// next2-----> "   tmp "
			curPath = strmid(cur_line, secondS, len)	// -, -, [2, 3] (·��ת��������)
			secondE = GetHeadIndex(hbuf, curPath)
			if (secondE != "X")
			{
				// noteCmd2---> "   tmp "
				// rootPath---> "   tmp... "
				// curPath----> "       git clone https://github.com/Rukey7/MvpApp"
				noteCmd2 = strmid(curPath, 0, secondE)
				if(IsTransHead(hbuf, noteCmd2)==1)
				{
					rootPath = ReTransHead(hbuf, noteCmd2, noteCmd2 # ":")
					thirdS   = GetTransCmdS2(cur_line, secondS + secondE + 1, len)
					curPath  = strmid(cur_line, thirdS, len)
				}
			}
			else {
				// python xxx        --> ����������
				// python_w:tool xxx --> ��������
			}
			//����ֻ�� rootPath
		}
		else if (isCmd == 5)
			curPath = strmid(cur_line, 0, secondE)		// [0, 1], -, -
		else if (isCmd == 6)
		{
			curPath = strmid(cur_line, 0, secondE)		// [0, 1], -, -
			//·���滻: Tool1->Tool1Path, Tool2->Tool2Path
			curPath = ReTransHead(hbuf, noteCmd, curPath)
		}
		else if (isCmd == 7)
		{
			// ȥ��һ��head(·�����ұ��м�)
			// cur_line--> "cmd_f: ren base:g_rougang_5.h base:g_rougang_5.0.h"
			// cur_line--> "       ren base:g_rougang_5.h base:g_rougang_5.0.h"
			// next2-----> "   tmp "
			curPath = strmid(cur_line, secondS, len)	// -, [1, 2, 3] (·��ת��������)
			curPath = ReAllTransHead(hbuf, curPath)
		}
		else
		{
			curPath = noteCmd						// [0], 1, 2, 3
			noteCmd = ""
		}
			
		//goto word and Select
		//��ȡ�ؼ���(ʣ���)
		//  ��ֹ���߽�
		if (isCmd == 0)
		{
			noteWord = GetTransStr(cur_line, secondS, secondE)
		}
		else if (isCmd == 1 || isCmd == 5 || isCmd == 6)
		{
			noteWord = GetTransStr(cur_line, thirdS, thirdE)
		}
		else if (isCmd == 2 || isCmd == 3 || isCmd == 4 || isCmd == 7)
		{
			noteWord = ""
		}
		else
		{
			stop
		}

		//use "^" as space
		noteWord = ReplaceWord(noteWord, "^", " ")
		//-- �� # �� �� // ����Ϊע�Ͳ�����
		if(LFindString(noteWord, "--") != "X" || LFindString(noteWord, "#") != "X" || LFindString(noteWord, "//") != "X")
			noteWord = ""

		// ��ͨ�ĵ���Ҫ����
		if(prompt == 0) {
			//���� (��=)value �����а�; ������ctrl+T�滻��ֵ
			lnVar = GetLineValue(cur_line)
			if(lnVar != "")
			{
				SetClipString(lnVar)
			}
		}

		//only chg value name
		cmdP1 = curPath
		cmdP2 = noteWord
	}
	else
	{
		curPath = cur_line
		noteCmd = ""
		noteWord = ""
	}
	TestMsg(isCmd # "," # noteCmd  # "��" # CharFromKey(13) # curPath # CharFromKey(13) # noteWord, 2)

	//����˵����
	//open:    �����ʼ�; ��exe; ���ļ�+�ؼ���; ��Macro_��ͷ�ļ���ֻ����������ļ�
	//cmd:     ����cmd���� ������cmd
	//make:    ����cmd����
	//python:  ����cmd����
	//ctmake:  ������cmd����, ֻ����
	//xmake:   ������cmd����, ֻ����
	//vc:      
	//vs08:    
	//set: 
	//setPath: 
	//setProPath: 
	//sethistory: 
	//cp:      �����ļ�
	//cd:tmp: git ...
	//cd_i:tmp: git ...
	//Ĭ��:
	//

	if (isCmd == 6)
	{
		// (priority)
		//���ļ���Ŀ¼
		OpenFileHander(hbuf, curPath, cur_row, noteWord, cNum, prompt)
	}
	else if(noteCmd == "open")
	{
		//�ļ���ת��:
		//ת��"Save:"�����ָ�Ŀ¼�������ĿĿ¼���滻"^"Ϊ�ո�
		curPath = GetTransFileName(hbuf, curPath, cNum)
		
		//open tools or file
		NoteOpenFile(hbuf, curPath, noteWord)
	}
//	else if(noteCmd == "cmd")
//	{
//		//open file
//		//  ���ܹرգ��ò��ϡ���cmd_s����
//		SetClipSimpleString(curPath)
//		TestMsg("cmd" # CharFromKey(13) # getBasePath(hbuf) # "\\cmd", 2)
//		ShellExecute("open", getBasePath(hbuf) # "\\cmd", "", "", 1)
//	}
	else if(noteCmd == "cmd_w" || noteCmd == "cmd_s")
	{
		TestMsg("cmd_w" # CharFromKey(13) # curPath, 2)
		NoteCurCmd(hbuf, noteCmd, curPath)
	}
	else if(noteCmd == "cmd_f")
	{
		TestMsg("cmd_f" # CharFromKey(13) # curPath, 2)
		NoteInCmd(hbuf, noteCmd, curPath)
	}
	else if(noteCmd == "python" || noteCmd == "python_w")
	{
		//python: 
		TestMsg(noteCmd # CharFromKey(13) # rootPath # CharFromKey(13) # curPath, 2)
		NotePythonCmd(hbuf, noteCmd, rootPath, curPath)
	}
	else if(noteCmd == "cd" || noteCmd == "cd_i")
	{
		//cd: 
		//	cd:tmp: git clone https://github.com/xxx
		TestMsg(noteCmd # CharFromKey(13) # rootPath # CharFromKey(13) # curPath, 2)
		NoteCmdCd(hbuf, noteCmd, rootPath, curPath)
	}
	else if(noteCmd == "test")
	{
		msgStr = curPath
		TestNodeMsg(msgStr)
	}
	//type2: 
	else if(noteCmd == "make")
	{
		//make...
		SetClipSimpleString(curPath)
		TestMsg("make" # CharFromKey(13) # curPath, 2)
		ShellExecute("open", getBasePath(hbuf) # "\\cmd", "", "", 1)
	}
	else if(noteCmd == "ctmake" || noteCmd == "xmake")
	{
		//ctmake...
		SetClipSimpleString(curPath)
		TestMsg("ctmake" # CharFromKey(13) # curPath, 2)
	}
	//type3: 
	else if(noteCmd == "vc")
	{
		vcPath = getVCPath(0)
		TestMsg("vc" # CharFromKey(13) # vcPath # CharFromKey(13) # getBasePath(hbuf)# "\\" # curPath, 2)
		re = ShellExecute("open", vcPath, getBasePath(hbuf) # "\\" # curPath, "", 1)
		if(!re){
			SetClipSimpleString("vc" # CharFromKey(13) # vcPath # CharFromKey(13) # getBasePath(hbuf)# "\\" # curPath)
		}
	}
	else if(noteCmd == "vs08")
	{
		vcPath = getVS08Path(0)
		TestMsg("vs08" # CharFromKey(13) # vcPath # CharFromKey(13) # getBasePath(hbuf)# "\\" # curPath, 2)
		re = ShellExecute("open", vcPath, getBasePath(hbuf) # "\\" # curPath, "", 1)
		if(!re){
			SetClipSimpleString("vs08" # CharFromKey(13) # vcPath # CharFromKey(13) # getBasePath(hbuf)# "\\" # curPath)
		}
	}
	else if(noteCmd == getMarBasePath(0)) //"basePath"
	{
		//android service path: basePath = F:\9820e 
		lnVar = GetLineValue(cur_line)
		SaveMode(getNoteBasePath(0), "@lnVar@")
		pmsg = "Set Ok : " # CharFromKey(13) # lnVar
		msg(pmsg)
	}
	//type3:
	else if(noteCmd == "set")
	{
		//curPath:��set�����str
		SetNoteHander(hbuf, curPath, cur_row, 0)
	}
	//type1:
	else if(noteCmd == "setPath")
	{
		//��ʼ·���б��滻
		SetPathNoteHander(hbuf, cmdP1, cur_row)
	}
	else if(noteCmd == "setProPath")
	{
		msg("setPath���滻�б�, ��ʱ�������滻")
	}
	else if(noteCmd == "sethistory")
	{
		SetNoteHistory(hbuf)
	}
	else if(noteCmd == "cp")
	{
		//cp
		//ǰ��cmdP1��ɾ�����ַ�("cp")
		NoteCopyFile(hbuf, cmdP1, cmdP2, cNum)
	}
	else if(noteCmd == "cprow")
	{
		//cp
		//ǰ��cmdP1��ɾ�����ַ�("cp")
		NoteCopyRowFile(hbuf, cmdP1, cmdP2, cNum)
	}
	else if(noteCmd == "RAR")
	{
		//RAR
		//������ת��: ɾ���ո�
		NoteRARFile(hbuf, cmdP1, cmdP2, cNum)
	}
	else if(noteCmd == "FileSame")
	{
		//FileList, not check "..."
		curPath = GetTransFileName(hbuf, curPath, cNum)
		NoteShowLikeFile(hbuf, curPath, cur_row, 7, 1)
	}
	else if(noteCmd == "AsFile")
	{
		curPath = GetTransFileName(hbuf, rootPath, cNum)
		ShellGetAsFileList(curPath # " "  # cNum)
	}
	else if(noteCmd == "EcFile")
	{
		curPath = GetTransFileName(hbuf, rootPath, cNum)
		ShellGetEcFileList(curPath # " "  # cNum)
	}
	else
	{
		//���ļ���Ŀ¼
		return OpenFileHander(hbuf, curPath, cur_row, noteWord, cNum, prompt)
	}
	return 0
}

macro OpenFileHander(hbuf, curPath, cur_row, noteWord, cNum, prompt)
{
	//1. �ļ���ת��:
	//ת��"Save:"�����ָ�Ŀ¼�������ĿĿ¼���滻"^"Ϊ�ո�
	curPath = GetTransFileName(hbuf, curPath, cNum)
	
	//2. ��ʾ�����ļ���: ��"..."��β
	if(NoteShowLikeFile(hbuf, curPath, cur_row, cNum, 0))
		return 0

	//3. ���ƹؼ���--��·��("[Path]"), �ص�Ŀ¼("[Base]"), ��һ��("[Next]")
	if(GetTransWord(hbuf, curPath, noteWord))
		return 0

	TestMsg("���ļ�: " # CharFromKey(13) # curPath # CharFromKey(13) # noteWord, 2)
	hbuf = OpenExistFile(curPath)
	
	if (hbuf != hNil){
		if(noteWord == "")
			return 0
			
		//4. Ĭ��������һ������, ����ͨ����(��ͨ���); ��$������β
		NoteScroll(hbuf, curPath, noteWord)
	}
	else if(IsFileType(curPath, ".py"))
	{
		//5. ��"Macro_"�ļ���, ��Ĭ��Ŀ¼�������ļ�
		strDefFile = getBaseDir(curPath, 0) # "\\Macro_z_null.py"
		isF = IsExistFile(strDefFile)
		if(!isF)
			strDefFile = getCopyPath(0) # "\\Macro_z_null.py"

		cmdStr = "copy " # strDefFile # " " # curPath
		TestMsg("�ļ�������, ��ģ��copy�ļ�: " # CharFromKey(13) # cmdStr, 2)
		msg(cmdStr)
		ShellOpenCustomCmd(cmdStr)
	}
	else if(IsFileLeft(curPath, "tmp_"))
	{
		//8. ʹ�ÿ�ģ��
		strDefFile = getCopyPath(0) # "\\Macro_z_null.h"
		// ��ʾ�ã����1��
		curPath = ReplaceWord(curPath, "/", "\\")
		cmdStr = "copy " # strDefFile # " " # curPath
		TestMsg("��ģ��copy�ļ�: " # CharFromKey(13) # cmdStr, 0)
		ShellOpenCustomCmd(cmdStr)
	}
	else
	{
		//6. �ļ���ʧ��, ��ΪĿ¼��
		ret = ShellExecute("explore", curPath, "", "", 1)
		//Ŀ¼��ʧ��
		if(ret == 0){
			pmsg = "Open failed : " # CharFromKey(13) # curPath
			//�������ʾ
			//msg(pmsg)

			mI = RFindString(curPath, "Macro_")
			if(mI != "X")
			{
				//7. "Macro_"�ļ�, ��Ĭ��Ŀ¼�������ļ�
				strDefFile = strmid(curPath, 0, mI) # "Macro_z_index.h"
				isF = IsExistFile(strDefFile)
				if(!isF)
					strDefFile = getCopyPath(0) # "\\Macro_z_index.h"

				cmdStr = "copy " # strDefFile # " " # curPath
				TestMsg("��ģ��copy�ļ�: " # CharFromKey(13) # cmdStr, 0)
				ShellOpenCustomCmd(cmdStr)
			}
			else if(IsFileType(curPath, ".h"))
			{
				//8. ʹ�ÿ�ģ��
				strDefFile = getCopyPath(0) # "\\Macro_z_null.h"
				// ��ʾ�ã����1��
				cmdStr = "copy " # strDefFile # " " # curPath
				TestMsg("��ģ��copy�ļ�: " # CharFromKey(13) # cmdStr, 0)
				ShellOpenCustomCmd(cmdStr)
			}
			else if(IsFileType(curPath, ".xml"))
			{
				//8. ʹ�ÿ�ģ��
				strDefFile = getCopyPath(0) # "\\default_file.xml"
				// ��ʾ�ã����1��
				cmdStr = "copy " # strDefFile # " " # curPath
				TestMsg("��ģ��copy�ļ�: " # CharFromKey(13) # cmdStr, 0)
				ShellOpenCustomCmd(cmdStr)
			}
			else if(IsFileType(curPath, ".java") || IsFileType(curPath, ".kt"))
			{
				if(IsFileType(curPath, ".java"))
				{
					strDefFile = getCopyPath(0) # "\\default_file.java"
				}
				else if(IsFileType(curPath, ".kt"))
				{
					strDefFile = getCopyPath(0) # "\\default_file.kt"
				}
				// ��ʾ�ã����1��
				cmdStr = "copy " # strDefFile # " " # curPath
				TestMsg("��ģ��copy�ļ�: " # CharFromKey(13) # cmdStr, 0)
				ShellOpenCustomCmd(cmdStr)
			}
			else if(prompt > 0)
			{
				return 1
			}
			else
			{
				//8. ��ʾ�ļ�����ʧ��
				msg(pmsg)
			}
		}
	}
	return 0
}

//���б��滻Ϊ���б�,�ո�ֿ�
macro SetNoteHander(hbuf, lastCmd, cur_row, cNum)
{
	//����ʷ·��������, �ȹر�; ������һ���ļ� 
	if(IsFileName(hbuf, "Macro_Set_Note.h"))
	{
		close
		hbuf = GetCurrentBuf()
		if(IsFileName(hbuf, "Macro_Note_"))
			stop
		cNum = 0
	}
	else
	{
		if(cNum != 6)
		{
			//save
			SaveNoteHistory("set " # lastCmd)
		}
	}
	
	//msg("-" # lastCmd # "-")
	var lastBaseCmd
	lastBaseCmd = ReadMode(getNoteHanderSet(0))
	if(lastBaseCmd == lastCmd)
	{
		msg("�¾��ļ�����ͬ,   ���滻: " # CharFromKey(13) # lastCmd)
		stop
	}
	if(cNum == 6)
		msg("����Ĭ��: " # CharFromKey(13) # "��:    " # lastBaseCmd # CharFromKey(13) # "��:     " # lastCmd)
	else
		msg("��ʼ�滻: " # CharFromKey(13) # "��:    " # lastBaseCmd # CharFromKey(13) # "��:     " # lastCmd)
		
	SaveMode(getNoteHanderSet(0), "@lastCmd@")
	if(cNum == 6)
		stop
	
	{
		//������־
		noteWord = "setEnd:"
		mSel = SearchInBuf(hbuf, "@noteWord@", 0, 0, 0, 0, 0)
		if (mSel != "")
		{
			cur_row = mSel.lnFirst
		}
		else
		{
			cur_row = cur_row + 8
		}
	}
	
	len = strlen(lastCmd)
	lenB = strlen(lastBaseCmd)
	if (0 == len || 0 == lenB)
		stop
	i = 0
	iB = 0
	while (1)
	{
		//���¾��б���滻�ַ�
		next = NextWS(lastCmd, i)
		nextB = NextWS(lastBaseCmd, iB)
//		msg("-" # lastBaseCmd # "-" # next # "-" # nextB # "-")
		if (next == "X" || nextB == "X")
		{
			//���һ���滻
			if (next == "X")
				next = len
			if (nextB == "X")
				nextB = lenB
			noteWord = strmid(lastCmd, i, next)
			noteWordB = strmid(lastBaseCmd, iB, nextB)
			index = FindString( noteWord, noteWordB )
			if(index == "X")
				DoReplaceRow(hbuf, noteWordB, noteWord, cur_row + 1, FALSE)
			SaveBuf(hbuf) //�����α���, �����������
			break
		}
		else
		{
			noteWord = strmid(lastCmd, i, next)
			noteWordB = strmid(lastBaseCmd, iB, nextB)
			index = FindString( noteWord, noteWordB )
			if(index == "X")
				DoReplaceRow(hbuf, noteWordB, noteWord, cur_row + 1, FALSE)
			SaveBuf(hbuf) //�����α���, �����������
		}
		start = StartWS( lastCmd, next + 1 )
		startB = StartWS( lastBaseCmd, nextB + 1 )
		i = start
		iB = startB
	}
}

//���б��滻Ϊ���б�,�ո�ֿ�
macro SetPathNoteHander(hbuf, cmdStr, cur_row)
{
	TestMsg(cmdStr, 2)
	var setItem
	
	{
		//������־
		mKey = "setEnd:"
		mSel = SearchInBuf(hbuf, "@mKey@", 0, 0, 0, 0, 0)
		if (mSel != "")
		{
			cur_row = mSel.lnFirst
		}
		else
		{
			cur_row = cur_row + 8
		}
	}
	{
		//��Ŀ·�� (�ϲ��������滻����)
		mKey = "CurProPath"
		curProPath = getMacroValue(hbuf, mKey, 1)
	}

	//�����滻�б�, �������ע�͵�
	mKey = "^" # "setProPath"
	lenKey = strlen("setProPath")
	mSel = SearchInBuf(hbuf, mKey, 0, 0, FALSE, TRUE, FALSE)
	nTxt = ""

	setItem = ""
	while (mSel != "")
	{
		line = GetBufLine(hbuf, mSel.lnFirst )
		ilen = strlen(line)

		//��һ���ǿ�
		start = StartWS(line, lenKey)
		if (start != "X")
		{
			setItem = strmid(line, start, strlen(line))
			lnMar = GetLineMacro(setItem)
			lnVar = curProPath # "\\\\" # GetLineValue(setItem)
			
			if (cmdStr == "new")
			{
			 	//·����������б��
				lnMar = "^" # ReplaceWord(lnMar, "\\\\", "[\\\\/]")
				
			 	//�滻����ȥ��һ����б��
				lnVar = ReplaceWord(lnVar, "\\\\", "\\")
				
				//msg("[" # lnMar # "]" # CharFromKey(13) # "[" # lnVar # "]")
				
			 	//isRule = TRUE: ���ò����б�������滻;������滻�������б�
				DoReplaceRow(hbuf, lnMar, lnVar, cur_row + 1, TRUE)
				//�����α���, �����������
				SaveBuf(hbuf)
			}
			else if (cmdStr == "old")
			{
			 	//·����������б��
				lnVar = "^" # ReplaceWord(lnVar, "\\\\", "[\\\\/]")
				
			 	//�滻����ȥ��һ����б��
				lnMar = ReplaceWord(lnMar, "\\\\", "\\")
				
				//msg("[" # lnVar # "]" # CharFromKey(13) # "[" # lnMar # "]")
				
			 	//isRule = TRUE: ���ò����б�������滻;������滻�������б�
				DoReplaceRow(hbuf, lnVar, lnMar, cur_row + 1, TRUE)
				//�����α���, �����������
				SaveBuf(hbuf)
			}
		}
		
		mSel = SearchInBuf(hbuf, mKey, mSel.lnLast+1, 0, FALSE, TRUE, FALSE)
	}

}

macro SetNoteHistory(hbuf)
{
	bft = getBft(3)
//		if(bft == "")
//			stop

	mBuf = OpenCache(getSetPath(0) # "\\Macro_Set_Note.h")
	mKey = bft # ":"
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	len = strlen(mKey)
	nTxt = "Macro_Set_Note.h" # " "  # bft # " :" # CharFromKey(13)
	count = 1

	while (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
			
		nTxt   = nTxt # count # "." # strmid(line, len, ilen) # CharFromKey(13)
		count = count + 1
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
	}
	CloseBuf(mBuf)
	
	if(count-1<1)
		stop
		
	msg(nTxt)
	key = GetKeyExt(count - 1)
	if (key>0)
	{
		curSet = GetNoteHistory(bft, key)

		//insert line
		sel = MGetWndSel(hbuf)
		InsBufLine(hbuf, sel.lnFirst + 1, "@curSet@")
		SaveBuf(hbuf)
	}
}

macro GetNoteHistory(bft, mIndex)
{
	mBuf = OpenCache(getSetPath(0) # "\\Macro_Set_Note.h")
	mKey = bft # ":"
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	len = strlen(mKey)
	
	index = 1
	curItem = ""

	while (mSel != "")
	{
		if(index == mIndex)
		{
			line = GetBufLine(mBuf, mSel.lnFirst )
			ilen = strlen(line)
			
			curItem = strmid(line, len, ilen) # CharFromKey(13)
			break
		}
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
		index = index + 1
	}
	CloseBuf(mBuf)
	return curItem
}

macro SaveNoteHistory(cur_line)
{
	bft = getBft(3)
//		if(bft == "")
//			stop
	
	mBuf = OpenCache(getSetPath(0) # "\\Macro_Set_Note.h")
	
	mKey = cur_line //set^aa^bb^cc
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	if (mSel == "")
	{
		mProKey = bft # "-note-set" //mtk-note-set
		mProSel = SearchInBuf(mBuf, mProKey, 0, 0, FALSE, FALSE, FALSE)
		if (mProSel == "")
		{
			AppendBufLine(mBuf, mProKey)
			AppendBufLine(mBuf, mKey)
		}
		else
		{
			InsBufLine(mBuf, mProSel.lnFirst + 1, "@mKey@")
		}
		SaveBuf(mBuf)
	}
	
	CloseBuf(mBuf)
}
	
macro NoteCopyFile(hbuf, cmdP1, cmdP2, cNum)
{
	cmdP1 = ReAllTransHead(hbuf, cmdP1)
	cmdP2 = ReAllTransHead(hbuf, cmdP2)
	
	TestMsg("copy (file1->file2):" # CharFromKey(13) # cmdP1  
			# CharFromKey(13) # cmdP2 # "", 1)
			
	//�ļ���ת��:
	//ת��"Save:"�����ָ�Ŀ¼�������ĿĿ¼���滻"^"Ϊ�ո�
	cmdPath1 = GetTransFileName(hbuf, cmdP1, 0)
	cmdPath2 = GetTransFileName(hbuf, cmdP2, 0)
	
	cmdStr = "copy " # cmdPath1 # " " # cmdPath2
	//msg(cmdStr)

	ShellOpenCustomCmd(cmdStr)
}

macro NoteCopyRowFile(hbuf, cmdP1, cmdP2, cNum)
{
	cmdP1 = ReAllTransHead(hbuf, cmdP1)
	cmdP2 = ReAllTransHead(hbuf, cmdP2)
	
	TestMsg("copy row (file1->file2):" # CharFromKey(13) # cmdP1  
			# CharFromKey(13) # cmdP2 # "", 1)

	//�ļ���ת��:
	//ת��"Save:"�����ָ�Ŀ¼�������ĿĿ¼���滻"^"Ϊ�ո�
	srcPath = GetTransFileName(hbuf, cmdP1, 0)
	tarPath = GetTransFileName(hbuf, cmdP2, 0)
	if(IsExistFile(tarPath))
	{
//		msg("file exist:" # CharFromKey(13) # tarPath)
//		stop
	}
	else
	{
		//cp default file.
		tmpFile = getCopyPath(0) # "\\Macro_z_null.c"
		cmdStr = "copy " # tmpFile # " " # tarPath
//		msg(cmdStr)
		ShellOpenCustomCmd(cmdStr)
	}

	//cp row
	{
		var srcBuf
		var tarBuf
		srcBuf = OpenCache(srcPath)
		tarBuf = OpenNewFileCache(tarPath)
		EmptyCache(tarBuf)

		ln = 0
		maxRow = GetBufLineCount(srcBuf)
		while (ln < maxRow)
		{
			line = GetBufLine(srcBuf, ln)
			AppendBufLine(tarBuf, line)
			ln =  ln + 1
		}
		
		SaveBuf(tarBuf)
		CloseBuf(tarBuf)
		CloseBuf(srcBuf)
	}
}

macro NoteRARFile(hbuf, cmdP1, cmdP2, cNum)
{
	TestMsg("RAR " # cmdP1 # " " # cmdP2 # "", 1)

	//�ļ���ת��:
	//ת��"Save:"�����ָ�Ŀ¼�������ĿĿ¼���滻"^"Ϊ�ո�
	cmdPath1 = GetTransFileName(hbuf, cmdP1, cNum)

	rDir1 = GetTransRootDir(cmdPath1)
	rDir2 = GetTransRootDir(GetBufName(hbuf))
	if (rDir1 != "" && rDir1 != rDir2)
	{
		cmdStr = rDir1 # "&&cd " # cmdPath1 # "&&start " # getRARPath(0) # " " # cmdP2
	}
	else
	{
		cmdStr = "cd " # cmdPath1 # "&&start " # getRARPath(0) # " " # cmdP2
	}
	TestMsg(cmdStr, 1)

	ShellOpenCustomCmd(cmdStr)
}

macro NoteOpenFile(hbuf, curPath, noteWord)
{
	TestMsg("OpenFile [" # curPath # "-" # noteWord # "]", 2)

	//.exe .bat file
	if(IsFileType(curPath, ".exe") || IsFileType(curPath, ".bat"))
	{
		ShellExecute("open", curPath, "", "", 1)
	}
	else
	{
		vcbuf = OpenExistFile(curPath)
			
		if (vcbuf != hNil){
			if (noteWord != "")
			{
				mSel = SearchInBuf(vcbuf, "@noteWord@", 0, 0, 0, 0, 0)
				if (mSel != "")
				{
					ScrollCursor(mSel)
				}
			}
		}
	}
}

macro NoteCurCmd(hbuf, noteCmd, curPath)
{
//	����ָ�������Ŀ¼(��������·��)
//    ֻ�滻"Save:"��"^"
//    ����·��֮ǰ���滻
	curPath = GetTransFileName(hbuf, curPath, 16)
	
//	cmd_s����Ŀ·��, ��������·��(����basePath����)
//	  (����û��cmd�ļ�)
	if(noteCmd == "cmd_s")
		newPath = GetTransFileName(hbuf, "", 4)
	else
		newPath = GetTransFileName(hbuf, "", 0)
		
//	��Ŀ¼, �����л�Ŀ¼
	cmdRoot = GetTransRootDir(newPath)
//	TestMsg("curPath: " # CharFromKey(13) # curPath # CharFromKey(13) # newPath, 0)
	
	SetClipSimpleString(curPath)

	//cmdStr = cmdRoot # "&&cd " # newPath # "&&echo " # newPath # "^>" # curPath # "&&" # curPath # "&&pause"
	cmdStr = cmdRoot # "&&cd " # newPath # "&&start cmd.exe&&pause"

	TestMsg("����: " # CharFromKey(13) # noteCmd # CharFromKey(13) # cmdStr, 2)
	ShellOpenCustomCmd(cmdStr)
}

macro NoteInCmd(hbuf, noteCmd, noteStr)
{
//	����ָ�������Ŀ¼(��������·��)
//  ֻ�滻"Save:"��"^"
	noteStr  = GetTransFileName(hbuf, noteStr, 16)
	notePath = GetTransFileName(hbuf, "", 0)
	cmdRoot  = GetTransRootDir(notePath)

//	cmdStr = cmdRoot # "&&cd " # notePath # "&&echo \"" # notePath # "^>" # noteStr # "\"&&" # noteStr # "&&pause"
	cmdStr = cmdRoot # "&&cd " # notePath # "&&" # noteStr

	// ����
	//SetClipSimpleString(cmdStr)

	TestMsg("����: " # CharFromKey(13) # noteCmd # CharFromKey(13) # cmdStr, 2)
	ShellOpenCustomCmd(cmdStr)
}

macro NotePythonCmd(hbuf, noteCmd, rootPath, curPath)
{
	curPath = GetTransFileName(hbuf, curPath, 16)
	if(noteCmd == "python_w")
		SetClipSimpleString("python " # curPath)
		
	if(rootPath != "")
		newPath = GetTransFileName(hbuf, rootPath, 0)
	else
		newPath = GetTransFileName(hbuf, "", 0)
	cmdRoot = GetTransRootDir(newPath)

	//python_w: delay
	if(noteCmd == "python_w")
	{
//		cmdStr = cmdRoot # "&&cd " # newPath # "&&start " # curPath
		cmdStr = cmdRoot # "&&cd " # newPath # "&&start cmd.exe&&parse"
	}
	else
	{
		cmdStr = cmdRoot # "&&cd " # newPath # "&&echo " # newPath # "^>" # curPath # "&&python " # curPath # "&&pause"
	}

	TestMsg("����: " # CharFromKey(13) # cmdStr, 2)
	ShellOpenCustomCmd(cmdStr)
}

macro NoteCmdCd(hbuf, noteCmd, rootPath, curPath)
{
	// ԭ����:
	// rootPath: D:\project\Android\\
	// curPath : git clone https://github.com/web3j/web3j
	
	// curPath : git clone https://github.com/web3j/web3j
	curPath = GetTransFileName(hbuf, curPath, 17)
	if(noteCmd == "cd")
		SetClipSimpleString(curPath)
		
	// newPath : D:\project\Android\
	if(rootPath != "")
		newPath = GetTransFileName(hbuf, rootPath, 0)
	else
		newPath = GetTransFileName(hbuf, "", 0)
		
	// cmdRoot : D:
	cmdRoot = GetTransRootDir(newPath)

	//"cd", "cd_i": immediately
	if(noteCmd == "cd")
	{
		// D:&&cd D:\project\Android\&&start cmd.exe&&parse
//		cmdStr = cmdRoot # "&&cd " # newPath # "&&start " # curPath
		cmdStr = cmdRoot # "&&cd " # newPath # "&&start cmd.exe&&parse"
	}
	else
	{
		cmdStr = cmdRoot # "&&cd " # newPath # "&&echo " # newPath # "^>" # curPath # "&& " # curPath # "&&pause"
	}

	TestMsg("����: " # CharFromKey(13) # cmdStr, 2)
	ShellOpenCustomCmd(cmdStr)
}

macro NoteShowLikeFile(hbuf, curPath, cur_row, cNum, isCheck)
{
	if(strlen(curPath)<3)
		return 0
	else if(isCheck || strmid(curPath, strlen(curPath)-3, strlen(curPath)) == "...")
	{
		fLen = strlen(curPath)-3
		//bsDir = GetFileName(curPath)
		bsDir = getBaseDir(curPath, 0) //����һ��
		bsDir = ReplaceWord(bsDir, " ", "#") //��^����ո���Ч
		//fName = GetFileName(curPath)
		fName = strmid(curPath, strlen(bsDir)+1, strlen(curPath) - 3)
		ret = 0
		if(cNum == 5)
		{
			ret = ReadCmdFileList(hbuf, cur_row, bsDir, fName)
		}
		if(ret == 0)
		{
			ShellGetLikeFile(bsDir # " "  # cNum # " " # fLen # " " # fName)
		}
		return 1
	}
	return 0
}
macro NoteScroll(hbuf, curPath, noteWord)
{
	//   ��4���������
	TestMsg("��ת���ļ�: " # CharFromKey(13) # curPath # CharFromKey(13) #��"����: " # CharFromKey(13) # noteWord, 2)
	mSel = SearchInBuf(hbuf, "^" # "@noteWord@", 0, 0, 0, 1, 0)
	if (mSel == "")
	{
		//8.1 �к���ת
		if(IsNumber ("@noteWord@"))
		{
			row = noteWord-1
			ScrollCursorRow(row, row+1)
			return 1
		}
	}
	if (mSel == "")
	{
		//8.2 ��β����/��������
		re = FindString( noteWord, "$" )
		if(re != "X")
			mSel = SearchInBuf(hbuf, "@noteWord@", 0, 0, 0, 1, 0)
		else
			mSel = SearchInBuf(hbuf, "@noteWord@", 0, 0, 0, 0, 0)
	}
	if (mSel == "")
	{
		//8.3 ͨ�������
		mSel = SearchInBuf(hbuf, "@noteWord@", 0, 0, 0, 1, 0)
	}
	if (mSel != "")
	{
		//8.4 �ؼ�����ת
		TestMsg("��ת���ļ�: " # CharFromKey(13) # curPath # CharFromKey(13) #��"����: " # CharFromKey(13) # noteWord, 2)
		ScrollCursor(mSel)
	}
}

