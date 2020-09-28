/* t357.em - a small collection of useful editing macros */


/******************************************************************************
 * InsFileHeader -- insert the information of file
 *
 * modification history
 * --------------------
 * 01a, 23mar2003, added DESCRIPTION by t357
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
/*-------------------------------------------------------------------------
 I N S E R T   H E A D E R

 Inserts a comment header block at the top of the current function.
 This actually works on any type of symbol, not just functions.

 To use this, define an environment variable "szMyName" and set it
 to your email name.  eg. set szMyName=raygr
-------------------------------------------------------------------------*/

macro InsFileHeader(thbuf)
{

	/*#########################################################
	  #########################################################
	  #######  Set szMyName variable to your name    ########
	  #######  for example    szMyName = "t357"     ########
	  #########################################################    
	  #########################################################*/
	 szMyName = ""

	 // Get current time
	 szTime = GetSysTime(1)
	 Day = szTime.Day
	 Month = szTime.Month
	 Year = szTime.Year
	 if (Day < 10)
	  szDay = "0@Day@"
	 else
	  szDay = Day
	 szMonth = NumToName(Month)

	 hBuf = GetCurrentBuf()
	 szpathName = GetBufName(hBuf)
	 szfileName = GetFileName(szpathName)
	 nlength = StrLen(szfileName)
	 szInf = Ask("Enter the information of file:")
	    szDescription = Ask("Enter the description of file:")

	 hbuf = GetCurrentBuf()
	 // begin assembling the title string
	 InsBufLine(hbuf, 0, "/******************************************************************************")
	 InsBufLine(hbuf, 1, " * @szfileName@ - @szInf@")
	 InsBufLine(hbuf, 2, " * ")
	 InsBufLine(hbuf, 3, " * Copyright 1998-2003 Guangzhou Gaoke Communication Technology Co.,Ltd.")
	 InsBufLine(hbuf, 4, " * ")
	 InsBufLine(hbuf, 5, " * DESCRIPTION: - ")
	 InsBufLine(hbuf, 6, " *     @szDescription@")
	 InsBufLine(hbuf, 7, " * modification history")
	 InsBufLine(hbuf, 8, " * --------------------")
	 InsBufLine(hbuf, 9, " * 01a, @szDay@@szMonth@@Year@, @szMyName@ written")
	 InsBufLine(hbuf, 10, " * --------------------")
	 InsBufLine(hbuf, 11, " ******************************************************************************/")

	 // put the insertion point inside the header comment
	 SetBufIns(hbuf, 1, nlength + strlen(szInf) + 8)
}

/******************************************************************************
 * InsFunHeader -- insert function's information
 *
 * modification history
 * --------------------
 * 01a, 23mar2003, added DESCRIPTION by t357
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro InsFunHeader(thbuf)
{
	 // Get the owner's name from the environment variable: szMyName.
	 // If the variable doesn't exist, then the owner field is skipped.

	/*#########################################################
	  #########################################################
	  #######  Set szMyName variable to your name    ########
	  #######  for example    szMyName = "t357"     ########
	  #########################################################    
	  #########################################################*/
	 szMyName = ""

	 // Get a handle to the current file buffer and the name
	 // and location of the current symbol where the cursor is.
	 hbuf = GetCurrentBuf()
	 szFunc = GetCurSymbol()
	 ln = GetSymbolLine(szFunc)

	 // Get current time
	 szTime = GetSysTime(1)
	 Day = szTime.Day
	 Month = szTime.Month
	 Year = szTime.Year
	 if (Day < 10)
	  szDay = "0@Day@"
	 else
	  szDay = Day
	 szMonth = NumToName(Month)
	 szInf = Ask("Enter the information of function:")
	 szDescription = Ask("Enter the description of function:")

	 // begin assembling the title string
	 sz = "/******************************************************************************"
	 InsBufLine(hbuf, ln, sz)
	 InsBufLine(hbuf, ln + 1, " * @szFunc@ - @szInf@")
	 InsBufLine(hbuf, ln + 2, " * DESCRIPTION: - ")
	    InsBufLine(hbuf, ln + 3, " *    @szDescription@ ")
	// remove by t357.    CutWord(szDescription)
	 InsBufLine(hbuf, ln + 4, " * Input: ")
	 InsBufLine(hbuf, ln + 5, " * Output: ")
	 InsBufLine(hbuf, ln + 6, " * Returns: ")
	 InsBufLine(hbuf, ln + 7, " * ")
	 InsBufLine(hbuf, ln + 8, " * modification history")
	 InsBufLine(hbuf, ln + 9, " * --------------------")
	 InsBufLine(hbuf, ln + 10, " * 01a, @szDay@@szMonth@@Year@, @szMyName@ written")
	 InsBufLine(hbuf, ln + 11, " * --------------------")
	 InsBufLine(hbuf, ln + 12, " ******************************************************************************/")

	 // put the insertion point inside the header comment
	 SetBufIns(hbuf, ln + 1, strlen(szFunc) + strlen(szInf) + 8)
}


