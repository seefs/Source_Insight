
基础路径设置:
basePath = Save:node\android
base:\\

sdkPath = D:android\\as_SDK
sdk:\\

asPath = C:\Program^Files\Android\Android^Studio\
as:\\

kotlinPath = as:plugins\Kotlin
kotlin:\\

demoPath = D:\project\Android\Demo\android_base
demo:\\


/***********************************************************************/

//目录[Num][Ca]:
//1.安装
Save:node\android\install\Macro_android_studio.h \[1.1\] as ide
Save:node\android\install\Macro_android_studio.h \[1.2\] jdk
Save:node\android\install\Macro_android_studio.h \[1.3\] sdk
Save:node\android\install\Macro_android_studio.h \[1.4\] gradle
Save:node\android\install\Macro_android_studio.h \[1.5\] Keymap
Save:node\android\install\Macro_android_studio.h \[1.6\] groovy ---------
Save:node\android\install\Macro_android_studio.h \[1.7\] gradlew cmd
Save:node\android\install\Macro_android_studio.h \[1.8\] Git
Save:node\android\install\Macro_android_studio.h \[1.9\] adb ----------------环境变量
Save:node\android\install\Macro_android_studio.h \[1.10\] usb
Save:node\android\install\Macro_android_studio.h \[1.11\] Terminal
Save:node\android\install\Macro_android_studio.h \[1.12\] menu info
Save:node\android\install\Macro_android_studio.h \[1.13\] kotlin
Save:node\android\install\Macro_android_studio.h \[1.14\] 
Save:node\android\install\Macro_android_studio.h \[1.15\] 
Save:node\android\install\Macro_android_studio.h \[1.16\] 
Save:node\android\install\Macro_android_studio.h \[1.17\] 
Save:node\android\install\Macro_android_studio.h \[1.18\] 
Save:node\android\install\Macro_android_studio.h \[1.19\] 
Save:node\android\install\Macro_android_studio.h \[1.20\] 
//2.配置
Save:node\android\install\Macro_android_studio.h \[2.1\] gradle version
Save:node\android\install\Macro_android_studio.h \[2.2\] source code import--build cfg
Save:node\android\install\Macro_android_studio.h \[2.3\] source code import
Save:node\android\install\Macro_android_studio.h \[2.4\] as--setting--JDK、SDK
Save:node\android\install\Macro_android_studio.h \[2.5\] as汉化包
Save:node\android\install\Macro_android_studio.h \[2.6\] android studio改变配色方案
Save:node\android\install\Macro_android_studio.h \[2.7\] toolbar
Save:node\android\install\Macro_android_studio.h \[2.8\] 
Save:node\android\install\Macro_android_studio.h \[2.9\] 
Save:node\android\install\Macro_android_studio.h \[2.10\] add si file type
Save:node\android\install\Macro_android_studio.h \[2.11\] set memory -----------as 内存
Save:node\android\install\Macro_android_studio.h \[2.12\] gradle ---------------降版本
Save:node\android\install\Macro_android_studio.h \[2.13\] debug log
Save:node\android\install\Macro_android_studio.h \[2.14\] 
Save:node\android\install\Macro_android_studio.h \[2.15\] 
Save:node\android\install\Macro_android_studio.h \[2.16\] 
Save:node\android\install\Macro_android_studio.h \[2.17\] 
Save:node\android\install\Macro_android_studio.h \[2.18\] 
Save:node\android\install\Macro_android_studio.h \[2.19\] 
Save:node\android\install\Macro_android_studio.h \[2.20\] 




[1.1] as ide
//as ide:
http://www.android-studio.org/
// 版本：3.5.2

//delete last ide:
C:\Users\Administrator\.android
C:\Users\Administrator\.AndroidStudio3.5
C:\Users\Administrator\.gradle

//ip:
cmd_s: ping dl.google.com
//	203.208.41.46

//hosts:
C:\Windows\System32\drivers\etc\hosts
//  在最后增加以下内容
203.208.41.46 dl-ssl.google.com
203.208.41.46 dl.google.com


