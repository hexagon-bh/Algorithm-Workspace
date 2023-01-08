n=int(input())
original=n
cnt=0
while True:
    if cnt>0 and n==original:
        break
    ten=n//10
    one=n%10
    sum=ten+one
    s_ten=sum//10
    s_one=sum%10
    n=(one*10)+s_one
    cnt+=1
print(cnt)