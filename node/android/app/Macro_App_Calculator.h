
基础路径设置:
//basePath = F:\9820e
//basePath = D:\SVN\app\Calculator
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:node\android\app\Macro_App_Calculator.h \[1.1\] Calculator app路径
Save:node\android\app\Macro_App_Calculator.h \[1.2\] Android.mk 引用库
Save:node\android\app\Macro_App_Calculator.h \[1.3\] gradle 版本配置
Save:node\android\app\Macro_App_Calculator.h \[1.4\] 添加多个res
Save:node\android\app\Macro_App_Calculator.h \[1.5\] res error, 太多了不改
Save:node\android\app\Macro_App_Calculator.h \[2.1\] 文件目录






[1.1] Calculator app路径
基础路径设置:
basePath = D:\SVN\app\Calculator


[1.2] Android.mk 引用库
//1) 查看引用库:
./Android.mk
//	LOCAL_STATIC_JAVA_LIBRARIES := libarity android-support-v4 guava

//2) 移动jar:
cp \\192.168.2.115\xiaoj\9820\idh.code\out\target\common\obj\JAVA_LIBRARIES\libarity_intermediates\javalib.jar libs\libarity.jar
cp \\192.168.2.115\xiaoj\9820\idh.code\out\target\common\obj\JAVA_LIBRARIES\android-support-v4_intermediates\javalib.jar libs\android-support-v4.jar
cp \\192.168.2.115\xiaoj\9820\idh.code\out\target\common\obj\JAVA_LIBRARIES\guava_intermediates\javalib.jar libs\guava.jar
	
//3) 引用jar: 可能位置不对... 可能要去掉最后一个...
build.gradle
//	dependencies {
//		compile files("libarity.jar")
//		compile files("android-support-v4")
//		compile files("guava")
//		compile files("arity-2.1.2.jar")
//		compile "com.android.support:support-v4:+"
//	}
改为: 
//    implementation fileTree(dir: 'libs', include: ['*.jar'])


[1.3] gradle 版本配置
//1) gradle-wrapper.properties
//	错误: Could not find method google() for arguments [] on repository container.
gradle\wrapper\gradle-wrapper.properties
//distributionUrl=https\://services.gradle.org/distributions/gradle-4.1-all.zip
改为:
//distributionUrl=https\://services.gradle.org/distributions/gradle-4.6-all.zip

//2) Could not resolve all files for configuration...
//	错误: 
//		* What went wrong:
//		Could not resolve all files for configuration ':_internal_aapt2_binary'.
//		> Could not find com.android.tools.build:aapt2:3.2.0-4818971.
build.gradle
//	allprojects {
//	    repositories {
//	        google()
//	        jcenter()
//	    }
//	}


[1.4] 添加多个res
//1) Move:
frameworks/base/core/res/res/
//	 TO:
./res_core

//2) 第res_core
build.gradle
//	android {
//		sourceSets {
//	        main {
//	            res.srcDirs = ["res"]
//	            res.srcDirs = ["res_core"]
//	        }
//		}
//	}
//	或者:
//  res.srcDirs += ['res', 'res_core']


[1.5] res error, 太多了不改
res_core\values\styles.xml
//	错误: AAPT: error: invalid resource type 'attr' for parent of style.
//?? <item type =“attr”name =“my_attr”> @ color / pink </ item>



[2.1] 文件目录

AndroidManifest.xml
res\layout\activity_main.xml
vendor\sprd\UniverseUI\ThemeRes\HelloColor\CalculatorRes\theme_values.xml


路径: sprdcalculator
packages\apps\Calculator\src\com\sprd\sprdcalculator\MainActivity.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Plus.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\state\State.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\Utils.java


资源: Calculator
packages\apps\Calculator\AndroidManifest.xml
packages\apps\Calculator\res\layout\activity_main.xml
vendor\sprd\UniverseUI\ThemeRes\HelloColor\CalculatorRes\theme_values.xml




路径: sprdcalculator
packages\apps\Calculator\src\com\sprd\sprdcalculator\CalculatorEditText.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\LogUtils.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\MainActivity.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Divide.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\ICalculator.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Minus.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Multiply.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Percent.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Plus.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\state\CalculatorContext.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\state\State.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\Utils.java


资源: Calculator
packages\apps\Calculator\AndroidManifest.xml
packages\apps\Calculator\res\layout\activity_main.xml
vendor\sprd\UniverseUI\ThemeRes\HelloColor\CalculatorRes\theme_values.xml


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

