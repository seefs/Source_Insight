
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
// Android4.4 systemui 启动流程
Save:node\android\app\Macro_App_SystemUI.h \[1.1\] SystemServer.startSystemUi()
Save:node\android\app\Macro_App_SystemUI.h \[1.2\] SystemBars.start() 
Save:node\android\app\Macro_App_SystemUI.h \[1.3\] SystemBars.onNoService()
Save:node\android\app\Macro_App_SystemUI.h \[1.4\] config手机还是平板
Save:node\android\app\Macro_App_SystemUI.h \[1.5\] PhoneStatusBar.start() 
Save:node\android\app\Macro_App_SystemUI.h \[1.6\] PhoneStatusBar.createAndAddWindows()
Save:node\android\app\Macro_App_SystemUI.h \[1.7\] PhoneStatusBar.makeStatusBarView()
// SystemUI的图标更新流程
Save:node\android\app\Macro_App_SystemUI.h \[2.1\] PhoneStatusBarPolicy 注册服务--接收消息
Save:node\android\app\Macro_App_SystemUI.h \[2.2\] 图标
Save:node\android\app\Macro_App_SystemUI.h \[2.3\] StatusBarManager 
Save:node\android\app\Macro_App_SystemUI.h \[2.4\] 交互 StatusBarManagerService
Save:node\android\app\Macro_App_SystemUI.h \[2.5\] 字符串
Save:node\android\app\Macro_App_SystemUI.h \[2.6\] CommandQueue 设置服务mBar
Save:node\android\app\Macro_App_SystemUI.h \[2.7\] CommandQueue.setIcon
Save:node\android\app\Macro_App_SystemUI.h \[2.7\] addIcon
//	SystemUI的布局
Save:node\android\app\Macro_App_SystemUI.h \[3.1\] SystemUI的布局（status_bar.xml）
Save:node\android\app\Macro_App_SystemUI.h \[3.2\] 更改状态栏的高度，显示图标等。
Save:node\android\app\Macro_App_SystemUI.h \[3.3\] 添加USB，SD，AUX，DISC图标的显示和刷新。
	

//apk 模块 -- cmd:
Save:SI\node\9820e\Macro_9820e_Sys_Build.h \[3.1\] apk 模块 -- cmd



/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/


// Android4.4 systemui 启动流程
[1.1] SystemServer.startSystemUi()
frameworks\base\services\java\com\android\server\SystemServer.java SystemUIService
//    static final void startSystemUi(Context context) {
//        Intent intent = new Intent();
//        intent.setComponent(new ComponentName("com.android.systemui",
//                    "com.android.systemui.SystemUIService"));
        //Slog.d(TAG, "Starting service: " + intent);
//        context.startServiceAsUser(intent, UserHandle.OWNER);
//    }

frameworks/base/packages/SystemUI/AndroidManifest.xml SystemUIService
//	<service android:name="SystemUIService"
//		android:exported="true"
//		/>

frameworks\base\packages\SystemUI\src\com\android\systemui\SystemUIService.java onCreate()
//    private final Class<?>[] SERVICES = new Class[] {
//            com.android.systemui.recent.Recents.class,
//            com.android.systemui.statusbar.SystemBars.class,
//            com.android.systemui.usb.StorageNotification.class,
//            com.android.systemui.power.PowerUI.class,
//            com.android.systemui.media.RingtonePlayer.class,
//            com.android.systemui.settings.SettingsUI.class,
//        };


[1.2] SystemBars.start() 
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\SystemBars.java start()
//    public void start() {
//        if (DEBUG) Log.d(TAG, "start");
//        mServiceMonitor = new ServiceMonitor(TAG, DEBUG,
//                mContext, Settings.Secure.BAR_SERVICE_COMPONENT, this);
//        mServiceMonitor.start();  // will call onNoService if no remote service is found
//    }

frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\ServiceMonitor.java start()
//	public void start() {
		// listen for setting changes
//		ContentResolver cr = mContext.getContentResolver();
//		cr.registerContentObserver(Settings.Secure.getUriFor(mSettingKey),
//				false /*notifyForDescendents*/, mSettingObserver, UserHandle.USER_ALL);
//
		// listen for package/component changes
//		IntentFilter filter = new IntentFilter();
//		filter.addAction(Intent.ACTION_PACKAGE_ADDED);
//		filter.addAction(Intent.ACTION_PACKAGE_CHANGED);
//		filter.addDataScheme("package");
//		mContext.registerReceiver(mBroadcastReceiver, filter);
//
//		mHandler.sendEmptyMessage(MSG_START_SERVICE);
//	}


//	case MSG_START_SERVICE:
//		startService();

frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\ServiceMonitor.java void^startService()
//	private void startService() {
//		mServiceName = getComponentNameFromSetting();
//		if (mDebug) Log.d(mTag, "startService mServiceName=" + mServiceName);
//		if (mServiceName == null) {
//			mBound = false;
//			mCallbacks.onNoService();
//		}
//	}


[1.3] SystemBars.onNoService()
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\SystemBars.java onNoService()
//    public void onNoService() {
//        if (DEBUG) Log.d(TAG, "onNoService");
//        createStatusBarFromConfig();  // fallback to using an in-process implementation
//    }

//	private void createStatusBarFromConfig() {
//		final String clsName = mContext.getString(R.string.config_statusBarComponent);
//		try {
//			cls = mContext.getClassLoader().loadClass(clsName);
//		} catch (Throwable t) {
//			throw andLog("Error loading status bar component: " + clsName, t);
//		}
//	}

[1.4] config手机还是平板
frameworks/base/packages/SystemUI/res/values/config.xml config_statusBarComponent
//	<string name="config_statusBarComponent" translatable="false">
//		com.android.systemui.statusbar.phone.PhoneStatusBar
//	</string>


[1.5] PhoneStatusBar.start() 
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBar.java start()
//    public void start() {
//        super.start(); // calls createAndAddWindows()
//        addNavigationBar();
//
//        if (ENABLE_HEADS_UP) {
//            mContext.getContentResolver().registerContentObserver(
//                    Settings.Global.getUriFor(SETTING_HEADS_UP), true,
//                    mHeadsUpObserver);
//        }
//        mContext.getContentResolver().registerContentObserver(
//                    Settings.Global.getUriFor(SYSTEM_SHOW_STATUSBAR),  true,
//                    mLockShowStatusBar, UserHandle.USER_ALL);
//
        //SPRD 644989 :support mouse scroll toast for pikel
//        MouseUI mouseUI = new MouseUI();
//        mouseUI.start(mContext);
//    }

frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\BaseStatusBar.java start()
//    public void start() {
//			createAndAddWindows();
//    }	


[1.6] PhoneStatusBar.createAndAddWindows()
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBar.java createAndAddWindows()
//    public void createAndAddWindows() {
//        addStatusBarWindow();
//    }

//	private void addStatusBarWindow() {
//		makeStatusBarView();
//		mWindowManager.addView(mStatusBarWindow, lp);
//	}


[1.7] PhoneStatusBar.makeStatusBarView()
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBar.java makeStatusBarView()
//    protected PhoneStatusBarView makeStatusBarView() {
//	此处主要是SystemUI的LAYOUT初始化,也是主要操作的地方
//	}



// SystemUI的图标更新流程
	
[2.1] PhoneStatusBarPolicy 注册服务--接收消息
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBarPolicy.java
//    private BroadcastReceiver mIntentReceiver = new BroadcastReceiver() {
//        @Override
//        public void onReceive(Context context, Intent intent) {
//            String action = intent.getAction();
//            if (action.equals(Intent.ACTION_ALARM_CHANGED)) {
//                updateAlarm(intent);
//            }
//            /* SPRD: add to support headset {@*/
//            else if (action.equals(Intent.ACTION_HEADSET_PLUG)) {
//                updateHeadSet(intent);
//            }
//            /* @} */
//        }
//    };

frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBarPolicy.java void^updateHeadSet( )
//	/* SPRD: add to support headset {@ */
//	private final void updateHeadSet(Intent intent) {
//		int iconId = R.drawable.stat_sys_headset;
//		if (mic == 1) {
//			iconId = R.drawable.stat_sys_headset_mic;
//		}
//
//		showOrHideStatusBarIcon("headset", iconId, visiable, null);
//	}

//    public void showOrHideStatusBarIcon() {
//          mService.setIcon(iconName, iconId, 0, des);
			//StatusBarManager mService;
//	}

[2.2] 图标
//	R.drawable.stat_sys_headset
frameworks\base\packages\SystemUI\res\drawable-ldpi\stat_sys_headset.png


[2.3] StatusBarManager 
frameworks\base\core\java\android\app\StatusBarManager.java void^setIcon( )
//    public void setIcon(String slot, int iconId, int iconLevel, String contentDescription) {
//          svc.setIcon(slot, mContext.getPackageName(), iconId, iconLevel,
//    }

//	mService = IStatusBarService.Stub.asInterface(
//			ServiceManager.getService(Context.STATUS_BAR_SERVICE));


frameworks\base\services\java\com\android\server\SystemServer.java Context.STATUS_BAR_SERVICE
//	if (!disableSystemUI) {
//		statusBar = new StatusBarManagerService(context, wm);
//		ServiceManager.addService(Context.STATUS_BAR_SERVICE, statusBar);
//	}


