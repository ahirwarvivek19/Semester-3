# 3. Write program to print all prime numbers between 1 to 100.


'''
print("Printing Even Number from 1 to 100")

for n in range (1,101):
    flag = False
    if (n != 1):
        flag = True
        for i in range(2, n // 2):
            if (n % i == 0):
                flag = False
                break;
    if (flag):
        print(n)

'''

start =1
end = 100

for num in range(start,end+1):
    if num>1:
        for i in range(2,num):
            if(num%i)==0:
                break;
        else:
            print(num)