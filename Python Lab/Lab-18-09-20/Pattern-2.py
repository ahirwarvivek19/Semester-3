# 1
# 2 3
# 4 5 6
# 7 8 9 10

rows = 4
k=1
for i in range(1,rows+1):
    for j in range(i):
        print(k,end=" ")
        k=k+1
    print()