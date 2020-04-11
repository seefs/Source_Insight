/*
ReplaceFromList(thbuf)

ReplaceSpans(hbuf, lnStart, newtext, patternStart, patternEnd, fCaseSens, fRegExp)

ProgressiveSearch(thbuf)
*/

/*   R E P L A C E   F R O M   L I S T   */
/*-------------------------------------------------------------------------
    Replace a list of strings across the whole project.
	Warning: Changes are automatically saved and are permanent!
	Note: this only works for whole word replacements.

    Outputs a replacement-log to a Results file
    
    The current window should contain a list of strings, one per line, 
    with a comma separating the old and new string.
    Example:

    oldword1,newword1
    oldword2,newword2
	... etc ...
-------------------------------------------------------------------------*/
macro ReplaceFromList(thbuf)
{
	hbufList = GetCurrentBuf();
	lnMax = GetBufLineCount(hbufList)

	// create result log file
	hbufResult = NewBuf("Results")
	if (hbufResult == 0)
		stop
	
	countTot = 0
	
	// process each item in the list
	ln = 0
	while (ln < lnMax)
		{
		// get list item; parse out old and new string
		line = GetBufLine(hbufList, ln)
		ichComma = IchInString(line, ",")
		if (ichComma > 0)
			{
			szOld = strmid(line, 0, ichComma)
			szNew = strmid(line, ichComma + 1, strlen(line))
			
			// use one the next 2 lines to do replaces.
			count = ReplaceSzWordInProject(szOld, szNew, hbufList)
			// count = ReplaceSzAnyInProject(szOld, szNew, hbufList)
			
			AppendBufLine(hbufResult, "@szOld@=>@szNew@ : @count@ replacements")
			countTot = countTot + count
			}
		ln = ln + 1
		}
	
	SetCurrentBuf(hbufResult)
	Msg("@countTot@ total replacements were made.");
}


/*   R E P L A C E   S Z   W O R D   I N   P R O J E C T   */
/*-------------------------------------------------------------------------
    Replace whole word szOld with szNew across the whole project.
    Note: this only works for whole word replacements.
    
	hbufSkip is skipped over.  This is handy because
	we don't want to replace in the replacement-list file

	Returns the number of replacements performed
-------------------------------------------------------------------------*/
macro ReplaceSzWordInProject(szOld, szNew, hbufSkip)
{
	TRUE = 1; FALSE = 0;
	
	// create source link buffer
	hbufLinks = NewBuf("Links") 
	if (hbufLinks == 0)
		stop
	
	// search across project for szOld
	SearchForRefs(hbufLinks, szOld, 0)
	
	// step thru each source link
	ilinkMac = GetBufLineCount(hbufLinks)
	ilink = 0;
	fileLast = ""
	cReplace = 0
	while (ilink < ilinkMac)
		{
		link = GetSourceLink(hbufLinks, ilink)
		if (link != "" && link.file != fileLast)
			{
			// open the file and search for each occurence
			fileLast = link.file
			hbuf = OpenBuf(link.file)
			if (hbuf != 0 && hbuf != hbufSkip)
				{
				// do replace operation in the buffer
				count = DoReplace(hbuf, szOld, szNew)
				cReplace = cReplace + count
				
				// Save and close the file
				// SaveBuf(hbuf)
				if (count != 0)
					SaveBuf(hbuf)
				CloseBuf(hbuf)
				}
			}
		
		// next source link
		ilink = ilink + 1
		}

	CloseBuf(hbufLinks)
	return cReplace
}


/*   R E P L A C E   S Z   A N Y   I N   P R O J E C T   */
/*-------------------------------------------------------------------------
    Replace any szOld with szNew across the whole project.
    Note: this works for any szOld string, not just whole words
    
	hbufSkip is skipped over.  This is handy because
	we don't want to replace in the replacement-list file

	Returns the number of replacements performed
-------------------------------------------------------------------------*/
macro ReplaceSzAnyInProject(szOld, szNew, hbufSkip)
{
	TRUE = 1; FALSE = 0;
	
	hprj = GetCurrentProj()
	if (hprj == 0)
		{
		Msg ("You must have a project open.")
		stop
		}
	
	// for each project file...
	ifileMac = GetProjFileCount(hprj)
	ifile = 0
	cReplace = 0
	while (ifile < ifileMac)
		{
		// open each project file and search for each occurence
		filename = GetProjFileName(hprj, ifile)
		
		hbuf = OpenBuf(filename)
		if (hbuf != 0 && hbuf != hbufSkip)
			{
			// do replace operation in the buffer
			count = DoReplace(hbuf, szOld, szNew)
			cReplace = cReplace + count
			
			// Save and close the file
			if (count != 0)
				SaveBuf(hbuf)
			CloseBuf(hbuf)
			}
		
		// next source link
		ifile = ifile + 1
		}

	return cReplace
}