Main:
packages\apps\Calculator\src\com\sprd\sprdcalculator\MainActivity.java





/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/

CalculatorEditText  
CalculatorExpressionTokenizer  ，替换表达式，值转键，键转值
CalculatorExpressionEvaluator   ，计算表达式
CalculatorExpressionBuilder   ，约束表达式，运算符（逻辑）


//约束表达式，运算符（逻辑）

mFormulaEditText.setEditableFactory(mFormulaEditableFactory);

//计算表达式：

mFormulaEditText.addTextChangedListener(mFormulaTextWatcher);

//计算表达式：enter时
mFormulaEditText.setOnKeyListener(mFormulaOnKeyListener);

//动画
mFormulaEditText.setOnTextSizeChangeListener(this);

//长按删除鍵
mDeleteButton.setOnLongClickListener(this);  



sprdcalculator






下面对源码中各java文件做一番简要的说明（仅以竖屏为例）：
(1)Calculator:
   工程中唯一的Activity，与用户交互。采用一个垂直的线性布局，由3个主要部分组成：最上层的是一个包含有2个CalculatorEditText的CalculatorDisplay以及一个不可见的ImageButton，中间一层是一个FrameLayout，主要包含删除和清空两个重叠的ColorButton。最下面一层是一个控制面板CalculatorViewPager，也就是按键。
(2)CalculatorDisplay:
   ViewSwitcher的子类，主要用于实现分屏效果。
(3)CalculatorEditable:
   一个SpannableStringBuilder，也就是最显眼的用户输入的字符串，通过内部类Factory在CalculatorDisplay被调用。
(4)CalculatorEditText:
   一个EditText，主要实现了长按菜单事件(剪切，复制，粘贴)的功能。
(5)CalculatorViewPager:
   一个ViewPager，在Calculator中通过自定义的PagerAdapter将按键控制面板传进去展示。
(6)ColorButton:
   高级面板的按钮，按下之后，在CalculatorEditText增加符号后，面板会伴随着动画跳转到基本面板。
(7)EventListener:
   按键监听器，调用Logic中的方法进行分类处理，自己实现的功能主要是高级面板按钮按下后增加左括号并跳转至基础面板。
(8)History:
    主要存储了一个Vector数组用来存放HistoryEntry。
(9)HistoryAdapter:
     继承自BaseAdapter，展示历史记录的适配器。
(10)HistoryEntry:
     一个数据结构，历史记录类，展示在HistoryAdapter中，存储在History的Vector数组中。
(11)Logic:
      主要的逻辑处理类，具体实现了对整个应用的操作方法，包括不同按钮点击后的具体实现以及根据输入的字符串，识别操作符并根据优先级进行高精度运算。
(12)PanelSwitcher:
      一个FrameLayout，主要实现了面板切换时候的动画。
(13)Persist:
    用以存储最后一次计算器运行状态的辅助类，在Calculator中调用





///////////////////////////////////////////////////////





EditText .setCustomSelectionActionModeCallback
    屏蔽EditText 长按出来的ActionMode菜单



ListView.setScrollingCacheEnabled(true)后setCacheColorHint(0)
       滚动时不变色,  绘图缓存滚动时显示的颜色
        有GC问题


textview.setMovementMethod(ScrollingMovementMethod.getInstance());
        上下滑动


getPaint().FontMetricsInt   和   getPaint().FontMetrics
        // 文本测量对象 ， 是一样的，只不过FontMetricsInt返回的是int而FontMetrics返回的是float

	* 
        Log.d("Aige", "ascent：" + mFontMetrics.ascent);  
	* 
        Log.d("Aige", "top：" + mFontMetrics.top);  
	* 
        Log.d("Aige", "leading：" + mFontMetrics.leading);  
	* 
        Log.d("Aige", "descent：" + mFontMetrics.descent);  
	* 
        Log.d("Aige", "bottom：" + mFontMetrics.bottom);  





onMeasure



Editable

1.Spannable可以在给定的字符区域内使用各种样式；
2.Editable继承自Spannable，同样也可以在给定的字符区域内使用各种样式；
3.Editable类似于StringBuffer可以增加、删除、修改字符，也就是getText()后可调用append方法设置修改文本内容；
4.TextView的setText()，默认的BufferType为BufferType.NORMAL；
5.EditText的setText()，已经将BuffetType写死为BufferType.EDITABLE；
6.TextView的getText()返回类型为CharSequence;
7.EditText的getText()返回类型为Editable；














