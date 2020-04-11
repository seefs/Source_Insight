

基础路径设置: 
basePath = D:\project\Demo
//basePath = Save:node\Pythons

/***********************************************************************/


//目录[Num][Ca]:
// 1. 
Save:node\Pythons\study\Macro_Pythons_tf3.h \[1.1\] tf2_samples
Save:node\Pythons\study\Macro_Pythons_tf3.h \[1.2\] tf12_samples-------例子
Save:node\Pythons\study\Macro_Pythons_tf3.h \[1.3\] tf2_model----------alpha
Save:node\Pythons\study\Macro_Pythons_tf3.h \[1.4\] tf2_layer----------demo
Save:node\Pythons\study\Macro_Pythons_tf3.h \[1.5\] 
Save:node\Pythons\study\Macro_Pythons_tf3.h \[1.6\] 
// 2. 
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.1\] tf2_tensorboard----例子
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.2\] 自定义评估函数
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.3\] 
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.4\] Plot_model
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.5\] History
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.6\] 
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.7\] plot---------------代码太难看
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.8\] plot---------------猫图
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.9\] 
Save:node\Pythons\study\Macro_Pythons_tf3.h \[2.10\] 


[1.1] tf2_samples
https://github.com/zeionara/tf2.0-samples
//Path:
tf2_samples
//Path:
//tf2Path = tf_Examples\tensorflow_v2\notebooks

// ipynb转py
//cmd_w: jupyter nbconvert --to script 026-Transformer\001-Transformer.ipynb
//cmd_w: jupyter nbconvert --to script 026-Transformer\Transformer.ipynb






[1.2] tf12_samples---------(32000+star)
//Github地址（32000+star）：
https://github.com/aymericdamien/TensorFlow-Examples
//Path:
tf2Path = tf_Examples\tensorflow_v2\notebooks

//tf2:0_Prerequisite\ml_introduction.py               0       # 说明
//python_w tf2:0_Prerequisite\ml_introduction.py
//tf2:0_Prerequisite\mnist_dataset_intro.py           0       # tensorflow.examples
//python_w tf2:0_Prerequisite\mnist_dataset_intro.py
tf2:1_Introduction\basic_operations.py                0       # 运算
python_w tf2:1_Introduction\basic_operations.py
tf2:1_Introduction\helloworld.py                      0       # str
python_w tf2:1_Introduction\helloworld.py
tf2:2_BasicModels\linear_regression.py                0       # 线性图
python_w tf2:2_BasicModels\linear_regression.py
tf2:2_BasicModels\logistic_regression.py              0       # 数字图--nn
python_w tf2:2_BasicModels\logistic_regression.py
//tf2:2_BasicModels\word2vec.py                       0       # 句子编码--连接尝试失败
//python_w tf2:2_BasicModels\word2vec.py
tf2:3_NeuralNetworks\autoencoder.py                   0       # 数字4X4图--2X2层, 很慢
python_w tf2:3_NeuralNetworks\autoencoder.py
//tf2:3_NeuralNetworks\bidirectional_rnn.py           0       # Bidirectional--Keyword argument
//python_w tf2:3_NeuralNetworks\bidirectional_rnn.py
tf2:3_NeuralNetworks\convolutional_network.py         0       # 数字图--卷积
python_w tf2:3_NeuralNetworks\convolutional_network.py
tf2:3_NeuralNetworks\convolutional_network_raw.py     0       # 数字图--卷积--nn
python_w tf2:3_NeuralNetworks\convolutional_network_raw.py
tf2:3_NeuralNetworks\dcgan.py                         0       # 数字5X5图--, 很慢, 对抗生成网络
python_w tf2:3_NeuralNetworks\dcgan.py
tf2:3_NeuralNetworks\dynamic_rnn.py                   0       # LSTM 很慢
python_w tf2:3_NeuralNetworks\dynamic_rnn.py
tf2:3_NeuralNetworks\neural_network.py                0       # 数字图--神经网络
python_w tf2:3_NeuralNetworks\neural_network.py
tf2:3_NeuralNetworks\neural_network_raw.py            0       # 数字图--神经网络--nn
python_w tf2:3_NeuralNetworks\neural_network_raw.py
tf2:3_NeuralNetworks\recurrent_network.py             0       # 循环神经网络 数字图--LSTM--K
python_w tf2:3_NeuralNetworks\recurrent_network.py
tf2:4_Utils\build_custom_layers.py                    0       # Layer
python_w tf2:4_Utils\build_custom_layers.py
tf2:4_Utils\save_restore_model.py                     0       # save
python_w tf2:4_Utils\save_restore_model.py
//tf2:5_DataManagement\image_transformation.py        0       # image--没有PIL
//python_w tf2:5_DataManagement\image_transformation.py
//tf2:5_DataManagement\load_data.py                   0       # Dataset--连接尝试失败
//python_w tf2:5_DataManagement\load_data.py
//tf2:5_DataManagement\tfrecords.py                   0       # features--连接尝试失败
//python_w tf2:5_DataManagement\tfrecords.py