[1.2] jdk
//下载:
http://jdk.android-studio.org/
http://www.downza.cn/soft/219583.html

//path:
C:\Program^Files\Java\
C:\Program^Files\Java\jdk1.8.0_05\lib

//env:(no use)
//JAVA_HOME = C:\Program Files\Java\jdk1.8.0_05
//path	 += %JAVA_HOME%\bin;%JAVA_HOME%\jre\bin;
//CLASSPATH = .;%JAVA_HOME%\lib;%JAVA_HOME%\lib\tools.jar
	
//ver:
cmd_s: java -version
//	java version "1.8.0_131"
//	Java(TM) SE Runtime Environment (build 1.8.0_131-b11)
//	Java HotSpot(TM) 64-Bit Server VM (build 25.131-b11, mixed mode)

//set jdk:
//  jdk--old:
C:\Program^Files\Android\Android^Studio\jre
//  jdk--new:
C:\Program^Files\Java\jdk1.8.0_131
//    复制不带空格:
C:\Program Files\Java\jdk1.8.0_131


	
[1.3] sdk
//set sdk:
configure-->Project Default Structure,
//  sdk--old:
C:\Users\Administrator\AppData\Local\Android\Sdk
//  sdk--new:
D:\android\as_SDK


名称                    版本号            API等级        发布时间           BuildVersion
Froyo                 2.2.x          8            2010/6/1       BuildVersionCodes.Froyo
Gingerbread           2.3-2.3.2      9            2010/11/1      BuildVersionCodes.GingerBread
Gingerbread           2.3.3-2.3.4    10           2011/2/1       BuildVersionCodes.GingerBreadMr1
Honeycomb             3.0.x          11           2011/2/1       BuildVersionCodes.HoneyComb
Honeycomb             3.1.x          12           2011/5/1       BuildVersionCodes.HoneyCombMr1
Honeycomb             3.2            13           2011/6/1       BuildVersionCodes.HoneyCombMr2
Ice Cream Sandwich    4.0-4.0.2      14           2011/10/1      BuildVersionCodes.IceCreamSandwich
Ice Cream Sandwich    4.0.3-4.0.4    15           2011/12/1      BuildVersionCodes.IceCreamSandwichMr1
Jelly Bean            4.1-4.1.1      16           2012/6/1       BuildVersionCodes.JellyBean
Jelly Bean            4.2-4.2.2      17           2012/11/1      BuildVersionCodes.JellyBeanMr1
Jelly Bean            4.3            18           2013/7/1       BuildVersionCodes.JellyBeanMr2
Kitkat                4.4            19           2013/10/1      BuildVersionCodes.KitKat
Kitkat Watch          4.4W           20           2014/6/1       BuildVersionCodes.KitKatWatch
Lollipop              5              21           2014/11/1      BuildVersionCodes.Lollipop
Lollipop              5.1            22           2015/3/1       BuildVersionCodes.LollipopMr1
Marshmallow           6              23           2015/8/1       BuildVersionCodes.M
Nougat                7              24           2016/8/1       BuildVersionCodes.N
Nougat                7.1            25           2016/12/1      BuildVersionCodes.NMr1
Oreo                  8              26           2017/8/1       BuildVersionCodes.O
Oreo                  8.1            27           2017/12/1      BuildVersionCodes.OMr1
Pie                   9              28           2018/8/1       BuildVersionCodes.P
Q                     10             29




[1.4] gradle
// path移出C盘, 很占空间, 600+300*N(M):
//    setting-->build->build tool->Gradle
C:/Users/Administrator/.gradle        // 旧path
D:\android\.gradle                    // 新path

//或者
%GRADLE_USER_HOME%
D:\install\.gradle


// 下载:
//    第1次编译apk自动下载, 下载路径:
//    换个项目下载新版本gradle
C:\Users\ASUS\.gradle\wrapper\dists\gradle-5.4.1-all\3221gyojl5jsh0helicew7rwx
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg
//


