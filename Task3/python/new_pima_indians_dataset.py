#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd


# In[2]:


dataset=pd.read_csv("E:/kaggle/pima indian diabetes dataset aveon task 2/diabetes.csv")


# In[3]:


x_train=dataset.iloc[:,:-1].values


# In[4]:


y_train=dataset.iloc[:,-1].values


# In[5]:


x_train=pd.DataFrame(x_train)
y_train=pd.DataFrame(y_train)


# In[6]:


for i in range(2,8):
    x_train=x_train.replace(0,x_train[i].mean())


# In[7]:


from sklearn.preprocessing import MinMaxScaler
scaler=MinMaxScaler()
x_train=scaler.fit_transform(x_train)


# In[8]:


x_train=pd.DataFrame(x_train)


# In[9]:


from sklearn.cross_validation import train_test_split
x_train,x_test,y_train,y_test=train_test_split(x_train,y_train,test_size=0.22,random_state=57)


# In[10]:


y_train=np.array(y_train).ravel()


# In[11]:



from sklearn.naive_bayes import GaussianNB
clf=GaussianNB()
clf.fit(x_train,y_train)


# In[12]:


y_predict=clf.predict(x_test)


# In[13]:


from sklearn.metrics import accuracy_score
accuracy_score(y_test,y_predict)*100


# In[14]:


from sklearn.naive_bayes import GaussianNB
clf2=GaussianNB()
clf2.partial_fit(x_train,y_train,classes=[0,1,2,3,4,5,6,7])


# In[15]:


y_predict2=clf2.predict(x_test)


# In[16]:


from sklearn.metrics import accuracy_score
accuracy_score(y_test,y_predict2)*100


# In[84]:


from sklearn.linear_model import LogisticRegression
lr=LogisticRegression(C=1000000,max_iter=1000000,penalty='l1')
lr.fit(x_train,y_train)


# In[85]:


y_predict_lr=lr.predict(x_test)


# In[86]:


from sklearn.metrics import confusion_matrix
confusion_matrix(y_test,y_predict_lr)


# In[87]:


accuracy_score(y_test,y_predict)


# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:




