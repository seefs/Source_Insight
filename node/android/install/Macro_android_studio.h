
基础路径设置:
//basePath = E:\Desktop\SGIT\ApiDemos
//basePath = E:\Desktop\SGIT\test
//basePath = E:\Desktop\SGIT\GitClub
basePath = E:\Desktop\SGIT\API_TEST

/***********************************************************************/

//目录[Num][Ca]:
//1.安装
Save:node\android\install\Macro_android_studio.h \[1.1\] as ide
Save:node\android\install\Macro_android_studio.h \[1.2\] jdk
Save:node\android\install\Macro_android_studio.h \[1.3\] sdk
Save:node\android\install\Macro_android_studio.h \[1.4\] gradle
Save:node\android\install\Macro_android_studio.h \[1.5\] 
Save:node\android\install\Macro_android_studio.h \[1.6\] //groovy
Save:node\android\install\Macro_android_studio.h \[1.7\] gradlew cmd
Save:node\android\install\Macro_android_studio.h \[1.8\] Git
Save:node\android\install\Macro_android_studio.h \[1.9\] adb-------------环境变量
Save:node\android\install\Macro_android_studio.h \[1.10\] usb
Save:node\android\install\Macro_android_studio.h \[1.11\] Terminal
Save:node\android\install\Macro_android_studio.h \[1.12\] menu info
Save:node\android\install\Macro_android_studio.h \[1.13\] 
Save:node\android\install\Macro_android_studio.h \[1.14\] 
Save:node\android\install\Macro_android_studio.h \[1.15\] 
//2.配置
Save:node\android\install\Macro_android_studio.h \[2.1\] gradle version
Save:node\android\install\Macro_android_studio.h \[2.2\] source code import--build cfg
Save:node\android\install\Macro_android_studio.h \[2.3\] source code import
Save:node\android\install\Macro_android_studio.h \[2.4\] as--setting--JDK、SDK
Save:node\android\install\Macro_android_studio.h \[2.5\] as汉化包
Save:node\android\install\Macro_android_studio.h \[2.6\] android studio改变配色方案
Save:node\android\install\Macro_android_studio.h \[2.7\] toolbar
Save:node\android\install\Macro_android_studio.h \[2.8\] 
Save:node\android\install\Macro_android_studio.h \[2.9\] as menu info
Save:node\android\install\Macro_android_studio.h \[2.10\] set si file type
Save:node\android\install\Macro_android_studio.h \[2.11\] set memory
Save:node\android\install\Macro_android_studio.h \[2.12\] 
Save:node\android\install\Macro_android_studio.h \[2.13\] 
Save:node\android\install\Macro_android_studio.h \[2.14\] 
Save:node\android\install\Macro_android_studio.h \[2.15\] 
//3.first app
Save:node\android\install\Macro_android_studio.h \[3.1\] AVD
Save:node\android\install\Macro_android_studio.h \[3.2\] Project--build.gradle
Save:node\android\install\Macro_android_studio.h \[3.3\] Module--build.gradle
Save:node\android\install\Macro_android_studio.h \[3.4\] gradle.properties
Save:node\android\install\Macro_android_studio.h \[3.5\] run cfg
Save:node\android\install\Macro_android_studio.h \[3.6\] 
Save:node\android\install\Macro_android_studio.h \[3.7\] 
Save:node\android\install\Macro_android_studio.h \[3.8\] 
Save:node\android\install\Macro_android_studio.h \[3.9\] 
Save:node\android\install\Macro_android_studio.h \[3.10\] 
//4.move to as
Save:node\android\install\Macro_android_studio.h \[4.1\] Project--version
Save:node\android\install\Macro_android_studio.h \[4.2\] Module--version
Save:node\android\install\Macro_android_studio.h \[4.3\] androidx
Save:node\android\install\Macro_android_studio.h \[4.4\] 
Save:node\android\install\Macro_android_studio.h \[4.5\] 
Save:node\android\install\Macro_android_studio.h \[4.6\] 
Save:node\android\install\Macro_android_studio.h \[4.7\] 
Save:node\android\install\Macro_android_studio.h \[4.8\] debug
Save:node\android\install\Macro_android_studio.h \[4.9\] 
Save:node\android\install\Macro_android_studio.h \[4.10\] 
//5.签名打包
Save:node\android\install\Macro_android_studio.h \[5.1\] AppTest 签名
Save:node\android\install\Macro_android_studio.h \[5.2\] 如何更改项目名称
Save:node\android\install\Macro_android_studio.h \[5.3\] 导入 eclipse project
Save:node\android\install\Macro_android_studio.h \[5.4\] 
Save:node\android\install\Macro_android_studio.h \[5.5\] 一个app打包多个APK
Save:node\android\install\Macro_android_studio.h \[5.6\] 
Save:node\android\install\Macro_android_studio.h \[5.7\] 
Save:node\android\install\Macro_android_studio.h \[5.8\] 
Save:node\android\install\Macro_android_studio.h \[5.9\] 
Save:node\android\install\Macro_android_studio.h \[5.10\] 




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




