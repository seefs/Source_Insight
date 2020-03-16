
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置:
//basePath = D:\SVN\app\Calculator
//basePath = \\192.168.2.115\xiaoj\9820\idh.code



/***********************************************************************/
/******************************* file **********************************/
/***********************************************************************/

.gitignore
.gradle
.idea
app
build.gradle
//	配置了使用的android gradle插件，指定生成aar还是apk， 
//1) 作为库:
//	apply plugin: "com.android.library" 
//2) 生成apk:
//	apply plugin: "com.android.application"
//3) 类路径:
//  classpath 'com.android.tools.build:gradle:3.2.0'
//4) 版本号:
//	android {
//	    defaultConfig {
//	        minSdkVersion 19
//	        targetSdkVersion 28
//	        versionCode 1
//	        versionName "1.0"
//	    }
//	}

CS_Home_JXJ1.iml
file.txt
gradle
gradle.properties
gradlew
gradlew.bat
library_new
local.properties
//	根据设置的使用的Build Tools和SDK版本，从local.properties指定的SDK目录中查找是否有匹配的版本，没有的话会报错，提示安装SDK等。

settings.gradle
//	搜索并读取settings.gradle配置，将所有模块都加载到当前Studio的工程目录中。

.gradle\4.6\...
.gradle\vcsWorkingDirs\gc.properties

.idea\caches
.idea\codeStyles
.idea\gradle.xml
//	gradle信息
.idea\libraries
.idea\misc.xml
.idea\modules.xml
//	包含哪些模块
.idea\runConfigurations.xml
.idea\workspace.xml
//	记录了你的个人设置
.idea\caches\build_file_checksums.ser
.idea\codeStyles\.xml
.idea\libraries\Gradle__android_..._jar.xml

app\.gitignore
app\app.iml
//	文件中定义了模块的相关配置信息，有Facet依然为java-gradle，编译路径为build目录，源码路径，依赖库路径信息
app\build
//	编译中产生的临时文件，最终生成的apk文件在build/outputs/apk目录下
app\build.gradle
//	[1.0] ----------------------------------
//	模块配置文件，描述模块采用的SDK，Build Tools版本，最终是库文件还是生成apk文件等信息

//	[1.1] build.gradle 引入:so文件
//	#添加以下五行(意思是会把libs文件夹当成jniLibs文件夹，可以直接用so库了)
//	android {
//		sourceSets {
//		    main {
//		        jniLibs.srcDirs = ['libs']
//		    }
//		}
//	}


//	[1.2] build.gradle 引入:Jar文件
//	dependencies {
//	# 一次性引入libs目录下所有jar文件
//		compile fileTree(include: ['*.jar'], dir: 'libs')
//	# 或:
//		implementation fileTree(include: ['*.jar'], dir: 'libs')
//	# implementation 不可以依赖传递，但是 compile 可以依赖传递
//	# 单个逐一引入jar文件
//	    compile files('libs/zxing.jar')
//	}


//	[1.3] build.gradle 引入:第三方Library库
//	#1) 将第三方Library库文件复制到项目根目录下，打开项目根目录下的 settings.gradle 文件，添加配置命令，如:
settings.gradle
//	include ':app', ':PullToRefresh'

//	#2)  然后打开app/build.gradle，添加配置命令，如:
app\build.gradle
//	compile project(':PullToRefresh')

//	#3  推荐在项目根目录下新建一个文件夹，如extras文件夹，将所有Library库文件都复制到该文件下，
//	#   方便统一浏览管理，这样上面两步对应的配置命令将变成:
//	include ':app', ':extras:PullToRefresh'
//	compile project(':extras:PullToRefresh')


//	[1.4] build.gradle 引入:aar文件
//	# aar其实也是一个压缩文件，相比jar文件，它能够含带res资源文件等，aar文件的引入方式有两种:
//	#1) Module形式引入
//	#   选择File菜单，或者打开Project Structure界面，添加新的Module（New Module…），选择Import .JAR/.AAR Package，
//	#   选择目标aar文件导入。导入之后，在项目根目录下会自动生成一个新的文件夹放置aar文件及其配置文件，如:
//	#   这里写图片描述
//	#   然后打开app module目录下的build.gradle配置文件，在 dependencies 依赖项中添加配置即可:
app\build.gradle
//	compile project(':qiniu-android-sdk-7.2.0')
//	#   注意:这种引入方式无法查看aar文件中的代码和资源等文件。

//	#2) libs目录中引入
//	#   将aar文件复制到app module目录下的libs文件夹中，然后打开app module目录下的build.gradle配置文件，
//	#   在android一栏中添加依赖:
//	repositories {
//	    flatDir {
//	        dirs 'libs'
//	    }
//	}
//	#   然后再在dependencies一栏中添加:
//	compile(name:'qiniu-android-sdk-7.2.0', ext:'aar')


