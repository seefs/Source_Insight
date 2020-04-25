
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
//new
implement::
api::
compileOnly::
runtimeOnly::
testImplementation::
debugImplementation::
releaseImplementation::

implement                          依赖不向上传递
api                                        依赖向上传递
compileOnly                      只在编译时有效，不会参与打包
runtimeOnly                       只在生成apk的时候参与打包，编译时不会参与，很少用。
testImplementation         只在单元测试代码的编译以及最终打包测试apk时有效。
debugImplementation    只在 debug 模式的编译和最终的 debug apk 打包时有效
releaseImplementation   仅仅针对 Release 模式的编译和最终的 Release apk 打包。

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
//old
classpath::
compile::
provided::
apk::
testCompile::
debugCompile::
releaseCompile::

classpath      ---> implement
...            ---> implement
compile        ---> api
provided       ---> compileOnly
apk            ---> runtimeOnly
testCompile    ---> testImplementation
debugCompile   ---> debugImplementation
releaseCompile ---> releaseImplementation

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
gradle::

classpath 'com.android.tools.build:gradle:3.5.3'
distributionUrl=https\://services.gradle.org/distributions/gradle-5.4.1-all.zip

classpath 'com.android.tools.build:gradle:3.0.1'
distributionUrl=https\://services.gradle.org/distributions/gradle-4.1-all.zip

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
compileSdkVersion::

名称                    版本号            API等级        发布时间           BuildVersion
Ice Cream Sandwich    4.0.3-4.0.4    15           2011/12/1      BuildVersionCodes.IceCreamSandwichMr1
Jelly Bean            4.2-4.2.2      17           2012/11/1      BuildVersionCodes.JellyBeanMr1
Kitkat                4.4            19           2013/10/1      BuildVersionCodes.KitKat
Marshmallow           6              23           2015/8/1       BuildVersionCodes.M
Oreo                  8              26           2017/8/1       BuildVersionCodes.O
Oreo                  8.1            27           2017/12/1      BuildVersionCodes.OMr1
Pie                   9              28           2018/8/1       BuildVersionCodes.P
Q                     10             29

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

Inward::

Inward   = True
	
开启: 打开内向模式
(开启时)ctrl+E:    打开Demo文件，类似ctrl+R
(关闭时)ctrl+E:    打开项目列表

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Backward::

Backward = 0

正值: 是后注释
(开启时)ctrl+T: 向后注释
(关闭时)ctrl+T:    向前注释

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Number::

Number = True

重新编号(未实现)

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
Foreach::

Foreach = True

ctrl+w:  (未实现)

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
AsFile::

AsFile:base:

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
AnimatorRes::
AnimRes::
AnyRes::
ArrayRes::
AttrRes::
BoolRes::
ColorInt::
ColorRes::
DimenRes::
DrawableRes::
FractionRes::
IdRes::
IntegerRes::
InterpolatorRes::
LayoutRes::
MenuRes::
PluralsRes::
RawRes::
StringRes::
StyleableRes::
StyleRes::
TransitionRes::
XmlRes::
	
------------表明该参数、变量或者函数返回值应该是一个 XXX 类型的资源
@AnimatorRes              Animator 
@AnimRes                  Anim 
@AnyRes                   任意
@ArrayRes                 Array 
@AttrRes                  attribute 
@BoolRes                  布尔
@ColorInt                 颜色值，如AARRGGBB 的整数值。
@ColorRes                 color ，注意和 ColorInt 区别
@DimenRes                 dimension 
@DrawableRes              drawable 
@FractionRes              fraction 
@IdRes                    资源的 ID 类型
@IntegerRes               整数
@InterpolatorRes          interpolator 
@LayoutRes                layout 布局文件
@MenuRes                  menu 
@PluralsRes               plurals 
@RawRes                   raw 
@StringRes                字符串
@StyleableRes             styleable 
@StyleRes                 style 
@TransitionRes            transition 
@XmlRes                   XML 

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
layout_width::
layout_height::
layout_weight::

android:layout_width="match_parent"
android:layout_width="wrap_content"
	
android:layout_height="match_parent"
android:layout_height="wrap_height"

android:layout_weight="1"

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
orientation::
horizontal::
vertical::

android:orientation="horizontal"
android:orientation="vertical"


***** **** ***** ***** ***** ***** ***** ***** ***** **** *****





last_node::










