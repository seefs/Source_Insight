	
基础路径设置:
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code
//basePath = Save:node\Pythons
basePath = E:\Desktop\SGIT\Git_NB

/***********************************************************************/
//目录[Num][Ca]:
// 1.IDE
Save:node\android\study\Macro_android_error.h \[1.1\] 文件乱码问题
Save:node\android\study\Macro_android_error.h \[1.2\] 
Save:node\android\study\Macro_android_error.h \[1.3\] SDK错误
Save:node\android\study\Macro_android_error.h \[1.4\] API过时
Save:node\android\study\Macro_android_error.h \[1.5\] Lib对照..
Save:node\android\study\Macro_android_error.h \[1.6\] 
Save:node\android\study\Macro_android_error.h \[1.7\] 
Save:node\android\study\Macro_android_error.h \[1.8\] 
Save:node\android\study\Macro_android_error.h \[1.9\] 
Save:node\android\study\Macro_android_error.h \[1.10\] version总结
// 2.Gradle
Save:node\android\study\Macro_android_error.h \[2.1\] Gradle version set
Save:node\android\study\Macro_android_error.h \[2.2\] Build Tools set
Save:node\android\study\Macro_android_error.h \[2.3\] Sdk version set
Save:node\android\study\Macro_android_error.h \[2.4\] jdk set
Save:node\android\study\Macro_android_error.h \[2.5\] 
Save:node\android\study\Macro_android_error.h \[2.6\] sync 卡
Save:node\android\study\Macro_android_error.h \[2.7\] lib set
Save:node\android\study\Macro_android_error.h \[2.8\] 
Save:node\android\study\Macro_android_error.h \[2.9\] 
Save:node\android\study\Macro_android_error.h \[2.10\] 
// 3.res
Save:node\android\study\Macro_android_error.h \[3.1\] 
Save:node\android\study\Macro_android_error.h \[3.2\] *.png.png
Save:node\android\study\Macro_android_error.h \[3.3\] styles.xml
Save:node\android\study\Macro_android_error.h \[3.4\] <item>
Save:node\android\study\Macro_android_error.h \[3.5\] .9没黑边
Save:node\android\study\Macro_android_error.h \[3.6\] attribute
Save:node\android\study\Macro_android_error.h \[3.7\] 非法字符
Save:node\android\study\Macro_android_error.h \[3.8\] 
Save:node\android\study\Macro_android_error.h \[3.9\] 
Save:node\android\study\Macro_android_error.h \[3.10\] 
Save:node\android\study\Macro_android_error.h \[3.11\] 
Save:node\android\study\Macro_android_error.h \[3.12\] 
// 4.xml file
Save:node\android\study\Macro_android_error.h \[4.1\] 
Save:node\android\study\Macro_android_error.h \[4.2\] AndroidManifest.xml
Save:node\android\study\Macro_android_error.h \[4.3\] 
Save:node\android\study\Macro_android_error.h \[4.4\] 
Save:node\android\study\Macro_android_error.h \[4.4\] 
Save:node\android\study\Macro_android_error.h \[4.5\] 
// 5.build error
Save:node\android\study\Macro_android_error.h \[5.1\] WorkExecutionException
Save:node\android\study\Macro_android_error.h \[5.2\] 
Save:node\android\study\Macro_android_error.h \[5.3\] 
Save:node\android\study\Macro_android_error.h \[5.4\] 
Save:node\android\study\Macro_android_error.h \[5.5\] 
// 6.import
Save:node\android\study\Macro_android_error.h \[6.1\] Could not find method google() ...
Save:node\android\study\Macro_android_error.h \[6.2\] org.apache.http..
Save:node\android\study\Macro_android_error.h \[6.3\] 包重复
Save:node\android\study\Macro_android_error.h \[6.4\] 
Save:node\android\study\Macro_android_error.h \[6.5\] 
// 7.
Save:node\android\study\Macro_android_error.h \[7.1\] 
Save:node\android\study\Macro_android_error.h \[7.2\] 
Save:node\android\study\Macro_android_error.h \[7.3\] 
Save:node\android\study\Macro_android_error.h \[7.4\] 
Save:node\android\study\Macro_android_error.h \[7.5\] 



[1.1] 文件乱码问题
//1、IDE乱码
File > Settings > Appearance & Behavior > Appearance，
//	将default fonts改为Microsoft YaHei（改成其它SimHei,SimSun也行，但个人觉得雅黑好看些）。
//2、代码里设置中文，到了真机上TextView之类的控件上就显示为乱码，如：xxx.setText("中文")。
//	我现在加入的这个项目是由原来Eclipse创建的，一旦有乱码问题，同事就说把Properties里的编码改成GBK就可以了。
//	先不论他的对错，但他这么一改确实就不会乱码了，但由于我用的是Android Studio，那我该怎么办呢？
File > Settings > Editor > File Encodings 
//	Project Encoding改为UTF-8，
//	为了统一规范，我也将其它Encoding项也设置为UTF-8了。
选择“Apply”应用刚才的更改，然后重启Android Studio
//3、Gradle 乱码
//	最后，如果有朋友遇到Gradle提示中文乱码的问题，可以参考http://blog.csdn.net/sljjyy/article/details/11976099，我目前没有遇到过。




