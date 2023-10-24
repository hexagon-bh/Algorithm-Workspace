n=int(input())
path=0
ma=1
lv=1
plus=6
while True:
    if ma>=n:
        print(lv)
        break
    ma+=plus
    plus+=6
    lv+=1