[1.4] gradle
#path移出C盘, 很占空间, 600+300*N(M):
#  setting-->build->build tool->Gradle
#  path:
C:/Users/Administrator/.gradle
D:\android\.gradle
	
#下载:
#  第1次编译apk自动下载, 下载路径:
#    换个项目下载新版本gradle
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg

#手动下载gradle
	https://gradle.org/releases/
	
#env:
#  配置环境变量，新建 GRADLE_HOME 为
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg\gradle-4.6
#  然后在系统变量的Path里添加
%GRADLE_HOME%\bin
#  配置完成后如果仍有问题，重启AS

#查看版本号:
cmd_s: gradlew -v
//	2.14.1
//	5.4.1
gradlew -v
//	Gradle 4.6

#Gradle内存:
#  新建文件
C:\Users\Administrator\.gradle\gradle.properties
C:\Users\Administrator\.gradle\wrapper\dists\gradle-2.14.1-all\8bnwg5hd3w55iofp58khbp6yv\gradle-2.14.1
#	内容为:
//	org.gradle.daemon=true
//	org.gradle.jvmargs=-Xmx1536M

#Gradle加速器:
#  离线使用gradle
File->Setting->Build->gradle->Offline work




[1.5] 



[1.6] //groovy
//系统变量的Path里添加
D:\groovy-2.4.12\bin
//查看版本号:
groovy -version


[1.7] gradlew cmd

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


//gradlew -v :  第一次运行这个命令，系统会帮我们下载gradle到本地，下载到的路径是：
//D:\android\android_studio\gradle\gradle-2.8
//gradlew assembleReleasF: 
//gradle build


[1.8] Git
//系统变量的Path里添加
D:\Program Files\Git\bin
//查看版本号:
git - -version



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


[1.10] usb
File->Settings->Appearance&Behavior->System Settings->Android SDK->SDK Tools,
// 选中“Google USB Driver”。
// 更新驱动:
D:\android\sdk\extras\google\usb_driver
// 安装 adb interface
https://blog.csdn.net/riyuexingchen1204/article/details/84594061

// usb驱动正常显示位置:
设备管理器----android phone----Android ADB Interface


//mtp usb设备是啥?
//   移动盘联络接口


// 华为手机设置:
Hisuite通过HDB连接设备-------
选择USB配置-------多媒体传输



[1.11] Terminal
//默认不用改
Setting—->Tools—–>Terminal—–>Shell Path:cmd.exe




[1.12] menu info
File
Edit
View
Navigate    导航
Code
Analyze    分析
Refactor   重构
    ->Migrate to AndroidX    迁移到AndroidX
Build
Run
Tools
VCS
Window
Help



[1.13] 




[1.14] 




[1.15] 




[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] 


Save:node\android\install\Macro_android_studio.h \[1.16\] 
Save:node\android\install\Macro_android_studio.h \[1.17\] 
Save:node\android\install\Macro_android_studio.h \[1.18\] 
Save:node\android\install\Macro_android_studio.h \[1.19\] 
Save:node\android\install\Macro_android_studio.h \[1.20\] 



[2.1] gradle version
# 当前插件--3.5.2
build.gradle
//	classpath 'com.android.tools.build:gradle:3.1.2'

# 当前Gradle--5.4.1
gradle\wrapper\gradle-wrapper.properties
// distributionUrl=https\://services.gradle.org/distributions/gradle-5.4.1-all.zip

#
jcenter()
jcenter{ url "http://jcenter.bintray.com/"}


#
file->sync project


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


[2.7] toolbar
//工具栏添加常用按钮
//显示 toolbar:
view->toolbar

