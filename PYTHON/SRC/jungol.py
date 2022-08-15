a=[0,0,0,0,0,0,0]
a[0],a[1],a[2],a[3],a[4],a[5],a[6]=map(int,input().split())
def func():
    for j in range(0,3):
        for i in range(0,6):
            if a[i]>a[i+1]:
                t=a[i]
                a[i]=a[i+1]
                a[i+1]=t
    return a
value=func()
print(value)
            
