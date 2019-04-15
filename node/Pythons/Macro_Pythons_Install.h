
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/

返回:
open: D:\Save\SI\node\note\Macro_Note_Pythons.h


/***********************************************************************/
/************************** 安装 (非必要) ******************************/
/***********************************************************************/

[1.1] 安装 Java 8(可能是必装): 
open: F:\tool_soft\python\jdk_8.0.1310.11_64.exe
......


[1.2] 安装 Eclipse 4.6:
http://www.pydev.org/updates
http://download.aptana.com/studio3/plugin/install


[1.3] 安装 PyDev 5.24.0:
......


[1.4] 安装 pymysql 3.0.5:
下载地址：https://pypi.python.org/packages/source/P/PyMySQL3/PyMySQL3-0.5.tar.gz

解压下载的文件，在cmd中运行: 
python setup.py install



[1.5] 安装 VC++2015 (不一定要装):
下载地址：https://www.microsoft.com/en-us/download/default.aspx



/***********************************************************************/
/*************************** 安装 (必要) *******************************/
/***********************************************************************/

[2.1] . 安装 GitHub:
open: F:\tool_soft\python\GitHubDesktopSetup.exe


[2.2] . 复制cmd到根目录:
open: C:\Windows\System32\cmd.exe
cmd: cp C:\Windows\System32\cmd.exe D:\project\GitHub\myPython
(也可以加个dat运行cp)


[2.3]. 安装 python (<3.7):
open: F:\tool_soft\python\python-3.6.6-amd64.exe
下载地址：http://www.python.org/getit/
下载地址：https://www.python.org/ftp/python/3.2.5/python-3.2.5.msi
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe
		
添加环境变量:
path = ...
cmd: path


[2.4]. 更新pip:
python -m pip install --upgrade pip


[2.5]. 安装 TensorFlow:
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
//open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd2.exe
5. 1 CPU版本：
cmd: 
pip3 install --upgrade tensorflow
pip3 install --upgrade tensorflow
pip3 install tensorflow
//tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
5. 2 GPU版本：
cmd: pip3 install --upgrade tensorflow-gpu



[2.6] 验证 Python
6. 1 验证 Python 安装:
python install\hello.py

6. 2 验证 TensorFlow 安装:
python install\hello_tf.py
python tf_day1_line1.py


6. 3 查询tensorflow 版本, 安装路径:
install\version.py
python install\version.py

6. 4 打开python窗口：
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe

如果能正常输出hello字符串，则安装成功。Hello, TensorFlow!


[2.7] matplot
下载地址：https://matplotlib.org/users/installing.html
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
//open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd2.exe


[2.8] tensorboard 可视化(不用安装, 添加path)
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
pip3 install tensorboard
	path:
C:\Users\Administrator\AppData\Local\Programs\Python\Python36;
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts

	
/***********************************************************************/
/***************************** 安装错误 ********************************/
/***********************************************************************/

1 打开 python      缺失：api-ms-win-crt-runtime-11-1-0.dll
  （1）把C:\Windows\SysWOW64的api-ms-win-crt-runtime-l1-1-0.dll删除掉。
  （2）重新安装VC redit.exe->重启->打开python



2  常见的安装错误参考链接，其中一个经常遇到的错误就是No module named "pywrap_tensorflow" 或者 “Failed toload the native TensorFlow runtime”，其产生的原因主要是安装环境不满足要求，参考如下链接解答：
地址：https://stackoverflow.com/questions/43942185/failed-to-load-the-native-tensorflow-runtime-python-3-5-2
地址：https://stackoverflow.com/questions/42011070/on-windows-running-import-tensorflow-generates-no-module-named-pywrap-tenso


3 不支持cpu
2018-11-11 17:15:26.578611: I tensorflow/core/platform/cpu_feature_guard.cc:141] 
Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX2
b'Hello, TensorFlow!'

使用TensorFlow模块时，弹出错误
Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX AVX2

重新安装：
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
open: C:\Windows\System32\cmd.exe
pip3 uninstall tensorflow

查看一下所有库
pip3 list
	
重新安装：
下载地址：https://github.com/fo40225/tensorflow-windows-wheel
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
cp F:\tool_soft\python\tensorflow-1.11.0-cp35-cp35m-win_amd64.whl ./
pip install tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
pip install F:\tool_soft\python\tensorflow-1.11.0-cp35-cp35m-win_amd64.whl

升级 pip：
python -m pip install --upgrade pip

用国内的镜像源来加速：
python -m pip install opencv-python
python -m pip install redis-i http://pypi.douban.com/simple/ --trusted-host pypi.douban.com




版本问题：
tf.sub()更改为tf.subtract()
tf.mul()更改为tf.multiply()
tf.types.float32更改为tf.float32
tf.pact()更改为tf.stact()









