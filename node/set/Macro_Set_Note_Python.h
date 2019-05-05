
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
abs::
1. abs()　　获取绝对值

1 >>> abs(-10)
2 10
3 >>> abs(10)
4 10
5 >>> abs(0)
6 0
7 >>> a = -10
8 >>> a.__abs__()
9 10
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
all::
2. all()　　接受一个迭代器，如果迭代器的所有元素都为真，那么返回True，否则返回False

1 >>> tmp_1 = ['python',123]
2 >>> all(tmp_1)
3 True
4 >>> tmp_2 = []
5 >>> all(tmp_2)
6 True
7 >>> tmp_3 = [0]
8 >>> all(tmp_3)
9 False
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
any::
ascii::
bin::
bool::
bytes::
3. any()　　接受一个迭代器，如果迭代器里有一个元素为真，那么返回True,否则返回False

4. ascii()　　调用对象的__repr__()方法，获得该方法的返回值.

5. bin(),　6. oct(),  7. hex()  　　三个函数功能为：将十进制数分别转换为2/8/16进制。

8. bool()　　测试一个对象是True还是False.

9. bytes()　　将一个字符串转换成字节类型

1 >>> s = 'python'
2 >>> x = bytes(s, encoding='utf-8')
3 >>> x
4 b'python'
5 >>> a = '王'
6 >>> s = bytes(a, encoding='utf-8')
7 >>> s
8 b'\xe7\x8e\x8b'
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
str::
10. str()　　将字符类型/数值类型等转换为字符串类型

1 >>> str(b'\xe7\x8e\x8b', encoding='utf-8')  # 字节转换为字符串
2 '王'
3 >>> str(1)   # 整数转换为字符串
4 '1'
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
challable::
11. challable()　　判断对象是否可以被调用，能被调用的对象就是一个callables对象，比如函数和带有__call__()的实例

1 >>> callable(max)
2 True
3 >>> callable([1, 2, 3])
4 False
5 >>> callable(None)
6 False
7 >>> callable('str')
8 False
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
char::
ord::
12. char()，

13. ord()　　查看十进制数对应的ASCII字符/查看某个ASCII对应的十进制数

 1 >>> chr(-1)
 2 Traceback (most recent call last):
 3   File "<pyshell#26>", line 1, in <module>
 4     chr(-1)
 5 ValueError: chr() arg not in range(0x110000)
 6 >>> chr(0)
 7 '\x00'
 8 >>> ord('\x00')
 9 0
10 >>> ord('7')
11 55
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
classmethod::
14. classmethod()　　用来指定一个方法为类的方法，由类直接调用执行，只有一个cls参数,执行雷的方法时，自动将调用该方法的类赋值给cls.没有此参数指定的类的方法为实例方法

 1 class Province:
 2     country = "中国"
 3       
 4     def __init__(self, name):
 5         self.name = name
 6       
 7     @classmethod
 8     def show(cls):  # 类方法，由类调用，最少要有一个参数cls，调用的时候这个参数不用传值，自动将类名赋值给cls
 9         print(cls)
10       
11 # 调用方法
12 Province.show()
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
complie::
15. complie()　　将字符串编译成python能识别或可以执行的代码，也可以将文字读成字符串再编译

1 compile(source, filename, mode, flags=0, dont_inherit=False, optimize=-1)
2 将source编译为代码或者AST对象。代码对象能过通过exec语句来执行或者eval()进行求值。
3 参数source：字符串或者AST（abstract syntax trees）对象。
4 参数filename：代码文件名称，如果不是从文件读取代码则传递一些可辨认的值。
5 参数model：指定编译代码的种类。可以指定'exec', 'eval', 'single'。
6 参数flag和dont_inherit：这两个参数为可选参数。
1 >>> s  = "print('helloworld')"
2 >>> r = compile(s, "<string>", "exec")
3 >>> r
4 <code object <module> at 0x000001C648038390, file "<string>", line 1>

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
complex::
16. complex()

1 创建一个值为real + imag * j的复数或者转化一个字符串或数为复数。如果第一个参数是字符串，则不需要指定第二个参数。
2 参数real：int，long，float或字符串。
3 参数imag：int，long，float。
17. delattr()　　删除对象的属性

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
dict::
18. dict()　　创建数据字典

