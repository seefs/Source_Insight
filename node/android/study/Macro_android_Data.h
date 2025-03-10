﻿
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 数据通信
Save:node\android\study\Macro_android_Data.h \[1.1\] Activity-->Activity-----(3)
Save:node\android\study\Macro_android_Data.h \[1.2\] Activity-->Fragment-----(2)
Save:node\android\study\Macro_android_Data.h \[1.3\] Fragment-->Activity-----(5)
Save:node\android\study\Macro_android_Data.h \[1.4\] Activity-->Service------(3)
Save:node\android\study\Macro_android_Data.h \[1.5\] Service-->Activity------(4)
Save:node\android\study\Macro_android_Data.h \[1.6\] AsyncTask、Thread
Save:node\android\study\Macro_android_Data.h \[1.7\] GlobalScope-->Activity
Save:node\android\study\Macro_android_Data.h \[1.8\] Brocast-->Activity------(2)
Save:node\android\study\Macro_android_Data.h \[1.9\] Activity-->Brocast------(2)
Save:node\android\study\Macro_android_Data.h \[1.10\] Thread-->Activity
Save:node\android\study\Macro_android_Data.h \[1.11\] 
Save:node\android\study\Macro_android_Data.h \[1.12\] EventBus/Rxbus---------(反射，性能差)
Save:node\android\study\Macro_android_Data.h \[1.13\] BroadcastManager-------
Save:node\android\study\Macro_android_Data.h \[1.14\] handler----------------(耦合性差)
Save:node\android\study\Macro_android_Data.h \[1.15\] FunctionManager--------万能接口
Save:node\android\study\Macro_android_Data.h \[1.16\] interface--------------普通接口
Save:node\android\study\Macro_android_Data.h \[1.17\] 
Save:node\android\study\Macro_android_Data.h \[1.18\] Shared-----------------私有数据(3)
Save:node\android\study\Macro_android_Data.h \[1.19\] Data file--------------文件
Save:node\android\study\Macro_android_Data.h \[1.20\] Content Provider-------共享数据
Save:node\android\study\Macro_android_Data.h \[1.21\] Http-------------------网络存储
Save:node\android\study\Macro_android_Data.h \[1.22\] AssetsManger-----------原生数据
Save:node\android\study\Macro_android_Data.h \[1.23\] Sqlite-----------------数据库
Save:node\android\study\Macro_android_Data.h \[1.24\] 
Save:node\android\study\Macro_android_Data.h \[1.25\] 
Save:node\android\study\Macro_android_Data.h \[1.26\] 
Save:node\android\study\Macro_android_Data.h \[1.27\] Activity-->Menu
Save:node\android\study\Macro_android_Data.h \[1.28\] Activity-->Adapter
Save:node\android\study\Macro_android_Data.h \[1.29\] AlertDialog
Save:node\android\study\Macro_android_Data.h \[1.30\] Toast
Save:node\android\study\Macro_android_Data.h \[1.31\] 
Save:node\android\study\Macro_android_Data.h \[1.32\] 
Save:node\android\study\Macro_android_Data.h \[1.33\] 
Save:node\android\study\Macro_android_Data.h \[1.34\] 
Save:node\android\study\Macro_android_Data.h \[1.35\] Block-->Block----------可见性
Save:node\android\study\Macro_android_Data.h \[1.36\] Class-->Class----------类关系
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Activity-->Activity
// 1) Intent/Bundle
private void getIntent() {
	bundle = getIntent().getBundleExtra(
			AppConstant.INTENT_EXTRA_ALARMDEVICEIMAGE);
	alarmId = getIntent().getStringExtra(
			AppConstant.INTENT_EXTRA_ALARMDEVICEID);
	alarmName = getIntent().getStringExtra(
			AppConstant.INTENT_EXTRA_ALARMDEVICENAME);
	String[] imagesNames = bundle
			.getStringArray(AppConstant.INTENT_EXTRA_ALARMDEVICEBUNDLE);
}

