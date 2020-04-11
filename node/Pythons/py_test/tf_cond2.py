
import tensorflow as tf



#嵌套:
c=2
d=2
tf.cond(c==2, 
lambda:(
    tf.cond(d==2, 
    lambda:(print('d==2,1'),print('d==2,2')), 
    lambda:0)
), 
lambda:0)


#多句用(,):
#空句用lambda:0:
c=2
tf.cond(c==2, 
        lambda:(print('c==2,1'),print('c==2,2')), 
        lambda:0)


#退出
step = tf.constant(0)
#step = 0

while step<10:
    step = step + 1
#    tf.cond(step%2==1, lambda:print('L--', step), lambda:print('R--', step))

    c = tf.cond(tf.equal(step%2,0), lambda:1, lambda:0)
    d = tf.cond(tf.equal(step%3,0), lambda:1, lambda:0)
    print ("err---- : %s,  %s" % (c, d))
    if tf.equal(c,True) and tf.equal(d,True):
        break
    elif c==0:
        print('L--', step)
    elif d==0:
        print('R--', step)
    else:
        print('---', c)


# 函数用def:
#    x = tf.constant(2)
#    y = tf.constant(5)
#    def f1(): return tf.multiply(x, 17)
#    def f2(): return tf.add(y, 23)
#    r = tf.cond(tf.less(x, y), f1, f2)



# tf.equal(a,True)
# tf.not_equal
# tf.less(x, y)
# tf.less_equal(x, y)
# tf.greater
# tf.greater_equal





