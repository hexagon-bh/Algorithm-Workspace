a=int(input())
a=str(a)
q=a
cycle=0
while True:
    t=list(str(q))
    a_len=len(t)
    a_len=a_len-1
    value=0
    for i in range(0,a_len+1):
        v=int(t[i])
        value=value+v
    b=list(str(value))
    b_len=len(b)
    b_len=b_len-1
    t=str(t[a_len]+b[b_len])
    q=t
    cycle=cycle+1
    if a==t:
        break
print(cycle)
    



