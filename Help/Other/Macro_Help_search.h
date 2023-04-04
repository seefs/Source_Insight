
// 当前为搜索模式
autoMode = search

// 当前为测试文件:
MiniTest = True


// 不需要设置变量


//循环自动搜索
autoRun:
word = TXT_PB_COPYALL_FROMNV_TO_SIM1
word = TXT_PB_COPYALL_FROM_SIM1_TO_NV

word = TXT_PB_IMPORT_SIM1
word = TXT_PB_COPY_FROM_SIM1_TO_NV




### 批量搜索--
//
Save:Help\Tmp\Tmp_goto.c  ShowServingUE
//
lnSource    = 42
lnTarget    = 10
target_file = D:\save\SI\Help\Tmp\Tmp_goto.c
target_word = MMIAPIENG_CreateShowOutVersionWin
pattern     = MMIAPIENG_CreateShowOutVersionWin
// 
Save:Macro\sbd_test.em  reAll


//创建一个新的源链接
reAll  SetSourceLink
// SetSourceLink (hbufSource, lnSource, target_file, lnTarget)


// 在整个项目中搜索对单词字符串的引用
// 如果 fTouchFiles 为 TRUE，则每个包含单词的文件的上次修改时间戳都将设置为当前时间。
reAll  SearchForRefs
//	SearchForRefs (hbuf, word, fTouchFiles)


//reAll  GetSourceLink
//	link(file + row) = GetSourceLink (hbufSource, lnSource)


// “向前搜索”和“向后搜索”
reAll  LoadSearchPattern
//	LoadSearchPattern(pattern, fMatchCase, fRegExp, fWholeWordsOnly)


//文件内搜索
//reAll  SearchInBuf
//	SearchInBuf (hbuf, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)


//reAll  ReplaceInBuf
//	ReplaceInBuf(hbuf, oldPattern, newPattern, lnStart, lnLim, fMatchCase, fRegExp, fWholeWordsOnly, fConfirm)




### 内联宏，换电脑再试
/* Macro: touch all ucmMax references:
		// to run, place cursor on next line and invoke "Run Macro" 
		hbuf = NewBuf("TouchRefs") // create output buffer
		if (hbuf == 0)
		    stop

		SearchForRefs(hbuf, "ucmMax", TRUE)
		SetCurrentBuf(hbuf)       // put search results in a window
		SetBufDirty(hbuf, FALSE); // don't bother asking to save
		Stop  

*/