1 >>> a = dict()  空字典
2 >>> a
3 {}
4 >>> b = dict(one = 1, two =2)
5 >>> b
6 {'one': 1, 'two': 2}
7 >>> c = dict({'one':1 ,'two':2})
8 >>> c
9 {'one': 1, 'two': 2}
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
dir::
19. dir()　　不带参数时返回当前范围内的变量，方法和定义的类型列表，带参数时返回参数的属性，方法列表

1 >>> dir()
2 ['__builtins__', '__doc__', '__loader__', '__name__', '__package__', '__spec__', 'li', 'li1', 'li2', 'li_1']
3 >>> dir(list)
4 ['__add__', '__class__', '__contains__', '__delattr__', '__delitem__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__getitem__', '__gt__', '__hash__', '__iadd__', '__imul__', '__init__', '__iter__', '__le__', '__len__', '__lt__', '__mul__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__reversed__', '__rmul__', '__setattr__', '__setitem__', '__sizeof__', '__str__', '__subclasshook__', 'append', 'clear', 'copy', 'count', 'extend', 'index', 'insert', 'pop', 'remove', 'reverse', 'sort']
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

divmod::
20. divmod()　　分别取商和余数

1 >>> divmod(20,6)
2 (3, 2)

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
enumerate::
21. enumerate()　　返回一个可以枚举的对象，该对象的next()方法将返回一个元组

1 >>> test = ['a', 'b', 'c']
2 >>> for k,v in enumerate(test):
3     print(k,v)
4  
5 # 输出结果：
6 0 a
7 1 b
8 2 c
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

eval::
22. eval()　　将字符串str当成有效的表达式来求值并返回计算结果

1 >>> s = "1+2*3"
2 >>> type(s)
3 <class 'str'>
4 >>> eval(s)
5 7
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
exec::
23. exec()　　执行字符串或complie方法编译过的字符串，没有返回值

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
filter::
24. filter()　　过滤器，构造一个序列，等价于[ item for item in iterables if function(item)]，在函数中设定过滤条件，逐一循环迭代器中的元素，将返回值为True时的元素留下，形成一个filter类型数据

1 filter(function, iterable)
2 参数function：返回值为True或False的函数，可以为None。
3 参数iterable：序列或可迭代对象。
4 >>> def bigerthan5(x):
5 ...     return x > 5
6 >>> filter(bigerthan5, [3, 4, 5, 6, 7, 8])
7 [6, 7, 8]
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
float::
25. float()　　讲一个字符串或整数转换为浮点数

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
 1 >>> float()
 2 0.0
 3 >>> float('123')
 4 123.0
 5 >>> float(1)
 6 1.0
 7 >>> float('a')
 8 Traceback (most recent call last):
 9   File "<pyshell#45>", line 1, in <module>
10     float('a')
11 ValueError: could not convert string to float: 'a'
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
format::
26. format()　　格式化输出字符串，format(value, format_spec)实质上是调用了value的__format__(format_spec)方法

1 >>> "I am {0}, I like {1}!".format("wang", "moon")    
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
2 'I am wang, I like moon!'
frozenset::
27. frozenset()　　创建一个不可修改的集合

1 frozenset([iterable])
2 set和frozenset最本质的区别是前者是可变的，后者是不可变的。当集合对象会被改变时（例如删除，添加元素），只能使用set，
3 一般来说使用fronzet的地方都可以使用set。
4 参数iterable：可迭代对象。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
getattr::
28. getattr()　　获取对象的属性

 1 getattr(object, name [, defalut])
 2 获取对象object名为name的特性，如果object不包含名为name的特性，将会抛出AttributeError异常；如果不包含名为name的特性
 3 且提供default参数，将返回default。
 4 参数object：对象
 5 参数name：对象的特性名
 6 参数default：缺省返回值
 7 >>> append = getattr(list, 'append')
 8 >>> append
 9 <method 'append' of 'list' objects>
10 >>> mylist = [3, 4, 5]
11 >>> append(mylist, 6)
12 >>> mylist
13 [3, 4, 5, 6]
14 >>> method = getattr(list, 'add')
15 Traceback (most recent call last):
16   File "<stdin>", line 1, in <module>
17 AttributeError: type object 'list' has no attribute 'add'
18 >>> method = getattr(list, 'add', 'NoMethod')
19 >>> method
20 'NoMethod'
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

globals::
29. globals()　　返回一个描述当前全局变量的字典

1 >>> a = 1
2 >>> globals()
3 {'__loader__': <class '_frozen_importlib.BuiltinImporter'>, 'a': 1, '__builtins__': <module 'builtins' (built-in)>, '__doc__': None, '__name__': '__main__', '__package__': None, '__spec__': None}

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
hasattr::
30. hasattr()

