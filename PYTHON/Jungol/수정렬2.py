n=int(input())
array=[]
a=0
for i in range(n):
    a=int(input())
    array.append(a)
array.sort()
for i in range(0,n):
    print(array[i])