

//用固定目录打开文件, 手动修改以下Save目录, Tool目录
//这样, project->open project->base工程, 就不用添加很多文件了, 只用添加.em的目录


//1) Save目录
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
macro getDesktopPath(0)		{	return "E:\\desktop"				}


//3) 项目路径列表设置在文件: 打开对应文件手动修改
//  Save:node\\set\\Macro_Set_Base.h
macro getPathConfig(0)		{	return getSetPath(0) # "\\Macro_Set_Base.h"				}


//4) Custom project
//macro getCustomPath(0)		{	return "D:\\project"				}


//5) Tool目录
//Cmd
macro getBComparePath(0)	{	return "\"C:\\Program Files\\Beyond Compare 4\\BCompare.exe\""			}
//macro getBComparePath(0)	{	return "\"C:\\Program Files (x86)\\Beyond Compare 3\\BCompare.exe\""			}

//VC
macro getVCPath(0)			{	return "C:\\Program Files (x86)\\Microsoft Visual Studio\\Common\\MSDev98\\Bin\\MSDEV.EXE"		}

//VC2008
macro getVS08Path(0)		{	return "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7\\IDE\\devenv.exe"		}

//RAR
macro getRARPath(0)			{	return "\"C:\\Program Files (x86)\\360\\360zip\\360zip.exe\""		}



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
	else if(IsFileName(hbuf, "Macro_")||IsFileName(hbuf, "Simple_CTRL_"))
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
	
	ret = CompareEx(proPath, getSavePath(0), 1)//left 包含 right
	if(ret == 0)
	{
		return getSavePath(0)
	}
	else
	{
		return proPath
	}
}
macro getProjectPath(pathName)
{
	// n == 10: 6531DA
	// n == 20: 6531DB
	// n == 30: 6531E
	// n == 40: soft
	// n == 50: 6533
	// n == 60: 7701
	// n == 70: MTK
	n = getBaseDirNum(pathName)
	basePath = SearchPathFromNum("", n)
	
	//获取目录 6531E/project, 不考虑 C:
	//待改成getBaseProjectEx+"/project"
	if(n<10){ //0
		return basePath
	}
	else if(n<40){ //10,20,30
		return basePath # "\\project"
	}
	else if(n<60){ //40,50
		return basePath # "\\target"
	}
	else if(n<70){
		return basePath # "\\project"
	}
	else if(n==70){
		return basePath # "\\make"
	}
	else if(n<80){
		return basePath # "\\project"
	}
	else{
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
	// n == 10: 6531DA
	// n == 20: 6531DB
	// n == 30: 6531E
	// n == 40: soft
	// n == 50: 6533
	// n == 60: 7701
	// n == 70: MTK
	type = getBaseDirNum(pathName)
	return type/10 *10
}
macro getBaseFileType(pathName, s)
{
	//s=1~5:按note文件名排序分类;
	//s=1:Macro_ALL_XXX              搜索所有宏
	//s=2:Macro_Group_Make_XXX       分组(现在用不上)
	//	  Macro_Group_Menu_XXX
	//s=3:Macro_Note_XXX             笔记 
	//s=4:Macro_Rule_Key_file_XXX    F5--跳转功能
	//s=5:si_version_XXX             F1->V--搜索版本号
	type = getBaseType(pathName)
	if(type == 10 || type == 20 || type == 30)
	{
		if((s == 1 || s == 5) && type == 10)
		{
			baseFileType = "6531D"
		}
		else if((s == 1 || s == 5) && type == 20)
		{
			baseFileType = "6531DB"
		}
		else
		{
			baseFileType = "6531E"
		}
	}
	else if(type == 40 || type == 50)
	{
		if(s == 5)
		{
			baseFileType = ""
		}
		else if((s == 3) && type == 40)
		{
			baseFileType = "RDA"
		}
		else
		{
			baseFileType = "6533"
		}
	}
	else if(type == 60)
	{
		baseFileType = "7701"
	}
	else if(type == 70)
	{
		if(s == 5)
		{
			baseFileType = ""
		}
		else
		{
			baseFileType = "MTK"
		}
	}
	else if(type == 120 || type == 130)
	{
		if(s == 3)
		{
			//baseFileType = "Python"
			baseFileType = "Pythons"  //带s用模板2
		}
		else
		{
			baseFileType = ""
		}
	}
	else if(type == 140)
	{
		if(s == 1)
		{
			baseFileType = "9820e"
		}
		else if(s == 3)	//note
		{
			baseFileType = "9820e"
		}
		else
		{
			baseFileType = ""
		}
	}
	else
	{
		if(s == 2 || s == 4)
		{
			baseFileType = ""
		}
		else
		{
			baseFileType = "Base"
		}
	}
	return baseFileType
}



//get path
macro SearchNumFromPath(hbufConfig, basePath)
{
	var err
	err = 0
	
	basePath = ReplaceWord(basePath, "\\", "\\\\") //fRegExp = 1
	searchFor = "^" # "project:" # basePath # ","
	//SearchInBuf (hbufBase, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	sel = SearchInBuf(hbufConfig, searchFor, 0, 0, 0, 1, 0)
	if (sel != nil)
	{
		row = sel.lnLast
		return GetBufLine(hbufConfig, row - 1)
	}
	else
	{
		return err
	}
	
}

//get path Num
macro SearchPathFromNum(hbufConfig, n)
{
	var err
	err = ""

	if(!isNumber(hbufConfig))
	{
		hbufConfig = OpenCache(getPathConfig(0))
	}
	
	searchFor = "^" # n # "$"
	//SearchInBuf (hbufBase, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	sel = SearchInBuf(hbufConfig, searchFor, 0, 0, 0, 1, 0)
	if (sel != nil)
	{
		row = sel.lnLast
		line = GetBufLine(hbufConfig, row + 1)
		return strmid(line, strlen("project:"), strlen(line) - 1)
	}
	else
	{
		return err
	}
	
}

//common
macro getBaseDir(pathName, start)
{
	hbufConfig = OpenCache(getPathConfig(0))

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
	var n
	var nlength
	
	hbufConfig = OpenCache(getPathConfig(0))
	nlength = strlen(pathName)
	i = 1		//文件名长度
	
	while (i < nlength)
	{
		ch = pathName[i]

		if(nlength-1 == i)
		{
			i = i + 1
		}
		else if ("\\" != "@ch@")
		{
			i = i + 1
			continue
		}

		basePath = strmid(pathName, 0, i)
		n = SearchNumFromPath(hbufConfig, basePath)
		if(n)
		{
			//单数为只是SI目录, 前一项为真实目录(目录分开)
			if(n-n/2*2==1)
			{
				n = n - 1
			}
			return n
		}
		i = i + 1
	}
	return 0
}


macro OpenBaseTest(hbuf)
{
	
}