1 hasattr(object，name)
2 判断对象object是否包含名为name的特性（hasattr是通过调用getattr(object，name)）是否抛出异常来实现的。
3 参数object：对象
4 参数name：特性名称
5 >>> hasattr(list, 'append')
6 True
7 >>> hasattr(list, 'add')
8 False
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
hash::
31. hash()　　哈希值

1 hash(object)
2 如果对象object为哈希表类型，返回对象object的哈希值。哈希值为整数，在字典查找中，哈希值用于快递比价字典的键。
3 两个数值如果相等，则哈希值也相等。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
help::
32. help()　　返回对象的帮助文档

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
id::
33. id()　　返回对象的内存地址

1 >>> a = 1
2 >>> id(a)
3 1588522800
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
input::
34. input()　　获取用户输入内容

1 num = input("请输入一个数字：")
2 # 用户输入3
3 print(num)
4 # 输出结果
5 3
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
int::
35. int()　　将一个字符串或数值转换为一个普通整数

1 int([x[,radix]])
2 如果参数是字符串，那么它可能包含符号和小数点。参数radix表示转换的基数（默认是10进制）。
3 它可以是[2,36]范围内的值，或者0。如果是0，系统将根据字符串内容来解析。
4 如果提供了参数radix，但参数x并不是一个字符串，将抛出TypeError异常；
5 否则，参数x必须是数值（普通整数，长整数，浮点数）。通过舍去小数点来转换浮点数。
6 如果超出了普通整数的表示范围，一个长整数被返回。
7 如果没有提供参数，函数返回0。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
isinstance::
36. isinstance()　　检查对象是否是类的对象，返回True或False

1 isinstance(obj, cls)
2 检查obj是否是类cls的对象, 返回True 或 False
3 class Foo(object):
4     pass
5 obj = Foo()
6 isinstance(obj, Foo)

issubclass::
37. issubclass()　　检查一个类是否是另一个类的子类。返回True或False

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
 1 issubclass(sub, super)
 2 检查sub类是否是super类的派生类（子类）。返回True 或 False
 3  
 4 class Foo(object):
 5     pass
 6    
 7 class Bar(Foo):
 8     pass
 9    
10 issubclass(Bar, Foo)
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
iter::
38. iter()

1 iter(o[, sentinel])
2 返回一个iterator对象。该函数对于第一个参数的解析依赖于第二个参数。
3 如果没有提供第二个参数，参数o必须是一个集合对象，支持遍历功能（__iter__()方法）或支持序列功能（__getitem__()方法），
4 参数为整数，从零开始。如果不支持这两种功能，将处罚TypeError异常。
5 如果提供了第二个参数，参数o必须是一个可调用对象。在这种情况下创建一个iterator对象，每次调用iterator的next()方法来无
6 参数的调用o，如果返回值等于参数sentinel，触发StopIteration异常，否则将返回该值。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
len::
39. len()　　返回对象长度，参数可以是序列类型（字符串，元组或列表）或映射类型（如字典）

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
list::
40. list()　　列表构造函数

1 list([iterable])
2 list的构造函数。参数iterable是可选的，它可以是序列，支持编译的容器对象，或iterator对象。
3 该函数创建一个元素值，顺序与参数iterable一致的列表。如果参数iterable是一个列表，将创建
4 列表的一个拷贝并返回，就像语句iterables[:]。　
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
locals::
41. locals()　　打印当前可用的局部变量的字典

1 不要修改locals()返回的字典中的内容；改变可能不会影响解析器对局部变量的使用。
2 在函数体内调用locals()，返回的是自由变量。修改自由变量不会影响解析器对变量的使用。
3 不能在类区域内返回自由变量。

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

map::
42. map()
 1 map(function, iterable,...)
 2 对于参数iterable中的每个元素都应用fuction函数，并将结果作为列表返回。
 3 如果有多个iterable参数，那么fuction函数必须接收多个参数，这些iterable中相同索引处的元素将并行的作为function函数的参数。
 4 如果一个iterable中元素的个数比其他少，那么将用None来扩展改iterable使元素个数一致。
 5 如果有多个iterable且function为None，map()将返回由元组组成的列表，每个元组包含所有iterable中对应索引处值。
 6 参数iterable必须是一个序列或任何可遍历对象，函数返回的往往是一个列表(list)。
 7  
 8 li = [1,2,3]
 9 data = map(lambda x :x*100,li)
