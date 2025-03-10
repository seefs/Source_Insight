﻿
基础路径设置:
//basePath = 


/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_android_kotlin.h \[1.1\] 常量、伴生对象
Save:node\android\study\Macro_android_kotlin.h \[1.2\] 引用kotlin常量
Save:node\android\study\Macro_android_kotlin.h \[1.3\] 静态方法
Save:node\android\study\Macro_android_kotlin.h \[1.4\] 引用kotlin静态方法
Save:node\android\study\Macro_android_kotlin.h \[1.5\] object
Save:node\android\study\Macro_android_kotlin.h \[1.6\] constructor-------------构造函数
Save:node\android\study\Macro_android_kotlin.h \[1.7\] 类----------------------
Save:node\android\study\Macro_android_kotlin.h \[1.8\] 修饰符------------------
Save:node\android\study\Macro_android_kotlin.h \[1.9\] val, var, get, set, lateinit, yield
Save:node\android\study\Macro_android_kotlin.h \[1.10\] $ @ `` !!--------------运算符
Save:node\android\study\Macro_android_kotlin.h \[1.11\] object Holder----------单例模式
Save:node\android\study\Macro_android_kotlin.h \[1.12\] @Synchronized----------同步
Save:node\android\study\Macro_android_kotlin.h \[1.13\] by lazy----------------延迟属性
Save:node\android\study\Macro_android_kotlin.h \[1.14\] lambda 函数参数
Save:node\android\study\Macro_android_kotlin.h \[1.15\] lambda
Save:node\android\study\Macro_android_kotlin.h \[1.16\] object?.let {it}-------
Save:node\android\study\Macro_android_kotlin.h \[1.17\] with(object)-----------
Save:node\android\study\Macro_android_kotlin.h \[1.18\] object?.run------------
Save:node\android\study\Macro_android_kotlin.h \[1.19\] object.apply-----------
Save:node\android\study\Macro_android_kotlin.h \[1.20\] object.also {it}-------
Save:node\android\study\Macro_android_kotlin.h \[1.21\] @Nullable--------------注解
Save:node\android\study\Macro_android_kotlin.h \[1.22\] by lazy----------------委托属性
Save:node\android\study\Macro_android_kotlin.h \[1.23\] Map--------------------字典
Save:node\android\study\Macro_android_kotlin.h \[1.24\] Array------------------数组
Save:node\android\study\Macro_android_kotlin.h \[1.25\] List-------------------列表
Save:node\android\study\Macro_android_kotlin.h \[1.26\] Set--------------------集合
Save:node\android\study\Macro_android_kotlin.h \[1.27\] Coroutine--------------协程
// 2. 
Save:node\android\study\Macro_android_kotlin.h \[2.1\] Application------------单例模式
Save:node\android\study\Macro_android_kotlin.h \[2.2\] random()、until
Save:node\android\study\Macro_android_kotlin.h \[2.3\] in & out 怎么记？
Save:node\android\study\Macro_android_kotlin.h \[2.4\] >> 和 <<，shr 和 shr (?)
Save:node\android\study\Macro_android_kotlin.h \[2.5\] FlowLayout 流式布局
Save:node\android\study\Macro_android_kotlin.h \[2.6\] inline reified 
Save:node\android\study\Macro_android_kotlin.h \[2.7\] 具名参数
Save:node\android\study\Macro_android_kotlin.h \[2.8\] 变长参数 vararg
Save:node\android\study\Macro_android_kotlin.h \[2.9\] Class
Save:node\android\study\Macro_android_kotlin.h \[2.10\] Unit、Nothing与Nothing？、Any与Any?
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 常量、伴生对象
//companion object -- 伴生对象
//
//		class StaticDemoActivity {
//		    companion object {
//		       val  LOAN_TYPE = "loanType"
//		       val  LOAN_TITLE = "loanTitle"
//		    }
//		}
//
或者
//companion object StaticParams
//
//		class StaticDemoActivity {
//		    companion object StaticParams{
//		        val  LOAN_TYPE = "loanType"
//		        val  LOAN_TITLE = "loanTitle"
//		    }
//		}
//

 或者
