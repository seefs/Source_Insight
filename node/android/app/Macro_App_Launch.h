
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
//MTK-展讯修改笔记
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.0\]  安装图形化界面：
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.1\] .如何设置Launcher2、Launcher3的壁纸同步
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.2\] .如何修改使Launcher2中文件夹图标名称与应用名称保持水平
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.3\] android4.4 Launcher中如何隐藏主界面应用图标的应用名称？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.4\] 如何在sprdLauncher2中隐藏一个应用图标？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.5\] 如果实现Launcher2中菜单列表背景半透明效果？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.6\] 如何让launcher不被一键清理？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.7\] .0LOCAL_OVERRIDES_PACKAGES的作用
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.8\] 如何提升Launcher中盒子等滑动特效的流畅度
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.9\] .如何把SprdLaucher2的hotseat图标底下把对应的应用名称item显示出来？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.10\] //如何修改launcher中应用图标的行数和列数？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.11\] 如何修改launcher的屏幕数
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.12\] 如何添加壁纸资源到壁纸列表?
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.13\] 如何更换launcher中点击应用的高亮背景
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.14\] 如何配置launcher使用大内存？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.15\] .如何更改系统默认墙纸
//MTK-展讯修改笔记
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.1\] .如何设置默认页
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.2\] 如何隐藏launcher3中的搜索框
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.3\] 如何调整原生Launcher3主界面的search框的大小？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.4\] 让主菜单部分应用按指定顺序排在前面？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.5\] 如何确定待机HOME界面布局使用的是哪个default_workspace文件？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.6\] 如何替换第三方应用在launcher上显示的图标？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.7\] //如何去掉Launcher3的开机引导页面？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.8\] 为何Launcher3设置一些壁纸后，壁纸显示比预览图模糊？
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.9\] 6.0平台上Launcher3自带的壁纸路径是什么？

//apk 模块 -- cmd:
Save:SI\node\9820e\Macro_9820e_Sys_Build.h \[3.1\] apk 模块 -- cmd


/***********************************************************************/

MTK-展讯修改笔记
[1.0]  安装图形化界面：
sudo apt-get install git-core git-gui



[1.1] .如何设置Launcher2、Launcher3的壁纸同步
//由于SprdLauncher1和SprdLauncher2中支持分开设置主屏壁纸和锁屏壁纸，
//所以锁屏在获取壁纸的时候，会获取对齐的锁屏壁纸类型。
//目前原生Launcher2和原生Launcher3不支持分开设置，
//所以要保证原生Launcher2和原生Launcher3设置壁纸的时候，锁屏跟主屏保持一致，
//只需要锁屏在获取壁纸的时候，获取的壁纸类型也是主屏壁纸类型。

//修改如下：
//请定位到KeyguardViewManager.java中的maybeCreateKeyguardLocked方法：
frameworks\base\packages\Keyguard\src\com\android\keyguard\KeyguardViewManager.java WALLPAPER_LOCKSCREEN_TYPE
//	Drawable drawable = wm.getDrawable(WallpaperInfo.WALLPAPER_LOCKSCREEN_TYPE);
//	mCustomWallPaper = drawable;
把Drawable drawable = wm.getDrawable(WallpaperInfo.WALLPAPER_LOCKSCREEN_TYPE);
修改为Drawable drawable = wm.getDrawable(WallpaperInfo.WALLPAPER_MAINMENU_TYPE); 


[1.2] .如何修改使Launcher2中文件夹图标名称与应用名称保持水平
请定为到/packages/apps/Launcher2/res/values/dimens.xml文件中
packages/apps/Launcher2/res/values/dimens.xml folder_icon_padding_top
调整下面的值即可：
//  <dimen name="folder_icon_padding_top">2dp</dimen>


