m, mx, d,k=map(int,input().split())
a=1
b=2
arr=[]
for i in range(a,k):
    for j in range(b,k):
        arr=[]
        arr.append(i)
        arr.append(j)
        for o in range(3,d+1):
            arr.append(arr[o-2]+arr[o-3])
        if arr[d-1]==k:
            print(arr)