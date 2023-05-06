
// 当前为搜索模式
autoMode = search

// 当前为测试文件:
MiniTest = True


// 不需要设置变量
// 步骤: 
//   sprd_diff.xlsx ==> 不同ID ==> 自动搜索 ==> 有效ID ==> 再次自动搜索 ==> 加#define
// 结果: 
Save:Cmd_TXT\si_result.h


//循环自动搜索
autoRun:
word = TXT_PB_IMPORT_SIM1
word = TXT_PB_COPY_FROM_NV_TO_SIM1
word = TXT_PDA_PB_COPY_FROM_NV_TO_SIM1
word = TXT_CONNECTION_DATA_CARD_SIM1
word = TXT_ENTER_SIM1_PIN
word = TXT_ENTER_SIM1_PUK
word = TXT_PB_MOVE_FROM_SIM1
word = TXT_PDA_PB_MOVE_FROM_NV_TO_SIM1
word = TXT_FMM_SET_RING_SIM1_SELECT_CALL
word = TXT_SIM1_NAME
word = TXT_SIM_SEL_SIM1
word = TXT_WWW_ACCOUNT1
word = TXT_ANSWER_PHONE_SIM1
word = TXT_SET_SIM1_RING_CALL_TYPE
word = TXT_CL_SIM1_COST_ALL
word = TXT_SET_RING_SIM1_SELECT_CALL
word = TXT_PB_SIM1_FULL
word = TXT_CL_SIM1_COST_MAX
word = TXT_SET_SIM1_RING_MSG_TYPE
word = TXT_SMS_SETTING_SIM1_SC
word = TXT_SET_RING_SIM1_SELECT_MSG
word = TXT_MMS_USER1
word = TXT_NETWORK_ACCOUNT_SIM1
word = TXT_COMMON_SIM1_NETWORK_ACCOUNT
word = TXT_COMMON_SET_NET_SIM1
word = TXT_SMS_SIM1_SET
word = TXT_CL_SIM1_COST_RATE
word = TXT_SMS_SIM1_MEM_FULL_ALERT_USER
word = TXT_SMS_SIM1_STORAGE_SMS
word = TXT_SMS1_VOICEMAIL_EMPTY
word = TXT_SMS_SEND_SIM1



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

