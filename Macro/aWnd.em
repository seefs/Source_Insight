

/*   C L O S E   N O N   D I R T Y   */
/*-------------------------------------------------------------------------
    Close all non-dirty file windows
-------------------------------------------------------------------------*/
macro CloseNonDirty(thbuf)
{
	hwnd = GetCurrentWnd()
	while (hwnd != 0)
		{
		hwndNext = GetNextWnd(hwnd)
		
		hbuf = GetWndBuf(hwnd)
		if (!IsBufDirty(hbuf))
			CloseBuf(hbuf)
		
		hwnd = hwndNext
		}
}


/*   C L O S E _   O T H E R S _   W I N D O W S   */
/*-------------------------------------------------------------------------
    Close all but the current window.  Leaves any other dirty 
    file windows open too.
-------------------------------------------------------------------------*/
macro Close_Others_Windows(thbuf)
{
	hCur = GetCurrentWnd();
	hNext = GetNextWnd(hCur);
	while (hNext != 0 && hCur != hNext)
	{
		hT = GetNextWnd(hNext);
		hbuf = GetWndBuf(hNext);
		if (!IsBufDirty(hbuf))
			CloseBuf(hbuf)
		hNext = hT;
	}
}

// Closes all but the most recently visited windows and files.
// Any dirty files are kept open.
macro CloseOldWindows(thbuf)
{
	var hwnd
	var cWnd
	
	// This is the number of recent windows to keep open.  You may change 
	// this constant to suit your needs.
	var NumberOfWindowsToKeep; NumberOfWindowsToKeep = 4

	hwnd = GetCurrentWnd()
	cWnd = 0

	// skip the most recently visited windows in the z-order
	while (hwnd != hNil && cWnd < NumberOfWindowsToKeep)
		{
		cWnd = cWnd + 1
		hwnd = GetNextWnd(hwnd)
		}
	
	// close the remaining windows
	while (hwnd != hNil)
		{
		var hwndNext
		
		hwndNext = GetNextWnd(hwnd)
		
		// only close the window if the file is not edited
		if (!IsBufDirty(GetWndBuf(hwnd)))
			CloseWnd(hwnd)
		
		hwnd = hwndNext
		}

	// close all files that are not visible in a window anymore
	var cBuf
	cBuf = BufListCount()
	while (cBuf > 0)
		{
		var hbuf
		cBuf = cBuf - 1
		hbuf = BufListItem(cBuf)
		if (GetWndHandle(hbuf) == hNil)
			CloseBuf(hbuf)
		}
}

macro WindowsCloseStyleOne(thbuf)
{
	//>20 close >20
	//10~20 close 5~20 && != mk
	//0~10 not done.
	hNext = GetCurrentWnd();
	wndc = WndListCount ()
	if(wndc>20)
	{
		start = 0
		while (hNext != 0)
		{
			hT = GetNextWnd(hNext);
			start = start + 1
			if(start > 15)
			{
				hbuf = GetWndBuf(hNext);
				if(!IsBufDirty(hbuf) && !IsSRFile(hbuf))
				{
					CloseBuf(hbuf)
				}
			}
			hNext = hT;
		}
	}
	else if(wndc>10)
	{
		start = 0
		while (hNext != 0)
		{
			hT = GetNextWnd(hNext);
			start = start + 1
			if(start > 5)
			{
				hbuf = GetWndBuf(hNext);
				if(!IsBufDirty(hbuf) && !IsSRFile(hbuf) && !IsMakeFile(hbuf))
				{
					CloseBuf(hbuf)
				}
			}
			hNext = hT;
		}
	}
	else
	{
		while (hNext != 0)
		{
			hT = GetNextWnd(hNext);
			hbuf = GetWndBuf(hNext);
			if(!IsBufDirty(hbuf) && !IsSRFile(hbuf) && !IsMakeFile(hbuf))
			{
				CloseBuf(hbuf)
			}
			hNext = hT;
		}
	}
}

macro WindowsTest(thbuf)
{
	//Close_Others_Windows(thbuf)
}

