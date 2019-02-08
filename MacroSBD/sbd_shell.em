
/***********************************************************************/
/****************************    Shell  *********************************/
/***********************************************************************/

macro ShellAddLink(path1, path2)
{
	//_TempHeadShell()
	ShellExecute("open", "cmd_base.bat", "ln -s @path1@ @path2@", getCmdPath(0), 1)
}

macro ShellAddLinkCygwin(path1, path2)
{
	//cygwin与mtk冲突, 暂时在bat中手动添加
	ShellExecute("open", "cmd_base_cygwin.bat", "ln -s @path1@ @path2@", getCmdPath(0), 1)
}

macro ShellBCompare(path1, path2)
{
	cmdStr = getBComparePath(0)
	ShellExecute("open", "cmd_base.bat", cmdStr # " @path1@  @path2@", getCmdPath(0), 1)
}

macro ShellOpenBuild(path)
{
	path = "F:\\6531E_16A\\build"
	ShellExecute("open", "cmd_base.bat", "start @path@", getCmdPath(0), 1)
}

macro ShellOpenCustomCmd(cmdStr)
{
	ShellExecute("open", "cmd_base.bat", cmdStr, getCmdPath(0), 1)
}

macro ShellOpenCmd(path, file)
{
	if(file == "")
	{
		ShellExecute("open", "cmd.exe", "", path, 1)
		return 1
	}
	
	hbuf = OpenCache(path # "\\" # file)
	if (hbuf != hNil){
		CloseBuf(hbuf)
		ShellExecute("open", file, "", path, 1)
		return 1
	}else
	{
		return 0
	}
}
/***********************************************************************/
/****************************    search  *********************************/
/***********************************************************************/
macro ShellAddParam(param)
{
	//_TempHeadShell()
	//bat命令中才用相对目录
	pFile = "..\\Cmd_TXT\\si_param.h"
	ShellExecute("open", "cmd_base.bat", "echo @param@>> @pFile@", getCmdPath(0), 1)
}

macro ShellClearParam(pNil)
{
	pFile = "..\\Cmd_TXT\\si_param.h"
	ShellExecute("open", "cmd_base.bat", "echo.>@pFile@", getCmdPath(0), 1)
}

macro ShellFind(pNil)
{
	ShellExecute("open", "sbd_find.bat", "", getCmdPath(0), 1)
}

/***********************************************************************/
/****************************    Svn  *********************************/
/***********************************************************************/
macro ShellSvnUpdate(path)
{
	//_TempHeadShell()
	cmdStr = "TortoiseProc.exe"
	if(path != "")
	{
		ShellExecute("open", "cmd_base.bat", "@cmdStr@ /command:update /path:@path@ /closeonend:0", getCmdPath(0), 1)
	}
}

macro ShellSvnCommit(path, svnMsg)
{
	cmdStr = "TortoiseProc.exe"
	if(path != "")
	{
		ShellExecute("open", "cmd_base.bat", "@cmdStr@ /command:commit /path:@path@ /logmsg:update @svnMsg@", getCmdPath(0), 1)
	}
}

macro ShellSvnLog(path)
{
	cmdStr = "TortoiseProc.exe"
	if(path != "")
	{
		ShellExecute("open", "cmd_base.bat", "@cmdStr@ /command:log /path:@path@", getCmdPath(0), 1)
	}
}

macro ShellSvnDiff(path1, path2)
{
	cmdStr = "TortoiseProc.exe"
	if(path2 != "")
	{
		ShellExecute("open", "cmd_base.bat", "@cmdStr@ /command:diff /path:@path1@ /path2:@path2@", getCmdPath(0), 1)
	}
	else
	{
		ShellExecute("open", "cmd_base.bat", "@cmdStr@ /command:diff /path:@path1@", getCmdPath(0), 1)
	}
}
	
/***********************************************************************/
/****************************    Test  *********************************/
/***********************************************************************/
macro OpenShellTest(hbuf)
{
	//_TempHeadShell()
	var v
	v = "cmd" //参数个数最多7个，见 cmd_base.bat

	 
	if(v == "cmd")
	{
		path = "F:\\6531E_16A\\build"
		//ShellExecute("open", "cmd.exe", "F:;cd @path@;", "C:\\Windows\\System32", 1)
	}
	else if(v == "ShellSvnLog")
	{
		path = "F:\\6531E_16A\\project\\SE039_YST_T18_LINNEX_LE01_F2"
		ShellSvnLog(path) 
	}
	else if(v == "SvnDiff")
	{
		path1 = "F:\\6531E_16A\\project\\SE039_YST_T18_LINNEX_LE01_F2"
		//path2 = "F:\\6531DA_Btdialer\\version"
		ShellSvnDiff(path1, path2)
	}
}

