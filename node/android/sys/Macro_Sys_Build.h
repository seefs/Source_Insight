
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
// 3. adb 模块
Save:node\android\sys\Macro_Sys_Build.h \[3.1\] adb shell
Save:node\android\sys\Macro_Sys_Build.h \[3.2\] adb -- Launcher3
Save:node\android\sys\Macro_Sys_Build.h \[3.3\] adb -- Settings
Save:node\android\sys\Macro_Sys_Build.h \[3.4\] adb -- SystemUI
Save:node\android\sys\Macro_Sys_Build.h \[3.5\] adb -- FMRadio
Save:node\android\sys\Macro_Sys_Build.h \[3.6\] adb -- framework
Save:node\android\sys\Macro_Sys_Build.h \[3.7\] adb -- services
Save:node\android\sys\Macro_Sys_Build.h \[3.8\] adb -- build.prop
Save:node\android\sys\Macro_Sys_Build.h \[3.9\] adb -- jpg
Save:node\android\sys\Macro_Sys_Build.h \[3.10\] adb -- other apk
Save:node\android\sys\Macro_Sys_Build.h \[3.11\] 
Save:node\android\sys\Macro_Sys_Build.h \[3.12\] 
Save:node\android\sys\Macro_Sys_Build.h \[3.13\] 
// 4. adb
Save:node\android\sys\Macro_Sys_Build.h \[4.1\] adb -- version
Save:node\android\sys\Macro_Sys_Build.h \[4.2\] adb -- 展讯pac打包
Save:node\android\sys\Macro_Sys_Build.h \[4.3\] 如何编译模块 
Save:node\android\sys\Macro_Sys_Build.h \[4.4\] 如何编译 	  3rdparty	 下的    ko 
Save:node\android\sys\Macro_Sys_Build.h \[4.5\] 用来查看当前运行时，activity的状态信息。
Save:node\android\sys\Macro_Sys_Build.h \[4.6\] getevent获取input上报事件
Save:node\android\sys\Macro_Sys_Build.h \[4.7\] android adb shell am pm 列出说要安装的packages
Save:node\android\sys\Macro_Sys_Build.h \[4.8\] Android 通过adb 当前输入法信息
Save:node\android\sys\Macro_Sys_Build.h \[4.9\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.10\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.11\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.12\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.13\] 




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


[3.1] adb shell

cmd_w: D:&cd D:\android\as_SDK\platform-tools

adb remount
adb shell
cd /system/app
adb shell getevent -p

adb reboot bootloader
adb remount
adb shell

//install uninstall
adb push E:\apk\kidbbapp3.0.013.apk  /mnt/sdcard/apk
adb uninstall com.kidbbapp.com
adb install com.kidbbapp.com
adb uninstall com.seefs.shenqi
adb uninstall  com.litai.launcher
adb uninstall  com.android.launcher3  


[3.2] adb -- Launcher3
adb install   E:\桌面\Launcher3.apk


[3.3] adb -- Settings
adb install   F:\fShared\br6737m\system-app\Settings\Settings.apk
adb push	 F:\fShared\br6737m\system-app\Settings\Settings.apk   /mnt/sdcard/apk_us
adb push	 F:\fShared\br6737m\system\priv-app\Settings\Settings.apk	/mnt/sdcard/apk_us
adb uninstall	 Settings.apk
adb push     F:\fShared\br6737m\Settings4.apk   /mnt/sdcard/apk_us


[3.4] adb -- SystemUI
adb install   E:\android\apk_mt6572\SystemUI.apk
adb install   E:\android\apk_mt6572\SystemUI.apk
adb push	 E:\android\apk_mt6572\SystemUI.apk   /mnt/sdcard/
adb push	 E:\android\apk_mt6572\SystemUI.apk   /mnt/sdcard/
SystemUI_bak.apk
//要备份，免得启动不了：
adb push E:\apk\sys_bak\Launcher3.apk  /system/app


[3.5] adb -- FMRadio
adb push	 E:\桌面\FMRadio.apk	 /system/priv-app/FMRadio
adb push	 E:\桌面\lib\libfmjni.so	 /system/lib/
adb push	 E:\桌面\lib64\libfmjni.so   /system/lib64/
adb uninstall    FmRadio.apk


