

import sys
import os
#import math, sys, random, os                            # 导入多个模块

class test():
 
    def show(self):
        print('class---{}'.format(type(self).__name__))
        print('-------------------------')


if __name__ == "__main__":
    t = test()
    t.show()

    import a_model                                     # 导入同级目录
    a = a_model.A_Test()
    a.show()

#    import A_A1.a1_model                              # 导入子目录: 从包中只导入A1这个类, a1_model.XX()
#    from A_A1.a1_model import A1_Test                 #             从包中只导入A1这个类
#    from A_A1.a1_model import A1_Test, A12_Test       #             导入多个模块
    from A_A1.a1_model import *                        #             导入多个模块
    a1 = A1_Test()
    a1.show()

    
#    import py_compile
#    py_compile.compile(rootPath + "/c_model.py")      # 无用
#    py_compile.compile(rootPath + "/B/b_model.py")    # 无用

    curPath = os.path.abspath(os.path.dirname(__file__))
    rootPath = os.path.split(curPath)[0]
    print("====curPath:", curPath)
    print("====rootPath:", rootPath)
    print('-------------------------')
#    sys.path.append('../')                            # 无用
    sys.path.append(rootPath)                          # 配置目录: 
    from B import b_model                              # 导入父目录: 单文件
    from B.B_B1 import b1_model                        #             B是文件夹, 导入多个模块

    b = b_model.B_Test()
    b.show()
    b1 = b1_model.B1_Test()
    b1.show()


#    from C import c1_model,c2_model                   # 导入父目录: 多文件
#    c1 = c1_model.C1_Test()                           #             C是文件夹
#    c1.show()
#    c2 = c2_model.C2_Test()
#    c2.show()
    
    from C import *                                    # 导入父目录: 全部文件, __init__.py 列详细文件
    c1 = c1_model.C1_Test()                            #             C是文件夹
    c1.show()
    c2 = c2_model.C2_Test()
    c2.show()


    import d_model                                     # 导入父目录: 
    d = d_model.D_Test()                               #             d是文件
    d.show()