// env:
//    配置环境变量，新建 GRADLE_HOME 为
C:\Users\ASUS\.gradle\wrapper\dists\gradle-5.4.1-all\3221gyojl5jsh0helicew7rwx\gradle-5.4.1
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg\gradle-4.6
//    然后在系统变量的Path里添加
%GRADLE_HOME%\bin
//    配置完成后如果仍有问题，重启AS


// 查看版本号:
cmd_s: gradlew -v
//	2.14.1
//	5.4.1
gradlew -v
//	Gradle 4.6


// Gradle内存:
//    新建文件
C:\Users\Administrator\.gradle\gradle.properties
C:\Users\Administrator\.gradle\wrapper\dists\gradle-2.14.1-all\8bnwg5hd3w55iofp58khbp6yv\gradle-2.14.1
//    内容为:
//	org.gradle.daemon=true
//	org.gradle.jvmargs=-Xmx1536M


// Gradle加速器:
//    离线使用gradle
//    勾选offline work,就没有办法下载依赖
File->Setting->Build->gradle->Offline work




[1.5] Keymap
//Keymap
//  修改快捷键习惯
File->Settings->Keymap，下拉选择Eclipse，按Ok。

//AndroidX
//	老工程迁移到 AndroidX
Refactor > Migrate to AndroidX。然后手工修改代码，参照
https://developer.android.google.cn/jetpack/androidx/migrate#additional_resources





[1.6] groovy
//groovy
//系统变量的Path里添加
D:\groovy-2.4.12\bin
//查看版本号:
groovy -version


[1.7] gradlew cmd
//gradlew -v :  
//  第一次运行这个命令，系统会帮我们下载gradle到本地，下载到的路径是：
//  D:\android\android_studio\gradle\gradle-2.8
//
//gradlew assembleReleasF: 
//gradle build

1) 检查依赖并编译打包,即使你采用了多渠道打包,依然可以,可以生成所有的 apk。(涵盖 release 和 dubug)
gradlew build

2) 编译并打印日志
gradlew build --info

3) clean
gradlew clean

4) 编译并打包 debug 包
gradlew installDebug

5) 查看构建的版本
gradlew -v

6) 查看三方库依赖
gradlew -q app:dependencies

7) 查看详细的依赖信息
gradlew dependencies --info

8) 常用查错命令：
//查看build 的info??
gradlew compileDebugSources --stacktrace -debug --scan
gradlew compileDebugSources --stacktrace -info



[1.8] Git
//系统变量的Path里添加
D:\Program Files\Git\bin
//查看版本号:
git - -version

// 图形化界面
https://tortoisegit.org/download/
//




[1.9] adb
//
cmd_s: path
//系统变量的Path里添加
D:\android\sdk\platform-tools

//get sdk:
configure-->Project Default Structure,
//	D:\android\as_SDK
//	D:\android\as_SDK\platform-tools

//adb:
cmd_s: adb
//	203.208.41.46

//更新path:
cmd_s: set p path
cmd_s: setx ..


[1.10] __usb__
File->Settings->Appearance&Behavior->System Settings->Android SDK->SDK Tools,
// ->选中“Google USB Driver”。
// ->更新驱动:
D:\android\sdk\extras\google\usb_driver\
// ->安装 adb interface
https://blog.csdn.net/riyuexingchen1204/article/details/84594061

// usb驱动正常显示位置:
设备管理器----android phone----Android ADB Interface


//mtp usb设备是啥?
//   移动盘联络接口


// 华为手机设置:(安装驱动2:hdb)
//Hisuite通过HDB连接设备-------
//选择USB配置-------多媒体传输

// win10显示usb设备:
https://www.cnblogs.com/findumars/p/10332440.html



[1.11] Terminal
//默认不用改
Setting—->Tools—–>Terminal—–>Shell Path:cmd.exe




[1.12] 



[1.13] kotlin
// kotlin version (不准确)
kotlin:kotlinc\build.txt
//	1.3.50
//	1.3.72

// 改为和IDE plugin版本匹配
demo:build.gradle
//  ext.kotlin_version = '1.3.31'
//	dependencies {
//		classpath "org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlin_version"
//	}


