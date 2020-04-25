
macro Tree()
{
	//_TempHeadF1()
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	
	if(IsNoteFile(hbuf) || IsMacroFile(hbuf))
	{
		Item_Tree(0)
		stop	}
    
	key = GetKey()
	if (key >= 48 && key <= 57 )                     // 数字0~9
	{
		TreeNum(hbuf, key)
	}
	else if (key >= 97 && key <= 122 )               // 字母a~z
	{
		TreeChar(hbuf, key)
	}
	else if (key >= 262209 && key <= 262209 + 26 )   // ctrl+a~z
	{
		TreeCtrlChar(hbuf, key)
	}
	else if (key >= 4208 && key <= 4219)             // F1~F12  显示f1~f12 功能说明(SI3.5编码)
	{
		if(key == 1048688)      //F1
		{
			//打开或设置默认项目
			OpenDefaultProject(hbuf)
		}
		else if(key == 4209) //F2
		{
			OpenPathExt(1)
		}
		else if(key == 4210) //F3
		{
			Search_Backward
		}
		else if(key == 4211) //F4
		{
			Search_Forward
		}
		else if(key == 4213) //F6
		{
			BCompare(1)
		}
		else
		{
			//TreeFNum(hbuf, key-4207)
		}
	}
	else if (key >= 1048688 && key <= 1048699 )      // F1~F12  显示f1~f12 功能说明(SI4.0编码)
	{
		if(key == 1048688)      //F1
		{
			//打开或设置默认项目
			OpenDefaultProject(hbuf)
		}
		else if(key == 1048689) //F2
		{
			OpenPathExt(1)
		}
		else if(key == 1048690) //F3
		{
			Search_Backward
		}
		else if(key == 1048691) //F4
		{
			Search_Forward
		}
		else if(key == 1048693) //F6
		{
			BCompare(1)
		}
		else
		{
			//TreeFNum(hbuf, key-1048687)
		}
	}
	else                                             //Other: -,+,back,del,方向键
	{
		TreeOther(hbuf, key)
	}
}

macro Item_1()		{		Item_Tree(1)	}
macro Item_2()		{		Item_Tree(2)	}
macro Item_3()		{		Item_Tree(3)	}
macro Item_4()		{		Item_Tree(4)	}
macro Item_5()		{		Item_Tree(5)	}
macro Item_6()		{		Item_Tree(6)	}
macro Item_7()		{		Item_Tree(7)	}
macro Item_8()		{		Item_Tree(8)	}
macro Item_9()		{		Item_Tree(9)	}
macro Item_10()		{		Item_Tree(10)	}

macro Item_Tree(num)
{
    hbuf = GetCurrentBuf()

	global g_sel
	global g_ok

	if(num == 0)
	{
		g_sel = 0
		ShowFHelp(hbuf, "Base")
		stop
	}
	else if(g_sel == 0 && num == 8)
	{
		//数字提示
		ShowFHelp(hbuf, "F1")
		stop
	}
	else if(g_sel == 0 && num == 9)
	{
		//字母提示(最常用)
		ShowFHelp(hbuf, "F1A")
		stop
	}
	else if(g_sel == 0 || g_sel > 100)
	{
		g_sel = num*10
		//显示11~19，或61~69
		msg(g_sel)
		stop
	}
	else
	{
		g_ok = g_sel + num
	}
	Code_Tree(g_ok)
}

