/***********************************************************************/
/******************************* 宏文件 ********************************/
/***********************************************************************/
快捷键[Ca]: 
宏文件: 不知道什么原因宏失效，注释先集中放这个文件
//	sbd_array.em
//	sbd_base.em
//	sbd_ctrl.em
//	sbd_f1.em
//	sbd_f10.em
//	sbd_f11.em
//	sbd_f12.em
//	sbd_f2.em
//	sbd_f3.em
//	sbd_f4.em
//	sbd_f5.em
//	sbd_f6.em
//	sbd_f7.em
//	sbd_f7_search.em
//	sbd_f7_tools.em
//	sbd_f8.em
//	sbd_f9.em
//	sbd_file.em
//	sbd_shell.em
//	sbd_string.em
//	sbd_test.em
//	sbd_tmp.em
//	sbd_translate.em

/***********************************************************************/
/******************************* 宏说明 ********************************/
/***********************************************************************/

宏说明查看：
Save:SI\node\Simple_CTRL_K.h

		  
/***********************************************************************/
/******************************* Fun ********************************/
/***********************************************************************/

Macro Fun:[Cf]

Save:SI\MacroSBD\sbd_f1.em
	Fun list:
	macro _TempHeadF1(hbuf){}
	Tree()
		TreeTest()
		TreeNum()
		TreeChar()
		TreeFNum()
		TreeOther(hbuf)

	Common:
		SearchVersion(hbuf)
		CloseNonDirty()
		DeleteTxtRightMk(hbuf)
		AddLink(hbuf) 

	CommonTest(hbuf, key)
	OpenF1Test(hbuf)
	
Save:SI\MacroSBD\sbd_f2.em
	Fun list:
		macro _TempHeadF2(hbuf){}
	OpenPath()

	Common:
		AddLinkProjectName(hbuf)
		OpenSROrOther(hbuf)
		OpenProjectFile(hbuf, file1, file2, word)
		OpenBuildDir(hbuf)
		OpenDir(hbuf, path)
		OpenTools(hbuf, path)
		OpenToolsDownload(hbuf, isSetPath)
		
	OpenF2Test(hbuf)


Save:SI\MacroSBD\sbd_f3.em
Save:SI\MacroSBD\sbd_f4.em
Save:SI\MacroSBD\sbd_f5.em
	Fun list:
		macro _TempHeadF5(hbuf){}
	Goto()
		GotoKey(word)
			GotoFile(word)
		GotoHan(word)
			GotoNextMacro(word)
	OpenF5Test(hbuf)


Save:SI\MacroSBD\sbd_f6.em
	Fun list:
		macro _TempHeadF6(hbuf){}
	Rule()
		SoftRuleFile(ruleBuf)
		AddRule(word)
		ShowRule(word)
	OpenF6Test(hbuf)
	QuickSoftCacheTest(chkBuf, low, high)


Save:SI\MacroSBD\sbd_f7.em
	Fun list:
		macro _TempHeadF7(hbuf){}
	Tools()
		SwtichTools(cmd)
		SelEditFile(key)
		ShowToolsMode(mode)
	TwoWordFind(key)
		SetProjectDir(pathName)
		AddParam(key)
	BCompare(s)
		BComSetPath(hbuf)
		ShowBCompareMode(val)
	SVN()
		SvnUpdate(key)
		SvnCommit(key)
		getSVNCommitPath(pathName)


Save:SI\MacroSBD\sbd_f8.em
Save:SI\MacroSBD\sbd_f9.em
Save:SI\MacroSBD\sbd_f10.em
	Fun list:
		macro _TempHeadF10(hbuf){}
	Group()
		MakeGroup(hbuf)
		MakeSelGroup(hbuf)
		SrGroup(hbuf)
		DefaultGroup(hbuf)
		
		ShowGroupMenu(curHead, grFile, isShow)		# item operation 1
		GetGroupItem(curHead, mIndex, grFile) # item operation 2
		GetGroupHead(curItem, grFile)		# item operation 3
	OpenF10Test(hbuf, v)


Save:SI\MacroSBD\sbd_f11.em
	Fun list:
		macro _TempHeadF11(hbuf){}
	Note()
		LongNote(hbuf, key)
		ShortNote(hbuf, key)
		
		GetLongNote(key)
		GetMediumNote(key)
		GetShortNote(key)
	NoteHander()
	SetNoteHander()
	SetPathNoteHander()
	SetNoteHistory()

	OpenF11Test(hbuf, v)


