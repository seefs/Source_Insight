

dict = {'name': 'Zara', 'age': 7, 'class': 'First'}

# 字典转为字符串，返回：<type 'str'> {'age': 7, 'name': 'Zara', 'class': 'First'}
print
type(str(dict)), str(dict)

# 字典可以转为元组，返回：('age', 'name', 'class')
print
tuple(dict)

# 字典可以转为元组，返回：(7, 'Zara', 'First')
print
tuple(dict.values())

# 字典转为列表，返回：['age', 'name', 'class']
print
list(dict)

# 字典转为列表
print
dict.values
# 2、元组
tup = (1, 2, 3, 4, 5)

# 元组转为字符串，返回：(1, 2, 3, 4, 5)
print
tup.__str__()

# 元组转为列表，返回：[1, 2, 3, 4, 5]
print
list(tup)

# 元组不可以转为字典
# 3、列表
nums = [1, 3, 5, 7, 8, 13, 20];

# 列表转为字符串，返回：[1, 3, 5, 7, 8, 13, 20]
print
str(nums)

# 列表转为元组，返回：(1, 3, 5, 7, 8, 13, 20)
print
tuple(nums)

# 列表不可以转为字典
# 4、字符串
# 字符串转为元组，返回：(1, 2, 3)
print
tuple(eval("(1,2,3)"))

# 字符串转为列表，返回：[1, 2, 3]
print
list(eval("(1,2,3)"))

# 字符串转为字典，返回：<type 'dict'>
print
type(eval("{'name':'ljq', 'age':24}"))
