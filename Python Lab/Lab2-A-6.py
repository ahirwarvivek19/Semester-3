#
# 6) Remember the formula, c/5 = (f-32)/9
#
# Write a program to convert  c to f and f to c
print("Enter your choice")
print("1 To convert temperature from F ro C")
print("2 To convert temperature from C ro F")
choice = int(input())

if choice==1:
    print()
    print("Enter temperature in F")
    tF = int(input())
    tC= ((tF-32)*5)/9
    print("Temperature in C = ",tC)

print()

if choice==2:
    print("Enter temperature in C")
    c=int(input())
    f=(c*9)/5+32
    print("Temperature in F = ",f)