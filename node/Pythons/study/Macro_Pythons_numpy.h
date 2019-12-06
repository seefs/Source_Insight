

//目录[Num][Ca]:
// 1. numpy
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.1\] numpy模块
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.2\] np.array()
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.3\] arr.shape--------------形状
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.4\] np.ones----------------创建数组
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.5\] np.random.randint------随机数
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.6\] np.eye-----------------对角线矩阵
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.7\] ndarray的属性
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.8\] arr[1][2]--------------索引
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.9\] arr[0:2]---------------切片
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.10\] ::--------------------数据反转
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.11\] arr.reshape()---------变形
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.12\] np.concatenate()------级联
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.13\] np.split()------------切分
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.14\] a.copy()--------------副本
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.15\] arr1.ravel------------数组扁平化
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.16\] np.c_[arr1,arr2,…]----数组合并
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.17\] np.unique-------------获取数组不重复的值
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.18\] np.sum----------------求和
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.19\] np.max/ np.min--------最大最小值
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.20\] 其他聚合操作
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.21\] np.dot()--------------矩阵积
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.22\] np.sort()-------------排序
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.23\] 
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.24\] 
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.25\] 
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.26\] 



[1.1] numpy模块
//导入模块
import numpy as np
//查看numpy版本
np.__version__




[1.2] np.array()
arr1=np.array([1,2,3,4])
//查看变量的数据类型
type(arr1)
输出：numpy.ndarray
1
2
//创建二维数组
arr2= np.array([[1,2,3],[4,5,6],[7,8,9]])
//创建多维数组
arry3=np.array([[[1,2,3],[4,5,6],[7,8,9]]])
//numpy默认ndarray的所有元素的类型是相同的
统一类型优先级：str>float>int




[1.3] arr.shape----------形状
//shape返回的是ndarray的数组形状(返回类型是元组)。返
输出：(3, 3)




[1.4] np.one----------------创建数组
//np.ones(shape, dtype=None, order=’C’)
arr= np.ones(shape=(2,2),dtype=int) 

np.zeros
//np.zeros(shape, dtype=None, order=’C’)
arr=np.zeros([2,3])

np.full
//np.full(shape, fill_value, dtype=None, order=’C’)
//  创建2行3列的全部数值都为10的二维数组
arr=np.full(shape=(2,4),fill_value=10,dtype=int)

np.linspace----------等差数列
//np.linspace(start, stop, num=50, endpoint=True, retstep=False, dtype=None) 
//  数组初值为0，有10个值，终值为9
arr_linspace=np.linspace(start=0,stop=10,num=10,endpoint=False)
arr_linspace
//输出：array([ 0.,  1.,  2.,  3.,  4.,  5.,  6.,  7.,  8.,  9.])


np.arange----------一维数组
//np.arange([start, ]stop, [step, ]dtype=None)
##数组初值为0，有5(10除以2)个值，终值为8，只能创建一维数组
arr_arange=np.arange(0,10,2)
arr_arange
//输出：array([0, 2, 4, 6, 8])




[1.5] np.random.randint----------随机数
//np.random.randint(low, high=None, size=None, dtype=’l’)
#创建一个随机数在[10,90)的3行4列二维数组
#size=[3]则是一个一维数组，size=[3,4,5]则是三维数组
#随机原理：根据当前系统的时间产生随机数
#可以固定种子，使用seed(种子)函数
#np.random.seed(1) 
np.random.randint(10,90,size=[3,4])


np.random.randn
//np.random.randn(d0, d1, …, dn) 标准正太分布
#创建一个10个元素的一维数组
np.random.randn(10)


np.random.randn----------多维数组
#如创建10行，10列的数组
np.random.randn((10,10))


np.random.random
//np.random.random(size=None)
生成[0,1)的随机数


//np.random.random(size=[2,2])
#创建一个2行2列的数值在[0,1)的二维数组


np.random.rand
//np.random.rand(d0,d1,…dn )
以给定的形状创建一个数组，并在数组中加入在[0,1)之间均匀分布的随机样本。
np.random.rand(10)
//1

np.random.rand(2,2)
//1




[1.6] np.eye----------对角线矩阵
//np.eye(N, M=None, k=0, dtype=float)

#创建一个对角线为1的矩阵（二维数组）
arr_eys=np.eye(4)
arr_eys
输出：
array([[ 1.,  0.,  0.,  0.],
       [ 0.,  1.,  0.,  0.],
       [ 0.,  0.,  1.,  0.],
       [ 0.,  0.,  0.,  1.]])



[1.7] ndarray的属性
4个必记参数：
//ndim：维度
//shape：形状（各维度的长度）
//size：总长度
//dtype：元素类型




[1.8] arr[1][2]----------索引
np.random.seed(10)
arr=np.random.randint(10,50,size=(3,4))
arr
//输出：
array([[19, 46, 25, 10],
       [38, 35, 39, 39],
       [18, 19, 10, 46]])
#索引
arr[1][2]



[1.9] arr[0:2]----------切片
//获取前两行数据
arr[0:2]
//输出：
array([[19, 46, 25, 10],
       [38, 35, 39, 39]])
       
//获取前两行的前两列数据
arr[0:2,0:2]
//输出：
array([[19, 46],
       [38, 35]])


//获取二维数组前两列数据
arr[:,0:2]
//输出：
array([[19, 46],
       [38, 35],
       [18, 19]])




[1.10] ::----------数据反转
array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr[::-1]
//输出：
array([9, 8, 7, 6, 5, 4, 3, 2, 1, 0])


