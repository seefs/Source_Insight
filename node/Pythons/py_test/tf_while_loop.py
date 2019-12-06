
import tensorflow as tf


a = tf.constant(1) 
b = tf.constant(2) 
c = tf.constant(3) 

#例子1
def cond(a, b, c): 
    return a<5 

def body(a, b, c): 
    a += 1 
    b += 1 
    c += 1 
    return a, b, c # same with [a, b, c] 

a ,c, b = tf.while_loop(cond, body, [a,b,c])

for i in range(1):
    print('----------------')
    print(a.numpy(), b.numpy(), c.numpy())



#例子2--差不多
n = tf.constant(5)
def cond(i, a, b, c):
    return i < n
def body(i, a, b, c):
    return i + 1, b, a + b, tf.concat([c, [a + b]], 0)
i, a, b, c = tf.while_loop(cond, body, (2, 1, 1, tf.constant([1, 1])))
print('#################')
print(c.numpy())
#    [1 1 2 3 5]