/*   R E P L A C E   */
/*-------------------------------------------------------------------------
    Do a replace operation in the given buffer.
    Returns the number of replacements
-------------------------------------------------------------------------*/
macro DoReplace(hbuf, szOld, szNew)
{
	TRUE = 1
	
	// find each occurence and replace each one
	ln = 0
	ich = 0
	cReplace = 0
	hwnd = 0
	while (TRUE)
		{
		sel = SearchInBuf(hbuf, szOld, ln, ich, TRUE, FALSE, TRUE)
		if (sel == "")
			break;
		if (hwnd == 0)
			{
			// put buffer in a window
			SetCurrentBuf(hbuf)
			hwnd = GetCurrentWnd()
			}
		cReplace = cReplace + 1
		SetWndSel(hwnd, sel)
		SetBufSelText(hbuf, szNew)
		ln = sel.lnLast;
		ich = sel.ichLim;
		}
	
	return cReplace
}

macro DoReplaceRow(hbuf, szOld, szNew, pRow, isRule)
{
	TRUE = 1
	
	// find each occurence and replace each one
	ln = pRow
	ich = 0
	cReplace = 0
	hwnd = 0
	while (TRUE)
		{
		//isRule:设置参数列表从行首替换
		sel = SearchInBuf(hbuf, szOld, ln, ich, TRUE, isRule, FALSE) //fWholeWordsOnly = FALSE
		if (sel == "")
			break;
		if (hwnd == 0)
			{
			// put buffer in a window
			SetCurrentBuf(hbuf)
			hwnd = GetCurrentWnd()
			}
		cReplace = cReplace + 1
		SetWndSel(hwnd, sel)
		SetBufSelText(hbuf, szNew)
		ln = sel.lnLast;
		ich = sel.ichLim + strlen(szNew) - strlen(szOld);
		}
	
	return cReplace
}
/*   I C H   I N   S T R I N G   */
/*-------------------------------------------------------------------------
    Return index of character ch in string s;
    Return -1 if ch is not found
-------------------------------------------------------------------------*/
macro IchInString(s, ch)
{
	i = 0
	cch = strlen(s)
	while (i < cch)
		{
		if (s[i] == ch)
			return i
		i = i + 1
		}

	return (0-1)
}

/////


/*   R E P L A C E   S P A N S   */
/*-------------------------------------------------------------------------
    Replaces patterns that span lines

    Inputs:
    	hbuf - the buffer
    	lnStart - the first line number to start searching.  Replacement continues
    		up to the end of the file.
    	newtext - the replacement text.  The newtext is limited to a single line or less.
    	patternStart - the pattern that starts a span.
    	patternEnd - the pattern that ends a span.  The start and end patterns
    		may be on separate lines.
    	fCaseSens - boolean: case sensitive search
    	fRegExp - boolean: use regular expression patterns

    Returns the number of replacements
-------------------------------------------------------------------------*/
macro ReplaceSpans(hbuf, lnStart, newtext, patternStart, patternEnd, fCaseSens, fRegExp)
{
	var cReplace
	var selMatch
	var selEnd
	
	cReplace = 0;
	
	selMatch = SearchInBuf(hbuf, patternStart, lnStart, 0, fCaseSens, fRegExp, False);
	
	while (selMatch != nil)
		{
		// find starting pattern
		SetBufIns(hbuf, selMatch.lnFirst, selMatch.ichFirst);
		
		// find ending pattern and extend selection up to include it
		Toggle_extend_mode;
		selEnd = SearchInBuf(hbuf, patternEnd, selMatch.lnFirst, selMatch.ichFirst, 
			fCaseSens, fRegExp, False);

		if (selEnd == nil)
			{
			// no more matches
			Toggle_extend_mode;
			break;
			}
			
		SetBufIns(hbuf, selEnd.lnLast, selEnd.ichLim);
		Toggle_extend_mode;
		
		// replace the old text with newtext
		SetBufSelText(hbuf, newtext);
		cReplace = cReplace + 1;
	
		// set the insertion point just past the new text
		selMatch.ichFirst = selMatch.ichFirst + strlen(newtext)
		SetBufIns(hbuf, selMatch.lnFirst, selMatch.ichFirst);
		
		// search for the next occurrence
		selMatch = SearchInBuf(hbuf, patternStart, selMatch.lnFirst, selMatch.ichFirst, 
			fCaseSens, fRegExp, False);
		}

	return cReplace;
}


