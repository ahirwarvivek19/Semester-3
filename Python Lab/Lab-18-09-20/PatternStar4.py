# *
# * *
# * * *
# * * * *
# * * * * *
# * * * *
# * * *
# * *
# *

rows = 5
for i in range(1,2*rows):
    if(i<=5):
        for j in range(i):
            print("*",end=" ")
    else:
        for j in range(2*rows-i):
            print("*", end=" ")
    print()