def is_prime_number(x):
    if x==1:
        return False
    for i in range(2, x):
        if x % i == 0:
            return False 
    return True
n=int(input())
a=input().split()
arr=[]
cnt=0
for i in range(0,n):
    arr.append(int(a[i]))
for i in range(0,n):
    if is_prime_number(arr[i])==True:
        cnt+=1
print(cnt)
