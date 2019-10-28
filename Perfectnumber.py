# checking whether a number is perffect number or not
def perfect_number_verifier(n):
    s=0
    for i in range(1,n):
        if n%i==0:
            s+=1
    if s==n:
        return 'perfect number'
    else:
        return 'not a perfect number'
