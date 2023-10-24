array=[]
array=list(map(int,input().split()))
print(array)
cnt=[]
a=0
array_s=set(array)
array_s=list(array_s)
for i in range(0,len(array_s)-1):
    for j in range(0,len(array)-1):
        if array_s[i]==array[j]:
            a+=1
    cnt.append(a)
    a=1
print(array_s)
print(array_s[cnt.index(max(cnt))])