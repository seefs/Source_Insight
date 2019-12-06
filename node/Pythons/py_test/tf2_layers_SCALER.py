
from keras.models import Sequential
import numpy as np
from keras.engine.topology import Layer
 
np.random.seed(19931221)
 
class MyLayer(Layer):  
    def __init__(self, output_dim, **kw):  
        self.output_dim = output_dim 
        self.SCALER = None
        super(MyLayer, self).__init__(**kw)  
    def build(self, input_shape):  
        input_dim = input_shape[1] 
        self.SCALER=self.add_weight(shape=(input_dim,), initializer='uniform', trainable=True)#×¢ÒâshapeÐ´·¨
        super(MyLayer, self).build(input_shape)  
    def call(self, x):  
        x *= self.SCALER
        return x  
    def compute_output_shape(self, input_shape):
        return input_shape
 
input_data=np.random.randint(0, 10, (3000, 2))
test_data=np.random.randint(0, 10, (1, 2))    #test_data=[4, 1]
labels = 0.1*input_data
model = Sequential()
model.add(MyLayer(2, input_shape=(2,)))  
model.compile(optimizer='rmsprop', loss='mse')
model.fit(input_data, labels, verbose=1)
res=model.predict(test_data)                   #res=[0.40302727, 0.09999914]
w = model.get_weights()                            #weights=[0.10075682, 0.09999914]

print('res', res)

print('w', w)

