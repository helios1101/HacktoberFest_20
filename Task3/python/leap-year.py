n=float(input("Enter A Year ")) 

if n%100==0:
    if n%400==0:
        print("Its a Leap Year")
    else :
        print("Its Not a Leap Year ")
elif n%4==0:
    print("Its a Leap Year ")
else:
    print("Its Not a Leap Year")