[1.3] android4.4 Launcher中如何隐藏主界面应用图标的应用名称？
以sprdLauncher2举例：
请定位到vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/CellLayout.java文件:
vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/CellLayout.java addViewToCellLayout
然后定位到addViewToCellLayout方法：
//        if (child instanceof BubbleTextView) {
//            BubbleTextView bubbleChild = (BubbleTextView) child;
//            bubbleChild.setTextVisibility(!mIsHotseat);
//        }
修改为：
//        if (child instanceof BubbleTextView) {
//            BubbleTextView bubbleChild = (BubbleTextView) child;
//            bubbleChild.setTextVisibility(false);
//        }

		
[1.4] 如何在sprdLauncher2中隐藏一个应用图标？
//以隐藏百度地图为例，修改如下：
//请定位到/vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/LauncherModel.java文件，
//	查找verifyApplications方法：
vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/LauncherModel.java void verifyApplications()
//    if (tmpInfos.isEmpty()) {
//        added.add(app);
//         }
修改为：
//    if (tmpInfos.isEmpty()) {
//        ComponentName cn = app.componentName;
//	     Log.e(TAG,"cn = "+cn);
//	     if(cn != null && !cn.equals("")){
//	        if(!cn.toString().equals("ComponentInfo{com.baidu.BaiduMap/com.baidu.BaiduMap.BaiduMap}")){
//	                  added.add(app);
//	        }
//	     }
//
//     }


[1.5] 如果实现Launcher2中菜单列表背景半透明效果？
//Android4.4中的Launcher2默认没有开启菜单列表背景透明效果，纯黑色背景效果不是太好，如果需要开启菜单背景透明效果，可以参考如下修改来实现：
packages/apps/Launcher2/res/layout/apps_customize_pane.xml AppsCustomizeTabHost

diff --git a/packages/apps/Launcher2/res/layout/apps_customize_pane.xml b/packages/apps/Launcher2/res/layout/apps_customize_pane.xml
index a9d7ded..70ee6b5 100644
--- a/packages/apps/Launcher2/res/layout/apps_customize_pane.xml
+++ b/packages/apps/Launcher2/res/layout/apps_customize_pane.xml
@@ -16,7 +16,7 @@
 <com.android.launcher2.AppsCustomizeTabHost
     xmlns:android="http://schemas.android.com/apk/res/android"
     xmlns:launcher="http://schemas.android.com/apk/res/com.android.launcher"
-    android:background="#FF000000">
+    android:background="#00000000">
     <LinearLayout
         android:id="@+id/apps_customize_content"
         android:orientation="vertical"
@@ -74,7 +74,7 @@
                 android:id="@+id/animation_buffer"
                 android:layout_width="match_parent"
                 android:layout_height="match_parent"
-                android:background="#FF000000"
+                android:background="#00000000"
                 android:visibility="gone" />

             <include
////////////////////////////////////
packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java void^onFinishInflate()
diff --git a/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java b/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java
index 225b056..076b14d 100644
--- a/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java
+++ b/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java
@@ -32,6 +32,7 @@ import android.widget.LinearLayout;
 import android.widget.TabHost;
 import android.widget.TabWidget;
 import android.widget.TextView;
+import android.graphics.Color;

 import com.android.launcher.R;

@@ -138,6 +139,7 @@ public class AppsCustomizeTabHost extends TabHost implements LauncherTransitiona

         // Hide the tab bar until we measure
         mTabsContainer.setAlpha(0f);
+        mContent.setBackgroundColor(Color.argb(100, 0, 0, 0));
     }

     @Override
////////////////////////////////////
packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java void^dispatchDraw( )
diff --git a/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java b/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java
index 024bb37..cbc3a26 100644
--- a/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java
+++ b/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java
@@ -549,6 +549,7 @@ public class CellLayout extends ViewGroup {
             p.setXfermode(sAddBlendMode);
             mOverScrollForegroundDrawable.draw(canvas);
             p.setXfermode(null);
+            p.setDither(true);
         }
     }

////////////////////////////////////
packages/apps/Launcher2/src/com/android/launcher2/Launcher.java void^disableWallpaperIfInAllApps()
diff --git a/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java b/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java
index 56aa73b..51024f9 100644
--- a/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java
+++ b/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java
@@ -2475,7 +2475,7 @@ public final class Launcher extends Activity
         if (isAllAppsVisible()) {
             if (mAppsCustomizeTabHost != null &&
                     !mAppsCustomizeTabHost.isTransitioning()) {
-                updateWallpaperVisibility(false);
+                updateWallpaperVisibility(true);
             }
         }
     }
@@ -2648,7 +2648,7 @@ public final class Launcher extends Activity
                         hideDockDivider();
                     }
                     if (!animationCancelled) {
-                        updateWallpaperVisibility(false);
+                        updateWallpaperVisibility(true);
                     }

                     // Hide the search bar
