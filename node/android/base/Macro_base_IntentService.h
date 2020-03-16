//目录[Num][Ca]:

/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置: [s][Cs]
basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

//简介
//本文针对android 中IntentService异步流程学习。
//概述
//通过分析源码我们发现，在IntentService的构造函数中需要我们提供一个String 用来创建HandlerThread
frameworks\base\core\java\android\app\IntentService.java IntentService(String^name)
//	public IntentService(String name) {
//	    super();
//	    mName = name;
//	}

那么这个HanderThread 在什么时候被创建的呢？ 
通过源码发现在onCreate方法中。 
frameworks\base\core\java\android\app\IntentService.java void^onCreate()
//	@Override 
//	public void onCreate() { 
	// TODO: It would be nice to have an option to hold a partial wakelock 
	// during processing, and to have a static startService(Context, Intent) 
	// method that would launch the service & hand off a wakelock.
//
//	    super.onCreate();
//	    HandlerThread thread = new HandlerThread("IntentService[" + mName + "]");
//	    thread.start();
//
//	    mServiceLooper = thread.getLooper();
//	    mServiceHandler = new ServiceHandler(mServiceLooper);
//	}
从上面看出

HandlerThread thread = new HandlerThread(“IntentService[” + mName + “]”); 
是通过new HandlerThread 创建名为mName的线程。 
此线程的作用是处理handlerMessage 事务处理。 
//	private final class ServiceHandler extends Handler { 
//		public ServiceHandler(Looper looper) { 
//			super(looper); 
//		}
//
//	    @Override
//	    public void handleMessage(Message msg) {
//	        onHandleIntent((Intent)msg.obj);
//	        stopSelf(msg.arg1);
//	    }
//	}

frameworks\base\core\java\android\app\IntentService.java void^onStart( )
//	@Override
//	public void onStart(Intent intent, int startId) {
//	    Message msg = mServiceHandler.obtainMessage();
//	    msg.arg1 = startId;
//	    msg.obj = intent;
//	    mServiceHandler.sendMessage(msg);
//	}








/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








