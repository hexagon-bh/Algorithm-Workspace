sum=0
ma=0
ans=0
m_list=[]
n=int(input())
arr=list(map(int,input().split()))
for i in range(0,n):
    sum+=arr[i]
    if sum<0:
        sum=0
    if ma<sum:
        ma=sum
        m_list.append(ma)
m_len=len(m_list)-1
m_list.sort()
print(m_list[m_len])