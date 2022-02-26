import random
pc=[0,0,0,0,0,0]
user=[0,0,0,0,0,0]
for i in range(0,6):
    pc[i]=random.randint(1,45)
    while 1:
        ok=0
        for j in range(0,i):
            if pc[j]==pc[i]:
                ok+=1
        if ok>0:
            pc[i]=random.randint(1,45)
        if ok==0:
            break
print("pc: ",pc)
user[0]=int(input("user-1: "))
user[1]=int(input("user-2: "))
user[2]=int(input("user-3: "))
user[3]=int(input("user-4: "))
user[4]=int(input("user-5: "))
user[5]=int(input("user-6: "))
print("user: ",user)
a=0
for o in range(0,6):
    if user[o]==pc[o]:
        a+=1
if a==4:
   print("3등")
if a==5:
    print("2등")
if a==6:
    print("1등")
if a<4:
	print("꽝")
