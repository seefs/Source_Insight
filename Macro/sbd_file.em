/*
Fun目录：
macro _TempHeadFile(hbuf){}
_TempCfgFile(hbuf)
_TempFileType(hbuf)
_TempMakeFile(hbuf)
_TempOpenFile(hbuf)
_TempFileFun(hbuf)
_TempHeadFun(hbuf)
_TempTransFun(hbuf)
_TempKeyFile(hbuf)
_TempCmdFile(hbuf)
_TempSelect(hbuf)
**/
/***********************************************************************/
/**************************** cfg file *********************************/
/***********************************************************************/
//macro _TempCfgFile(hbuf){		_TempHeadFile(hbuf)		}

macro getMarBasePath(0)		{	return "basePath"	}
macro getMarDemoPath(0)		{	return "demoPath"	}

//获取设置BUF
macro GetCfgBuf(mode)
{
	SetName = getSetPath(0) # "\\Macro_Set.h"
	setBuf = OpenCache(SetName)
	
	return setBuf
}
//获取公共KeyBUF
macro GetPubKeyBuf(mode)
{
	SetName = getSetPath(0) # "\\Macro_Set_Key.h"
	setBuf = OpenCache(SetName)
	
	return setBuf
}
//获取公共路径BUF
macro GetPubPathBuf(hbuf)
{
	baseName = getBasePath(hbuf)
	//获取当前工程分类，区分处理
	n = getBaseType(baseName)
	type = n/10 *10
	nKey = getBaseKey(n)
	if(type == 90)
	{
		SetName = getSetPath(0) # "\\Macro_Set_Path_base.h"
		setBuf = OpenCache(SetName)
		return setBuf
	}
	else if(type == 80)
	{
		SetName = getSetPath(0) # "\\Macro_Set_Path_mtk_" # nKey # ".h"
		if (!IsExistFile(SetName))
		{
			SetName = getSetPath(0) # "\\Macro_Set_Path_mtk_.h"
		}
		setBuf = OpenCache(SetName)
		return setBuf
	}
	else if(type == 10 || type == 30 || type == 60 || type == 70)
	{
		SetName = getSetPath(0) # "\\Macro_Set_Path_sprd_" # nKey # ".h"
		if (!IsExistFile(SetName))
		{
			SetName = getSetPath(0) # "\\Macro_Set_Path_sprd_.h"
		}
		setBuf = OpenCache(SetName)
		return setBuf
	}
	
	return hNil
}

//行号为双数，间隔一行作为备注信息
macro getToolsRow(0)		{	return 12	}
macro getMakeRow(0)			{	return 15	}
macro getBCompareRow(0)		{	return 18	}
macro getTreeRow(0)			{	return 21	}
macro getSRTmpRow(0)		{	return 24	}
macro getLastCommandRow(0)	{	return 27	}
//macro getSearchRow(0)		{	return 30	}
//macro getSearchColumn(0)	{	return 33	}
macro getCurSearch(0)		{	return 36	}
macro getCurHead(0)			{	return 39	}
macro getCurIndex(0)		{	return 42	}
macro getCurCount(0)		{	return 45	}
macro getBCompareOnOff(0)	{	return 48	}
//macro getPathRow(0)			{	return 51	}
macro getWndVertRow(0)		{	return 54	}

macro getNoteBasePath(0)	{	return 63	}
macro getNumBits(0)			{	return 66	}
macro getCustPath(0)		{	return 69	}
macro getCustRow(0)			{	return 72	}
macro getPyInfo(0)			{	return 75	}
macro getAndroidInfo(0)			{	return 78	}
//macro getXXInfo(0)			{	return 81	}
macro getCommentRow(0)			{	return 84	}
macro getContentsRow(0)			{	return 87	}



//获取当前设置:默认F5~goto           F6-rule
macro ReadMode(setRow)
{
	var setBuf
	setBuf = GetCfgBuf(0)
	ln = GetBufLineCount(setBuf)
	if(setRow <= ln){
		lnStr = GetBufLine(setBuf, setRow - 1)
		//val = GetLineMacro(lnStr)
		return lnStr //val
	}else{
		msgErr = getSetPath(0) # "\\Macro_Set.h"  # "," # CharFromKey(13)
		msg (msgErr # "tools mode row (@ln@), read error")
		return 0
	}
}
macro ReadIntMode(setRow)
{
	mode = ReadMode(setRow)
	if(IsNumber (mode))
		return mode
	else
		return 0
}

//保存当前设置:默认F5~goto           F6-rule
macro SaveMode(setRow, val)
{
	var setBuf
	setBuf = GetCfgBuf(0)

	//添加空行
	ln = GetBufLineCount(setBuf)
	while (ln < setRow)
	{
		AppendBufLine(setBuf, "")
		ln =  ln + 1
	}
	
	PutBufLine(setBuf, setRow - 1, "@val@")
	SaveBuf(setBuf)
}
macro SaveProjectFile(setRow, SetName, val)
{
	var setBuf
	setBuf = OpenCache(SetName)
	PutBufLine(setBuf, setRow - 1, "@val@")
	SaveBuf(setBuf)
}
macro SaveNumBitsMode(val)
{
	valB = val
	bit = 0
	while (valB > 0)
	{
		valB = valB/10
		bit = bit + 1
	}
	SaveMode(getNumBits(0), "@bit@")
}



/***********************************************************************/
/**************************** file type *********************************/
/***********************************************************************/
//macro _TempFileType(hbuf){		_TempHeadFile(hbuf)		}

macro IsSRFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".SearchResults")
}