@@ -2728,7 +2728,7 @@ public final class Launcher extends Activity
             dispatchOnLauncherTransitionPrepare(toView, animated, false);
             dispatchOnLauncherTransitionStart(toView, animated, false);
             dispatchOnLauncherTransitionEnd(toView, animated, false);
-            updateWallpaperVisibility(false);
+            updateWallpaperVisibility(true);
         }
     }

	 
[1.6] 如何让launcher不被一键清理？
一键清理应用的目录：
在packages\apps\RamOptimizer\res\values\arrays.xml文件里有对不需要清理的应用进行配置：
packages\apps\RamOptimizer\res\values\arrays.xml recent_keep_app
//    <!-- the name of app that we want to kill -->
//    <string-array name="recent_keep_app" translatable="false">
//	     <item>com.sprd.ramoptimizer</item>
//	     <item>com.android.sprdlauncher2</item>
//
//	      ...
//
//    </string-array>
	
packages\apps\RamOptimizer\res\values\arrays.xml recent_keep_service
//    <!-- the name of service that we want to kill -->
//    <string-array name="recent_keep_service" translatable="false">
//        <item>com.sprd.ramoptimizer</item>
//        <item>com.sprd.videoswallpapers</item>
//    </string-array>

如果想让自己的应用不被清理，把包名添加到recent_keep_app数组即可。


[1.7] .0LOCAL_OVERRIDES_PACKAGES的作用
关于android.mk中的LOCAL_OVERRIDES_PACKAGES，此变量可以使定义的其它模块无法编译生成到系统中,使用本模块作为替换。
比如在SprdLauncher2的android.mk里
定义了 LOCAL_OVERRIDES_PACKAGES := Launcher3
在使用了SprdLauncher2的工程里就无法集成原生的 Launcher3。
vendor\sprd\UniverseUI\SprdLauncher2\android.mk LOCAL_OVERRIDES_PACKAGES
//		LOCAL_PACKAGE_NAME := SprdLauncher2
//		#LOCAL_CERTIFICATE := shared
//		LOCAL_CERTIFICATE := platform
//		LOCAL_OVERRIDES_PACKAGES := Launcher3


[1.8] 如何提升Launcher中盒子等滑动特效的流畅度
Launcher中滑动特效的文件在：
vendor\sprd\UniverseUI\SprdLauncher1\src\com\sprd\sprdlauncher1\effect\CrossEffect.java setAlpha
vendor\sprd\UniverseUI\SprdLauncher2\src\com\sprd\sprdlauncher2\effect\CrossEffect.java setAlpha
//	float mAlpha = 1.0F - Math.abs(offset);
//	transformation.setAlpha(mAlpha);
//	// viewiew.setAlpha(mAlpha);

盒子等特效相比于page特效主要慢在ALPHA绘制上，因为ALPHA绘制本身耗时就比较长，所以：
如果想提升滑动特效流畅度，请删除特效中getTransformationMatrix函数中关于ALPHA变化的代码：
如：
CrossEffect.java中：

去掉以下代码：
        float absOffset = Math.abs(offset);
        float mAlpha = 1.0F - absOffset * 0.4f;
        view.setAlpha(mAlpha);

		
[1.9] .如何把SprdLaucher2的hotseat图标底下把对应的应用名称item显示出来？
//1.代码调整：
vendor\sprd\UniverseUI\SprdLauncher2\src\com\android\sprdlauncher2\CellLayout.java bubbleChild
//	BubbleTextView bubbleChild = (BubbleTextView) child;
//	bubbleChild.setTextVisibility(!mIsHotseat);
//			改为 bubbleChild.setTextVisibility(true);

vendor\sprd\UniverseUI\SprdLauncher2\src\com\android\sprdlauncher2\Workspace.java (FolderIcon)^child
//	 //Hide folder title in the hotseat
//	if (child instanceof FolderIcon) {
//		((FolderIcon) child).setTextVisible(false);
//	}
//	改为 ((FolderIcon)child).setTextVisible(true);