//Path:
tf1Path = tf_Examples\examples

tf1:1_Introduction\basic_eager_api.py
//python_w tf1:1_Introduction\helloworld.py
tf1:1_Introduction\basic_operations.py
tf1:1_Introduction\helloworld.py                    0       # Session
tf1:2_BasicModels\gradient_boosted_decision_tree.py
//tf1:2_BasicModels\kmeans.py                        0       # tensorflow.contrib
tf1:2_BasicModels\linear_regression.py
tf1:2_BasicModels\linear_regression_eager_api.py
tf1:2_BasicModels\logistic_regression.py
tf1:2_BasicModels\logistic_regression_eager_api.py
tf1:2_BasicModels\nearest_neighbor.py
tf1:2_BasicModels\random_forest.py
tf1:2_BasicModels\word2vec.py
tf1:3_NeuralNetworks\autoencoder.py
tf1:3_NeuralNetworks\bidirectional_rnn.py
tf1:3_NeuralNetworks\convolutional_network.py
tf1:3_NeuralNetworks\convolutional_network_raw.py
tf1:3_NeuralNetworks\dcgan.py
//tf1:3_NeuralNetworks\dynamic_rnn.py                0       # placeholder
tf1:3_NeuralNetworks\gan.py
tf1:3_NeuralNetworks\multilayer_perceptron.py
tf1:3_NeuralNetworks\neural_network.py
tf1:3_NeuralNetworks\neural_network_eager_api.py
tf1:3_NeuralNetworks\neural_network_raw.py
tf1:3_NeuralNetworks\recurrent_network.py
tf1:3_NeuralNetworks\variational_autoencoder.py
tf1:4_Utils\save_restore_model.py
//tf1:4_Utils\tensorboard_advanced.py               0       # input_data
//tf1:4_Utils\tensorboard_basic.py                  0       # tensorflow.examples
//tf1:5_DataManagement\build_an_image_dataset.py    71      # index--StopIteration
tf1:5_DataManagement\tensorflow_dataset_api.py
//tf1:6_MultiGPU\multigpu_basics.py                 0       # gpu--placeholder
//tf1:6_MultiGPU\multigpu_cnn.py                    0       #




[1.3] tf2_model----------alpha
//Path
pyPath = Save:node\Pythons

// tf2_model--ok
py:py_test\tf2_model.py
python_w py:py_test\tf2_model.py

// tf2_layer--err
//py:py_test\tf2_layer.py
//python_w py:py_test\tf2_layer.py

// demo
//py:py_test\tf2_demo_layer.py
//py:py_test\tf2_demo_model.py
//python_w py:py_test\tf2_demo_model.py



// 例子--tensorboard
//tf2_tensorboard\example.py
//python_w tf2_tensorboard\example.py



[1.4] tf2_layer----------demo
//Path:
//tf1Path = tf_Examples\examples
//demo, 以及提问
https://github.com/keras-team/keras/tree/master/keras/layers


// layer例子
https://github.com/Zelgunn/CustomKerasLayers
//Path:
lyPath = tf2_KerasLayers\

ly:tests\DenseBlockCifar10.py
ly:models\ConvAM.py
ly:layers\DenseBlock.py







[1.5] 




[1.6] 









[2.1] tf2_tensorboard----例子
//tf2_tensorboard：
//https://github.com/akionakamura/pr-tensorboard-keras-example
//Path:
//tf2Path = tf2_tensorboard
tf2_tensorboard\


// 例子--tensorboard
tf2_tensorboard\example.py
python_w tf2_tensorboard\example.py
//brw:
cmd_w: tensorboard --logdir=tf2_tensorboard\logs\testA-1570274184
cmd_w: tensorboard --logdir=tf2_tensorboard\logs\testA-1570353848
cmd_w: http://localhost:6006


// 例子--多次tensorboard
tf2_tensorboard\example_concat_board.py
python_w tf2_tensorboard\example_concat_board.py


