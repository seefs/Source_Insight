
基础路径设置: 
basePath = C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\

/***********************************************************************/

//目录[Num][Ca]:
//	安装   (不一定要装)
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.1\] env Version-----版本
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.2\] Eclipse 4.6:
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.3\] PyDev 5.24.0:
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.4\] Java 8
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.5\] VC++2015
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.6\] Anaconda-----ipynb格式
//	常用
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.1\] GitHub
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.2\] pip
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.3\] python (<3.7)
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.4\] numpy
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.5\] TensorFlow
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.6\] TensorFlow2.0
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.7\] matplot(no use)
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.8\] tensorboard
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.9\] keras-transformer(no use)
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.10\] input_data
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.11\] Pycharm
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.12\] 
//	lib
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.1\] pandas
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.2\] gensim
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.3\] keras
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.4\] sklearn
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.5\] jieba
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.6\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.7\] tfmpl---------3D
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.8\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.9\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.10\] 
//	install
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.1\] install
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.2\] upgrade
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.3\] setup.py
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.4\] pip, pip3
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.5\] python类库
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.6\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.7\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.8\] 





/***********************************************************************/

[1.1] env Version
cmd_w: pip show pip
//	Version: 19.2.3

cmd_w: pip show tensorflow
//	Name: tensorflow
//	Version: 1.12.0
//	Version: 2.0.0a0

cmd_w: pip show keras
//	Version: 2.3.0

cmd_w: python --version
//	Python 3.6.6

cmd_w: pip show numpy
//	Version: 1.15.4

cmd_w: pip show Scipy
//	Version: 1.3.1

cmd_w: pip show sklearn
//	Version: 0.0


[1.2] 安装 Eclipse 4.6:
http://www.pydev.org/updates
http://download.aptana.com/studio3/plugin/install


[1.3] 安装 PyDev 5.24.0:
......


[1.4] Java 8
//Java 8(可能是必装): 
open: F:\tool_soft\python\jdk_8.0.1310.11_64.exe
......


[1.5] VC++2015
VC++2015 (不一定要装):
安装 VC++2015 (不一定要装):
下载地址：https://www.microsoft.com/en-us/download/default.aspx


[1.6] Anaconda-----ipynb
// ipynb转py
// 安装jupyter
cmd_w: python -m pip install jupyter
//jupyter nbconvert --to script demo.ipynb 


//	安装 (要装)
[2.1] GitHub
open: F:\tool_soft\python\GitHubDesktopSetup.exe

//复制cmd到根目录:
//cmd_w cp C:\Windows\System32\cmd.exe D:\project\GitHub\myPython
//(也可以加个dat运行cp)


[2.2] pip
python -m pip install --upgrade pip
//cmd_w: pip show pip
//	Version: 19.2.3


[2.3] python (<3.7)
open: F:\tool_soft\python\python-3.6.6-amd64.exe
下载地址：http://www.python.org/getit/
下载地址：https://www.python.org/ftp/python/3.2.5/python-3.2.5.msi
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe
		
添加环境变量:
path = ...
cmd: path

//验证 Python
// 验证 Python 安装:
python_w install\hello.py
//如果能正常输出hello字符串，则安装成功。Hello, TensorFlow!

// 验证 TensorFlow 安装:
python_w install\hello_tf.py
python_w tf_day1_line1.py


// 查询tensorflow 版本, 安装路径:
install\version.py
python install\version.py

// 打开python窗口：
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe



[2.4] numpy
cmd_w: pip show numpy
//	Version: 1.15.4
//	Version: 1.16.0


// 将numpy更新到最新版本
cmd_w: pip install --user --upgrade numpy
// 重新安装合适的numpy版本
cmd_w: pip install --upgrade --force-reinstall numpy==1.14.5
//     或
cmd_w: pip install numpy==1.16
// 如果提示权限不够，‘[WinError 5]拒绝访问’，则需赋予管理员权限，用下面语句
pip install --user --upgrade --force-reinstall numpy==1.14.5



[2.5] TensorFlow
//TensorFlow 1.0
//	CPU版本：
cmd_w: pip3 install --upgrade tensorflow
cmd_w: pip3 install tensorflow
//tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
//	GPU版本：
cmd_w: pip3 install --upgrade tensorflow-gpu
// Keras 安装
//cmd_w: pip install keras -U --pre
// uninstall
cmd_w: pip uninstall tensorflow


