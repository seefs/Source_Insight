
from sklearn import metrics
 
y_test = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]
predictions = [0, 0, 1, 1, 0, 0, 0, 2, 2, 0, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2]
 
accuracy = metrics.accuracy_score(y_test, predictions)
recall = metrics.recall_score(y_test, predictions, average="micro")
precision = metrics.precision_score(y_test, predictions, average="micro")
F1 = metrics.f1_score(y_test, predictions, average="micro")  
print("accuracy:",  accuracy, '\n', "precision:", precision, '\n', "recall:", recall, '\n', "F1 :",  F1)


