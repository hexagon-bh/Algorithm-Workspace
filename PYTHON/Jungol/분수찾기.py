num=int(input())
x=0;y=0
dia=1
max=0
while True:
    max=max+dia
    if max>=num:
        break
    else:
        dia+=1
min=max-(dia-1)
y=(dia-1)-(max-num)
x=(dia-1)-(num-min)
frac=str(y+1)+"/"+str(x+1)
print(frac)