private void startIntent(String[] imagesNames, int pos) {
	Bundle bundle = new Bundle();
	bundle.putStringArray(AppConstant.INTENT_EXTRA_ALARMDEVICEBUNDLE,
			imagesNames);
	Intent intent = new Intent(AlarmDateActivity.this,
			AlarmAlbumActivity.class);
	intent.putExtra(AppConstant.INTENT_EXTRA_ALARMDEVICENAME,
			listData.get(pos).get("name"));
	intent.putExtra(AppConstant.INTENT_EXTRA_ALARMDEVICEID, alarmId);
	intent.putExtra(AppConstant.INTENT_EXTRA_ALARMDEVICEIMAGE, bundle);
	intent.putExtra(AppConstant.INTENT_EXTRA_MODE, 2); 
	startActivity(intent);
}

@Override
protected void onActivityResult(int requestCode, int resultCode, Intent data) {
	super.onActivityResult(requestCode, resultCode, data);
	switch (requestCode) {
	case 1:
		if (TApplication.isFloatView) {
			finish();
		}
		break;
	}
}


// 2) 类静态变量


// 3) 全局变量
APP.getApplication()



[1.2] Activity-->Fragment
// 1) Bunlde
//在 Activity 中set
//		Fragment1 fragment = new Fragment1();
//		Bundle bundle = new Bundle();
//		bundle.putString(COLORKEY,color);
//		fragment.setArguments(bundle);
?
//在 Fragment 中调用
//		Bundle bundle = getArguments();

// replace
//		String color = etFragment1Color.getText().toString();
//		Fragment1 fragment = Fragment1.bundleColorToFragment1(color);
//		replaceFragment(R.id.left_frame_layout,fragment);


// 2) 直接在Activity中定义；
在该fragment依附的activity?中写一个方法a()，
然后在fragment中拿到activity 做强转(可用方法为onAttach方法或getActivity方法)，
然后调用方法a();


// handler




[1.3] Fragment-->Activity
// 1) fragment interface
//  在fragment中定义一个内部回调接口，让activity实现该接口；
//
//		private OnColorChangeListener colorChangeListener;
//
//		public interface OnColorChangeListener{
//		    void fragment1Change(String color);
//		}


//  fragment中 onAttach()，onDetach()
//		@Override
//		public void onAttach(Context context) {
//		    super.onAttach(context);
//		    if(context instanceof OnColorChangeListener) {
//		        colorChangeListener = (OnColorChangeListener)context;
//		    } else{
//		        throw new IllegalArgumentException("context must implements FragmentInteraction");
//		    }
//		}
//		 
//		@Override
//		public void onDetach() {
//		    super.onDetach();
//		    colorChangeListener = null;
//		}


// 2) Handler
//		@Override
//	    public void onAttach(Context context) {
//	        super.onAttach(context);
//	        MainActivity activity = (MainActivity) getActivity();
//	        activity.setHandler(mHandler);
//	    }


// 3) Broadcast广播
LocalBroadcastManager


// 4) EventBus


// 5) 接口回调



[1.4] Activity-->Service
// 1) startService
//    不传参，或者只能传一次参数
Activity-->start-->command-->intent-->work(v)-->stop

// 2) bindService
Activity-->bind-->connection-->Binder-->work(v)-->unbind
-->bind-->unbind-->bind-->unbind

// 3) start + bind
Activity-->start-->bind-->unbind-->stop-->Destroy

// 4) 隐式Intent访问(远程Service)
Activity-->intent-->bind



[1.5] Service-->Activity
// 1) Binder + Listener
Service-->Binder-->work(v)-->listener==>task-->execute-->do(v)

// 2) BrocastReceiver
Service-->send
Activity-->Receiver-->register-->Action-->onReceive-->unregister

// 3) 远程Service(其他进程)
//	<service
//		android:process=":remote" >   
//      <intent-filter>  
//      <action android:name="com.example.servicetest.MyAIDLService"/>  
//      </intent-filter>  
//	</service>
Service-->AIDL-->Stub-->Binder
区别在于这个binder很少修改，xxService.Stub.asInterface(service), 转换成接口
    
// 4) 前台Service
//    notification
Service-->intent-->pending-->res-->notification-->startForeground-->Activity



[1.6] AsyncTask、Thread
//AsyncTask 优缺点
并发个数受限.
生命周期不同步


// 2) 
task-->listener-->success-->service-->


//Thread
new Thread() {
	public void run() {
		Message msg = new Message();
		msg.arg1 = pos;
		msg.obj = StringUtil.trimFirstAndLastChar(str, '"');
		msg.what = 10;

		handler.sendMessage(msg);
	}
}.start();



[1.7] GlobalScope-->Activity




