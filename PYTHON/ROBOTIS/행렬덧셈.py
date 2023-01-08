n,m=map(int,input().split())
array1 = []
array2 = []
for i in range(0,n):
    row=list(map(int,input().split()))
    array1.append(row)
for i in range(0,n):
    row=list(map(int,input().split()))
    array2.append(row)
for i in range(0,n):
    for j in range(0,m):
        print(array1[i][j]+array2[i][j],end=" ")
    print("")
