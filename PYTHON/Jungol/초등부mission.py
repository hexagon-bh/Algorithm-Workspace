n=int(input())
def func(n):
    count=0
    for i in range(1,n+1):
        if i%2==0:
            print(i,end=" ")
            count+=1
    print("\n"+str(count)+"개")
func(n)