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
通过对BatteryService.java分析发现。 
当系统电量发生变化时，BatteryService通过sendIntentLocked 来告知用户电量发生变化。
frameworks\base\services\java\com\android\server\BatteryService.java void^sendIntentLocked()
//    private void sendIntentLocked() {
        //  Pack up the values and broadcast them to everyone
//        final Intent intent = new Intent(Intent.ACTION_BATTERY_CHANGED);
//        intent.addFlags(Intent.FLAG_RECEIVER_REGISTERED_ONLY
//                | Intent.FLAG_RECEIVER_REPLACE_PENDING);
//
//        int icon = getIconLocked(mBatteryProps.batteryLevel);
//
//        intent.putExtra(BatteryManager.EXTRA_STATUS, mBatteryProps.batteryStatus);
//
//        mHandler.post(new Runnable() {
//            @Override
//            public void run() {
//                ActivityManagerNative.broadcastStickyIntent(intent, null, UserHandle.USER_ALL);
//            }
//        });
//    }
但是系统发生这个广播并不是时刻在发，为什么我们通过

        IntentFilter intentFilter = new IntentFilter(Intent.ACTION_BATTERY_CHANGED);
        mBatteryLowReceiver = new BatteryLowReceiver();
        this.registerReceiver(mBatteryLowReceiver,intentFilter);

就能立即得到系统当前电量呢。 
主要是因为系统发送的是驻留广播：

        mHandler.post(new Runnable() {
            @Override
            public void run() {
                ActivityManagerNative.broadcastStickyIntent(intent, null, UserHandle.USER_ALL);
            }
        });

当用户注册ACTION_BATTERY_CHANGED 时，就会收到最近一次改变的intent广播。






/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








