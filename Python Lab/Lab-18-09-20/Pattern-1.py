# 1
# 2 3 4
# 5 6 7 8 9
rows = 3
k=1
for i in range(1,rows+1):
    for j in range(2*i-1):
        print(k,end=" ")
        k=k+1
    print()