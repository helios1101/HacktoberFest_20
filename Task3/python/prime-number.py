n=int(input("Enter A Number : ")) 
c=0
for i in range(2,n-1):
    if(n%i==0):
        c=1
        break
if c==0:
    print("The number is Prime ")
else :
    print("The number is Composite")
    