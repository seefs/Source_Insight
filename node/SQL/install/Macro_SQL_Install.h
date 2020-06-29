
基础路径设置: 
//basePath = 


/***********************************************************************/

//目录[Num][Ca]:
//	常用
Save:node\SQL\install\Macro_SQL_Install.h \[1.1\] 安装 MySQLdb:
Save:node\SQL\install\Macro_SQL_Install.h \[1.2\] 安装 pymysql:
Save:node\SQL\install\Macro_SQL_Install.h \[1.3\] db 文件查看器
Save:node\SQL\install\Macro_SQL_Install.h \[1.4\] SQLyog 查看器
Save:node\SQL\install\Macro_SQL_Install.h \[1.5\] SQLyog 字符集设置--gbk
Save:node\SQL\install\Macro_SQL_Install.h \[1.6\] mysql--win 安装
Save:node\SQL\install\Macro_SQL_Install.h \[1.7\]
Save:node\SQL\install\Macro_SQL_Install.h \[1.8\] 手动导入(设置统一编码)
Save:node\SQL\install\Macro_SQL_Install.h \[1.9\] 手动导出
Save:node\SQL\install\Macro_SQL_Install.h \[1.10\]


Save:node\SQL\Macro_SQL_Mysql.h \[3.6\] 手动导入(设置统一编码)
Save:node\SQL\Macro_SQL_Mysql.h \[3.7\] 手动导出



[1.1] 安装 MySQLdb:
//1) 管理员权限cmd
//目前支持MySQL-3.23到5.5和Python-2.4到2.7。未来版本将支持Python-3.0。
pip install MySQL-python

//2) python路径:
where python
//	C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe

//3) 切换到python--Scripts路径
Cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\
cd Scripts

//4) install
pip install pymysql
//	Successfully installed pymysql-0.9.3

//5) 卸载
pip uninstall pymysql

//6) Python 切换版本
//Python-2.4 through 2.7

//7) 重新安装 .Net framework 更高的版本：
https://support.microsoft.com/en-us/help/3151800/the-net-framework-4-6-2-offline-installer-for-windows

//8) 需要Microsoft Visual C ++ 14.0
https://964279924.ctfile.com/fs/1445568-239446865
//或
https://pan.baidu.com/s/1q2Nj41Xk85CHHv7_zOhQIA
密码：qbba

//9) 升级 pip
//您正在使用pip版本18.1，但版本19.1可用。
//您应该考虑通过'python -m pip install --upgrade pip'命令进行升级。
python -m pip install --upgrade pip

//10) 还是安装失败.


[1.2] 安装 pymysql:
//1) 管理员权限cmd
pip3 install PyMySQL

//2) 使用 git 命令下载安装包安装(你也可以手动下载)：
git clone https://github.com/PyMySQL/PyMySQL
cd PyMySQL/
python3 setup.py install


[1.3] db 文件查看器
SQLiteSpy


[1.4] SQLyog 查看器
//1) 安装 SQLyog
//2) 选择完成后弹出注册窗口，我们将软件的注册码：
//名称：ddooo；
//证书秘钥：8d8120df-a5c3-4989-8f47-5afc79c56e7c；

//3) sqlyog乱码
//	第一种情况：
//		在SQLyog下输入下面代码，全部执行
SET character_set_client = utf8;
SET character_set_results = gb2312;
SET character_set_connection = utf8;
//		如果上边的不行，还可以改成Gbk。总以根据你的数据的文字编码改成相应的编码类型就ok了。给出Gbk的代码：
SET character_set_client = gbK;
SET character_set_results = gbK;
SET character_set_connection = utf8;
//		但是重启SQL之后又不行了。
//		2.Tools->Preference Base->Editor 修改Fonts
//		修改完成后,重新启动SQLyog就好了。
//	第二种情况：
//		MySQL要支持完整的中文字符集，应该设置为GBK编码。
//		找到MySQL安装目录的my.ini，修改utf8为gbk，如下：
//		default-character-set=gbk
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini default-character-set =gbk
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini character-set-server =gbk
//		共两处需要修改。
//		重启MySQL服务。
//		结果，用SQLyog查看数据表，显示正常。

//4) 创建数据库
//数据集: utf-8
	

[1.5] SQLyog 字符集设置--gbk
//1) MySQL字符集设置为 utf8, GBK
//		MySQL 要支持完整的中文字符集，应该设置为GBK编码。
//		找到MySQL安装目录的my.ini，修改utf8为gbk，如下：
//		default-character-set=gbk
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini default-character-set =gbk
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini character-set-server =gbk

//2) 登陆界面，选择default character 为 gbk
SET character_set_results = gbk;

//3) 在SQLyog下输入下面代码，全部执行
SET character_set_client = utf8;
SET character_set_results = gb2312;
SET character_set_connection = utf8;
//	如果上边的不行，还可以改成Gbk。
SET character_set_client = gbk;
SET character_set_results = gbk;
SET character_set_connection = gbk;
	
测试结果, 全部用utf8正常, 最后刷新数据库表
SET character_set_client = utf8;
SET character_set_results = utf8;
SET character_set_connection = utf8;


[1.6] mysql--win 安装
//1) 下载 mysql-5.5.62-winx64.msi
// usr: seefs@163.com XJs0f0s0
https://dev.mysql.com/downloads/file/?id=480490

//2) 安装步骤
https://blog.csdn.net/locat_csdn/article/details/79759139

//3) db--账号
s0f0s0, s0f0s0

//4) 启动mysql服务:

//5) 安装一个可视化MySQL编辑器,我用的是MySQL-Front, 或SQLyog



[1.7]




[1.8] 手动导入(设置统一编码)
//1) MySQL字符集设置为 gbk
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini default-character-set =gbk
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini character-set-server =gbk

//2) 登陆界面，选择default character 为 gbk
SET character_set_results = gbk;

//3) SQLyog 设置为
//测试结果, 全部用utf8正常, 最后刷新数据库表
SET character_set_client = utf8;
SET character_set_results = utf8;
//SET character_set_connection = utf8;


SET character_set_client = utf8;
SET character_set_results = gbk;
//SET character_set_connection = utf8;


//4) SI调到:utf8, data_utf8没有乱码

...



[1.9] 手动导出
//1) MySQL设置导出路径
C:\Program^Files\MySQL\MySQL^Server^5.5\my.ini secure
//设置
secure-file-priv=E:/Desktop/NLP/dict_data/outfile
	
//2) 查看 secure-file-priv 当前的值
show variables like '%secure%';
// NULL代表禁止导出

//重启数据库
python_w mysql -u root up
//mysql -u root up
//停止：
net stop mysql
//启动：
net start mysql
//	3、如果你没安装系统服务，也可在命令行模式定位到mysql下的bin目录里，输入：
//	（关闭）mysqladmin shutdown
//	（启动）mysqladmin start




[1.10]