[2.2] 自定义评估函数
//	1.3 自定义评估函数
//	PRF值的计算方法
//	AUC(area under the curve)-----是ROC曲线下的面积
//  ROC(Price Rate of Change)-----又称变动率指标---(FPR, TPR)对

//可以使用的预置函数如下：
//	binary_accuracy(y_true, y_pred) # 二元正确率
//	categorical_accuracy(y_true, y_pred) # 多元正确率
//	sparse_categorical_accuracy(y_true, y_pred) #稀疏分类正确率
//	top_k_categorical_accuracy(y_true, y_pred, k=5) # top k个分类正确率
//	sparse_top_k_categorical_accuracy(y_true, y_pred, k=5) # 稀疏top k个分类正确率


// 指标
//	精准率: precision rate = TP / (TP + FP)
//	召回率: recall rate = TP / (TP + FN)
//	准确率: accuracy = (TP + TN) / (TP + FP + TN + FN)
//	F1-score = 2 * precision rate * recall rate / (precision rate + recall rate)
//	F1-score = 2 * 精 * 召 / (精 + 召)

//	精准率: __FP TP__>>0000 1111, 推荐系统-----重心--正样>负样---调多=调少
//	精准率: __11 11__>>0000 1111, 
//	召回率: ____ TPFN>>  0000 1111, 逃犯检索-----直径--仅正样影响
//	召回率: ____ 1100>>  0000 1111,
//	准确率: TNFP TPFN>>0000 1111, XXXX系统-----边界--正样=负样---调多>调少
//	准确率: 0011 1100>>0000 1111,
//	F1-scr: __11 1100>>0000 1111, XXXX系统-----XX界--正样>负样---正多>正少---负少>正多
//真阳性率: ____ TPFN>>0000 1111, TPR=召回率
//假阴性率: TNFP ____>>0000 1111, FPR



//brw:
cmd_w: tensorboard --logdir=tf2_tensorboard\logs\testA-1570385848
cmd_w: http://localhost:6006


// 评估--函数_auc_roc
tf2_tensorboard\example_auc_roc.py
python_w tf2_tensorboard\example_auc_roc.py
//	176/176 [==============================] - 15s 85ms/step - loss: 0.6912 - auc: 0.7747 - val_loss: 0.6991 - val_auc: 0.8999
//	Epoch 2/50
//	176/176 [==============================] - 0s 532us/step - loss: 0.6893 - auc: 0.8503 - val_loss: 0.6963 - val_auc: 0.9249

//	176/176 [==============================] - 15s 84ms/step - loss: 0.7074 - accuracy: 0.4659 - auc: 0.0207 - val_loss: 0.7012 - val_accuracy: 0.5000 - val_auc: 0.0317
//	Epoch 2/50
//	176/176 [==============================] - 0s 620us/step - loss: 0.7050 - accuracy: 0.4659 - auc: 0.0158 - val_loss: 0.6999 - val_accuracy: 0.5000 - val_auc: 0.0317


// 评估--cb_auc_roc------auc图出不来
//tf2_tensorboard\example_cb_auc_roc.py
//python_w tf2_tensorboard\example_cb_auc_roc.py


// 评估--cb_metrics------f1_score, 图也出不来
tf2_tensorboard\example_cb_metrics.py
python_w tf2_tensorboard\example_cb_metrics.py


// 评估--fun_metrics------f1_score
tf2_tensorboard\example_fun_metrics.py
python_w tf2_tensorboard\example_fun_metrics.py


// 评估--cb_bert_f1------x带标签识别不了
//   log带时间
tf2_tensorboard\example_cb_bert_f1.py
python_w tf2_tensorboard\example_cb_bert_f1.py


[2.3] 



[2.4] Plot_model
//	Plot_model主要是用来绘制模型的样子，
//	也可以使用Model.summary()


[2.5] History
// History则是模型训练时的历史记录


[2.6] 




[2.7] plot------------代码太难看
//plot. 代码太难看.
//tf2_test\tf2_plot.py
//python_w tf2_test\tf2_plot.py
//brw:
cmd_w: tensorboard --logdir=tf2_tensorboard\logs\testA-1570274184
cmd_w: tensorboard --logdir=logs\20191006-002021
cmd_w: http://localhost:6006


[2.8] plot---------------猫图
//	画图2--猫图, 不知道什么用
https://github.com/wookayin/tensorflow-plot

//其他工具
Visdom


[2.9] 


[2.10] 


[2.11] 


[2.12] 

