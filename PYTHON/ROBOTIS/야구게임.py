from random import *
import sys
pc=[0,0,0,0]
user=[0,0,0,0]
strike=0
pc[0]=int(random()*9)+1
pc[1]=int(random()*9)+1
pc[2]=int(random()*9)+1
pc[3]=int(random()*9)+1
print(pc)
for i in range(4):
    user[i]=int(input())
    if user[i]>9:
        sys.exit()
for j in range(4):
    if pc[j]==user[j]:
        strike+=1
if strike<4:
    print(strike,"스트라이크")
elif strike==4:
    print("홈런")