//2.修改hotseat.xml布局文件：
packages\apps\Launcher2\res\layout-port\hotseat.xml
packages\apps\Launcher3\res\layout\hotseat.xml
vendor\sprd\UniverseUI\SprdLauncher1\res\layout\hotseat.xml
vendor\sprd\UniverseUI\SprdLauncher2\res\layout\hotseat.xml
//	  根据需要调整，例如：
//
//	修改为
//	<com.android.sprdlauncher2.Hotseat
//	    xmlns:android="http://schemas.android.com/apk/res/android"
//	    xmlns:launcher="http://schemas.android.com/apk/res-auto/com.android.sprdlauncher2">
//	    <com.android.sprdlauncher2.CellLayout
//	        android:id="@+id/layout"
//	        android:layout_marginBottom="XXXdp"    //修改hotseat距离底部的位置
//	        android:layout_width="wrap_content"
//	        android:layout_height="XXXdp"  // hotseat高度
//	        android:layout_gravity="center" />
//	</com.android.sprdlauncher2.Hotseat>


[1.10] //如何修改launcher中应用图标的行数和列数？
//横屏：
//packages\apps\Launcher2\res\layout-land\workspace_screen.xml
//
//竖屏
//packages\apps\Launcher2\res\layout-port\workspace_screen.xml

//packages\apps\Launcher2\res\layout\workspace_screen.xml
//packages\apps\Launcher3\res\layout\workspace_screen.xml
//vendor\sprd\UniverseUI\SprdLauncher2\res\layout\workspace_screen.xml
//
//修改里面格子的数量
//    launcher:shortAxisCells=”4″
//    launcher:longAxisCells=”4″
//
//还可以调整一下格子们与左右和上下的边距
//    launcher:longAxisStartPadding=”65dip”
//    launcher:longAxisEndPadding=”65dip”
//    launcher:shortAxisStartPadding=”0dip”
//    launcher:shortAxisEndPadding=”0dip”


[1.11] 如何修改launcher的屏幕数
首先，在Launcher.java代码中修改总的页数和默认显示页：
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java SCREEN_COUNT
//    static final int SCREEN_COUNT = 5;
//    static final int DEFAULT_SCREEN = 2;//第一页是从0开始计数，这里是把第三个页面作为默认首页  
第一个是定义屏幕个数，第一个参数是默认的首页。

其次：还需要修改 launcher.xml
packages\apps\Launcher2\res\layout-port\launcher.xml
//    <!-- The workspace contains 5 screens of cells -->
//    <com.android.launcher2.Workspace
//        android:id="@+id/workspace"
//        android:layout_width="match_parent"
//        android:layout_height="match_parent"
//        android:scrollbars="horizontal"
//        android:fadeScrollbars="true"
//        launcher:defaultScreen="2">
//        <include android:id="@+id/cell1" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell2" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell3" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell4" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell5" layout="@layout/workspace_screen" />
//    </com.android.launcher2.Workspace>

导入了五个workspace_screen，在这里，参照上面修改的参数，添加或者删除workspace_screen。
并且 launcher:defaultScreen="2">  定义的defaultScreen.要修改成对应的值。

另外，修改Workspace.java中获取不到值时的默认首页，确保异常情况下默认首页一致 
packages\apps\Launcher3\src\com\android\launcher3\Workspace.java  R.styleable.Workspace_defaultScreen
//        TypedArray a = context.obtainStyledAttributes(attrs, R.styleable.Workspace, defStyle, 0);
//        mDefaultScreen = a.getInt(R.styleable.Workspace_defaultScreen, 1);

最后，对 res/xml文件中default_workspace.xml做出相应的修改。这里面是workspace初始显示的icon和widget。
packages\apps\Launcher2\res\xml\default_workspace.xml
packages\apps\Launcher3\res\xml\default_workspace.xml
vendor\sprd\operator\cmcc\nowcn\overlay\vendor\sprd\UniverseUI\SprdLauncher1\res\xml\default_workspace.xml
vendor\sprd\operator\cmcc\specA\overlay\vendor\sprd\UniverseUI\SprdLauncher1\res\xml\default_workspace.xml
vendor\sprd\operator\cucc\specA\overlay\vendor\sprd\UniverseUI\SprdLauncher2\res\xml\default_workspace.xml
vendor\sprd\UniverseUI\SprdLauncher1\res\xml\default_workspace.xml
vendor\sprd\UniverseUI\SprdLauncher2\res\xml\default_workspace.xml




[1.12] 如何添加壁纸资源到壁纸列表?
解决： 以wallpaper_lake.jpg为例