[2.4] 交互 StatusBarManagerService
frameworks\base\services\java\com\android\server\StatusBarManagerService.java void^setIcon( )
//    public void setIcon(String slot, String iconPackage, int iconId, int iconLevel,
//            String contentDescription) {
//
//            StatusBarIcon icon = new StatusBarIcon(iconPackage, UserHandle.OWNER, iconId,
//                    iconLevel, 0,
//                    contentDescription);
//            mIcons.setIcon(index, icon);
//            mBar.setIcon(index, icon);
//        }
//    }

frameworks\base\services\java\com\android\server\StatusBarManagerService.java void^registerStatusBar( )
//    public void registerStatusBar(IStatusBar bar, StatusBarIconList iconList,
//            List<IBinder> notificationKeys, List<StatusBarNotification> notifications,
//            int switches[], List<IBinder> binders) {
//        mBar = bar;
//    }

frameworks\base\services\java\com\android\server\StatusBarManagerService.java StatusBarManagerService( )
//    public StatusBarManagerService(Context context, WindowManagerService windowManager) {
//        final Resources res = context.getResources();
			//这里设定了系统图标对应的字符串
//        mIcons.defineSlots(res.getStringArray(com.android.internal.R.array.config_statusBarIcons));
//    }


[2.5] 字符串
//	R.array.config_statusBarIcons
frameworks\base\core\res\res\values\config.xml config_statusBarIcons
//	<string-array name="config_statusBarIcons">
//		   <item><xliff:g id="id">ime</xliff:g></item>
//		   ...
//		   <item><xliff:g id="id">clock</xliff:g></item>
//		   <!-- SPRD: ADD headset icon in statusbar on 20130902 -->
//		   <item><xliff:g id="id">headset</xliff:g></item>
//		</string-array>


[2.6] CommandQueue 设置服务mBar
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBar.java void^start( )
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\BaseStatusBar.java start()
//    public void start() {
//			mBarService.registerStatusBar(mCommandQueue, iconList, notificationKeys, notifications,
//					switches, binders);
//			mCommandQueue = new CommandQueue(this, iconList);
//    }	


[2.7] CommandQueue.setIcon
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\CommandQueue.java void^setIcon( )
//    public void setIcon(int index, StatusBarIcon icon) {
//        synchronized (mList) {
//            int what = MSG_ICON | index;
//            mHandler.removeMessages(what);
//            mHandler.obtainMessage(what, OP_SET_ICON, 0, icon.clone()).sendToTarget();
//        }
//    }

frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\CommandQueue.java void^handleMessage( )
//	private final class H extends Handler {
//		public void handleMessage(Message msg) {
//			final int what = msg.what & MSG_MASK;
//			switch (what) {
//				case MSG_ICON: {
//					mList.setIcon(index, icon);
//					mCallbacks.addIcon(mList.getSlot(index), index, viewIndex, icon);
//					break;
//				}
//				case MSG_ADD_NOTIFICATION: {
//					final NotificationQueueEntry ne = (NotificationQueueEntry)msg.obj;
//					mCallbacks.addNotification(ne.key, ne.notification);
//					break;
//				}
//				case MSG_TOGGLE_RECENT_APPS:
//					mCallbacks.toggleRecentApps();
//					break;
//			}
//		}
//	}


[2.7] addIcon
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBar.java void^addIcon( )
frameworks\base\packages\SystemUI\src\com\android\systemui\statusbar\phone\PhoneStatusBar.java void^addNotification( )
//    public void addIcon(String slot, int index, int viewIndex, StatusBarIcon icon) {
//        StatusBarIconView view = new StatusBarIconView(mContext, slot, null);
//        view.set(icon);
//        mStatusIcons.addView(view, viewIndex, new LinearLayout.LayoutParams(mIconSize, mIconSize));
//    }






/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/

//	SystemUI的布局
[3.1] SystemUI的布局（status_bar.xml）
//更改的地方：将原来的布局设置为隐藏，添加现在需要显示的布局。具体查看代码部分。

[3.2] 更改状态栏的高度，显示图标等。
//将原来的：@*android:dimen/status_bar_height
//替换为：@dimen/add_statusbar_hieght?? ?//更改状态栏的高度 <全部替换>

//在PhoneStatusBarView.makeStatusBarView()函数中：
//将原来的：mIconSize = res.getDimensionPixelSize(com.android.internal.R.dimen.status_bar_icon_size); 
//替换为：mIconSize = res.getDimensionPixelSize(R.dimen.status_bar_icon_size);?? ??? ?//替换ICon尺寸

//dimens文件中：
//将<dimen name="status_bar_icon_size">@*android:dimen/status_bar_icon_size</dimen>
//替换为：
//<dimen name="status_bar_icon_size">26px</dimen>

[3.3] 添加USB，SD，AUX，DISC图标的显示和刷新。