[2.6] TensorFlow2.0
//TensorFlow 2.0
//	GPU版本
cmd_w: pip install tensorflow-gpu==2.0.0-alpha0
//	CPU版本
cmd_w: pip install tensorflow==2.0.0-alpha0



[2.7] matplot
下载地址：https://matplotlib.org/users/installing.html
cmd_w: pip install ...



[2.8] tensorboard
//	tensorboard 可视化(不用安装, 添加path)
cmd_w: pip install tensorboard

cmd_w: pip show tensorboard
//	Version: 2.0.0


[2.9] keras-transformer
//cmd_w: pip install transformr-model
cmd_w: pip install keras-transformer

cmd_w: pip show keras-transformer
//	Version: 0.30.0



[2.10] input_data
cmd_w: pip install input_data



[2.11] Pycharm
// add to hosts:
0.0.0.0 account.jetbrains.com
0.0.0.0 www.jetbrains.com
// hosts path:
C:\Windows\System32\drivers\etc\hosts
C:\Windows\System32\drivers\etc
C:\Windows\winsxs\amd64_microsoft-windows-w..nfrastructure-other_31bf3856ad364e35_6.1.7600.16385_none_6079f415110c0210

cmd_w: ipconfig /flushdns
//resources_cn.jar
C:\Program^Files\JetBrains\PyCharm^2019.1\bin\
//code:
56ZS5PQ1RF-eyJsaWNlbnNlSWQiOiI1NlpTNVBRMVJGIiwibGljZW5zZWVOYW1lIjoi5q2j54mI5o6I5p2DIC4iLCJhc3NpZ25lZU5hbWUiOiIiLCJhc3NpZ25lZUVtYWlsIjoiIiwibGljZW5zZVJlc3RyaWN0aW9uIjoiRm9yIGVkdWNhdGlvbmFsIHVzZSBvbmx5IiwiY2hlY2tDb25jdXJyZW50VXNlIjpmYWxzZSwicHJvZHVjdHMiOlt7ImNvZGUiOiJJSSIsInBhaWRVcFRvIjoiMjAyMC0wMy0xMCJ9LHsiY29kZSI6IkFDIiwicGFpZFVwVG8iOiIyMDIwLTAzLTEwIn0seyJjb2RlIjoiRFBOIiwicGFpZFVwVG8iOiIyMDIwLTAzLTEwIn0seyJjb2RlIjoiUFMiLCJwYWlkVXBUbyI6IjIwMjAtMDMtMTAifSx7ImNvZGUiOiJHTyIsInBhaWRVcFRvIjoiMjAyMC0wMy0xMCJ9LHsiY29kZSI6IkRNIiwicGFpZFVwVG8iOiIyMDIwLTAzLTEwIn0seyJjb2RlIjoiQ0wiLCJwYWlkVXBUbyI6IjIwMjAtMDMtMTAifSx7ImNvZGUiOiJSUzAiLCJwYWlkVXBUbyI6IjIwMjAtMDMtMTAifSx7ImNvZGUiOiJSQyIsInBhaWRVcFRvIjoiMjAyMC0wMy0xMCJ9LHsiY29kZSI6IlJEIiwicGFpZFVwVG8iOiIyMDIwLTAzLTEwIn0seyJjb2RlIjoiUEMiLCJwYWlkVXBUbyI6IjIwMjAtMDMtMTAifSx7ImNvZGUiOiJSTSIsInBhaWRVcFRvIjoiMjAyMC0wMy0xMCJ9LHsiY29kZSI6IldTIiwicGFpZFVwVG8iOiIyMDIwLTAzLTEwIn0seyJjb2RlIjoiREIiLCJwYWlkVXBUbyI6IjIwMjAtMDMtMTAifSx7ImNvZGUiOiJEQyIsInBhaWRVcFRvIjoiMjAyMC0wMy0xMCJ9LHsiY29kZSI6IlJTVSIsInBhaWRVcFRvIjoiMjAyMC0wMy0xMCJ9XSwiaGFzaCI6IjEyMjkxNDk4LzAiLCJncmFjZVBlcmlvZERheXMiOjAsImF1dG9Qcm9sb25nYXRlZCI6ZmFsc2UsImlzQXV0b1Byb2xvbmdhdGVkIjpmYWxzZX0=-SYSsDcgL1WJmHnsiGaHUWbaZLPIe2oI3QiIneDtaIbh/SZOqu63G7RGudSjf3ssPb1zxroMti/bK9II1ugHz/nTjw31Uah7D0HqeaCO7Zc0q9BeHysiWmBZ+8bABs5vr25GgIa5pO7CJhL7RitXQbWpAajrMBAeZ2En3wCgNwT6D6hNmiMlhXsWgwkw2OKnyHZ2dl8yEL+oV5SW14t7bdjYGKQrYjSd4+2zc4FnaX88yLnGNO9B3U6G+BuM37pxS5MjHrkHqMTK8W3I66mIj6IB6dYXD5nvKKO1OZREBAr6LV0BqRYSbuJKFhZ8nd6YDG20GvW6leimv0rHVBFmA0w==-MIIElTCCAn2gAwIBAgIBCTANBgkqhkiG9w0BAQsFADAYMRYwFAYDVQQDDA1KZXRQcm9maWxlIENBMB4XDTE4MTEwMTEyMjk0NloXDTIwMTEwMjEyMjk0NlowaDELMAkGA1UEBhMCQ1oxDjAMBgNVBAgMBU51c2xlMQ8wDQYDVQQHDAZQcmFndWUxGTAXBgNVBAoMEEpldEJyYWlucyBzLnIuby4xHTAbBgNVBAMMFHByb2QzeS1mcm9tLTIwMTgxMTAxMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxcQkq+zdxlR2mmRYBPzGbUNdMN6OaXiXzxIWtMEkrJMO/5oUfQJbLLuMSMK0QHFmaI37WShyxZcfRCidwXjot4zmNBKnlyHodDij/78TmVqFl8nOeD5+07B8VEaIu7c3E1N+e1doC6wht4I4+IEmtsPAdoaj5WCQVQbrI8KeT8M9VcBIWX7fD0fhexfg3ZRt0xqwMcXGNp3DdJHiO0rCdU+Itv7EmtnSVq9jBG1usMSFvMowR25mju2JcPFp1+I4ZI+FqgR8gyG8oiNDyNEoAbsR3lOpI7grUYSvkB/xVy/VoklPCK2h0f0GJxFjnye8NT1PAywoyl7RmiAVRE/EKwIDAQABo4GZMIGWMAkGA1UdEwQCMAAwHQYDVR0OBBYEFGEpG9oZGcfLMGNBkY7SgHiMGgTcMEgGA1UdIwRBMD+AFKOetkhnQhI2Qb1t4Lm0oFKLl/GzoRykGjAYMRYwFAYDVQQDDA1KZXRQcm9maWxlIENBggkA0myxg7KDeeEwEwYDVR0lBAwwCgYIKwYBBQUHAwEwCwYDVR0PBAQDAgWgMA0GCSqGSIb3DQEBCwUAA4ICAQAF8uc+YJOHHwOFcPzmbjcxNDuGoOUIP+2h1R75Lecswb7ru2LWWSUMtXVKQzChLNPn/72W0k+oI056tgiwuG7M49LXp4zQVlQnFmWU1wwGvVhq5R63Rpjx1zjGUhcXgayu7+9zMUW596Lbomsg8qVve6euqsrFicYkIIuUu4zYPndJwfe0YkS5nY72SHnNdbPhEnN8wcB2Kz+OIG0lih3yz5EqFhld03bGp222ZQCIghCTVL6QBNadGsiN/lWLl4JdR3lJkZzlpFdiHijoVRdWeSWqM4y0t23c92HXKrgppoSV18XMxrWVdoSM3nuMHwxGhFyde05OdDtLpCv+jlWf5REAHHA201pAU6bJSZINyHDUTB+Beo28rRXSwSh3OUIvYwKNVeoBY+KwOJ7WnuTCUq1meE6GkKc4D/cXmgpOyW/1SmBz3XjVIi/zprZ0zf3qH5mkphtg6ksjKgKjmx1cXfZAAX6wcDBNaCL+Ortep1Dh8xDUbqbBVNBL4jbiL3i3xsfNiyJgaZ5sX7i8tmStEpLbPwvHcByuf59qJhV/bZOl8KqJBETCDJcY6O2aqhTUy+9x93ThKs1GKrRPePrWPluud7ttlgtRveit/pcBrnQcXOl1rHq7ByB8CFAxNotRUYL9IF5n3wJOgkPojMy6jetQA5Ogc8Sm7RG6vg1yow==


