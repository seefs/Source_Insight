 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf

# 创建常量
matrix1 = tf.constant([[3, 3]])
matrix2 = tf.constant([[2],
                       [2]])

#1.tf.multiply（）两个矩阵中对应元素各自相乘
#    格式: tf.multiply(x, y, name=None) 
#    参数: 
#    x: 一个类型为:half, float32, float64, uint8, int8, uint16, int16, int32, int64, complex64, complex128的张量。 
#    y: 一个类型跟张量x相同的张量。  
#    返回值： x * y element-wise.  
#    注意： 
#    （1）multiply这个函数实现的是元素级别的相乘，也就是两个相乘的数元素各自相乘，而不是矩阵乘法，注意和tf.matmul区别。 
#    （2）两个相乘的数必须有相同的数据类型，不然就会报错。
#2.tf.matmul（）将矩阵a乘以矩阵b，生成a * b。
product = tf.matmul(matrix1, matrix2)  # matrix multiply np.dot(m1, m2)

# method 1
sess = tf.Session()
result = sess.run(product)
print(result)
sess.close()

# method 2
#with tf.Session() as sess:
#    result2 = sess.run(product)
#    print(result2)





