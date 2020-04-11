
//目录[Num][Ca]:
Save:node\Pythons\study\Macro_Math_Matrix.h \[1.1\] 张量
Save:node\Pythons\study\Macro_Math_Matrix.h \[2.1\] 加法(Plus) 与减法
Save:node\Pythons\study\Macro_Math_Matrix.h \[2.2\] 乘法(Multiply)
Save:node\Pythons\study\Macro_Math_Matrix.h \[3.1\] H积
Save:node\Pythons\study\Macro_Math_Matrix.h \[3.2.1\] 
Save:node\Pythons\study\Macro_Math_Matrix.h \[3.2.2\] 三维空间叉积
Save:node\Pythons\study\Macro_Math_Matrix.h \[3.2.3\] 计算平行六面体的体积
Save:node\Pythons\study\Macro_Math_Matrix.h \[4.0\] 矩阵的转置(Transpose)
Save:node\Pythons\study\Macro_Math_Matrix.h \[4.1\] 对称矩阵．
Save:node\Pythons\study\Macro_Math_Matrix.h \[5.0\] 方阵的行列式(Determinant)
Save:node\Pythons\study\Macro_Math_Matrix.h \[5.1\] 方阵的幂 
Save:node\Pythons\study\Macro_Math_Matrix.h \[5.2\] 运算性质 
Save:node\Pythons\study\Macro_Math_Matrix.h \[6.2\] 三元线性方程组
Save:node\Pythons\study\Macro_Math_Matrix.h \[7.1\] 克莱默法则(Cramer)
Save:node\Pythons\study\Macro_Math_Matrix.h \[7.2\] 雅可比行列式(Jacobi)
Save:node\Pythons\study\Macro_Math_Matrix.h \[8.0\] 逆(Inverse)
Save:node\Pythons\study\Macro_Math_Matrix.h \[9.0\] 秩(Rank)
Save:node\Pythons\study\Macro_Math_Matrix.h \[10.0\] 迹(Trace)
	


/***********************************************************************/
/********************************矩阵***********************************/
/***********************************************************************/

[1.1]  张量
张量就是一个变化量。
张量有零阶、一阶、二阶、三阶、四阶等等。
零阶张量是纯量（数值）
	1, 2, 3
一阶张量是向量（数值和方向的组合）
	[1], [2], [3]                                    #一维一阶--向量
	[1,1], [2,2], [3,3]                              #二维一阶--向量
	[1,1,1], [2,2,2], [3,3,3]                        #三维一阶--向量
二阶张量是矩阵（向量的组合）
	[[1],[1]], [[2],[2]],                            #一维二阶--距离
	[[1,1],[1,1]], [[2,2],[2,2]],                    #二维二阶--面积
	[[1,1],[1,1],[1,1]], [[2,2],[2,2],[2,2]],        #三维二阶--体积
三阶张量是数据立体（矩阵的组合）
	[[[1,1],[1,1],[1,1]],
	 [[1,1],[1,1],[1,1]],
	 [[1,1],[1,1],[1,1]]]
	tensor([3,3,2])                                  #二维三阶--颜色
四阶张量（数据立体的组合）
	image([1, 3, 5, 5])                              #二维四阶--一张3通道的5*5的图片




[2.1]  加法(Plus) 与减法

1 1  1 1  2 2
2 2  2 2  4 4

交换律：A+B=B+A
结合律：(A+B)+C=A+(B+C)

----------------------
[2.2] 乘法(Multiply)
//2.1 与数的乘法
	
1 1  2    2 2
2 2       4 4
	
----------------------
//2.2 与矩阵的乘法
	
x1,y1  x1,y1
x2,y2  x3,y3

x1x1+y1x3 x1y1+y1y3
x2x1+y2x3 x2y1+y2y3

结合律：A(BC) = (AB)C
分配律：A(B+C) = AB+AC
        (B+C)A = BA+CA
其他： (rA)B = r(AB) = A(rB)

(a1+a2)(b1+b2)=a1b1+a1b2 + a2b1+a2b2
...
0 0  0 0 = 0 0
0 1  1 0   1 0

----------------------
1 1  1 1  3 3
2 2  2 2  6 6

1 1  1 1  3 2
2 2  2 1  6 3
	
1 1  1 1  3 2
2 1  2 1  4 2
	
----------------------

cij=∑k=1saikbkj(i=1,2,?,m;j=1,2,?,n;)
	
----------------------

[3.1] H积
哈达马乘积（Hadamard product）
° 或 ? 或 ⊙

[1324]°[1234]=[16616]

