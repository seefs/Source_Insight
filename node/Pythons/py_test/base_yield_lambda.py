

import tensorflow as tf

def fab_2(i):
    return (yield [16, i, i])


def fab(i=0):
    while i<33:
        i = i + 1
        if i%12==0:
            yield [12, i, i]
            
        if i%15==0:
            x = tf.cond(0, lambda:fab_2(0), lambda:(yield [15, i, i]))
            for n in x: 
               yield n
            
        if i%16==0:
            for n in fab_2(i): 
                yield n



for n in fab(0): 
   print (n) 


