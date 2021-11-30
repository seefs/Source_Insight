// Returns offset of target string in source string

// Return X if target string is not found

macro FindString( source, target )
{
	source_len = strlen( source )
	target_len = strlen( target )


	match = 0
	cp = 0


	while( cp < source_len )
	{
		while( cp < source_len )
		{
			if( source[cp] == target[0] )
				break
			else
				cp = cp + 1
		}

		if( cp == source_len )
		    break;
		
		k = cp
		j = 0
		while( j < target_len && source[k] == target[j] )
		{
			k = k + 1
			j = j + 1
		}
		
		if (j == target_len)
		{
			match = 1
			break
		}
		
		cp = cp + 1
	}

	if( match )
		return cp
	else
		return "X"
}

// Same as FindString but starts from end of source string
macro RFindString( source, target )
{
	source_len = strlen( source )
	target_len = strlen( target )

	match = 0
	cp = source_len - 1

	while( cp >= (target_len - 1) )
	{
		while( cp >= (target_len - 1) )
		{
			if( source[cp] == target[target_len-1] )
				break
			else
				cp = cp - 1
		}

		if( cp < (target_len - 1) )
		    break;

		k = cp
		j = target_len - 1
		while( source[k] == target[j] )
		{
			k = k - 1
			j = j - 1

			// SI does not short curcuit &&
			if( j < 0 )
				break;
		}
		
		if( j < 0 )
		{
			match = 1
			break;
		}
		
		cp = cp - 1
	}

	if( match )
		return cp - (target_len - 1)
	else
		return "X"
}

macro LFindStringExt( source, target, target_len)
{
	source_len = strlen( source )
	//target_len = strlen( target )

	match = 0
	cp = 0
	if(target_len <= source_len)
	{
		while( cp < target_len )
		{
			if( source[cp] == target[cp] )
				cp = cp + 1
			else
				break
		}

		if( cp == target_len )
		{
			match = 1
		}
	}
	
	if( match )
		return cp
	else
		return "X"
}
macro LFindString( source, target)
{
	return LFindStringExt( source, target, strlen( target ))
}


// Returns the index of the first non whitespace character
// Search starts at offset specified by 'first'
macro StartWS( string, first )
{
    len = strlen( string )
    i = first
    
    while( i < len )
    {
        if( string[i] == " " || string[i] == "	"  || string[i] == "," )
    		i = i + 1
		else
		    break
    }

	if( i >= len )
		return "X"
	else
	    return i
}


// Finds the next whitespace character in the passed in string.
// Search starts at offset specified by 'first'
macro NextWS( string, first )
{
    len = strlen( string )
    i = first

    while( i < len )
    {
        if( string[i] != " " && string[i] != "	" && string[i] != ",")
    		i = i + 1
		else
		    break
    }

  	if( i >= len )
		return "X"
 	else
		return i
}

macro EndWS( string, last )
{
	// len[1,3] returns [X,1,3]
    len = strlen( string )
    if(4095 < last)
    	last = len
    i = last
    
    while( i > 0 )
    {
        if( string[i-1] == " " || string[i-1] == "	" )
    		i = i - 1
		else
		    break
    }

	if( i == 0 )
		return "X"
	else
	    return i
}

