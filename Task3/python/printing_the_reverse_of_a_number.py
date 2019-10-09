a=int(input("enter the number to be reversed"))
d=0
while(a>0):
    d=a%10
    a=a//10
    print(d,end="")