/******************************************************************************
 * NumToName -- change the month number to name
 *
 * modification history
 * --------------------
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro NumToName(Month)
{
	 if (Month == 1)
	  return "jan"
	 if (Month == 2)
	  return "feb"
	 if (Month == 3)
	  return "mar"
	 if (Month == 4)
	  return "apr"
	 if (Month == 5)
	  return "may"
	 if (Month == 6)
	  return "jun"
	 if (Month == 7)
	  return "jul"
	 if (Month == 8)
	  return "aug"
	 if (Month == 9)
	  return "sep"
	 if (Month == 10)
	  return "oct"
	 if (Month == 11)
	  return "nov"
	 if (Month == 12)
	  return "dec"
}

/******************************************************************************
 * CutWord -- auto newline
 *
 * modification history
 * --------------------
 * 01a, 24mar2003, t357 fix some bug
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro CutWord(ncurLine, szInf)
{
	 LENGTH = 63
	 nlength = StrLen(szInf)
	 i = 0 /* loop control */
	 begin = 0 /* first character's index of current line */
	 pre = 0 /* preceding word's index */
	 hbuf = GetCurrentBuf()
	// nline = GetBufLnCur()
	 while (i < nlength)
	 {
	/* remove by t357
	  nrow = 0
	  sz = ""
	  while (nrow < 80)
	  {
	   if (nlength < 0)
	    break
	   sz = Cat(sz, szInf[nrow])
	   nrow = nrow + 1
	   nlength = nlength - 1
	  }
	  InsBufLine(hbuf, nline, sz)
	  szInf = szInf[nrow]
	 }
	*/
        c = szInf[i]
        if (" " == @c@ && (i - b < LENGTH))
        {
            pre = i
        }
        else if (" " == @c@)
        {
            szOutput = ""
            k = begin /* loop control */
            while (k < pre)
            {
                szOutput = Cat(szOutput, szInf[k])
                k = k + 1
            }
            InsBufLine(hbuf, ncurLine, sz)
            ncurLine = ncurLine + 1
            begin = pre
        }
        i = i + 1
    }
    if (h != i - 1)
    {
        szOutput = ""
        k = begin /* loop control */
        while (k < pre)
        {
            szOutput = Cat(szOutput, szInf[k])
            k = k + 1
        }
        InsBufLine(hbuf, ncurLine, sz)
        ncurLine = ncurLine + 1
    }
}

/******************************************************************************
 * GetFileName -- get the filename only from the path
 *
 * modification history
 * --------------------
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro GetFileName(pathName)
{
	 nlength = strlen(pathName)
	 i = nlength - 1
	 name = ""
	 while (i + 1)
	 {
	  ch = pathName[i]
	  if ("\\" == "@ch@" || "/" == "@ch@")
	   break
	  i = i - 1
	 }
	 i = i + 1
	 while (i < nlength)
	 {
	  name = cat(name, pathName[i])
	  i = i + 1
	 }

	 return name
}

/******************************************************************************
 * ReturnTrueOrFalse -- Inserts "Returns True or False" at the current line
 *
 * modification history
 * --------------------
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro ReturnTrueOrFalse(thbuf)
{
	 szReturns = "return True if successful or False if errors."
	 hbuf = GetCurrentBuf()
	 ln = GetBufLnCur(hbuf)
	 szCurLine = GetBufLine(hbuf, ln)
	 DelBufLine(hbuf, ln)
	 InsBufLine(hbuf, ln, "@szCurLine@@szReturns@")
	 SetBufIns(hbuf, ln, StrLen(szReturns) + StrLen(szCurLine) + 3)
}

/******************************************************************************
 * InsHeaderDef -- Inserts the header define in the headerfile
 *
 * modification history
 * --------------------
 * 01a, 05mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro InsHeaderDef(thbuf)
{
	 hBuf = GetCurrentBuf()
	 szpathName = GetBufName(hBuf)
	 szfileName = GetFileName(szpathName)
	 szfileName = toupper(szfileName)
	 nlength = StrLen(szfileName)
	 i = 0 /* loop control */
	 szdefineName = ""
	 while (i < nlength)
	 {
	  if (szfileName[i] == ".")
	   szdefineName = Cat(szdefineName, "_")
	  else
	   szdefineName = Cat(szdefineName, szfileName[i])
	  i = i + 1
	 }
	 szdefineName = Cat("_", szdefineName)
	 IfdefineSz(szdefineName)
}

