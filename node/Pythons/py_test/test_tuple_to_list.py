
import random as rng


list1 = [1, 2, 3, 4]
list2 = [11, 12, 13, 14]
list3 = [[8,1], [8,2], [8,3], [8,4]]



tp = list(zip(list1, list1))
print ('tp:', tp)
# [(1, 1), (2, 2), (3, 3), (4, 4)]


tp = list(zip(list1, list3))
print ('tp:', tp)
# [(1, 1), (2, 2), (3, 3), (4, 4)]


fst = tp[0]
print ('fst:', fst[0], fst[1])

mds = [i[1] for i in tp]
print ('mds:', mds)