//companion object, const
//
//		class StaticDemoActivity {
//			companion object {
//				const val LOAN_TYPE = "loanType"
//				const val LOAN_TITLE = "loanTitle"
//			}
//		}
//



[1.2] 引用kotlin常量
//		class TestEntity {
//		    public TestEntity () {
//		        String title = StaticDemoActivity.Companion.getLOAN_TITLE();
//		    }
//		}
或者
//		class TestEntity {
//		    public TestEntity () {
//		        String title = StaticDemoActivity.StaticParams.getLOAN_TITLE();
//		    }
//		}
或者
//		class TestEntity {
//		    public TestEntity () {
//		        String title = StaticDemoActivity.LOAN_TITLE;
//		        String type= StaticDemoActivity.LOAN_TYPE;
//		    }
//		}



[1.3] 静态方法
//      class StaticDemoActivity {
//          companion object {
//               fun test(){
//                    、、、
//                }
//          }
//      }
或者
//		class StaticDemoActivity {
//			companion object StaticParams{
//				fun test() {
//					、、、
//				}
//			}
//		}



[1.4] 引用kotlin静态方法
//		class TestEntity {
//		      public TestEntity () {
//		            StaticDemoActivity.Companion.test();
//		      }
//		}
或者
//		class TestEntity {
//		      public TestEntity () {
//		            StaticDemoActivity.StaticParams.test();
//		      }
//		}



[1.5] object
// object
//  1、对象表达式--匿名对象
//     申请时带大括号，覆盖方法，避免写继承类
//
myBridge = object: DiskTask.MyBridge(this@MyBinder) {
    override fun init(vararg p0: String?): Boolean {
        return DiskApi.MyDiskApi.initUserIfNull(typeId)
    }
}


//  2、对象声明----静态类(object xxx, 类似 static class)
//
//	kotlin中调用
//	    MyObject.a()
//	java中调用
//	 	MyObject.INSTANCE.a();



[1.6] constructor -- 构造函数
//constructor -- 构造函数
//  可以带默认值
//
//	class Runnan constructor(var one:Int = 0,val two:String = "two"){
//	    init {
//	        println("one:$one///two:$two")
//	    }
//	    
//	    constructor(three:Int) : this(){
//	        println("three:$three")
//	    }
//	    
//	    constructor( one:Int = 1, two: String = "two", four:Int = 3):this(one, two){
//	        println("one:$one///two:$two///four:$four")
//	    }
//	}



[1.7] 类
// 类
//   嵌套类
//		class Outer {
//		    class Nested {
//		        fun foo() = 2
//		    }
//		}
//	    val demo = Outer.Nested().foo() // == 2
//   内部类
//		class Outer {                   //
//		    private val bar: Int = 1    //
//		    inner class Inner {         //
//		        fun foo() = bar         //
//		    }                           //
//		}                               //
//		val demo = Outer().Inner().foo() // == 1
//		val demo = Outer().Inner().this@Outer
//		super@FilledRectangle.draw()
//   匿名内部类
//		window.add(object : Adapter() {})
//   函数式接口
//      val listener = ActionListener { println("clicked") }
//
//   data class



[1.8] 修饰符
//	类的修饰符
//classModifier: 类属性修饰符，标示类本身特性。
//		abstract    // 抽象类  
//		final       // 类不可继承，默认属性
//		enum        // 枚举类
//		open        // 类可继承，类默认是final的
//		annotation  // 注解类
//
//accessModifier: 访问权限修饰符
//		private    // 仅在同一个文件中可见
//		protected  // 同一个文件中或子类可见
//		public     // 所有调用的地方都可见
//		           //   在接口中属性的修饰符只能用public
//		internal   // 同一个模块中可见



[1.9] val, var, get, set, lateinit, yield
使用 var 声明的属性都有默认的赋一个getter和setter, 
而使用 val 声明的属性，则只会给一个getter

//	var someProperty: String
//	    get() = field
//	    set(value) {
//	    	field = value
//	    }
//
//	val readOnlyProperty: String
//	    get() = field

在继承关系中，如果在父类中使用 val 声明的属性，如果需要修改，则需要使用 override 关键词，
如果使用 var 修饰的属性，则可以在 init block 中进行修改

