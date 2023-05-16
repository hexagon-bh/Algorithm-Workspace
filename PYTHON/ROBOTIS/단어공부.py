word=input()
word=word.upper()
s_word=list(set(list(word)))
cnt=[]
for i in range(0,len(s_word)):
    cnt.append(word.count(s_word[i]))
m=max(cnt)
if cnt.count(m)>1:
    print('?')
else:
    print(s_word[cnt.index(m)])