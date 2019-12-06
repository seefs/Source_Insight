
aaa_list = ['A', 'B', 'C']


#条件
bbb = ['D' if i =='A' else i for i in aaa_list]
print("条件: ", bbb)

#列表推导式
bbb = [i for i in range(30) if i % 3 is 0]
print("\nrange(30): ", bbb)
print("")
#  [0, 3, 6, 9, 12, 15, 18, 21, 24, 27]

#generator
list = [x for x in range(10)]
for x in enumerate(list):
    print(x,end=' ')
# (0, 0) (1, 1) (2, 2) (3, 3) (4, 4) (5, 5) (6, 6) (7, 7) (8, 8) (9, 9)

print("\n")
for i,x in enumerate(list):
    print(x,end=' ')
# 0 1 2 3 4 5 6 7 8 9

print("\n")
generator = (x for x in range(10))
for x in generator:
    print(x,end=" ")
print("")
# 0 1 2 3 4 5 6 7 8 9

#字典推导式
mcase = {'a': 10, 'b': 34}
bbb   = {v: k for k, v in mcase.items()}
print("\n字典: ", bbb)
#    {10: 'a', 34: 'b'}

#集合推导式
bbb = {x**2 for x in [1, 1, 2]}
print("\n集合: ", bbb)
#    set([1, 4])


aaa_list = [['A', 1, 2],['B', 1, 2],['C', 1, 2]]
print("\n多次for: ", [i for item in aaa_list for i in item])

ab = [[1,2,3], [5,8], [7,8,9]]
print("\n多次for: ", [i for item in ab for i in item])
#    [1, 2, 3, 5, 8, 7, 8, 9]

aaa_list = [[['AA', 1, 1],['B', 1, 2],['C', 1, 2]],
            [['AB', 2, 2],['B', 1, 2],['C', 1, 2]],
            [['AC', 3, 3],['B', 1, 2],['C', 1, 2]]
            ]
bbb	= [[mode for i in item for mode in i[1:]] for item in aaa_list]
print("\n多次for: ", bbb)




