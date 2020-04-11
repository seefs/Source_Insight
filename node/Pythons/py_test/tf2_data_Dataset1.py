
import tensorflow as  tf
dataset = tf.data.Dataset.from_tensor_slices([0,1,2,3,4,5,6,7,8,9])
dataset=dataset.shuffle(buffer_size=2)
dataset = dataset.batch(batch_size=1)
iterator = dataset.make_initializable_iterator()
next_element=iterator.get_next()
 
init_op = iterator.initializer
 
with tf.Session() as sess:
    sess.run(init_op)
    for i in range(10):
        print(sess.run(next_element))



