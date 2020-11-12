
macro TranslateDir(file, hbuflist)
{
	hbufsub = OpenCache(file)
	lnMax = GetBufLineCount(hbuflist)
	row = 0
	while (row < lnMax-1)
	{
		wr1 = GetBufLine(hbuflist, row)
		wr2 = GetBufLine(hbuflist, row+1)

//		msg(wr1 # "~" # wr2)
//		5 Ó¢ÎÄ; 37 ²¨Ë¹
		TranslateFile(hbufsub, 5, wr1, 37, wr2, hbufLog)
		
//		TranslateFile(hbufsub, 1, "STR_GLOBAL_YES", 37, "?????", hbufLog)
//		TranslateFile(hbufsub, 1, "STR_ID_PHNSET_FONT_SIZE_SMALL", 37, "?????", hbufLog)

		row = row + 2
	}
	
	CloseBuf(hbufsub)
}

macro TranslateFile(trBuf, lnFn, strFn, lnRe, strRe, logBuf)
{ 
	var row 
	var lnMax 
	
	var ich 
	var ichMax
	var lastch 
	
	var line
	var ch 
	
	var tabFn
	var tabRe
	
	//tmp:
	var curWord
	var isRe
	var lnlog
	lnlog = 0
	//
	var reCount
	reCount = 0
	
	lnMax = GetBufLineCount(trBuf)
	row = 0
	while (row < lnMax)
	{
		line = GetBufLine(trBuf, row)
		ichMax = strlen(line)
		lastch = 0
		isRe = False
		
		ich = 0
		tabFn = 1 //from 1 start
		tabRe = 1 //from 1 start
		while (ich < ichMax)
		{
			//search tab
			ch = line[ich]
			if(AsciiFromChar (ch) == 9)
			{
				//search find string
				if(tabFn == lnFn)
				{
					curWord = strmid(line, lastch, ich)
					//msg(row # "~" # lastch # "~" # ich # "[" # curWord # "]")
				    if( curWord == strFn)
				    {
				    	isRe = True
					}
					lastch = ich + 1
					tabFn = tabFn + 1
					break
				}
				else
				{
					tabFn = tabFn + 1
				}
				lastch = ich + 1
			}
			ich =  ich + 1
		}
		//start replace
	    if(isRe == True)
	    {
		    if( lnFn < lnRe)
		    {
		    	tabRe = tabFn
		    	//search tab
				ich = lastch + 1
				while (ich < ichMax)
				{
					ch = line[ich]
				    if(AsciiFromChar (ch) == 9)
				    {
		    			//search replace string
						oldWord = strmid(line, lastch, ich)
						//msg("start replace:" # tabRe # "~" # "[" # oldWord # "]")
						if(tabRe == lnRe)
						{
							oldWord = strmid(line, lastch, ich)
							lineNew = strmid(line, 0, lastch) # strRe # strmid(line, ich, ichMax)
							PutBufLine(trBuf, row, lineNew)
							//lastch = ich
							//tabRe = tabRe + 1

							//log:
//							AppendBufLine(logBuf, ">>" # strFn # ">>")
							reCount = reCount + 1
							break
						}
						else
						{
							 tabRe = tabRe + 1
						}
						lastch = ich + 1
				    }
					ich =  ich + 1
				}
		    }
		    else
		    {
		    	//replcae eng. no use
		    }
		    //replace over next row
			//break
			//move replace
	    }
	
		row = row + 1
	}
	if(reCount>0)
	{
		SaveBuf(trBuf)
	}
	//setCurrentBuf(trBuf)
//	SaveBuf(logBuf)
}