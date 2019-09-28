/*
	功能:string
	

Fun list:
	macro _TempHeadEvent(hbuf){}

TrimSpaces(thbuf) //清除右边空格
StrTrimSpaces(s)  //

TabOrIndent(thbuf)  //没什么用


InsertAsterisk(thbuf)

PrintSelection(thbuf)  //没什么用


*/

// This function trims white spaces from the ends of the selected lines
// in the current file buffer.  If the selection is empty, it does the 
// whole file.
macro TrimSpaces(thbuf)
{
	hbuf = GetCurrentBuf()
	hwnd = GetCurrentWnd()
	sel = GetWndSel(hwnd)

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

	// do for each line....
	while (ln < lnLim)
		{
		s = GetBufLine(hbuf, ln)
		sTrim = StrTrimSpaces(s)
		if (s != sTrim)
			PutBufLine(hbuf, ln, sTrim)
		ln = ln + 1
		}
}


// Helper function: trims white space from the string s.
// Returns resulting string.
macro StrTrimSpaces(s)
{
	
	cch = strlen(s)
	ich = cch - 1

	chTab = CharFromAscii(9)

	while (ich >= 0)
		{
		ch = s[ich]
		if (ch != " " && ch != chTab)
			return strmid(s, 0, ich + 1)
		ich = ich - 1
		}

	return ""
}

/*   T A B   O R   I N D E N T   */
/*-------------------------------------------------------------------------
    If selection is extended, indent all the lines. 
    If selection is just an insertion point, insert a tab.
-------------------------------------------------------------------------*/
macro TabOrIndent(thbuf)
{
	hwnd = GetCurrentWnd()
	if (hwnd != 0)
		{
		sel = GetWndSel(hwnd)
		if (sel.fExtended)
			Indent_Right
		else
			Tab
		}
}
////////////////
macro InsertAsterisk(thbuf)
{
	hbuf = GetCurrentBuf()
	if (hbuf != 0)
		SetBufSelText(hbuf, "*")
}


macro InsertSlash(thbuf)
{
	hbuf = GetCurrentBuf()
	if (hbuf != 0)
		SetBufSelText(hbuf, "/")
}

macro InsertPlus(thbuf)
{
	hbuf = GetCurrentBuf()
	if (hbuf != 0)
		SetBufSelText(hbuf, "+")
}

macro InsertMinus(thbuf)
{
	hbuf = GetCurrentBuf()
	if (hbuf != 0)
		SetBufSelText(hbuf, "-")
}


/////////////////////

macro PrintSelection(thbuf)
{
	hbufCur = GetCurrentBuf()
	filename = GetBufName(hbufCur)
	Copy
	hbufTemp = NewBuf("Output: @filename@")
	SetCurrentBuf(hbufTemp)
	Paste
	Print()
	CloseBuf(hbufTemp)
}

