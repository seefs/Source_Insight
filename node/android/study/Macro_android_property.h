﻿
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. position
Save:node\android\study\Macro_android_property.h \[1.1\] width---------------控件宽度
Save:node\android\study\Macro_android_property.h \[1.2\] widthPixels---------屏幕宽度
Save:node\android\study\Macro_android_property.h \[1.3\] status、title-------标题栏、状态栏高度
Save:node\android\study\Macro_android_property.h \[1.4\] Location------------窗口绝对坐标、屏幕绝对坐标
Save:node\android\study\Macro_android_property.h \[1.5\] drawText.width------绘制宽度
Save:node\android\study\Macro_android_property.h \[1.6\] 
Save:node\android\study\Macro_android_property.h \[1.7\] 
Save:node\android\study\Macro_android_property.h \[1.8\] 
Save:node\android\study\Macro_android_property.h \[1.9\] 
Save:node\android\study\Macro_android_property.h \[1.10\] 
Save:node\android\study\Macro_android_property.h \[1.11\] 
Save:node\android\study\Macro_android_property.h \[1.12\] 
// 2. 
Save:node\android\study\Macro_android_property.h \[2.1\] Paint
Save:node\android\study\Macro_android_property.h \[2.2\] 
Save:node\android\study\Macro_android_property.h \[2.3\] 
Save:node\android\study\Macro_android_property.h \[2.4\] 
Save:node\android\study\Macro_android_property.h \[2.5\] 
Save:node\android\study\Macro_android_property.h \[2.6\] 
Save:node\android\study\Macro_android_property.h \[2.7\] 
Save:node\android\study\Macro_android_property.h \[2.8\] 
Save:node\android\study\Macro_android_property.h \[2.9\] 
Save:node\android\study\Macro_android_property.h \[2.10\] 
Save:node\android\study\Macro_android_property.h \[2.11\] 
Save:node\android\study\Macro_android_property.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] height
//在本Activity中获取当前Activity中控件的height：

	Button button = (Button)findViewById(R.id.button);
	int buttonHeight = button.getHeight();

//在Activity中获取其他xml文件中控件的height：

	LayoutInflater factorys = LayoutInflater.from(当前类.this);
	final View textEntryView = factorys.inflate(R.layout.你要获取的另一个XML, null);
	TextView y_type = (TextView) textEntryView.findViewById(R.id.控件ID);
	int textHeight = y_type.getHeight();
	
//或者

	LayoutInflater inflater = (LayoutInflater) context.getSystemService(LAYOUT_INFLATER_SERVICE);   
	final View layout = inflater.inflate(R.layout.my_kebiao_setting,null); 
	TextView y_type = (TextView)findViewById(R.id.控件ID);
	int textHeight = y_type.getHeight();




[1.2] widthPixels
// widthPixels
DisplayMetrics metrics = new DisplayMetrics();
getWindowManager().getDefaultDisplay().getMetrics(metrics);
int screenWidth=metrics.widthPixels;            //屏幕宽度
int screenHeight=metrics.heightPixels;        //屏幕高度



[1.3] status、title-------标题栏、状态栏高度
// 获取标题栏、状态栏高度：

Rect rect = new Rect(); 
Window win = this.getWindow(); 
win.getDecorView().getWindowVisibleDisplayFrame(rect); 
int statusBarHeight = rect.top; 
int contentViewTop = win.findViewById(Window.ID_ANDROID_CONTENT).getTop(); 
int titleBarHeight = contentViewTop - Variable.statusBarHeight;    
//statusBarHeight为状态栏高度，titleBarHeight为标题栏高度




[1.4] Location------------窗口绝对坐标、屏幕绝对坐标
//
int[] location = new  int[2] ;
view.getLocationInWindow(location); //获取在当前窗口内的绝对坐标
view.getLocationOnScreen(location);//获取在整个屏幕内的绝对坐标
location [0]--->x坐标,
location [1]--->y坐标



[1.5] drawText.width------绘制宽度
// 绘制居中的文本使用getTextBounds()方法获得高度，否则使用 Paint.FontMetrics获得高度。

// 1) 获得高度
val rect = Rect()
paint.getTextBounds("我，。！ ?", 0, 6, rect)
rowHeight = rect.bottom - rect.top


// 2) 已知Top值，获得baseLine
baseLine=top-fontMetrics.top

// 3) 已知Center值，获得baseLine
Paint.FontMetricsInt fontMetricsInt = mPaint.getFontMetricsInt();
int dy = -(fontMetricsInt.bottom + fontMetricsInt.top)/2;
int baseline = getHeight()/2 + dy;
canvas.drawText(mText,0,baseline,mPaint);





[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] Paint
// Paint
mPaint.setStrokeWidth(10);//设置画笔宽度
mPaint.setColor(Color.BLUE);//设置画笔颜色
mPaint1.setStyle(Paint.Style.FILL);//设置画笔样式
mPaint2.setStyle(Paint.Style.FILL_AND_STROKE);//设置画笔样式
mPaint3.setStyle(Paint.Style.STROKE);//设置画笔样式

mPaint.setTextSize();//字体大小
mPaint.setTextAlign();//对齐方式
mPaint.setShadowLayer();//阴影
mPaint.setUnderlineText();//是否显示下划线
mPaint.setFakeBoldText();//true 表示粗体，false表示正常
mPaint.setTextSkewX();//float，设置文本在水平方向上的倾斜，负数表示右斜，正数表示左斜
mPaint.setTextScaleX();//设置比例因子,默认为1，当大于1的时候表示横向拉伸，
// 当小于1的时候表示横向压缩。该方法往往用于一些特效字体的显示场合。
mPaint.setStrikeThruText();//设置文本删除线
mPaint.setLetterSpacing();//设置行间距，默认是0.
mPaint.setTypeface();//设置文本字体样式

**暂不讲解**
mPaint.setLinearText();//设置是否打开线性文本标识
mPaint.setHinting();//设置画笔的隐藏模式
mPaint.setFontFeatureSettings();//设置字体的样式，这个样式和CSS样式很类似
mPaint.setStrokeMiter(float miter );//设置笔画的倾斜度



[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





