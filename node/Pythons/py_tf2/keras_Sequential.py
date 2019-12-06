

from keras.models import Sequential
from keras.layers import LSTM, Dense
import numpy as np

data_dim = 16
timesteps = 8
num_classes = 10

# expected input data shape: (batch_size, timesteps, data_dim)
model = Sequential()
model.add(LSTM(32, return_sequences=True,
               input_shape=(timesteps, data_dim)))  # returns a sequence of vectors of dimension 32
model.add(LSTM(32, return_sequences=True))  # returns a sequence of vectors of dimension 32
model.add(LSTM(32))  # return a single vector of dimension 32
model.add(Dense(10, activation='softmax'))

model.compile(loss='categorical_crossentropy',
              optimizer='rmsprop',
              metrics=['accuracy'])

# Generate dummy training data
x_train = np.random.random((1000, timesteps, data_dim))
y_train = np.random.random((1000, num_classes))

# Generate dummy validation data
x_val = np.random.random((100, timesteps, data_dim))
y_val = np.random.random((100, num_classes))

model.fit(x_train, y_train,
          batch_size=64, epochs=5,
          validation_data=(x_val, y_val))

#     Train on 1000 samples, validate on 100 samples
#     Epoch 1/5
#     1000/1000 [==============================] - 2s 2ms/step - loss: 11.9961 - accuracy: 0.1230 - val_loss: 12.3788 - val_accuracy: 0.1300
#     Epoch 2/5
#     1000/1000 [==============================] - 0s 202us/step - loss: 12.7283 - accuracy: 0.1280 - val_loss: 12.5455 - val_accuracy: 0.1300


