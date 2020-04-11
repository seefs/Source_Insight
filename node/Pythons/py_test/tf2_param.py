
import os
import tensorflow as tf

flags = tf.compat.v1.flags
FLAGS = flags.FLAGS

# parameters
# --main_a=a --second_b=true --second_c=23
flags.DEFINE_string("main_a", None, "main a.")
flags.DEFINE_bool("second_b", False, "second b.")
flags.DEFINE_integer("second_c", 8, "second c.")
flags.DEFINE_float("second_d", 5e-5, "second d.")


  
def main(_):
    print ("  main_a: %s" % (FLAGS.main_a))
    print ("  second_b: %s" % (FLAGS.second_b))
    print ("  second_c: %s" % (FLAGS.second_c))
    print ("  second_d: %s" % (FLAGS.second_d))


if __name__ == "__main__":
	flags.mark_flag_as_required("main_a")

#	tf.app.run()
	tf.compat.v1.app.run()
