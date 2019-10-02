n=int(input("Enter A Number : ")) 

a=0
b=1
c=a+b
print(a)
print(b)
while c<n:
    print(c)
    a=b
    b=c
    c=a+b