n=int(input())
list=[]
cnt=0
for j in range(1,n):
    for x in range(j):
        if cnt<n:
            list.append(j)
            print(list)
            cnt+=1
        if cnt==n:
            print(list[-1])
            quit()

