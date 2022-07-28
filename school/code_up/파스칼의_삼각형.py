a=int(input())
line=[1,1]
next_line=[]

for i in range(2,a+1):
    next_line=line
    next_line.pop()
    m=len(line)-1
    for o in range(0,m):
        next_line.append(line[o])
    print(next_line)
