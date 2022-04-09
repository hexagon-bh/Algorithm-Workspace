from hashlib import pbkdf2_hmac
from multiprocessing.reduction import duplicate
value=str(input())
list=value.split()
ma=len(list)
#중복제거
dupli_list=[]
a=[]
for v in list:
    if v in list and v!="+" and v!="-" and v!="*" and v!="/" :
        a.append(str(v))
for v in a:
    if v not in dupli_list:
        dupli_list.append(v)
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
while True:
    p=0
    for p in  range(0,ma):
        try: 
            ok=list[p].isalpha()
        except:
            pass
        else:
            break
    if list[p]=="+":
        result=int(list[p-2])+int(list[p-1])
        list[p]=result
        del  list[p-1]
        del list[p-2]
        ma=len(list)
        continue
    if list[p]=="-":
        result=int(list[p-2])-int(list[p-1])
        list[p]=result
        del  list[p-1]
        del list[p-2]
        ma=len(list)
        continue
    if list[p]=="*":
        result=int(list[p-2])*int(list[p-1])
        list[p]=result
        del  list[p-1]
        del list[p-2]
        ma=len(list)
        continue
    if list[p]=="/":
        result=int(list[p-2])/int(list[p-1])
        list[p]=result
        del  list[p-1]
        del list[p-2]
        ma=len(list)
        continue
    if ma==1:
        break
print(list)