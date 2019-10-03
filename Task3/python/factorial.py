n=int(input("Enter A Number : ")) 

p=1
for i in range(1,n+1):
    print(i)
    p*=i

print("The factorial of {} is {} ".format(n,p))
