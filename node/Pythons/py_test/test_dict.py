
import random as rng


dict = {}


for j in range(30):
   b = rng.randint(1, 10)
   print ('The randint(0, 10) is:', b)
   dict['wrd_' + str(b)] = dict.get('wrd_' + str(b), 0) + 1


for i in dict: 
   print ("dict[%s]=" % i,dict[i] )
print ("--------------")


for (k,v) in  dict.items(): 
   print ("dict[%s]=" % k,v )
print ("--------------")


# Python3.5ÖÐ£ºiteritems±äÎªitems
#for k,v in dict.iteritems(): 
#   print ("dict[%s]=" % k,v  )
#print ("--------------")


#for k,v in zip(dict.iterkeys(),dict.itervalues()): 
#   print ("dict[%s]=" % k,v  )
#print ("--------------")


