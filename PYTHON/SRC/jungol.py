count=0
c=int(input())
white_paper=[[0 for _ in range(101)] for _ in range(101)]
paper_coo=[[0]*2 for  _ in range(c)]
for i in range(0,c):
    x,y=map(int,input().split())
    paper_coo[i][0]=x
    paper_coo[i][1]=y
for i in range(0,3):
    for q in range(paper_coo[i][0],paper_coo[i][0]+10):
        for w in range(paper_coo[i][1],paper_coo[i][1]+10):
            white_paper[w][q]=1
width=0
print(white_paper)
for row in white_paper:
    width+=row.count(1)
print(width)
