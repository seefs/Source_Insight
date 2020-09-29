	
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
Save:node\android\study\Macro_android_error.h \[1.8\] 内存泄露
Save:node\android\study\Macro_android_error.h \[1.9\] AsyncTask极限
Save:node\android\study\Macro_android_error.h \[1.10\] version总结
Save:node\android\study\Macro_android_error.h \[1.11\] 
Save:node\android\study\Macro_android_error.h \[1.12\] 
Save:node\android\study\Macro_android_error.h \[1.13\] AndroidManifest.xml
Save:node\android\study\Macro_android_error.h \[1.14\] WorkExecutionException
Save:node\android\study\Macro_android_error.h \[1.15\] 
Save:node\android\study\Macro_android_error.h \[1.16\] 包不存在
Save:node\android\study\Macro_android_error.h \[1.17\] 包重复
Save:node\android\study\Macro_android_error.h \[1.18\] 
Save:node\android\study\Macro_android_error.h \[1.19\] 
Save:node\android\study\Macro_android_error.h \[1.20\] 
// 2.res
Save:node\android\study\Macro_android_error.h \[2.1\] 
Save:node\android\study\Macro_android_error.h \[2.2\] *.png.png
Save:node\android\study\Macro_android_error.h \[2.3\] styles.xml
Save:node\android\study\Macro_android_error.h \[2.4\] <item>
Save:node\android\study\Macro_android_error.h \[2.5\] .9没黑边
Save:node\android\study\Macro_android_error.h \[2.6\] attribute
Save:node\android\study\Macro_android_error.h \[2.7\] 非法字符
Save:node\android\study\Macro_android_error.h \[2.8\] logo不刷新
Save:node\android\study\Macro_android_error.h \[2.9\] 
Save:node\android\study\Macro_android_error.h \[2.10\] 
Save:node\android\study\Macro_android_error.h \[2.11\] 
Save:node\android\study\Macro_android_error.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h



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




[1.8] 内存泄露
//内存泄露
android thread内存泄露
非静态匿名类未回收


// 原因:
1.延时操作, handler
3.Fragment, 可能会在其依附的Activity前调用getActivity()
5.Fragment, 销毁

// 办法:
1.handler.removeCallbacksAndMessages(null)
2.弱引用，目的就是为了可以在Android回收内存的时候，可以直接回收掉。
  强引用---软引用---弱引用---虚引用
3.Fragment, onAttach(Context context)
4.多Handler , 传递
5.Fragment, if(!isVisible) return




[1.9] AsyncTask极限
AsyncTask用的是线程池机制，容量是128，最多同时运行5个core线程




[1.10] version总结

gradle3.0.0->Java8, implement

AndroidX->AS3.2.0, gradle-4.6, SDK9.0(API28)



[1.11] 




[1.12] 




[1.13] AndroidManifest.xml
//错误: AndroidManifest.xml doesn''t exist
AndroidManifest.xml doesn''t exist or has incorrect root tag
//1. 解决方法：
//	点击 Android Studio 中的 Sync project with Gradle files 按钮。
//	https://blog.csdn.net/doris_d/article/details/46413591

//2.试过没用：
//File->Settings->Plugins->取消Android Support的禁用即可。

AndroidManifest.xml重复
//	将重复的activity设置去掉一个




[1.14] WorkExecutionException
DefaultWorkerExecutor$WorkExecutionException
//android节点下增加对vector的支持
//
//android {
//	defaultConfig {
//		vectorDrawables.useSupportLibrary = true
//	}
//}





[1.15] 




[1.16] 包不存在

//	2) 错误: 程序包junit.framework不存在
//	Assert.assertTrue(...);
//	意思是不要使用assert，因为它并不可靠，建议使用
//	### BuildConfig会根据你的动作自动更新DEBUG的值
//	if(BuildConfig.DEBUG && boolParse){
	//do something for assert aim
//	}



[1.17] 包重复
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




[1.18] 




[1.19] 




[1.20] 




[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 







[2.1] 

[2.2] *.png.png
*.png.png格式报错


[2.3] styles.xml
Error: Duplicate resources
//		AppBaseTheme 重复

[2.4] <item>
<item> inner element must either be a resource reference or empty.
//		Android Studio 3.0以后尤其3.2版本对资源文件命名校验更严格
//		 <item name="xxx" type="id">false</item>
//	改为 <item name="xxx" type="id"/>
//	去掉false就行了

[2.5] .9没黑边
//	Error:top-left corner pixel must be either opaque white or transpare

[2.6] attribute
error: attribute 'xxx:xxx' not found
//	先删了代码，原因没找到


[2.7] 非法字符
非法字符: '\ufeff'
//	Error:(1, 1) 错误: 非法字符: '\ufeff'
//	Error:(1, 10) 错误: 需要class, interface或enum
//	经过查看，该文件采用的编码方式为UTF-8带BOM的格式，随后，使用NotePad++打开该文件，
//	并将文件格式改为以UTF-8无BOM格式编码（如图1：选择格式第二项）并保存之后问题得以解决。

[2.8] 

[2.9] 

[2.10] 

[2.11] 

[2.12] 





