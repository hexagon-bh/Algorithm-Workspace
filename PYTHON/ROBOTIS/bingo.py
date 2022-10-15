player=[[0 for _ in range(6)] for _ in range(6)]
mc=[[0 for _ in range(6)] for _ in range(6)]
turn=0
def print_table(a):
    if a==1:
        for i in range(0,5):
            print(player[i])
    if a==2:
        for i in range(0,5):
            print(mc[i])
def input_table():
    print("-----player-----")
    for i in range(0,5):
        player[i]=list(map(int,input().split()))
    print("-----mc-----")
    for j in range(0,5):
        mc[j]=list(map(int,input().split()))
input_table()
def bingo_checker():
    bingo=0
    for o in range(0,5):
        if player[o][0]+player[o][1]+player[o][2]+player[o][3]+player[o][4]==0:
            bingo+=1
    for i in range(0,5):
        su=0
        for j in range(0,5):
            su=su+player[j][i]
        if su==0:
            bingo+=1
    if player[0][0]+player[1][1]+player[2][2]+player[3][3]+player[4][4]==0:
        bingo+=1
    if player[0][4]+player[1][3]+player[2][2]+player[3][1]+player[4][0]==0:
        bingo+=1
    if bingo==3:
        return 1
    if bingo!=3:
        return 0      
def play_bingo(x,y):
    for i in range(0,5):
        for j in range(0,5):
            if mc[y][x]==player[i][j]:
                player[i][j]=0
    a=bingo_checker()
    if a==1:
        print("bingo!!!\nturn:%d"%turn)
        print_table(1)
        return 0
for i in range(0,5):
    for j in range(0,5):
        turn+=1
        t=play_bingo(j,i)
        if t==0:
            quit()
