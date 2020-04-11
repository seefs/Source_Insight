/*
	功能:事件日志
    1. 打开事件功能, option->key..->option:evevn enbale.. ->set: ctrl + F12
       关闭事件功能, 按2次key
	

Fun list:
	macro _TempHeadEvent(hbuf){}
event()
	AppStart(thbuf)
	AppShutdown(thbuf)
	AppCommand(sCommand)
	DocumentOpen(sFile)
	DocumentClose(sFile)
	DocumentChanged(sFile)
	DocumentNew(sFile)
	ProjectOpen(sProject)
	ProjectClose(sProject) 
macro()
	AppendToLog(s)



*/


// This is called when the application starts
event AppStart(thbuf)
{
}


// This is called when the application exits
event AppShutdown(thbuf)
{
	var fname
	var hbuf

	hbuf = OpenLogBuffer()
	fname = GetBufName(hbuf)
	SaveBufAs(hbuf, fname)
}


// This is called when the user issues a command via the keyboard or menus
event AppCommand(sCommand)
{
	AppendToLog("command: " # sCommand)
}


// This is called after the document is opened
event DocumentOpen(sFile)
{
	AppendToLog("opening " # sFile)
}
  
 
// This is called just before the document is closed
event DocumentClose(sFile)
{
	AppendToLog("closing " # sFile)
}


// this is called when the user edits the document
event DocumentChanged(sFile)
{
	AppendToLog("Document Changed: " # sFile)
}
      
event DocumentNew(sFile)
{
	AppendToLog("Document Changed: " # sFile)
}


// This is called when the user selects text or moves the cursor
// in the given document
event DocumentSelectionChanged(sFile)
{ 
	var hbuf 
	var hwnd
	var ln var sym
	var sel 
	

	// this global counter is used to throttle the event action down
	// to every 5 calls
	global selchange_count
	if (selchange_count == nil) selchange_count = 0;
	if (++selchange_count < 5) stop
	selchange_count = 0;
	
	// note that the sFile may not be open anymore, because this event is
	// called asynchronously.
	hbuf = GetBufHandle(sFile)
	if (hbuf == hNil)
		stop
	
	// get the exact selection details
	hwnd = GetWndHandle(hbuf)
	sel = GetWndSel(hwnd)
	
	
	// determine the function or symbol that contains the selection's first line
	ln = sel.lnFirst
	sym = GetSymbolLocationFromLn(hbuf, ln)
	if (sym == nil)
 		stop
	 
	// if the symbol not the same as last time, then output a message to the log file
	global lastsym
	if (sym.symbol != lastsym)
		{
		AppendToLog("SelChange: symbol: " # sym.symbol # " line: " # ln # " ich: " # sel.ichFirst)
		lastsym = sym.symbol
		}
	
} 


// This is called when a project is opened
event ProjectOpen(sProject) 
{
	AppendToLog("Open project @sProject@")
}


// This is called when a project is about to be closed
event ProjectClose(sProject) 
{
	AppendToLog("Close project @sProject@")
}
 

// This is called whenever the statusbar is changed
event StatusbarUpdate(sMessage)
{
	var hbuf

	// this global counter is used to throttle down the output 
	global statusbar_count
	if (statusbar_count == nil) statusbar_count = 0;
	if (++statusbar_count < 5) stop
	statusbar_count = 0;
	
 	AppendToLog("Statusbar: " # sMessage)
}

 

// Helper function to append a string line to the log file
macro AppendToLog(s)
{
	var hbuf
	var stime
	 
	stime = GetSysTime(true)
	
	hbuf = OpenLogBuffer(0)
	AppendBufLine(hbuf, stime.month # "/" # stime.day # "/" # stime.year # " " # stime.time # ":  " # s)
}


// Open the log file buffer and return its handle
macro OpenLogBuffer(0)
{
	var hbufLog
	var sLogFile

	sLogFile = getTXTPath(0) # "\\si_event.log"
	
	// see if log file buffer is already open
	hbufLog = GetBufHandle(sLogFile)
	if (hbufLog == hNil)
		{
		// try to open existing log file
	 	hbufLog = OpenBuf(sLogFile)
		
		// if existing file doesn't exist, then create new one
		if (hbufLog == hNil)
			hbufLog = NewBuf(sLogFile)
	 	} 

	return hbufLog
}


