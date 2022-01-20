sdoku=[[5,3,0,0,7,0,0,0,0],
[6,0,0,1,9,5,0,0,0],
[0,9,8,0,0,0,0,6,0],
[8,0,0,0,6,0,0,0,3],
[4,0,0,8,0,3,0,0,1],
[7,0,0,0,2,0,0,0,6],
[0,6,0,0,0,0,2,8,0],
[0,0,0,4,1,9,0,0,5],
[0,0,0,0,8,0,0,7,9]]
number=[1,2,3,4,5,6,7,8,9]
number=set(number)

for j in range(9):
    for i in range(9):
        if sdoku[j][i]==0:
            t=set(sdoku[j])
            candidate=number-t
            y=j
            t=[]
            for y in range(9):
                t.append(sdoku[y][i])
            t=set(t)
            a=set(candidate)
            candidate=a-t
            print(candidate,"\n")
