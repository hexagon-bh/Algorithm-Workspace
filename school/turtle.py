import turtle
t=turtle.Turtle()
t.shape("turtle")
t.pensize(10)
x=0
color=["skyblue","yellow","black","green","red"]
for i in range(0,5):
    if i==1 or i==3:
        y=-50
    else:
        y=0
    t.penup()
    t.color(color[i])
    x=i*60
    t.setposition(x,y)
    t.pendown()
    t.circle(50)
