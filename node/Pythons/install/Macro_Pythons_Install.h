
����·������: 
//base
basePath = pyScripts:
base:\\
//test
testPath = Save:node\Pythons\py_test\
test:\\
//py
pyPath = Save:node\Pythons
py:\\
// --����·��:
Save:set\Macro_Set_Common.h  pyScripts


/***********************************************************************/

//Ŀ¼[Num][Ca]:
//	��װ   (��һ��Ҫװ)
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.1\] env Version-----��������
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.2\] Eclipse 4.6:
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.3\] PyDev 5.24.0:
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.4\] Java 8
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.5\] VC++2015
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.6\] Anaconda-----ipynb��ʽ
//	����
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
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.12\] requests
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.13\] googletrans
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.14\] 
//	lib
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.1\] pandas
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.2\] gensim
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.3\] keras
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.4\] sklearn
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.5\] jieba
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.6\] conf
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.7\] tfmpl---------3D
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.8\] chardet
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.9\] pillow--------imgsize
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.10\] pyyaml-------ttf
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.11\] websocket
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.12\] openpyxl-----excel
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.13\] cv2
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.14\] PIL
//	install
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.1\] install
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.2\] upgrade
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.3\] setup.py
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.4\] pip, pip3
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.5\] python���
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


[1.2] ��װ Eclipse 4.6:
http://www.pydev.org/updates
http://download.aptana.com/studio3/plugin/install


[1.3] ��װ PyDev 5.24.0:
......


[1.4] Java 8
//Java 8(�����Ǳ�װ): 
open: F:\tool_soft\python\jdk_8.0.1310.11_64.exe
......


[1.5] VC++2015
VC++2015 (��һ��Ҫװ):
��װ VC++2015 (��һ��Ҫװ):
���ص�ַ��https://www.microsoft.com/en-us/download/default.aspx


[1.6] Anaconda-----ipynb
// ipynbתpy
// ��װjupyter
cmd_w: python -m pip install jupyter
//jupyter nbconvert --to script demo.ipynb 


//	��װ (Ҫװ)
[2.1] GitHub
open: F:\tool_soft\python\GitHubDesktopSetup.exe

//����cmd����Ŀ¼:
//cmd_w cp C:\Windows\System32\cmd.exe D:\project\GitHub\myPython
//(Ҳ���ԼӸ�dat����cp)


[2.2] pip
cmd_w: pip show pip
//	Version: 19.2.3
cmd_w: python -m pip install --upgrade pip

// (1)down (������)
// -- pip-22.0.4.tar.gz (2.1 MB view hashes)
https://pypi.org/project/pip/#files
//
cd:D:\Program Files\Python\pip\pip-21.2.4
python setup.py install

// (2) ����Ϊ get-pip.py
https://bootstrap.pypa.io/get-pip.py
python get-pip.py
python -m pip --version



[2.3] python (<3.7)
open: F:\tool_python\python\python-3.6.6-amd64.exe
//���ص�ַ��https://www.python.org/downloads/
//���ص�ַ��http://www.python.org/getit/
//���ص�ַ��https://www.python.org/ftp/python/3.2.5/python-3.2.5.msi
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe
// ̫��װ����
//  win7--3.7.5
//  win10--3.10.0
		
//��ӻ�������, path:
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\
cmd_w: path
//�Զ���·��
D:\Program^Files\py\py310\


//��֤ Python
// ��֤ Python ��װ:
python_w py:install\hello.py
//������������hello�ַ�������װ�ɹ���Hello, TensorFlow!

// ��֤ TensorFlow ��װ:
//
py:install\hello_tf.py
python_w py:install\hello_tf.py
//
py:tfTUT\tf_day1_line1.py
python_w py:tfTUT\tf_day1_line1.py


// ��ѯtensorflow �汾, ��װ·��:
py:install\version.py
python_w py:install\version.py

// ��python���ڣ�
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe


// �޸�·��: �Ļ�������+����
D:\Program^Files\Python\Python36-32
D:\Program^Files\Python\python-3.8.10



[2.4] numpy
cmd_w: pip show numpy
//	Version: 1.15.4
//	Version: 1.16.0
//	Version: 1.18.0 (�汾����)

// tensorflow2.0  ������ numpy 1.16, �����¾���:
...\dtypes.py:550: ...in a future version of numpy, it will be understood as ...

// ����
cmd_w: pip install -U numpy==1.16.4


// ��numpy���µ����°汾
cmd_w: pip install --user --upgrade numpy
// ���°�װ���ʵ�numpy�汾
cmd_w: pip install --upgrade --force-reinstall numpy==1.14.5
//     ��
cmd_w: pip install numpy==1.16
// �����ʾȨ�޲�������[WinError 5]�ܾ����ʡ������踳�����ԱȨ�ޣ����������
cmd_w: pip install --user --upgrade --force-reinstall numpy==1.14.5



[2.5] TensorFlow
//TensorFlow 1.0
//	CPU�汾��
cmd_w: pip3 install --upgrade tensorflow
cmd_w: pip3 install tensorflow
//tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
//	GPU�汾��
cmd_w: pip3 install --upgrade tensorflow-gpu
// Keras ��װ
//cmd_w: pip install keras -U --pre
// uninstall
cmd_w: pip uninstall tensorflow


[2.6] TensorFlow2.0
//TensorFlow 2.0
//	GPU�汾
cmd_w: pip install tensorflow-gpu==2.0.0-alpha0
//	CPU�汾
cmd_w: pip install tensorflow==2.0.0-alpha0