[3.6] adb -- framework
adb push	 F:\fShared\angler\framework\framework.jar	/mnt/sdcard/aaa
adb pull   /system/framework/framework-res.apk E:\apk\sys_res\framework-res.apk
adb pull   /system/framework/framework2.jar E:\apk\sys_res\framework2.jar
adb pull   /system/framework/framework.jar E:\apk\sys_res\framework.jar

adb pull   /system/framework/framework-res.apk E:\apk\framework-res.apk
adb push  E:\apk\sys_res\framework-res.apk /system/framework/
adb push  E:\apk\framework2.jar /system/framework/
adb push  E:\apk\framework.jar /system/framework/


[3.7] adb -- services
adb push	 F:\fShared\angler\framework\services.jar  /mnt/sdcard/aaa


[3.8] adb -- build.prop
adb pull   /system/build.prop E:\apk\sys_error\build.prop
adb push E:\apk\sys_error\build.prop  /system/build.prop


[3.9] adb -- jpg
cp default_thumb.jpg com.litai.launcher/files/
ls default_thumb.jpg com.litai.launcher/files/
cp default_thumb.jpg com.android.launcher3/files/

adb push  E:\资源\壁纸\default_thumb\default_thumb.jpg /data/data/com.android.launcher3/files/
adb pull   /data/data/com.android.launcher3/files/default_thumb.jpg E:\资源\壁纸\default_thumb_new.jpg


[3.10] adb -- other apk
//install
cmd_w: adb install  E:\Desktop\SGIT\GitClub\apk\app-release.apk
cmd_w: ping dl.google.com


[3.11] 


[3.12] 


[3.13] 


[3.14] 



[4.1] adb -- version
//如何通过adb 获取应用的版本号
windows： 
adb shell pm dump com.android.dialer | findstr “versionName” 
linux： 
adb shell pm dump com.android.dialer | grep “versionName”





[4.2] adb -- 展讯pac打包
android系统编译完成后，生成的都是系统的文件，如果用展讯的烧录工具一个一个的选中则非常麻烦，
下面介绍了一种把这些文件打包成pac包的形式的方法，细看命令比较长，原因是系统文件比较多，
我使用的都是绝对路径，可以对一个路径设置一个变量，这样就可以缩短命令行的长度了。?

//	perl customize/pac_8810/pac_8810.pl "mytest.pac" "VERSION_1.0" 
//	"customize/pac_8810/SC8810.xml" "sc8810_sp8810ga/fdl1.bin" 
//	"out/target/product/hsdroid/sps.images_eng/fdl2.bin" 
//	"sc8810_sp8810ga/nvitem_3500_9810.bin" 
//	"out/target/product/hsdroid/sps.images_eng/u-boot-spl-16k.bin" 
//	"out/target/product/hsdroid/sps.images_eng/u-boot-256M.bin" 
//	"sc8810_sp8810ga/vmjaluna.imagenkcbsp-sc8810_nodebug" 
//	"sc8810_sp8810ga/SC8800G_sc8810_modem_vlx.bin" 
//	"sc8810_sp8810ga/SC8810_DM_DSP.bin" 
//	"out/target/product/hsdroid/sps.images_eng/boot.img" 
//	"out/target/product/hsdroid/sps.images_eng/recovery.img" 
//	"out/target/product/hsdroid/sps.images_eng/system.img" 
//	"out/target/product/hsdroid/sps.images_eng/userdata.img" 
//	"sc8810_sp8810ga/HVGA_logo_256.bmp" ""
?我们在发布一个版本的时候，经常会遇见版本更新的非常小，比如只更换或删除某个apk，
这时如果对整个android代码进行编译的话，会非常浪费时间，严重影响工作效率，
我们可以手动替换某个apk，再用下面的方法使用mkyaffs2image生成一个img文件，
再使用上面那个命令对镜像文件进行打包，这样非常节省时间。

