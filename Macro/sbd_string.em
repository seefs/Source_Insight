
macro ChkRepeat(hbuf)
{
	//检查重复
	//参考：TrimSpaces()
	
	//_TempString(hbuf)
	var msgRpt
	msg ("检查重复 (每个MK 48S左右, 按yes继续)")

	hwnd = GetCurrentWnd()
	sel = GetWndSel(hwnd)

	//1.区分全选，部分选中
	if (sel.fExtended)
	{
		// use selected lines
		ln = sel.lnFirst
		lnLim = sel.lnLast + 1
	}
	else
	{
		// process the whole file buffer
		ln = 0
		lnLim = GetBufLineCount(hbuf)
	}

	chkBuf = OpenCache("ChkRepeat")
	//ShowCache(chkBuf)
	EmptyCache(chkBuf)
	lnMax = 0
	
	//2.获取宏名称,加入文件
	// do for each line....
	while (ln < lnLim)
	{
		s = GetBufLine(hbuf, ln)
		mcr = GetLineMacro(s)
		//msg ("mcr:"  # "@mcr@")
		if(mcr != ""){
		
			/*不考虑重复*/
			AppendBufLine(chkBuf, mcr)
			
			/*考虑重复会比较慢*/
			/*
			ret = AppendCache(chkBuf, mcr, lnMax)
			if(ret>0)//重复
			{
				msgRpt = msgRpt # mcr # CharFromKey(13)
			}
			else
			{
				lnMax = lnMax + 1
			}
			//ShowCache(chkBuf)
			*/
		}
		ln = ln + 1
	}
	//InsBufLine(chkBuf, 0, "xx0")
	//PutBufLine(chkBuf, 0, "xx1")
	//DelBufLine(chkBuf, 0)
	//ShowCache(chkBuf)
	
	global counter
	counter = 0
	
	/*不考虑重复*/
	QuickSoftCache(chkBuf, 0, GetBufLineCount(chkBuf) - 1)	//排序
	ShowCache(chkBuf)
	//msg ("重复:"   # CharFromKey(13) # "@msgRpt@")
	msg ("counter:"   # CharFromKey(13) # "@counter@")
	return msgRpt;
}

macro SplitMacro(lnStr, ch, start, len)
{
	//拆分字符 
	//SplitMacro("MAINLCD_DEV_SIZE", "_", 9, len)
	//返回index:-1,0~len-1
	
	//_TempString(hbuf)
	n = start
	// do for each line....
	while (n < len)
	{
		if (lnStr[n] != "@ch@")
		{
			n = n + 1
			continue
		}
		else
		{
			return n
		}
	}
	return -1
}

macro GetLineMacro(lnStr)
{
	//获取宏，不包括删除注释（# , Tab 空格 =）
	
	//_TempString(hbuf)
	//msg ("GetLineMacro:" # "@lnStr@ ")
	len = strlen (lnStr)
	n = 0
	start = 0
	// do for one line....
	while (n < len )
	{
		if(start==0)
		{
			if (lnStr[n] == " " || AsciiFromChar(lnStr[n]) == 9)
			{
				n = n + 1
				continue
			}
			if (lnStr[n] == "#")
			{
				n = n + 1
				break
			}
			else
			{
				//cch = lnStr[n]
				//msg ("@n@ " # "@cch@ ")
				start = n + 1
			}
		}
		else
		{
			if (lnStr[n] == " " || AsciiFromChar(lnStr[n]) == 9 || lnStr[n] == "#" || lnStr[n] == "=" || lnStr[n] == ",")//"." ":"
			{
				break
			}
		}
		n = n + 1
	}
	if(start==0)
	{
		return ""
	}
	else
	{
		mcr = strmid(lnStr, start - 1, n);
		return mcr
	}
}
macro GetLineValue(lnStr)
{
	len = strlen (lnStr)
	n = 0
	// do for each line....
	while (n < len )
	{
		if (lnStr[n] == "=")
		{
			break
		}
		n = n + 1
	}
	n = n + 1
	
	while (n < len )
	{
		if (lnStr[n] != " " && AsciiFromChar(lnStr[n]) != 9 )
		{
			break
		}
		n = n + 1
	}
	
	start = n
	while (n < len )
	{
		if (lnStr[n] == " " || lnStr[n] == "#" || AsciiFromChar(lnStr[n]) == 9 )
		{
			break
		}
		n = n + 1
	}
	if(start > n || start >= len)
	{
		return ""
	}
	return strmid(lnStr, start, n);
}

macro GetWholeMacro(cur_line, sel)
{
	//获取完整宏，只能检查Ascii
	
	//_TempString(hbuf)
	c0 = AsciiFromChar("0")
	c9 = AsciiFromChar("9")
	cBigA = AsciiFromChar("A")
	cBigZ = AsciiFromChar("Z")
	cLitA = AsciiFromChar("a")
	cLitZ = AsciiFromChar("z")
	cb = AsciiFromChar("_")
	len = strlen(cur_line)

	i = sel.ichFirst - 1
	ret = 1
	
	while (0 <= i)
	{
		ch = AsciiFromChar(cur_line[i])
		if ((ch >= c0 && ch <= c9) || (ch >= cBigA && ch <= cBigZ) || (ch >= cLitA && ch <= cLitZ) || ch == cb)
		{
			i--
		}else{
			break
		}
	}
	j = sel.ichLim
	while (j < len)
	{
		ch = AsciiFromChar(cur_line[j])
		if ((ch >= c0 && ch <= c9) || (ch >= cBigA && ch <= cBigZ) || (ch >= cLitA && ch <= cLitZ) || ch == cb)
		{
			j++
		}else{
			break
		}
	}
	return strmid(cur_line, i+1, j)
}

macro GetSpaceStrlen(str, sublen)
{
	strNew = ReplaceWord(str, " ", "")
//	16_char_len = 2X18_space_len: chg: 9/4 --> 21/8
	spNum1 = (sublen - strlen(strNew))*21/8
	spNum2 = (strlen(str)-strlen(strNew))
	spNum3 = spNum1 - spNum2
//	msg("spNum1->" # spNum1 # " spNum2->" # spNum2 # " spNum3->" # spNum3)
	return spNum3
}
macro GetSpaceStrMid(noteWord, newlen)
{
	var ret
	ret = ""
	cmplen = 0
	len = strlen( noteWord )

//	4_char_len = 9_space_len
	cp = 0
	while( cp < len && cmplen < newlen*9-2)
	{
//	msg(cp # "->>" # cmplen # " "  # (cmplen/9) # " ~ " # newlen # " " # (newlen*9-2)/9 # " " # len)
		if(strmid(noteWord, cp, cp + 1) == " ")
		{
			cmplen = cmplen + 4
		}
		else
		{
			cmplen = cmplen + 9
		}
		cp = cp + 1
	}
	if(cp < len)
	{
		ret = strmid(noteWord, 0, cp)
	}
	return ret
}
macro GetFileNameType(str, p_Type)
{
	//(fileType当分隔符用)
	//获取文件名称类型     project_SE022_XX.mk (project..  ->  (.mk)
	
	//_TempString(hbuf)
	cSolid = AsciiFromChar(".")
	cSpace = AsciiFromChar(" ")
	len = strlen(str)
	
	i = 0
	iSolid = 0
	
	while (i < len)
	{
		ch = AsciiFromChar(str[i])
		if (ch == cSolid)
		{
			ret = 0
			break
		}
		i++
	}
	if(i > 0 && i < len)
	{
		iSolid = i
		while (i < len)
		{
			ch = AsciiFromChar(str[i])
			if (ch == cSpace)
			{
				ret = 0
				break
			}
			i++
		}
	}
	if(p_Type != "")
	{
		if(p_Type == strmid(str, iSolid, i))
		{
			return i
		}
		else
		{
			return 0
		}
	}
	else
	{
		if(iSolid > 0 && iSolid < len)
		{
			return strmid(str, iSolid, i)
		}
		else
		{
			return ""
		}
	}
}

macro ShowSelAscii(hbuf)
{
	//_TempString(hbuf)
	ret = ""
	sel = MGetWndSel(hbuf)
	if (IsSingleSelect(sel)) //有选择
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		len = strlen(cur_sel)
		j = 0
		while (j < len)
		{
			ch = AsciiFromChar(cur_sel[j])
			ret = ret # "@ch@ "
			j++
		}
	}
	msg(ret)
}
macro DeleteTxtRight(hbuf, ln, fileType)
{
	//清除.mk右侧内容，用于对比(fileType当分隔符用)
	
	//_TempString(hbuf)
	cur_line = GetBufLine(hbuf, ln)
	index = GetFileNameType(cur_line, fileType)
	if (index > 0) //未选择
	{
		new_line = strmid(cur_line, 0, index)
		PutBufLine(hbuf, ln, new_line)
		return 0;
	}
	else
	{
		return 1;
	}
}