[1.8] Brocast-->Activity
// 1) 标准广播
Brocast-->intent-->send-->Activity

// 2) 有序广播
Brocast-->intent-->Order-->send-->Activity-->Receiver-->abort

//本地广播机制
localBroadcastReceiver



[1.9] Activity-->Brocast
// 1) 动态注册
//    系统广播，添加权限
Activity-->Filter-->Action-->Brocast-->register-->unregister

// 2) 静态注册
//	<receiver >
//		<intent-filter>
//		<action android:name="android.intent.action.BOOT_COMPLETED"></action>
//		</intent-filter>
//	</receiver>
Brocast-->register



[1.10] Thread-->Activity
1) Handler 

2) runOnUiThread 
mActivity.runOnUiThread(new Runnable() {
    @Override
    public void run() {
        getReadData(urls);//网络请求获取数据
    }
});
	
3) View.post(Runnable r)
view.post(new Runnable(){
	@Override
	public void run() {
		view.setImageBitmap(bitmap);
	}
});
	
4) AsyncTask



[1.11] 




[1.12] EventBus
//利用EventBus发送
//	EventBus.getDefault().post("我是Four用EventBus传递的数据");


//	@Subscribe(threadMode = ThreadMode.MAIN)
//	public void getFragmentMsg(String msg){
//	    tvMain.setText(msg+MainActivity.class.getName());
//	}



[1.13] BroadcastManager
//发送广播
//    Intent intent = new Intent();
//    intent.setAction("co.daggertest.fragment.ThreeFragment");
//    intent.putExtra("heihei","fragment发送广播");
//    //使用的本地广播，用于单个app内通信，性能和安全性好点
//    LocalBroadcastManager.getInstance(getActivity()).sendBroadcast(intent);


//  广播实例
//	class MyBroadcast extends BroadcastReceiver{
//
//	    @Override
//	    public void onReceive(Context context, Intent intent) {
//	        heihei = intent.getStringExtra("heihei");
//	        tvMain.setText(heihei+MainActivity.class.getName());
//	    }
//	}



[1.14] handler
//	Message message = new Message();
//	Bundle bundle = new Bundle();
//	bundle.putString("hehe","我是activity发送的msg");
//	message.setData(bundle);
//	handler.sendMessage(message);


//	private Handler mHandler = new Handler(){
//
//	    @Override
//	    public void handleMessage(Message msg) {
//	        super.handleMessage(msg);
//
//	        Bundle bundle = msg.getData();
//	        strHandler = bundle.getString("hehe");
//	        textView.setText(strHandler+TwoFragment.class.getName());
//
//
//			if (loading != null) {
//				loading.dismiss();
//			}
//			switch (msg.what) {
//			case 10:// 获取数据:成功
//				String[] imagesNames = msg.obj.toString().split(",");
//				startIntent(imagesNames, msg.arg1);
//				break;
//			}
//
//	    }
//	};


//        mHandler = new Handler();
//        mRunnable = new Runnable() {
//             @Override
//             public void run() {
//                 updateTime();
//                  diffTime = diffTime - 1;
//                  //15分钟
//                  if (0 <= diffTime) {
//                      //延时1秒
//                      mHandler.postDelayed(this, 1000);
//                  }
//              }
//        };
//        //延时0秒
//        mHandler.postDelayed(mRunnable, 0);


[1.15] 



[1.16] 


[1.17] 



[1.18] Shared
//SharedPreferences
 1、SharedPreferences 可以存储简抄单的数据，袭是以key-value的形式存储的。 
存储在你工程目录下/shared_prefs/activityming.xml文件zhidao中 
//		SharedPreferences
//		SharedPreferences loginInfo = mContext.getSharedPreferences("login_info", 0);
//		final String u = loginInfo.getString("userName", "");
//		final String p = loginInfo.getString("password","");


2、通过文件。存在files/XXX.cfg 

3、SQLite数据库中


[1.19] 

//内部存储
getFilesDir():返回File表示应用程序的内部目录。
getCacheDir():返回File表示应用程序临时缓存文件的内部目录。

//内部缓存存储
createTempFile()
getCacheDir()

//外部存储
getExternalFilesDir()



[1.20] Content Provider-------共享数据
// 1) managedQuery
//   过时
Cursor cursor = managedQuery();


// 2) CursorLoader
//   继承自AsyncTaskLoader
CursorLoader loader = new CursorLoader();
Cursor cursor = loader.loadInBackground();