//1.File --> Settings--> Appearance & Behavior --> Menus and Toolbars,
//在右侧的选项中选择 Main Toolbar 
D:\SVN\app\CS_Home_JXJ1\app\src\main\res\drawable-hdpi\mediaplay_loop.png.png


[2.8] 


[2.9] as menu info
//build:
//	sync
//	make
//	make selected
//	clean
//	rebuild
//	build APK
//	gnerate signed APK


[2.10] set si file type
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

#
gradle.properties
//  org.gradle.jvmargs=-Xmx1024m


[2.12] 


[2.13] 


[2.14] 


[2.15] 


[2.16] 


[2.17] 


[2.18] 


[2.19] 


[2.20] 


Save:node\android\install\Macro_android_studio.h \[2.16\] 
Save:node\android\install\Macro_android_studio.h \[2.17\] 
Save:node\android\install\Macro_android_studio.h \[2.18\] 
Save:node\android\install\Macro_android_studio.h \[2.19\] 
Save:node\android\install\Macro_android_studio.h \[2.20\] 


[3.1] AVD


[3.2] Project--build.gradle
# Project--gradle
build.gradle

# buildscript--repositories
#   +++:
//	maven { url'http://maven.aliyun.com/nexus/content/groups/public/'}
//	mavenCentral()

# allprojects--repositories
#   +++:
//	maven { url "https://jitpack.io" }
//	mavenCentral()


[3.3] Module--build.gradle
# Module--gradle
app\build.gradle

#   +++:
//	def AAVersion = '4.6.0'
//	def releaseTime() {
//	    return new Date().format("yyyy-MM-dd", TimeZone.getTimeZone("UTC"))
//	}


[3.4] gradle.properties
//	org.gradle.jvmargs=-Xmx512m
//#表示使用 androidx
//	android.useAndroidX=true
//#表示将第三方的依赖库也迁移到 androidx，如果你的项目中没有依赖库可以设置为false
//	android.enableJetifier=true
//
//	gradle-wrapper.properties全部内容，请参考:
//
//	distributionBase=GRADLE_USER_HOME
//	distributionPath=wrapper/dists
//	zipStoreBase=GRADLE_USER_HOME
//	zipStorePath=wrapper/dists
//	distributionUrl=https\://services.gradle.org/distributions/gradle-5.6-all.zip
//
//	gradle.properties(Project)全部内容，请参考:
//
//	android.enableJetifier=true
//	android.useAndroidX=true
//	org.gradle.jvmargs=-Xmx1536m
//
//	settings.gradle全部内容，请参考
//
//	include ':app'
//
//	local.properties全部内容，请参考
//
//	sdk.dir=C\:\\Users\\Administrator\\AppData\\Local\\Android\\Sdk


[3.5] run cfg


[3.6] 


[3.7] 


[3.8] 
//	8.其它：
//
//	8.1修改快捷键习惯：File->Settings->Keymap，下拉选择Eclipse，按Ok。
//
//	8.2老工程迁移到 AndroidX，菜单栏中依次选择 Refactor > Migrate to AndroidX，快速迁移现有项目以使用 AndroidX。然后手工修改代码，参照https://developer.android.google.cn/jetpack/androidx/migrate#additional_resources
//
//	8.3:常用查错命令：
//
//	在Android Studio 的Terminal 中查看build 的info  
//
//	gradlew compileDebugSources --stacktrace -debug --scan
//
//	gradlew compileDebugSources --stacktrace -info


[3.9] 


[3.10] 


[3.11] 


[3.12] 


[3.13] 


[3.14] 


[3.15] 


[3.16] 


[3.17] 


[3.18] 


[3.19] 


[3.20] 


Save:node\android\install\Macro_android_studio.h \[3.11\] 
Save:node\android\install\Macro_android_studio.h \[3.12\] 
Save:node\android\install\Macro_android_studio.h \[3.13\] 
Save:node\android\install\Macro_android_studio.h \[3.14\] 
Save:node\android\install\Macro_android_studio.h \[3.15\] 
Save:node\android\install\Macro_android_studio.h \[3.16\] 
Save:node\android\install\Macro_android_studio.h \[3.17\] 
Save:node\android\install\Macro_android_studio.h \[3.18\] 
Save:node\android\install\Macro_android_studio.h \[3.19\] 
Save:node\android\install\Macro_android_studio.h \[3.20\] 