macro IsMacroFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".em")
}

macro IsMakeFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".mk") || IsFileType(fName, ".def") || IsFileType(fName, ".mak") || IsFileType(fName, ".cfg")
}

macro IsTxtFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".c")
}

macro IsExeFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".exe") || IsFileType(fName, ".bat")
}

macro IsScriptFile(hbuf)
{
	//# as Comment
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".py") || IsFileType(fName, ".make") || IsFileType(fName, ".properties")
}

macro IsNoteFile(hbuf)
{
	return (IsFileName(hbuf, "Macro_")||IsFileName(hbuf, "Simple_CTRL_")||IsFileName(hbuf, "bak_")
		||IsFileName(hbuf, "Log_"))||IsFileName(hbuf, "si_modis_"))
}

//从右边匹配
macro IsFileType(filename, type)
{
	len = strlen (filename)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid (filename, len-typeLen, len) == type)
		{	
			return 1
		}
	}
	return 0
}
//从左边匹配
macro IsFileLeft(curPath, type)
{
	filename = GetFileName(curPath)
	len = strlen (filename)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid(filename, 0, typeLen) == type)
		{
			return 1
		}
	}
	else if(len==typeLen)
	{
		if(filename == type)
		{	
			return 1
		}
	}
	return 0
}
//从左边匹配
macro IsFileName(hbuf, type)
{
	if(hbuf == 0) 
		return 0
	filename = GetFileName(GetBufName(hbuf))
	len = strlen (filename)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid(filename, 0, typeLen) == type)
		{
			return 1
		}
	}
	else if(len==typeLen)
	{
		if(filename == type)
		{	
			return 1
		}
	}
	return 0
}
//从左边匹配
macro IsPathName(hbuf, type)
{
	pathname = GetBufName(hbuf)
	len = strlen (pathname)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid(pathname, 0, typeLen) == type)
		{
			return 1
		}
	}
	else if(len==typeLen)
	{
		if(pathname == type)
		{	
			return 1
		}
	}
	return 0
}

macro OpenDefaultSR(hbuf)
{
	hprj = GetCurrentProj ()
	if (hprj == 0)
	{
		Msg ("You must have a project open.")
		stop
	}
	
	path = GetProjDir (hprj)
	projName = GetProjName (hprj)
	//filename = GetFileName(projName)
	
	type = getBaseType(path)
	if(type != 0)
	{
		file = projName # ".SearchResults"
		hbuf = OpenExistFile(file)
		//setCurrentBuf(hbuf)
		return hbuf
	}
	else
	{
		//遍历窗口
		hNext = GetCurrentWnd();
		wndc = WndListCount ()
		start = 0
		while (hNext != 0 && start<30)
		{
			hbuf = GetWndBuf(hNext);
			if(IsSRFile(hbuf))
			{
				setCurrentBuf(hbuf)
				break
			}
			hNext = GetNextWnd(hNext);
			start = start + 1
		}
	}
	
	return hbuf
	
}

macro SetClipSimpleString(Str)
{
	hbufClip = GetBufHandle("Clipboard")
	if (hbufClip != hNil)
	{
		EmptyBuf(hbufClip)
		AppendBufLine(hbufClip, "@Str@")
		CloseBuf(hbufClip)
	}
}
macro SetClipString(Str)
{
	hbufClip = GetBufHandle("Clipboard")
	lnMax = GetBufLineCount(hbufClip)
	klen = strlen(Str)
	if(klen > 0)
	{
		EmptyBuf(hbufClip)
		iStart = 0
		while (1)
		{
			ichKey = SplitMacro(Str, CharFromKey(13), iStart, klen)
			if(ichKey >= 0)
			{
				iNote = strmid(Str,iStart, ichKey)
				AppendBufLine(hbufClip, "@iNote@")
			}
			else
			{
				iNote = strmid(Str,iStart, klen)
				AppendBufLine(hbufClip, "@iNote@")
				break
			}
			iStart = ichKey + 1
		}
	}
}
macro GetClipString(hbuf)
{
	hbufClip = GetBufHandle("Clipboard")
	lnMax = GetBufLineCount(hbufClip)
	if(lnMax>0)
	{
		return GetBufLine(hbufClip, 0)
	}else
	{
		return ""
	}
}
macro GetClipStringI(hbuf, i)
{
	hbufClip = GetBufHandle("Clipboard")
	lnMax = GetBufLineCount(hbufClip)
	if(i == "")
	{
		return lnMax
	}
	else if(i < 0)
	{
		return lnMax
	}
	else if(lnMax>i)
	{
		return GetBufLine(hbufClip, i)
	}
	else if(lnMax>0)
	{
		//i%lnMax
		return GetBufLine(hbufClip, i-i/lnMax*lnMax)
	}
	else
	{
		return ""
	}
}

macro ShowFileName(hbuf, isShow)
{
	szpathName = GetBufName(hbuf)
	filename = GetFileName(szpathName)

	if(isShow)
	{
		msg ("@filename@")
	}
	SetClipSimpleString(filename)
}

macro GetMkFileName(hbuf)
{
	szpathName = GetBufName(hbuf)
	filename = GetFileName(szpathName)
	
	len = strlen (filename)	
	if(len>11)
	{
		filename = strmid (filename, 8, len-3)
	}
	else if(len>3)
	{
		filename = strmid (filename, 0, len-3)
	}
	return filename
}

macro GetRelativelyDir(curName, baseDir, filename)
{
	len = strlen (curName)	
	baseLen = strlen (baseDir)
	fileLen = strlen (filename)

	if(curName[2] != ":")
	{
		return strmid (curName, 0, len - fileLen - 1)
	}
	else if(len > baseLen+fileLen+1)
	{
		//考虑目录最后一个"\"
		return strmid (curName, baseLen + 1, len - fileLen - 1)
	}
	else
	{
		return ""
	}
}


/***********************************************************************/
/************************** make file **********************************/
/***********************************************************************/
//macro _TempMakeFile(hbuf){		_TempHeadFile(hbuf)		}

//跳到默认mk
macro OpenDefaultMake(hbuf)
{
	var projectName

	projectName = ReadMode(getMakeRow(0))
	if(projectName != null)
	{
		hbuf = OpenMakeFile(hbuf, projectName)
	}
	else
	{
		msg ("请按F11->9指定默认mk文件")
	}
}

//指定默认mk
macro SetDefaultMake(hbuf)
{
	sel = MGetWndSel(hbuf)
	if (IsNoSelect(sel)) //未选择
	{
		if(IsMakeFile(hbuf))
		{
			projectName = GetMkFileName(hbuf)
			SaveMode(getMakeRow(0), "@projectName@")
		}
		else
		{
			//打开 保存mk...
			msg ("请在mk文件中，指定默认mk")
		}
	}
	else
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		
		if(IsSRFile(hbuf))
		{
			projectName = cur_sel
			SaveMode(getMakeRow(0), "@projectName@")
		}
		else
		{
			msg ("请在SR文件中，选择项目名称，指定默认mk")
		}
	}
}

macro OpenDefaultProject(hbuf)
{
	var projectName

	custPath = ReadMode(getCustPath(0))
	custRow = ReadMode(getCustRow(0))
	fName = GetFileName(custPath)
	if(IsFileName(hbuf, fName))
	{
		//szpathName = GetBufName(hbuf)
		//fName = GetFileName(szpathName)
		//SaveMode(getCustPath(0), "@szpathName@")
		
		hwnd = GetCurrentWnd()
		lnTop = GetWndVertScroll(hwnd);
		SaveMode(getCustRow(0), "@lnTop@")
		close
	}
	else
	{
		if(OpenExistFile(custPath))
		{
			if (IsNumber (custRow)){
				if (custRow > 0){
					hwnd = GetCurrentWnd()
					ScrollWndToLine(hwnd, custRow); 
				}
			}
		}
		else
		{
			szpathName = GetBufName(hbuf)
			fName = GetFileName(szpathName)
			SaveMode(getCustPath(0), "@szpathName@")
			
			hwnd = GetCurrentWnd()
			lnTop = GetWndVertScroll(hwnd);
			SaveMode(getCustRow(0), "@lnTop@")
		}
	}
}
macro SetDefaultProject(hbuf)
{
	hwnd = GetCurrentWnd()
	
	szpathName = GetBufName(hbuf)
	fName = GetFileName(szpathName)
	SaveMode(getCustPath(0), "@szpathName@")
	
	lnTop = GetWndVertScroll(hwnd);
	SaveMode(getCustRow(0), "@lnTop@")
}

/***********************************************************************/
/************************** open file **********************************/
/***********************************************************************/
//macro _TempOpenFile(hbuf){		_TempHeadFile(hbuf)		}

macro OpenCache(file)
{	
	global errFile
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			if(errFile != file)
			{
				//change bug: file no exist
				//static val, Prompt once
				msg("file no exist:" # CharFromKey(13) #  file)
				errFile = file
			}
			stop
		}
 	}
	return hbuf
}

macro OpenFile(file)
{	
	hbuf = OpenCache(file)
	setCurrentBuf(hbuf)
	return hbuf
}