/*-------------------------------------------------------------------------
    Replaces a pattern with the contents of the Clipboard

    Inputs:
    	hbuf - the buffer
    	lnStart - the first line number to start searching.  Replacement continues
    		up to the end of the file.
    	pattern - the pattern to find and replace.
    	fCaseSens - boolean: case sensitive search
    	fRegExp - boolean: use regular expression patterns

    Returns the number of replacements
-------------------------------------------------------------------------*/
macro ReplaceWithClipboard(hbuf, lnStart, pattern, fCaseSens, fRegExp)
{
	var cReplace
	var selMatch
	var selEnd
	var hwnd
	
	// put the target buffer in the current window
	SetCurrentBuf(hbuf)
	hwnd = GetCurrentWnd()
	
	cReplace = 0;
	
	selMatch = SearchInBuf(hbuf, pattern, lnStart, 0, fCaseSens, fRegExp, False);
	
	while (selMatch != nil)
		{
		// find starting pattern
		SetWndSel(hwnd, selMatch)
		
		// replace the old text with newtext
		Paste
		cReplace = cReplace + 1;
	
		// set the insertion point just past the new text
		selMatch.ichFirst = selMatch.ichFirst + 1;
		SetBufIns(hbuf, selMatch.lnFirst, selMatch.ichFirst);
		
		// search for the next occurrence
		selMatch = SearchInBuf(hbuf, pattern, selMatch.lnFirst, selMatch.ichFirst, 
			fCaseSens, fRegExp, False);
		}

	return cReplace;
}


/*-------------------------------------------------------------------------
    Replaces patterns that span lines with the contents of the Clipboard

    Inputs:
    	hbuf - the buffer
    	lnStart - the first line number to start searching.  Replacement continues
    		up to the end of the file.
    	patternStart - the pattern that starts a span.
    	patternEnd - the pattern that ends a span.  The start and end patterns
    		may be on separate lines.
    	fCaseSens - boolean: case sensitive search
    	fRegExp - boolean: use regular expression patterns

    Returns the number of replacements
-------------------------------------------------------------------------*/
macro ReplaceSpansWithClipboard(hbuf, lnStart, patternStart, patternEnd, fCaseSens, fRegExp)
{
	var cReplace
	var selMatch
	var selEnd
	
	// put the target buffer in the current window
	SetCurrentBuf(hbuf)
	
	cReplace = 0;
	
	selMatch = SearchInBuf(hbuf, patternStart, lnStart, 0, fCaseSens, fRegExp, False);
	
	while (selMatch != nil)
		{
		// find starting pattern
		SetBufIns(hbuf, selMatch.lnFirst, selMatch.ichFirst);
		
		// find ending pattern and extend selection up to include it
		Toggle_extend_mode;
		selEnd = SearchInBuf(hbuf, patternEnd, selMatch.lnFirst, selMatch.ichFirst, 
			fCaseSens, fRegExp, False);

		if (selEnd == nil)
			{
			// no more matches
			Toggle_extend_mode;
			break;
			}
			
		SetBufIns(hbuf, selEnd.lnLast, selEnd.ichLim);
		Toggle_extend_mode;
		
		// replace the old text with newtext
		Paste
		cReplace = cReplace + 1;
	
		// set the insertion point just past the new text
		selMatch.ichFirst = selMatch.ichFirst + 1;
		SetBufIns(hbuf, selMatch.lnFirst, selMatch.ichFirst);
		
		// search for the next occurrence
		selMatch = SearchInBuf(hbuf, patternStart, selMatch.lnFirst, selMatch.ichFirst, 
			fCaseSens, fRegExp, False);
		}

	return cReplace;
}

///////

macro ProgressiveSearch(thbuf)
{
	/* This does a progressive search as the user types characters
	   Pressing Enter or Escape will cancel the search 
	*/

    hbuf = GetCurrentBuf()
    hwnd = GetCurrentWnd()
    key = 0
    char = 1 // needs to start with any non-zero value
    SearchFor = ""
    sel = GetWndSel(hwnd)
    
	while (char != 0)
	{
		key = GetKey()
		char = CharFromKey(key)
		if (char != 0)
		{
		    
			if (key == 13) //Enter searches current string again
				sel.ichFirst = sel.ichFirst + 1
			else if (key == 8) // backspace
			{
				if (strlen(SearchFor) > 0)
					SearchFor = strtrunc (SearchFor, strlen(SearchFor) - 1)
			}
			else
				SearchFor = cat(SearchFor, char)
			sel = SearchInBuf(hbuf, SearchFor, sel.lnFirst, sel.ichFirst, 0, 0, 0)
			if (sel == "")
			{
				sel = GetWndSel(hwnd)
				if (key == 13)
				{
					sel.fExtended = 0
					sel.ichLim = sel.ichFirst
					SetWndSel(hwnd, sel)
					char = 0
					Beep()
				}
				else  
					if (strlen(SearchFor) > 0)
						SearchFor = strtrunc (SearchFor, strlen(SearchFor) - 1)
			}
			else
			{
        		ScrollWndToLine(hwnd, sel.lnFirst)
        		SetWndSel(hwnd, sel)
                LoadSearchPattern(SearchFor, 0, 0, 0)
        	}
        }
	}
}

