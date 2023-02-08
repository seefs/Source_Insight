
macro Tools()
{
	//_TempHeadF7(hbuf)
	var key
	var mode
	var modeNew
	
	hbuf = GetCurrentBuf()
	mode = ReadMode(getToolsRow(0))
	//1. �������F7-��ʾ�б�
	ShowToolsMode(mode)
	
	//2. �������F7-������
	key = GetKey()
	if(key<97)
		key = key + 32	//Сд->��д

	if (key == 97) 		 		 //chr-A     patch(File)
	{
		BComparePatch(0)
		return
	}
	else if (key == 98) 		 //chr-B    tools: F5--Goto    F6--BComp,   ������Beyond Compare�Ƚ�·��
	{
		BComSetPath("")
	}
	else if (key == 99)          //chr-C
	{
		if (hbuf != 0)
		{
			curName = GetBufName(hbuf)
		    ShellSvnLog(curName)
		}
		return
	}
	else if (key == 100) 		 //chr-D     patch(Dir)
	{
		BComparePatch(1)
	}
	else if (key == 103) 		 //chr-G  tools: F5--Goto    F6--Rule
	{
	}
	else if (key == 105) 		 //chr-i
	{
	    SvnCommit(key)
		return
	}
	else if (key == 112) 		 //chr-P
	{
		hbufClip = GetBufHandle("Clipboard")
		openbuf(hbufClip)
		setCurrentBuf(hbufClip)
		return
	}
	else if (key == 114) 		 //chr-R
	{
		if (hbuf != 0)
			AddRule(hbuf)
		return
	}
	else if (key == 116) 		 //chr-T
	{
		if (hbuf != 0)
		{
			curName = GetBufName(hbuf)
		    ShellSvnCommit(curName, "tmp")
		}
		return
	}
	else if (key == 117) 		 //chr-u
	{
	    SvnUpdate(key)
		return
	}
	else if (key == 118) 		 //chr-v
	{
	    BCompareSel(key)
		return
	}
	else if (key == 120) 		 //chr-X
	{
	    DeleteMkComment(key)
		return
	}
	else
	{
		msg (CharFromKey(key) # " @key@")
		return
	}

	//save switch:G S B
	modeNew = CharFromKey(key)
	if (mode != modeNew)
	{
		SaveMode(getToolsRow(0), "@modeNew@")
	}
}


//�л�F5/F6����������
macro SwtichTools(cmd)
{
	//_TempHeadF7(hbuf)
	val = ReadMode(getToolsRow(0))		//��ȡ��ǰ����:Ĭ��F5~goto           F6-rule
	
	//3. �������F7-������
	if(cmd == "F5")
	{
		if(val == "g")			//Goto -- Rule
		{
			return 1
		}
		else if(val == "s")		//Search -- AddParam
		{
			TwoWordFind(0)
			return 0
		}
		else if(val == "b")		//Goto -- Patch
		{
			BComparePatch(0)
			return 0
		}
		else if(val == "n")		//Goto -- Goto Service
		{
			return 1
		}
		else
		{
			return 1			//default : Goto
		}
	}
	else if(cmd == "F6")
	{
		if(val == "g")			//Goto -- Rule
		{
			return 1
		}
		else if(val == "s")		//Search -- AddParam
		{
			AddParam(0)
			return 0
		}
		else if(val == "b")		//Goto -- BComp
		{
			BCompare(0)
			return 0
		}
		else
		{
			msg ("other work")
			return 0
		}
	}
}



//test
macro ShowToolsMode(mode)
{
	//_TempHeadF7(hbuf)
	mode = CharFromKey(AsciiFromChar(mode)-32)
	toolsMsg = "Tools Mode : [ @mode@ ]" # CharFromKey(13)
	toolsMsg = toolsMsg # "---switch-----------------"   # CharFromKey(13)
	toolsMsg = toolsMsg # "G: F5--Goto    F6--Rule"  # CharFromKey(13)
	toolsMsg = toolsMsg # "S: F5--Search  F6--AddParam"   # CharFromKey(13)
	toolsMsg = toolsMsg # "B: F5--Patch   F6--BComp"   # CharFromKey(13)
	toolsMsg = toolsMsg # "---no switch--------------"   # CharFromKey(13)
	toolsMsg = toolsMsg # "U: Svn Update"   # CharFromKey(13)
	toolsMsg = toolsMsg # "I  : Svn Commit(Dir)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "C: Svn Log(File)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "T: Svn Commit(File)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "R: Rule       (once)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "V: BComp Select  (1,2)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "A: BComp patch(File)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "D: BComp patch(Dir)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "X: Del SR #.."   # CharFromKey(13)
	toolsMsg = toolsMsg # "P: Open Clipboard"   # CharFromKey(13)
	//toolsMsg = toolsMsg # "C: Color"   # CharFromKey(13)
	msg ("@toolsMsg@")
}
