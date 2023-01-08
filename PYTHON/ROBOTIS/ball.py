ball_num=int(input())
ball=input()
ball=list(ball)
R=0;B=0;
R=ball.count('R')
B=ball.count('B')
right=0;left=0;

if R>B:
    least_ball=["B"]
elif R==B:
    least_ball=["R","B"]
else:
    least_ball=["R"]
we=0;df=0;
for d in range(0,1):
    bundle=0
    for i in range(0,ball_num):
        if ball[i]!=least_ball[d]:
            break
        bundle+=1
    for o in range(bundle,ball_num):
        if least_ball[d]==ball[o]:
            left+=1
    bundle=ball_num-1
    for w in range(ball_num-1,-1,-1):
        print(w)
        if ball[w]!=least_ball[d]:
            break
        bundle-=1
    for q in range(bundle,-1,-1):
        if least_ball[d]==ball[q]:
            right+=1
    if d==0 and right>=left:
        we=left
    else:
        we=right
    if d==1 and right>=left:
        df=left
    else:
        df=right
if we>=df:
    print(df)
else:
    print(we)

        ``