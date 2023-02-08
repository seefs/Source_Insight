
macro getRootPath(0)
{
	global curVer
	var    retPath
	
	if(curVer == nil)
	{
		curVer = GetEnv("SI_VER")
		if(curVer != "WIN10" && curVer != "WIN7")
		{
			if(!IsExistFile("\\\\tsclient\\D\\save\\SI\\Set\\Macro_Set.h"))
			{
				curVer = "BaseC"
			}
		}
	}
	if(curVer == "WIN10" || curVer == "WIN7")
	{
		retPath = "D:\\save\\SI"
	}
	else if(curVer == "BaseC")
	{
		// Œ¥π“‘ÿD≈Ã
		retPath = "C:\\save\\SI"
	}
	else // (curVer == "SUB10")
	{
		retPath = "\\\\tsclient\\D\\save\\SI"
	}
	//msg("curVer " # curVer # CharFromKey(13) # "retPath " # retPath)
	return retPath
}

