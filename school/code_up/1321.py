a,b,c=map(int,input().split())
d=[]
cash=0
if a==b and b==c:
    cash=10000+a*1000
elif (a==b and b!=c) or (a==c and c!=b) or (b==c and c!=a):
    if a==b or a==c:
        cash=1000+a*100
    elif b==c:
        cash=1000+b*100
elif a!=b and b!=c:
    max_n=max(a,b,c)
    cash=max_n*100
print(cash)