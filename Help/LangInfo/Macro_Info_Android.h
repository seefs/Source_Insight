
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
androidTestCompile::
	
classpath      ---> implement
...            ---> implement
compile        ---> api
provided       ---> compileOnly
apk            ---> runtimeOnly
testCompile    ---> testImplementation
debugCompile   ---> debugImplementation
releaseCompile ---> releaseImplementation
androidTestCompile ---> androidTestImplementation

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
ConstraintLayout::
layout_constraintTop_toTopOf::
layout_constraintBottom_toBottomOf::
layout_constraintStart_toStartOf::
layout_constraintStart_toEndOf::

app:layout_constraintBottom_toBottomOf="parent"
app:layout_constraintStart_toStartOf="parent"
app:layout_constraintTop_toTopOf="parent" />
app:layout_constraintStart_toEndOf="@+id/iv_file"

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
layout_constraintTop_toTopOf::

layout_constraintTop_toTopOf       // 将所需视图的顶部与另一个视图的顶部对齐。 
layout_constraintTop_toBottomOf    // 将所需视图的顶部与另一个视图的底部对齐。 
layout_constraintBottom_toTopOf    // 将所需视图的底部与另一个视图的顶部对齐。 
layout_constraintBottom_toBottomOf // 将所需视图的底部与另一个视图的底部对齐。 
layout_constraintLeft_toLeftOf     // 将所需视图的左边与另一个视图的左边对齐。 
layout_constraintLeft_toRightOf    // 将所需视图的左边与另一个视图的右边对齐。 
layout_constraintRight_toLeftOf    // 将所需视图的右边与另一个视图的左边对齐。
layout_constraintRight_toRightOf   // 将所需视图的右边与另一个视图的右边对齐。

layout_constraintDimensionRatio="4:3"  //宽高比
layout_constraintHorizontal_bias="0"  //控件的水平偏移比例
layout_constraintVertical_bias="0.5"   //控件的垂直偏移比例
layout_constraintBaseline_toBaselineOf  //基线
layout_editor_absoluteX    // 表示此控件在布局中X轴的绝对坐标点
layout_editor_absoluteY     // 表示此控件在布局中Y轴的绝对坐标点
layout_constraintGuide_begin    // 表示在布局中引导线距顶部或左边框的距离
layout_constraintGuide_end    // 表示在布局中引导线距底部的距离
layout_constraintGuide_percent

layout_goneMarginLeft
layout_goneMarginTop
layout_goneMarginRight
layout_goneMarginBottom
layout_goneMarginStart
layout_goneMarginEnd
layout_constraintLeft_creator="12"  // 无作用

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
ConstraintLayout::
layout_marginStart::
layout_marginLeft::
layout_marginTop::
layout_marginBottom::

android:layout_marginStart="8dp"
android:layout_marginLeft="8dp"
android:layout_marginTop="8dp"
android:layout_marginBottom="8dp"

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

orientation::
horizontal::
vertical::

android:orientation="horizontal"
android:orientation="vertical"

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
visibility::
visible::
invisible::
gone::

//可见
android:visibility="visible"
view.setVisibility(View.VISIBLE);

//不可见 界面保留了view控件所占有的空间
android:visibility="invisible" 
view.setVisibility(View.INVISIBLE);

//隐藏
android:visibility="gone"
view.setVisibility(View.GONE);

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
CardView::
cardBackgroundColor::
cardElevation::
cardMaxElevation::
cardMaxElevation::
cardUseCompatPadding::
cardPreventCornerOverlap::
	
//
androidx.cardview.widget.CardView
// 基本属性：
app:cardBackgroundColor       这是设置背景颜色
app:cardCornerRadius          这是设置圆角大小
app:cardElevation             这是设置z轴的阴影
app:cardMaxElevation          这是设置z轴的最大高度值
app:cardUseCompatPadding      是否使用CompatPadding
app:cardPreventCornerOverlap  是否使用PreventCornerOverlap
app:contentPadding            设置内容的padding
app:contentPaddingLeft        设置内容的左padding
app:contentPaddingTop         设置内容的上padding
app:contentPaddingRight       设置内容的右padding
app:contentPaddingBottom      设置内容的底padding

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****


last_node::















