import tensorflow as tf  

x = tf.Variable(0.0)  
x_plus = tf.assign_add(x, 1)  
with tf.control_dependencies([x_plus]):#只有当内部为操作时以来才会生效  
    #y = tf.identity(x)#将该语句变为操作  
    y = x  
    update = tf.group(y)#将该语句变为操作  
init = tf.global_variables_initializer()  
with tf.Session() as session:  
    init.run()  
    for i in range(5):  
        session.run(update)  
        print(y.eval())  
    print(x.eval())#5  
    
