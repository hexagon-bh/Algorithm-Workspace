import os
subject=[0,0,0,0,0,0,0]
total=0;avg=0;max=0;min=0;
for i in range(0,7):
    subject[i]=int(input())
    total=total+subject[i]
avg=total/7
max=subject[0];min=subject[0]
for i in range(1,7):
    if (subject[i]>max):
        max=subject[i]
for i in range(1,7):
    if (subject[i]<min):
        min=subject[i]
subject.append(avg)
subject.append(max)
subject.append(min)
#그래프 그리기
os.system("cls")
print("Total: %d"%total)
print("Average: %d"%avg)
print("max: %d"%max)
print("min: %d"%min)
line=""
for i in range(10,0,-1):
    line=str(i*10)
    if i<10:
        line=" "+line
    line=" "+line
    for j in range(0,10):
        if (subject[j]/10)>=i:
            line=line+"* "
        else:
            line=line+"  "
    print(line)
print("   A B C D E F G H I J")
