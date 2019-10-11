#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np 
import pandas as pd 
import os


# In[2]:


import seaborn as sns
import matplotlib.pyplot as plt
get_ipython().run_line_magic('matplotlib', 'inline')


# In[3]:


dataset=pd.read_csv("./Iris.csv")


# In[4]:


dataset.head()


# In[5]:


dataset.head()


# the different types of the iris species and their respective numbers in the dataset is shown below

# In[6]:


dataset['Species'].value_counts()


# In[7]:


sns.countplot(x='Species',data=dataset)
plt.savefig('count sprecied in train data.png')


# now since we have to fit the model to the logistic regression model we will have to convert the different species into labels for them to fit into the model other wise the model will cause an error

# In[8]:


species={'Iris-setosa':1,'Iris-versicolor':2,'Iris-virginica':3}


# In[9]:


dataset=dataset.replace({'Species':species})


# In[10]:


dataset.head()


# we can now see that the statistics of our dataset

# In[11]:


dataset.info()


# In[12]:


dataset.describe()


# ## Some features engineering

# # we will now see which of the columns contain the most variance in the species prediction

# In[13]:


dataset.corr()[['Species']].sort_values(by='Species',ascending=False)


# we will remove our ID column column as it is only the serial number and does not convey any relevant information about the prediction

# In[14]:


dataset.drop('Id',axis=1,inplace=True)


# In[15]:


dataset.head()


# again finding the variance of the dataset

# In[16]:


dataset.corr()[['Species']].sort_values(by='Species',ascending=False)


# we can see that the petal width and petal length convey more than 95 percent of the information for prediction of the species. sepal width convey negetive relation 

# In[17]:


sns.regplot(x='PetalLengthCm',y='Species',data=dataset)
plt.savefig('dependance of petal length of iris flowers on prediction.png')


# In[18]:


sns.regplot(x='PetalWidthCm',y='Species',data=dataset)
plt.savefig('dependance of petal width of iris flowers on prediction.png')


# In[19]:


sns.regplot(x='SepalLengthCm',y='Species',data=dataset)
plt.savefig('dependance of sepal length of iris flowers on prediction.png')


# In[20]:


sns.regplot(x='SepalWidthCm',y='Species',data=dataset)
plt.savefig('dependance of sepal width of iris flowers on prediction.png')


# now we split the dataset into our independant feature matrix and depeandant feature matrix

# In[21]:


x_train=dataset.drop('Species',axis=1)
y_train=dataset[['Species']]


# now we split our dataset into training and test set for training and predicting respectively

# In[22]:


from sklearn.model_selection import train_test_split as tts
x_train,x_test,y_train,y_test=tts(x_train,y_train,test_size=0.2,random_state=18)


# In[23]:


x_train.shape


# In[24]:


x_test.shape


# In[25]:


y_train.shape


# In[26]:


y_test.shape


# > **now we build our logistic regression classifier****

# In[27]:


from sklearn.linear_model import LogisticRegression
clf=LogisticRegression(C=112,max_iter=50)


# **logistic regression object/instance craeted 
# now we will fit the object to the training data **

# In[28]:


clf.fit(x_train,np.array(y_train).ravel())


# predicting values from the fitted classifier for the test data

# In[29]:


y_predict=clf.predict(x_test)


# checking accuracy :-

# In[30]:


from sklearn.metrics import confusion_matrix
confusion_matrix(y_test,y_predict)


# all the samples of the test data have been classified correctly

# In[31]:


from sklearn.metrics import accuracy_score
accuracy_score(y_test,y_predict)*100


# **accuracy of the model is 100 percent**

# In[32]:


y_predict=pd.DataFrame(y_predict)
sns.countplot(x=0,data=y_predict)
plt.savefig('y_predict data.png')


# In[ ]:




