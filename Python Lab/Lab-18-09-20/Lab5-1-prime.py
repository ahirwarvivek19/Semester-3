# 1. Write program to check whether a number is prime or not?
"""
n = int(input("Enter a number to check prime: "))


flag = False
if n>1:
    flag = True
    for i in range(2,n//2):
        if(n%i==0):
            flag = False
            break;

if flag:
    print(n,"is a prime number")
else:
    print(n, "is not a prime number")

"""

num = int(input("ENter a number: "))

# prime number is grater than 1
if num>1:
    for i in range(2,num):
        if(num%i)==0:
           print(num,"is not a prime number")
           break

    # print('i=',i)
    else:
        print(num,"is a prime number")

# if input number is less than
# or equal to, it is not prime
else:
    print(num,"is not a prime number")