另外 父类中使用 val 声明的属性，子类中可以使用 var 进行override； 
但是父类中使用 var 声明的属性，子类中不能使用 val 进行override

//  override var name: String

// 接口中的属性 set/get 不能用field
interface IFlyable {
  fun fly()
  
  // 注意这里要用val 不能使用var
  val velocity: Int
    get() = 20
}


//lateinit val/var
//    非空,延迟赋值


//relay 、 yield



[1.10] $ @ `` !!
// $  
//	kotlin 中调用
//		println("constAttri:$constAttri")
//		println("constAttri:${ObjectClass.constAttri}")
//		println("constAttri:${AttriKotlin.constAttri}")


// ``
`is`


// @  标签标签
continue break return@xxx 1


// !!
非空

//
//	函数	功能	等效的java运算
//	and	按位与	            &
//	or	按位或	        	\
//	inv	按位非	        	~
//	xor	按位异或	        ^
//	shl	左移	       		<<
//	shr	右移	       		>>
//	ushr 无符号右移		    >>


[1.11] object Holder
// 饿汉式单例模式
object SingletonDemo

// 静态内部类
class SingletonDemo private constructor() {
    companion object {
        val instance = SingletonHolder.holder
    }

    private object SingletonHolder {
        val holder= SingletonDemo()
    }
}



[1.12] @Synchronized
//同步
@Synchronized
fun get(): SingletonDemo{
    return instance!!
}



[1.13] by lazy
//延迟属性 Lazy
class SingletonDemo private constructor() {
    companion object {
        val instance: SingletonDemo by lazy(mode = LazyThreadSafetyMode.SYNCHRONIZED) {
        SingletonDemo() }
    }
}



[1.14] lambda 函数参数
fun <T> abc(lock: Lock, action: () -> T): T {
    return action()
}


[1.15] lambda
//多回调接口:
mView.setEventListener(object: ExamPlanHomeEventListener{
    public void onSuccess(Data data){
      //todo
    }
});


//单回调接口: (lambda函数, 只支持单抽象方法模型)
mView.setEventListener({
   data: Data ->
   //todo
})

//或者
mView.setEventListener({
   data ->
   //todo
})

//或者 (data参数没有使用)
mView.setEventListener({
  //todo
})

//或者 (参数是一个函数)
mView.setEventListener(){
   //todo
}

//或者 (省略圆括号)
mView.setEventListener{
  //todo
}

// 网上的用法:
edittext_search.setOnFocusChangeListener { v, hasFocus ->
    if(hasFocus){
        chipgroup.clearCheck()
    }
}


[1.16] object?.let {it}
// 作用域函数
//   返回的是最后一行的值
object.let{
   it.todo()//使用it替代object对象
   ...
}

//不为null
object?.let{
   it.todo()
}



[1.17] with(object)
// 省略 user.
//   返回的是最后一行的值
val result = with(user) {
    println("my name is $name, I am $age years old, my phone number is $phoneNum")
    1000
}



[1.18] get(i)?.run
// 类似于 let,with
//   返回的是最后一行的值
// 跟在对象的后面
getItem(position)?.run{
	holder.tvNewsTitle.text = StringUtils.trimToEmpty(titleEn)
}



[1.19] object.apply
// 类似于 run
//   返回的是传入对象的本身 object
mSheetDialogView = View.inflate(activity, R.layout.biz_exam_plan_layout_sheet_inner, null).apply{
   course_comment_tv_label.paint.isFakeBoldText = true
}



[1.20] object.also {it}
// 类似于 let
//   it.
//   返回的是传入对象的本身 object
//   作用:
//       0句柄当作1个句柄用
//       1句柄当作N个句柄用
//       简化类的设计
val result = "testLet".also {
    println(it.length)
    1000
}



[1.21] 注解
// 注解
//  @Nullable 注解
private final @Nullable String accessId;



[1.22] by lazy----------------委托属性
// Lazy 属性
它的值只在第一次访问时计算



[1.23] Map--------------------

var mutableMap: MutableMap<Int, String> = mutableMapOf(1 to "one", 2 to "two", 3 to "three")

