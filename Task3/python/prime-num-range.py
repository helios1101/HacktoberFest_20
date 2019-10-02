a=int(input("Enter Start Number : "))
b=int(input("Enter End Number : "))
        
def isprime(x):
    for j in range(2,x):
        if x%j==0:
            return False
            
    return True
    
for i in range(a,b):
    if(isprime(i)):
        print(i," is a Prime")
    #else :
        #print(i," not a Prime")
        