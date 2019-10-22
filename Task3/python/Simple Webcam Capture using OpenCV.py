import cv2
cam = cv2.VideoCapture(0)

while True :
    ret, image = cam.read()
    cv2.imshow("pic" , image)
    cv2.imwrite("New Image.jpg" , image)
    if cv2.waitKey(1) & 0xff == ord('q'):
        break
    
cam.release()
print("New Image Captured")

cv2.destroyAllWindows()

 
