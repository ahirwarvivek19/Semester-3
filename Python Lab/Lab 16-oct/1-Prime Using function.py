# Prime using function

def prime(n):
    flag = 0
    for i in range(2,n/2+1):
        if(n%i==0):
            flag=1
            return flag

    return flag




print("Enter number to check prime")
num = int(input())
result = prime(num)
if(result)