a1 a1  x1 x2 = a1x1 a2x2
b1 b2  y1 y2   b1y1 b2y2

----------------------

[3.2.1] 
a11 a12  b11 b12
a21 a21  b21 b22
AXB = |a1 a2| = a1b2-b1a2
      |b1 b2|


AXB = |a1x a2y| = (a1b2-b1a2)xy
      |b1x b2y|

其几何意义就是以两个向量为边的平行四边形的面积

|a1 a2| = 0
|a1 a2|  
	
----------------------
[3.2.2] 三维空间叉积
AXB = |i   j  k| = <i|a2 a3|, j|a1 a3|, k|a1 a2|>
      |a1 a2 a3|     |b2 b3|   |b1 b3|   |b1 b2|
	  |b1 b2 b3|   

在方向上，叉积垂直于平行四边形所在的平面：
	
----------------------
[3.2.3] 计算平行六面体的体积
+-V = |a1 a2 a3|
      |b1 b2 b3|
	  |c1 c2 c3|

步骤：
http://www.cnblogs.com/bigmonkey/p/8203441.html


----------------------
[4.0] 矩阵的转置(Transpose)
0 0  0 1
1 1  0 1
	
1 2  1 3
3 4  2 4

矩阵的转置:
//A''=A
//(A+B)' = A'+B'
//(AB)' = B'A'
//(rA)' = rA'

[4.1] 对称矩阵．
如果方阵满足，即，则称A为对称矩阵

----------------------
[5.0] 方阵的行列式(Determinant)
行列式
a1 a2
b1 b2
a1b2-b1a2

[5.1] 方阵的幂 
AK = A.A.A...A

[5.2] 运算性质 
//|A'| = |A| （行列式的性质）
//|AB| = |B|.|A|
//|rB| = r^n.|B| （r是常数，A的阶数为n）

----------------------

结论3　方阵A和它同阶的单位阵作乘积，结果仍为A，即．
单位矩阵：
0 0
1 1
0 0  1 2 = 0 0
1 1  3 4   4 6
	
----------------------

[6.2] 三元线性方程组
a11x1 + a12x2 + a13x3 = b1
a21x1 + a22x2 + a23x3 = b2
a31x1 + a32x2 + a33x3 = b3

a11 a12 a13 * x1 = b1
a21 a22 a23   x2   b2
a31 a32 a33   x3   b3

线性方程组又可以简写为矩阵方程的形式：AX = B





----------------------

[7.1] 克莱默法则(Cramer)
对线性方程组，如果有系数行列式D≠0D≠0，则方程组有唯一解 
x1=D1D,?,xj=DjD,?,xn=DnD
x1=D1D,?,xj=DjD,?,xn=DnD

其中DjDj是把系数行列式DD中的第j列的元素用方程组右边系数替换后的n阶行列式
	
----------------------

[7.2] 雅可比行列式(Jacobi)
当n元变量做线性变换时，行列式就是其微元倍数，即dx=|A|dt


----------------------
[8.0] 逆(Inverse)
设A为n阶方阵，如果存在一个n阶方阵B，使得 
AB=BA=In
AB=BA=In

则称A为可逆矩阵，B为A的逆阵，记作B=A?1B=A?1
(A?1)?1=A(A?1)?1=A
(kA)?1=1kA?1(k≠0)(kA)?1=1kA?1(k≠0)
A、B均是同阶可逆矩阵，则(AB)?1=B?1A?1A、B均是同阶可逆矩阵，则(AB)?1=B?1A?1
(A?1)T=(AT)?1(A?1)T=(AT)?1

--------------------- 
[9.0] 秩(Rank)
秩的算法：仅用初等行（列）变化把矩阵A化为阶梯矩阵，阶梯矩阵中不为0向量的行（列）数为矩阵A的秩。记作R(A)
阶梯矩阵：从上往下数，每一行从左到右第一个不为0的元素所在列严格递增。
行秩=列秩

	
	
	
	
	
----------------------
[10.0] 迹(Trace)
方阵A的对角线之和称为迹，记作tr(A)tr(A)，即

tr(A)=∑i=1naii
tr(A)=∑i=1naii
tr(A)=∑ni=1λitr(A)=∑i=1nλi，即tr(A)=其特征值之和tr(A)=其特征值之和
tr(AB)=tr(BA)

	
	
	
	
	
	
	
	
----------------------
	
	
	
	
	
	
	
	
	
	
----------------------
	
	
	
	
	
	
	
	
	
	
----------------------
	
	
	
	
	
	
	
	
	
	
----------------------


































