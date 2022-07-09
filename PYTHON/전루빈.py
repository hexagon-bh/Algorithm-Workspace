word=input()
noec=[]
word=word.lower()
word=list(word)
s_word=set(word)
s_word=list(s_word)
length=len(s_word)
for i in range(0,length):
    t=word.count(s_word[i])
    noec.append(int(t))
b=max(noec)
if noec.count(b)>1:
    print("?")
else:
    ma=max(noec)
    value=noec.index(ma)
    answer=s_word[value]
    answer=answer.upper()
    print(answer)