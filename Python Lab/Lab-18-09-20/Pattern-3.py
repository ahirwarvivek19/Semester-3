# 1
# 3 2
# 6 5 4
# 10 9 8 7

rows = 4
k=1
for i in range(1,rows+1):
    for j in range(i+1,1,-1):
        print(k,end=" ")
        k=k+1
    print()