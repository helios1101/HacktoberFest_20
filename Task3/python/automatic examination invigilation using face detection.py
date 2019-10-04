
# coding: utf-8

# In[5]:

#This is a examaination cheating detector for online exams!!!


# In[1]:

#impoting all libraries

import cv2
import numpy as np
import pandas as pd
import datetime


# In[2]:

#taking examinees logn details

print("PLEASE ENTER LOGIN DETAILS TO LOG INTO THE EXAMINTION PORTAL")
print("ENTER NAME")
name=input()
print("ENTER ROLL NUMBER")
roll=input()


# In[3]:

#imoprting face clasiifiers

face_cascade=cv2.CascadeClassifier('C:/Users/rahul/OneDrive/Documents/new mega project files/cascades/data/haarcascade_frontalface_alt.xml')
cap=cv2.VideoCapture(0)
cap.set(3,1280)
cap.set(4,720)


# In[4]:

#face and cheating detector during exam

cheating=0
cheating2=0
while(True):
    ret,frame=cap.read()
    blurred=cv2.GaussianBlur(frame,(21,21),0)
    weight_frame=cv2.addWeighted(frame,1.75,blurred,-0.5,0)
    
    yuv=cv2.cvtColor(frame,cv2.COLOR_BGR2YUV)
    yuv[:,:,0]=cv2.equalizeHist(yuv[:,:,0])
    
    bgr_frame = cv2.cvtColor(yuv, cv2.COLOR_YUV2BGR)
    gray = cv2.cvtColor(bgr_frame, cv2.COLOR_BGR2GRAY)
    
    clahe = cv2.createCLAHE(clipLimit=40.0, tileGridSize=(8, 8))
    gray = clahe.apply(gray)
    
    faces=face_cascade.detectMultiScale(gray,scaleFactor=1.1,minNeighbors=5)
    
    for(x,y,w,h) in faces:
        roi_gray=gray[x:x+w,y:y+h]
        roi_frame=frame[x:x+w,y:y+h]
        cv2.rectangle(frame,(x,y),(x+w,y+h),color=(255,0,0),thickness=2,lineType=cv2.LINE_AA)
    
    if len(faces)==0:
        cheating=cheating+1
        if cheating==1:
            now=datetime.datetime.now().second
        if cheating>0:
            if (datetime.datetime.now().second-now) > 10:
                print("CHEATING",datetime.datetime.now().hour,":",datetime.datetime.now().minute,":",datetime.datetime.now().second)
                if cheating >20:
                    print("EXAM TERMINATED AND PAPER CANCELLED!!","\n",name,roll,"CAUGHT CHEATING")
                    break
    
    
    if len(faces)==0:
        cheating2=cheating2+1
        count=0
        if cheating2==1:
            now1=datetime.datetime.now().second
        if cheating2>0:
            
            if (datetime.datetime.now().second-now1)>2:
                count=count+1
            if count>=6:
                print("cheating !! exam terminated,endl=\n")
                break
            if count <6 :
                print("cheating warning \n")
                

                   
                
                    
   
        
    cv2.imshow('frame',frame)
    
    if cv2.waitKey(20) & 0xFF==ord('q'):
        break
        
cap.release()
cv2.destroyAllWindows()



# In[ ]:



