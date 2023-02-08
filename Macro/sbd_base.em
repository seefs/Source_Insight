

//用固定目录打开文件, 手动修改以下Save目录, Tool目录
//这样, project->open project->base工程, 就不用添加很多文件了, 只用添加.em的目录


//1) Save目录(只能在*.em中设置)
macro getSavePath(0)		{	return getRootPath(0)						    }

//ShellExecute命令目录
macro getCmdPath(0)			{	return getSavePath(0) # "\\Cmd"			}
macro getTXTPath(0)			{	return getSavePath(0) # "\\Cmd_TXT"		}
macro getNodePath(0)		{	return getSavePath(0) # "\\node"		}
macro getGroupPath(0)		{	return getSavePath(0) # "\\node\\C\\group"		}
macro getProjectC(0)		{	return getSavePath(0) # "\\node\\C\\project"		}
macro getProjectPythons(0)	{	return getSavePath(0) # "\\node\\Pythons\\project"		}
macro getProjectAndroid(0)	{	return getSavePath(0) # "\\node\\android\\project"		}
macro getRulePath(0)		{	return getSavePath(0) # "\\node\\C\\rule"		}
macro getSearchC(0)			{	return getSavePath(0) # "\\node\\C\\search"		}
macro getSearchAndroid(0)	{	return getSavePath(0) # "\\node\\android\\search"		}
macro getSetPath(0)	    	{	return getSavePath(0) # "\\Set"		}
macro getCopyPath(0)	    {	return getSavePath(0) # "\\Help\\DefaultFile"		}
macro getLangInfoPath(0)	    {	return getSavePath(0) # "\\Help\\LangInfo"		}

//2) 桌面，创建桌面link
macro getDesktopPath(0)	{  	       return  getToolPathFromKey("", "Desktop")			}

//3) Tool目录
//Cmd
macro getBComparePath(0)	{  	       return  getToolPathFromKey("", "BCompare")			}
//VC
macro getVCPath(0)	           {  	   return  getToolPathFromKey("", "VC6")			}
//VC2008
macro getVS08Path(0)           {  	   return  getToolPathFromKey("", "VS08")			}
//RAR
macro getRARPath(0)            {  	   return  getToolPathFromKey("", "RAR")			}



//目录操作
macro getCurPath(hbuf)
{
	if(IsSRFile(hbuf))
	{
		if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
		{
			return getSavePath(0)
		}
		else
		{
			hprj = GetCurrentProj ()
			return GetProjDir (hprj)
		}
	}
	else if(IsNoteFile(hbuf))
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			projPath = GetProjDir (hprj)
			//移动F:\\xx\\SI4.0文件会使默认改为F:
			if(strlen (projPath) < 4)
			{
				return GetProjDir (hprj)
			}
			else if(strmid(projPath, strlen (projPath) - 4, strlen (projPath)) != "Base")
			{	
				return GetProjDir (hprj)
			}
		}
	}
	//获取 当前目录, 不包括文件名
	return getBaseDir(GetBufName(hbuf), 0)
}
macro getBasePath(hbuf)
{
	//获取目录 6531E:
	hprj = GetCurrentProj ()
	//pathName = GetProjName (hprj)
	proPath = GetProjDir (hprj)
	
	// left 包含 right 返回0
	//ret = CompareEx(proPath, getSavePath(0), 1)//left 包含 right
	
	// 检测更多save路径
	n = getBaseType(proPath)
	type = n/10 *10
	
	if(type == 90)
	{
		return getSavePath(0)
	}
	else
	{
		return proPath
	}
}
macro getProjectPath(hbuf)
{
	var n
	prjPath = getKeyHead(hbuf, "prj")
	if(prjPath != ""){
		return prjPath
	}
	else{
		pathName = GetBufName(hbuf)
		n = getBaseDirNum(pathName)
		basePath = SearchPathFromNum("", n)
		return basePath
	}
}
macro getCurProject(pathName)
{
	//获取目录 6531E/project/SE039_XX, 考虑设置值:
	//先获取目录 6531E/project, 项目路径未设置即返回上级目录
	project = getProjectPath(pathName)
	ret = CompareEx(pathName, project, 1)//路径 包含"6531E/project"
	if(ret ==0)
	{
		//project后面的第一个DirName
		index = SplitMacro(pathName, "\\", strlen(project)+1, strlen(pathName))
		if(index<0)
		{
			msg("项目路径未设置, 请在 sbd_base.em 上添加")
			return ""
		}
		return strmid(pathName, 0, index)
	}
	else
	{
		//F1->9保存的DirName
		projectName = ReadMode(getMakeRow(0))
		if(projectName != null)
		{
			return project # "\\" # projectName
		}
	}
	return ""
}
macro getCurProjectName(pathName)
{
	//获取目录 SE039_.._F2:
	project = getProjectPath(pathName)
	ret = CompareEx(pathName, project, 1)//left 包含 right(包含6531E/project)
	if(ret ==0)
	{
		//project后面的第一个DirName
		index = SplitMacro(pathName, "\\", strlen(project)+1, strlen(pathName))
		return strmid(pathName, strlen(project)+1, index)
	}
	else
	{
		//F1->9保存的DirName
		projectName = ReadMode(getMakeRow(0))
		if(projectName != null)
		{
			return projectName
		}
	}
	return ""
}
macro getBaseType(pathName)
{
	// n == 10 or 20, 30...
	type = getBaseDirNum(pathName)
	return type/10 *10
}
macro getBaseKey(n)
{
	hbufConfig = GetPubKeyBuf(0)
	return getMacroValue(hbufConfig, n # "Key", 1)
}
macro getBaseOther(n, mode)
{
	hbufConfig = GetPubKeyBuf(0)
	return getMacroValue(hbufConfig, n # mode, 1)
}

//get path Num
macro SearchPathFromNum(hbufConfig, n)
{
	var err
	var lineStr
	err = ""
	
	if(!isNumber(hbufConfig))
	{
		hbufConfig = GetPubKeyBuf(0)
	}

	searchFor = "^" # n # "[ ]*="
	//SearchInBuf (hbufBase, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	sel = SearchInBuf(hbufConfig, searchFor, 0, 0, 0, 1, 0)
	if (sel != nil)
	{
		lineStr = GetBufLine(hbufConfig, sel.lnLast)
		//mar = GetLineMacro(lineStr)
		val = GetLineValue(lineStr)
		if(val != "")
		{
			val = ReplaceWord(val, ",", "")
			return val
		}
	}
	return err
}

//common
macro getBaseDir(pathName, start)
{
	var nlength
	var i
	nlength = strlen(pathName)

	i = nlength - 1 - start
	while ( i > 0)
	{
		ch = pathName[i]
		if ("\\" == "@ch@" || ":" == "@ch@")
			break
		i = i - 1
	}
	if(i > 0)
	{
		return strmid(pathName, 0, i)
	}
	else
	{
		return ""
	}
}

macro getBaseDirNum(pathName)
{
	var hbufConfig
	var basePath
	var i
	var ret
	var nlength
	
	hbufConfig = GetPubKeyBuf(0)
	nlength = strlen(pathName)
	i = 1		//文件名长度
	
	while (i < nlength)
	{
		ch = pathName[i]
		while ("\\" != "@ch@" && i < nlength)
		{
			i = i + 1
			ch = pathName[i]
		}
		
		basePath = strmid(pathName, 0, i)
		ret = SearchNumFromPath(hbufConfig, basePath)
		if(ret != "")
		{
			return ret
		}
		i = i + 1
	}
	return 0
}

//get path
macro SearchNumFromPath(hbufConfig, basePath)
{
	var err
	var lineStr
	err = ""

	basePath = ReplaceWord(basePath, "\\", "\\\\") //fRegExp = 1
	//=[ ]*xxxxx,
	searchFor = "=[ ]*" # basePath # "$"
	//SearchInBuf (hbufBase, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	sel = SearchInBuf(hbufConfig, searchFor, 0, 0, 0, 1, 0)
	if (sel != nil)
	{
		lineStr = GetBufLine(hbufConfig, sel.lnLast)
		mar = GetLineMacro(lineStr)
		//val = GetLineValue(cur_line)
		if(mar != "")
		{
			return mar
		}
	}
	return err
}

//get num
macro SearchNumFromKey(hbufConfig, keyVal, keyName)
{
	var err
	var lineStr
	err = ""

	searchFor = keyName # "[ ]*=[ ]*" # keyVal # "$"
	//SearchInBuf (hbufBase, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	sel = SearchInBuf(hbufConfig, searchFor, 0, 0, 0, 1, 0)
	if (sel != nil)
	{
		lineStr = GetBufLine(hbufConfig, sel.lnLast)
		marKey = GetLineMacro(lineStr)
		if(marKey != "")
		{
			mar = ReplaceWord(marKey, keyName, "")
			return mar
		}
	}
	return err
}

macro getPathFromKey(hbufConfig, keyVal)
{
	var num

	//项目路径 或 其他路径
	if(!isNumber(hbufConfig))
	{
		hbufConfig = GetPubKeyBuf(0)
	}
	
	//从值反向查找键
	num = SearchNumFromKey(hbufConfig, keyVal, "key")
	if(num != ""){
		//从键查找路径
		path = SearchPathFromNum(hbufConfig, num)
		if("" != path){
			return path
		}
	}
	return ""
}

macro getPathFromAlias(hbufConfig, keyVal)
{
	var num

	//总类别名
	if(!isNumber(hbufConfig))
	{
		hbufConfig = GetPubKeyBuf(0)
	}
	
	num = SearchNumFromKey(hbufConfig, keyVal, "alias")
	if(num != ""){
		path = SearchPathFromNum(hbufConfig, num)
		if("" != path){
			return path
		}
	}
	return ""
}

macro getToolPathFromKey(hbufConfig, keyVal)
{
	var num

	if(!isNumber(hbufConfig))
	{
		// cfg保存路径更简单
		hbufConfig = GetCommonPathBuf(0)
	}
	if(hbufConfig != hNil){
		path = getMacroValue(hbufConfig, keyVal # "Path", 1)
		if(path != ""){
			path = ReplaceWord(path, "^", " ")
			path = ReplaceWord(path, "\\", "\\\\")
			return "\"" # path # "\""
		}
	}
	return ""
}