//	[1.5] build.gradle 引入:jcenter、maven仓库文件
//	#1) 在项目根目录的build.gradle文件中添加仓库，如:
build.gradle
//	buildscript {
//	    repositories {
//	        jcenter()
//	    }
//	    dependencies {
//	        classpath 'com.android.tools.build:gradle:2.1.0'
//	    }
//	}
// 
//	allprojects {
//	    repositories {
//	        jcenter()
//	    }
//	}
// 
//	task clean(type: Delete) {
//	    delete rootProject.buildDir
//	}
//	#2) 然后再各个Module的build.gradle配置文件的dependencies项中添加依赖，
//	#   格式为｀compile ‘name:version’｀，如:
app\build.gradle
//	dependencies {
//		compile 'com.squareup.okhttp3:okhttp:3.2.0'
//	}



settings.gradle
//	include ':app', ':PullToRefresh'
//	# 然后打开app/build.gradle，添加配置命令，如:
app\build.gradle
//	compile project(':PullToRefresh')
//	# 推荐在项目根目录下新建一个文件夹，如extras文件夹，将所有Library库文件都复制到该文件下，
//	# 方便统一浏览管理，这样上面两步对应的配置命令将变成:
//	include ':app', ':extras:PullToRefresh'
//	compile project(':extras:PullToRefresh')


app\libs
//	模块依赖的动态库（so文件）或者jar包文件等
//	添加so:
app\libs\arm64-v8a\lib...so
app\libs\armeabi\lib...so
app\libs\x86\lib...so
//  so也可以放在:app\src\main\jniLibs\armeabi\libJNMLib_jni.so

app\proguard-rules.pro
//	混淆配置文件
app\src
//	源码目录，包括Java源代码、资源文件、AndroidManifest文件等

app\build\
app\src\androidTest
app\src\main
app\src\test
app\src\androidTest\java
app\src\androidTest\java\com\example\administrator\cs_home_jxj1\ExampleInstrumentedTest.java

app\src\main\AndroidManifest.xml
//	1) [2.1] apk/sdk版本号设置在app\build.gradle中
//	2) roundIcon:
//		现在Android新建项目后会自动设置两个图标，icon和roundicon。
//		一个是普通图标，一个是圆形图标。比如Android自带模拟器调试时显示用的图标就是圆形图标。
切换系统语言为阿拉伯文时，actionbar布局没有变为从右向左排列。

app\src\main\java
app\src\main\res
app\src\main\java\com
app\src\main\java\com\example
app\src\main\java\com\example\administrator\cs_home_jxj1\MainActivity.java

app\src\main\res\drawable
app\src\main\res\drawable-v24
app\src\main\res\layout
app\src\main\res\mipmap-anydpi-v26
app\src\main\res\mipmap-hdpi
//	建议尺寸: 48 * 48
app\src\main\res\mipmap-mdpi
//	建议尺寸: 72 * 72
app\src\main\res\mipmap-xhdpi
//	建议尺寸: 96 * 96
app\src\main\res\mipmap-xxhdpi
//	建议尺寸: 144 * 144
app\src\main\res\mipmap-xxxhdpi
//	建议尺寸: 192 * 192

//	[3.1] Android对放在mipmap目录的图标会 忽略屏幕密度，会去尽量匹配大一点的，
//	然后系统自动对图片进行缩放，从而优化显示和节省资源（使用上面说的mipmap技术）。
//	就目前的版本来说，mipmap也没有完全取代drawable的意思，
//	为了更好的显示效果，官方建议如下类型的图片资源可以放到mipmap目录。
//		Launcher icons.
//		Action bar and tab icons.
//		Notification icons



app\src\main\res\values
app\src\main\res\drawable\ic_launcher_background.xml
app\src\main\res\drawable-v24\ic_launcher_foreground.xml
app\src\main\res\layout\activity_main.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher_round.xml
app\src\main\res\mipmap-hdpi\ic_launcher.png
app\src\main\res\mipmap-hdpi\ic_launcher_round.png
app\src\main\res\mipmap-mdpi\ic_launcher.png
app\src\main\res\mipmap-mdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher_round.png
app\src\main\res\values\colors.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml
	
app\src\main\res\raw
app\src\main\res\assets
//	res/raw和assets的区别
//	这两个目录下的文件都会被打包进APK，并且不经过任何的压缩处理。
//	assets与res/raw不同点在于，assets支持任意深度的子目录，
//	这些文件不会生成任何资源ID，只能使用AssetManager按相对的路径读取文件。
//	如需访问原始文件名和文件层次结构，则可以考虑将某些资源保存在assets目录下。

app\src\test\java\com\example\administrator\cs_home_jxj1\ExampleUnitTest.java

gradle\wrapper
gradle\wrapper\gradle-wrapper.jar
gradle\wrapper\gradle-wrapper.properties

library_new\build.gradle
library_new\libs
library_new\lint.xml
library_new\src
library_new\libs\jpush-sdk-release1.6.4.jar
library_new\src\main
library_new\src\main\AndroidManifest.xml
library_new\src\main\java
library_new\src\main\res
library_new\src\main\java...
library_new\src\main\res\layout
library_new\src\main\res\values
library_new\src\main\res\layout\slidingmenumain.xml
library_new\src\main\res\values\attrs.xml
library_new\src\main\res\values\ids.xml