[2.12] 





[3.1] pandas
python -m pip install matplotlib -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
python -m pip install numpy -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
python -m pip install pandas -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
python -m pip install seaborn scipy  -i http://pypi.douban.com/simple --trusted-host pypi.douban.com

python -m pip install opencv-python


[3.2] gensim
cmd_w: python -m pip install --upgrade gensim



[3.3] keras
cmd_w: python -m pip install --upgrade keras

cmd_w: pip show keras
//	Version: 2.3.0



[3.4] sklearn
cmd_w: python -m pip install --upgrade sklearn



[3.5] jieba
cmd_w: python3 -m pip install jieba



[3.6] conf
cmd_w: python3 -m pip install conf
cmd_w: python -m pip install conf
cmd_w: pip install conf
cmd_w: pip install webank
cmd_w: pip install pathlib
	



[3.7] tfmpl---------3D
cmd_w: python -m pip install tfmpl


[3.8] 




[3.9] 




[3.10] 






	
[4.1] install
//1 打开 python      缺失：api-ms-win-crt-runtime-11-1-0.dll
//  （1）把C:\Windows\SysWOW64的api-ms-win-crt-runtime-l1-1-0.dll删除掉。
//  （2）重新安装VC redit.exe->重启->打开python


//版本问题：
tf.sub()更改为tf.subtract()
tf.mul()更改为tf.multiply()
tf.types.float32更改为tf.float32
tf.pact()更改为tf.stact()