//1.拷贝壁纸图片 wallpaper_lake.jpg和wallpaper_lake_small.jpg 到相应目录
packages/apps/Launcher2/res/drawable-对应像素/wallpaper_lake.jpg
packages/apps/Launcher2/res/drawable-对应像素/wallpaper_lake_small.jpg

//2.在 res/values-hdpi/wallpapers.xml 中添加wallpaper_lake条目
packages\apps\Launcher2\res\values\wallpapers.xml
packages\apps\Launcher3\res\values-nodpi\wallpapers.xml
//     <string-array name="wallpapers" translatable="false">
//+        <item>wallpaper_lake</item>
//          ..

此时，长按桌面，选择壁纸选项，就会在壁纸列表看到一个新的壁纸。


[1.13] 如何更换launcher中点击应用的高亮背景
//workspace（idle）点击快捷图标的高亮背景为：
packages/apps/Launcher2/res/drawable/pressed_application_background.9.png

//workspace（idle）方向键选中的高亮背景：
packages/apps/Launcher2/res/drawable-hdpi/focused_application_background.9.png

//Mainmenu（主菜单）点击应用的高亮背景为：
packages/apps/Launcher2/res/drawable-hdpi/background_icon.9.png

默认的高亮背景是点九格式的png文件，这样可以适应不同的布局大小，也可以设置不是点九的图片！
更换上面的图片实现自定义的背景


[1.14] 如何配置launcher使用大内存？
在launcher的AndroidManifest.xml中可以配置launcher使用大的堆内存，这样可以在一定程度上避免内存不足出现的out of memory错误。配置launcher使用大内存需要更改的属性名称为android:largeHeap。如下所示：
packages\apps\Launcher2\AndroidManifest.xml android:largeHeap
packages\apps\Launcher3\AndroidManifest.xml android:largeHeap
//    <application
//        android:name="com.android.launcher2.LauncherApplication"
//        android:label="@string/application_name"
//        android:icon="@drawable/ic_launcher_home"
//        android:hardwareAccelerated="@bool/config_hardwareAccelerated"
//        android:largeHeap="@bool/config_largeHeap">
        
可以在values文件夹的config.xml中修改largeHeap的属性值。如下所示：
packages\apps\Launcher3\res\values\config.xml config_largeHeap
//	<bool name="config_largeHeap">false</bool>


[1.15] .如何更改系统默认墙纸
默认墙纸位置在
frameworks/base/core/res/res/drawable-nodpi/default_wallpaper.jpg

不同分辨率的项目在对应的drawable目录下。 

更改了默认墙纸后，为了与墙纸设置里面待选的墙纸保持一致，最好同步修改对应launcher下的墙纸。 

launcher下墙纸位置：
packages/apps/Launcher2/res/drawable-nodpi/  



/***********************************************************************/
/****************************** code2 **********************************/
/***********************************************************************/

[2.1] .如何设置默认页
res/values/config.xml
packages\apps\Launcher3\res\values\config.xml config_workspaceDefaultScreen
// 	<integer name="config_workspaceDefaultScreen">0</integer>

在Launcher3 桌面，不管在哪一页，按HOME 键，会回到默认页。


[2.2] 如何隐藏launcher3中的搜索框
1. 在Launcher3/src/com/android/launcher3/Launcher.java中
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java updateGlobalIcons()
注释updateGlobalIcons()方法调用，共两处。
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java View^getQsbBar()
//	public View getQsbBar() {
//	    if (mQsbBar == null) {
//	        mQsbBar = mInflater.inflate(R.layout.search_bar, mSearchDropTargetBar, false);
//	-             mSearchDropTargetBar.addView(mQsbBar);
//	    }
//	+        mQsbBar.setVisibility(View.GONE);
//	    return mQsbBar;
//	}

//	@Override
//	public void bindSearchablesChanged() { //注释该方法内容
//	/*        boolean searchVisible = updateGlobalSearchIcon();
//	    boolean voiceVisible = updateVoiceSearchIcon(searchVisible);
//	    if (mSearchDropTargetBar != null) {
//	        mSearchDropTargetBar.onSearchPackagesChanged(searchVisible, voiceVisible);
//	    }
//	*/
//	}

2. 在Launcher3/src/com/android/launcher3/DynamicGrid.java中   
packages\apps\Launcher3\src\com\android\launcher3\DynamicGrid.java launcher.getQsbBar()

    // Layout the search bar
    //注释如下内容