[1.2] 




[1.3] SDK错误
# Please select Android SDK
//Ctrl + Alt +Shift +S，打开Project Structure，选中主modele app ，
//把 Source Compatibility 选中1.8或项目以前用的jdk版本，
//Target Compatibility同样操作，点击右下角ok，项目自动编译，也能解决。

# 
//错误: Cannot parse SDK Android API 19 Platform:
//错误:Android Source Generator: Cannot parse SDK Android API 19 Platform: 
//	build target is not specified




[1.4] API过时
API过时: FloatMath.floor
//	使用 Math.floor 代替 FloatMath.floor 即可

错误: 找不到符号 Canvas.ALL_SAVE_FLAG
//	先删了其他的，只留:
//	Canvas.ALL_SAVE_FLAG



[1.5] Lib对照..
// Lib对照
Save:Help\LangInfo\Macro_Info_Android_Lib.h
// 测试:
implementation 'com.android.support:appcompat-v7:25.+'
implementation 'com.android.support:support-v4:25.+'


//如有其他未列出的依赖，请参考
https://developer.android.google.cn/topic/libraries/support-library/refactor
// ..
https://developer.android.google.cn/jetpack/androidx/migrate/class-mappings

#未换:
androidx.appcompat.widget.RecyclerView
androidx.recyclerview.widget.RecyclerView




[1.6] 




[1.7] Emulator
Emulator: dsound: Could not initialize DirectSoundCapture
// 开启电脑录音设备:
//	https://jingyan.baidu.com/article/a65957f434890a24e67f9bfc.html


//Emulator: installation failed
installation failed with message failed to finalize session
//	1.清理项目之前编译好的.class文件,重新编译文件
点击build->clean project ,然后再点击 rebuild project。

###
Intel HAXM is required to run this AVD.
HAXM device is not found.

Enable VT-x in your BIOS security settings, ensure that HAXM is installed properly. Try disabling 3rd party security software if the problem still occurs.




[1.8] 




[1.9] 




[1.10] version总结

gradle3.0.0->Java8, implement

AndroidX->AS3.2.0, gradle-4.6, SDK9.0(API28)




[2.1] Gradle version set
# 1)当前最新--3.5.2
build.gradle
//	classpath 'com.android.tools.build:gradle:3.1.2'
//  classpath 'com.android.tools.build:gradle:3.5.2'

# 2)当前最新--5.4.1
gradle\wrapper\gradle-wrapper.properties
//distributionUrl=https\://services.gradle.org/distributions/gradle-5.4.1-all.zip

# https 改 http
gradle dependency cache may be corrupt

# 3)
gradle.properties
//	android.useAndroidX=true
//	android.enableJetifier=true



[2.2] Build Tools set
#
ERROR: Failed to find Build Tools revision 23.0.2


#
ERROR: Could not find com.android.tools.build:gradle:3.5.2.
Searched in the following locations:
# 添加google()
build.gradle
//google()


[2.3] Sdk version set
app\build.gradle
# 
//    compileSdkVersion 29
//    buildToolsVersion "29.0.2"
# 
//        targetSdkVersion 29
#
// sdk info:
//		android10.0		29	4	Installed
//		android9.0		28	6	Installed
//		android8.1		27	3	Not installed
//		android8.0		26	2	Not installed
//		android7.1		25	3	Not installed
//		android7.0		24	2	Not installed
//		android6.0		23	3	Installed
//		android5.1		22	2	Not installed
//		android5.0		21	2	Not installed
//		android4.4w		20	2	Not installed
//		android4.4		19	4	Not installed

	


[2.4] jdk set
# 
compileOptions {
	sourceCompatibility = 1.8
	targetCompatibility = 1.8
}



[2.5] 


[2.6] sync 卡
# Configure build 卡
#   加入 maven
build.gradle
#
buildscript {
	repositories {
        maven{ url 'http://maven.aliyun.com/nexus/content/groups/public/'}
        google()
	}
}

allprojects {
	repositories {
        maven{ url 'http://maven.aliyun.com/nexus/content/groups/public/'}
        google()
	}
}



[2.7] lib set
//ERROR: Failed to resolve: cardview-v7

app\build.gradle
Swipebacklayout\build.gradle
# 

// 更新第3方库:
implementation 'com.airbnb.android:lottie:1.5.2'
//
implementation 'com.airbnb.android:lottie:2.7.0'



[2.8] 


[2.9] 




[2.10] 





[3.1] 