macro OpenNewFileCache(file)
{	
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			stop
		}
 	}
	return hbuf
}

macro OpenExistFile(file)
{	
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			return hNil
		}
 	}
	if (hbuf != hNil){
		setCurrentBuf(hbuf)
	}
	return hbuf
}
macro OpenExistFileRow(file, row)
{	
	hbuf = GetBufHandle(file)
	isScroll = 0
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			return hNil
		}
		isScroll = 1
 	}
	if (hbuf != hNil){
		setCurrentBuf(hbuf)
	}
	if (isScroll == 1 && row > 0){
		hwnd = GetCurrentWnd()
		ScrollWndToLine(hwnd, row); 
	}
	return hbuf
}

macro IsExistFile(file)
{
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//hbuf = NewBuf(file)
			//msg(file # " doesn't exist. (no)")
			return 0
		}
		CloseBuf(hbuf)
 	}
	//msg(file # " is exist. (yes)")
	return 1
}

macro OpenSelMakeFile(hbuf)
{
	sel = MGetWndSel(hbuf)
	if (!IsNoSelect(sel)) //未选择
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		if(IsSRFile(hbuf))
		{
			return OpenMakeFile(hbuf, cur_sel)
		}
	}
	return ""
}
macro OpenMakeFile(hbuf, file)
{
	pathName = GetBufName(hbuf)
	projectPath = getProjectPath(pathName)
	//hbuf = OpenCache("@projectPath@\\@file@\\project_@file@.mk")	//或者target.		
	//setCurrentBuf(hbuf)
	hbuf = OpenExistFile("@projectPath@\\@file@\\project_@file@.mk")	//或者target.
	return hbuf
}

macro OpenCmdFile(hbuf)
{
	baseDir = getBasePath(hbuf)
	ret = ShellOpenCmd(baseDir,  "cmd2.exe")
	if (ret == 0)
	{
		ret = ShellOpenCmd(baseDir,  "cmd.cmd")
	}
	if (ret == 0)
	{	
		ret = ShellOpenCmd(baseDir,  "")
	}
	return hbuf
}

// delete all lines in the buffer
macro EmptyCache(hbuf)
{
	//EmptyBuf(hbuf)
	lnMax = GetBufLineCount(hbuf)
	while (lnMax > 0)
		{
		DelBufLine(hbuf, 0)
		lnMax = lnMax - 1
		}
}

