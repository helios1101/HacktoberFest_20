#using slice method
str=input("Enter a string:")
str1=str[::-1]
for character in str1:
    print(character)


#method 2
str2=input("Enter a string:")
str3=""
for i in str2:
    str3=i+str3
print(str3)