[3.2] *.png.png
*.png.png格式报错


[3.3] styles.xml
Error: Duplicate resources
//		AppBaseTheme 重复

[3.4] <item>
<item> inner element must either be a resource reference or empty.
//		Android Studio 3.0以后尤其3.2版本对资源文件命名校验更严格
//		 <item name="xxx" type="id">false</item>
//	改为 <item name="xxx" type="id"/>
//	去掉false就行了

[3.5] .9没黑边
//	Error:top-left corner pixel must be either opaque white or transpare

[3.6] attribute
error: attribute 'xxx:xxx' not found
//	先删了代码，原因没找到


[3.7] 非法字符
非法字符: '\ufeff'
//	Error:(1, 1) 错误: 非法字符: '\ufeff'
//	Error:(1, 10) 错误: 需要class, interface或enum
//	经过查看，该文件采用的编码方式为UTF-8带BOM的格式，随后，使用NotePad++打开该文件，
//	并将文件格式改为以UTF-8无BOM格式编码（如图1：选择格式第二项）并保存之后问题得以解决。

[3.8] 

[3.9] 

[3.10] 

[3.11] 

[3.12] 





[4.1] 


[4.2] AndroidManifest.xml
//错误: AndroidManifest.xml doesn''t exist
AndroidManifest.xml doesn''t exist or has incorrect root tag
//1. 解决方法：
//	点击 Android Studio 中的 Sync project with Gradle files 按钮。
//	https://blog.csdn.net/doris_d/article/details/46413591

//2.试过没用：
//File->Settings->Plugins->取消Android Support的禁用即可。

AndroidManifest.xml重复
//	将重复的activity设置去掉一个

[4.3] 

 
[4.4] 


[4.4] 


[4.5] 



[5.1] WorkExecutionException
DefaultWorkerExecutor$WorkExecutionException
//android节点下增加对vector的支持
//
//android {
//	defaultConfig {
//		vectorDrawables.useSupportLibrary = true
//	}
//}




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 



// 导入源码
[6.1] Could not find method google() ...
Could not find method google() for arguments [] on repository container.
//	替换gradle-wrapper.properties里面
gradle-wrapper.properties

distributionUrl=https\://services.gradle.org/distributions/gradle-4.1-all.zip

	
	
[6.2] org.apache.http..
	错误: 程序包org.apache.http不存在
//	1) 错误: 程序包org.apache.http不存在
app\build.gradle
//	buildToolsVersion "28.0.3"
//	useLibrary 'org.apache.http.legacy'

//	2) 错误: 程序包junit.framework不存在
//	Assert.assertTrue(...);
//	意思是不要使用assert，因为它并不可靠，建议使用
//	### BuildConfig会根据你的动作自动更新DEBUG的值
//	if(BuildConfig.DEBUG && boolParse){
	//do something for assert aim
//	}
	
[6.3] 包重复
包重复:app:transformDexArchiveWithExternalLibsDexMergerForDebug FAILED
//	AGPBI: {"kind":"error","text":"Program type already present: 
//		com.loopj.android.http.AsyncHttpClient$3","sources":[{}],"tool":"D8"}
//	:app:transformDexArchiveWithExternalLibsDexMergerForDebug FAILED
//	v7->v4

//	执行命令：(也没用)
//	gradlew -q app:dependencies

//	排队: design
//	implementation('com.android.support:customtabs:27.1.0', {
//	    exclude group: 'com.loopj.android.http', module: 'AsyncHttpClient'
//	})
	
[6.4] 
	
	
[6.5] 
	
	

[6.6] 




[6.7] 




[6.8] 




[6.9] 




[6.10] 



// 8.
Save:node\android\study\Macro_android_error.h \[8.1\] 
Save:node\android\study\Macro_android_error.h \[8.2\] 
Save:node\android\study\Macro_android_error.h \[8.3\] 
Save:node\android\study\Macro_android_error.h \[8.4\] 
Save:node\android\study\Macro_android_error.h \[8.5\] 
// 9.
Save:node\android\study\Macro_android_error.h \[9.1\] 
Save:node\android\study\Macro_android_error.h \[9.2\] 
Save:node\android\study\Macro_android_error.h \[9.3\] 
Save:node\android\study\Macro_android_error.h \[9.4\] 
Save:node\android\study\Macro_android_error.h \[9.5\] 



[7.1] 




[7.2] 




[7.3] 




[7.4] 




[7.5] 




[7.6] 




[7.7] 




[7.8] 




[7.9] 




[7.10] 



[8.1] 
[8.2] 
[8.3] 
[8.4] 
[8.5] 
[8.6] 
[8.7] 
[8.8] 
[8.9] 
[8.10] 



[9.1] 
[9.2] 
[9.3] 
[9.4] 
[9.5] 
[9.6] 
[9.7] 
[9.8] 
[9.9] 
[9.10] 