//ret = 0(空文件) 1(只有参数) 2(有参数+目录)
macro GetParamCacheType(hbuf, param)
{
	lnMax = GetBufLineCount(hbuf)
	len = strlen(param)
	var line
	ret = 0
	
	if(lnMax > 0)
	{
		line = GetBufLine(hbuf, lnMax-1)
	}
	while (lnMax > 0)
	{
		if(ret == 0)
		{
			//有参数 ret = 1
			if(line != "")
			{
				if(len > 0)
				{
					ret = 1
					continue
				}
				else
				{
					return ret
				}
			}
		}
		else if(ret == 1)
		{
			//有指定参数 ret = 2
			if(param == strmid(line, 0, len))
			{
				ret = 2
				return ret
			}
		}
		lnMax = lnMax - 1
		line = GetBufLine(hbuf, lnMax)
	}
	return ret
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempFileFun(hbuf){		_TempHeadFile(hbuf)		}

macro GetTransFileName(hbuf, fName, cNum)
{
	//功能参数分类:
	// 1.CtrlC,  cNum=0 优先设置路径(单独设置)
	// 2.F1->F2, cNum=1 优先设置路径(统一设置)
	// 3.F2,     cNum=2 考虑SR
	// 4.CtrlR,  cNum=5 优先当前工程路径
	//   CtrlR,  cNum=15  当前路径, Log_XX文件----no use
	// 5.F5,     cNum=5
	// 6.F6,     cNum=6 优先设置路径
	// 7.F7,     cNum=6
	// 8.F11,    cNum=6 python, cp
	//   F11,    cNum=16 cmd_w python_w 编译指令是相对目录(不用完整路径); 只替换"Save:"、"^"
	//   F11,    cNum=17 不替换"/",如 git
	//   F11,    cNum=4  cmd_s 编译指令; 屏蔽设置路径(不用basePath设置); 
	
	//路径+文件名替换:
	bPath = ""
	if(bPath == "")
	{
		if(cNum == 6)
		{
			bPath = getMacroValue(hbuf, getMarDemoPath(0), 1) //"demoPath"
			if(bPath == "")
			{
				//android service path: basePath = F:\9820e 
				//存在两份代码+两个路径, 这里用服务器路径(统一设置)
				bPath = ReadMode(getNoteBasePath(0))
			}
		}
		else if(cNum == 1)
		{
			if(IsSRFile(hbuf))
			{
				//感觉有点问题, 也可以打开服务器路径
				if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
				{
					bPath = getSavePath(0)
				}
			}
			if(bPath == "")
			{
				//android service path: basePath = F:\9820e 
				//存在两份代码+两个路径, 这里用服务器路径(统一设置)
				bPath = ReadMode(getNoteBasePath(0))
			}
		}
		else if(cNum == 2)
		{
			if(IsSRFile(hbuf))
			{
				//这种情况只有F2会用到, 放这里或者放外面都一样
				if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
				{
					bPath = getSavePath(0)
				}
			}
		}
		else if(cNum == 15) //no use
		{
			bPath = getCurPath(hbuf)
		}
	}
	if(bPath == "" && cNum != 4)
	{
		//1)优先用basePath; 
		//2)屏蔽设置路径(不用basePath设置); 
		bPath = getMacroValue(hbuf, getMarBasePath(0), 1) //"basePath"
	}
	if(bPath == "")
	{
		//如果没有设置basePath，用项目目录
		bPath = getBasePath(hbuf)
	}

	//补全目录
	//  带":"号的是完整目录、或根目录
	re = FindString(fName, ":")
	if(re == "X")
	{
		if(cNum == 16 || cNum == 17)
		{
			//编译指令是相对目录(不用完整路径)
			fName = fName
		}
		else if(strlen(fName) > 2)
		{
			// "\\192.168.2.115\..."
			if(strmid(fName,0,2) != "\\\\")
			{
				if(strmid(fName,0,1)!="\\" && strmid(fName,0,1)!="/")
					fName = bPath # "\\" # fName
				else
					fName = bPath # fName
			}
		}
		else
		{
			fName = bPath
		}
	}

	//replace test:
	//xxxx = ReplaceWord("^^^sss^^^ddd^eee^^^", "^", "-")
	//输出: "---sss---ddd-eee---"
	//msg(xxxx)
	
	//replace test:
	//xxxx = ReplaceWord("a\\\\bb\\cc\\dd\\\\", "\\\\", "\\")
	//输出: "a\bb\cc\dd\"
	//msg(xxxx)
	
	//replace
	fName = ReplaceWord(fName, "Save:", getSavePath(0) # "\\")
	fName = ReplaceWord(fName, "App:", getUserPath(0) # "\\")
	//use "^" as space
	fName = ReplaceWord(fName, "^", " ")
	//resolve SI Cache bug.
	fName = ReplaceWord(fName, "\\\\", "\\")
	if(cNum != 17)
		fName = ReplaceWord(fName, "/", "\\")
//	msg(fName)
	
	return fName
}

/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempHeadFun(hbuf){		_TempHeadFile(hbuf)		}
macro GetHeadIndex(cur_line)
{
	index = FindString(cur_line, " ")
	//删除后面部分
	if (index != "X"){
		cur_line = strmid(cur_line, 0, index)
	}
	
	//从左开始找
	index_colon = FindString(cur_line, ":")
	if (index_colon != "X"){
		//cur_line = strmid(cur_line, 0, index_colon)
		index = index_colon
	}
	else if (index != "X"){
		if (index == 1){
			//单个字符，也没有":"号，作为异常情况处理
			return "X"
		}
	}
	
	// 返回第1个空格或冒号的位置
	return index
}
macro IsTransHead(hbuf, fHead)
{
	//不能带有*号，否则会无限替换下去
	index = FindString(fHead, "*")
	if(index != "X"){
		return 0
	}
	
	//check cur file
	headPath = getMacroValue(hbuf, fHead # "Path", 1)
	if(headPath != ""){
		//tag:1 ==> save pub path file
		//SaveMode(getNoteBasePath(0), "@lnVar@")
		return 1
	}
	
	//check pub path file
	pathBuf = GetPubPathBuf(hbuf)
	//msg("pathBuf " # pathBuf)
	if(pathBuf != hNil){
		headPath = getMacroValue(pathBuf, fHead # "Path", 1)
		if(headPath != ""){
			return 2
		}
	}
	
	return 0
}
macro ReTransHead(hbuf, fHead, curPath)
{
	srcPath = curPath
	// curPath----base:
	if(fHead != ""){
		headPath = getMacroValue(hbuf, fHead # "Path", 1)
		if(headPath != "")
		{
			//  第1次循环:
			// curPath-----tmp:
			// fHead-------tmp:
			// headPath----base:tmp/
			// curPath-----base:tmp/
			//  第2次循环:
			// curPath-----base:tmp/
			// fHead-------base:
			// headPath----D:\project\Android//
			// curPath-----D:\project\Android//tmp
			curPath = ReplaceWord(curPath, fHead # ":", headPath # "\\")
			
			//for each
			next = GetHeadIndex(curPath)
			if (next != "X")
			{
				// nextHead----base
				nextHead = strmid(curPath, 0, next)
				if(IsTransHead(hbuf, nextHead)>=1) {
					curPath = ReTransHead(hbuf, nextHead, curPath)
				}
			}
			//test: 0.open, 1.cur, 2,close.
//			TestMsg("==ReTransHead==" # CharFromKey(13)
//				  # "srcPath" # CharFromKey(13) # "--" # srcPath # "--" # CharFromKey(13)
//				  # "cmdP1" # CharFromKey(13) # "--" # fHead # ":--" # CharFromKey(13)
//				  # "cmdP2" # CharFromKey(13) # "--" # headPath # "\\--" # CharFromKey(13)
//				  # "curPath" # CharFromKey(13) # "--" # curPath # "--" # CharFromKey(13)
//				  # "next" # CharFromKey(13) # "--" # next # "--" # CharFromKey(13)
//				  # "nextHead" # CharFromKey(13) # "--" # nextHead # "--" # CharFromKey(13)
//				  # "IsHead" # CharFromKey(13) # "--" # IsTransHead(hbuf, nextHead) # "--" # CharFromKey(13)
//					, 2)
			return curPath
		}
		
		pathBuf = GetPubPathBuf(hbuf)
		if(pathBuf != hNil){
			headPath = getMacroValue(pathBuf, fHead # "Path", 1)
			if(headPath != ""){
				curPath = ReplaceWord(curPath, fHead # ":", headPath # "\\")
				
				//for each
				next = GetHeadIndex(curPath)
				if (next != "X")
				{
					// nextHead----base
					nextHead = strmid(curPath, 0, next)
					// 不区分1还是2
					if(IsTransHead(hbuf, nextHead)>=1) {
						curPath = ReTransHead(hbuf, nextHead, curPath)
					}
				}
				return curPath
			}
		}
	}
	return curPath
}
macro ReAllTransHead(hbuf, curPath)
{
	len = strlen(curPath)
	// 第1个空格或冒号的位置
	firstS = 0
	firstE = GetHeadIndex(curPath)
	if (firstE != "X")
	{
		noteCmd = strmid(curPath, 0, firstE)
		if(IsTransHead(hbuf, noteCmd)>=1)
		{
			nextS     = GetTransCmdS2(curPath, firstE + 1, len)
			firstPath = strmid(curPath, 0, nextS)
			nextPath  = strmid(curPath, nextS, len)
			// 反复替换路径
			firstPath = ReTransHead(hbuf, noteCmd, firstPath)
			return firstPath # ReAllTransHead(hbuf, nextPath)
		}
		else {
			nextS     = GetTransCmdS2(curPath, firstE + 1, len)
			firstPath = strmid(curPath, 0, nextS)
			nextPath  = strmid(curPath, nextS, len)
			return firstPath # ReAllTransHead(hbuf, nextPath)
		}
	}
	return curPath
}

/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempTransFun(hbuf){		_TempHeadFile(hbuf)		}
macro GetTransWord(hbuf, curPath, noteWord)
{
	if(noteWord == "[Path]")
	{
		curPath = getBaseDir(curPath, 0)
		re = ShellExecute("explore", "@curPath@\\", "", "", 1)
		if(re)
			return 1
	}
	else if(noteWord == "[Base]")
	{
		//回到目录,不打开新文件
		noteWord = "目录"
		NoteScroll(hbuf, curPath, noteWord)
		return 1
	}
	else if(noteWord == "[Next]")
	{
		SearchForward()
		return 1
	}
	return 0
}

macro GetTransCmdS(cur_line, index, len)
{
	//下一个非空
	//  选择空行时(如只有一个换行符), stop
	start = StartWS(cur_line, index)
	if (start == "X")
	{
		stop
	}
	return start
}
macro GetTransCmdS2(cur_line, index, len)
{
	//下一个非空
	start = StartWS(cur_line, index)
	if (start == "X")
	{
		start = len
	}
	return start
}
macro GetTransCmdE(cur_line, start, len)
{
	//下一个空格
	next = NextWS(cur_line, start)
	if (next == "X")
	{
		next = len
	}
	return next
}
macro GetTransStr(cur_line, index, len)
{
	if(index == "X")
	{
		return ""
	}
	else if(index >= len)
	{
		return ""
	}
	else
	{
		return strmid(cur_line, index, len)
	}
}
macro GetTransRootDir(fName)
{
	index = FindString(fName, ":")
	if (index == "X")
	{
		return ""
	}
	else
	{
		return strmid(fName, 0, index + 1)
	}
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempKeyFile(hbuf){		_TempHeadFile(hbuf)		}
macro IsKeySetHead(hbuf, fHead)
{
	//不能带有*号，否则会无限替换下去
	index = FindString(fHead, "*")
	if(index != "X"){
		return 0
	}
	
	//get new Key
	newKeyVal = getMacroValue(hbuf, fHead # "Key", 1)
	if(newKeyVal != ""){
		return 1
	}
	
	return 0
}
macro getKeyHead(hbuf, fHead)
{
	//不能带有*号，否则会无限替换下去
	index = FindString(fHead, "*")
	if(index != "X"){
		return ""
	}
	
	//get cfg file
	pathBuf = GetPubPathBuf(hbuf)
	if(pathBuf == hNil){
		msg("key: {@fHead@}" # CharFromKey(13)
		   # "proj is not exist!" # CharFromKey(13) # CharFromKey(13)
		   # "(Macro_Set_Base.h)")
		return ""
	}
	
	//get new Key
	keyVal = getMacroValue(pathBuf, fHead # "Key", 1)
	if(keyVal != ""){
		keyVal  = ReAllKeyHead(hbuf, keyVal)  //replace loop
		return keyVal
	}
	
	return ""
}
macro SaveKeyHead(hbuf, fHead)
{
	//get cfg file
	pathBuf = GetPubPathBuf(hbuf)
	//msg("pathBuf " # pathBuf)
	if(pathBuf != hNil){
		//get new Key
		newKeyVal = getMacroValue(hbuf, fHead # "Key", 1)
		
		//get old Key
		oldKeyVal = ""
		oldKeyVal = getMacroValue(pathBuf, fHead # "Key", 1)
		pKey = fHead # "Key"
		if(oldKeyVal != ""){
			//replace line
			setMacroValue(pathBuf, pKey, 1, newKeyVal)
		}
		else{
			//append line
			AppendBufLine(pathBuf, fHead # "Key = " # newKeyVal)
			AppendBufLine(pathBuf, "")
			SaveBuf(pathBuf)
		}
		return 1
	}
	
	return 0
}
macro ReAllKeyHead(hbuf, curPath)
{
	len = strlen(curPath)
	firstS = FindString(curPath, "{")
	if (firstS == "X")
		return curPath
		
	firstE = FindString(curPath, "}")
	if (firstE == "X")
		return curPath
		
	if (firstS > firstE)
		return curPath
		
	pathMid = strmid(curPath, firstS + 1, firstE)
	keyVal = getKeyHead(hbuf, pathMid)
	if (keyVal != "")
	{
		pathS  = strmid(curPath, 0, firstS)
		pathE  = strmid(curPath, firstE + 1, len)
		pathE  = ReAllKeyHead(hbuf, pathE)
		return pathS # keyVal # pathE
	}
	return curPath
}
macro getCustomKeyHead(hbuf, fHead)
{
	var index
	var hprj
	var n
	var nKey
		
	//不能带有*号，否则会无限替换下去
	index = FindString(fHead, "*")
	if(index != "X"){
		return ""
	}
	
	//特殊关键字
	if(fHead == "pro"){
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			path = GetProjDir (hprj)
			//n = getBaseType(path)
			n = getBaseDirNum(path)
			nKey = getBaseKey(n)
			return nKey
		}
	}
	return ""
}
macro ReCustomKeyHead(hbuf, curPathS, curPathE)
{
	len = strlen(curPathE)
	firstS = FindString(curPathE, "{")
	if (firstS == "X")
		return curPathE
		
	firstE = FindString(curPathE, "}")
	if (firstE == "X")
		return curPathE
		
	if (firstS > firstE)
		return curPathE

	pathMid = strmid(curPathE, firstS + 1, firstE)
	//特殊{key}
	keyVal = getCustomKeyHead(hbuf, pathMid)
	if (keyVal != "")
	{
		pathS  = strmid(curPathE, 0, firstS)
		pathE  = strmid(curPathE, firstE + 1, len)
		pathER = ReCustomKeyHead(hbuf, curPathS # pathS # keyVal, pathE)
		pathOut = curPathS # pathS # keyVal # pathER
		pathOutR  = GetTransFileName(hbuf, pathOut, 16)
		if (IsExistFile(pathOutR))
		{
			return pathOut
		}
		else
		{
			pathER = ReCustomKeyHead(hbuf, curPathS # pathS # "", pathE)
			pathOut = curPathS # pathS # "" # pathE
			msg("key not exist: " # keyVal)
			return pathOut
		}
	}
	return curPathE
}

macro getCustomHot(hbuf, fn_idx)
{
	var hprj
	var path
	var n
	var nKey

	hprj = GetCurrentProj ()
	if(hprj>0)
	{
		path = GetProjDir (hprj)
		//type = getBaseType(path)
		n = getBaseDirNum(path)
		//nKey = getBaseKey(n)
		nKey = getBaseOther(n, "Hot" # fn_idx)
		return nKey
	}
	return ""
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempCmdFile(hbuf){		_TempHeadFile(hbuf)		}

macro ReadCmdFileList(hbuf, cur_row, bsDir, fName)
{
	var cmdBuf
	var firstReRow
	var input_key
	var fileRowCnt
	var allRowCnt

	//file name list Line:5~N
	firstReRow = 5
	//select line -> add
	input_key = 0
	fileRowCnt = 0
	
	fileName = getTXTPath(0) # "\\si_filelist.h"
	cmdBuf = OpenCache(fileName)
	allRowCnt = GetBufLineCount(cmdBuf)
	fNameRow = 2
	if(fNameRow <= allRowCnt){
		lnStr = GetBufLine(cmdBuf, fNameRow - 1)
		//val = GetLineMacro(lnStr)
		if(lnStr == "@bsDir@ @fName@")
		{
			len = strlen(bsDir)
			fileRowCnt = allRowCnt - firstReRow + 1
			flistMsg = ""
			index = 0

			if(allRowCnt == firstReRow)
			{
				input_key = 0
			}
			else
			{
				row_i = firstReRow
				while (row_i <= allRowCnt)
				{
					index = index + 1
					line = GetBufLine(cmdBuf, row_i - 1)
					if(strlen(line) > len)
					{
						lnStr = strmid(line, len + 1, strlen(line))
						flistMsg = flistMsg # "@index@. @lnStr@" # CharFromKey(13)
					}
					row_i = row_i + 1
				}
				if(flistMsg != "")
				{
					msg(flistMsg)
					
					key = 0
					bit = fileRowCnt
					//2位数需求输入1~2个数
					while (bit > 0 && input_key*10 <= fileRowCnt)
					{
						key = GetKey()
						//输入0-9a-z, 返回0-9+26
						i = GetNumFromKey(key, 10 - 1)
						if(i >= 0)
						{
							input_key = input_key*10+i
						}
						bit = bit/10
					}
				}
			}
			if (input_key > fileRowCnt)
			{
				msg("下标 (@mIndex@) 超范围 1~@indexMax@.")
			}
			else if (fileRowCnt == 0)
			{
				msg("no found file.")
			}
			else
			{
				//获取当前行, 替换为新文件名
				line = GetBufLine(cmdBuf, input_key + firstReRow - 2)
				lnStr = strmid(line, len + 1, strlen(line))
				upLine = GetBufLine(hbuf, cur_row)
				upLnStr = strmid(upLine, 0, strlen(upLine) - 3 - strlen(fName))

				newLine = upLnStr # lnStr
				msg("Add Line:" # CharFromKey(13) # newLine)
				InsBufLine(hbuf, cur_row + 1, newLine);
				SaveBuf(hbuf)
			}
			return 1
		}
	}
	return 0
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempSelect(hbuf){		_TempHeadFile(hbuf)		}


macro MGetWndSel(hbuf)
{
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
		
	sel = GetWndSel(hwnd)
	return sel
}

//有选择
macro IsHasSelect(sel)
{
	return (sel.ichFirst != sel.ichLim || sel.lnFirst != sel.lnLast)
}
//不是单行选择, 同 IsSingleSelect 相反
macro IsNoSelect(sel)
{
	return (sel.ichFirst == sel.ichLim || sel.lnFirst != sel.lnLast)
}
//一般词选择, 不选或者不整行选择
macro IsNoRowSelect(sel)
{
	return (sel.ichFirst != 0 && sel.lnFirst == sel.lnLast)
}
//是单行选择, 同 IsNoSelect 相反
macro IsSingleSelect(sel)
{
	return (sel.ichFirst != sel.ichLim && sel.lnFirst == sel.lnLast)
}
//是多行选择
macro IsMoreSelect(sel)
{
	return (sel.lnFirst != sel.lnLast)
}
// return "No","Yes","Macro"
macro GetSingleSelectState(cur_line, sel, mar)
{
	if(sel.ichFirst != sel.ichLim)
	{	
		 //选中最后一行，带换行符会出错
		if(strlen(cur_line) < sel.ichLim)			sel.ichLim = sel.ichLim - 1
			
		selStr = strmid(cur_line, sel.ichFirst, sel.ichLim)
		
		if(selStr == mar)
			return "Macro"
			
		return "Yes"
	}
	else
	{
		return "No"
	}
}
macro ScrollCursor(mSel)
{
	hwnd = GetCurrentWnd()
	if(mSel.lnFirst>10)
		ScrollWndToLine(hwnd, mSel.lnFirst-10)
	else
		ScrollWndToLine(hwnd, 0)
	SetWndSel(hwnd, mSel)
}
macro ScrollCursorRow(hbuf, row1, row2)
{
	hwnd = GetCurrentWnd()
	if(row1>20)
		ScrollWndToLine(hwnd, row1-10)
	else
		ScrollWndToLine(hwnd, row1)
	if(row1 + 1 == row2)
	{
		mLine = GetBufLine(hbuf, row1)
		mRowCnt = strlen(mLine)
		mSel = "lnFirst=\"@row1@\";ichFirst=\"0\";lnLast=\"@row1@\";ichLim=\"@mRowCnt@\";fExtended=\"1\";fRect=\"0\""
	}
	else
	{
		mSel = "lnFirst=\"@row1@\";ichFirst=\"0\";lnLast=\"@row2@\";ichLim=\"0\";fExtended=\"1\";fRect=\"0\""
	}
	SetWndSel(hwnd, mSel)
}
/***********************************************************************/


