import math
def substraction(x, y): 
    return x - y

def addition(x, y):
    return x + y

def multiplication(x, y):
    return x * y

def divison(x, y):
    return x / y

def factorial(x): 
    return math.factorial(x)
def sqroot(x):
    return math.sqrt(x)

def log_base_e(x):
    return math.log(x)

def log_base_ten(x):
    return math.log10(x)

def sine(x):
    return math.sin(math.radians(x))

def cosine(x):
    return math.cos(math.radians(x))

def tangent(x):
    return math.tan(math.radians(x))

resp = "y"
print ("Welcome to the scientific calculator made in python.")


while resp == "y":

    no = float(input("Enter a number/angle(in degrees): "))
    print ('''
    Directory:

    Addition = "a"
    Substraction = "s"
    Multiplication = "m"
    Division = "d"
    Factorial = "f"
    Square root = "sqrt"
    Logarithm(base = e) = "le"
    Logarithm(base = 10) = "lt"
    Sin(A) = "sin"
    Cos(A) = "cos"
    Tan(A) = "tan"
    ''')
    a = input("Enter operation: ")




    unaryoperand = ("f", "sqrt", "le", "lt", "sin", "cos", "tan")
    if a not in unaryoperand:
        no1 = int(input("Enter second no. "))




    if a == "f":
        print(factorial(no))
    if a == "a":
        print(addition(no, no1))
    if a == "s":
        print(substraction(no, no1))
    if a == "m":
        print(multiplication(no, no1))
    if a == "d":
        print(round(divison(no, no1), 2))
    if a == "sqrt":
        print(round(sqroot(no), 3))
    if a == "le":
        print(round(log_base_e(no), 3))
    if a == "lt":
        print(round(log_base_ten(no), 3))
    if a == "sin":
        print(round(sine(no), 2))
    if a == "cos":
        print(round(cosine(no), 2))
    if a == "tan":
        print(round(tangent(no), 2))




    resp = input("Do you want to use the calculator again? (y/n): ")

if resp == "n":
        exit()
