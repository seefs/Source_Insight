 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf
import numpy as np


# create data
#   x_data:
#     0.2935756  0.9394031  0.8568484  0.5922694...]
#
x_data = np.random.rand(100).astype(np.float32)
y_data = x_data*0.1 + 0.3

### create tensorflow structure start ###
#   tf.random_uniform:
#     从均匀分布中输出随机值----一维整数，它在 [x,y] 范围内
#     输出的类型：dtype=tf.float16、float32、float64、int32、orint64.
Weights = tf.Variable(tf.random_uniform([1], -1.0, 1.0), name='example')
# 偏差
#   tf.zeros:
#     一维数组里放一个值
biases = tf.Variable(tf.zeros([1]))

y = Weights*x_data + biases

# 降低--意图
#   tf.reduce_mean
#     用于计算张量tensor沿着指定的数轴（tensor的某一维度）上的的平均值
loss = tf.reduce_mean(tf.square(y-y_data))
#
#    类似函数还有:
#    tf.reduce_sum ：计算tensor指定轴方向上的所有元素的累加和;
#    tf.reduce_max? :? 计算tensor指定轴方向上的各个元素的最大值;
#    tf.reduce_all :? 计算tensor指定轴方向上的各个元素的逻辑和（and运算）;
#    tf.reduce_any:? 计算tensor指定轴方向上的各个元素的逻辑或（or运算）;


#   tf.train.GradientDescentOptimizer
#     随机梯度下降算法
#
optimizer = tf.train.GradientDescentOptimizer(0.5)

#  计算梯度，更新variable
train = optimizer.minimize(loss)

init = tf.initialize_all_variables()
### create tensorflow structure end ###

tf.logging.set_verbosity(tf.logging.INFO)

sess = tf.Session()
sess.run(init)          # Very important

for step in range(201):
    sess.run(train)
    if step % 20 == 0:
        print(step, sess.run(Weights), sess.run(biases))
#        gh_tn = tf.get_default_graph().get_tensor_by_name('example:0')
#        tf.logging.info(gh_tn)

##########################################################
ops = tf.get_default_graph().get_operations()
all_tensor_names = {output.name for op in ops for output in op.outputs}
tf.logging.info("    type(all_tensor_names):")
tf.logging.info(type(all_tensor_names))
tf.logging.info(all_tensor_names)

##########################################################
#for op in ops: 
#   tf.logging.info("=====op = %s", type(op))
#######
#   INFO:tensorflow:=====op = <class 'tensorflow.python.framework.ops.Operation'>

##########################################################
#for op in ops: 
#   tf.logging.info("=====op = %s", op.op)
#######
#  name: "gradients/mul_grad/Mul"
#    op: "Mul"
#    input: "gradients/add_grad/tuple/control_dependency"
#    input: "mul/y"
#    attr {
#      key: "T"
#      value {
#        type: DT_FLOAT
#      }
#    }
  
##########################################################
#for op in ops: 
#  tf.logging.info(dir(op))
#######
#      INFO:tensorflow:['_InputList', '__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__
#    hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__si
#    zeof__', '__str__', '__subclasshook__', '__weakref__', '_add_control_input', '_add_control_inputs', '_c_op', '_colocation_code_locations', '_colocation_dict', '
#    _control_flow_context', '_control_flow_post_processing', '_control_inputs', '_control_outputs', '_device_assignments', '_device_code_locations', '_get_control_f
#    low_context', '_graph', '_id', '_id_value', '_input_types', '_inputs', '_inputs_val', '_node_def', '_op_def', '_original_op', '_output_types', '_outputs', '_rec
#    onstruct_sequence_inputs', '_remove_all_control_inputs', '_set_attr', '_set_control_flow_context', '_set_device', '_tf_api_names', '_tf_api_names_v1', '_tf_inpu
#    t', '_tf_output', '_traceback', '_update_input', 'colocation_groups', 'control_inputs', 'device', 'get_attr', 'graph', 'inputs', 'name', 'node_def', 'op_def', '
#    outputs', 'run', 'traceback', 'traceback_with_start_lines', 'type', 'values']
#  for output in op: 

##########################################################
for op in ops: 
#  tf.logging.info(op.name)
  tf.logging.info(op.outputs)
#  tf.logging.info("=====")
#######
#    INFO:tensorflow:random_uniform/shape
#    INFO:tensorflow:random_uniform/min
#    INFO:tensorflow:random_uniform/max
#    INFO:tensorflow:random_uniform/RandomUniform
#    INFO:tensorflow:random_uniform/sub
#    INFO:tensorflow:random_uniform/mul
#    INFO:tensorflow:random_uniform
#    INFO:tensorflow:Variable

#    INFO:tensorflow:[<tf.Tensor 'random_uniform/shape:0' shape=(1,) dtype=int32>]
#    INFO:tensorflow:[<tf.Tensor 'random_uniform/min:0' shape=() dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'random_uniform/max:0' shape=() dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'random_uniform/RandomUniform:0' shape=(1,) dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'random_uniform/sub:0' shape=() dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'random_uniform/mul:0' shape=(1,) dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'random_uniform:0' shape=(1,) dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'Variable:0' shape=(1,) dtype=float32_ref>]
#    INFO:tensorflow:[<tf.Tensor 'Variable/Assign:0' shape=(1,) dtype=float32_ref>]
#    INFO:tensorflow:[<tf.Tensor 'Variable/read:0' shape=(1,) dtype=float32>]
#    INFO:tensorflow:[<tf.Tensor 'zeros:0' shape=(1,) dtype=float32>]




gh_tn = tf.get_default_graph().get_tensor_by_name('example:0')
tf.logging.info("    example:0:")
tf.logging.info(gh_tn)

gh_tn = tf.get_default_graph().get_tensor_by_name('gradients/mul_grad/tuple/control_dependency:0')
tf.logging.info("    dependency:0:")
tf.logging.info(gh_tn)

gh_tn = tf.get_default_graph().get_tensor_by_name('gradients/Mean_grad/Tile:0')
tf.logging.info("    Tile:0:")
tf.logging.info(gh_tn)







