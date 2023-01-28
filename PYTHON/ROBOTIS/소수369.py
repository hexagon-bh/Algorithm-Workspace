sc,en,number=map(int,input().split())
def is_prime_number(x):
    if x==1:
        return False
    for i in range(2, x):
        if x % i == 0:
            return False 
    return True
number+=1
array=[]
i=number
while i<=en:
    array.append(i)
    i+=sc
cnt=0
for i in array:
    if is_prime_number(i)==True:
        cnt+=1
print(cnt)