mutableMap.forEach {
    print("key:${it.key}...value:${it.value}")
}

for ((key, value) in mutableMap) {
    print("Key:$key....Value:$value")
}

for (en in mInputMap.entries) {
    LogUtils.i(TAG,"  测试 item >>> ${en.key}->${en.value}")
}



[1.24] Array
// Array
val intArray: IntArray = intArrayOf(1, 3, 5, 7)
val charArray: CharArray = charArrayOf('H', 'e', 'l', 'l', 'o', ' ', 'K', 'o', 't', 'l', 'i', 'n')
val strArray: Array<String> = arrayOf("你", "好", "，Kotlin！")
val params = arrayOf<Any>(e.getMessage(), e.getCode())

// Array
ByteArray
ShortArray
LongArray
FloatArray
DoubleArray
BooleanArray

// null array
var asc = Array(3,{it ->0})
val strArray: Array<String?> = arrayOfNulls<String?>(2)


// 二维数据
val ar: Array<ArrayList<String>?> = arrayOfNulls<ArrayList<String>>(2)
ar[0] = ArrayList()
ar[1] = ArrayList()

ar[0]?.add("Java")
ar[0]?.add("Jabb")
ar[1]?.add("aava")
ar[1]?.add("ccbb")

LogUtils.i(TAG,"ar  $ar  ")
//	[Ljava.util.ArrayList;@4d2b2b0  

LogUtils.i(TAG,"ar    " + ar.size)
//	2

LogUtils.i(TAG,"ar    " + ar[0].toString())
//	[Java, Jabb]



[1.25] List
// 1) 创建List不能添加和删除只能遍历
var urlList: List<Int> = listOf(1, 2)

// 2) 可变长度参数
val urlList = arrayListOf<String>()
val urlList = arrayListOf()
val urlList = arrayListOf(a,b,c)

// 3)
val urlList = ArrayList<String>()
val urlList: ArrayList<String> = arrayListOf<String>()
urlList.add("Ajay")
urlList.set(2,"Rohan")

// 4)
val urlList = mutableListOf<String>()
val urlList: MutableList<String> = ArrayList()
val urlList: MutableList<String> = mutableListOf<String>()

// 5) List的遍历
urlList.forEach {
    println("Mutable List Elements:$it")
}


for (value in urlList) {
    print("value:$value")
}


val iterator = list.iterator()
while(iterator.hasNext()){
     println(iterator.next())
}


// 6) List的过滤
var filtedList: List<Int> = mutableList.filter {
    it > 1
}

var filtedList: List<Int> = mutableList.filter { 
	element -> element > 1
}



[1.26] Set--------------------集合
//
var mutableSet: MutableSet<Int> = mutableSetOf(1, 2, 3)

var immutableSet: Set<Int> = hashSetOf(1, 2, 3)

mutableSet.forEach {
    println("$it")
}




[1.27] Coroutine -- 协程
// 非阻塞的--launch
//  launch {    withContext(Dispatchers.IO){}       }
//
// 阻塞的--runBlocking
//  runBlocking  {    withContext(Dispatchers.IO){}       }
//
// 串行--withContext
//   可以调用其他方法(不用带 suspend )
//  launch {    withContext(Dispatchers.IO){}       }
//
// 并行--async
//  launch {    async(Dispatchers.IO){}             }
//
// suspend
//  suspend fun readFile(filename: String,  method: suspend (arg1:String) -> Int): Boolean {   }
//
// 线程切换--doAsync
//  doAsync {    xx()  uiThread {}      }


//	delay ：协程的延时是不会阻塞线程的，只会延时当前协程
//	sleep ：阻塞线程
//  join 和 async / await


// 返回对象
//	launch - 创建协程，返回一个 Job 对象
//	async  - 创建带返回值的协程，返回的是 Deferred 类
//	withContext - 不创建新的协程，在指定协程上运行代码块
//	runBlocking - 不是 GlobalScope 的 API，可以独立使用，区别是 runBlocking 里面的 delay 会阻塞线程，而 launch 创建的不会
//
// GlobalScope
//	    GlobalScope.launch(){}
//
// runBlocking 
//	 import kotlinx.coroutines.runBlocking
//	 fun firstCoroutine() = runBlocking {}
//
// suspend 
//	 import kotlinx.coroutines.GlobalScope
//	 import kotlinx.coroutines.delay
//	 import kotlinx.coroutines.launch
//	 suspend fun firstCoroutine() {}