10 print(type(data))
11 data = list(data)
12 print(data)
13  
14 运行结果：
15  
16 <class 'map'>
17 [100, 200, 300]
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

max::
43. max()　　返回给定元素里最大值

1 max(iterable [,args...][, key])
2 如果只提供iterable参数，函数返回可遍历对象（如：字符串，元组或列表）中最大的非空元素。
3 如果提供多个参数，那么返回值最大的那个参数。
4 可选参数key是单参数的排序函数。
5 如果提供key参数，必须是以命名的形式，如：max(a, b, c, key = fun)

meoryview::
44. meoryview()

min::
45. min()　　返回给定元素里最小值

1 min(iterable [,args...][, key])
2 如果只提供iterable参数，函数返回可遍历对象（如：字符串，元组或列表）中最小的非空元素。
3 如果提供多个参数，那么返回值最小的那个参数。
4 可选参数key是单参数的排序函数。
5 如果提供key参数，必须是以命名的形式，如：max(a, b, c, key = fun)


***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
next::
46. next()　　返回一个可迭代数据结构（如列表）中的下一项

object::
47. object()

1 获取一个新的，无特性(geatureless)对象。Object是所有类的基类。它提供的方法将在所有的类型实例中共享。
2 该函数时2.2.版本新增，2.3版本之后，该函数不接受任何参数。

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
open::
48. open()　　打开文件

 1 open(filename [, mode [, bufsize]])
 2 打开一个文件，返回一个file对象。 如果文件无法打开，将处罚IOError异常。
 3 应该使用open()来代替直接使用file类型的构造函数打开文件。
 4 参数filename表示将要被打开的文件的路径字符串；
 5 参数mode表示打开的模式，最常用的模式有：'r'表示读文本，'w'表示写文本文件，'a'表示在文件中追加。
 6 Mode的默认值是'r'。
 7 当操作的是二进制文件时，只要在模式值上添加'b'。这样提高了程序的可移植性。
 8 可选参数bufsize定义了文件缓冲区的大小。0表示不缓冲；1表示行缓冲；任何其他正数表示使用该大小的缓冲区；
 9 负数表示使用系统默认缓冲区大小，对于tty设备它往往是行缓冲，而对于其他文件往往完全缓冲。如果参数值被省却。
10 使用系统默认值。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

pow::
49. pow()　　幂函数

1 r = pow(2, 10)  # 2的10次方
2 print(r)
3               
4 # 输出
5 1024
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

print::
50. print()　　输出函数

1 python2中的print语句被python3中的print()函数取代。
2 如何限制print的默认换行：
3 1. python2版本下，在print输出的最后加一个逗号','
4 2. python3.4以后，print(value, ...,sep='',end='\n',file=sys.stdout,flush=False),将end设为空即可。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
property::
51. property()

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
range::
52. range()　　根据需要生成一个指定范围的数字，可以提供你需要的控制来迭代指定的次数

1 用于创建包含连续算术值的列表(list)。常用于for循环。参数必须是普通整数。
2 参数step默认值为1，参数start的默认值为0。
3 全参数调用该函数将返回一个普通整数列表。
4 step 可以是正整数或者负整数。不可以为0，否则将处罚ValueError异常。
5 range(3)代表0,1,2.等价于range(0,3)
6 >>> range(0,10,2)  #第一个参数是起始数，第二个是终止数(不包含这个)，第三个数步数
7 >>>[0,2,4,6,8]
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

repr::
53. repr()　　将任意值转换为字符串，供计时器读取的形式

1 repr(object)
2 返回一个对象的字符串表示。有时可以使用这个函数来访问操作。
3 对于许多类型来说，repr()尝试返回一个字符串，eval()方法可以使用该字符串产生对象；
4 否则用尖括号括起来的，包含类名称和其他二外信息的字符串被返回。

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
reversed::
54. reversed()　　　反转，逆序对象

1 reversed(seq)
2 返回一个逆序的iterator对象。参数seq必须是一个包含__reversed__()方法的对象或支持序列操作(__len__()和__getitem__())
3 该函数是2.4中新增的
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
round::
55. round()　　四舍五入

1 round(x [, n])
2 对参数x的第n+1位小数进行四舍五入，返回一个小数位数为n的浮点数。
3 参数n的默认值是0。结果是一个浮点数。如round(0.5)结果为1.0
4 >>> round(4,6)
5 4
6 >>> round(5,6)
7 5
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

set::
56. set()

