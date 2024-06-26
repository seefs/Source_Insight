
基础路径设置:
basePath = E:\Desktop\Opencv\Learning_OpenCV3
sourcePath = D:\soft\opencv

// https://github.com/oreillymedia/Learning-OpenCV-3_examples
E:\Desktop\Opencv

/***********************************************************************/

//目录[Num][Ca]:
// 1. 安装
Save:node\C++\project\Macro_as_Opencv.h \[1.1\] VsCode
Save:node\C++\project\Macro_as_Opencv.h \[1.2\] VsCode cfg
Save:node\C++\project\Macro_as_Opencv.h \[1.3\] mingw
Save:node\C++\project\Macro_as_Opencv.h \[1.4\] OpenCV+OpenCV_contrib
Save:node\C++\project\Macro_as_Opencv.h \[1.5\] CMake
Save:node\C++\project\Macro_as_Opencv.h \[1.6\] CMake Error
Save:node\C++\project\Macro_as_Opencv.h \[1.7\] ffmpeg Error
Save:node\C++\project\Macro_as_Opencv.h \[1.8\] 
Save:node\C++\project\Macro_as_Opencv.h \[1.9\] 
Save:node\C++\project\Macro_as_Opencv.h \[1.10\] 
// 2. examples
Save:node\C++\project\Macro_as_Opencv.h \[2.1\] 
Save:node\C++\project\Macro_as_Opencv.h \[2.2\] 
Save:node\C++\project\Macro_as_Opencv.h \[2.3\] 
// 
Save:node\C++\project\Macro_as_Opencv.h \[3.1\] 
Save:node\C++\project\Macro_as_Opencv.h \[3.2\] 
Save:node\C++\project\Macro_as_Opencv.h \[3.3\] 
// 
Save:node\C++\project\Macro_as_Opencv.h \[4.1\] 使环境变量生效
Save:node\C++\project\Macro_as_Opencv.h \[4.2\] 
Save:node\C++\project\Macro_as_Opencv.h \[4.3\] 
// 
Save:node\C++\project\Macro_as_Opencv.h \[5.1\] 
Save:node\C++\project\Macro_as_Opencv.h \[5.2\] 
Save:node\C++\project\Macro_as_Opencv.h \[5.3\] 
// 其他标号
Save:Help\Test\Macro_Test_Node_Num.h \[1.1\] 




[1.1] VsCode
//下载地址
https://code.visualstudio.com/Download

//汉化
https://blog.csdn.net/baidu_38634017/article/details/99862692

//path
C:\Program Files\Microsoft VS Code\Code.exe

//安装步骤
//	vscode+opencv3 windows下编译 调试cpp
https://blog.csdn.net/zhulinmanbu114/article/details/90634914



[1.2] VsCode cfg
c_cpp_properties.json

launch.json

settings.json

tasks.json


[1.3] mingw
//下载地址
https://sourceforge.net/projects/mingw-w64/files/mingw-w64/mingw-w64-release/

//修改环境变量--path
//C:\mingw\bin
D:\soft\MinGW_w64\x64-4.8.1-release-posix-seh-rev5\mingw64\bin

//验证环境变量:
cmd_w: path

//解压到
D:\soft\MinGW_w64\
//  v7.0.0
D:\soft\MinGW_w64\mingw-w64-v7.0.0
//  v4.8.1
D:\soft\MinGW_w64\x64-4.8.1-release-posix-seh-rev5\mingw64\bin


//安装步骤
https://blog.csdn.net/u013171283/article/details/80898442


//version:
cmd_w: gcc -v



[1.4] OpenCV+OpenCV_contrib
//1) OpenCV+OpenCV_contrib 官方下载地址
//   --OpenCV 4.2.0 -> Source code(zip)
https://opencv.org/releases/
https://github.com/opencv/opencv/releases
https://github.com/opencv/opencv_contrib/releases

//2) 其他 github 下载地址
git clone https://github.com/huihut/OpenCV-MinGW-Build/

//3) 国内下载地址
//  --4.1.1
https://blog.csdn.net/weijifen000/article/details/87904707