array([[ 0.,  1.,  2.],
       [ 3.,  4.,  5.],
       [ 6.,  7.,  8.]])
       
//将数组的行倒序
arr[::-1]
输出：
array([[ 6.,  7.,  8.],
       [ 3.,  4.,  5.],
       [ 0.,  1.,  2.]])
       
//将数组的列倒序
arr[:,::-1]
//输出：
array([[ 2.,  1.,  0.],
       [ 5.,  4.,  3.],
       [ 8.,  7.,  6.]])
       
//全倒置
arr[::-1,::-1]
输出：
array([[ 8.,  7.,  6.],
       [ 5.,  4.,  3.],
       [ 2.,  1.,  0.]])



[1.11] arr.reshape()--------变形
//使用arr.reshape()函数，注意参数是一个tuple(元组)！
arr2=arr.reshape((2,5))
arr2.shape
//输出：
(2, 5)

//使用-1自动计算行数(或列数)
arr2=arr.reshape((-1,5))
arr2.shape
//输出：
(2, 5)

//将多维数组变形成一维数组
arr3=arr2.reshape(10)
arr3.shape
//输出：
(10,)




[1.12] np.concatenate()--------级联
a1=np.array([1,2,3])
np.concatenate([a1,a1])
//输出：
array([1, 2, 3, 1, 2, 3])

np.concatenate([a1,a2],axis=0) 
np.concatenate([a1,a2],axis=1) 


np.hstack与np.vstack
水平级联与垂直级联，代替axis参数。

np.hstack((a1,a2))
//输出：
array([[18, 53, 32, 84, 14, 35, 15, 73],
       [93, 28, 41, 26, 90, 16, 58, 51],
       [30, 20, 47,  6, 69, 41,  4, 60]])

np.vstack((a1,a2))
//输出：
array([[18, 53, 32, 84],
       [93, 28, 41, 26],
       [30, 20, 47,  6],
       [14, 35, 15, 73],
       [90, 16, 58, 51],
       [69, 41,  4, 60]])




[1.13] np.split()--------切分
//np.split(arr,行／列号，轴):参数2是一个列表类型
//np.vsplit(arr,行／列号) 水平切
//np.hsplit(arr,行／列号) 垂直切
//  返回值是一个列表
arr=np.array([[3,2,4],[9,5,8],[2,7,1]])

np.split(arr,[1,2],axis=1)   
//输出：
[array([[3],
        [9],
        [2]]), array([[2],
        [5],
        [7]]), array([[4],
        [8],
        [1]])]




[1.14] a.copy()--------副本
//所有赋值运算不会为ndarray的任何元素创建副本。对赋值后的对象的操作也对原来的对象生效。
a1=a




[1.15] arr1.ravel--------数组扁平化
// ’C’表示按行进行扁平
np.ravel(arr，order=’C’)
// ’F’表示按列进行扁平
arr.racel(order=’F’)
// 不会影响原始矩阵
b = a.flatten()



[1.16] np.c_[arr1,arr2,…]--------数组合并
arr1=np.array([1,2,3,4])
np.c_[arr1,arr1]
//结果为：
array([[1, 1],
       [2, 2],
       [3, 3],
       [4, 4]])


arr2=np.array([[[1,2,3],[4,5,6],[7,8,9]]])
np.c_[arr2,arr2,arr2]
//结果为：
array([[[1, 2, 3, 1, 2, 3, 1, 2, 3],
        [4, 5, 6, 4, 5, 6, 4, 5, 6],
        [7, 8, 9, 7, 8, 9, 7, 8, 9]]])




[1.17] np.unique-------------获取数组不重复的值
//np.unique(ar,return_counts=False)

arr=np.array([11,1,2,3,4,11,3,5])
np.unique(arr,return_counts=True)





[1.18] np.sum--------求和

arr=np.linspace(0,10,10,endpoint=False)
//输出：
array([ 0.,  1.,  2.,  3.,  4.,  5.,  6.,  7.,  8.,  9.])
np.sum(arr,axis=0)
//输出：
45.0


np.sum(arr2,axis=0)
np.sum(arr2,axis=1)




[1.19] np.max/ np.min--------最大最小值
np.min(arr2,axis=0)
np.min(arr2,axis=1)


np.mean()--------平均值
np.mean(arr2,axis=0)
np.mean(arr2,axis=1)




[1.20] 其他聚合操作
Function Name    NaN-safe Version    Description
np.sum    np.nansum    Compute sum of elements
np.prod    np.nanprod    Compute product of elements
np.mean    np.nanmean    Compute mean of elements
np.std    np.nanstd    Compute standard deviation
np.var    np.nanvar    Compute variance
np.min    np.nanmin    Find minimum value
np.max    np.nanmax    Find maximum value
np.argmin    np.nanargmin    Find index of minimum value
np.argmax    np.nanargmax    Find index of maximum value
np.median    np.nanmedian    Compute median of elements
np.percentile    np.nanpercentile    Compute rank-based statistics of elements
np.any    N/A    Evaluate whether any elements are true
np.all    N/A    Evaluate whether all elements are true
np.power 幂运算




[1.21] np.dot()--------矩阵积
x1+x2--------矩阵加
np.linalg.inv()--------逆矩阵




[1.22] np.sort()--------排序
np.sort(arr) 
np.sort(arr,axis=0)
np.sort(arr,axis=1)


np.partition(a,k)--------部分排序




[1.23] 




[1.24] 




[1.25] 




[1.26] 




















