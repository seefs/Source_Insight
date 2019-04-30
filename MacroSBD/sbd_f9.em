
macro SearchFile()
{
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	if(IsMacroFile(hbuf))
	{
		OpenExistFile("sbd_test.em")
    	stop
	}
    

	bft = getBft(1)
//	bft = getBufBft(hbuf, 1) //只能用一个, 先不改了
//	if(bft == "")
//		stop
	//bft = "9820e" //test

	file = "\\search\\Macro_ALL_@bft@.h"
	
	if(IsFileName(hbuf, "Macro_ALL_"))
	{
		close
	}
	else if(bft == "9820e")
	{
		sel = MGetWndSel(hbuf)
		if (IsSingleSelect(sel))
		{
			cur_line = GetBufLine(hbuf, sel.lnFirst )		
			 //选中最后一行，带换行符会出错
			if(strlen(cur_line) < sel.ichLim)
				sel.ichLim = sel.ichLim - 1
			if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
				stop
			cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)

			fI = FindString(cur_sel, ".")
			if(fI != "X")
			{
				strEx = strmid(cur_sel, fI + 1, strlen(cur_sel))
				if(strEx == "c" || strEx == "h" || strEx == "java" || strEx == "mk" || strEx == "xml" || strEx == "xml" )
					file = "\\search\\Macro_ALL_@bft@_" # toupper (strEx) # ".h"
				else if(strEx == "jpg" || strEx == "png" || strEx == "bmp" || strEx == "jif")
					file = "\\search\\Macro_ALL_@bft@_" # "JPG_PNG" # ".h"
				else
					file = "\\search\\Macro_ALL_@bft@_OTHER.h"
			}
			else
			{
				file = "\\search\\Macro_ALL_@bft@_OTHER.h"
			}
			//msg(file)  //test
			
			hSbuf = OpenCache(getNodePath(0) # file)
			if(hSbuf != hNil)
			{
				//只能查文件名, 且不使用通配符
				cur_sel = ReplaceWord(cur_sel, "\\", "\\\\")
				cur_sel = ReplaceWord(cur_sel, "/", "\\\\")
				reTxt = ShowSearchMar(hSbuf, "\\\\" # cur_sel # "$")
				if(reTxt == "")
				{
					//首字母大写, 重查一次
					ch = strmid(cur_sel, 0, 1)
					dCh = AsciiFromChar (ch)
					if(dCh>=97 && dCh<=97+26)
					{
						cur_sel = toupper (strmid(cur_sel, 0, 1)) # strmid(cur_sel, 1, strlen(cur_sel))
						reTxt = ShowSearchMar(hSbuf, "\\\\" # cur_sel # "$")
					}
				}
				
				//查询结果
				if(reTxt == "")
				{
					msg("无")
				}
				else if(reTxt == "All")
				{
					msg("添加全部文件名?")
					AddAllFile(hbuf, hSbuf, sel.lnFirst + 1, cur_sel)
					SaveBuf(hbuf)
				}
				else
				{
					iS = sel.ichLim - strlen(reTxt)
					if(iS >= 0)
					{
						oldTxt = strmid(cur_line, iS, sel.ichLim)
						oldTxt = ReplaceWord(oldTxt, "/", "\\")
						if(oldTxt == reTxt)
						{
							msg("相同")
							stop
						}
					}
					//不相同
					msg(reTxt)
					InsBufLine(hbuf, sel.lnFirst + 1, "@reTxt@")
					SaveBuf(hbuf)
				}
			}
		}
		else
		{
			hbuf = OpenExistFile(getNodePath(0) # file)
		}
	}
	else
	{
		hbuf = OpenExistFile(getNodePath(0) # file)
	}
	
}



macro ShowSearchMar(hbuf, searchStr)
{
	mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
	allKeyTxt = ""
	index = 1
	indexMin = 1
	indexMax = indexMin + 40
	line = ""
	reTxt = ""

	while (mSel != "" && index < indexMax)
	{
		line = GetBufLine(hbuf, mSel.lnFirst )
		{
			numStr = (index-indexMin+1)
			allKeyTxt = allKeyTxt # numStr # "." # line # CharFromKey(13)
			index = index + 1
		}
		mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
	}
	index = index - 1
	if(index == 1)
	{
		reTxt = line
	}
	else if(index > 1)
	{
		msg(allKeyTxt)
		reTxt = GetSearchMar(hbuf, searchStr, index)
		if(reTxt == "")
			reTxt = "All"
	}
	return reTxt
}

macro GetSearchMar(hbuf, searchStr, indexMax)
{
	mIndex = 0
	bit = indexMax
	//2位数需求输入1~2个数
	while (bit > 0 && mIndex*10 <= indexMax)
	{
		key = GetKey()
		//输入0-9a-z, 返回0-9+26
		i = GetNumFromKey(key, 10 - 1)
		if(i >= 0)
		{
			mIndex = mIndex*10+i
		}
		bit = bit/10
	}
//	mIndex = mIndex - 1
	if (mIndex > indexMax)
		mIndex = indexMax
	
	reTxt = ""
	if (mIndex>0)
	{
		mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
		index = 1

		while (mSel != "")
		{
			line = GetBufLine(hbuf, mSel.lnFirst )
			if(index == mIndex)
			{
				reTxt = line
				break
			}
			index = index + 1
			mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
		}
	}
	return reTxt
}

macro AddAllFile(hbuf, hSbuf, curLn, searchStr)
{
	line = ""
	mSel = SearchInBuf(hSbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
	while (mSel != "")
	{
		line = GetBufLine(hSbuf, mSel.lnFirst )
		InsBufLine(hbuf, curLn, "@line@")
		curLn = curLn + 1
		mSel = SearchInBuf(hSbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
	}
}
//key:F1->V
macro SearchVersion(hbuf)
{
	var mMacro
	var mFile
	var mWord
	
	if(IsMacroFile(hbuf))  //测试
	{
		mMacro="OpenCache"
		mWord = "MacroSBD"
		mFile = "sbd_f9.em"
		
		SearchVersionExt(hbuf, mFile, mMacro, mWord)
	}
	else
	{
		mMacro="_MOCOR_SW_VERSION_"
		mFile = "version_software_mocor.h"

		//sel = MGetWndSel(hbuf)
		if (1)//IsNoSelect(sel)) 
		{
			//剪切板内容
			mWord = GetClipString(hbuf)
		}
		else
		{
			//当前选择内容
			mWord = GetBufLine(hbuf, sel.lnFirst )
			if(strlen(mWord) < sel.ichLim)
				sel.ichLim = sel.ichLim - 1
			if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
				stop
			mWord = strmid(mWord, sel.ichFirst, sel.ichLim)
		}
		if(mWord == "")
		{
			stop
		}
		SearchVersionExt(hbuf, mFile, mMacro, mWord)
	}
}
macro SearchVersionExt(hbuf, mFile, mMacro, mWord)
{
	var pathname
	var filename
	var verFile
	var verSel
	//var verCount

	verCount = 0
	
	
	bft = getBft(5)
//	if(bft == "")
//		stop
	verFile = getNodePath(0) # "\\version\\si_version_@bft@.h"
	verBuf = OpenCache(verFile)

	verSel = SearchInBuf(verBuf, mWord, 0, 0, FALSE, FALSE, FALSE)

	lnMax = GetBufLineCount(verBuf)
	//msg ("verSel @verSel@ verFile @verFile@")

	//搜索结果保存在临时文件中，如果没搜索到，更新临时文件
	if (verSel == nil)
	{
		msg("开始更新所有版本号")
		isSave = TRUE
		EmptyBuf(verBuf)
		
		// for each project file...
		ifileMac = GetProjFileCount(hprj)
		ifile = 0
		//msg ("ifileMac @ifileMac@")
		while (ifile < ifileMac)
		{
			pathname = GetProjFileName(hprj, ifile)
			filename = GetFileName(pathname)

			if (filename == mFile)
			{
				ipath = GetRelativelyDir(pathname, baseDir, filename)
				hbuf = OpenBuf(pathname)
				if (hbuf != hNil)
				{
					//verCount = verCount + 1
					sel = SearchInBuf(hbuf, mMacro, 0, 0, FALSE, FALSE, FALSE)
					//msg ("sel @sel@ pathname @pathname@")
					if (sel != nil)
					{							
						lineStr = ipath # "," # GetBufLine(hbuf, sel.lnFirst) # "," # sel.lnLast
						AppendBufLine(verBuf, "@lineStr@")
					}
					CloseBuf(hbuf)
				}
			}
			
			// next ifile
			ifile = ifile + 1
		}
		SaveBuf(verBuf)
		verSel = SearchInBuf(verBuf, mWord, 0, 0, FALSE, FALSE, FALSE)
		//msg ("verSel @verSel@ verCount @verCount@")

	}
	
	//SR: 搜索结果保存到这个窗口
	baseSR = OpenDefaultSR(hbuf)
	AppendBufLine(baseSR, "----version: @mWord@")
	if (verSel != nil)
	{
		var ichCommp
		//目录可能包括E:\6531E 也可能不包括
	    if(SplitMacro(baseDir, ":", 0, strlen(baseDir)>0)
	    {
	    	baseDir = ""
	    }
	    else
	    {
			baseDir = baseDir # "\\"
	    }
	    
		while (verSel != "")
		{
			line = GetBufLine(verBuf, verSel.lnFirst )
			ilen = strlen(line)
			
			ichComm1 = SplitMacro(line, ",", 0, ilen)
			ichComm2 = SplitMacro(line, ",", ichComm1+1, ilen)
			//ichComm3 = SplitMacro(line, ",", ichComm2+1, ilen)
			
			ipath    = strmid(line, 0, ichComm1)
			iversion = strmid(line, ichComm1+1, ichComm2)
			irow 	 = strmid(line, ichComm2+1, ilen)
			//irow 	 = strmid(line, ichComm2+1, ichComm3)
			//pathname = strmid(line, ichComm3+1, ilen)
			
			lnMax = GetBufLineCount(baseSR)
			lineStr = mFile # " (@ipath@):@iversion@"
			AppendBufLine(baseSR, "@lineStr@")
			
			//创建一个新的源链接
			SetSourceLink (baseSR, lnMax, baseDir # ipath # "\\" # mFile, irow)
			//SetSourceLink (baseSR, lnMax, baseDir # pathname, irow)
			
			//verSel = SearchInBuf(verBuf, mWord, verSel.lnLast, verSel.ichLim, 0, 0, 0)
			verSel = SearchInBuf(verBuf, mWord, verSel.lnLast+1, 0, 0, 0, 0)
		}
	}
	else
	{
		AppendBufLine(baseSR, "----no found version, pls update svn and add si file.")
	}
	SaveBuf(baseSR)
	
	hwnd = GetCurrentWnd()
	lnTop = GetWndVertScroll(hwnd);
	cLines = GetWndLineCount(hwnd);
	lnMax = GetBufLineCount(baseSR)
	if (lnTop + cLines + 2 < lnMax)
	{
		lnTop = lnMax - cLines + 1 + 5;
		ScrollWndToLine(hwnd, lnTop); 
	}
	CloseBuf(verBuf)
}

macro FunTotal(hbuf)
{
	sel = MGetWndSel(hbuf)
	cur_line = GetBufLine(hbuf, sel.lnFirst )
	
	//显示所有文件数量+分类
	//fftype = ".em"
	fftype = "." # cur_line
	ffCount = FunTotalCalc(hbuf, fftype)
	
	//在末尾加 = TRUE
	strNew = cur_line # ": " # ffCount
	PutBufLine(hbuf, sel.lnFirst, strNew);
}
macro FunTotalCalc(hbuf, type)
{
	var pathname
	var filename
	var verSel
	var ffCount

	ffCount = 0
	
	hprj = GetCurrentProj ()
	
	// for each project file...
	ifileMac = GetProjFileCount(hprj)
	if(type == "" || type == ".")
	{
		return ifileMac
	}
	ifile = 0
	//msg ("ifileMac @ifileMac@")
	while (ifile < ifileMac)
	{
		pathname = GetProjFileName(hprj, ifile)
		filename = GetFileName(pathname)
		//type = ".java" ".c" 
		isF = IsFileType(filename, type)

		if (isF)
		{
			ffCount = ffCount + 1
		}
		
		// next ifile
		ifile = ifile + 1
	}
	return ffCount
}

//测试
macro SearchTest(hbuf)
{
	//SearchVersion(hbuf)
}


