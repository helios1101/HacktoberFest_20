#logic - by using a additional variable and checking condition on it

num = int(input("Enter a no to check Prime no."))
n = 0
for i in range(2,num):
	if(num % i == 0):
		n = n + 1
		print("its not prime no.")
		break	
if(n == 0):
	print("its a prime no.")