// 3) ContentResolver.query()
ContentResolver resolver = getContentResolver();
Cursor cursor = resolver.query();


//   语法:
Cursor cursor = resolver.query(
//      MediaStore.Video.Media
//      MediaStore.Audio.Media
//      MediaStore.Images.Media
        MediaStore.Files.getContentUri("external"),
        
        new String[]{MediaStore.Files.FileColumns._ID, 
            MediaStore.Files.FileColumns.TITLE, 
            MediaStore.Files.FileColumns.DATA}, 

//      MediaStore.Files.FileColumns.MIME_TYPE + "= ?",  
//      "(" + MediaStore.Files.FileColumns.MIME_TYPE + "=='text/plain'" + ")",
        "(" + MediaStore.Files.FileColumns.DATA + " LIKE '%hua.txt'" + ")",
//      null, 

//      new String[]{"txt"}, 
        null, 

        MediaStore.Files.FileColumns.SIZE + " DESC"
//      null
        );



[1.21] 




[1.22] AssetsManger

//原生数据
AssetsManger.open()




[1.23] Sqlite-----------------数据库

//  (kt)
SQLiteOpenHelper


//  (kt)
ManagedSQLiteOpenHelper





[1.24] 




[1.25] 





[1.26] 




[1.27] Activity-->Menu
//registerForContextMenu
registerForContextMenu(alarm_list);

@Override
public boolean onContextItemSelected(final MenuItem item) {
	switch (item.getOrder()) {
	case 0:// 
		break;
	}
	return super.onContextItemSelected(item);
}

@Override
public void onCreateContextMenu(ContextMenu menu, View v,
		ContextMenuInfo menuInfo) {
	AdapterView.AdapterContextMenuInfo info = (AdapterView.AdapterContextMenuInfo) menuInfo;
	menu.setHeaderTitle(R.string.devOperateSelect);
	menu.add((int) info.position, 0, 0, R.string.dialog_delete);
	super.onCreateContextMenu(menu, v, menuInfo);
}



[1.28] Activity-->Adapter
//setAdapter
alarm_list = (ListView) findViewById(R.id.alarm_list);
adapter = new AlarmImagesAdapter(AlarmDateActivity.this, listData);
alarm_list.setAdapter(adapter);
alarm_list.setOnItemClickListener(listener);



[1.29] AlertDialog
//	AlertDialog
new AlertDialog.Builder(AlarmDateActivity.this)
		.setTitle(R.string.alert)
		.setIcon(R.drawable.alert)
		.setMessage(R.string.delMsg)
		.setPositiveButton(R.string.btnSure,
				new DialogInterface.OnClickListener() {
					public void onClick(DialogInterface dialog,
							int which) {
						int pos = item.getGroupId();
						delData(listData.get(pos).get("name"), pos);
						listData.remove(pos);
						adapter.notifyDataSetChanged();

					}
				})
		.setNegativeButton(R.string.cancel,
				new DialogInterface.OnClickListener() {
					public void onClick(DialogInterface dialog,
							int which) {
					}
				}).show();



[1.30] Toast
//Toast
Toast.makeText(BaseActivityTwo.this, _msg, Toast.LENGTH_SHORT).show();
Toast.makeText(getApplicationContext(), "默认Toast样式",      Toast.LENGTH_SHORT).show();

toast = Toast.makeText(getApplicationContext(),      "自定义位置Toast", Toast.LENGTH_LONG);    
toast.setGravity(Gravity.CENTER, 0, 0);    
toast.show();


[1.31] 


[1.32] 











[1.33] 





[1.34] 


[1.35] Block-->Block
// 1) private    
// 仅在同一个文件中可见

// 2) protected  
// 同一个文件中或子类可见            (子类默认仍是protected)

// 3) public     
// 所有调用的地方都可见            (默认可见性)

// 4) internal   
// 同一个模块中可见

// inner -- 内部类


[1.36] Class-->Class
// 1) abstract
//    抽象类  
abstract类中可以有abstract方法，也可以有非abstract方法
  非abstract类中不可以有abstract方法
abstract类不能使用new运算符创建对象

// 2) final
//    类不可继承，默认属性            (kt 默认)

// 3) enum
//    枚举类

// 4) open
//    类可继承，类默认是final的

// 5) annotation
//    注解类


