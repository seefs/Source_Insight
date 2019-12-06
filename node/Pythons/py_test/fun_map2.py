
import numpy as np

def str_print(x,y) : 
    print("x,y ", x,y)
    return 0

#多余的's'不输出
sentences1 = ['a', 'b', 'c']
sentences2 = ['d', 'e', 'f', 's']
list(map(lambda x,y:str_print(x,y), sentences1, sentences2))


def str_2(x,y) : 
    return 0,1
    
ret = list(map(lambda x,y:list(str_2(x,y)), sentences1, sentences2))
print("ret: ", ret)
print("ret: ", ret[0])
print("ret: ", ret[:][0])
#slice
print("ret: ", ret[slice(2)])
print("ret: ", np.array(ret)[:,0])














    
