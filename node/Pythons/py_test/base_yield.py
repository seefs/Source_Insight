

arr = [1,2,3,4,5,1,2,3,4,5,1,2,5,4]
brr = [1,2,5,1,2,4,5,1,2,3,4,5]

print ('arr',arr) 
print ('brr',brr) 

def fab(): 
    l, r, fl, fr= 0, 0, 0, 0
    m = 0
    l1, l2 = len(arr), len(brr)
    step = 0
    while step<100: 
        step += 1
        if l >= l1 and r >= l2:
            if l > fl or r > fr:
                yield [0, arr[fl:l], brr[fr:r]]
            step = 100
            continue
        if m%2 == 0:
            if l >= l1:
                m = 3
                continue
            if m==2:
                if arr[l]==5:
                    l, r = l+1, r+1
                    yield [0, arr[fl:l], brr[fr:r]]
                    fl, fr = l, r
                    m = 0
                else:
                    l += 1
            else:
                if arr[l]==5:
                    m = 3
                else:
                    l += 1
                    m = 1
        else:
            if r >= l2:
                continue
            if m==3:
                if brr[r]==5:
                    l, r = l+1, r+1
                    yield [1, arr[fl:l],brr[fr:r]]
                    fl, fr = l, r
                    m = 0
                else:
                    r += 1
            else:
                if brr[r]==5:
                    m = 2
                else:
                    r += 1
                    m = 0


for n in fab(): 
   print (n) 
 

