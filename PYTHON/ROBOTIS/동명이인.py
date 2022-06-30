from datetime import datetime
start_time = datetime.now()
name=['Tom','Jerry','Mike','Tom','Mike','Jinho','김강현','이재준','이재준','탐']
j_name=set(name);redundancy=[];not_redundancy=[]
for i in j_name:
    a=name.count(i)
    if a==1:
        not_redundancy.append(i)
    elif a>=2:
        value=i+": "+str(a)
        redundancy.append(value)
print("동명이인 명단: ",redundancy)
print("중복되지 않는 이름의 명단: ",not_redundancy)  
end_time = datetime.now()
elapsed_time = end_time - start_time
print(elapsed_time)