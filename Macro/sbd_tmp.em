
macro testTmp(thbuf)
{
	
	// Get a handle to the current file buffer and the name
	// and location of the current symbol where the cursor is.
	
	hbuf = GetCurrentBuf()
//	szFunc = GetCurSymbol()
//	ln = GetSymbolLine(szFunc)
	
	cur_line = GetBufLine(hbuf, 0 )
	len = strlen( cur_line )
	
	msg ("len:"   # CharFromKey(13) # "@len@")
}


