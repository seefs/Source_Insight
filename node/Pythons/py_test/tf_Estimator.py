
//Estimator（评估器）类代表一个模型，以及这些模型被训练和评估的方式。


//	def input_fn():
//		features = {'SepalLength': np.array([6.4, 5.0]),
//					'SepalWidth':  np.array([2.8, 2.3]),
//					'PetalLength': np.array([5.6, 3.3]),
//					'PetalWidth':  np.array([2.2, 1.0])}
//		labels = np.array([2, 1])
//		return features, labels
//或
//		dataset
//			dataset.shuffle(1000).repeat().batch(batch_size)

//	feature_column:
//		my_feature_columns = []
//		my_feature_columns.append(tf.feature_column.numeric_column(key=key))

//	classifier = tf.estimator.DNNClassifier(
//			feature_columns=my_feature_columns,
//			hidden_units=[10, 10],
//			n_classes=3)

//	classifier.train(
//		input_fn=lambda:iris_data.train_input_fn(train_x, train_y, args.batch_size),
//		steps=args.train_steps)

//	eval_result = classifier.evaluate(
//		input_fn=lambda:iris_data.eval_input_fn(test_x, test_y, args.batch_size))

//	predictions = classifier.predict(
//		input_fn=lambda:iris_data.eval_input_fn(predict_x, batch_size=args.batch_size))

