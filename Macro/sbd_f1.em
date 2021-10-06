
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
	if (key >= 48 && key <= 57 )                     // ����0~9
	{
		TreeNum(hbuf, key-48)
	}
	else if (key >= 97 && key <= 122 )               // ��ĸa~z
	{
		TreeChar(hbuf, key)
	}
	else if (key >= 262209 && key <= 262209 + 26 )   // ctrl+a~z
	{
		TreeCtrlChar(hbuf, key-262209)
	}
	else if (key >= 4208 && key <= 4219)             // F1~F12  ��ʾf1~f12 ����˵��(SI3.5����)
	{
		if(key == 1048688)      //F1
		{
			//�򿪻�����Ĭ����Ŀ
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
	else if (key >= 1048688 && key <= 1048699 )      // F1~F12  ��ʾf1~f12 ����˵��(SI4.0����)
	{
		if(key == 1048688)      //F1
		{
			//�򿪻�����Ĭ����Ŀ
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
	else                                             //Other: -,+,back,del,�����
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

	//state: ���겻����, ��Ҫ�ֶ�����
	//  0 none
	//  1 layer1
	//  2 layer2
	//  3 layer3
	global g_state
	//layer: ��������
	global g_layer_1
	global g_layer_2
	global g_layer_3
	var layer_sum

	// ѭ������0~9
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
				msg("F1->1->?, ����������0~9")
			else if(num == 2)
				msg("F1->2->?, ��������ĸa-j")
			else if(num == 3)
				msg("F1->3->?, ��������ĸk-t")
			else if(num == 4)
				msg("F1->4->?, ��������ĸu-z")
			else if(num == 5)
				msg("F1->5->?, ������f1-f10")
			else if(num == 6)
				msg("F1->6->?, ������f11-f12, Other -,+,back,del,�����")
			else if(num == 7)
				msg("F1->7->?, ������ctrl+a~D")
			else if(num == 8)
				//������ʾ
				ShowFHelp(hbuf, "F1")
			else if(num == 9)
				//��ĸ��ʾ(���)
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
		//����0~9,10��
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
	//ָ��Ĭ���ļ�����Ϊ����Ŀ¼
	if (key != 1)
	{
		bft = getBft(2)
	}
	
	if (key == 1) //����1
	{
		//����Ĭ��file
		SetDefaultProject(hbuf)
//		file = GetGroupItem(bft, 1, "Project", "File")
	}
	else if (key == 2) //����2
	{
		file = GetGroupItem(bft, 1, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 3) //����3
	{
		file = GetGroupItem(bft, 2, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 4) //����4
	{
		file = GetGroupItem(bft, 3, "Project", "File")
		word = "MMISET_EDEFAULT_LANGUAGE"
		OpenProjectFile(hbuf, file, "", word)
	}
	else if (key == 5) //����5
	{
		file1 = GetGroupItem(bft, 4, "Project", "File")
		file2 = GetGroupItem(bft, 5, "Project", "File")
		word = "menu_mainmenu_icon"
		OpenProjectFile(hbuf, file1, file2, word)
	}
	else if (key == 6) //����6
	{
		file = GetGroupItem(bft, 6, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 7) //����7
	{
		file = GetGroupItem(bft, 7, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 8) //����8
	{
		OpenBuildDir(hbuf)
	}
	else if (key == 9) //����9
	{
		//����Ĭ��mk
		SetDefaultMake(hbuf)
	}
	else if (key == 0) //����0
	{
		//����Ĭ��mk
		OpenDefaultMake(hbuf)
	}
}

macro TreeChar(hbuf, key)
{
	//_TempHeadF1()
	if (key == 97) //��ĸA
	{
		ShowFHelp(hbuf, "F1A")
	}
	else if (key == 98) //��ĸB
	{
		path1 = getSavePath(0) # "\\SI"
		path2 = getSavePath(0) # "\\SI_bak"
		ShellBCompare(path1, path2)
	}
	else if (key == 99) //��ĸC
	{
		OpenCmdFile(hbuf)
	}
	else if (key == 100) //��ĸD
	{
		newkey = GetKey()
		msg ("key @newkey@")
	}
	else if (key == 101) //��ĸE
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
	else if (key == 102) //��ĸF
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			msg ("ProjDir:" # GetProjDir (hprj))
		}
	}
	else if (key == 103) //��ĸG
	{
		FunTotal(hbuf)
	}
	else if (key == 105) //��ĸI
	{
		ShowSelAscii(hbuf)
	}
	else if (key == 107) //��ĸK
	{
	}
	else if (key == 108) //��ĸL  add link
	{
		AddLinkProjectName(hbuf)
	}
	else if (key == 109) //��ĸM  open mk
	{
		OpenSelMakeFile(hbuf)
	}
	else if (key == 110) //��ĸN  show filename
	{
		ShowFileName(hbuf, true)
	}
	else if (key == 111) //��ĸO open file dir
	{
		OpenProjectBase(hbuf)
	}
	else if (key == 112) //��ĸP open project
	{
		open_project
	}
	else if (key == 113) //��ĸQ clear clip
	{
		hbufClip = GetBufHandle("Clipboard")
		EmptyBuf(hbufClip)
	}
	else if (key == 114) //��ĸR  ����ظ� 48S �ܾ�
	{
		ChkRepeat(hbuf)
	}
	else if (key == 115) //��ĸS
	{
		sel = MGetWndSel(hbuf)
		msg(sel)
		SetClipString(sel) // ����sel�ṹ��
	}
	else if (key == 116) //��ĸT
	{
		//
	}
	else if (key == 118) //��ĸV  search version
	{
		SearchVersion(hbuf)
	}
	else if (key == 119) //��ĸW  close windows
	{
		WindowsCloseStyleOne(hbuf)
	}
	else if (key == 120) //��ĸX  ���.mk�Ҳ����ݣ����ڶԱ�
	{
		DeleteTxtRightMk(hbuf)
	}
	else if (key == 122) //��ĸZ
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
	if (key == 1) //��ĸA
	{
		ShowFHelp(hbuf, "F1A")
	}
	else if (key == 4) //��ĸD
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
		// ����
		OpenToolsDownload(hbuf, False)
	}
	else if (key == 61) //+
	{
		// ���ز���ʼ��·��
		OpenToolsDownload(hbuf, TRUE)
	}
	else if (key == 8) //back
	{
		// ��SR
    	OpenDefaultSR(hbuf)
	}
	else
	{
		msg ("key @key@")
	}
}

