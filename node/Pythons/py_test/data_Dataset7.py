import tensorflow as tf
import numpy as np

dataset = tf.data.Dataset.from_tensor_slices(
    {
        "a": np.array([1.0, 2.0, 3.0, 4.0, 5.0]),                                      
        "b": np.random.uniform(size=(5, 2))
    })
 
dataset = dataset.shuffle(buffer_size=5) # <-----
 
iterator = dataset.make_one_shot_iterator()
one_element = iterator.get_next()
with tf.Session() as sess:
    try:
        while True:
            print(sess.run(one_element))
    except tf.errors.OutOfRangeError:
        print("end!")