[2.7] matplot
���ص�ַ��https://matplotlib.org/users/installing.html
cmd_w: pip install ...



[2.8] tensorboard
//	tensorboard ���ӻ�(���ð�װ, ���path)
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


//
https://www.cnblogs.com/51QA/p/8081255.html 3��ע���룺
�������϶�β��Һͳ��ԣ�����л����qq_34554123���Կ��еķ�������
serverѡ��������� http://idea.imsxm.com/



[2.12] requests
cmd_w: pip install requests
// ������ҳ
cmd_w: pip install beautifulsoup4


[2.13] googletrans
// google����
cmd_w: pip install googletrans
//���°��޷�ʹ��
cmd_w: pip install googletrans==3.1.0a0
//
cmd_w: pip show googletrans
// 3.0.0

// pygoogletranslation
cmd_w: pip install pygoogletranslation
// No matching distribution found for tqdm
// --pip��Ҫ����
cmd_w: python -m pip install --upgrade pip


[2.14] 


[3.1] pandas
cmd_w: python -m pip install matplotlib -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
cmd_w: python -m pip install numpy -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
cmd_w: python -m pip install pandas -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
cmd_w: python -m pip install seaborn scipy  -i http://pypi.douban.com/simple --trusted-host pypi.douban.com

cmd_w: python -m pip install opencv-python


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
cmd_w: python -m pip install jieba
cmd_w: pip install jieba




[3.6] conf
cmd_w: python3 -m pip install conf
cmd_w: python -m pip install conf
cmd_w: pip install conf
cmd_w: pip install webank
cmd_w: pip install pathlib
	



[3.7] tfmpl---------3D
cmd_w: python -m pip install tfmpl


[3.8] chardet, tqdm
cmd_w: pip install chardet
cmd_w: pip install tqdm
cmd_w: pip install pandas
cmd_w: pip install params_flow
	







[3.9] pillow
//pillow
cmd_w: pip install pillow
cmd_w: pip3 install pillow



[3.10] pyyaml
# pyyaml fontforge
cmd_w: pip show pyyaml
// Version: 5.4.1
cmd_w: pip show fonttools
// Version: 4.25.2

cmd_w: pip install pyyaml
cmd_w: pip install fontforge
cmd_w: pip install python-fontforge
cmd_w: pip install fontforge==1.0
cmd_w: pip install python-fontforge
cmd_w: pip install fonttools



[3.11] websocket
//
cmd_w: pip show websocket
// Version: 0.2.1
// ��װ
cmd_w: pip install websocket
cmd_w: pip install websocket-client 
cmd_w: pip install 

//	cffi==1.12.3
//	gevent==1.4.0
//	greenlet==0.4.15
//	pycparser==2.19
//	six==1.12.0
//	websocket==0.2.1
//	websocket-client==0.56.0
//	wave


[3.12] openpyxl
//
cmd_w: pip install openpyxl



[3.13] cv2
//
cmd_w: pip show cv2
//�����ֻ����ģ�飬ʹ��������װ��
cmd_w: pip install opencv-python
//�������Ҫ����ģ���contribģ�飬ʹ��������װ��
cmd_w: pip install opencv-contrib-python



[3.14] PIL
//
cmd_w: pip install pillow


	
[4.1] install
//1 �� python      ȱʧ��api-ms-win-crt-runtime-11-1-0.dll
//  ��1����C:\Windows\SysWOW64��api-ms-win-crt-runtime-l1-1-0.dllɾ������
//  ��2�����°�װVC redit.exe->����->��python


//�汾���⣺
tf.sub()����Ϊtf.subtract()
tf.mul()����Ϊtf.multiply()
tf.types.float32����Ϊtf.float32
tf.pact()����Ϊtf.stact()


//#config = tf.ConfigProto()
//config = tf.compat.v1.ConfigProto()
//#sess = tf.Session(config=config)
//sess = tf.compat.v1.Session(config=config)


[4.2] upgrade
//���� pip��
python -m pip install --upgrade pip

//�г����а�װ�Ŀ�
cmd_w: pip list
//�г����й��ڵĿ�
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


//����
cmd_w: pip install --upgrade tensorboard

//��������
pyPath = Save:node\Pythons
//text_type
py:install\upgrade_all.py
//
test:keras\Keras_text_type.py
python_w test:keras\Keras_text_type.py
	


//	import pip
//	from subprocess import call
//
//	for dist in pip.get_installed_distributions():
//		call("pip install --upgrade " + dist.project_name, shell=True)


//��������-- pip-review 
pip install pip-review
pip-review --local --interactive



[4.3] setup.py
//���
python setup.py bdist_egg


//ж��1
python setup.py uninstall

//ж��2
python setup.py install --record record.txt
//Ȼ��ɾ������
FOR /F "delims=" %f in (record.txt) DO del "%f"



[4.4] pip, pip3
// ֻ�� Python36, ��װ��:
cmd_w: c:&cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\lib\site-packages

//PyPI��ҳ��ַ��pypi.python.org�������������������ҵ����е���չ����
https://www.jianshu.com/p/9a54e9f3e059

pip 
pip --help

//�򲻵�lib���ĸ�
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\lib\site-packages


[4.5] python���
//������β鿴����python�����ϸ��Ϣ�ķ���
cmd_w: python -m pydoc -p 1234 

http://localhost:1234


[4.6] 



[4.7] 











