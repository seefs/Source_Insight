
macro MyHelp()
{
	CtrlK()
}

//ctrl+k, F12->open help, show pop
macro ShowMyHelp(hbuf)
{
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	ShowHelpLoop(hbuf)
}

macro OpenMiniTest(hbuf)
{
    hbuf = GetCurrentBuf()
	isTest = getMacroValue(hbuf, "MiniTest", 1)
	if(isTest != ""){
		if(isTest == "group"){
			bft = getMacroValue(hbuf, "bftParam", 1)
			filename = getMacroValue(hbuf, "fileParam", 1)
			DefaultGroup(filename, bft)
		}
		else if(isTest == "project"){
			bft = getMacroValue(hbuf, "bftParam", 1)
			isSaveRow = 1
			openNoteFile(hbuf, bft, isSaveRow)
		}
		else if(isTest == "rule"){
			startF5MiniTest(hbuf)
		}
		else if(isTest == "search"){
			bft = getMacroValue(hbuf, "bftParam", 1)
			StartF9Search(hbuf, bft)
		}
		return 1
	}
	return 0
}

//F1->sbd_test.em / other
macro OpenAPITest(hbuf)
{
	//_TempHeadTest(hbuf)
	s="asdf"
	//AppendToLog(s)

}

macro TestAPIStruct(hbuf)
{
	//_TempHeadTest(hbuf)
	sel.fExtended  //(sel.fRect || sel.lnFirst != sel.lnLast || sel.ichFirst != sel.ichLim)
	sel.fRect //如果选择是矩形（块样式）则为TRUE。
	SetBufIns(hbuf, sel.lnFirst, sel.ichFirst)
}

macro TestChar(key)
{
	//正则表达式：
	//[abc]    任何在[]之内的字符
	//[^abc]   任何不在[]之内的字符，^表示不在[]之内
	//转义字符 \t(tab), \s(space), \w(tab or space)

	//表数量的如：
	//* 大于等于0个
	//+ 大于0个，也就是至少有1个
	
	//^    表示行起始，注意不要把这个^和[]里的^搞混了。
	//$    表示行结束

	//分组使用\1, \2, \3, ...
	//old:void func(int var1, int var2)
    //new:void func(int var2, int var1)，
	//old:func(.*, .*)
	//new:func(\2, \1)
	
	//替换整个工程，快捷键ctrl+shift+H
}

macro TestAPI(key)
{
	//_TempHeadTest(hbuf)
	
	/* Document */
	
	loc = DocumentOpen(sFile)
	//DocumentSave(sFile)
	//DocumentSaveComplete
	//Save
	//Save

	
	/* Str */
	//替换
	//ReplaceInBuf(hbuf, oldPattern, newPattern, lnStart, lnLim, fMatchCase, fRegExp, fWholeWordsOnly, fConfirm)
	ReplaceInBuf(hbuf, "^\\(\\t*\\)    ", "\\1\\t", 0, GetBufLineCount(hbuf) + 1, 1, 1, 0, 0)
	cchLine = strlen(szLine)
	//cchLine = instr(szLine) //no avail
	szNewLine = cat(szNewLine, strmid(szLine, ichL, ichR + 1))

	cTotal = GetBufLineLength(buff, ln)
	cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)

	
	/* cmd */
	copy
	Paste
	
	/* Buf */
	//获取当前输入的句柄
	//hBuf = 0(none), 1(cur), ...
	 hBuf = GetCurrentBuf()
	 
	cur_line = GetBufLine( hcbuf, sel.lnFirst )
	AppendBufLine(hbuf, "Param:@cur_sel@")
	EmptyBuf(hbuf)
	InsBufLine(hbuf, 0 + 1, "@szLine@" # "###")
	//DelBufLine(hbufCur, lnCur)
	//EmptyBuf(GetBufHandle("Clipboard"))
	//InsBufLine(hbuf, ln + 1, "@szLine@" # "###")
	//PutBufLine(hbuf, iLine, szLine);
	SaveBufAs(hbuf, fname)
	SaveBuf(hbuf)

	SetBufSelText(hbuf, szNew)

	/* file */
	 szfileName = GetFileName(szpathName)

	 
	/* Clipboard */
	hbufClip = GetBufHandle("Clipboard")
	//EmptyBuf(hbufClip)
	cLines = GetBufLineCount(hbufClip)


	GetReg("TabSize")
}

