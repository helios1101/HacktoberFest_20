
n=int(input("Enter A Number : ")) 
num=n
x=0
while n!=0:
    r=n%10
    y=r**3
    x=x+y
    n=int(n/10)
    
if x==num:
    print("Its a Armstrong Number")
else:
    print("Its Not a Armstrong Number")
