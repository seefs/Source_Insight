

In [5]: from sklearn import preprocessing  
   ...: le =preprocessing.LabelEncoder()  
   ...: le.fit(["paris", "paris", "tokyo", "amsterdam"])  
   ...: print('标签个数:%s'% le.classes_)  
   ...: print('标签值标准化:%s' % le.transform(["tokyo", "tokyo", "paris"]))  
   ...: print('标准化标签值反转:%s' % le.inverse_transform([2, 2, 1]))  
   ...:  
标签个数:['amsterdam' 'paris' 'tokyo']  
标签值标准化:[2 2 1]  
标准化标签值反转:['tokyo' 'tokyo' 'paris']  