[4.1] Project--version
# Project--gradle
build.gradle

# gradle
#   ++--:
classpath 'com.android.tools.build:gradle:3.5.2'


supportVersion = "25.1.0"

retrofitVersion = "2.1.0"

okhttpVersion = "3.4.1"

leakcanaryVersion = "1.4-beta2"

daggerVersion = "2.6"



[4.2] Module--version
# Module--gradle
app\build.gradle

# Sdk
#   ++--:
//    compileSdkVersion 29
//    buildToolsVersion "29.0.2"
#   ++--:
//        targetSdkVersion 29



[4.3] androidx




[4.4] mavenCentral->google




[4.5] 
classpath在2019年过后就不能用了要用implement




[4.6] 




[4.7] 




[4.8] debug
//log
C:\Users\Administrator\.AndroidStudio3.5\system\log




[4.9] 




[4.10] 



[4.11] 




[4.12] 
	
	
[4.13] 
	
	
[4.14] 
	
	
[4.15] 
	
	
[4.16] 
	
	
[4.17] 
	
	
[4.18] 
	
	
[4.19] 
	
	
[4.20] 
	
Save:node\android\install\Macro_android_studio.h \[4.11\] 
Save:node\android\install\Macro_android_studio.h \[4.12\] 
Save:node\android\install\Macro_android_studio.h \[4.13\] 
Save:node\android\install\Macro_android_studio.h \[4.14\] 
Save:node\android\install\Macro_android_studio.h \[4.15\] 
Save:node\android\install\Macro_android_studio.h \[4.16\] 
Save:node\android\install\Macro_android_studio.h \[4.17\] 
Save:node\android\install\Macro_android_studio.h \[4.18\] 
Save:node\android\install\Macro_android_studio.h \[4.19\] 
Save:node\android\install\Macro_android_studio.h \[4.20\]


[5.1] AppTest 签名
D:\SVN\app\APPTest1

//gradle版本: gradle-4.6-all
D:\SVN\app\APPTest1\gradle\wrapper\gradle-wrapper.properties
//	distributionPath=wrapper/dists
//	distributionUrl=https\://services.gradle.org/distributions/gradle-4.6-all.zip
//	zipStoreBase=GRADLE_USER_HOME

//导入jar包: 
D:\SVN\app\APPTest1\app\build.gradle
//	dependencies {
//		testImplementation 'junit:junit:4.12'
//		androidTestImplementation 'com.android.support.test:runner:1.0.2'
//		androidTestImplementation 'com.android.support.test.espresso:espresso-core:3.0.2'
//		implementation 'com.google.code.gson:gson:2.8.5'
//	}

//签名jks:
//1、方式1：通过Android Studio进行签名：
E:\save\android\ApkSigned\test.jks
//2、方式2：通过命令行的方式进行签名：
gradlew assembleRelease


//生成apk:
D:\SVN\app\APPTest1\app\release\app-release.apk


[5.2] 如何更改项目名称
右键->重构->rename
//	1. 关闭Android Studio 
//	2. 修改project所在路径的文件夹名字为[NewName]
//	3. 打开Android Stuido，import新的[NewName]路径工程(很重要,重新import工程，Android Studio会自动修改部分相关的project名字引用)
//	4. 修改根目录下的.iml文件名为[NewName].iml，及该文件中的external.linked.project.id=[NewName]
//	5. 修改.idea/modules.xml里面的
//	<module fileurl="file://$PROJECT_DIR$/[NewName].iml" filepath="$PROJECT_DIR$/[NewName].iml" />


[5.3] 导入 eclipse project
//File----new---import—选择一个eclipseproject（必须是这个project最顶层的文件夹）
//然后会报错：
//"There are unrecoverable errors which must be corrected first"
//然后这么改：把eclipse的project里面的the?project.properties
D:\SVN\app\CS_Home_JXJ\project.properties
//	target=android-21
//	android.library=false
//	android.library.reference.1=../library_new
删掉 android.library.reference.1=../appcompat_v7

然后引入到Android Studio里面
之后把这句话加入到app/build.gradle:
D:\SVN\app\CS_Home_JXJ1\cS_Home\build.gradle
//	dependencies{
//		compile project(':library_new')
//		compile files('libs/juhe_sdk_v_2_7.jar')
//		compile files('libs/org.json.jar')
//		compile files('libs/sun.misc.BASE64Decoder.jar')
//		compile files('libs/zxing.jar')
//		compile fileTree(include: ['*.jar'], dir: 'libs')

