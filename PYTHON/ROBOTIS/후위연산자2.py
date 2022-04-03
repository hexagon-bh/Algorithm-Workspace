from multiprocessing.reduction import duplicate
value=str(input())
list=value.split()
ma=len(list)
print(ma)
print(list)
#중복제거
dupli_list=[]
a=[]
for v in list:
    if v in list and v!="+" and v!="-" and v!="*" and v!="/" :
        a.append(str(v))
for v in a:
    if v not in dupli_list:
        dupli_list.append(v)
print(dupli_list)
#요소 개수
max=len(dupli_list)
#부호 빼기
list_number=[]
for i in range(0,max):
    value=int(input(dupli_list[i]+": "))
    list_number.append(value)
for j in range(0,max):
    for o in range(0,ma):
        if list[o]==dupli_list[j]:
            list[o]=list_number[j]
print(list)