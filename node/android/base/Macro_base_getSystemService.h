
//目录[Num][Ca]:
Save:node\android\base\Macro_base_getSystemService.h \[1.1\] AlarmStateManager.java
Save:node\android\base\Macro_base_getSystemService.h \[1.2\] Activity.java
Save:node\android\base\Macro_base_getSystemService.h \[1.3\] ContextThemeWrapper.java
Save:node\android\base\Macro_base_getSystemService.h \[1.4\] ContextWrapper.java
Save:node\android\base\Macro_base_getSystemService.h \[1.5\] Context.java
Save:node\android\base\Macro_base_getSystemService.h \[1.6\] ActivityThread.java 不清楚是不是这.
Save:node\android\base\Macro_base_getSystemService.h \[1.7\] ContextImpl.java
Save:node\android\base\Macro_base_getSystemService.h \[1.8\] ContextImpl.java 注册
Save:node\android\base\Macro_base_getSystemService.h \[1.9\] ServiceFetcher
Save:node\android\base\Macro_base_getSystemService.h \[1.10\] ActivityManager.java


/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置: [s][Cs]
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[Num]code: getSystemService
以获得AM为类，进行跟踪framework流程

[1.1] AlarmStateManager.java
packages\apps\DeskClock\src\com\android\deskclock\alarms\AlarmStateManager.java Context.ACTIVITY_SERVICE
//	ActivityManager am = (ActivityManager)context.getSystemService(Context.ACTIVITY_SERVICE);
//	ComponentName cn = am.getRunningTasks(2).get(0).topActivity;
//	String activityName = cn.getClassName();

[1.2] Activity.java
frameworks\base\core\java\android\app\Activity.java Object^getSystemService
//	public class Activity extends ContextThemeWrapper
//    @Override
//    public Object getSystemService(@ServiceName @NonNull String name) {
//        if (getBaseContext() == null) {
//            throw new IllegalStateException(
//                    "System services not available to Activities before onCreate()");
//        }
//
//        if (WINDOW_SERVICE.equals(name)) {
//            return mWindowManager;
//        } else if (SEARCH_SERVICE.equals(name)) {
//            ensureSearchManager();
//            return mSearchManager;
//        }
//        return super.getSystemService(name);
//    }

[1.3] ContextThemeWrapper.java
frameworks\base\core\java\android\view\ContextThemeWrapper.java Object^getSystemService
//public class ContextThemeWrapper extends ContextWrapper {
//    @Override public Object getSystemService(String name) {
//        if (LAYOUT_INFLATER_SERVICE.equals(name)) {
//            if (mInflater == null) {
//                mInflater = LayoutInflater.from(getBaseContext()).cloneInContext(this);
//            }
//            return mInflater;
//        }
//        return getBaseContext().getSystemService(name);
//    }

[1.4] ContextWrapper.java
frameworks\base\core\java\android\content\ContextWrapper.java Object^getSystemService
//public class ContextWrapper extends Context {
//    Context mBase;
//    @Override
//    public Object getSystemService(String name) {
//        return mBase.getSystemService(name);
//    }

[1.5] Context.java
frameworks\base\core\java\android\content\Context.java getSystemService(this, name)
//	  public abstract Object getSystemService(String name);

[1.6] ActivityThread.java 不清楚是不是这.
frameworks\base\core\java\android\app\ActivityThread.java ContextImpl.createAppContext
//	try {
//		mInstrumentation = new Instrumentation();
//		ContextImpl context = ContextImpl.createAppContext(
//				this, getSystemContext().mPackageInfo);
//		Application app = Instrumentation.newApplication(Application.class, context);
//		mAllApplications.add(app);
//		mInitialApplication = app;
//		app.onCreate();
//	} catch (Exception e) {
//		throw new RuntimeException(
//				"Unable to instantiate Application():" + e.toString(), e);
//	}


[1.7] ContextImpl.java
frameworks\base\core\java\android\app\ContextImpl.java Object^getSystemService
//	  public Object getSystemService(String name) {
//		  ServiceFetcher fetcher = SYSTEM_SERVICE_MAP.get(name);
//		  return fetcher == null ? null : fetcher.getService(this);
//	  }

[1.8] ContextImpl.java 注册
frameworks\base\core\java\android\app\ContextImpl.java  ACTIVITY_SERVICE
//    static {
//        registerService(...);
//			
//        registerService(ACTIVITY_SERVICE, new ServiceFetcher() {
//                public Object createService(ContextImpl ctx) {
//                    return new ActivityManager(ctx.getOuterContext(), ctx.mMainThread.getHandler());
//                }});
//    }
frameworks\base\core\java\android\app\ContextImpl.java  void^registerService
//    private static void registerService(String serviceName, ServiceFetcher fetcher) {
//        if (!(fetcher instanceof StaticServiceFetcher)) {
//            fetcher.mContextCacheIndex = sNextPerContextServiceCacheIndex++;
//        }
//        SYSTEM_SERVICE_MAP.put(serviceName, fetcher);
//    }

[1.9] ServiceFetcher
frameworks\base\core\java\android\app\ContextImpl.java  class^ServiceFetcher
//    /*package*/ static class ServiceFetcher {
//        int mContextCacheIndex = -1;
//
//        /**
//         * Main entrypoint; only override if you don't need caching.
//         */
//        public Object getService(ContextImpl ctx) {
//            ...
//                return service;
//            }
//        }

[1.10] ActivityManager.java
frameworks\base\core\java\android\app\ActivityManager.java ActivityManager( )
//    /*package*/ ActivityManager(Context context, Handler handler) {
//        mContext = context;
//        mHandler = handler;
//    }




/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








