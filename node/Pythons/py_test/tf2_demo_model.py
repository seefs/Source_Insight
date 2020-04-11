
from tensorflow.python.keras.layers import Input, Dense
from tensorflow.python.keras.models import Model
from tensorflow.python.keras.layers import InputSpec, Layer

from tf2_demo_layer import Scale

concat_axis = 1

def myNet(growth_rate=32, \
        nb_filter=64, \
        reduction=0.0, \
        dropout_rate=0.0, weight_decay=1e-4):
        
    x = Input(shape=[10, ], dtype='float32', name="input_ids")
    print("--myNet--x")
    x = Scale(axis=concat_axis, name='scale')(x)
    print("--myNet--Scale")

    model = Model(input, x, name='myNet')
    print("--myNet--Model")
    return model
    
net = myNet()

