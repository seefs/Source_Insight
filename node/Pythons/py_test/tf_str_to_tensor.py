

import tensorflow as tf
import numpy as np
#import cPickle


print (">> tensor系列化+反系列化")
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



print (">> str编码+反编码")
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



print (">> np字符串+反字符串")
mynp  =np.array([1,2,3,4],dtype='float32')
mystr =mynp.tostring()
#mydecode = mystr.decode(encoding = "utf-8")
mynp  = np.fromstring(mystr)

print ("mystr: ", mystr)
#print ("mydecode: ", mydecode)
print ("mynp: ", mynp)
print ("")




print (">> example字符串+反字符串")
#mytensor = tf.io.parse_single_example('[1,2]')
#print ("parse_single_example: ", mytensor)

#mytensor = tf.io.ParseExample('[1,2]')
#print ("ParseExample: ", mytensor)
print ("")



print (">> cast字符串+反字符串")
#mytensor = tf.cast('[1,2]', 'list', name=None)
#print ("fromstring: ", mytensor)
print ("")



print (">> cPickle字符串+反字符串")
#mynp  = np.array([1,2,3,4],dtype='float32')
#mycPickle = cPickle.dumps(mynp)
#mynp  = cPickle.loads(mycPickle)
#
#print ("mycPickle: ", mycPickle)
#print ("mynp: ", mynp)
print ("")



print (">> csv解码")
record_defaults = [1.,1.]
mytensor = tf.io.decode_csv('1.,2.', record_defaults=record_defaults, field_delim=',')
print ("mytensor: ", mytensor)
print ("")


#myserialize = '[1.,1.]'
#print ("mytensor: ", list(myserialize))
#
#myserialize = '[1.,1.]'
#print ("mytensor: ", tf.io.DecodeCompressed(myserialize))












