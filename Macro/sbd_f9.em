
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
    
	searchName = getKeyHead(hbuf, "search")
	if(searchName != "")
		StartF9Search(hbuf, searchName, "")
}

macro StartF9Search(hbuf, searchKey, filename_key)
{
	next = 0
	
	if(IsFileName(hbuf, "Macro_ALL_"))
	{
		close
	}
	else if(searchKey == "9820e")
	{
		sel = MGetWndSel(hbuf)
		if(filename_key == "")
		{
			if (IsSingleSelect(sel))
			{
				cur_line = GetBufLine(hbuf, sel.lnFirst )
				len    = strlen(cur_line)
				//删除前后空格，换行符
				start  = GetTransCmdS(cur_line,  sel.ichFirst,  len)
				next   = EndWS( cur_line, sel.ichLim )
				filename_key = GetTransStr(cur_line, start, next)
			}
			else
			{
				hbuf = OpenExistFile(getSearchAndroid(0) # searchKey)
				stop
			}
		}
		
		fI = FindString(filename_key, ".")
		if(fI != "X")
		{
			strEx = strmid(filename_key, fI + 1, strlen(filename_key))
			if(strEx == "c" || strEx == "h" || strEx == "java" || strEx == "mk" || strEx == "xml" || strEx == "xml" )
				file = "\\Macro_ALL_@searchKey@_" # toupper (strEx) # ".h"
			else if(strEx == "jpg" || strEx == "png" || strEx == "bmp" || strEx == "jif")
				file = "\\Macro_ALL_@searchKey@_" # "JPG_PNG" # ".h"
			else
				file = "\\Macro_ALL_@searchKey@_OTHER.h"
		}
		else
		{
			file = "\\Macro_ALL_@searchKey@_OTHER.h"
		}
		
		hSbuf = OpenCache(getSearchAndroid(0) # file)
		if(hSbuf != hNil)
		{
			//只能查文件名, 且不使用通配符
			filename_key = ReplaceWord(filename_key, "\\", "\\\\")
			filename_key = ReplaceWord(filename_key, "/", "\\\\")
			reTxt = ShowSearchMar(hSbuf, "\\\\" # filename_key # "$")
			if(reTxt == "")
			{
				//首字母大写, 重查一次(abc->Abc)
				ch = strmid(filename_key, 0, 1)
				dCh = AsciiFromChar (ch)
				if(dCh>=97 && dCh<=97+26)
				{
					filename_key = toupper (strmid(filename_key, 0, 1)) # strmid(filename_key, 1, strlen(filename_key))
					reTxt = ShowSearchMar(hSbuf, "\\\\" # filename_key # "$")
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
				AddAllFile(hbuf, hSbuf, sel.lnFirst + 1, filename_key)
				SaveBuf(hbuf)
			}
			else
			{
				if(next > 0)
				{
					iS = next - strlen(reTxt)
					//只有一条结果，并且相同
					if(iS >= 0)
					{
						oldTxt = strmid(cur_line, iS, next)
						oldTxt = ReplaceWord(oldTxt, "/", "\\")
						if(oldTxt == reTxt)
						{
							msg("相同")
							stop
						}
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
		//先打开文件名(功能没用)
		path = getPathFromKey(Nil, searchKey)
		hbuf = OpenExistFile(path # "\\" # filename_key)
		if (hNil == hbuf)
		{
			//再搜索文件名
			file = "\\Macro_ALL_@searchKey@.h"
			hbuf = OpenExistFile(getSearchC(0) # "\\" # file)
		}
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