macro OtherAPI(key)
{
	//_TempHeadTest(hbuf)
	
	//Document Events :
	//event// DocumentNew(sFile)
	//event// DocumentOpen(sFile)
	//event// DocumentClose(sFile)
	//event// DocumentSave(sFile)
	//event// DocumentSaveComplete(sFile)
	//event// DocumentChanged(sFile)
	//event// DocumentSelectionChanged(sFile)

	//String Functions :
	AsciiFromChar (ch)
	cat (a, b)
	CharFromAscii (ascii_code)
	islower (ch)
	IsNumber (s)
	isupper (ch)
	strlen (s)
	strmid (s, ichFirst, ichLim)
	strtrunc (s, cch)  字符串截断
	tolower (s)
	toupper (s)

	//Standard Record Structures :
	//Bookmark Record
	//Bufprop Record
	//DIM Record
	//Link Record
	//ProgEnvInfo Record
	//ProgInfo Record
	//Rect Record
	//Selection Record
	//Symbol Record
	//SYSTIME Record

	//Special Constants :
	//True		“1”
	//False		“0”
	//Nil		“” – the empty string.
	//hNil		“0” – an invalid handle value.
	//invalid		"-1" – an invalid index value.

	//Searching Functions :
	GetSourceLink (hbufSource, lnSource)
	LoadSearchPattern(pattern, fMatchCase, fRegExp, fWholeWordsOnly)
	ReplaceInBuf(hbuf, oldPattern, newPattern, lnStart, lnLim, fMatchCase, fRegExp, fWholeWordsOnly, fConfirm)
	SearchForRefs (hbuf, word, fTouchFiles)
	//文件内搜索
	SearchInBuf (hbuf, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	//创建一个新的源链接
	SetSourceLink (hbufSource, lnSource, target_file, lnTarget)

	//Window Functions :
	CloseWnd (hwnd)
	GetApplicationWnd ()
	GetCurrentWnd ()
	GetNextWnd (hwnd)
	GetWndBuf (hwnd)
	GetWndClientRect (hwnd)
	GetWndDim (hwnd)
	GetWndHandle (hbuf)
	GetWndHorizScroll (hwnd)
	GetWndLineCount (hwnd)
	GetWndLineWidth (hwnd, ln, cch)
	GetWndParent (hwnd)
	GetWndRect (hwnd)
	GetWndSel (hwnd)
	GetWndSelIchFirst (hwnd)
	GetWndSelIchLim (hwnd)
	GetWndSelLnFirst (hwnd)
	GetWndSelLnLast (hwnd)
	GetWndVertScroll (hwnd)
	IchFromXpos (hwnd, ln, xp)
	IsWndMax (hwnd)
	IsWndMin (hwnd)
	IsWndRestored (hwnd)
	MaximizeWnd (hwnd)
	MinimizeWnd (hwnd)
	NewWnd (hbuf)
	ScrollWndHoriz (hwnd, pixel_count)
	ScrollWndToLine (hwnd, ln)
	ScrollWndVert (hwnd, line_count)
	SetCurrentWnd (hwnd)
	SetWndRect (hwnd, left, top, right, bottom)
	SetWndSel (hwnd, selection_record)
	ToggleWndMax (hwnd)
	XposFromIch (hwnd, ln, ich)

	//Window List Functions :
	//count = BufListCount ()
	//BufListItem (index)
	WndListCount ()
	WndListItem (index)

	//Symbol List Functions :
	SymListCount ()
	SymListFree (hsyml)
	SymListInsert (hsyml, isym, symbolNew)
	SymListItem (hsyml, isym)
	SymListNew ()
	SymListRemove (hsyml, isym)

	//Symbol Functions :
	GetBufSymCount(hbuf)
	GetBufSymLocation(hbuf, isym)
	GetBufSymName(hbuf, isym)
	GetCurSymbol ()
	GetSymbolLine (symbol_name)
	GetSymbolLocation (symbol_name)
	GetSymbolLocationEx (symbol_name, output_buffer, fMatchCase, LocateFiles, fLocateSymbols)
	GetSymbolFromCursor (hbuf, ln, ich)
	GetSymbolLocationFromLn (hbuf, ln)
	JumpToLocation (symbol_record)
	JumpToSymbolDef (symbol_name)
	SymbolChildren (symbol)
	SymbolContainerName (symbol)
	SymbolDeclaredType (symbol)
	SymbolLeafName (symbol)
	SymbolParent (symbol)
	//SymbolRootContainer (symbol) //no avail
	SymbolStructureType (symbol)



	count = BookmarksCount ()
	//BookmarksItem (index)
	//msg ("Bookmarks @count@")

	hprj = GetCurrentProj ()
	count = GetProjFileCount (hprj)
	//msg ("ProjFile @count@")
	filename = GetProjFileName(hprj, 0)
	//msg ("ProjFile @filename@")
	
	path = GetProjDir (hprj)
	msg ("path @path@")
	projName = GetProjName (hprj)
	msg ("projName @projName@")
	
	info = GetProgramEnvironmentInfo ()
	//msg ("Proj info @info@")
	info = GetProgramInfo ()
	//msg ("Proj info @info@")
	
	//功能不清楚
	AddConditionVariable(hprj, "sbd*", "s")
	AddConditionVariable(0, "sbd_tmp.em", "s")
	
	AddFileToProj(hprj, "E:\\save\\SI\\MacroSBD\\sbd_tmp.em")

}

macro OpenRefTest(hbuf)
{
	//_TempHeadTest(hbuf)
	
	/*
	this section:

	Commands Overview
	About Source Insight
	Activate Menu Commands
	Activate Global Symbol List
	Activate Relation Window
	Activate Search Results
	Activate Symbol Window
	Add and Remove Project Files
	Add File
	Add File List
	Advanced Options
	Back Tab
	Backspace
	Beginning of Line
	Beginning of Selection
	Blank Line Down
	Blank Line Up
	Block Down
	Block Up
	Bookmark
	Bottom of File
	Bottom of Window
	Browse Files
	Browse Project Symbols
	Browse Global Symbols Dialog box
	Browse Local File Symbols
	Cascade Windows
	Checkpoint
	Checkpoint All
	Clear Highlights
	Clip Properties
	Clip Window Properties
	Close
	Close All
	Close Project
	Close Window
	Color Options
	Command Shell
	Complete Symbol
	Context Window
	Context Window Properties
	Copy
	Copy Line
	Copy Line Right
	Copy List
	Copy Symbol
	Copy To Clip
	Create Key List
	Create Command List
	Cursor Down
	Cursor Left
	Cursor Right
	Cursor Up
	Custom Commands
	Cut
	Cut Line
	Cut Line Left
	Cut Line Right
	Cut Selection or Paste
	Cut Symbol
	Cut To Clip
	Cut Word
	Cut Word Left
	Delete
	Delete All Clips
	Delete Character
	Delete Clip
	Delete File
	Delete Line
	Display Options
	Document Options
	Draft View
	Drag Line Down
	Drag Line Down More
	Drag Line Up
	Drag Line Up More
	Duplicate
	Duplicate Symbol
	Edit Condition
	Enable Event Handlers
	End of Line
	End of Selection
	Exit
	Exit and Suspend
	Expand Special
	File Options
	Folder Options
	Function Down
	Function Up
	General Options
	Go Back
	Go Back Toggle
	Go Forward
	Go To First Link
	Go To Line
	Go To Next Change
	Go To Previous Change
	Go To Next Link
	Go To Previous Link
	Help
	Help Mode
	Highlight Word
	Incremental Search
	Incremental Search Mode
	Incremental Search Backward
	Horizontal Scroll Bar
	HTML Help
	Indent Left
	Indent Right
	Insert ASCII
	Insert File
	Insert Line
	Insert Line Before Next
	Insert New Line
	Join Lines
	Jump To Base Type
	Jump To Caller
	Jump To Definition
	Jump To Link
	Jump To Prototype
	Key Assignments
	Keyword List
	Language Options
	Language Properties
	Line Numbers
	Link All Windows
	Link Window
	Load Configuration
	Load File
	Load Search String
	Lock Context Window
	Lock Relation Window
	Lookup References
	Make Column Selection
	Menu Assignments
	New
	New Clip
	New Relation Window
	New Project
	New Window
	Next File
	Next Relation Window View
	Open
	Open Project
	Page Down
	Page Setup
	Page Up
	Paren Left
	Paren Right
	Parse Source Links
	Paste
	Paste From Clip
	Paste Line
	Paste Symbol
	Play Recording
	Preferences
	Print
	Print Relation Window
	Project Document Types
	Project File Browser
	Project File List
	Project Symbol Classes
	Project Symbol List
	Project Window Properties
	Project Settings
	Project Report
	Project Window command
	Rebuild Project
	Record New Default Properties
	Redo
	Redo All
	Redraw Screen
	Reform Paragraph
	Refresh Relation Window
	Relation Graph Properties
	Relation Window
	Relation Window Properties
	Relation Window Properties Dialog Box
	Reload File
	Reload Modified Files
	Remove File
	Remove Project
	Remote Options
	Rename
	Renumber
	Repeat Typing
	Replace
	Replace Files
	Restore File
	Restore Lines
	Save
	Save A Copy
	Save All
	Save All Quietly
	Save As
	Save Configuration
	Save Selection
	Save Workspace
	Scroll Half Page Down
	Scroll Half Page Up
	Scroll Left
	Scroll Line Down
	Scroll Line Up
	Scroll Right
	SDK Help
	Search
	Search Backward
	Search Backward for Selection
	Search Files
	Search Forward
	Search Forward for Selection
	Search List
	Search Project
	Searching Options
	Select All
	Select Block
	Select Char Left
	Select Char Right
	Select Function or Symbol
	Select Line
	Select Line Down
	Select Line Up
	Select Match
	Select Next Window
	Select Sentence
	Select Symbol
	Select To
	Select To End Of File
	Select To Top Of File
	Select Word
	Select Word Left
	Select Word Right
	Selection History
	Setup Common Projects
	Setup HTML Help
	Setup WinHelp File
	Show Clipboard
	Show File Status
	Simple Tab
	Smart End of Line
	Smart Beginning of Line
	Smart Rename
	Smart Tab
	Sort Symbol Window
	Sort Symbols By Line
	Sort Symbols by Name
	Sort Symbols By Type
	Source Dynamics on the Web
	Start Recording
	Stop Recording
	Style Properties
	Symbol Info
	Symbol Lookup Options
	Symbol Window command
	Symbol Window Properties
	Sync File Windows
	Synchronize Files
	Syntax Decorations
	Syntax Formatting
	Tile Horizontal
	Tile One Window
	Tile Two Windows
	Tile Vertical
	Toggle Insert Mode
	Top of File
	Top of Window
	Touch All Files in Relation
	Typing Options
	Undo
	Undo All
	Vertical Scroll Bar
	View Clip
	View Relation Outline
	View Relation Window Horizontal Graph
	View Relation Window Vertical Graph
	Window List
	Word Left
	Word Right
	Zoom Window
	*/
}

macro TestSiMro1()
{
	msg("mro1")
	return 1
}

macro TestSiMro2()
{
	msg("mro2")
	return 1
}

macro TestNodeMsg(msgStr)
{
	if(msgStr == "CustomCmd")
	{
		cmdStr = "D:&&cd D:\\Save\\SI\\Macro&&start cmd.exe&&parse"
//		cmdStr = "D:&&start cmd.exe&&parse"
//		cmdStr = "start cmd.exe&&parse"

		msg(cmdStr)
		ShellOpenCustomCmd(cmdStr)
	}
	else if(msgStr == "SiMro")
	{
		//&&左右两边都执行
		if(TestSiMro1()>0 && TestSiMro2()>0)
			msg("a && b")

		if(TestSiMro1()>0 || TestSiMro2()>0)
			msg("a || b")
			
		if(TestSiMro1()==0 && TestSiMro2()==0)
			msg("!a && !b")
	}
	else
	{
		//临时
		msg(msgStr # " no found")
	}
}

macro TestMsg(msgStr, num)
{
	if(num == 1)
	{
		//正式
//		msg(msgStr)
	}
	else
	{
		//临时
		msg(msgStr)
	}
}
