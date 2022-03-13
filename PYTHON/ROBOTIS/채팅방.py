import os
from time import sleep
name_list=[""]
os.system("cls")
print("Chatting Room에 입장하시겠습니까? [Yes:1 / No:0]")
entrence=int(input('\033[33m' + "USER : "+'\033[32m'))
if entrence==1: 
    os.system("cls")
    print("welcome to Chatting Room\n")
    sleep(1)
    while 1:
        command=input('\033[33m' + "USER : "+'\033[37m')
        if command=="entrence":
            print('\033[34m'+"PC :" + '\033[37m' + "채팅방에 오신것을 환영합니다."+'\033[0m');sleep(1)
            print ('\033[34m' + "PC :" + '\033[37m' + "당신의 닉네을 입력해주세요.");sleep(1)
            name=input('\033[33m' + "USER : "+'\033[37m');sleep(1)
            name_list.append(name)
            print('\033[34m'+"PC :"+'\033[33m'+name+'\033[37m' + "채팅방에 입장하셨습니다."+'\033[0m');sleep(1)
        if command=="exit":
            print ('\033[34m' + "PC :" + '\033[37m' + "퇴장할 사람의 닉네을 입력해주세요.");sleep(1)
            name=input('\033[33m' + "USER : "+'\033[37m');sleep(1)
            list_number=len(name_list)
            str(list_number)
            for i in range(0,list_number-1):
                if name_list[i]==name:
                    del name_list[i]
        if command=='list':
            list_number=len(name_list)
            str(list_number)
            for t in range(1,list_number-1):
                print(name_list[t])
elif entrence==0:
    print("shutdown")
