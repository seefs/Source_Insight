
基础路径设置:
//basePath = Project:NLP\jieba_fast
basePath = Save:node\Pythons
//toolPath = E:\Desktop\NLP
//dataPath = D:\project\S_name\3^sql^data

/***********************************************************************/

视频：
F:\1_study\01_video_tensorflow\Tensorflow07_val.mp4


编译模块
python tf_day1_line1.py

修改
tf_day1_line1.py creat^data


//理解：
//思考：九宫格
////////////////////\\\\\\\\\\\\\\\\\\\\\\
////////////////////0\\\\\\\\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
//////////////x//(init)\\\y0\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
////////0/(model)///0\\\(target)\\0\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
/\/w\/(var)\/\y/(reduce)\/y0\/\(print)//a\
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\0\\(Optimz)\\\l\///(step)//c///////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\\\\\t\\\(sess)///i//////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\\\\\\\\\\\s/////////////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////



//目录[Num][Ca]:
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.1\] 第1~5讲
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.5\] tf5_example2 优先一次线性
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.6\] tensorflow6 矩阵
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.7\] tensorflow7 变量加法，公式更新
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.8\] tensorflow8 运行中传入变量
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.10\] tensorflow10 层+激活函数
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.11\] tensorflow11
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.12\] tensorflow12
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.13\] tensorflow13 优化器
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.14\] tf14_tensorboard
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.15\] tf15_tensorboard
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.16\] tf16_classification 分类--数字 
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.17\] tf17_dropout 分类--数字 dropout 
//
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[2.1\] 九宫格


/***********************************************************************/
/************************   Tensorflow   *******************************/
/***********************************************************************/


[1.1] 第1~5讲

[1.5] tf5_example2 优先一次线性
//[疑点]：
//tf.random_uniform tf.zeros 用途
tfTUT\tf5_example2\full_code.py
python tfTUT\tf5_example2\full_code.py


//[说明]：优先一次线性(1)
tfTUT\tf5_example2\for_you_to_practice.py



[1.6] tensorflow6 矩阵
tfTUT\tensorflow6_session.py
python tfTUT\tensorflow6_session.py


[1.7] tensorflow7 变量加法，公式更新
//[疑点]：
//assign 分配
tfTUT\tensorflow7_variable.py
python_w tfTUT\tensorflow7_variable.py


[1.8] tensorflow8 运行中传入变量
//[疑点]：
//placeholder 运行中传入变量
//feed_dict 字典
tfTUT\tensorflow8_feeds.py
python tfTUT\tensorflow8_feeds.py
//ERR:mul


[1.10] tensorflow10 层+激活函数
tfTUT\tensorflow10_def_add_layer.py
python tfTUT\tensorflow10_def_add_layer.py


[1.11] tensorflow11
//[疑点]：
//numpy.linspace 在指定的间隔内返回均匀间隔的数字
//	np.newaxis 给原数组增加一个维度
//	[:, np.newaxis] 在后面应该是[300,1]
//tf.matmul()   矩阵相乘
//tf.multiply() 矩阵中对应元素各自相乘
//tf.random_normal 从正态分布中输出随机值。
tfTUT\tensorflow11_build_network.py
python tfTUT\tensorflow11_build_network.py




[1.12] tensorflow12
//[疑点]：Weights---layer中有什么用
tfTUT\tensorflow12_plut_result.py
python tfTUT\tensorflow12_plut_result.py



[1.13] tensorflow13 优化器
// ...


[1.14] tf14_tensorboard
//[疑点]：
// 将      tf.initialize_all_variables()
// 替换为 tf.global_variables_initializer()
tfTUT\tf14_tensorboard\full_code.py
python tfTUT\tf14_tensorboard\full_code.py
// 没有内容：
tfTUT\tf14_tensorboard\for_you_to_practice.py
python tfTUT\tf14_tensorboard\for_you_to_practice.py

//	添加 tensorboard->path
tensorboard  --logdir=logs


[1.15] tf15_tensorboard
//[疑点]：
//[说明]：name_scope->loss...
tfTUT\tf15_tensorboard\full_code.py
python tfTUT\tf15_tensorboard\full_code.py
// 没有内容：
tfTUT\tf15_tensorboard\for_you_to_practice.py
python tfTUT\tf15_tensorboard\for_you_to_practice.py
//
tensorboard  --logdir=logs


[1.16] tf16_classification 分类--数字 
//[疑点]：  （不明白的下次再看--周1~5）
tfTUT\tf16_classification\full_code.py
python tfTUT\tf16_classification\full_code.py
// 初始代码：
tfTUT\tf16_classification\for_you_to_practice.py
python tfTUT\tf16_classification\for_you_to_practice.py
	

[1.17] tf17_dropout 分类--数字 dropout 
//[疑点]：  （不明白的下次再看--周1~5）
tfTUT\tf17_dropout\full_code.py
python tfTUT\tf17_dropout\full_code.py
// 初始代码：
tfTUT\tf17_dropout\for_you_to_practice.py
python tfTUT\tf17_dropout\for_you_to_practice.py
	


//下次CNN


//[疑点]：
//[说明]：
tfTUT\xxxxxxxxx.py
python tfTUT\xxxxxxxxx.py




//[疑点]：
//[说明]：
tfTUT\xxxxxxxxx.py
python tfTUT\xxxxxxxxx.py



[2.1] 九宫格

////////////////////\\\\\\\\\\\\\\\\\\\\\\
///////////////////def\\\\\\\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
//////////////0//(Model)\\\0\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
////////  /(Opt)//+*\\(target)\\0\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
/\Wbxy/(Var)\init/\(   )\/  \/\(    )//0\
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\ loss\(Optimz)\train//(Step)/step//////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\reduce\\(Sess)/////o/////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\\\\\\\\\\sess///////////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////


//关系细化:
x->x1->x2(y)----model----"+*/-" ? "[]{}()"
x->xw->xb(y0)

def->Model(+*)->Var(x)->Opt(*)->Opt(+)->Var(y)
sess<-init<-Var(Weights)<-Opt(*)<-Var(biases)<-Opt(+)
sess<-train<-optimizer(loss)<-reduce_mean<-square<-Var(y0)<-Var(Weights)
step<-sess<-train






