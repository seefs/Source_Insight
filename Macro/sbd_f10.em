
macro Group()
{
	//_TempHeadF10(hbuf)
	hwnd = GetCurrentWnd()
	hbuf = GetCurrentBuf()
	
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	
	if(IsFileName(hbuf, "Simple_CTRL_B"))
	{
		CodeAlign(hbuf)
		stop
	}
	else if(IsMakeFile(hbuf))
	{
		//*.mk 中 同F12
		ShowMacro()
		stop
	}
	else if(IsNoteFile(hbuf))
	{
		//跳到目录
		NoteGroup(hbuf)
		stop
	}
	else if(IsMacroFile(hbuf)||IsScriptFile(hbuf))
	{
		//如显示 func 组
		ShowMacroGroup(hbuf)
		stop
	}
	else
	{
		//空格对齐
		CodeAlign(hbuf)
		stop
	}
}

macro NoteGroup(hbuf)
{
	mGroup = getKeyHead(hbuf, "dGroup")
	if(mGroup != "")
	{
		mSel = SearchInBuf(hbuf, "^@mGroup@", 0, 0, 0, 0, 0)
		if (mSel != "")
		{
			ScrollCursor(mSel)
			return 1
		}
	}
	return 0
}
macro GetNumFromKey(key, count)
{
	if (key >= 49 && key <= 57 && (key - 48) <= count)
	{
		return (key - 48)
	}
 	else if(key == 48)
	{
	 	if(10 <= count)
			return (10)
 		else
			return (0)
	}
 	else if(key >= 97 && (key - 97 + 11) <= count)
	{
		return (key - 97 + 11)
	}
	return -1
}
macro GetKeyExt(count)
{
	key = GetKey()
	return GetNumFromKey(key, count)
}
macro GetKeyStr(index)
{
	if (index >= 1 && index <= 9)
	{
		return (index # "")
	}
 	else if(index == 10)
	{
		return "0"
	}
 	else if(index > 10)
	{
		return CharFromKey(index - 11 + 97)
	}
	return ""
}

//////////////////////////////////////////////////////////////
macro ShowMacroGroup(mBuf)
{
	//_TempHeadF10(hbuf)
	if(IsMacroFile(mBuf))
	{
		mKey = "^macro "
	}
	else 
	{
		mKey = "def " //class
	}
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, TRUE, FALSE)
	menuMsg = ""
	mLen = strlen(mKey) - 1
	index = 0

	{
		//测试对齐
//		mlen = 50
//		tlay_space = "                              " //c>=2
//		tlay_space = tlay_space # tlay_space # tlay_space # tlay_space # tlay_space
//		a1 = "edddaaabbbcccaaabbbcc_aaabbbcccaaabbbcccaaabbbccc"
//		la1 = GetSpaceStrlen(a1, mlen)
//		a2 = strmid(tlay_space, 0, la1) # "xxx"
//
//		b1 = "edddaaabb    aaab    _aaab    caa    accaaabbbccc"
//		lb1 = GetSpaceStrlen(b1, mlen)
//		b2 = strmid(tlay_space, 0, lb1) # "xxx"
//		
//		c1 = "edddaaabbbcccaaabbbcc_aaabbbcccaaabbbcccaa   bccc"
//		lc1 = GetSpaceStrlen(c1, mlen)
//		c2 = strmid(tlay_space, 0, lc1) # "xxx"
//		
//		d1 = "edddaaabbbcccaaabbbcc_a bbcc"
//		ld1 = GetSpaceStrlen(d1, mlen)
//		d2 = strmid(tlay_space, 0, ld1) # "xxx"
//
//		msg(la1 # " " # lb1 # " " # lc1 # " " # ld1)
//		
//		c1 = a1 # a2 # CharFromKey(13) # b1 # b2 # CharFromKey(13) # c1 # c2 # CharFromKey(13) # d1 # d2 # CharFromKey(13)
//		msg(c1)
	}

	{
		//测试最多显示，21行65字，22行175字，44行
//		a1 = "awwwwawww_bwwwwawww_cwwwwawww_dwwwwawww_ewwwwawww_fwwwwwwww_gwwwwawww_hwwwwawww_iwwwawwww"
//		a1 = "100001000_200002000_300003000_400004000_500005000_600006000_700007000_800008000_900009000_a0000a000_"
//		b1 = a1 # CharFromKey(13)
//		c1 = b1 # b1 # b1 # b1 # b1 # ""
//		d1 = c1 # c1
//		d1 = c1 # c1 # c1 # c1 # "" # b1 # "x" //23row
//		d1 = c1 # c1 # c1 # c1 # c1 # c1 # c1 # c1 # "" # b1 # b1 # b1 # b1 //44row,full screen
//		msg(d1)
	}
	
	{
		//测试global
//		global lay_test //cmp
//		if(!IsNumber (lay_test))
//			lay_test = 10
//		lay_test_tmp = lay_test - 1
//		lay_test = lay_char_num
		//按取消重新计数
//		msg(lay_test_tmp)
//		lay_test = lay_test_tmp
	}
	
	//chg layout
	global lay_type
	if(!IsNumber (lay_type))
		lay_type = 1
	
//	测试最多显示:
//	1) 0  ~ 21 行 数字 65个 字母 45个
//	2) 22 ~ 44 行 数字175个 字母145个
//	3) 45 ~ 88 行 数字 87个 字母 72个
//	4) 89 ~ 132行 数字 58个 字母 48个
	if(lay_type == 1)
	{
		lay_column = 1
		lay_space_row = 5 //1,5
		lay_char_num = 44 //45
	}
	else if(lay_type == 2)
	{
		lay_column = 1
		lay_space_row = 5 //1,5
		lay_char_num = 142 //145
	}
	else if(lay_type == 3)
	{
		lay_column = 2
		lay_space_row = 5 //1,5, space=2*5
		lay_char_num = 54 //72
		
		lay_space = "                              " //c>=3
		lay_space = lay_space # lay_space # lay_space # lay_space # lay_space # lay_space # lay_space # lay_space # lay_space
	}
	else if(lay_type == 4)
	{
		lay_column = 3
		lay_space_row = 5 //1,5, space=3*5
		lay_char_num = 32 //48
		
		lay_space = "                              " //c>=3
		lay_space = lay_space # lay_space # lay_space # lay_space # lay_space # lay_space
	}
	lay_cur_column = 1
	lay_cur_row = 1
//	msg(lay_type # "-" # lay_cur_column # " " # lay_column # " " # lay_space_row # " " # lay_char_num)

	indexTmp = 0
	while (mSel != "")
	{
		index = index + 1
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		if(IsMacroFile(mBuf))
		{
			curItem = strmid(line, mLen, ilen)
		}
		else 
		{
			curItem = line
		}
		row = mSel.lnFirst + 1
		
		//chg layout
		if(index > 132)
		{
			curItem = ""
		}
		else if(lay_cur_column < lay_column)
		{
			curItem = "@row@ @curItem@"
			if(GetSpaceStrlen(curItem, lay_char_num) < 0)
				curItem = GetSpaceStrMid(curItem, lay_char_num) # "    "
			else
				curItem = curItem # strmid(lay_space, 0, GetSpaceStrlen(curItem, lay_char_num)) # "    " //空格占半个格
			lay_cur_column = lay_cur_column + 1
		}
		else
		{
			curItem = "@row@ @curItem@"
			if(GetSpaceStrlen(curItem, lay_char_num) < 0)
				curItem = strmid(curItem, 0, lay_char_num)
			if(lay_cur_row < lay_space_row)
			{
				curItem = curItem # CharFromKey(13)
				lay_cur_row = lay_cur_row + 1
			}
			else
			{
				curItem = curItem # CharFromKey(13) # CharFromKey(13)
				lay_cur_row = 1
				//one row has more column;
				index = index + lay_column
			}
			lay_cur_column = 1
			
			indexTmp = indexTmp + 1
		}
		menuMsg = menuMsg # curItem
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, FALSE, TRUE, FALSE)
	}
//	msg(lay_type # " " # index # " " # indexTmp)
	while (lay_type > 1 && indexTmp <= 22)
	{
		menuMsg = menuMsg # CharFromKey(13)
		indexTmp = indexTmp + 1
	}
	
//	测试最多显示:
//	1) 0  ~ 21 行 65  字
//	2) 22 ~ 44 行 175 字
//	3) 45 ~ 88 行 87  字
//	4) 89 ~ 132行 58  字
	if(index > 88)
	{
		if(lay_type < 4)
		{
			lay_type = 4
			return ShowMacroGroup(mBuf)
		}
		lay_type = 4
	}
	else if(index > 44)
	{
		if(lay_type < 3)
		{
			lay_type = 3
			return ShowMacroGroup(mBuf)
		}
		lay_type = 3
	}
	else if(index > 22)
	{
		if(lay_type != 2 && lay_type != 3)
		{
			lay_type = 2
			return ShowMacroGroup(mBuf)
		}
		lay_type = 2
	}
	else
	{
		if(lay_type != 1)
		{
			lay_type = 1
			return ShowMacroGroup(mBuf)
		}
		lay_type = 1
	}
	if(index > 0)
	{
		msg(menuMsg)
	}
	return index
}