macro DeleteTxtRightMk(hbuf)
{
	//清除.mk右侧内容，fileType当分隔符用
	
	//_TempString(hbuf)
	sel = MGetWndSel(hbuf)
	if (IsSRFile(hbuf) && IsHasSelect(sel)) //有选择
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		file_type = GetFileNameType(cur_line, "")
		
		if (file_type != "")
		{
			i = sel.lnFirst
			ret = 0
			while (ret == 0 && i <= sel.lnLast)
			{
				ret = DeleteTxtRight(hbuf, i, file_type)
				i++
			}
		}
	}
}
macro DeleteMkComment(key)
{
	/清除.mk注释（功能没用，未写完）
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	stop
	}
	
	//_TempString(hbuf)
	sel = MGetWndSel(hbuf)
	if (IsSRFile(hbuf) && IsHasSelect(sel)) //有选择
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		file_type = GetFileNameType(cur_line, "")
		FindString(cur_line, "#" )
		if (file_type != "")
		{
			i = sel.lnFirst
			ret = 0
			while (ret == 0 && i <= sel.lnLast)
			{
				ret = DeleteTxtRight(hbuf, i, file_type)
				i++
			}
		}
	}
}

macro ReplaceWord(noteWord, search_str, replace_str)
{
	var ret
	ret = ""
	
	len = strlen( noteWord )
	lenStep = strlen(search_str)

	//test1:  "^^^sss^^^ddd^eee^^^"
	//test2:  "a\\\\bb\\cc\\dd\\\\"
	cp = 0
	while( cp < len - lenStep + 1)
	{
		//msg(strmid(noteWord, cp, cp + lenStep) # "==" # search_str)
		//msg(cp # "x" # lenStep)
		if(strmid(noteWord, cp, cp + lenStep) == search_str)
		{
			ret = ret # replace_str
			last_s = cp + lenStep
			cp = cp + lenStep
		}
		else
		{
			ret = ret # noteWord[cp]
			last_w = cp + 1
			cp = cp + 1
		}
	}
	if(cp < len)
	{
		ret = ret # strmid(noteWord, cp, len)
	}
	return ret
}