//	}

有可能导入之后，说SDK不支持你的版本。这个时候你可以安装相应的平台，
也可以修改app/build.gradle文件里面的额targetSDK版本，修改dependicies的版本


D:\SVN\app\CS_Home_JXJ1\cS_Home\build.gradle
//    compileSdkVersion 28
//    minSdkVersion 19
//    targetSdkVersion 28


//对比其他项目修改:
D:\SVN\app\CS_Home_JXJ1\.idea\gradle.xml
//	<option name="modules">
//	  <set>
//		<option value="$PROJECT_DIR$" />
//		<option value="$PROJECT_DIR$/cS_Home" />
//	  </set>
//	</option>
修改："$PROJECT_DIR$/cS_Home"

D:\SVN\app\CS_Home_JXJ1\.idea\modules.xml
//    <modules>
//      <module fileurl="file://$PROJECT_DIR$/CS_Home_JXJ1.iml" filepath="$PROJECT_DIR$/CS_Home_JXJ1.iml" />
//    </modules>

//对比其他项目修改:




[5.4] 




[5.5] 一个app打包多个APK
#1.修改app\build.gradle
app\build.gradle
//	假设我们同一套代码编译2个app：demo1和demo2
android {
	...
	productFlavors {
		// demo1
		demo1 {
			 //不同Id
			applicationId "com.glorystudent.buglydemo1"
			 //自动生成@string/app_name为demo
			resValue "string","app_name","demo1"
			 //定义app_icon字段，在AndroidManifest.xml文件中用到
			manifestPlaceholders = [UMENG_CHANNEL_VALUE: "demo1",app_icon : "@mipmap/ic_launcher"]
		}
		// demo2
		demo2 {
			applicationId "com.glorystudent.buglydemo2"
			resValue "string","app_name","demo2"
			manifestPlaceholders = [UMENG_CHANNEL_VALUE: "demo2",app_icon : "@mipmap/ic_launcher1"]
		}
	}
//	这里的作用就是即使项目中报错也不会停止打包 。
	lintOptions {
		checkReleaseBuilds false
		abortOnError false
	}
}

#2.res重复, 从strings.xml删除string-app_name
	resValue "string","app_name","demo"
//	运行之后，AS会自动生成@string/app_name，内容是这样的
	<item type="string" name="app_name">demo</item>

#3.修改AndroidManifest.xml文件
	<manifest xmlns:android="http://schemas.android.com/apk/res/android"
		package="com.glorystudent.buglydemo1">
	
		<application
			android:allowBackup="true"
			android:icon="${app_icon}"
			android:label="@string/app_name"
			android:supportsRtl="true"
			android:theme="@style/AppTheme">
		   <meta-data
			  android:name="UMENG_CHANNEL"
				android:value="${UMENG_CHANNEL_VALUE}"/>
			<activity android:name=".ui.MainActivity">
				<intent-filter>
					<action android:name="android.intent.action.MAIN" />
					<category android:name="android.intent.category.LAUNCHER" />
				</intent-filter>
			</activity>
		</application>
	
	</manifest>

#4.打包并签名APK
//	我们打包时，就会出现2个app：
//	我们选择2个app，AS就会帮我们打包2个不同的APK了


[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 




[5.11] 




[5.12] 





[5.13] 



[5.14] 



[5.15] 



[5.16] 



[5.17] 



[5.18] 



[5.19] 



[5.20] 


Save:node\android\install\Macro_android_studio.h \[5.11\] 
Save:node\android\install\Macro_android_studio.h \[5.12\] 
Save:node\android\install\Macro_android_studio.h \[5.13\] 
Save:node\android\install\Macro_android_studio.h \[5.14\] 
Save:node\android\install\Macro_android_studio.h \[5.15\] 
Save:node\android\install\Macro_android_studio.h \[5.16\] 
Save:node\android\install\Macro_android_studio.h \[5.17\] 
Save:node\android\install\Macro_android_studio.h \[5.18\] 
Save:node\android\install\Macro_android_studio.h \[5.19\] 
Save:node\android\install\Macro_android_studio.h \[5.20\] 