Save:SI\MacroSBD\sbd_f12.em
	Fun list:
		macro _TempHeadF12(hbuf){}
	ShowMacro()
		ShowCfg(hbuf)
		getMacroCfg(hbuf, searchFor, searchResult, tStr, fStr)
		getNoteLang(hbuf, searchFor)
	ShowWholeMacro(hbuf)
	OpenF12Test(hbuf, v)


Save:SI\MacroSBD\sbd_base.em
    base:
       工具      跳        显 
       树       打开       搜
       记       规        元组  
    
       F7       F5        F12
       F1       F2        F9
       F11      F6        F10
       
	功能说明：
	1. 需要更改路径为对应工程目录/文件名；
	2. 所有公共目录/文件名都在这个文件中修改；
	3. 最近一次功能说明更新(2018.09.18) -- 以后再 拉一份早期代码，对比--更新说明
       
    功能进行中:
       CTRL: 1
       F1: 4
       F7: 3
       F8: 1
       F11:NoteHander
       

Save:SI\MacroSBD\sbd_ctrl.em
	
	//macro _TempHeadCTRL(hbuf){}
	CtrlD()
	CtrlQ()
	CtrlB()
	CtrlK()
	CtrlE()
	CtrlW()
	CtrlR()
	CtrlT()
	CtrlU()
	CtrlN()
	CtrlC()
	CtrlShiftU()
	CtrlBack()

	CtrlUp()
	CtrlDown()
	CtrlLeft()
	CtrlRight()
	ChangeSel(hbuf, direct)


Save:SI\MacroSBD\sbd_shell.em
	shell:
	功能：
	
	Fun目录：
	macro _TempHeadShell(hbuf){}

	ShellAddLink(hbuf)
	ShellBCompare(hbuf)
	ShellOpenBuild(hbuf)

	ShellAddParam(hbuf)
	ShellClearParam(hbuf)
	ShellFind(hbuf)

	ShellSvnUpdate(hbuf)
	ShellSvnCommit(hbuf)
	ShellSvnLog(hbuf)
	ShellSvnDiff(hbuf)

	OpenShellTest(hbuf)


Save:SI\MacroSBD\sbd_test.em
    key:
	功能：test

	
	***** **** ***** micro分类 ***** **** *****
	comment.em：注释与取消注释；
	Gaoke.em：文件名
	ProgressiveSearch.em：逐字搜索
	siutils.em：注释与取消注释；缩进
	stringutils.em：左右查找；非空index；空index
	TrimSpaces.em：空
	utils.em: 符号位置
	wordstar.em：组合键

		
	Fun list:
		macro _TempHeadTest(hbuf){}

	OpenAPITest(hbuf, v)
	TestAPI(key)
	OtherAPI(key)
	OpenRefTest(hbuf)


Save:SI\MacroSBD\sbd_translate.em
	string:
	功能：mtk翻译；因为字符无法操作；现在用不了
	
	Fun目录：
			
	StrTranslate(hbuf)
	TranslateDir(file, hbuflist)
	TranslateFile(trBuf, lnFn, strFn, lnRe, strRe, logBuf)


Save:SI\MacroSBD\sbd_string.em
	string:
	功能：
	
	Fun目录：
		macro _TempString(hbuf){}
	common
		FindString( source, target )	//其他em的常用宏
		RFindString( source, target )
		StartWS( string, first )			//word start
		NextWS( string, first )			//word end
	custom
		ChkRepeat(hbuf)	//检查重复
		_macro
			SplitMacro()		//拆分字符 
			GetLineMacro()		//获取宏，不包括删除注释（# , Tab 空格 =）
			GetLineValue()		//获取宏值, =号右边
			GetWholeMacro()		//左右扩展, 获取完整宏
		DeleteTxtRightMk(hbuf)
			DeleteTxtRight(hbuf, i, file_type)
			GetFileNameType(str, p_Type)
		ReplaceWord(noteWord, search_str, replace_str)
			//参考： ReplaceSzWordInProject
			//参考： DoReplace(hbuf, szOld, szNew)
			
	OpenStringTest(hbuf)


Macro Fun End:[Cg]

