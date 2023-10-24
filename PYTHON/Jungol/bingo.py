import random
check_player=[[0 for _ in range(5)] for _ in range(5)]
player1=[[0 for _ in range(5)] for _ in range(5)]
player2=[[0 for _ in range(5)] for _ in range(5)]
mc=[[0 for _ in range(5)] for _ in range(5)]
turn=0
def print_table(a):
    if a==1:
        for i in range(0,5):
            print(player1[i])
    if a==2:
        for i in range(0,5):
            print(mc[i])
def input_table():
    print("-----player1-----")
    for i in range(0,5):
        player1[i]=list(map(int,input().split()))
    print("-----player2-----")
    for i in range(0,5):
        player2[i]=list(map(int,input().split()))
    number_list=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25]
    random.shuffle(number_list)
    print("-----mc-----")
    n=0
    for j in range(0,5):
        for i in range(0,5):
            mc[j][i]=number_list[n]
            n+=1

input_table()
def bingo_checker():
    bingo=0
    for o in range(0,5):
        if player1[o][0]+player1[o][1]+player1[o][2]+player1[o][3]+player1[o][4]==0:
            bingo+=1
    for i in range(0,5):
        su=0
        for j in range(0,5):
            su=su+player1[j][i]
        if su==0:
            bingo+=1
    if player1[0][0]+player1[1][1]+player1[2][2]+player1[3][3]+player1[4][4]==0:
        bingo+=1
    if player1[0][4]+player1[1][3]+player1[2][2]+player1[3][1]+player1[4][0]==0:
        bingo+=1
    if bingo==3:
        return 1
    if bingo!=3:
        return 0      
def play_bingo(x,y):
    for i in range(0,5):
        for j in range(0,5):
            if mc[y][x]==player1[i][j]:
                player1[i][j]=0
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
