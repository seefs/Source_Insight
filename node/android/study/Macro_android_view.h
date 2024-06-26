﻿
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. view
Save:node\android\study\Macro_android_view.h \[1.1\] 
Save:node\android\study\Macro_android_view.h \[1.2\] MyView()
Save:node\android\study\Macro_android_view.h \[1.3\] onFinishInflate()
Save:node\android\study\Macro_android_view.h \[1.4\] onMeasure()
Save:node\android\study\Macro_android_view.h \[1.5\] onLayout()
Save:node\android\study\Macro_android_view.h \[1.6\] onSizeChanged()
Save:node\android\study\Macro_android_view.h \[1.7\] onDraw()
Save:node\android\study\Macro_android_view.h \[1.8\] invalidate()
Save:node\android\study\Macro_android_view.h \[1.9\] Canvas
Save:node\android\study\Macro_android_view.h \[1.10\] onTouch()---------------优先
Save:node\android\study\Macro_android_view.h \[1.11\] onTouchEvent()----------滞后
Save:node\android\study\Macro_android_view.h \[1.12\] performClick()、onClick()
Save:node\android\study\Macro_android_view.h \[1.13\] onLongClick()-----------最佳解释..
Save:node\android\study\Macro_android_view.h \[1.14\] 
Save:node\android\study\Macro_android_view.h \[1.15\] Listener
Save:node\android\study\Macro_android_view.h \[1.16\] onCreate , onRestart , onDestroy---Activity
Save:node\android\study\Macro_android_view.h \[1.17\] onNewIntent , onStart , onStop ----Activity
Save:node\android\study\Macro_android_view.h \[1.18\] onResume , onPause ----------------Activity
Save:node\android\study\Macro_android_view.h \[1.19\] onSaveInstanceState() , onRestoreInstanceState()------Activity
Save:node\android\study\Macro_android_view.h \[1.20\] onConfigurationChanged()------------Activity
Save:node\android\study\Macro_android_view.h \[1.21\] onCreateView(), onDestoryView()-----Fragment
Save:node\android\study\Macro_android_view.h \[1.22\] onConfigurationChanged()------------Fragment
Save:node\android\study\Macro_android_view.h \[1.23\] setResult() , onActivityResult()----
Save:node\android\study\Macro_android_view.h \[1.24\] show() , onDismiss()----------------Dialog
Save:node\android\study\Macro_android_view.h \[1.25\] 
Save:node\android\study\Macro_android_view.h \[1.26\]
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 




[1.2] MyView()

public MyView(Context context, AttributeSet attrs) {
    super(context, attrs);
    Log.i(TAG,"MyView()");
}



[1.3] onFinishInflate()
// 当View中所有的子控件均被映射成xml后触发

@Override
protected void onFinishInflate() {
    super.onFinishInflate();
    Log.i(TAG,"onFinishInflate()");
}



[1.4] onMeasure()
//在View放置到父容器时调用

@Override
protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
    super.onMeasure(widthMeasureSpec, heightMeasureSpec);
	
// 也可以通过以下方式获取控件的宽和高

    int width = MeasureSpec.getSize(widthMeasureSpec);
   int height = MeasureSpec.getSize(heightMeasureSpec));
   
//   修改View的大小
    setMeasuredDimension(100,100);
}



[1.5] onLayout()




[1.6] onSizeChanged()
//在控件大小发生改变时调用。所以这里初始化会被调用一次
//作用：获取控件的宽和高度

@Override
protected void onSizeChanged(int w, int h, int oldw, int oldh) {
    super.onSizeChanged(w, h, oldw, oldh);
    width = w;
    height = h;
    Log.i(TAG,"onSizeChanged()");
}






[1.7] onDraw()

@Override
protected void onDraw(Canvas canvas) {
    super.onDraw(canvas);
    Log.i(TAG,"onDraw()");

    Rect rect = new Rect(0, 0, width, height);
    Paint paint = new Paint();
    paint.setColor(Color.RED);
    canvas.drawRect(rect, paint);
}



[1.8] invalidate

android中实现view的更新有两组方法，
一组是invalidate，
另一组是postInvalidate，
其中前者是在UI线程自身中使用，而后者在非UI线程中使用。


