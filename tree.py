from sklearn import tree

x=[[181,80,44],[177,70,43],[160,60,38],[154,54,37],[166,65,40]]

y=['male','female','female','female','male']

clf=tree.DecisionTreeClassifier()
clf=clf.fit(x,y)
prediction=clf.predict([[190,70,43]])

print(prediction)