/*        View qsbBar = launcher.getQsbBar();
    LayoutParams vglp = qsbBar.getLayoutParams();
    vglp.width = LayoutParams.MATCH_PARENT;
    vglp.height = LayoutParams.MATCH_PARENT;
    qsbBar.setLayoutParams(vglp);
*/

3. 在Launcher3/res/values/dimens.xml中
packages\apps\Launcher3\res\values\dimens.xml dynamic_grid_search_bar_height
//    -    <dimen name="dynamic_grid_search_bar_height">48dp</dimen>
//    +    <dimen name="dynamic_grid_search_bar_height">18dp</dimen>

重新编译后即可看到效果。


[2.3] 如何调整原生Launcher3主界面的search框的大小？
修改如下：
定位打/packages/apps/Launcher3/res/values/dimens.xml。
packages\apps\Launcher3\res\values\dimens.xml dynamic_grid_edge_margin
//	<dimen name="dynamic_grid_edge_margin">3dp</dimen>//修改这个可以调整search框距离顶部距离。
//	<dimen name="dynamic_grid_search_bar_max_width">500dp</dimen>//search框的宽度，一般不需要调整。
//	<dimen name="dynamic_grid_search_bar_height">48dp</dimen>//search框的高度，不要调整为0，删除按钮需要占用一部分空间。


[2.4] 让主菜单部分应用按指定顺序排在前面？
添加res/values/arrays.xml：需要排序的应用：这里的item 内容一定要填写正确，否则会匹配不上，无法参与排序。
packages\apps\Launcher3\res\values\arrays.xml

//	<?xml version="1.0" encoding="utf-8"?>
//	<resources>
//	<string-array name="apps_componentName" translatable="false">
//	    <item>ComponentInfo{com.android.vending/com.android.vending.AssetBrowserActivity}</item>
//	    <item>ComponentInfo{com.android.browser/com.android.browser.BrowserActivity}</item>
//	    <item>ComponentInfo{com.android.settings/com.android.settings.Settings}</item>
//	    <item>ComponentInfo{com.android.camera2/com.android.camera.CameraLauncher}</item>
//	    <item>ComponentInfo{com.android.mms/com.android.mms.ui.ConversationList}</item>
//	</string-array>
//	</resources>

src/com/android/launcher3/Utilities.java
packages\apps\Launcher3\src\com\android\launcher3\Utilities.java
//	+  import java.util.Arrays;
//	+  import java.util.List;
//
//	+    public static List<String> getAppsComponentName(final Context context) {
//	+        return Arrays.asList(context.getResources().getStringArray(R.array.apps_componentName));
//	+    }


src/com/android/launcher3/LauncherModel.java
//	 protected int mPreviousConfigMcc;
//	+    static List<String> appArray = new ArrayList<String>();
//	    LauncherModel(LauncherAppState app, IconCache iconCache, AppFilter appFilter) {
//	        ......
//	        mUserManager = UserManagerCompat.getInstance(context);
//	+       appArray = Utilities.getAppsComponentName(context);
//
//	    }
添加如下sortApps 方法：apps 按arrays.xml 排序，在原来的排序基础上，将arrays.xml 配置的应用按顺序排在前面。arrays.xml中没有涉及到的应用，还是原来的顺序。
public static final void sortApps(ArrayList<AppInfo> apps) {
    int length = appArray.size();
    List<AppInfo> assignApps = new ArrayList<AppInfo>();
    for(int i=0;i<length;i++) {
        assignApps.add(i, null);
    }
    for(AppInfo app : apps){
        for(int k=0; k<length; k++){
            if (app.componentName.toString().equals(appArray.get(k))) {
                assignApps.set(k,app );
                continue;
            }
        }
    }
    for (int i =length -1;i > -1 ;i--) {
      AppInfo app = assignApps.get(i);
      if(app != null){
          apps.remove(app);
          apps.add(0, app);
      }
  }
  Log.d(TAG ,"The Apps List after Sort!");
}


src/com/android/launcher3/AppsCustomizePagedView.java