macro Code_Tree(g_ok)
{
    hbuf = GetCurrentBuf()
    
	if(g_ok > 10 && g_ok <= 20)
	{
		if (g_ok == 20)
			key = g_ok - 20 + 48
		else
			key = g_ok - 10 + 48
		
		msg("TreeNum " # key)
		//数字0~9,10个
//		TreeNum(hbuf, key)
	}
	else if(g_ok > 20 && g_ok <= 46)
	{
		//a-j, k-t, u-z,
		upper_key = g_ok - 20 + 64
		lower_key = upper_key + 32
		
		mBuf = OpenCache(getNodePath(0) # "\\Simple_CTRL_K.h")
		ShowSimpleHelp(mBuf, "F1 -> " # CharFromAscii (upper_key), "(@lower_key@)")
		CloseBuf(mBuf)
		
		TreeChar(hbuf, lower_key)
	}
	else if(g_ok > 50 && g_ok <= 60)
	{
		//f1-f10,6个
		key = g_ok - 20 + 96
		msg("f1-f10, " # key)
//		TreeChar(hbuf, key)
	}
	else if(g_ok > 60 && g_ok <= 70)
	{
		//f11-f12, Other
		key = g_ok - 20 + 96
		msg("f1-f10, " # key)
//		TreeChar(hbuf, key)
	}
	else if(g_ok > 70 && g_ok <= 80)
	{
		//ctrl+a~D
		key = g_ok - 20 + 96
		msg("f1-f10, " # key)
//		TreeOther(hbuf, key)
	}
	else
	{
		msg("g_ok, " # g_ok)
	}
}

macro TreeNum(hbuf, key)
{
	//_TempHeadF1()
	//指定默认文件可能为任意目录
	if (key != 49)
	{
		bft = getBft(2)
	}
	
	if (key == 49) //数字1
	{
		//跳到默认file
		SetDefaultProject(hbuf)
//		file = GetGroupItem(bft, 1, "Project", "File")
	}
	else if (key == 50) //数字2
	{
		file = GetGroupItem(bft, 1, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 51) //数字3
	{
		file = GetGroupItem(bft, 2, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 52) //数字4
	{
		file = GetGroupItem(bft, 3, "Project", "File")
		word = "MMISET_EDEFAULT_LANGUAGE"
		OpenProjectFile(hbuf, file, "", word)
	}
	else if (key == 53) //数字5
	{
		file1 = GetGroupItem(bft, 4, "Project", "File")
		file2 = GetGroupItem(bft, 5, "Project", "File")
		word = "menu_mainmenu_icon"
		OpenProjectFile(hbuf, file1, file2, word)
	}
	else if (key == 54) //数字6
	{
		file = GetGroupItem(bft, 6, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 55) //数字7
	{
		file = GetGroupItem(bft, 7, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 56) //数字8
	{
		OpenBuildDir(hbuf)
	}
	else if (key == 57) //数字9
	{
		//设置默认mk
		SetDefaultMake(hbuf)
	}
	else if (key == 48) //数字0
	{
		//跳到默认mk
		OpenDefaultMake(hbuf)
	}
}

macro TreeChar(hbuf, key)
{
	//_TempHeadF1()
	if (key == 97) //字母A
	{
		ShowFHelp(hbuf, "F1A")
	}
	else if (key == 98) //字母B
	{
		path1 = getSavePath(0) # "\\SI"
		path2 = getSavePath(0) # "\\SI_bak"
		ShellBCompare(path1, path2)
	}
	else if (key == 99) //字母C
	{
		OpenCmdFile(hbuf)
	}
	else if (key == 100) //字母D
	{
		newkey = GetKey()
		msg ("key @newkey@")
	}
	else if (key == 101) //字母E
	{
		sel = MGetWndSel(hbuf)
		if (IsSingleSelect(sel))
		{
			cur_line = GetBufLine(hbuf, sel.lnFirst )	
			
			chars = sel.ichLim - sel.ichFirst
			if(chars > 25)
				chars = 25
			i = 0
			clist = ""
			while (i < chars)
			{
				ch = cur_line[sel.ichFirst + i]
				cch = AsciiFromChar(ch)
				clist = clist #  (i+1) # " ---- "  # ch # " ---- " # cch # CharFromKey(13)
				i = i + 1
			}
			msg(clist)
		}
	}
	else if (key == 102) //字母F
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			msg ("ProjDir:" # GetProjDir (hprj))
		}
	}
	else if (key == 103) //字母G
	{
		FunTotal(hbuf)
	}
	else if (key == 105) //字母I
	{
		ShowSelAscii(hbuf)
	}
	else if (key == 107) //字母K
	{
	}
	else if (key == 108) //字母L  add link
	{
		AddLinkProjectName(hbuf)
	}
	else if (key == 109) //字母M  open mk
	{
		OpenSelMakeFile(hbuf)
	}
	else if (key == 110) //字母N  show filename
	{
		ShowFileName(hbuf, true)
	}
	else if (key == 111) //字母O open file dir
	{
		OpenProjectBase(hbuf)
	}
	else if (key == 112) //字母P open project
	{
		open_project
	}
	else if (key == 113) //字母Q clear clip
	{
		hbufClip = GetBufHandle("Clipboard")
		EmptyBuf(hbufClip)
	}
	else if (key == 114) //字母R  检查重复 48S 很久
	{
		ChkRepeat(hbuf)
	}
	else if (key == 115) //字母S
	{
		sel = MGetWndSel(hbuf)
		msg(sel)
		SetClipString(sel) // 调试sel结构体
	}
	else if (key == 116) //字母T
	{
		//
	}
	else if (key == 118) //字母V  search version
	{
		SearchVersion(hbuf)
	}
	else if (key == 119) //字母W  close windows
	{
		WindowsCloseStyleOne(hbuf)
	}
	else if (key == 120) //字母X  清除.mk右侧内容，用于对比
	{
		DeleteTxtRightMk(hbuf)
	}
	else if (key == 122) //字母Z
	{
		pick_window
	}
	else
	{
		msg ("key @key@")
	}
}

macro TreeCtrlChar(hbuf, key)
{
	//_TempHeadF1()
	if (key == 262209) //字母A
	{
		ShowFHelp(hbuf, "F1A")
	}
	else if (key == 262212) //字母D
	{
		if(IsNoteFile(hbuf))
		{
			NoteGroupPreview(hbuf, 0)
		}
	}
	else
	{
		msg ("key @key@")
	}
}

macro TreeFNum(hbuf, key)
{
	//_TempHeadF1()
	if (key == 12) 		//12->1, F1
	{
		ShowFHelp(hbuf, "F1")
	}
	else 				//1->12, F2~F12
	{
		if(key - 1>=9)
		{
			chr = "1" # CharFromKey(key - 1 + 49 -10)
		}
		else if(key==1)
		{
			chr = "12"
		}
		else
		{
			chr = CharFromKey(key - 1 + 49)
		}
		ShowFHelp(hbuf, "F@chr@")
	}
}

macro TreeOther(hbuf, key)
{
	//_TempHeadF1()
	if (key == 45) //-
	{
		// 下载
		OpenToolsDownload(hbuf, False)
	}
	else if (key == 61) //+
	{
		// 下载并初始化路径
		OpenToolsDownload(hbuf, TRUE)
	}
	else if (key == 8) //back
	{
		// 打开SR
    	OpenDefaultSR(hbuf)
	}
	else
	{
		msg ("key @key@")
	}
}

