from cmath import sqrt

a=float(input("Enter the coefficient of x^2 :(a)  "))
b=float(input("Enter the coefficient of x :(b)  "))
c=float(input("Enter the coefficient of 1 :(c)  "))

x=(b*b)-(4*a*c)
y=sqrt(x)
y=-a+y
z=y/(2*a)
print("The Value for x1 : ",z)
y=-a-(2*y)
z=y/(2*a)
print("The Value for x2 : ",z)