out/host/linux-x86/bin/mkyaffs2image -f out/target/product/hsdroid/sps.images_eng/system mysystem.img
out/host/linux-x86/bin/mkyaffs2image -f out/target/product/hsdroid/sps.images_eng/data myuserdata.img
在实际开发中，我们需要大量的阅读源码，从源码中寻找方法和灵感，这样对我们自身提高是非常有用的。

	

[4.3] 如何编译模块 

     以 engtest 模块为例，编译过程： 

cd idh.code 
./mk sp6820a u adr external/sprd/engineeringmodel/engtest
./mk sp9820e_1h10 u adr external/sprd/engineeringmodel/engtest



      

     注意： 

     编译单独模块之前，确保进行过             new 或 pb，如果要编译的模块需要引用其他模块的编译结果，
     则必须要先进行       new 编译。     

     编译单独模块过程中，同样也会进行相应的                  ln 合并过程，默认编译完成后会断开之前建立的
     链接，可以使用-o=nsc       选项来保持链接现场，命令如下： 

              $ ./mk -o=nsc sp6820a u adr external/sprd/engineeringmodel/engtest 

      

[4.4] 如何编译       3rdparty   下的    ko 

     以 tp 为例 

         $ cd idh.code 

         $ ./mk sp6820a u ko 3rdparty/tp/pixcir/ 

     需要确保    3rdparty/tp/pixcir/build.sh 的可执行权限 

[4.5] 用来查看当前运行时，activity的状态信息。

adb shell dumpsys activity 包含信息项
通过adb shell dumpsys activity | findstr “ACTIVITY MANAGER” ，打印的信息如下：

[4.6] getevent获取input上报事件
1.指定某个设备：adb shell getevent -v /dev/input/event0 
eg: 
D:\Program Files (x86)\PowerCmd>adb shell getevent -v /dev/input/event1

bus: 0018 
vendor 0001 
product 0001 
version 0100 
name: “proximity” 
location: “proximity” 
id: “” 
version: 1.0.1 
0003 0019 00000000 
0000 0000 00000000 
0003 0019 00000001 
0000 0000 00000000

2.list上报事件：adb shell getevent -l

D:\Program Files (x86)\PowerCmd>adb shell getevent -l 
add device 1: /dev/input/event6 
name: “mtk-tpd-kpd” 
add device 2: /dev/input/event5 
name: “mtk-tpd” 
add device 3: /dev/input/event4 
name: “m_acc_input” 
add device 4: /dev/input/event3 
name: “m_alsps_input” 
add device 5: /dev/input/event2 
name: “hwmdata” 
add device 6: /dev/input/event0 
name: “ACCDET” 
add device 7: /dev/input/event1 
name: “mtk-kpd” 
/dev/input/event5: EV_ABS ABS_MT_TRACKING_ID 00000000 
/dev/input/event5: EV_KEY BTN_TOUCH DOWN 
/dev/input/event5: EV_ABS ABS_MT_TOUCH_MAJOR 00000001 
/dev/input/event5: EV_ABS ABS_MT_POSITION_X 000000e5 
/dev/input/event5: EV_ABS ABS_MT_POSITION_Y 000002d7 
/dev/input/event5: EV_SYN SYN_MT_REPORT 00000000 
/dev/input/event5: EV_SYN SYN_REPORT 00000000 
/dev/input/event5: EV_ABS ABS_MT_TRACKING_ID 00000000 
/dev/input/event5: EV_ABS ABS_MT_TOUCH_MAJOR 00000001 
/dev/input/event5: EV_ABS ABS_MT_POSITION_X 000000e5 
/dev/input/event5: EV_ABS ABS_MT_POSITION_Y 000002d7 
/dev/input/event5: EV_SYN SYN_MT_REPORT 00000000 
/dev/input/event5: EV_SYN SYN_REPORT 00000000 
/dev/input/event5: EV_ABS ABS_MT_TRACKING_ID 00000000


[4.7] android adb shell am pm 列出说要安装的packages
adb shell pm list packages //列出说要安装的packages

pm list packages: prints all packages, optionally only

those whose package name contains the text in FILTER. Options:

-f: see their associated file.

-d: filter to only show disbled packages.

