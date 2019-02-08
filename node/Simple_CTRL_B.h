/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/

模拟器：
Save:SI\node\si_modis_MTK.h  open err

Save文件列表：
Save:SI\node\Macro_File.h


/***********************************************************************/
/***************************  临时文件      ********************************/
/***********************************************************************/







常用错误（版本问题）：

---------------------------------
sess.run(tf.initialize_all_variables())
sess.run(tf.global_variables_initializer())

---------------------------------
	
writer = tf.train.SummaryWriter("logs/", sess.graph)
writer = tf.summary.FileWriter("logs/", sess.graph)



---------------------------------
tf.scalar_summary(layer_name + '/weights', Weights)
tf.summary.scalar(layer_name + '/weights', Weights)

---------------------------------

tf.merge_all_summaries(layer_name + '/weights', Weights)
tf.summary.merge_all(layer_name + '/weights', Weights)


---------------------------------
tf.histogram_summary(layer_name + '/weights', Weights)
tf.summary.histogram(layer_name + '/weights', Weights)



---------------------------------



---------------------------------



---------------------------------



---------------------------------



---------------------------------



---------------------------------



---------------------------------




---------------------------------



---------------------------------







