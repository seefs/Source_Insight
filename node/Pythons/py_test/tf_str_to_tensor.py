

import tensorflow as tf
import numpy as np
#import cPickle


print (">> tensorÏµÁÐ»¯+·´ÏµÁÐ»¯")
mylist=np.array([1,2,3,4],dtype='float32')
print ("mylist: ", mylist)

mytype = mylist.dtype
#mytype = type(mylist)
print ("mytype: ", mytype)

myserialize = tf.io.serialize_tensor(mylist)
print ("myserialize: ", myserialize)

#tf.DType
mytensor = tf.io.parse_tensor(myserialize, mytype)
print ("mytensor: ", mytensor)
print ("")



print (">> str±àÂë+·´±àÂë")
str_1 = '[1,2]'.encode(encoding = "utf-8")
print ("str_1: ", str_1)
str_2 = str_1.decode('utf-8')
print ("str_2: ", str_2)
print ("str_3: ", str(str_1) + "----------")
str_4 = "tf.Tensor(" + str(str_1) + ", shape=(), dtype=string)"
print ("str_4: ", str_4)
#mytensor = tf.io.parse_tensor(str_4, 'float32')
#print ("mytensor: ", mytensor)
print ("")



print (">> np×Ö·û´®+·´×Ö·û´®")
mynp  =np.array([1,2,3,4],dtype='float32')
mystr =mynp.tostring()
#mydecode = mystr.decode(encoding = "utf-8")
mynp  = np.fromstring(mystr)

print ("mystr: ", mystr)
#print ("mydecode: ", mydecode)
print ("mynp: ", mynp)
print ("")




print (">> example×Ö·û´®+·´×Ö·û´®")
#mytensor = tf.io.parse_single_example('[1,2]')
#print ("parse_single_example: ", mytensor)

#mytensor = tf.io.ParseExample('[1,2]')
#print ("ParseExample: ", mytensor)
print ("")



print (">> cast×Ö·û´®+·´×Ö·û´®")
#mytensor = tf.cast('[1,2]', 'list', name=None)
#print ("fromstring: ", mytensor)
print ("")



print (">> cPickle×Ö·û´®+·´×Ö·û´®")
#mynp  = np.array([1,2,3,4],dtype='float32')
#mycPickle = cPickle.dumps(mynp)
#mynp  = cPickle.loads(mycPickle)
#
#print ("mycPickle: ", mycPickle)
#print ("mynp: ", mynp)
print ("")



print (">> csv½âÂë")
record_defaults = [1.,1.]
mytensor = tf.io.decode_csv('1.,2.', record_defaults=record_defaults, field_delim=',')
print ("mytensor: ", mytensor)
print ("")


#myserialize = '[1.,1.]'
#print ("mytensor: ", list(myserialize))
#
#myserialize = '[1.,1.]'
#print ("mytensor: ", tf.io.DecodeCompressed(myserialize))












