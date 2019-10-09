a=int(input("Enter first number"))
b=int(input("Enter second number"))
c=int(input("Enter third number"))
if(a>b and a>c):
    print("the greatest number is = ",a)
elif(b>a and b>c):
    print("the greatest number is =",b)
elif(c>a and c>b):
    print("the greatest number is =",c)
elif(a==b and b==c):
    print("all numbers are equal")

    