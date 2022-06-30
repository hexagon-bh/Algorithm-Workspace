a=int(input())
book=[]
count=[]
for i in range(0,a):
    c=input()
    book.append(c)
b=set(book)
b=list(b)
n=len(b)
for o in range(0,n):
    value=book.count(b[o])
    count.append(value)
ma=max(count)
d=count.index(ma)
print("\n")
print(b[d])