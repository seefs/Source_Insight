
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

macro ShellGetLikeFile(cmdStr)
{
	ShellExecute("open", "cmd_getLikeFile.bat", cmdStr, getCmdPath(0), 1)
}

macro ShellGetAsFileList(cmdStr)
{
	ShellExecute("open", "cmd_getAsFileList.bat", cmdStr, getCmdPath(0), 1)
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
	

