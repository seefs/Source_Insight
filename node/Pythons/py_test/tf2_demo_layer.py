
import tensorflow as tf
from tensorflow.python.keras.layers import InputSpec, Layer
from tensorflow.python.keras.layers import Conv1D, Conv2D, Conv3D
from tensorflow.python.keras.layers import BatchNormalization, concatenate
from tensorflow.python.keras.utils import conv_utils
from tensorflow.python.keras import activations, initializers, regularizers, constraints
from typing import List, Optional
from keras import backend as K


# 继承父类Layer
class Scale(Layer):
    '''
    该层功能：
        通过向量元素依次相乘（Element wise multiplication）调整上层输出的形状。
        out = in * gamma + beta,
        gamma代表权重weights，beta代表偏置bias
    参数列表：
        axis: int型，代表需要做scale的轴方向，axis=-1 代表选取默认方向（横行）。
        momentum: 对数据方差和标准差做指数平均时的动量.
        weights: 初始权重，是一个包含两个numpy array的list, shapes:[(input_shape,), (input_shape,)]
        beta_init: 偏置量的初始化方法名。(参考Keras.initializers.只有weights未传参时才会使用.
        gamma_init: 权重量的初始化方法名。(参考Keras.initializers.只有weights未传参时才会使用.
    '''
    def __init__(self, weights=None, axis=-1, beta_init = 'zero', gamma_init = 'one', momentum = 0.9, **kwargs):
        print("--Scale--init", axis)
        # 参数**kwargs代表按字典方式继承父类
        self.momentum = momentum
        self.axis = axis
        self.beta_init = initializers.Zeros()
        self.gamma_init = initializers.Ones()
        self.initial_weights = weights
        super(Scale, self).__init__(**kwargs)

    def build(self, input_shape):
        print("--Scale--build", input_shape)
        self.input_spec = [InputSpec(shape=input_shape)]
        # 1：InputSpec(dtype=None, shape=None, ndim=None, max_ndim=None, min_ndim=None, axes=None)
        #Docstring:     
        #Specifies the ndim, dtype and shape of every input to a layer.
        #Every layer should expose (if appropriate) an `input_spec` attribute:a list of instances of InputSpec (one per input tensor).
        #A None entry in a shape is compatible with any dimension
        #A None shape is compatible with any shape.

        # 2:self.input_spec: List of InputSpec class instances
        # each entry describes one required input:
        #     - ndim
        #     - dtype
        # A layer with `n` input tensors must have
        # an `input_spec` of length `n`.

        shape = (int(input_shape[self.axis]),)

        # Compatibility with TensorFlow >= 1.0.0
        self.gamma = K.variable(self.gamma_init(shape), name='{}_gamma'.format(self.name))
        self.beta = K.variable(self.beta_init(shape), name='{}_beta'.format(self.name))

        self.trainable_weights = [self.gamma, self.beta]

        if self.initial_weights is not None:
            self.set_weights(self.initial_weights)
            del self.initial_weights
        super(Scale, self).build(input_shape)

    def call(self, x, mask=None):
        print("--Scale--call", x)
        input_shape = self.input_spec[0].shape
        broadcast_shape = [1] * len(input_shape)
        broadcast_shape[self.axis] = input_shape[self.axis]

        out = K.reshape(self.gamma, broadcast_shape) * x + K.reshape(self.beta, broadcast_shape)
        return out

    def get_config(self):
        print("--Scale--config")
        config = {"momentum": self.momentum, "axis": self.axis}
        base_config = super(Scale, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))


