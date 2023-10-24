n=int(input())
for i in reversed(range(0,n)):
    star=2*(n-i)-1
    print(' '*i+'*'*star)
for i in range(2,n+1):
    star=2*(n-i)+1
    print(' '*(i-1)+'*'*star)
