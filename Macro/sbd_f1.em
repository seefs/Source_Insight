
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
		stop
	}
    
	key = GetKey()
	if (key >= 48 && key <= 57 )                     // 数字0~9
	{
		TreeNum(hbuf, key-48)
	}
	else if (key >= 97 && key <= 122 )               // 字母a~z
	{
		TreeChar(hbuf, key)
	}
	else if (key >= 262209 && key <= 262209 + 26 )   // ctrl+a~z
	{
		TreeCtrlChar(hbuf, key-262209)
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
		else if(key == 4212) //F5
		{
			testTmp(hbuf)
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
		else if(key == 1048692) //F5
		{
			testTmp(hbuf)
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
	var key
    hbuf = GetCurrentBuf()

	//state: 按完不清零, 需要手动清零
	//  0 none
	//  1 layer1
	//  2 layer2
	//  3 layer3
	global g_state
	//layer: 按完清零
	global g_layer_1
	global g_layer_2
	global g_layer_3
	var layer_sum

	// 循环输入0~9
	if (num == 48)
		num = 10
	else if(num >= 49 && num <= 57 )
		num = num - 48
		
	if (num>10)
	{
		g_state = NIL
		g_layer_1 = 0
		g_layer_2 = 0
		g_layer_3 = 0
		return 0;
	}

	if(num == 0)    //layer_0
	{
		if(g_layer_1 != 0) 
		{
			g_state = 1
			key = GetKey()
			Item_Tree(key)
			return 0;
		}
		else if(g_state == NIL) 
		{
			ShowFHelp(hbuf, "Base")
			g_state = 1
			key = GetKey()
			Item_Tree(key)
			return 0;
		}
		g_state = NIL
		g_layer_1 = 0
		g_layer_2 = 0
		g_layer_3 = 0
		return 0;
	}

	if(g_state == 1)  //layer_1
	{
		if(g_layer_1 != num)
		{
			if(num == 1)
				msg("F1->1->?, 再输入数字0~9")
			else if(num == 2)
				msg("F1->2->?, 再输入字母a-j")
			else if(num == 3)
				msg("F1->3->?, 再输入字母k-t")
			else if(num == 4)
				msg("F1->4->?, 再输入字母u-z")
			else if(num == 5)
				msg("F1->5->?, 再输入f1-f10")
			else if(num == 6)
				msg("F1->6->?, 再输入f11-f12, Other -,+,back,del,方向键")
			else if(num == 7)
				msg("F1->7->?, 再输入ctrl+a~D")
			else if(num == 8)
				//数字提示
				ShowFHelp(hbuf, "F1")
			else if(num == 9)
				//字母提示(最常用)
				ShowFHelp(hbuf, "F1A")
		}
		g_layer_1 = num
		g_state = 2
		
		key = GetKey()
		Item_Tree(key)
		return 0;
	}
	else if(g_state == 2)
	{
		layer_sum = g_layer_1*10 + num
		if(g_layer_2 != num)
		{
		}
		g_layer_2 = num
	}
	else if(g_state == 3)
	{
		layer_sum = g_layer_2*10 + g_layer_1*10 + num
		if(g_layer_3 != num)
		{
			msg(layer_sum)
		}
		g_layer_3 = num
	}
	else
	{
		return 0;
	}
	msg("Code_Tree " # layer_sum)
	Code_Tree(layer_sum)
	g_state = NIL
	return 0;
}

macro Code_Tree(g_ok)
{
    hbuf = GetCurrentBuf()
    
	if(g_ok > 10 && g_ok <= 20)
	{
		//数字0~9,10个
		if (g_ok == 20)
			TreeNum(hbuf, 0)
		else
			TreeNum(hbuf, g_ok-10)
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
	else if(g_ok > 50 && g_ok <= 61)
	{
		//f1-f12
		TreeFNum(hbuf, g_ok - 50)
	}
	else if(g_ok > 61 && g_ok <= 70)
	{
		//char, Other
		msg("char, " # g_ok)
		TreeChar(hbuf, g_ok)
	}
	else if(g_ok > 70 && g_ok <= 80)
	{
		//ctrl+a~D
		TreeCtrlChar(hbuf, g_ok - 70)
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
	if (key != 1)
	{
		bft = getBft(2)
	}
	
	if (key == 1) //数字1
	{
		//跳到默认file
		SetDefaultProject(hbuf)
//		file = GetGroupItem(bft, 1, "Project", "File")
	}
	else if (key == 2) //数字2
	{
		file = GetGroupItem(bft, 1, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 3) //数字3
	{
		file = GetGroupItem(bft, 2, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 4) //数字4
	{
		file = GetGroupItem(bft, 3, "Project", "File")
		word = "MMISET_EDEFAULT_LANGUAGE"
		OpenProjectFile(hbuf, file, "", word)
	}
	else if (key == 5) //数字5
	{
		file1 = GetGroupItem(bft, 4, "Project", "File")
		file2 = GetGroupItem(bft, 5, "Project", "File")
		word = "menu_mainmenu_icon"
		OpenProjectFile(hbuf, file1, file2, word)
	}
	else if (key == 6) //数字6
	{
		file = GetGroupItem(bft, 6, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 7) //数字7
	{
		file = GetGroupItem(bft, 7, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 8) //数字8
	{
		OpenBuildDir(hbuf)
	}
	else if (key == 9) //数字9
	{
		//设置默认mk
		SetDefaultMake(hbuf)
	}
	else if (key == 0) //数字0
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
	if (key == 1) //字母A
	{
		ShowFHelp(hbuf, "F1A")
	}
	else if (key == 4) //字母D
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
	ShowFHelp(hbuf, "F@key@")
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