-e: filter to only show enabled packages.

-s: filter to only show system packages.

-3: filter to only show third party packages.

-i: see the installer for the packages.

-u: also include uninstalled packages.

adb shell pm list packages -f //列出安装的packages 并显示出apk包所在的位置 
eg：package:/system/priv-app/FMRadio/FMRadio.apk=com.android.fmradio 
eg: adb shell pm list packages -f “qiku”

adb shell pm list packages -d //列出被停用的应用 
eg：C:\Users\Administrator>adb shell pm list packages -d 
package:com.qiku.android.sos

adb shell pm list packages -e //列出启用的应用 
adb shell pm list packages -3 //列出安装的第三方应用，可以结合-3 -f查看具体apk的路径 
adb shell pm list packages -i //列出应用及包，并显示他的安装来源，null表示系统。 
eg:package:com.tencent.mobileqq installer=com.tencent.mobileqq 
adb shell pm list packages -u //列出为安装包应用信息

pm list permission-groups: prints all known permission groups.

pm list permissions: prints all known permissions, optionally only

those in GROUP. Options:

-g: organize by group.

-f: print all information.

-s: short summary.

-d: only list dangerous permissions.

-u: list only the permissions users will see.

adb shell pm list permission-groups //列出已知的权限组 
shell@sp9832a_3h10_volte:/ $ pm list permission-groups

permission group:com.android.qiku.permission-group.CONTACTS
permission group:android.permission-group.CONTACTS
permission group:android.permission-group.PHONE
permission group:com.android.qiku.permission-group.CALENDAR
permission group:android.permission-group.CALENDAR
permission group:android.permission-group.CAMERA
permission group:android.permission-group.SENSORS
permission group:android.permission-group.LOCATION
permission group:android.permission-group.STORAGE
permission group:android.permission-group.MICROPHONE
permission group:android.permission-group.SMS

pm list features: prints all features of the system. 
eg: 
C:\Users\Administrator>adb shell pm list features 
feature:reqGlEsVersion=0x20000 
feature:android.hardware.audio.output 
feature:android.hardware.bluetooth 
feature:android.hardware.bluetooth_le 
feature:android.hardware.camera 
feature:android.hardware.camera.any 
feature:android.hardware.camera.autofocus 
feature:android.hardware.camera.flash 
feature:android.hardware.camera.front 
feature:android.hardware.faketouch 
feature:android.hardware.location 
feature:android.hardware.location.gps 
feature:android.hardware.location.network 
feature:android.hardware.microphone

pm list users: 
eg: 
C:\Users\Administrator>adb shell pm list users 
Users: 
UserInfo{0:机主:13} running

pm path: print the path to the .apk of the given PACKAGE.//列出指定包名的apk的路径 感觉和pm list packages -f “pkgname”差不多 
eg： 
C:\Users\Administrator>adb shell pm path com.qiku.music 
package:/system/priv-app/QK_Music/QK_Music.apk

pm dump: print system state associated with the given PACKAGE //dump 指定应用的信息 包括版本号，安装时间，更新时间，权限等等。 
eg：C:\Users\Administrator>adb shell pm dump com.qiku.music >d:\music.log

pm install [-l] [-r] [-t] [-i INSTALLER_PACKAGE_NAME] [-s] [-f] PATH //安装指定目录的apk 
eg： 
pm install /data/3dijoy_fane.apk

pm get-install-location　　返回当前默认安装位置

　　返回值：

　　　　0　　auto

　　　　1　　内部存储

　　　　2　　外部存储

pm set-install-location　0|1|2　修改默认安装位置

pm clear “pkgname”//清除指定应用的数据，可以用于fota升级后，清空数据结合Runningtime


[4.8] Android 通过adb 当前输入法信息
adb shell ime list -s 
com.google.android.inputmethod.latin/com.android.inputmethod.latin.LatinIME 
com.google.android.apps.speechservices/com.google.android.voicesearch.ime.VoiceI 
nputMethodService



[4.9] 




[4.10] 




[4.11] 




[4.12] 
	
	
[4.13] 
	
	
[4.14] 
	
	
[4.15] 
	




