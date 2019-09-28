
# *************************************************************************
#    测试文件
# *************************************************************************


//1) 基础路径设置:
//basePath = Save:node\Pythons

// 存在basePath, 用 basePath + cur
py_test\file_read_a.txt
py_test\file_read_b.txt

// 不存在basePath, 用 project path + cur
py_test\file_read_a.txt


//2) Project路径测试
ProjectPath = Save:node\Pythons
// ok
Project:py_test\file_read_a.txt
// err
Project2:py_test\file_read_b.txt
Project: py_test\file_read_a.txt


//3) Tool路径测试
Tool2Path = Save:node\Pythons
// ok
Tool2:py_test\file_read_a.txt
// err
Tool:py_test\file_read_b.txt


//3) Data路径测试
DataPath = Save:node\Pythons
// ok
Data:py_test\file_read_a.txt
// err
Data2:py_test\file_read_b.txt


//4) TSTS路径测试
TSTSPath = Save:node\Pythons
// ok
TSTS:py_test\file_read_a.txt
// err
TSTSS:py_test\file_read_b.txt