/******************************************************************************
 * PrintDate - print date on where the cursor point to
 * DESCRIPTION: -
 *
 * Input:
 * Output:
 * Returns:
 *
 * modification history
 * --------------------
 * 01a, 23mar2003, t357 written
 * --------------------
 ******************************************************************************/
macro PrintDate(thbuf)
{
	 szTime = GetSysTime(1)
	 Day = szTime.Day
	 Month = szTime.Month
	 Year = szTime.Year
	 if (Day < 10)
	  szDay = "0@Day@"
	 else
	  szDay = Day
	 szMonth = NumToName(Month)
	 hbuf = GetCurrentBuf()
	 ln = GetBufLnCur(hbuf)
	 szCurLine = GetBufLine(hbuf, ln)
	 DelBufLine(hbuf, ln)
	 InsBufLine(hbuf, ln, "@szCurLine@ @szDay@@szMonth@@Year@")
	 SetBufIns(hbuf, ln, StrLen(szCurLine) + 10)
}


// Ask user for ifdef condition and wrap it around current
// selection.
// 28mar2003, modified by t357.
// 26mar2003, modified by t357.
macro InsIfdef(thbuf)
{
	 sz = Ask("Enter ifdef condition:")
	 if (sz != "")
	 {
	  // IfdefSz(sz);
	  hwnd = GetCurrentWnd()
	     sel = GetWndSel(hwnd)
	  hbuf = GetWndBuf(hwnd)
	  // get line the selection (insertion point) is on
	  szLine = GetBufLine(hbuf, sel.lnFirst - 1);
	  chTab = CharFromAscii(9)
	  // prepare a new indented blank line to be inserted.
	  // keep white space on left and add a tab to indent.
	  // this preserves the indentation level.
	  i = 0 /* loop control */
	  ich = ""
	  while (szLine[i] == " " || szLine[i] == chTab)
	  {
	   ich = Cat(ich, szLine[i])
	   i = i + 1
	  }

	  InsBufLine(hbuf, sel.lnFirst, "")
	     InsBufLine(hbuf, sel.lnFirst + 1, "@ich@#ifdef @sz@")
	     InsBufLine(hbuf, sel.lnFirst + 2, "@ich@" # chTab)
	     InsBufLine(hbuf, sel.lnFirst + 3, "@ich@#endif  /* @sz@ */")
	     SetBufIns(hbuf, sel.lnFirst + 2, StrLen(ich) + StrLen(chTab))
	    }
}

 

// Wrap ifdeinef <sz> .. endif around the current selection
macro IfdefineSz(sz)
{
	 hwnd = GetCurrentWnd()
	 lnFirst = GetWndSelLnFirst(hwnd)
	 lnLast = GetWndSelLnLast(hwnd)

	 hbuf = GetCurrentBuf()
	 InsBufLine(hbuf, lnFirst, "#ifndef @sz@")
	 InsBufLine(hbuf, lnFirst + 1, "#define @sz@")
	 InsBufLine(hbuf, lnLast + 3,  "#endif  /* @sz@ */")
	 SetBufIns(hbuf, lnFirst + 2, 0)
}

 


/*   A U T O   E X P A N D   */
/*-------------------------------------------------------------------------
    Automatically expands C statements like if, for, while, switch, etc..

    To use this macro,
     1. Add this file to your project or your Base project.

  2. Run the Options->Key Assignments command and assign a
  convenient keystroke to the "AutoExpand" command.

  3. After typing a keyword, press the AutoExpand keystroke to have the
  statement expanded.  The expanded statement will contain a ### string
  which represents a field where you are supposed to type more.

  The ### string is also loaded in to the search pattern so you can
  use "Search Forward" to select the next ### field.

 For example:
  1. you type "for" + AutoExpand key
  2. this is inserted:
   for (###; ###; ###)
   {
    ###
   }
  3. and the first ### field is selected.
-------------------------------------------------------------------------*/
/******************************************************************************
 * AutoExpand - Automatically expands C statements
 *
 * DESCRIPTION: - Automatically expands C statements like if, for, while,
 *    switch, etc..
 *
 * Input:
 * Output:
 * Returns:
 *
 * modification history
 * --------------------
 * 01a, 27mar2003, t357 modified
 * --------------------
 ******************************************************************************/
macro AutoExpand(thbuf)
{
	 // get window, sel, and buffer handles
	 hwnd = GetCurrentWnd()
	 if (hwnd == 0)
	  stop
	 sel = GetWndSel(hwnd)
	 if (sel.ichFirst == 0)
	  stop
	 hbuf = GetWndBuf(hwnd)

	 // get line the selection (insertion point) is on
	 szLine = GetBufLine(hbuf, sel.lnFirst);

	 // parse word just to the left of the insertion point
	 wordinfo = GetWordLeftOfIch(sel.ichFirst, szLine)
	 ln = sel.lnFirst;

	 chTab = CharFromAscii(9)

	 // prepare a new indented blank line to be inserted.
	 // keep white space on left and add a tab to indent.
	 // this preserves the indentation level.
	 ich = 0
	 while (szLine[ich] == ' ' || szLine[ich] == chTab)
	  {
	  ich = ich + 1
	  }

	 szLine = strmid(szLine, 0, ich)
	 sel.lnFirst = sel.lnLast
	 sel.ichFirst = wordinfo.ich
	 sel.ichLim = wordinfo.ich

	 // expand szWord keyword...


	 if (wordinfo.szWord == "if" ||
	  wordinfo.szWord == "while" ||
	  wordinfo.szWord == "elseif")
	  {
	  SetBufSelText(hbuf, " (###)")
	  InsBufLine(hbuf, ln + 1, "@szLine@" # "{");
	  InsBufLine(hbuf, ln + 2, "@szLine@" # chTab);
	  InsBufLine(hbuf, ln + 3, "@szLine@" # "}");
	  }
	 else if (wordinfo.szWord == "for")
	  {
	  SetBufSelText(hbuf, " (###)")
	  InsBufLine(hbuf, ln + 1, "@szLine@" # "{");
	  InsBufLine(hbuf, ln + 2, "@szLine@" # chTab);
	  InsBufLine(hbuf, ln + 3, "@szLine@" # "}");
	  }
	 else if (wordinfo.szWord == "switch")
	  {
	  SetBufSelText(hbuf, " (###)")
	  InsBufLine(hbuf, ln + 1, "@szLine@" # "{")
	  InsBufLine(hbuf, ln + 2, "@szLine@" # "case ")
	  InsBufLine(hbuf, ln + 3, "@szLine@" # chTab)
	  InsBufLine(hbuf, ln + 4, "@szLine@" # chTab # "break;")
	  InsBufLine(hbuf, ln + 5, "@szLine@" # "default:")
	  InsBufLine(hbuf, ln + 6, "@szLine@" # chTab)
	  InsBufLine(hbuf, ln + 7, "@szLine@" # "}")
	  }
	 else if (wordinfo.szWord == "do")
	  {
	  InsBufLine(hbuf, ln + 1, "@szLine@" # "{")
	  InsBufLine(hbuf, ln + 2, "@szLine@" # chTab);
	  InsBufLine(hbuf, ln + 3, "@szLine@" # "} while ();")
	  }
	 else if (wordinfo.szWord == "case")
	  {
	  SetBufSelText(hbuf, " ###")
	  InsBufLine(hbuf, ln + 1, "@szLine@" # chTab)
	  InsBufLine(hbuf, ln + 2, "@szLine@" # chTab # "break;")
	  }
	 else
	  stop

	 SetWndSel(hwnd, sel)
	 LoadSearchPattern("###", true, false, false);
	 Search_Forward
}


/*   G E T   W O R D   L E F T   O F   I C H   */
/*-------------------------------------------------------------------------
    Given an index to a character (ich) and a string (sz),
    return a "wordinfo" record variable that describes the
    text word just to the left of the ich.

    Output:
     wordinfo.szWord = the word string
     wordinfo.ich = the first ich of the word
     wordinfo.ichLim = the limit ich of the word
-------------------------------------------------------------------------*/
macro GetWordLeftOfIch(ich, sz)
{
	 wordinfo = "" // create a "wordinfo" structure

	 chTab = CharFromAscii(9)

	 // scan backwords over white space, if any
	 ich = ich - 1;
	 if (ich >= 0)
	  while (sz[ich] == " " || sz[ich] == chTab)
	   {
	   ich = ich - 1;
	   if (ich < 0)
	    break;
	   }

	 // scan backwords to start of word
	 ichLim = ich + 1;
	 asciiA = AsciiFromChar("A")
	 asciiZ = AsciiFromChar("Z")
	 while (ich >= 0)
	  {
	  ch = toupper(sz[ich])
	  asciiCh = AsciiFromChar(ch)
	  if ((asciiCh < asciiA || asciiCh > asciiZ) && !IsNumber(ch))
	   break // stop at first non-identifier character
	  ich = ich - 1;
	  }

	 ich = ich + 1
	 wordinfo.szWord = strmid(sz, ich, ichLim)
	 wordinfo.ich = ich
	 wordinfo.ichLim = ichLim;

	 return wordinfo
}