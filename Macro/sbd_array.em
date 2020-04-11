
macro QuickSoftCache(chkBuf, low, high)
{ 
	//快速排序:500个约48S, 比较慢
	var i 
	var j
	var temp
    i = low
    j = high 
	//global counter
  
    if( low < high)
    {
		temp = GetBufLine(chkBuf, i)
        while(i < j) 
        {
            while((i < j) && Compare(GetBufLine(chkBuf, j), temp) >= 0)//降序排列改为>= 0
            { 
            	j = j - 1
            	//counter = counter+1
            }
		    if( i < j)
		    {
				//msg ("Soft1:" # "@i@~" # GetBufLine(chkBuf, j))
				PutBufLine(chkBuf, i, GetBufLine(chkBuf, j))
            	i = i + 1
		    }
            while((i < j) && Compare(GetBufLine(chkBuf, i), temp) <= 0)//降序排列改为<= 0
            {
            	i = i + 1
            	//counter = counter+1
            } 
		    if( i < j)
		    {
				//msg ("Soft2:" # "@j@~" # GetBufLine(chkBuf, i))
				PutBufLine(chkBuf, j, GetBufLine(chkBuf, i))
            	j = j - 1
		    }
        }
		//msg ("Soft3:" # "@i@~" # "@temp@")
		PutBufLine(chkBuf, i, temp)
        QuickSoftCache(chkBuf, low, i - 1);
        QuickSoftCache(chkBuf, j + 1, high);
    } 
}
 

macro Compare(left, right)
{
	//ret 0, -1, 1
	return CompareEx(left, right, 0)
}

macro CompareEx(left, right, mode)
{
	//比较2个宏 (升序)
	//mode = 0: 完全匹配
	//mode = 1: 不完全匹配, left 包含 right
	//      ret = 1 小<<0 相同<<-1 大
	//mode = 2: 中文不完全匹配, left 包含 right, 用==判断
	//      ret = 1 小<<2 小+中文部分相同<<0 中文相同<<-1 大
	
	len1 = strlen (left)
	len2 = strlen (right)
	if(len1>len2)
		minlen = len2
	else
		minlen = len1
	
	cur = 0
	while (cur < minlen )
	{		
		cch1 = AsciiFromChar(left[cur])
		cch2 = AsciiFromChar(right[cur])
		if (cch1 > cch2)
		{
			return -1;	//从大到小(B,A)
		}
		else if (cch1 < cch2)
		{
			return 1;	//从小到大(A,B)
		}
		else
		{
			cur = cur + 1
		}
	}
	if(len1 == len2)
	{
		if (mode != 2 || mode == 2 && left == right)	
		{
			return 0;	//相同(A,A)
		}
		else
		{
			return 3; // 仅编码相同，实际不相同
		}
	}
	else if (len1 < len2)
	{
		return 1;	//从小到大(A,AB) change -1 -> 1
	}
	else
	{
		if (mode == 1)		//不完全匹配
		{
			return 0;
		}
		else if (mode == 2)	
		{
			if (strmid(left, 0, len2) == right)	//中文不完全匹配
			{
				return 2;
			}
			else
			{
				return 3; // 仅编码相同，实际不相同
			}
		}
		else
		{
			return -1;	//从大到小(AB,A) change 1 -> -1
		}
	}
}



macro AppendCache(chkBuf, mcr, row)
{	
	//按顺序，添加宏（未使用）
	//return 0:
	//return 1:重复
	
	//msg ("AppendCache:" # "@mcr@ " # "@row@ ")
	
	//end行为空，start行 <= mcr < end行
	//1~2行： mid = 1, 区间为0~1，1~1;mid=(0+2)/2
	//1~3行： mid = 1, 区间为0~1，1~2;mid=(0+3)/2
	//1~10行：mid = 1, 区间为0~5，5~9;mid=(0+10)/2, r=6,l=5
	//退出条件：end - cur = 2,3..          cur - start = 2,3..
	
	var left
	var right
	var mid
	var diff

	left = 0
	mid = 0
	right=row
	chk = 0//向前添加
	
	
	while (1)
	{	
		mid = (left + right)/2
		if(mid < row)
		{
			base = GetBufLine(chkBuf, mid)
			chk = ChkMacro(base, mcr)
			//msg ("next:" # "@left@~" # "@mid@~" # "@right@ " # "@base@ " # "@mcr@ chk:" # "@chk@ ")
		}
		
		if(chk == 1)//已存在
		{
			//msg ("exist:" # "@left@~" # "@mid@~" # "@right@ " # "@base@ " # "@mcr@ chk:" # "@chk@ ")
			return 1;
		}
		else
		{
			
			if(chk == 0)//向前添加
			{
				if(left < mid)//是否退出比较
				{
					right = mid
					continue
				}
			}
			else//向后添加
			{
				if(mid + 1 < right)//是否退出比较
				{
					left = mid + 1
					continue
				}
			}
			
			if(chk == 0)//向前添加
			{
				//msg ("left:" # "@left@~" # "@mid@~" # "@right@ " # "@mcr@")
				InsBufLine(chkBuf, mid, mcr)
			}
			else//向后添加
			{
				//msg ("right:" # "@left@~" # "@mid@~" # "@right@ " # "@mcr@")
				InsBufLine(chkBuf, mid+1, mcr)
			}
			return 0;
		}
	}
}