[1.9] Canvas

Resources 
BitmapFactory
Drawable  一个可画的对象
BitmapDrawable
Bitmap  位图，用于图的处理
Shape
Layer
Matrix 矩阵 旋转
Canvas 将Drawable画到Bitmap上



[1.10] onTouch()---------------优先
// onTouch方法是OnTouchListener接口中的方法
// 执行顺序: A_Down -> B_Down -> A_Move -> B_Move -> A_Up -> B_Up

@Override
public boolean onTouch(View vMotionEvent ev) {
    switch (ev.getAction()) {
        case MotionEvent.ACTION_DOWN:
			if( false ) {
				// false 标记为是点击，长按事件
                //   onTouchEvent() 会被执行
                return false;
			}
			if( false ) {
				// true 标记为非点击，长按事件
				//   onTouchEvent() 不会执行Down, 会执行Move,Up
                return true;
			}
            break;
        case MotionEvent.ACTION_MOVE:
            break;
        case MotionEvent.ACTION_UP:
			if( false ) {
				// false 标记为有长按事件结束时间
                return false;
			}
			if( false ) {
				// true 标记为无长按事件结束时间
                return true;
			}
            break;
        case MotionEvent.ACTION_CANCEL:
            break;
            default;
     }
    return true;
}



[1.11] onTouchEvent()
//不用onTouchEvent()，而用 onTouch() ???

@Override
public boolean onTouchEvent(MotionEvent ev) {
	if( false ) {
		// 会执行Click
        return super.onTouchEvent(event);
	}
	if( false ) {
        performClick();
		// 不执行 move
        return false;
	}
    switch (ev.getAction()) {
        case MotionEvent.ACTION_DOWN:
			if( false ) {
				// 接着执行 move
                return true;
			}
			if( false ) {
				// 接着执行 move
                return super.onTouchEvent(event);
			}
			if( false ) {
				// 不行执行 move
                return false;
			}
			if( false ) {
                // 点击
                performClick();
				// 不执行 move
                return false;
			}
            break;
        case MotionEvent.ACTION_UP:
        case MotionEvent.ACTION_CANCEL:
            break;
            default;
     }
    return true;
}



[1.12] performClick()

// 延时执行
tvBack.post(new Runnable() { @Override public void run() { tvBack.performClick(); } }); 
使用view.post(Runnable)可以解决


// performClick
//   可以不带
@Override
public boolean performClick() {
	return super.performClick();
}


// onTouchEvent
@Override
public boolean onTouchEvent(MotionEvent ev) {
    switch (ev.getAction()) {
        case MotionEvent.ACTION_DOWN:
            performClick();
            break;
        case MotionEvent.ACTION_UP:
        case MotionEvent.ACTION_CANCEL:
            break;
            default;
     }
    return true;
}




[1.13] onLongClick()

@Override
public boolean onTouchEvent(MotionEvent ev) {
	if( false ) {
		// 必须带super.xx, 才会执行长按(和短按)
        return super.onTouchEvent(event);
	}
	if( false ) {
	    // 不会执行长按(和短按)
        return false;
	}
	if( false ) {
	    // 不会执行长按(和短按)
        return true;
	}
	if( false ) {
	    // 强制执行，会执行短按
        performClick();
		// 不执行 move
        return false;
	}
    switch (ev.getAction()) {
        case MotionEvent.ACTION_DOWN:
            mark = 0;
			if( false ) {
                // 强制执行短按
                performClick();
				// 不执行 move
                return false;
			}
    		if( true && mark == 0 ) {
    		    // 响应长按
    		    //   必须带super.xx, 才会执行长按(或短按)
				//   会执行 move
                return super.onTouchEvent(event);
    		}
            break;
        case MotionEvent.ACTION_UP:
    		if( true && mark == 0 ) {
    		    // 响应长按
    		    //   必须带super.xx, 才会执行长按(或短按)
                return super.onTouchEvent(event);
    		}
			if( false ) {
                // 可能会执行长按
                //   前面如果执行了super.xx，这里需要返回true，才能取消长按(或短按)事件标记
                return false;
			}
            break;
        case MotionEvent.ACTION_CANCEL:
            break;
            default;
     }
    return true;
}