// 修改
demo:app\build.gradle
//	apply plugin: 'kotlin-android'//
//	apply plugin: 'kotlin-android-extensions' //
//	apply plugin: 'kotlin-kapt'
//	apply plugin: "androidx.navigation.safeargs.kotlin"
//	
//	dependencies {
//		//kotlin 支持库
//		implementation "org.jetbrains.kotlin:kotlin-stdlib-jdk7:$kotlin_version"
//	}


//升级Kotlin插件版本？
工具-> Kotlin->配置Kotlin插件更新


[1.14] 




[1.15] 




[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 





[2.1] gradle version
# 当前插件--3.5.2
demo:build.gradle
//	classpath 'com.android.tools.build:gradle:3.1.2'

# 当前Gradle--5.4.1
gradle\wrapper\gradle-wrapper.properties
// distributionUrl=https\://services.gradle.org/distributions/gradle-5.4.1-all.zip

# 本地
#   最新: gradle-6.3-bin
D:\android\.gradle\wrapper\dists

# 官网
#   手动下载gradle
#   最新: v6.3
https://gradle.org/releases/


// Gradle版本对应关系
https://developer.android.google.cn/studio/releases/gradle-plugin#updating-gradle





[2.2] source code import--build cfg
生成AS项目配置文件
//1、首先全局编译一次。 
//2、查看out/host/linux-x86/framework/idegen.jar是否存在； 
out/host/linux-x86/framework/idegen.jar
//若已不存在，先执行下面命令以生成它：
source build/envsetup.sh
lunch [选择刚全局编译时的参数]
mmm development/tools/idegen/
//3、执行以下命令以生成所需配置文件。
development/tools/idegen/idegen.sh
development/tools/idegen/templates/android.ipr


[2.3] source code import
导入系统源代码至AS
//1、此时在根目录下，就已经生成了android.ipr、android.iml，可以将整个源代码导入AS。 
./android.ipr
./android.iml
//2、（可选）设置模块过滤 
./android.iml excludeFolder
//有些不想导入AS的模块，可以通过在android.iml中加入excludeFolder，达到过滤效果。

//	<excludeFolder url="file://$MODULE_DIR$/.repo"/>
//	<excludeFolder url="file://$MODULE_DIR$/abi"/>
//	<excludeFolder url="file://$MODULE_DIR$/frameworks/base/docs"/>
//	<excludeFolder url="file://$MODULE_DIR$/art"/>
//	<excludeFolder url="file://$MODULE_DIR$/bionic"/>
//	<excludeFolder url="file://$MODULE_DIR$/bootable"/>
//	<excludeFolder url="file://$MODULE_DIR$/out"/>
//	<excludeFolder url="file://$MODULE_DIR$/pdk"/>
//	<excludeFolder url="file://$MODULE_DIR$/prebuilts"/>
//	<excludeFolder url="file://$MODULE_DIR$/sdk"/>
//	<excludeFolder url="file://$MODULE_DIR$/system"/>
//	<excludeFolder url="file://$MODULE_DIR$/tools"/>
//	<excludeFolder url="file://$MODULE_DIR$/trusty"/>
//	<excludeFolder url="file://$MODULE_DIR$/vendor"/>
//	...
//3、第一次导入时间有点长，耐心等待
在Android Studio 中打开 android.ipr文件


[2.4] as--setting--JDK、SDK
//下面的这些操作，是为了让在看代码的时候，能够自由、正确地显示、跳转到相应的地方。 
//在上一步操作之后的等待期间刚好让我们来配置一下JDK和SDK。 
//在AS中参照下图Project Structure设置，在SDKs设置中加入必须的JDK，SDK。 
//创建一个新的JDK,可以取名为1.7(No Libraries)，然后删除classpath标签页下面的jar文件。 这样可以确保使用Android源码里的库文件。 

//https://blog.csdn.net/asahinokawa/article/details/79115381
...
	
//https://www.cnblogs.com/l2rf/p/6433773.html
setting->modules->android->del ...
setting->sdks->del ...
接着点击加号的JARs or directories
将你源码的frameworks及external和你用到的其他跳转目录添加到依赖中，然后apply即可。


//cfg JDK:
gitappPath = E:\Desktop\SGIT\Git_NB
gitapp:Git_NB.iml  LANGUAGE_LEVEL
// LANGUAGE_LEVEL="JDK_1_8"
gitapp:Swipebacklayout\Swipebacklayout.iml  LANGUAGE_LEVEL
// LANGUAGE_LEVEL="JDK_1_8"

gitapp:app\build.gradle
gitapp:Swipebacklayout\build.gradle
//	android {
//	    compileOptions {
//	        sourceCompatibility = 1.8
//	        targetCompatibility = 1.8
//	    }
//	}


[2.5] as汉化包
//as汉化包：
https://github.com/pingfangx/TranslatorX/wiki
C:\Program^Files\Android\Android^Studio\lib\resources_zh_CN_AndroidStudio_3.2.1_r1.jar



[2.6] android studio改变配色方案
//1)先设置android studio下当前主题为Darcula。
//	在File->settings ->Appearance -> theme 设置主题为 Darcula。

//2)下载配色相关的jar包。
//	下载地址：github下载地址
//	https://github.com/OtaK/jetbrains-monokai-sublime
//
//3)在Android Studio中file->import setting 选择解压目录下的Monokai-Sublime.jar，
//	下面是如何导入 Monokai-sublime.jar 如图
//
//	在jetbrains-monokai-sublime-master里面选择对应的jar."OK"
//	勾选EditorColors ,"OK"。
//	重启Android studio.
//	重启后再 settings下选择 editor  ,选择 colors& Fonts,  "theme"右边菜单选择 Monkai-Sublime
//	点击Apply 后 ，ok,可以看到修改之后的效果了。


//4)下载安装方式：
//	打开Setting/Preferences窗口（快捷键MacComman+,WindowsCtrl+Alt+S）
//	选择Plugins选项
//	点击Browse repositories，搜索Material Theme UI
//	安装、重启Android Studio


[2.7] toolbar
//工具栏添加常用按钮
//显示 toolbar:
view->toolbar

//1.File --> Settings--> Appearance & Behavior --> Menus and Toolbars,
//在右侧的选项中选择 Main Toolbar 
D:\SVN\app\CS_Home_JXJ1\app\src\main\res\drawable-hdpi\mediaplay_loop.png.png


[2.8] 


[2.9] 


[2.10] add si file type
//add type:
as_cfg:	*.gradle


[2.11] set memory
//在AS的bin目录下，打开studio64.vmoptions文件，修改成如下数值：
//C:\Program^Files\Android\Android^Studio\bin\studio64.exe
C:\Program^Files\Android\Android^Studio\bin\studio64.exe.vmoptions
//	-Xms256m
//	-Xmx1280m
//	-XX:ReservedCodeCacheSize=240m
//	-XX:+UseConcMarkSweepGC
修改成
//	-Xms1024m
//	-Xmx2048m

# 和这个有什么区别？
gradle.properties
//  org.gradle.jvmargs=-Xmx1024m


[2.12] gradle ---------------降版本
// gradle版本(参考)
demo:build.gradle
//	classpath 'com.android.tools.build:gradle:3.5.3'
demo:gradle\wrapper\gradle-wrapper.properties
//	distributionUrl=https\://services.gradle.org/distributions/gradle-5.4.1-all.zip

// gradle版本(修改)
apkPath = D:\project\Android\Demo\MaterialDrawer
apk:\\
apk:build.gradle
//	classpath 'com.android.tools.build:gradle:3.6.1'
apk:gradle\wrapper\gradle-wrapper.properties
//	distributionUrl=https\://services.gradle.org/distributions/gradle-6.3-bin.zip



[2.13] debug log
//debug log
C:\Users\Administrator\.AndroidStudio3.5\system\log

[2.14] 


[2.15] 


[2.16] 


[2.17] 


[2.18] 


[2.19] 


[2.20] 











