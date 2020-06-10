
基础路径设置:
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820\idh.code

/***********************************************************************/

//目录[Num][Ca]:
// 1. 编译命令
Save:node\android\sys\Macro_Sys_Build.h \[1.1\] envsetup.sh---加载环境变量
Save:node\android\sys\Macro_Sys_Build.h \[1.2\] lunch---------选择编译平台
Save:node\android\sys\Macro_Sys_Build.h \[1.3\] make----------执行编译
Save:node\android\sys\Macro_Sys_Build.h \[1.4\] java----------签名
Save:node\android\sys\Macro_Sys_Build.h \[1.5\] make idegen---编译idegen
Save:node\android\sys\Macro_Sys_Build.h \[1.6\] make snod-----编译img
Save:node\android\sys\Macro_Sys_Build.h \[1.7\] emulator------模拟器
Save:node\android\sys\Macro_Sys_Build.h \[1.8\] make sdk------编译sdk
Save:node\android\sys\Macro_Sys_Build.h \[1.9\] 
Save:node\android\sys\Macro_Sys_Build.h \[1.10\] 
// 2. 下载
Save:node\android\sys\Macro_Sys_Build.h \[2.1\] 下载
Save:node\android\sys\Macro_Sys_Build.h \[2.2\] 编译版本说明
Save:node\android\sys\Macro_Sys_Build.h \[2.3\] 反编译
Save:node\android\sys\Macro_Sys_Build.h \[2.4\] 



[1.1] envsetup.sh---加载环境变量
cd 9820e/idh.code/
source build/envsetup.sh 

//	这句可加到envsetup.sh最后
//export JAVA_HOME=/usr/lib/jvm/java-7-openjdk-amd64/


[1.2] lunch---------选择编译平台
lunch
// ----> 9
//	1. aosp_arm-eng
//	2. aosp_x86-eng
//	3. aosp_mips-eng
//	4. vbox_x86-eng
//	5. sp9820e_1h10_native-userdebug
//	6. sp9820e_1h10_multilanguage-userdebug
//	7. sp9820e_1h10_oversea-userdebug
//	8. sp9820e_2h10_native-userdebug
//	9. sp9820e_2h10_oversea-userdebug


[1.3] make----------执行编译
make -j12 2>&1 | tee log.txt
//make -j36 2>&1 | tee build.log

//编译 image
gedit device/rockchip/rk29sdk/BoardConfig.mk
//配置内核kernel.img的路径:TARGET_PREBUILT_KERNEL := ./Image  

make prebuild
cd kernel/
make kernel.img -j4
cd ..
make
make -j8
./mkimage.sh ota        再用WINDOWS工具打包成update.img 重新编译frameworks/base、frameworks/ex
./mkimage        把一些apk、驱动、资源等等打包生成image文件
out/target/product/rk3188
rockdev/Image-rk3188/


[1.4] java----------签名
java -version

//签名apk
java -jar out/host/linux-x86/framework/signapk.jar	build/target/product/security/platform.x509.pem build/target/product/security/platform.pk8 ~/Settings.apk ~/output.apk


[1.5] make idegen
make snod
make idegen    根目录
mm development/tools/idegen/
sh ./development/tools/idegen/idegen.sh
out/host/linux-x86/framework        --idegen.jar


[1.6] img
//生成新的system.img
make snod

//编译services 
make services


[1.7] emulator模拟器
//	运行模拟器
export ANDROID_PRODUCT_OUT=out/target/product/angler/
cd ./out/host/linux-x86/bin 
./emulator

//	启动Android模拟器
./run_emulator.sh


[1.8] make sdk编译sdk
export MTK_PROJECT_CONFIGS=/home/work/xj/alps/device/bror/br6737m_35g_s_m0/ProjectConfig.mk
make update-api        要有git/repo
make PRODUCT-sdk-sdk -j8
lunch sdk-eng 
make sdk 
out/target/product/generic
vendor/widevine


[1.9] 


[1.10] 


[2.1] 下载

Open E:\desktop\9820E\RESEARCHDOWNLOAD_R20.0.0001\Bin\ResearchDownload.exe
E:\desktop\9820E\RESEARCHDOWNLOAD_R20.0.0001\Bin\ResearchDownload.exe


2，将目录
out\target\product\sp9820e_2h10
下面的文件拷贝到工具目录
RESEARCHDOWNLOAD_R20.0.0001\Bin\ImageFiles\_DownloadFiles8652673；
E:\desktop\9820E\RESEARCHDOWNLOAD_R20.0.0001\Bin\ImageFiles\_DownloadFiles8652673


3，在工具设置里面选择Packet打包。


[2.2] 编译版本说明
//adb install ~
Failure [INSTALL_FAILED_UPDATE_INCOMPATIBLE]
检查有没root，

///////2   adb 不能直接 push
 编译的时候 有三个版本
userdebug
user
eng（权限最高）

只有eng版本的才具有调试的全部功能 


[2.3] 反编译
反编译主要过程
（1）将apk解压（可以变成zip压缩文件再解压）
（2）找到classes.dex文件，用 dex2jar工具 ，将dex文件转换成jar文件，命令 d2j-dex2jar classes.dex
（3）用 jd-gui 工具，将jar文件转换成java代码
（4）用 apktool 这个工具用于最大幅度地还原APK文件中的9-patch图片、布局、字符串等等一系列的资源。命令 apktool d Demo.apk

[2.4] 参考sh: 
//1.svn export android 代码
//2.自动编译debug user版本
//3.自动check fota升级需要用到的剩余空间大小
Save:node\9820e\sh\Macro_custom.sh
Save:node\9820e\sh\Macro_svn_function.sh
//4.多个项目排序编译
Save:node\9820e\sh\Macro_make.sh



[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 





