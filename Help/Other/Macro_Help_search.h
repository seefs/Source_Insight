
// ��ǰΪ����ģʽ
autoMode = search

// ��ǰΪ�����ļ�:
MiniTest = True


// ����Ҫ���ñ���


//ѭ���Զ�����
autoRun:
word = TXT_PB_COPYALL_FROMNV_TO_SIM1
word = TXT_PB_COPYALL_FROM_SIM1_TO_NV

word = TXT_PB_IMPORT_SIM1
word = TXT_PB_COPY_FROM_SIM1_TO_NV




### ��������--
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


//����һ���µ�Դ����
reAll  SetSourceLink
// SetSourceLink (hbufSource, lnSource, target_file, lnTarget)


// ��������Ŀ�������Ե����ַ���������
// ��� fTouchFiles Ϊ TRUE����ÿ���������ʵ��ļ����ϴ��޸�ʱ�����������Ϊ��ǰʱ�䡣
reAll  SearchForRefs
//	SearchForRefs (hbuf, word, fTouchFiles)


//reAll  GetSourceLink
//	link(file + row) = GetSourceLink (hbufSource, lnSource)


// ����ǰ�������͡����������
reAll  LoadSearchPattern
//	LoadSearchPattern(pattern, fMatchCase, fRegExp, fWholeWordsOnly)


//�ļ�������
//reAll  SearchInBuf
//	SearchInBuf (hbuf, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)


//reAll  ReplaceInBuf
//	ReplaceInBuf(hbuf, oldPattern, newPattern, lnStart, lnLim, fMatchCase, fRegExp, fWholeWordsOnly, fConfirm)




### �����꣬����������
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

