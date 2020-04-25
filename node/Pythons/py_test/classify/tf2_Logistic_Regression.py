#! /usr/bin/python <br> # -*- coding: utf8 -*-
from sklearn import datasets
from sklearn.linear_model import LogisticRegression
from sklearn.cross_validation import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import accuracy_score
from PDC import plot_decision_regions
import matplotlib.pyplot as plt
from matplotlib.colors import ListedColormap
import numpy as np
iris = datasets.load_iris()
x = iris.data[:,[2,3]]
y = iris.target
X_train,X_test,y_train,y_test = train_test_split(
    x , y, test_size=0.3, random_state = 0
)
sc = StandardScaler()
sc.fit(X_train)
X_train_std = sc.transform(X_train)
X_test_std = sc.transform(X_test)
Ir = LogisticRegression(C=1000.0,random_state=0)
Ir.fit(X_train_std,y_train)
X_combined_std = np.vstack((X_train_std,X_test_std))
y_combined = np.hstack((y_train,y_test))

plot_decision_regions(X=X_combined_std,y=y_combined,
                      classifier=Ir,
                      test_idx=range(105,150))
plt.xlabel('petal length [standardized]')
plt.ylabel('petal width [standardized]')
plt.legend(loc='upper left')
plt.savefig('Iris.png')
plt.show()

print(X_test_std[0,:])
a = Ir.predict_proba(X_test_std[0,:])
print(a)


#weights, params = [], []
#for c in list(range(-5,5)):
#    lr = LogisticRegression(C=10**int(c), random_state=0)
#    lr.fit(X_train_std, y_train)
#    weights.append(lr.coef_[1])
#    params.append(10**c)
#weights = np.array(weights)
#plt.plot(params, weights[:, 0],label='petal length')
#plt.plot(params,weights[:,1],linestyle='--',label='petal width')
#plt.ylabel('weight coefficient')
#plt.xlabel('C')
#plt.legend(loc='upper left')
#plt.xscale('log')
#plt.show()