//	    public void setApps(ArrayList<AppInfo> list) {
//	        if (!LauncherAppState.isDisableAllApps()) {
//	            ......
//	            SprdAppSortAddonStub.getInstance().sortApps(mApps);
//	+           LauncherModel.sortApps(mApps);//在原来排序的基础上，再将arrays.xml中配置的应用按顺序排在前面。
//	            updatePageCountsAndInvalidateData();
//	        }
//	    }
//	    private void addAppsWithoutInvalidate(ArrayList<AppInfo> list) {
//	        ......
	        // SPRD: bug375932 2014-12-02 Feature customize app icon sort.
//	        SprdAppSortAddonStub.getInstance().sortApps(mApps);
//	+       LauncherModel.sortApps(mApps);//在原来排序的基础上，再将arrays.xml中配置的应用按顺序排在前面。
//	    }


[2.5] 如何确定待机HOME界面布局使用的是哪个default_workspace文件？
 src/com/android/launcher3/DynamicGrid.java
packages\apps\Launcher3\src\com\android\launcher3\DynamicGrid.java

//选择哪个default_workspace 和public DynamicGrid(Context context, Resources resources,int minWidthPx, int minHeightPx, int widthPx, int heightPx, int awPx, int ahPx)中的minWidthPx 和minHeightPx 以及该方法中创建的deviceProfiles 列表关。               
//minWidthPx 、minHeightPx 值转换为dpi之后 ，deviceProfiles 列表与其进行比较，选择与当前屏幕大小最接近的deviceProfiles 的default_workSpace作为最终Home界面使用的default_workspace。
//
//
//详细解释如下：
//src/com/android/launcher3/DynamicGrid.java中

        1.deviceProfiles 列表如下：
        deviceProfiles.add(new DeviceProfile("Super Short Stubby",
                255, 300,  2, 3,  48, 13, (hasAA ? 3 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Shorter Stubby",
                255, 400,  3, 3,  48, 13, (hasAA ? 3 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Short Stubby",
                275, 420,  3, 4,  48, 13, (hasAA ? 5 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Stubby",
                255, 450,  3, 4,  48, 13, (hasAA ? 5 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Nexus S",
                296, 491.33f,  4, 4,  48, 13, (hasAA ? 5 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Nexus 4",
                335, 567,  4, 4,  DEFAULT_ICON_SIZE_DP, 13, (hasAA ? 5 : 5), 56, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Nexus 5",
                359, 567,  4, 4,  DEFAULT_ICON_SIZE_DP, 13, (hasAA ? 5 : 5), 56, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Large Phone",
                406, 694,  5, 5,  64, 14.4f,  5, 56, R.xml.default_workspace_5x5));
        // The tablet profile is odd in that the landscape orientation
        // also includes the nav bar on the side
        deviceProfiles.add(new DeviceProfile("Nexus 7",
                575, 904,  5, 6,  72, 14.4f,  7, 60, R.xml.default_workspace_5x6));
        // Larger tablet profiles always have system bars on the top & bottom
        deviceProfiles.add(new DeviceProfile("Nexus 10",
                727, 1207,  5, 6,  76, 14.4f,  7, 64, R.xml.default_workspace_5x6));
        deviceProfiles.add(new DeviceProfile("20-inch Tablet",
                1527, 2527,  7, 7,  100, 20,  7, 72, R.xml.default_workspace_4x4));

       2.重新计算MinWidth 和MinHeigh  单位是dpi。
        mMinWidth = dpiFromPx(minWidthPx, dm);
        mMinHeight = dpiFromPx(minHeightPx, dm);
      3.创建mProfile，mProfile.defaultLayoutId 就是最终Home界面使用的default_workspace 的id。
        mProfile中的defaultLayoutId 是哪个default_workspace 见DeviceProfile.java。

        mProfile = new DeviceProfile(context, deviceProfiles,
                mMinWidth, mMinHeight,
                widthPx, heightPx,
                awPx, ahPx,
                resources);



src/com/android/launcher3/DeviceProfile.java

//	    DeviceProfile(Context context,
//	                 ArrayList<DeviceProfile> profiles,
//	                  float minWidth, float minHeight,
//	                  int wPx, int hPx,
//	                  int awPx, int ahPx,
//	                  Resources res) { 方法中：
       4.用屏幕宽高创建的点（PointF xy = new PointF(width, height)）与 deviceProfiles中的w 和 h 创建的点（dimens = new PointF(widthDps, heightDps)）进行比较，也就是从deviceProfiles 列表中找出和当前屏幕大小最接近的deviceProfiles。
            DeviceProfile closestProfile = findClosestDeviceProfile(minWidth, minHeight, points);
         ......

       5.采用和当前屏幕大小最接近的deviceProfiles的default_workspace

               defaultLayoutId = closestProfile.defaultLayoutId; 


[2.6] 如何替换第三方应用在launcher上显示的图标？
在launcher/src/com/android/launcher3/IconCache.java中修改，
packages\apps\Launcher3\src\com\android\launcher3\IconCache.java CacheEntry^cacheLocked
private CacheEntry cacheLocked(ComponentName componentName, ResolveInfo info,    private CacheEntry cacheLocked(ComponentName componentName, ResolveInfo info,
        HashMap<Object, CharSequence> labelCache) {
    CacheEntry entry = mCache.get(componentName);
    if (entry == null) {
        entry = new CacheEntry();
        mCache.put(componentName, entry);
        ComponentName key = LauncherModel.getComponentNameFromResolveInfo(info);
        if (labelCache != null && labelCache.containsKey(key)) {
            entry.title = labelCache.get(key).toString();
        } else {
            entry.title = info.loadLabel(mPackageManager).toString();
            if (labelCache != null) {
                labelCache.put(key, entry.title);
            }
        }
        if (entry.title == null) {
            entry.title = info.activityInfo.name;
        }
        Drawable icon;
        int index = sysIndexOf(componentName.getClassName());
        Log.i("jxt", "index:"+index+",Name:"+componentName.getClassName());
        icon = getFullResIcon(info);
        if (index >= 0) {
            entry.icon = Utilities.createIconBitmap(icon, mContext);
        } else {
            entry.icon = Utilities.createIconBitmap(
                    /* SPRD: Feature 253522, Remove the application drawer view @{ */
                    // getFullResIcon(info), mContext);
                    icon, mContext, true);
        }
        /* 此处即为替换图标代码  {@*/
        if("第三方应用的componentName".equals(componentName.toString())){
            entry.icon = BitmapFactory.decodeResource(mContext.getResources(), R.drawable.xxx);
        }

        /* @} */

    }
    return entry;
}   


[2.7] //如何去掉Launcher3的开机引导页面？
//修改方案如下：
//请定位到src/com/android/launcher3/LauncherClings.java文件：
//    class LauncherClings implements OnClickListener {
//         ......
//         private static final String TAG_CROP_TOP_AND_SIDES = "crop_bg_top_and_sides"
//
//-        private static final boolean DISABLE_CLINGS = false;
//+       private static final boolean DISABLE_CLINGS = true;


[2.8] 为何Launcher3设置一些壁纸后，壁纸显示比预览图模糊？
预览的时候，没有做格式转化，所以显示正常！
在设置壁纸的时候，默认是采用jpeg格式转换的，导致转换后损耗了一些，设置壁纸后，某些对比度比较高的壁纸就显示的模糊！

修改方案：
默认修改为采用png格式转换！

android6.0之前的版本，请做如下修改：
定位到/packages/apps/Launcher3/的WallpaperCropActivity.java文件
1、String mOutputFormat = "jpg";//修改为"png"
2、
  protected static String getFileExtension(String requestFormat) {
        String outputFormat = (requestFormat == null)
                ? "jpg"//修改为"png"
                : requestFormat;
        outputFormat = outputFormat.toLowerCase();
        return (outputFormat.equals("png") || outputFormat.equals("gif"))
                ? "png" // We don't support gif compression.
                : "jpg";
   }

android6.0的版本，请做如下修改：
定位到/packages/apps/Launcher3/WallpaperPicker/src/com/android/gallery3d/common/BitmapCropTask.java文件
if (crop.compress(CompressFormat.JPEG, DEFAULT_COMPRESS_QUALITY, tmpOut)) 修改为：
if (crop.compress(CompressFormat.PNG, DEFAULT_COMPRESS_QUALITY, tmpOut))


[2.9] 6.0平台上Launcher3自带的壁纸路径是什么？
在6.0中，平台版本预置了一些壁纸资源，相关路径如下：
资源文件在：
packages/apps/Launcher3/WallpaperPicker/res/drawable-xhdpi/

字串文件在：
packages/apps/Launcher3/WallpaperPicker/res/values-nodpi/wallpapers.xml 






