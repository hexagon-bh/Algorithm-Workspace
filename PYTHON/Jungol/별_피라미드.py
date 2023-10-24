a=int(input("스타 피라미드를 몇단으로 만들까요"))
for a in range(0,a-1):
    space=a-1
    print((" "*space)+"*")
    space-=1