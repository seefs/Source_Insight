
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h \[1.1\] 设置静态墙纸后，文件保存在哪里？
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h \[1.2\] Wallpaper是由哪个程序绘制的？
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h \[1.3\] App怎样才会显示墙纸背景？




/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] 设置静态墙纸后，文件保存在哪里？
通过launcher、文件管理器、图库等应用选择的静态墙纸，设置后会由
frameworks\base\services\java\com\android\server\WallpaperManagerService.java 
保存起来。

保存的地方为WallpaperManagerService.java中定义的文件WALLPAPER_FILE中,
android各版本之间，保存路径有区别。

以android4.0.3为例：
    static final File WALLPAPER_DIR = new File(
            "/data/data/com.android.settings/files");
    static final String WALLPAPER = "wallpaper";
    static final File WALLPAPER_FILE = new File(WALLPAPER_DIR, WALLPAPER);
  保存文件的路径为 /data/data/com.android.settings/files/wallpaper
  
墙纸保存的文件格式为bmp。
执行如下adb命令,pull出来静态墙纸文件wallpaper，更改文件名后缀为bmp(更名后为wallpaper.bmp），就可以用PC机查看墙纸图片。
adb pull /data/data/com.android.settings/files/wallpaper

设置为静态墙纸后，文件夹、图库中的原图片可以删除，不影响墙纸的显示。


[1.2] Wallpaper是由哪个程序绘制的？
如果是静态墙纸，例如系统自带的墙纸,或者从文件系统、图框选择的图片。 这种情况是先通过WallpaperManager的接口把图片剪裁后保存到WallpaperManagerService。
然后由ImageWallpaper.java通过WallpaperManager的接口把通过剪裁后的墙纸图片读出来，并绘制（draw）到墙纸窗口。
如果是动态墙纸，由动态墙纸（例如MagicSmoke）自行绘制。

?

[1.3] App怎样才会显示墙纸背景？
Wallpaper是系统级别的窗口，是由WindowManagerService维护，作为特定应用的背景显示。
如果app的窗口设置了如下属性WindowManager.LayoutParams.FLAG_SHOW_WALLPAPER， 并且背景透明。WindowManagerService会在该App的窗口后面显示墙纸。



/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








