//目录[Num][Ca]:
// 1. android目录
Save:node\android\sys\Macro_Sys_File.h \[1.1\] android目录
// 2. system.img
Save:node\android\sys\Macro_Sys_File.h \[2.1\] Android解压system.img
Save:node\android\sys\Macro_Sys_File.h \[2.2\] oem persist sysinfo三个分区的作用是什么？
// 3. android目录
Save:node\android\sys\Macro_Sys_File.h \[3.1\] Android源码目录结构如下：



/***********************************************************************/

[1.1] android目录
out\target\product\sp9820e_1h10\system\app
vendor\sprd\overlay\apn\apns-conf_8.xml
vendor\sprd\UniverseUI\SprdLauncher2
packages\apps\Settings





/***********************************************************************/



[2.1] Android解压system.img
android4.0之后，system.img文件格式为ext4，如果需要修改system.img文件，该如何做： 
1.ubuntu系统，准备工具make_ext4fs、simg2img、mkusering.sh。 
make_ext4fs、simg2img、mkusering.sh这三个工具可以在源码编译之后的 out/host/linux_x86/bin目录下获取，并将这三个命令复制到ubuntu系统/usr/bin目录。 
2.解压system.img为system.img.ext4 
命令：simg2img system.img system.img.ext4 
3.创建system.img.ext4挂载目录tmp 
命令：mkdir tmp 
4.挂载system.img.ext4到tmp目录 
命令：mount -t ext4 -o loop system.img.ext4 tmp 
5.进入tmp目录，根据需求修改tmp中的目录 
6.将tmp目录打包为新的system.img 
命令：make_ext4fs -s -l 239M -a system system.img tmp 
关于make_ext4fs、simg2img、mkusering.sh的参数含义可以在终端中直接输入命令，并回车查看。


[2.2] oem persist sysinfo三个分区的作用是什么？

[ANSWER]
1. oem分区是为全球定制功能而增设的一个分区，里面增加了对应不同国家的各种配置参数，如某些功能开关，有些区域要求打开，其它的则要求关闭，此时就需要用到oem.img，否则就需要出两个版本；?
2. systeminfo是专门为了添加system分区检查而设立的分区，system分区检查是指检查system分区的资源是否被更改，比如apk被删减或者某些权限被更改，目的是为了防止system被更改导致手机被监控。而systeminfo分区存放一个check.bin文件，此文件里面存储所有system文件和其对应的sha1值。?
3. persist分区是用于保存FRP(factory reset protcect)功能用到帐号、密码等受保护的信息，避免在恢复出厂设置后被清空。?

这三个分区不建议删除.


/***********************************************************************/

[3.1] Android源码目录结构如下：

|-- Makefile
|-- abi （applicationbinary interface，应用程序二进制接口，生成libgabi++.so相关库文件）
|-- art （google在4.4后加入用来代替Dalvik的运行时）
|-- bionic (Android的C library，即C库文件)
|-- bootable （启动引导相关代码）
|-- build （存放系统编译规则及generic等基础开发配置包）
|-- cts （Android兼容性测试套件标准）
|-- dalvik （dalvik JAVA虚拟机）
|-- developers (开发者用，存放几个例子)
|-- development （开发者需要的一些例程及工具）
|-- device (设备相关代码，这是各厂商需要配置和修改的代码)
|-- docs (介绍开源相关文档)
|-- external （android使用的一些开源的模组）
|-- frameworks （核心框架——java及C++语言）
|-- hardware （部分厂家开源的硬解适配层HAL代码）
|-- kernel (驱动内核相关代码)
|-- libcore (核心库相关)
|-- libnativehelper (JNI用到的库)
|-- ndk (ndk相关)
|-- out （编译完成后的代码输出目录）
|-- packages （应用程序包）
|-- pdk (google用来减少碎片化的东西)
|-- prebuilt （x86和arm架构下预编译的一些资源）
|-- sdk （sdk及模拟器）
|-- tools （工具）
|-- system （底层文件系统库、应用及组件——C语言）
|-- vendor （厂商定制代码）