macro FindCache(chkBuf, mcr, row)
{
	//按顺序查找
	//return 行号
	return FindCacheExt(chkBuf, mcr, row, 0)
}
macro FindCacheExt(chkBuf, mcr, row, isTest)
{	
	var left
	var right
	var mid
	var base
	var ext

	left = 0
	mid = 0
	right=row
	chk = 0//向前添加

	//test: mid1 -> mid2 -> mid3 -> +1 -> +1 -> +1 -> ==
	while (1)
	{
		mid = (left + right)/2
		if(mid < row)
		{
			base = GetBufLine(chkBuf, mid)
			base = GetLineMacro(base)		//获取宏，不包括删除注释
			chk = CompareEx(base, mcr, 1)	//不完全匹配, base包含mcr
		}
		
		if(chk == 0)//已存在
		{
			if(isTest)
			{
				msg ("@mid@ == :" # "@left@~" # "@right@ " # "@base@")
			}
			if(base == mcr){
				return mid
			}else{ 			// 中文问题，不同的汉字编码却相同
				ext = mid - 1
				part = -1
				while (ext >= 0)
				{
					base = GetBufLine(chkBuf, ext)
					base = GetLineMacro(base)
					//ret = 1 小<<2 小+中文部分相同<<0 中文相同       <<   -1 大 (升序)
					chk2 = CompareEx(base, mcr, 2)
					if(isTest)
					{
						msg ("--:" # "@mid@~" # "@ext@~"  # "@base@ " # "@mcr@ chk:" # "@chk2@ ")
					}
					if(chk2 == 0){
						return ext;
					}else if(chk2 == 2){
						part = ext
						ext = ext - 1
					}else if(chk2 == 1 || chk2 == 3){  // 仅编码相同，实际不相同
						ext = ext - 1
					}else{ //-1
						break
					}
				}
				if(part >= 0)
				{
					return part
				}
				ext = mid
				while (ext < row)
				{
					base = GetBufLine(chkBuf, ext)
					base = GetLineMacro(base)
					//ret = 1 小<<2 小+中文部分相同<<0 中文相同<<-1 大 (升序)
					chk2 = CompareEx(base, mcr, 2)
					if(isTest)
					{
						msg ("++:" # "@mid@~" # "@ext@~"  # "@base@ " # "@mcr@ chk:" # "@chk2@ ")
					}
					if(chk2 == 0){
						return ext;
					}else if(chk2 == 2){
						part = ext
						ext = ext + 1
					}else if(chk2 == -1 || chk2 == 3){ // 仅编码相同，实际不相同
						ext = ext + 1
					}else{ //1
						break
					}
				}
				if(part >= 0)
				{
					return part;
				}
				return -1;  // 未找到
			}
		}
		else if(chk == 1)//向大查找
		{
			if(isTest)
			{
				msg ("@mid@ -- :" # "@left@~" # "@right@ " # "@base@") //降序向大查找 用--
			}
			if(left < mid)//是否退出比较
			{
				right = mid
				continue
			}else{
				return -1; // 未找到
			}
		}
		else//向小查找
		{
			if(isTest)
			{
				msg ("@mid@ ++ :" # "@left@~" # "@right@ " # "@base@") //降序向小查找 用++
			}
			if(mid + 1 < right)//是否退出比较
			{
				left = mid + 1
				continue
			}else{
				return -1; // 未找到
			}
		}
	}
}

macro ShowCache(hbuf)
{	
	//显示前后20行
	//stop	//stop 退出ShowCache()
	row = GetBufLineCount(hbuf)
	ln = 0
	txt = ""
	if(row>20)
	{
		while (ln < 10)
		{
			txt = txt # CharFromKey(13) # "R@ln@:" # GetBufLine(hbuf, ln)
			ln = ln + 1
		}
		txt = txt # CharFromKey(13) # "... ..."
		ln = row - 10
		while (ln < row)
		{
			txt = txt # CharFromKey(13) # "R@ln@:" # GetBufLine(hbuf, ln)
			ln = ln + 1
		}
	}
	else
	{
		while (ln < row)
		{
			txt = txt # CharFromKey(13) # "R@ln@:" # GetBufLine(hbuf, ln)
			ln = ln + 1
		}
	}
	msg ("ShowCache:@txt@")
}


//find key, one file
macro FindCacheWholeFile(hbufRule, mcr)
{
	verSel = SearchInBuf(hbufRule, mcr, 0, 0, FALSE, FALSE, FALSE)
	if (verSel != nil)
	{
		return verSel.lnLast
	}
	else
	{
		return -1
	}
}