//安装步骤
https://blog.csdn.net/zhulinmanbu114/article/details/90209693

//安装步骤
//	CMake和MinGW-w64的编译安装OpenCV3.4.1
https://blog.huihut.com/2018/07/31/CompiledOpenCVWithMinGW64/
//	OpenCV4 安装, 修改ffmpeg Error
https://www.cnblogs.com/wing-Zuo/p/11821589.html




//4.2.0
D:\soft\opencv\opencv
//4.1.1



[1.5] CMake
//下载地址
https://cmake.org/download/

//下载不动, 换成v3.16.0
C:\Program^Files\CMake\bin\

//打开 cmake-gui
open: C:\Program^Files\CMake\bin\cmake-gui.exe
//	打开 cmake-gui，设置源码和生成路径：
D:\soft\opencv\opencv\sources
D:\soft\opencv\install
//  点击 Configure，设置编译器
//	  Specify the generator for this project: 
MinGW Makefiles
//	  Specify native compilers
//	Next
//	  Compilers C: 
D:\soft\MinGW_w64\x64-4.8.1-release-posix-seh-rev5\mingw64\bin\gcc.exe
//	  Compilers C++: 
D:\soft\MinGW_w64\x64-4.8.1-release-posix-seh-rev5\mingw64\bin\g++.exe
//  沟选 Advanced
//	  移除--with_ffmpeg
//  有红色说明报错了, 再点一下Configure，直到是黑色为止
//  点击 Generate
//	  Finish, close:

//编译 OpenCV
cmd_w: D:&cd D:\soft\opencv\install
cmd_w: D:&cd D:\soft\opencv\install&mingw32-make -j 4
mingw32-make -j 4
mingw32-make install

//选项:
With_openGL,  沟选
BUILD_opencvv_world
OPENCV_EXTRA_MODULES_PATH, D:\soft\opencv\opencv_contrib-4.1.1\modules


open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe




[1.6] CMake Error
D:\soft\opencv\install\CMakeFiles\Makefile2 2696

[ 63%] Linking C++ shared library ..\..\bin\libopencv_dnn420.dll
[ 63%] Built target opencv_dnn
Makefile:161: recipe for target 'all' failed
mingw32-make: *** [all] Error 2

//cfg
D:\soft\opencv\cfg\
D:\soft\opencv\cfg\OpenCV_config_3.4.1.txt
D:\soft\opencv\cfg\OpenCV_config_4.2.0.txt



[1.7] ffmpeg Error
source:opencv\sources\3rdparty\ffmpeg\ffmpeg.cmake  OPENCV_FFMPEG_URL
//   "https://raw.githubusercontent.com/opencv/opencv_3rdparty/${FFMPEG_BINARIES_COMMIT}/ffmpeg/"
//  ->
//    https://raw.githubusercontent.com/opencv/opencv_3rdparty/a66a24e9f410ae05da4baeeb8b451912664ce49c/ffmpeg/opencv_videoio_ffmpeg.dll
//    https://raw.githubusercontent.com/opencv/opencv_3rdparty/a66a24e9f410ae05da4baeeb8b451912664ce49c/ffmpeg/opencv_videoio_ffmpeg_64.dll
//    https://raw.githubusercontent.com/opencv/opencv_3rdparty/a66a24e9f410ae05da4baeeb8b451912664ce49c/ffmpeg/ffmpeg_version.cmake

//手动下载到:
D:\soft\opencv\download
// 下载网址改为上面这个, 保留""
// 再次点击“Configure”

//实际下载
D:\soft\opencv\install\3rdparty\ffmpeg



[1.8] 






[1.9] 




[1.10] 




[2.1] 
example_02-01.cpp


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] 


[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 


[3.10] 




[4.1] 使环境变量生效
//进程关闭, 再重新打开
explorer.exe


//使环境变量生效(实际没用)
cmd_w: set PATH=C:
cmd_w: echo %PATH%

//验证环境变量:
cmd_w: path



[4.2] 




[4.3] 




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 






[5.1] 




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















