﻿
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_android_version.h \[1.1\] sdk说明
Save:node\android\study\Macro_android_version.h \[1.2\] J--4.0------14--
Save:node\android\study\Macro_android_version.h \[1.3\] J--4.2------17--
Save:node\android\study\Macro_android_version.h \[1.4\] J--4.3------18--FilesDir
Save:node\android\study\Macro_android_version.h \[1.5\] K--4.4------19--
Save:node\android\study\Macro_android_version.h \[1.6\] K--4.4W-----20--
Save:node\android\study\Macro_android_version.h \[1.7\] L--5--------21--
Save:node\android\study\Macro_android_version.h \[1.8\] L--5.1------22--
Save:node\android\study\Macro_android_version.h \[1.9\] M--6--------23--ScrollView，NETWORK_STATE
Save:node\android\study\Macro_android_version.h \[1.10\] N--7--------24--Drawables
Save:node\android\study\Macro_android_version.h \[1.11\] N--7.1------25--
Save:node\android\study\Macro_android_version.h \[1.12\] O--8--------26--Vector
Save:node\android\study\Macro_android_version.h \[1.13\] O--8.1------27--
Save:node\android\study\Macro_android_version.h \[1.14\] P--9--------28--network
Save:node\android\study\Macro_android_version.h \[1.15\] Q--10-------29--STORAGE
Save:node\android\study\Macro_android_version.h \[1.16\] 
Save:node\android\study\Macro_android_version.h \[1.17\] @TargetApi
Save:node\android\study\Macro_android_version.h \[1.18\] Build.VERSION.SDK_INT
Save:node\android\study\Macro_android_version.h \[1.19\] 
Save:node\android\study\Macro_android_version.h \[1.20\] kotlin jdk
Save:node\android\study\Macro_android_version.h \[1.21\] 
Save:node\android\study\Macro_android_version.h \[1.22\] 
Save:node\android\study\Macro_android_version.h \[1.23\] 
Save:node\android\study\Macro_android_version.h \[1.24\] 
Save:node\android\study\Macro_android_version.h \[1.25\] 
Save:node\android\study\Macro_android_version.h \[1.26\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h






[1.1] sdk说明
//版本号          API等级
2.2.x          8      
2.3-2.3.2      9      
2.3.3-2.3.4    10     ------Theme主题--------------黑底白字
3.0.x          11     ------Holo主题---------------白底黑字蓝色标题
3.1.x          12     
3.2            13     
4.0-4.0.2      14     ------DeviceDefault主题------白底黑字无边框
4.0.3-4.0.4    15     
4.1-4.1.1      16     
4.2-4.2.2      17     ------AppCompat.Light--------兼容包, 或者 com.android.support:design
4.3            18     
4.4            19     ------leanback主题(TV)
4.4W           20     ------micro主题
5              21     ------Material主题-----------白底黑字无边框
5.1            22     


[1.2] J--4.0------14--
// storage
//   API--9
<uses-permission Android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>
//   API--14, 读写/mnf/flash , /mnt/usb, /mnt/externa
<uses-permission android:name="android.permission.WRITE_MEDIA_STORAGE"/>  


//system
system\etc\permissions\platform.xml
//   group
<permission name="android.permission.WRITE_EXTERNAL_STORAGE" >
	<group gid="sdcard_rw" />
	<group gid="media_rw" />----默认没有
</permission>


[1.3] J--4.2------17--




[1.4] J--4.3------18--FilesDir
//4.3
ContextCompat.getExternalFilesDirs()
//4.4
context..getExternalFilesDirs()

[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] M--6--------23--ScrollView，NETWORK_STATE
// API--23
//  没看懂为什么要包装一个回调才不报错
onScrollChanged


// CHANGE_NETWORK_STATE 权限获取不到
//	 跳转到系统设置页去设置。
//
//		if(Build.VERSION.SDK_INT == Build.VERSION_CODES.M) {
//		     if (!Settings.System.canWrite(context)) {
//		         Intent intent = new Intent(android.provider.Settings.ACTION_MANAGE_WRITE_SETTINGS);
//		         intent.setData(Uri.parse("package:" + context.getPackageName()));
//		         intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
//		         context.startActivity(intent);
//		      } 
//		} 



// getColor
resources.getColor(R.color.black)
resources.getColor(R.color.black, null)
ContextCompat.getColor(Context context, int id);





[1.10] N--7--------24--Drawables
//Drawables
自定义Drawables类可以最终在XML中使用（仅在您的包中）。

//file
API--17 常量 MODE_WORLD_READABLE 和 MODE_WORLD_WRITEABLE 已被弃用。
从 Android N(7.0,API24) 开始，使用这些常量将会导致引发 SecurityException。
这意味着，面向 Android N 和更高版本的应用无法按名称共享私有文件
如果您的应用需要与其他应用共享私有文件，则可以将 FileProvider 与 FLAG_GRANT_READ_URI_PERMISSION配合使用



[1.11] 




[1.12] O--8--------26--Vector
//	VectorDrawable
添加了VectorDrawable自适应图




[1.13] 




[1.14] P--9--------28--network
// network
而当升级到Android API 28时，需要配置networkSecurityConfig 才能访问服务器，




[1.15] Q--10-------29--STORAGE
// STORAGE
//   AndroidManifest.xml:
requestLegacyExternalStorage = false, Filtered View, 默认, 不能直接访问公共目录
requestLegacyExternalStorage = true , Legacy View, 

//外部存储空间被分为两部分：
//	公共目录：公共目录下的文件在APP卸载后，不会删除。
Downloads、Documents、Pictures 、DCIM、Movies、Music、Ringtones等
APP可以通过SAF(System Access Framework)、MediaStore接口访问其中的文件。
只能通过 MediaStore 、 SAF 、或者其他APP提供的ContentProvider、FileProvider等访问。
//	App-specific目录：APP卸载后，数据会清除。
APP的私密目录，APP访问自己的App-specific目录时无需任何权限。


MediaStore:
// APP应该将想要保留的文件通过MediaStore接口保存到公共目录下
SAF:

参考:
https://blog.csdn.net/irizhao/article/details/94121551






[1.16] 




[1.17] @TargetApi
@SuppressLint("NewApi"）屏蔽一切新api中才能使用的方法报的android lint错误
// 在当前这个类文件中不会再提示'NewApi'这一类的错误
//
//		import android.annotation.TargetApi;
//		import android.os.Build; 
//		并且在class文件之前加入一句注解：
//		@TargetApi(Build.VERSION_CODES.HONEYCOMB)


@TargetApi() 只屏蔽某一新api中才能使用的方法报的android lint错误
// 编译器在编译程序时，遇到这个类文件就会使用括号中的库来编译程序，
// 而不是使用AndroidManifest.xml中的mininumApi指定的版本




[1.18] Build.VERSION.SDK_INT
if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
    
}else{
    
}



[1.19] 




[1.20] kotlin jdk
//kotlin
//	kotlin 1.3.21 
kotlin-stdlib-jre7 支持库更新为 kotlin-stdlib-jdk7



[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



