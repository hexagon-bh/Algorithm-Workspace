N,W=map(int,input().split())
W=float(W)
jewel=[]
worth=[]
value=0
for i in range(0,N):
    jewel.append([0,0])
    jewel[i][0],jewel[i][1]=map(float,input().split())
    worth.append(jewel[i][1]/jewel[i][0])
print(jewel);print(worth)
while (1):
    m=max(worth)
    if int(jewel[worth.index(m)][0])<W:
        count=W//int(jewel[worth.index(m)][0])
        W=W-(count*int(jewel[worth.index(m)][0]))
        value=value+(jewel[worth.index(m)][1]*count)
        num=worth.index(m)
        del worth[num]
        del jewel[num]
    else:
        num=worth.index(m)
        del worth[num]
        del jewel[num]
        break
print(int(value))