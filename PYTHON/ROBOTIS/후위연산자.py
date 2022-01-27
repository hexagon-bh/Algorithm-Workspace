number=[]
result=0
number_lens=3
ok=False
while number_lens>1:
    t=input()
    is_an=t.isdigit()
    if is_an==True:
        number.append(t)
    elif is_an==False:
        ok=True
        number_len=len(number)-1
        if t=="+":
            result=int(number[number_len])+int(number[number_len-1])
        if t=="-":
            result=int(number[number_len])-int(number[number_len-1])
        if t=="*":
            result=int(number[number_len])*int(number[number_len-1])
        if t=="/":
            result=int(number[number_len])/int(number[number_len-1])
        del number[number_len]
        del number[number_len-1]
        number.append(result)
    if ok==True:
        number_lens=len(number)
print(number)