//Coroutine--job
//   private val uiContext: CoroutineContext = UI
//   private val bgContext: CoroutineContext = CommonPool





[2.1] Application------------单例模式
class MainApplication : Application() {
? ? override fun onCreate() {
? ? ? ? super.onCreate()
? ? ? ? instance = this
? ? }
? ? //单例化的第三种方式：自定义一个非空且只能一次性赋值的委托属性
? ? companion object {
? ? ? ? private var instance: MainApplication by NotNullSingleValueVar()
? ? ? ? fun instance() = instance
? ? }
? ? //定义一个属性管理类，进行非空和重复赋值的判断
? ? private class NotNullSingleValueVar<T>() : ReadWriteProperty<Any?, T> {
? ? ? ? private var value: T? = null
? ? ? ? override fun getValue(thisRef: Any?, property: KProperty<*>): T {
? ? ? ? ? ? return value ?: throw IllegalStateException("application not initialized")
? ? ? ? }
? ? ? ? override fun setValue(thisRef: Any?, property: KProperty<*>, value: T) {
? ? ? ? ? ? this.value = if (this.value == null) value
? ? ? ? ? ? else throw IllegalStateException("application already initialized")
? ? ? ? }
? ? }
}


[2.2] random()、until
(0…10).random() 也可以替换成 (0 until 11).random()




[2.3] in & out 怎么记？
Out (协变),子类向父类转换
如果你的类是将泛型作为内部方法的返回，那么可以用 out：

//	interface Production<out T> {
//	    fun produce(): T
//	}


特点：
In(逆变),父类向子类转换
如果你的类是将泛型对象作为函数的参数，那么可以用 in：

//	interface Consumer<in T> {
//	    fun consume(item: T)
//	}


Invariant(不变)

如果既将泛型作为函数参数，又将泛型作为函数的输出，那就既不用 in 或 out。

//	interface ProductionConsumer<T> {
//	    fun produce(): T
//	    fun consume(item: T)
//	}


[2.4] >> 和 <<，shr 和 shr
Kotlin 的移位居然不用 >> 和 <<，而是 shr 和 shr 这样的中缀表达式，

// Bug: <>= 被识别成 >=
list: ArrayList<String>= ArrayList()



[2.5] FlowLayout 流式布局

//FlowLayout
//  流式布局（标签布局）


//MutableList
//  是一个接口和通用的元素


// constructor, init
//	 构造函数


[2.6] inline reified 
//例子 通过inline把这个前面的代码植入到后面
// reified让泛型参数具体化，定义在inline中 ，kotlin实现为伪泛型，需要这个关键字植入到调用出才可以
inline fun <reified T> Gson.fromJson(json:String):T=fromJson(json,T::class.java)



[2.7] 具名参数
fun sum(arg1: Int, arg2: Int) = arg1 + arg2

sum(arg1 = 1, arg2 = 2)



[2.8] 变长参数 vararg
fun hello(vararg ints: Int) {
  ints.forEach(::println)
}

hello(1,2,3,4,5)


[2.9] Class

//对象获取
person.javaClass// javaClass
person::class.java // javaClass

//类获取
Person::class// kClass
 person.javaClass.kotlin// kClass
(Person::class as Any).javaClass// javaClass
Person::class.java // javaClass


[2.10] Unit、Nothing与Nothing？、Any与Any?
// Unit
//	fun unitExample():kotlin.Unit {
//	    println("test,Unit")
//	}
//	fun unitExample(){
//	    println("test,Unit")
//	    return kotlin.Unit
//	}


// Nothing
//   使用Nothing来表达一个从来不存在
//	object EmptyList : List<Nothing> {
//
//	    override fun get(index: Int): Nothing {
//	        throw IndexOutOfBoundsException()
//	    }
//	}


// Any
//   Any?是可空类型的根
//		println(1 is Any?)
//		println(null is Any)
//