[1.14] 




[1.15] Listener
// OnClick
OnClickListener监听事件、
// OnItemClick
高级控件（ListView、RecyclerView）的OnItemClickListener监听事件

// OnCheckedChange
CheckBox的OnCheckedChangeListener

// OnSeekBarChange
SeekBar的OnSeekBarChangeListener




[1.16] onCreate 、onRestart、onDestroy
onCreate 、onStart
// onCreate , onDestroy 创建 销毁


// onRestart  未销毁    重新创建



[1.17] onStart , onStop
// onStart , onStop 可见 不可见
设置事件

//
//onNewIntent() -> onStart() -> onResume()



[1.18] onResume , onPause
// onResume , onPause 可编辑
保存永久数据时，必须在onPause方法中进行


@Override
public void onPause() {
    super.onPause();  // Always call the superclass method first
 	//xxx
}


override fun onResume() {
    super.onResume()
    initListener()
    // 给子界面发消息
    requestOnePermission(REQUEST_ID_INIT)
}


[1.19] onSaveInstanceState() , onRestoreInstanceState()
// 正常返回或关闭，不会触发

// 旋转屏幕，键盘显示隐藏，会触发


@Override
public void onSaveInstanceState(Bundle savedInstanceState) {
    // 保存用户自定义的状态
    savedInstanceState.putInt(STATE_SCORE, mCurrentScore);
    savedInstanceState.putInt(STATE_LEVEL, mCurrentLevel);
    
    // 调用父类交给系统处理，这样系统能保存视图层次结构状态
    super.onSaveInstanceState(savedInstanceState);
}


@Override
protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState); // 记得总是调用父类
   
    // 检查是否正在重新创建一个以前销毁的实例
    if (savedInstanceState != null) {
        // 从已保存状态恢复成员的值
        mCurrentScore = savedInstanceState.getInt(STATE_SCORE);
        mCurrentLevel = savedInstanceState.getInt(STATE_LEVEL);
    } else {
        // 可能初始化一个新实例的默认值的成员
    }
    ...
}



[1.20] onConfigurationChanged()------------Activity
//
android:configChanges="orientation"
android:configChanges="keyboardHidden|orientation"
android:configChanges="keyboardHidden|orientation|screenSize"
//
onConfigurationChanged()



[1.21] onCreateView(), onDestoryView()-----Fragment
// 1) fragment被创建
onAttach()
onCreate()
onCreateView()
onViewCreated()
onActivityCreated()
// 2) 可见隐藏
onStart()
onResume()
onPause()
onStop()
// 3) fragment被销毁
//onPause()
//onStop()
onDestroyView()
onDestroy()
onDetach()



[1.22] onConfigurationChanged()-----------Fragment
android:freezeText为true
//
不要在Fragment中的 onSaveInstanceState 中保存View状态

public class MainFragment extends Fragment {

    private String dataGotFromServer;

    @Override
    public void onSaveInstanceState(Bundle outState) {
        super.onSaveInstanceState(outState);
        outState.putString("dataGotFromServer", dataGotFromServer);
    }

    @Override
    public void onActivityCreated(Bundle savedInstanceState) {
        super.onActivityCreated(savedInstanceState);
        dataGotFromServer = savedInstanceState.getString("dataGotFromServer");
    }
}



[1.23] 



[1.24] show() , onDismiss()----------------Dialog

Dialog的生命周期一共用以下6个方法： 
onCreate()，show()，onStart() ，cancel()，onDismiss()，Stop() 。

Dialog仅在在第一次启动时候会执行onCreate（）方法（之后无论该Dialog执行Dismiss()，cancel()，stop()，Dialog都不会再执行onCreate()方法）。

show() 和 onStart()在每次Dialog显示时都会依次执行。

onDismiss() 和 stop() 在每次Dialog消失的时候都会依次执行。

cancel() 是在点击BACK按钮或者Dialog外部时触发，然后依次执行onDismiss() 和 stop()。



[1.25] 




[1.26] 


