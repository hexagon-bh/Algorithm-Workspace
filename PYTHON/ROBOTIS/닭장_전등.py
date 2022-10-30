cage=[0 for i in range(100)]
def print_cage():
    for j in range(1,101):
        print(cage[j-1],end=" ")
        if j%20==0:
            print("\n")
print_cage()
while True:
    m,n=map(int,input().split(','))
    def divi_or_multi(m,n):
        list=[]
        if m==1:
            for i in range(1,n):
                if n%i==0:
                    list.append(i)
        if m==2:
            for i in range(100):
                if n*i<=100:
                    list.append(n*i)
        return list
    if m==0 and n==0:
        quit()
    else:
        light_on=divi_or_multi(m,n)
        for i in light_on:
            if cage[i-1]==0:
                cage[i-1]=1
            elif cage[i-1]==1:
                cage[i-1]=0
        print_cage()

        