//#config = tf.ConfigProto()
//config = tf.compat.v1.ConfigProto()
//#sess = tf.Session(config=config)
//sess = tf.compat.v1.Session(config=config)


[4.2] upgrade
//升级 pip：
python -m pip install --upgrade pip

//列出所有安装的库
cmd_w: pip list
//列出所有过期的库
cmd_w: pip list --outdated
//	Package 			 Version   Latest	 Type
//	-------------------- --------- --------- -----
//	astor				 0.7.1	   0.8.0	 wheel
//	boto3				 1.9.217   1.9.237	 wheel
//	botocore			 1.12.217  1.12.237  wheel
//	certifi 			 2019.6.16 2019.9.11 wheel
//	gast				 0.2.0	   0.3.2	 sdist
//	gensim				 3.8.0	   3.8.1	 wheel
//	grpcio				 1.16.0    1.24.0	 wheel
//	h5py				 2.8.0	   2.10.0	 wheel
//	keras-self-attention 0.41.0    0.42.0	 sdist
//	kiwisolver			 1.0.1	   1.1.0	 wheel
//	Markdown			 3.0.1	   3.1.1	 wheel
//	matplotlib			 3.0.2	   3.1.1	 wheel
//	numpy				 1.16.0    1.17.2	 wheel
//	opencv-python		 3.4.3.18  4.1.1.26  wheel
//	protobuf			 3.6.1	   3.9.2	 wheel
//	pyparsing			 2.3.0	   2.4.2	 wheel
//	python-dateutil 	 2.7.5	   2.8.0	 wheel
//	setuptools			 39.0.1    41.2.0	 wheel
//	six 				 1.11.0    1.12.0	 wheel
//	tensorboard 		 1.12.0    2.0.0	 wheel
//	urllib3 			 1.25.3    1.25.6	 wheel


//更新
cmd_w: pip install --upgrade tensorboard

//批量更新
basePath = Save:node\Pythons
//text_type
install\upgrade_all.py
python_w py_tf2\Keras_text_type.py

//	import pip
//	from subprocess import call
//
//	for dist in pip.get_installed_distributions():
//		call("pip install --upgrade " + dist.project_name, shell=True)


//批量更新-- pip-review 
pip install pip-review
pip-review --local --interactive



[4.3] setup.py
//打包
python setup.py bdist_egg


//卸载1
python setup.py uninstall

//卸载2
python setup.py install --record record.txt
//然后删除它们
FOR /F "delims=" %f in (record.txt) DO del "%f"



[4.4] pip, pip3
// 只有 Python36, 安装在:
cmd_w: c:&cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\lib\site-packages

//PyPI首页网址：pypi.python.org，基本上能在这上面找到所有的扩展包。
https://www.jianshu.com/p/9a54e9f3e059

pip 
pip --help

//打不到lib是哪个
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\lib\site-packages


[4.5] python类库
//关于如何查看本地python类库详细信息的方法
cmd_w: python -m pydoc -p 1234 

http://localhost:1234


[4.6] 



[4.7] 