setattr::
57. setattr()　　与getattr()相对应

slice::
58. slice()　　切片功能

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
sorted::
59. sorted()　　排序

 1 >>> sorted([36,6,-12,9,-22])  列表排序
 2 [-22, -12, 6, 9, 36]
 3 >>> sorted([36,6,-12,9,-22],key=abs) 高阶函数，以绝对值大小排序
 4 [6, 9, -12, -22, 36]
 5 >>> sorted(['bob', 'about', 'Zoo', 'Credit'])  字符串排序，按照ASCII的大小排序
 6 ['Credit', 'Zoo', 'about', 'bob']
 7 如果需要排序的是一个元组，则需要使用参数key，也就是关键字。
 8 >>> a = [('b',2), ('a',1), ('c',0)]
 9 >>> list(sorted(a,key=lambda x:x[1]))   按照元组第二个元素排序
10 [('c', 0), ('a', 1), ('b', 2)]
11 >>> list(sorted(a,key=lambda x:x[0]))   按照元组第一个元素排序
12 [('a', 1), ('b', 2), ('c', 0)]
13 >>> sorted(['bob', 'about', 'Zoo', 'Credit'],key=str.lower) 忽略大小写排序
14 ['about', 'bob', 'Credit', 'Zoo'] 
15 >>> sorted(['bob', 'about', 'Zoo', 'Credit'],key=str.lower,reverse=True) 反向排序
16 ['Zoo', 'Credit', 'bob', 'about']
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
staticmethod::
60. staticmethod()
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

str::
sum::
super::
tuple::
type::
vars::
61. str()　　字符串构造函数

62. sum()　　求和

63. super()　　调用父类的方法

64. tuple()　　元组构造函数

65. type()　　显示对象所属的类型

66. vars()　　

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
zip::
67. zip()　　将对象逐一配对

1 list_1 = [1,2,3]
2 list_2 = ['a','b','c']
3 s = zip(list_1,list_2)
4 print(list(s))
5  
6 运行结果：
7  
8 [(1, 'a'), (2, 'b'), (3, 'c')]

1 a = [(1,),(2,),(3,)]
2 r = zip(*a)
3 print(list(r))
4 运行结果：
5 [(1, 2, 3)]
6 print(list(r)[0])
7 运行结果：
8 (1, 2, 3)
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****
 

__import__::
68. __import__()



***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

self::

self 代表类的实例，而非类
    def prt(self):
        print(self)


***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

33个关键字
False::
None::
True::
and::
as::
关键字
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

assert::
break::
class::
continue::
def::

del::
elif::
else::
except::
finally::

关键字
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

for::
from::
global::
if::
import::

in::
is::
lambda::
nonlocal::
not::

关键字
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

or::
pass::
raise::
return::
try::

while::
with::
yield

关键字
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

split::
语法
split() 方法语法：

str.split(str="", num=string.count(str)).
参数
str -- 分隔符，默认为所有的空字符，包括空格、换行(\n)、制表符(\t)等。
num -- 分割次数。默认为 -1, 即分隔所有。


***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

1、match::
re.match(pattern, string[, flags])  

从首字母开始开始匹配，string如果包含pattern子串，则匹配成功，返回Match对象，失败则返回None，若要完全匹配，pattern要以$结尾。

2、search::
re.search(pattern, string[, flags])  
若string中包含pattern子串，则返回Match对象，否则返回None，注意，如果string中存在多个pattern子串，只返回第一个。

3、findall::
re.findall(pattern, string[, flags])  
返回string中所有与pattern相匹配的全部字串，返回形式为数组。

4、finditer::
re.finditer(pattern, string[, flags])  
返回string中所有与pattern相匹配的全部字串，返回形式为迭代器。
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

 group::
 group() 同group（0）就是匹配正则表达式整体结果
 group(1) 列出第一个括号匹配部分，group(2) 列出第二个括号匹配部分，group(3) 列出第三个括号匹配部分。
group(num=0)	匹配的整个表达式的字符串，group() 可以一次输入多个组号，在这种情况下它将返回一个包含那些组所对应值的元组。
groups()	返回一个包含所有小组字符串的元组，从 1 到 所含的小组号。


a = "123abc456"
print re.search("([0-9]*)([a-z]*)([0-9]*)",a).group(0)   #123abc456,返回整体
***** **** ***** ***** ***** ***** ***** ***** ***** **** *****

yield::
把 yield 看做“return”

***** **** ***** ***** ***** ***** ***** ***** ***** **** *****











































