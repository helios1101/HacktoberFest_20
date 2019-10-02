
a=int(input("Enter Start Number : "))
b=int(input("Enter End Number : "))
        
def isarmy(n):
    num=n
    x=0
    while n!=0:
        r=n%10
        y=r**3
        x=x+y
        n=int(n/10)
    if x==num:
        return True
    else:
        return False
    
    
for i in range(a,b):
    if(isarmy(i)):
        print(i," is a Armstrong")
    #else :
        #print(i," not a Prime")